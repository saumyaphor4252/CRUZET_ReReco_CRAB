void tid_2_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sat Oct  2 23:52:03 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(342341.4,-0.04871187,344951,0.3276979);
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
   
   Double_t Graph0_fx1011[164] = {
   343001,
   343004,
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
   343384,
   343385,
   343386,
   343387,
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
   343874,
   343875,
   343876,
   343877,
   343878,
   343881,
   343921,
   343923,
   343925,
   343927,
   343928,
   343932,
   343934,
   343936,
   343937,
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
   344258,
   344259,
   344260,
   344265,
   344266,
   344267,
   344270,
   344271,
   344272,
   344348,
   344349,
   344350,
   344351,
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
   344432,
   344433,
   344434,
   344436,
   344518,
   344519,
   344520,
   344529,
   344533,
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
   344676,
   344677,
   344678,
   344679,
   344680,
   344681};
   Double_t Graph0_fy1011[164] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.08947368,
   0.08499096,
   0.08216216,
   0.05389222,
   0.08009909,
   0.05847953,
   0.0334728,
   0.07521347,
   0.07419018,
   0.08783784,
   0.08435208,
   0.1226766,
   0.08148148,
   0.1007557,
   0.09712311,
   0.1173944,
   0.1177501,
   0.1215816,
   0.1407407,
   0.1140777,
   0.1133947,
   0.1111704,
   0.1035188,
   0.1097762,
   0.09580838,
   0.171875,
   0.1082867,
   0.09180178,
   0.1103655,
   0.1128575,
   0.1082844,
   0.100824,
   0.1944444,
   0.1460674,
   0.09734513,
   0.1143342,
   0.008583691,
   0.1084749,
   0.1094678,
   0.02242152,
   0.00973236,
   0.1080571,
   0.09305211,
   0.09200283,
   0.1103056,
   0.02083333,
   0.1357466,
   0.1297676,
   0.1320755,
   0.01917404,
   0,
   0,
   0,
   0,
   0,
   0,
   0.008264463,
   0,
   0.01199041,
   0.003802281,
   0.00122399,
   0,
   0.1125743,
   0.1281678,
   0.125067,
   0,
   0.1599643,
   0.0007451565,
   0.1451049,
   0.126658,
   0.1292776,
   0.1203872,
   0.1309891,
   0.1286493,
   0.1283582,
   0,
   0.009083728,
   0.1079453,
   0.112684,
   0.1133391,
   0.1072701,
   0.06666667,
   0.1050754,
   0,
   0.06842105,
   0.1245768,
   0.125,
   0.1075871,
   0.1144219,
   0,
   0.07862903,
   0,
   0.09877662,
   0.1481481,
   0.07006369,
   0,
   0,
   0.0001899696,
   0,
   0.09069411,
   0.09239472,
   0.07894737,
   0.07875354,
   0.08,
   0.09140131,
   0.09130988,
   0.08877586,
   0.1007706,
   0.08651026,
   0.05,
   0.09919028,
   0.09052632,
   0.09527972,
   0.08490887,
   0.08405342,
   0.07351077,
   0,
   0.03846154,
   0.07009346,
   0.07642125,
   0.06683168,
   0.0777027,
   0.07705779,
   0,
   0.06987952,
   0.06415965,
   0.07279693,
   0.07759594,
   0.06557377,
   0.07663411,
   0.08823529,
   0.06067416,
   0.07594086,
   0,
   0.08830804,
   0.08629308,
   0.09375,
   0,
   0.08584443,
   0.07153966,
   0.08637236,
   0,
   0.08503937,
   0.0861678,
   0.08421053,
   0.08808208,
   0.09624413,
   0.08938843};
   Double_t Graph0_fex1011[164] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1011[164] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.02170056,
   0.006198603,
   0.009424647,
   0.01796407,
   0.003637112,
   0.01307642,
   0.01183442,
   0.001509106,
   0.003112951,
   0.01722642,
   0.0101548,
   0.02135525,
   0.01418411,
   0.01126483,
   0.001559419,
   0.009166964,
   0.003482877,
   0.00199906,
   0.02283116,
   0.004803536,
   0.002183091,
   0.002911458,
   0.006508172,
   0.002182037,
   0.0239521,
   0.05182226,
   0.003709842,
   0.003237599,
   0.001600845,
   0.003113385,
   0.0084045,
   0.004943305,
   0.07349309,
   0.04051181,
   0.01198236,
   0.004403988,
   0.004291845,
   0.00233509,
   0.001972793,
   0.01002721,
   0.00486618,
   0.005396115,
   0.01074473,
   0.008069182,
   0.001669191,
   0.00931695,
   0.01108366,
   0.001832445,
   0.005204503,
   0.005317922,
   0,
   0,
   0,
   0,
   0,
   0,
   0.004132231,
   0,
   0.005362273,
   0.003802281,
   0.00122399,
   0,
   0.006915387,
   0.003791016,
   0.001786854,
   0,
   0.01195629,
   0.0005269052,
   0.01592733,
   0.001299416,
   0.001227934,
   0.006034464,
   0.002761493,
   0.00191143,
   0.006524814,
   0,
   0.001894088,
   0.001399646,
   0.007987959,
   0.005739151,
   0.001640438,
   0.02721655,
   0.005369104,
   0,
   0.01897659,
   0.009183927,
   0.08838835,
   0.00151127,
   0.008257691,
   0,
   0.01259072,
   0,
   0.006689997,
   0.07407407,
   0.01493763,
   0,
   0,
   0.0001899696,
   0,
   0.001738022,
   0.00538857,
   0.01019206,
   0.006679788,
   0.05656854,
   0.001130827,
   0.001047327,
   0.001237182,
   0.007728752,
   0.01126268,
   0.025,
   0.01001973,
   0.01380513,
   0.009126142,
   0.001388223,
   0.00812575,
   0.005572837,
   0,
   0.03846154,
   0.00217875,
   0.008439316,
   0.007425743,
   0.01620213,
   0.0116169,
   0,
   0.0129763,
   0.001144796,
   0.006818058,
   0.004679211,
   0.01036812,
   0.007587907,
   0.02941176,
   0.008256707,
   0.005051511,
   0,
   0.001286327,
   0.004764739,
   0.01022896,
   0,
   0.0054844,
   0.007458525,
   0.01287563,
   0,
   0.01157239,
   0.008070354,
   0.01052632,
   0.001245046,
   0.01503081,
   0.002431045};
   TGraphErrors *gre = new TGraphErrors(164,Graph0_fx1011,Graph0_fy1011,Graph0_fex1011,Graph0_fey1011);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1011 = new TH1F("Graph_Graph1011","",164,342833,344849);
   Graph_Graph1011->SetMinimum(0);
   Graph_Graph1011->SetMaximum(0.2947313);
   Graph_Graph1011->SetDirectory(0);
   Graph_Graph1011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1011->SetLineColor(ci);
   Graph_Graph1011->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1011->GetXaxis()->SetNoExponent();
   Graph_Graph1011->GetXaxis()->SetNdivisions(5);
   Graph_Graph1011->GetXaxis()->SetLabelFont(42);
   Graph_Graph1011->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1011->GetXaxis()->SetTitleFont(42);
   Graph_Graph1011->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1011->GetYaxis()->SetLabelFont(42);
   Graph_Graph1011->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1011->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1011->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1011->GetYaxis()->SetTitleFont(42);
   Graph_Graph1011->GetZaxis()->SetLabelFont(42);
   Graph_Graph1011->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1011->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1011);
   
   gre->Draw("ap");
   TLatex *   tex = new TLatex(0.64,0.94,"0T cosmic rays (2021)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03717);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23,0.83,"TID 2");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
