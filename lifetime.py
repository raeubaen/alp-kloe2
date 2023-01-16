import ROOT
from array import array

outf = ROOT.TFile("out_lifetime.root", "recreate")

pi = ROOT.TMath.Pi()
h = 6.6 * 1e-16 #ev/s

n_bins_g = 20
n_bins_m = 20
min_g = 1e-5 #Gev^-1
max_g = 5e-2 #Gev^-1
min_m = 1e-3 # GeV
max_m = 1e1 #GeV

g_step = (max_g/min_g)**(1/n_bins_g)
g_bin = [min_g*g_step**i for i in range(n_bins_g+1)]
m_step = (max_m/min_m)**(1/n_bins_m)
m_bin = [min_m*m_step**i for i in range(n_bins_m+1)]

h_width = ROOT.TH2F("width", "gamma_ev", n_bins_m, array("f", m_bin), n_bins_g, array("f", g_bin))
h_tau = ROOT.TH2F("tau", "tau_ns", n_bins_m, array("f", m_bin), n_bins_g, array("f", g_bin))
h_l = ROOT.TH2F("l", "l_mm", n_bins_m, array("f", m_bin), n_bins_g, array("f", g_bin))

for n_bin_g in range(n_bins_g):
  for n_bin_m in range(n_bins_m):
    g = g_bin[n_bin_g]
    m = m_bin[n_bin_m]

    if m >= 1.020: continue

    lorentz_gamma = (1.020**2 + m**2)/(2*1.020*m)
    lorentz_beta = (1 - lorentz_gamma**-2)**0.5

    width = g**2 * m**3 / (64 * pi) * 1e9 #ev
    tau = h/width * lorentz_gamma * 1e9 #ns


    l = lorentz_beta * tau * 300  #mm

    h_width.SetBinContent(n_bin_m, n_bin_g, width)
    h_tau.SetBinContent(n_bin_m, n_bin_g, tau)
    h_l.SetBinContent(n_bin_m, n_bin_g, l)

h_width.Write()
h_tau.Write()
h_l.Write()

outf.Close()
