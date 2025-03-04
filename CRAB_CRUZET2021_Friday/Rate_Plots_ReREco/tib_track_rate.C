void tib_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sat Oct  2 22:02:28 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(342341.4,-0.8368436,344951,5.629674);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.1883886);
   c1->SetRightMargin(0.03909953);
   c1->SetTopMargin(0.0875817);
   c1->SetBottomMargin(0.1294118);
   c1->SetFrameLineWidth(3);
   c1->SetFrameBorderMode(0);
   c1->SetFrameLineWidth(3);
   c1->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1007[158] = {
   343001,
   343005,
   343007,
   343009,
   343018,
   343025,
   343034,
   343042,
   343045,
   343046,
   343059,
   343068,
   343070,
   343080,
   343082,
   343164,
   343167,
   343169,
   343170,
   343171,
   343259,
   343260,
   343266,
   343268,
   343375,
   343380,
   343385,
   343386,
   343387,
   343484,
   343494,
   343496,
   343498,
   343501,
   343609,
   343619,
   343621,
   343623,
   343625,
   343627,
   343629,
   343638,
   343640,
   343642,
   343644,
   343646,
   343648,
   343650,
   343652,
   343663,
   343668,
   343673,
   343677,
   343680,
   343762,
   343763,
   343767,
   343769,
   343772,
   343774,
   343854,
   343860,
   343862,
   343864,
   343866,
   343921,
   343923,
   343925,
   343927,
   343928,
   343932,
   343934,
   343936,
   343937,
   343993,
   344001,
   344049,
   344058,
   344062,
   344063,
   344064,
   344065,
   344067,
   344068,
   344121,
   344124,
   344128,
   344134,
   344184,
   344185,
   344186,
   344187,
   344188,
   344259,
   344260,
   344265,
   344266,
   344267,
   344268,
   344270,
   344271,
   344272,
   344348,
   344349,
   344350,
   344358,
   344362,
   344363,
   344366,
   344403,
   344409,
   344416,
   344419,
   344420,
   344421,
   344423,
   344424,
   344426,
   344430,
   344432,
   344433,
   344434,
   344436,
   344518,
   344519,
   344520,
   344529,
   344533,
   344536,
   344538,
   344555,
   344558,
   344560,
   344561,
   344562,
   344565,
   344566,
   344567,
   344568,
   344606,
   344607,
   344617,
   344618,
   344621,
   344625,
   344632,
   344633,
   344634,
   344654,
   344657,
   344665,
   344666,
   344675,
   344677,
   344678,
   344679,
   344680,
   344681};
   Double_t Graph0_fy1007[158] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.9893617,
   1.057866,
   1.110624,
   0.8383234,
   1.084723,
   0.9475219,
   0.9867257,
   0.5294214,
   0.5880815,
   1.320946,
   0.4149068,
   0.4074074,
   0.709347,
   1.083355,
   0.001663894,
   1.264853,
   1.291439,
   1.269362,
   1.365314,
   1.125127,
   0.6044869,
   1.039105,
   1.181967,
   1.116675,
   1.131737,
   1.285714,
   1.126047,
   0.934417,
   1.085572,
   1.112705,
   1.139596,
   1.097916,
   1.638889,
   1.214286,
   1.117994,
   1.118176,
   0.03205128,
   0.5346802,
   1.118447,
   0.04484305,
   0.03439803,
   0.6774864,
   0.7538839,
   0.4900326,
   0.3876544,
   0.03004292,
   1.297738,
   0.7337658,
   1.002562,
   0.0312989,
   0.03614458,
   0,
   0.03712871,
   0.01119403,
   0.0104773,
   0.01133144,
   1.240804,
   1.288328,
   1.308502,
   0.01159566,
   1.236939,
   0.9746193,
   0.01282051,
   1.315789,
   0.8302817,
   0.5997492,
   1.185006,
   0.7403337,
   0.6901865,
   1.245189,
   0.007583965,
   0.03162055,
   0.3614328,
   1.016684,
   1.102475,
   0.4513347,
   1.043956,
   1.104527,
   1.119792,
   1.067028,
   1.833333,
   1.05113,
   1.183174,
   0.005940594,
   3,
   1.138067,
   0.002857143,
   1.069388,
   1.952381,
   1.171975,
   0.005610098,
   0.003223826,
   0,
   0.916655,
   1.095537,
   1.155914,
   1.137471,
   4,
   0.8360208,
   1.085407,
   1.078776,
   1.0984,
   1.114374,
   0.01111111,
   0.9342105,
   1.081612,
   0.9978858,
   1.037135,
   0.7387755,
   1.157895,
   1.063911,
   1.5,
   1.538462,
   0.003921569,
   1.022493,
   1.010252,
   1.053782,
   1.14094,
   1.064632,
   0.007112376,
   1.054863,
   0.9284101,
   0.9835526,
   0.9819464,
   0.9272727,
   0.9186134,
   1.164948,
   1.07177,
   1.078104,
   0.003891051,
   0.7638294,
   0.8895843,
   1.055944,
   0,
   1.066924,
   1.045879,
   1.138196,
   0.0007352941,
   0.6216824,
   1.055336,
   0.9864615,
   1.135714,
   1.037708};
   Double_t Graph0_fex1007[158] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1007[158] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.07254352,
   0.02186869,
   0.03487773,
   0.07085126,
   0.01338451,
   0.05255905,
   0.06607604,
   0.003110909,
   0.008766602,
   0.06680311,
   0.02270269,
   0.03171662,
   0.03013727,
   0.005274438,
   0.001663894,
   0.03008998,
   0.01153439,
   0.006459713,
   0.07097928,
   0.01513,
   0.003704885,
   0.008548906,
   0.02200938,
   0.006960751,
   0.08232172,
   0.1292191,
   0.01195557,
   0.01027018,
   0.004917176,
   0.009776759,
   0.02726493,
   0.01631248,
   0.2133652,
   0.1113134,
   0.04060737,
   0.01376901,
   0.008275606,
   0.003575437,
   0.006292252,
   0.01418062,
   0.009193262,
   0.0104081,
   0.02482784,
   0.01332713,
   0.001835453,
   0.01135516,
   0.03426986,
   0.003281467,
   0.01267037,
   0.006998648,
   0.008519358,
   0,
   0.009586593,
   0.006462876,
   0.003492433,
   0.004006271,
   0.02303718,
   0.0120247,
   0.005781687,
   0.001709687,
   0.00475103,
   0.02486792,
   0.002167062,
   0.04804584,
   0.002654772,
   0.001788791,
   0.01892682,
   0.004950542,
   0.003210065,
   0.02032572,
   0.002866469,
   0.003535285,
   0.001463207,
   0.02267147,
   0.01791517,
   0.002133809,
   0.1071076,
   0.01740762,
   0.07636916,
   0.02687804,
   0.390868,
   0.004580096,
   0.02656974,
   0.003429804,
   1,
   0.04737835,
   0.001277753,
   0.02202233,
   0.3049107,
   0.0610934,
   0.001983469,
   0.0007034964,
   0,
   0.00505822,
   0.01855511,
   0.03941634,
   0.0256863,
   0.6030227,
   0.002987885,
   0.003605527,
   0.004303311,
   0.02551659,
   0.04150146,
   0.01111111,
   0.1108704,
   0.03342705,
   0.04593142,
   0.03028213,
   0.003501109,
   0.03015924,
   0.02129101,
   0.6123725,
   0.2432521,
   0.003921569,
   0.008323137,
   0.03068421,
   0.02975787,
   0.06187614,
   0.04371919,
   0.003180751,
   0.05128919,
   0.004307576,
   0.02543765,
   0.01664316,
   0.03914948,
   0.02631061,
   0.1095891,
   0.03580533,
   0.01917557,
   0.001375694,
   0.003253786,
   0.01410086,
   0.03508139,
   0,
   0.0193348,
   0.02851807,
   0.0467401,
   0.0007352941,
   0.01672302,
   0.03728846,
   0.004075661,
   0.05200079,
   0.008285509};
   TGraphErrors *gre = new TGraphErrors(158,Graph0_fx1007,Graph0_fy1007,Graph0_fex1007,Graph0_fey1007);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1007 = new TH1F("Graph_Graph1007","",158,342833,344849);
   Graph_Graph1007->SetMinimum(0);
   Graph_Graph1007->SetMaximum(5.063325);
   Graph_Graph1007->SetDirectory(0);
   Graph_Graph1007->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1007->SetLineColor(ci);
   Graph_Graph1007->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1007->GetXaxis()->SetNoExponent();
   Graph_Graph1007->GetXaxis()->SetNdivisions(5);
   Graph_Graph1007->GetXaxis()->SetLabelFont(42);
   Graph_Graph1007->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1007->GetXaxis()->SetTitleFont(42);
   Graph_Graph1007->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1007->GetYaxis()->SetLabelFont(42);
   Graph_Graph1007->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1007->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1007->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1007->GetYaxis()->SetTitleFont(42);
   Graph_Graph1007->GetZaxis()->SetLabelFont(42);
   Graph_Graph1007->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1007->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1007);
   
   gre->Draw("ap");
   TLatex *   tex = new TLatex(0.64,0.94,"0T cosmic rays (2021)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03717);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23,0.83,"TIB");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
