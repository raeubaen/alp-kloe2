#define ALP_cxx
#include "ALP.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void ALP::Loop()
{
  if (fChain == 0) return;
  
  Long64_t nentries = fChain->GetEntriesFast();
  TH1F *NumComb = new TH1F("NumComb","NumComb",40,0.,40.);
  
  TH1F *chi2 = new TH1F("chi2","chi2",100,0.,100.);
  TH1F *Mpi = new TH1F("Mpi","Mpi",200,0.,1000.);
  
  TH1F *MpiNOPIETA = new TH1F("MpiNOPIETA","MpiNOPIETA",510,0.,1020);
  TH1F *MpiNOPIETA_thecut = new TH1F("MpiNOPIETA_thecut","MpiNOPIETA_thecut",510,0.,1020);
  TH1F *ErecNOPIETA = new TH1F("ErecNOPIETA","ErecNOPIETA",510,0.,510.);
  TH1F *CostheNOPIETA = new TH1F("CostheNOPIETA","CostheNOPIETA",100,-1.,1.);

  TH1F *MpiPIETA = new TH1F("MpiPIETA","MpiPIETA",510,0.,1020);
  TH1F *MpiPIETA_thecut = new TH1F("MpiPIETA_thecut","MpiPIETA_thecut",510,0.,1020);
  TH1F *ErecPIETA = new TH1F("ErecPIETA","ErecPIETA",510,0.,510.);
  TH1F *CosthePIETA = new TH1F("CosthePIETA","CosthePIETA",100,-1.,1.);
   
  TH1F *CostheMass = new TH1F("CostheMass","CostheMass",100,-1.,1.);
  TH1F *CostheNomass = new TH1F("CostheNomass","CostheNomass",100,-1.,1.);
  
  TH1F *Erecoil = new TH1F("Erecoil","Erecoil",1000,0.,1000.);
  TH1F *Erecoil_res= new TH1F("Erecoil_res","Erecoil_res",100,-200.,200.);
  TH2F *Erecmpi = new TH2F("Erecmpi","Erecmpi",200,0.,1000.,500,0.,1000.);
  
  TH2F *pippo = new TH2F("pippo","pippo",100,0.,800.,100,0.,800.);
  TH2F *pippo2= new TH2F("pippo2","pippo2",100,0.,800.,100,0.,800.);

  TH1F *enebha = new TH1F("enebha","enebha",500,0.,500.);
  TH1F *eneeca = new TH1F("eneeca","eneeca",500,0.,500.);
    
  Long64_t nbytes = 0, nb = 0;
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
  //for (Long64_t jentry=0; jentry<50000;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;
    
    Float_t EneclT = 0.;
    Float_t Rcl = 0.;
    Float_t Rcl_xy = 0.;
    TVector3 cluster_pos;
    TVector3 gGamma_fit;
    Float_t Tdiffcl;
    int i = 0; 
    int j = 0;
    const int nvars = 5; //kinematic variables
    int ngammas;
    float Vlight=30.;
    float gE[3];
    float gPx[3],gPy[3],gPz[3];
    
    assert(nclu >=0);
    ngammas = 3;
    
    for(i = 0; i < ngammas; i++){
      
      Tdiffcl=0;      
      cluster_pos.SetXYZ(fit_par[nvars*i + 1],
			 fit_par[nvars*i+2],
			 fit_par[nvars*i+3]);
      Rcl = TMath::Sqrt(TMath::Power(cluster_pos.X(), 2) +
			TMath::Power(cluster_pos.Y(), 2) +
			TMath::Power(cluster_pos.Z(), 2));
      Rcl_xy = TMath::Sqrt(TMath::Power(cluster_pos.X(), 2) +
			   TMath::Power(cluster_pos.Y(), 2));
      
      EneclT = EneclT + fit_par[nvars*i+0];
      
      Tdiffcl = Tcl[nvars*i+4] - Rcl/Vlight;
      gE[i]  = fit_par[nvars*i+0];	  
      gPx[i] = fit_par[nvars*i+0]*cluster_pos.X()/(Rcl);
      gPy[i] = fit_par[nvars*i+0]*cluster_pos.Y()/(Rcl);
      gPz[i] = fit_par[nvars*i+0]*cluster_pos.Z()/(Rcl);	  
      
    } //loop over prompt photons
    
    if( ngammas>3)return; // By construction we look only to 3 gamma's ntuple
    
    //if(Brootserr>0.2) return;
    //cout << " Brootserr " << Brootserr << endl;
    
    if( fit_chi2<30 ){
      float minlo,minv[3];
      float Erec = 0;
      int nfound=0;
      int etapifound = 0;
      int costhebound = 0;
      
      // Loop on pair of gammas (1-2, 1-3, 2-3);
      float costheta,costhetarec;
      
      int NumCombWithMass =0;
      float Mpicomb[3];
      float Ereccomb[3];
      float Costhecomb[3];
      
      for(int j=0; j<ngammas-1; j++){
	for (int k=j+1; k<ngammas; k++){
	  int thisloop =0;
	  float E12 = gE[j]+gE[k];
	  float PX12 = gPx[j]+gPx[k];
	  float PY12 = gPy[j]+gPy[k];
	  float PZ12 = gPz[j]+gPz[k];
	  minlo = pow(E12,2)-pow(PX12,2)-pow(PY12,2)-pow(PZ12,2);
	  if( minlo > 0 ){
	   
	    minlo = sqrt(minlo);
	    minv[nfound] = minlo;
	    Mpi->Fill(minv[nfound]);
	    nfound++;
	    if( minlo>114 && minlo < 147){
	      etapifound=1;
	      thisloop = 1;
	    }
	    if( minlo>518 && minlo < 574){
	      etapifound=2;
	      thisloop = 2;
	    }
	    costheta = PZ12/E12;
	    //cout << "j-k" << j << " " << k << " Mjk " << minlo << endl;
	    Erec = Broots*Broots-minlo*minlo;
	    Erec = Erec/(2*Broots);
	    Erecoil->Fill(Erec);
	    Erecmpi->Fill(minlo,Erec);
	    int jrec;
	    if(j==0 && k == 1 ) jrec = 2;
	    if(j==0 && k == 2 ) jrec = 1;
	    if(j==1 && k == 2 ) jrec = 0;
	    costhetarec = gPz[jrec]/gE[jrec];
	    CostheNomass->Fill(costhetarec);
	    if( thisloop > 0 ){
	      CostheMass->Fill(costhetarec);
	    }else{
	      CostheNomass->Fill(costhetarec);
	    }
	    if( abs(costhetarec)> 0.85) costhebound = 1;
	    Mpicomb[NumCombWithMass] = minlo;
	    Ereccomb[NumCombWithMass] = Erec;
	    Costhecomb[NumCombWithMass] = costhetarec;
	    NumCombWithMass ++;
	  }
	}
	
	float NumCombFlag = NumCombWithMass*10+etapifound;
	NumComb->Fill(NumCombFlag);
	for (int jc =0; jc< NumCombWithMass; jc++){
	  if( etapifound == 0){
	    MpiNOPIETA->Fill(Mpicomb[jc]);
	    CostheNOPIETA->Fill(Costhecomb[jc]);
	    ErecNOPIETA->Fill(Ereccomb[jc]);
	    if( costhebound == 0 ){
	      MpiNOPIETA_thecut->Fill(Mpicomb[jc]);
	    }	    
	  }else if (etapifound > 0 ){
	    MpiPIETA->Fill(Mpicomb[jc]);
	    CosthePIETA->Fill(Costhecomb[jc]);
	    ErecPIETA->Fill(Ereccomb[jc]);
	    if( costhebound == 0 ){
	      MpiPIETA_thecut->Fill(Mpicomb[jc]);
	    }	   
	  }
	}
		
      }
      chi2->Fill(fit_chi2);
      //------------------------------------------
      // Check that all gammas are matched with 
      // a correct cluster
      // -----------------------------------------
      for(int i = 0; i< ngammas ; i++){
	float prosca, proscamax;
	proscamax = 0;
	int jmin;
	for (int j = 0; j < nclu ; j++){
	  prosca = gPx[i]*Xcl[j]+ gPy[i]*Ycl[j]+gPz[i]*Zcl[j];
	  prosca = prosca/gE[i]/sqrt( pow(Xcl[j],2) +
				      pow(Ycl[j],2) +
				      pow(Zcl[j],2) );
	  if( prosca > proscamax && prosca <=1){
	    proscamax = prosca;
	    jmin = j;
	  }
	}
	//	cout << " proscamax " << proscamax << " jmin " << jmin << endl;
	//cout << " i " << i << " E " << gE[i] << " ene " << Enecl[jmin] << " Chi2 " << fit_chi2 << endl;
	pippo->Fill(gE[i],Enecl[jmin]);
	if( etapifound > 0 ){
	  pippo2->Fill(gE[i],Enecl[jmin]);
	  float Rtclu;
	  Rtclu = sqrt(pow(Xcl[jmin],2)+pow(Ycl[jmin],2));
	  if( Rtclu >= 200){
	    enebha->Fill(Enecl[jmin]);
	  }else if (Rtclu < 200){
	    eneeca->Fill(Enecl[jmin]);
	  }
	}
      }
    }
  }	
  
  TCanvas *c = new TCanvas("c","c");
  c->Divide(2,2);
  c->cd(1);
  Erecmpi->Draw("zcol");
  c->cd(2);
  Erecoil->Draw("zcol");
  c->cd(3);
  Mpi->Draw();
  c->cd(4);
  chi2->Draw();
  
  TCanvas *c1 = new TCanvas("c1","c1");
  c1->Divide(1,2);
  c1->cd(1);
  enebha->Draw("e");
  c1->cd(2);
  eneeca->Draw("e");
  
  
}
