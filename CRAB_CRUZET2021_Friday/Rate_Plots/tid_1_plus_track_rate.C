void tid_1_plus_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sat Oct  2 23:52:04 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(342341.4,-0.07272123,344951,0.4892154);
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
   
   Double_t Graph0_fx1013[164] = {
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
   Double_t Graph0_fy1013[164] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.04210526,
   0.06826401,
   0.0572973,
   0.05389222,
   0.06044591,
   0.0380117,
   0.05857741,
   0.05731848,
   0.06112853,
   0.0777027,
   0.0806846,
   0.07806691,
   0.0691358,
   0.07934509,
   0.07714264,
   0.07086614,
   0.09045019,
   0.08690507,
   0.08888889,
   0.0835356,
   0.08103224,
   0.08265345,
   0.08306056,
   0.08180083,
   0.08383234,
   0.125,
   0.07994408,
   0.06873715,
   0.08231552,
   0.08159409,
   0.0952381,
   0.06931653,
   0.1388889,
   0.1235955,
   0.09439528,
   0.08515691,
   0.008583691,
   0.0848497,
   0.08123867,
   0.00896861,
   0.00973236,
   0.08461331,
   0.07692308,
   0.07360226,
   0.08267239,
   0.01666667,
   0.09954751,
   0.09444703,
   0.08552092,
   0.01622419,
   0.003802281,
   0,
   0.007194245,
   0,
   0,
   0.001636661,
   0.006198347,
   0.005617978,
   0.009592326,
   0.003802281,
   0.00122399,
   0,
   0.08538658,
   0.09665844,
   0.09410023,
   0,
   0.0893655,
   0.001117735,
   0.09615385,
   0.09253063,
   0.09431057,
   0.09739867,
   0.09704838,
   0.09297967,
   0.09154229,
   0,
   0.007503949,
   0.08302784,
   0.0815402,
   0.07759372,
   0.07939893,
   0.04444444,
   0.08175583,
   0,
   0.05263158,
   0.07447529,
   0.25,
   0.08007473,
   0.09356377,
   0,
   0.0625,
   0,
   0.06705936,
   0.03703704,
   0.05414013,
   0.2,
   0,
   0,
   0,
   0.06301625,
   0.06065368,
   0.05,
   0.05892351,
   0.08,
   0.06406346,
   0.06307962,
   0.06287931,
   0.05986959,
   0.06744868,
   0.05,
   0.05769231,
   0.06526316,
   0.06381119,
   0.0595792,
   0.06048704,
   0.05956907,
   0,
   0.07692308,
   0.05444941,
   0.05778192,
   0.05363036,
   0.0472973,
   0.06654991,
   0,
   0.05060241,
   0.05472261,
   0.0440613,
   0.05079007,
   0.04918033,
   0.05184072,
   0.03921569,
   0.05617978,
   0.05443548,
   0,
   0.07146337,
   0.06813996,
   0.05357143,
   0,
   0.07007708,
   0.05832037,
   0.07869482,
   0,
   0.07401575,
   0.06575964,
   0.06184211,
   0.06750906,
   0.04694836,
   0.07153719};
   Double_t Graph0_fex1013[164] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1013[164] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01488646,
   0.005555247,
   0.007870389,
   0.01796407,
   0.003159558,
   0.01054255,
   0.01565547,
   0.001317405,
   0.002825667,
   0.01620213,
   0.009931588,
   0.0170356,
   0.01306544,
   0.009996542,
   0.001389788,
   0.007122315,
   0.003052546,
   0.001690108,
   0.01814437,
   0.004110518,
   0.001845459,
   0.00251042,
   0.005829708,
   0.001883592,
   0.02240513,
   0.04419417,
   0.003187579,
   0.002801517,
   0.001382527,
   0.002647262,
   0.007881961,
   0.004098772,
   0.062113,
   0.03726545,
   0.01179941,
   0.003800739,
   0.004291845,
   0.002065209,
   0.001699494,
   0.006341765,
   0.00486618,
   0.004775005,
   0.00976924,
   0.007217296,
   0.001445065,
   0.008333333,
   0.009491483,
   0.001563298,
   0.004187977,
   0.004891777,
   0.003802281,
   0,
   0.007194245,
   0,
   0,
   0.001636661,
   0.003578617,
   0.005617978,
   0.004796163,
   0.003802281,
   0.00122399,
   0,
   0.006022705,
   0.0032922,
   0.001549933,
   0,
   0.00893655,
   0.0006453244,
   0.01296538,
   0.001110643,
   0.001048802,
   0.005427816,
   0.002376952,
   0.001624982,
   0.005510198,
   0,
   0.001721524,
   0.001227519,
   0.006795017,
   0.004748659,
   0.001411327,
   0.02222222,
   0.004735988,
   0,
   0.01664357,
   0.00710094,
   0.125,
   0.001303796,
   0.007467202,
   0,
   0.01122533,
   0,
   0.005512245,
   0.03703704,
   0.01313091,
   0.2,
   0,
   0,
   0,
   0.001448745,
   0.004365947,
   0.008111071,
   0.005777926,
   0.05656854,
   0.0009467277,
   0.0008704986,
   0.001041214,
   0.005957247,
   0.009944765,
   0.025,
   0.007641533,
   0.01172161,
   0.007468535,
   0.001162867,
   0.006893138,
   0.005016621,
   0,
   0.05439283,
   0.001920283,
   0.007338311,
   0.006652028,
   0.01264073,
   0.01079582,
   0,
   0.01104235,
   0.001057257,
   0.005304357,
   0.003785668,
   0.008979059,
   0.006240889,
   0.01960784,
   0.00794502,
   0.004276856,
   0,
   0.001157159,
   0.004234011,
   0.00773237,
   0,
   0.004955198,
   0.006734257,
   0.01229007,
   0,
   0.01079631,
   0.007050173,
   0.009020598,
   0.001089991,
   0.01049797,
   0.002174795};
   TGraphErrors *gre = new TGraphErrors(164,Graph0_fx1013,Graph0_fy1013,Graph0_fex1013,Graph0_fey1013);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1013 = new TH1F("Graph_Graph1013","",164,342833,344849);
   Graph_Graph1013->SetMinimum(0);
   Graph_Graph1013->SetMaximum(0.44);
   Graph_Graph1013->SetDirectory(0);
   Graph_Graph1013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1013->SetLineColor(ci);
   Graph_Graph1013->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1013->GetXaxis()->SetNoExponent();
   Graph_Graph1013->GetXaxis()->SetNdivisions(5);
   Graph_Graph1013->GetXaxis()->SetLabelFont(42);
   Graph_Graph1013->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1013->GetXaxis()->SetTitleFont(42);
   Graph_Graph1013->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1013->GetYaxis()->SetLabelFont(42);
   Graph_Graph1013->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1013->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1013->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1013->GetYaxis()->SetTitleFont(42);
   Graph_Graph1013->GetZaxis()->SetLabelFont(42);
   Graph_Graph1013->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1013->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1013);
   
   gre->Draw("ap");
   TLatex *   tex = new TLatex(0.64,0.94,"0T cosmic rays (2021)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03717);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23,0.83,"TID 1+");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
