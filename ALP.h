//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Nov 26 14:52:32 2021 by ROOT version 6.20/04
// from TTree h1/prodV3.0
// found on file: noThetaCut_all-KinFit-noThetaCut_prompt-chain_root_dbv40.root
//////////////////////////////////////////////////////////

#ifndef ALP_h
#define ALP_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class ALP {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           nrun;
   Int_t           nev;
   Float_t         t0clu0;
   Float_t         T0step1;
   Int_t           Timesec;
   Int_t           Timemusec;
   Float_t         Bpx;
   Float_t         Bpy;
   Float_t         Bpz;
   Float_t         Bx;
   Float_t         By;
   Float_t         Bz;
   Float_t         Bwidpx;
   Float_t         Bwidpy;
   Float_t         Bwidpz;
   Float_t         Bsx;
   Float_t         Bsy;
   Float_t         Bsz;
   Float_t         Blumx;
   Float_t         Blumz;
   Float_t         Broots;
   Float_t         Brootserr;
   Int_t           necls;
   Int_t           Ecltrgw;
   Int_t           Eclfilfo;
   Int_t           Eclword[8];   //[necls]
   Int_t           Eclstream[8];   //[necls]
   Int_t           Ecltagnum[8];   //[necls]
   Int_t           Eclevtype[8];   //[necls]
   Int_t           necls2;
   Int_t           Ecltrgw2;
   Int_t           Eclfilfo2;
   Int_t           Eclword2[8];   //[necls2]
   Int_t           Eclstream2[8];   //[necls2]
   Int_t           Ecltagnum2[8];   //[necls2]
   Int_t           Eclevtype2[8];   //[necls2]
   Int_t           trgw1;
   Int_t           trgw2;
   Int_t           nclu;
   Float_t         Enecl[100];   //[nclu]
   Float_t         Tcl[100];   //[nclu]
   Float_t         Xcl[100];   //[nclu]
   Float_t         Ycl[100];   //[nclu]
   Float_t         Zcl[100];   //[nclu]
   Float_t         Xrmcl[100];   //[nclu]
   Float_t         Yrmscl[100];   //[nclu]
   Float_t         Zrmscl[100];   //[nclu]
   Float_t         Trmscl[100];   //[nclu]
   Int_t           Flagcl[100];   //[nclu]
   Int_t           nchit;
   Int_t           iclu[2000];   //[nchit]
   Int_t           icel[2000];   //[nchit]
   Int_t           Cadd[2000];   //[nchit]
   Float_t         Ene[2000];   //[nchit]
   Float_t         T[2000];   //[nchit]
   Float_t         x[2000];   //[nchit]
   Float_t         y[2000];   //[nchit]
   Float_t         z[2000];   //[nchit]
   Int_t           nt;
   Float_t         Cur[100];   //[nt]
   Float_t         Phi[100];   //[nt]
   Float_t         Cot[100];   //[nt]
   Float_t         pxt[100];   //[nt]
   Float_t         pyt[100];   //[nt]
   Float_t         pzt[100];   //[nt]
   Float_t         pmod[100];   //[nt]
   Float_t         len[100];   //[nt]
   Float_t         xfirst[100];   //[nt]
   Float_t         yfirst[100];   //[nt]
   Float_t         zfirst[100];   //[nt]
   Float_t         xlast[100];   //[nt]
   Float_t         ylast[100];   //[nt]
   Float_t         zlast[100];   //[nt]
   Int_t           ntcl;
   UShort_t        Asstr[40];   //[ntcl]
   UChar_t         Asscl[40];   //[ntcl]
   Int_t           verver[40];   //[ntcl]
   Float_t         xext[40];   //[ntcl]
   Float_t         yext[40];   //[ntcl]
   Float_t         zext[40];   //[ntcl]
   Float_t         Assleng[40];   //[ntcl]
   Float_t         Asschi[40];   //[ntcl]
   Float_t         extpx[40];   //[ntcl]
   Float_t         extpy[40];   //[ntcl]
   Float_t         extpz[40];   //[ntcl]
   Int_t           par_num;
   Float_t         fit_par[20];   //[par_num]
   Float_t         fit_err[20];   //[par_num]
   Int_t           num_iter;
   Float_t         fit_chi2;

   // List of branches
   TBranch        *b_nrun;   //!
   TBranch        *b_nev;   //!
   TBranch        *b_t0clu0;   //!
   TBranch        *b_T0step1;   //!
   TBranch        *b_Timesec;   //!
   TBranch        *b_Timemusec;   //!
   TBranch        *b_Bpx;   //!
   TBranch        *b_Bpy;   //!
   TBranch        *b_Bpz;   //!
   TBranch        *b_Bx;   //!
   TBranch        *b_By;   //!
   TBranch        *b_Bz;   //!
   TBranch        *b_Bwidpx;   //!
   TBranch        *b_Bwidpy;   //!
   TBranch        *b_Bwidpz;   //!
   TBranch        *b_Bsx;   //!
   TBranch        *b_Bsy;   //!
   TBranch        *b_Bsz;   //!
   TBranch        *b_Blumx;   //!
   TBranch        *b_Blumz;   //!
   TBranch        *b_Broots;   //!
   TBranch        *b_Brootserr;   //!
   TBranch        *b_necls;   //!
   TBranch        *b_Ecltrgw;   //!
   TBranch        *b_Eclfilfo;   //!
   TBranch        *b_Eclword;   //!
   TBranch        *b_Eclstream;   //!
   TBranch        *b_Ecltagnum;   //!
   TBranch        *b_Eclevtype;   //!
   TBranch        *b_necls2;   //!
   TBranch        *b_Ecltrgw2;   //!
   TBranch        *b_Eclfilfo2;   //!
   TBranch        *b_Eclword2;   //!
   TBranch        *b_Eclstream2;   //!
   TBranch        *b_Ecltagnum2;   //!
   TBranch        *b_Eclevtype2;   //!
   TBranch        *b_trgw1;   //!
   TBranch        *b_trgw2;   //!
   TBranch        *b_nclu;   //!
   TBranch        *b_Enecl;   //!
   TBranch        *b_Tcl;   //!
   TBranch        *b_Xcl;   //!
   TBranch        *b_Ycl;   //!
   TBranch        *b_Zcl;   //!
   TBranch        *b_Xrmcl;   //!
   TBranch        *b_Yrmscl;   //!
   TBranch        *b_Zrmscl;   //!
   TBranch        *b_Trmscl;   //!
   TBranch        *b_Flagcl;   //!
   TBranch        *b_nchit;   //!
   TBranch        *b_iclu;   //!
   TBranch        *b_icel;   //!
   TBranch        *b_Cadd;   //!
   TBranch        *b_Ene;   //!
   TBranch        *b_T;   //!
   TBranch        *b_x;   //!
   TBranch        *b_y;   //!
   TBranch        *b_z;   //!
   TBranch        *b_nt;   //!
   TBranch        *b_Cur;   //!
   TBranch        *b_Phi;   //!
   TBranch        *b_Cot;   //!
   TBranch        *b_pxt;   //!
   TBranch        *b_pyt;   //!
   TBranch        *b_pzt;   //!
   TBranch        *b_pmod;   //!
   TBranch        *b_len;   //!
   TBranch        *b_xfirst;   //!
   TBranch        *b_yfirst;   //!
   TBranch        *b_zfirst;   //!
   TBranch        *b_xlast;   //!
   TBranch        *b_ylast;   //!
   TBranch        *b_zlast;   //!
   TBranch        *b_ntcl;   //!
   TBranch        *b_Asstr;   //!
   TBranch        *b_Asscl;   //!
   TBranch        *b_verver;   //!
   TBranch        *b_xext;   //!
   TBranch        *b_yext;   //!
   TBranch        *b_zext;   //!
   TBranch        *b_Assleng;   //!
   TBranch        *b_Asschi;   //!
   TBranch        *b_extpx;   //!
   TBranch        *b_extpy;   //!
   TBranch        *b_extpz;   //!
   TBranch        *b_par_num;   //!
   TBranch        *b_fit_par;   //!
   TBranch        *b_fit_err;   //!
   TBranch        *b_num_iter;   //!
   TBranch        *b_fit_chi2;   //!

   ALP(TTree *tree=0);
   virtual ~ALP();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef ALP_cxx
ALP::ALP(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("../noThetaCut_all-KinFit-noThetaCut_prompt-chain_root_dbv40.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("../noThetaCut_all-KinFit-noThetaCut_prompt-chain_root_dbv40.root");
      }
      f->GetObject("h1",tree);

   }
   Init(tree);
}

ALP::~ALP()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t ALP::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t ALP::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void ALP::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("nrun", &nrun, &b_nrun);
   fChain->SetBranchAddress("nev", &nev, &b_nev);
   fChain->SetBranchAddress("t0clu0", &t0clu0, &b_t0clu0);
   fChain->SetBranchAddress("T0step1", &T0step1, &b_T0step1);
   fChain->SetBranchAddress("Timesec", &Timesec, &b_Timesec);
   fChain->SetBranchAddress("Timemusec", &Timemusec, &b_Timemusec);
   fChain->SetBranchAddress("Bpx", &Bpx, &b_Bpx);
   fChain->SetBranchAddress("Bpy", &Bpy, &b_Bpy);
   fChain->SetBranchAddress("Bpz", &Bpz, &b_Bpz);
   fChain->SetBranchAddress("Bx", &Bx, &b_Bx);
   fChain->SetBranchAddress("By", &By, &b_By);
   fChain->SetBranchAddress("Bz", &Bz, &b_Bz);
   fChain->SetBranchAddress("Bwidpx", &Bwidpx, &b_Bwidpx);
   fChain->SetBranchAddress("Bwidpy", &Bwidpy, &b_Bwidpy);
   fChain->SetBranchAddress("Bwidpz", &Bwidpz, &b_Bwidpz);
   fChain->SetBranchAddress("Bsx", &Bsx, &b_Bsx);
   fChain->SetBranchAddress("Bsy", &Bsy, &b_Bsy);
   fChain->SetBranchAddress("Bsz", &Bsz, &b_Bsz);
   fChain->SetBranchAddress("Blumx", &Blumx, &b_Blumx);
   fChain->SetBranchAddress("Blumz", &Blumz, &b_Blumz);
   fChain->SetBranchAddress("Broots", &Broots, &b_Broots);
   fChain->SetBranchAddress("Brootserr", &Brootserr, &b_Brootserr);
   fChain->SetBranchAddress("necls", &necls, &b_necls);
   fChain->SetBranchAddress("Ecltrgw", &Ecltrgw, &b_Ecltrgw);
   fChain->SetBranchAddress("Eclfilfo", &Eclfilfo, &b_Eclfilfo);
   fChain->SetBranchAddress("Eclword", Eclword, &b_Eclword);
   fChain->SetBranchAddress("Eclstream", Eclstream, &b_Eclstream);
   fChain->SetBranchAddress("Ecltagnum", Ecltagnum, &b_Ecltagnum);
   fChain->SetBranchAddress("Eclevtype", Eclevtype, &b_Eclevtype);
   fChain->SetBranchAddress("necls2", &necls2, &b_necls2);
   fChain->SetBranchAddress("Ecltrgw2", &Ecltrgw2, &b_Ecltrgw2);
   fChain->SetBranchAddress("Eclfilfo2", &Eclfilfo2, &b_Eclfilfo2);
   fChain->SetBranchAddress("Eclword2", Eclword2, &b_Eclword2);
   fChain->SetBranchAddress("Eclstream2", Eclstream2, &b_Eclstream2);
   fChain->SetBranchAddress("Ecltagnum2", Ecltagnum2, &b_Ecltagnum2);
   fChain->SetBranchAddress("Eclevtype2", Eclevtype2, &b_Eclevtype2);
   fChain->SetBranchAddress("trgw1", &trgw1, &b_trgw1);
   fChain->SetBranchAddress("trgw2", &trgw2, &b_trgw2);
   fChain->SetBranchAddress("nclu", &nclu, &b_nclu);
   fChain->SetBranchAddress("Enecl", Enecl, &b_Enecl);
   fChain->SetBranchAddress("Tcl", Tcl, &b_Tcl);
   fChain->SetBranchAddress("Xcl", Xcl, &b_Xcl);
   fChain->SetBranchAddress("Ycl", Ycl, &b_Ycl);
   fChain->SetBranchAddress("Zcl", Zcl, &b_Zcl);
   fChain->SetBranchAddress("Xrmcl", Xrmcl, &b_Xrmcl);
   fChain->SetBranchAddress("Yrmscl", Yrmscl, &b_Yrmscl);
   fChain->SetBranchAddress("Zrmscl", Zrmscl, &b_Zrmscl);
   fChain->SetBranchAddress("Trmscl", Trmscl, &b_Trmscl);
   fChain->SetBranchAddress("Flagcl", Flagcl, &b_Flagcl);
   fChain->SetBranchAddress("nchit", &nchit, &b_nchit);
   fChain->SetBranchAddress("iclu", iclu, &b_iclu);
   fChain->SetBranchAddress("icel", icel, &b_icel);
   fChain->SetBranchAddress("Cadd", Cadd, &b_Cadd);
   fChain->SetBranchAddress("Ene", Ene, &b_Ene);
   fChain->SetBranchAddress("T", T, &b_T);
   fChain->SetBranchAddress("x", x, &b_x);
   fChain->SetBranchAddress("y", y, &b_y);
   fChain->SetBranchAddress("z", z, &b_z);
   fChain->SetBranchAddress("nt", &nt, &b_nt);
   fChain->SetBranchAddress("Cur", Cur, &b_Cur);
   fChain->SetBranchAddress("Phi", Phi, &b_Phi);
   fChain->SetBranchAddress("Cot", Cot, &b_Cot);
   fChain->SetBranchAddress("pxt", pxt, &b_pxt);
   fChain->SetBranchAddress("pyt", pyt, &b_pyt);
   fChain->SetBranchAddress("pzt", pzt, &b_pzt);
   fChain->SetBranchAddress("pmod", pmod, &b_pmod);
   fChain->SetBranchAddress("len", len, &b_len);
   fChain->SetBranchAddress("xfirst", xfirst, &b_xfirst);
   fChain->SetBranchAddress("yfirst", yfirst, &b_yfirst);
   fChain->SetBranchAddress("zfirst", zfirst, &b_zfirst);
   fChain->SetBranchAddress("xlast", xlast, &b_xlast);
   fChain->SetBranchAddress("ylast", ylast, &b_ylast);
   fChain->SetBranchAddress("zlast", zlast, &b_zlast);
   fChain->SetBranchAddress("ntcl", &ntcl, &b_ntcl);
   fChain->SetBranchAddress("Asstr", Asstr, &b_Asstr);
   fChain->SetBranchAddress("Asscl", Asscl, &b_Asscl);
   fChain->SetBranchAddress("verver", verver, &b_verver);
   fChain->SetBranchAddress("xext", xext, &b_xext);
   fChain->SetBranchAddress("yext", yext, &b_yext);
   fChain->SetBranchAddress("zext", zext, &b_zext);
   fChain->SetBranchAddress("Assleng", Assleng, &b_Assleng);
   fChain->SetBranchAddress("Asschi", Asschi, &b_Asschi);
   fChain->SetBranchAddress("extpx", extpx, &b_extpx);
   fChain->SetBranchAddress("extpy", extpy, &b_extpy);
   fChain->SetBranchAddress("extpz", extpz, &b_extpz);
   fChain->SetBranchAddress("par_num", &par_num, &b_par_num);
   fChain->SetBranchAddress("fit_par", fit_par, &b_fit_par);
   fChain->SetBranchAddress("fit_err", fit_err, &b_fit_err);
   fChain->SetBranchAddress("num_iter", &num_iter, &b_num_iter);
   fChain->SetBranchAddress("fit_chi2", &fit_chi2, &b_fit_chi2);
   Notify();
}

Bool_t ALP::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void ALP::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t ALP::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef ALP_cxx
