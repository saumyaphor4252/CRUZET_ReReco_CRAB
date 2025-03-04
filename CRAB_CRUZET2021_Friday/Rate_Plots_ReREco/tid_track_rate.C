void tid_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sat Oct  2 22:02:28 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(342341.4,-0.2867671,344951,1.92916);
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
   
   Double_t Graph0_fx1008[158] = {
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
   Double_t Graph0_fy1008[158] = {
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
   0.2287234,
   0.2477396,
   0.2409639,
   0.1856287,
   0.2465731,
   0.1895044,
   0.1946903,
   0.1102824,
   0.1215369,
   0.3310811,
   0.09565217,
   0.07160494,
   0.1498079,
   0.271455,
   0,
   0.341446,
   0.3474812,
   0.3486193,
   0.398524,
   0.3369278,
   0.1788188,
   0.2937122,
   0.3290984,
   0.3250748,
   0.3053892,
   0.4805195,
   0.3188627,
   0.2696693,
   0.3140006,
   0.3325316,
   0.3320287,
   0.3000485,
   0.3611111,
   0.3877551,
   0.3289086,
   0.3319769,
   0.03205128,
   0.1578482,
   0.3239761,
   0.04932735,
   0.03194103,
   0.1977934,
   0.2068684,
   0.1493295,
   0.11308,
   0.03862661,
   0.3891403,
   0.2125824,
   0.2891914,
   0.04538341,
   0.03212851,
   0.01123596,
   0.03217822,
   0.01865672,
   0.003492433,
   0.002832861,
   0.3545766,
   0.3839506,
   0.3773503,
   0.009579027,
   0.3560466,
   0.2677665,
   0.006593407,
   0.3982456,
   0.2415816,
   0.17509,
   0.3470375,
   0.2194121,
   0.1995252,
   0.34572,
   0.005417118,
   0.03280632,
   0.1050961,
   0.2942366,
   0.3260553,
   0.1282206,
   0.1648352,
   0.3091907,
   0.3229167,
   0.3432634,
   0.8333333,
   0.3027261,
   0.3323389,
   0.003960396,
   1,
   0.3037475,
   0.004571429,
   0.2911565,
   0.3809524,
   0.2579618,
   0.002103787,
   0.001688671,
   0,
   0.2224021,
   0.2668133,
   0.2446237,
   0.2517401,
   0.6363636,
   0.2023685,
   0.2639711,
   0.2595187,
   0.2714878,
   0.2812983,
   0.01111111,
   0.1842105,
   0.2758264,
   0.2769556,
   0.2572944,
   0.1832753,
   0.2458759,
   0.2130379,
   0,
   0.2692308,
   0,
   0.2078591,
   0.2059646,
   0.205042,
   0.2181208,
   0.2262118,
   0.001422475,
   0.1970075,
   0.1967023,
   0.1953947,
   0.2163611,
   0.1966942,
   0.1996986,
   0.2680412,
   0.2380383,
   0.2291951,
   0.002918288,
   0.1895574,
   0.2150201,
   0.2599068,
   0,
   0.255431,
   0.2332815,
   0.2821497,
   0,
   0.1574449,
   0.2424242,
   0.2434917,
   0.2357143,
   0.2595925};
   Double_t Graph0_fex1008[158] = {
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
   Double_t Graph0_fey1008[158] = {
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
   0.03487999,
   0.01058291,
   0.01624578,
   0.03333991,
   0.006381397,
   0.02350512,
   0.02935066,
   0.001419841,
   0.00398535,
   0.03344424,
   0.01090058,
   0.0132967,
   0.01384975,
   0.002640218,
   0,
   0.01563374,
   0.005983057,
   0.003385292,
   0.03834799,
   0.008279549,
   0.002015059,
   0.004545082,
   0.01161363,
   0.003755645,
   0.04276304,
   0.07899692,
   0.006362003,
   0.005517259,
   0.00264455,
   0.005344675,
   0.01471691,
   0.008527684,
   0.1001542,
   0.06290218,
   0.02202535,
   0.007502424,
   0.008275606,
   0.001942682,
   0.00338653,
   0.01487276,
   0.008858848,
   0.005623762,
   0.0130057,
   0.007356935,
   0.0009913196,
   0.01287554,
   0.01876601,
   0.001766253,
   0.006804973,
   0.008427488,
   0.008032129,
   0.00794502,
   0.008924632,
   0.008343537,
   0.002016357,
   0.002003135,
   0.01231495,
   0.006564457,
   0.003104844,
   0.001553923,
   0.002548984,
   0.01303467,
   0.001554081,
   0.02643249,
   0.001432011,
   0.0009665078,
   0.01024249,
   0.002695065,
   0.001725955,
   0.01071003,
   0.002422609,
   0.003600962,
   0.0007890147,
   0.0121965,
   0.009742766,
   0.001137327,
   0.04256026,
   0.009210101,
   0.04101046,
   0.01524486,
   0.2635231,
   0.002457941,
   0.01408165,
   0.002800423,
   0.5773503,
   0.02447667,
   0.001616244,
   0.01149103,
   0.134687,
   0.02866242,
   0.001214622,
   0.0005091533,
   0,
   0.002491519,
   0.009157009,
   0.01813271,
   0.01208391,
   0.2405228,
   0.001470032,
   0.001778077,
   0.002110675,
   0.01268579,
   0.02085122,
   0.01111111,
   0.04923234,
   0.01688031,
   0.02419772,
   0.01508287,
   0.001743819,
   0.01389773,
   0.009527345,
   0,
   0.1017597,
   0,
   0.003752678,
   0.01385468,
   0.01312647,
   0.02705456,
   0.02015255,
   0.001422475,
   0.02216507,
   0.001982749,
   0.01133795,
   0.007812346,
   0.01803093,
   0.01226739,
   0.05256721,
   0.01687409,
   0.008841392,
   0.001191386,
   0.001620919,
   0.006932527,
   0.01740464,
   0,
   0.009460406,
   0.01346851,
   0.02327132,
   0,
   0.008415783,
   0.01787175,
   0.002024884,
   0.02369018,
   0.004144075};
   TGraphErrors *gre = new TGraphErrors(158,Graph0_fx1008,Graph0_fy1008,Graph0_fex1008,Graph0_fey1008);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1008 = new TH1F("Graph_Graph1008","",158,342833,344849);
   Graph_Graph1008->SetMinimum(0);
   Graph_Graph1008->SetMaximum(1.735085);
   Graph_Graph1008->SetDirectory(0);
   Graph_Graph1008->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1008->SetLineColor(ci);
   Graph_Graph1008->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1008->GetXaxis()->SetNoExponent();
   Graph_Graph1008->GetXaxis()->SetNdivisions(5);
   Graph_Graph1008->GetXaxis()->SetLabelFont(42);
   Graph_Graph1008->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1008->GetXaxis()->SetTitleFont(42);
   Graph_Graph1008->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1008->GetYaxis()->SetLabelFont(42);
   Graph_Graph1008->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1008->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1008->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1008->GetYaxis()->SetTitleFont(42);
   Graph_Graph1008->GetZaxis()->SetLabelFont(42);
   Graph_Graph1008->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1008->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1008);
   
   gre->Draw("ap");
   TLatex *   tex = new TLatex(0.64,0.94,"0T cosmic rays (2021)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03717);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23,0.83,"TID");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
