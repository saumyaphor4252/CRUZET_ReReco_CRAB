void tec_1_minus_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sat Oct  2 22:02:33 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(342341.4,-0.121202,344951,0.8153589);
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
   
   Double_t Graph0_fx1029[158] = {
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
   Double_t Graph0_fy1029[158] = {
   0.06134969,
   0.08577878,
   0.03888407,
   0.07871321,
   0.08257499,
   0.07142857,
   0.03971685,
   0.07812203,
   0.07235142,
   0.07606085,
   0.09173479,
   0.07459348,
   0.07152875,
   0.078766,
   0.07785653,
   0.05851064,
   0.06826401,
   0.06681271,
   0.1077844,
   0.08918249,
   0.06413994,
   0.07964602,
   0.03921031,
   0.04587036,
   0.09797297,
   0.03602484,
   0.02469136,
   0.07042254,
   0.1041292,
   0,
   0.1610594,
   0.1804883,
   0.1758383,
   0.1734317,
   0.1731434,
   0.09064693,
   0.1473484,
   0.1766393,
   0.1638391,
   0.1377246,
   0.1428571,
   0.1704747,
   0.1425669,
   0.1576239,
   0.1619277,
   0.1722114,
   0.1723219,
   0.2222222,
   0.2346939,
   0.1460177,
   0.1658189,
   0.03205128,
   0.08011955,
   0.1661298,
   0.03139013,
   0.02211302,
   0.09817717,
   0.1251022,
   0.07973904,
   0.05784355,
   0.01716738,
   0.1837104,
   0.1151696,
   0.147478,
   0.03442879,
   0.04016064,
   0.01123596,
   0.02970297,
   0.0261194,
   0.006984866,
   0.007082153,
   0.182207,
   0.2032548,
   0.2110924,
   0.01260398,
   0.1942554,
   0.1351523,
   0.006593407,
   0.1964912,
   0.1342195,
   0.09593726,
   0.1967956,
   0.115764,
   0.109721,
   0.1529529,
   0.006500542,
   0.02727273,
   0.05336548,
   0.1501517,
   0.1761281,
   0.06537135,
   0.1538462,
   0.1635117,
   0.1614583,
   0.1740014,
   0.1666667,
   0.1519518,
   0.1426014,
   0.001980198,
   0.3333333,
   0.09072978,
   0.004571429,
   0.122449,
   0.4285714,
   0.1433121,
   0.003506311,
   0.002916795,
   0,
   0.1032182,
   0.1128221,
   0.1182796,
   0.1345708,
   0.4545455,
   0.09328749,
   0.1204637,
   0.117228,
   0.1114404,
   0.1159196,
   0.01111111,
   0.1184211,
   0.1084711,
   0.1247357,
   0.137931,
   0.08991206,
   0.08876669,
   0.06689391,
   0,
   0.03846154,
   0,
   0.0596206,
   0.06616962,
   0.06554622,
   0.06375839,
   0.0556553,
   0,
   0.06982544,
   0.06269611,
   0.06184211,
   0.0629055,
   0.05289256,
   0.0587792,
   0.07216495,
   0.08133971,
   0.08560709,
   0.003404669,
   0.07013459,
   0.07443004,
   0.1002331,
   0,
   0.09320252,
   0.08942457,
   0.1113244,
   0,
   0.05578048,
   0.09881423,
   0.08778163,
   0.09285714,
   0.09122784};
   Double_t Graph0_fex1029[158] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1029[158] = {
   0.01940048,
   0.01391516,
   0.002370804,
   0.007340045,
   0.005275523,
   0.07142857,
   0.0006643508,
   0.003853475,
   0.01367313,
   0.003185838,
   0.009127952,
   0.002533327,
   0.007082401,
   0.00359516,
   0.00142694,
   0.01764162,
   0.005555247,
   0.00855449,
   0.02540503,
   0.003837803,
   0.01367468,
   0.01877275,
   0.0008466163,
   0.002448379,
   0.01819312,
   0.006689646,
   0.007808093,
   0.009495772,
   0.001635224,
   0,
   0.01073729,
   0.004312032,
   0.002404236,
   0.02529762,
   0.00593528,
   0.001434689,
   0.003219241,
   0.008508418,
   0.002666254,
   0.02871755,
   0.04307305,
   0.004651811,
   0.004011594,
   0.001873689,
   0.003729627,
   0.01059888,
   0.006462575,
   0.07856742,
   0.04893706,
   0.01467533,
   0.005302304,
   0.008275606,
   0.001384048,
   0.002425059,
   0.01186436,
   0.007371007,
   0.003962108,
   0.01011391,
   0.005376005,
   0.0007090034,
   0.008583691,
   0.01289394,
   0.001300045,
   0.004859565,
   0.007340244,
   0.008980193,
   0.00794502,
   0.008574509,
   0.009872206,
   0.00285156,
   0.003167235,
   0.008827958,
   0.004776189,
   0.002322222,
   0.001782472,
   0.001882783,
   0.009260482,
   0.001554081,
   0.01856668,
   0.001067388,
   0.0007154319,
   0.00771303,
   0.001957608,
   0.001279898,
   0.007123726,
   0.002653835,
   0.00328325,
   0.0005622405,
   0.008712684,
   0.007160625,
   0.000812082,
   0.04111712,
   0.006697698,
   0.02899877,
   0.01085391,
   0.1178511,
   0.001741403,
   0.00922412,
   0.001980198,
   0.3333333,
   0.01337738,
   0.001616244,
   0.007452008,
   0.1428571,
   0.02136371,
   0.00156807,
   0.0006691586,
   0,
   0.001697356,
   0.005954524,
   0.01260864,
   0.008835004,
   0.2032789,
   0.0009980839,
   0.001201159,
   0.001418577,
   0.008127629,
   0.01338525,
   0.01111111,
   0.03947368,
   0.01058569,
   0.01623921,
   0.01104332,
   0.001221401,
   0.008350468,
   0.005338715,
   0,
   0.03846154,
   0,
   0.00200981,
   0.007852889,
   0.007421647,
   0.01462718,
   0.009995986,
   0,
   0.01319577,
   0.001119395,
   0.006378526,
   0.004212464,
   0.009350172,
   0.006655434,
   0.02727579,
   0.009863889,
   0.005403472,
   0.001286844,
   0.0009859547,
   0.004078741,
   0.01080841,
   0,
   0.005714614,
   0.008338884,
   0.01461761,
   0,
   0.005009235,
   0.01141008,
   0.001215793,
   0.01486904,
   0.002456661};
   TGraphErrors *gre = new TGraphErrors(158,Graph0_fx1029,Graph0_fy1029,Graph0_fex1029,Graph0_fey1029);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1029 = new TH1F("Graph_Graph1029","",158,342833,344849);
   Graph_Graph1029->SetMinimum(0);
   Graph_Graph1029->SetMaximum(0.7333333);
   Graph_Graph1029->SetDirectory(0);
   Graph_Graph1029->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1029->SetLineColor(ci);
   Graph_Graph1029->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1029->GetXaxis()->SetNoExponent();
   Graph_Graph1029->GetXaxis()->SetNdivisions(5);
   Graph_Graph1029->GetXaxis()->SetLabelFont(42);
   Graph_Graph1029->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1029->GetXaxis()->SetTitleFont(42);
   Graph_Graph1029->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1029->GetYaxis()->SetLabelFont(42);
   Graph_Graph1029->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1029->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1029->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1029->GetYaxis()->SetTitleFont(42);
   Graph_Graph1029->GetZaxis()->SetLabelFont(42);
   Graph_Graph1029->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1029->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1029);
   
   gre->Draw("ap");
   TLatex *   tex = new TLatex(0.64,0.94,"0T cosmic rays (2021)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03717);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23,0.83,"TEC 1-");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
