void tec_1_minus_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sat Oct  2 23:52:10 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(342341.4,-0.07291264,344951,0.490503);
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
   
   Double_t Graph0_fx1029[164] = {
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
   Double_t Graph0_fy1029[164] = {
   0.06707317,
   0.09375,
   0.08203991,
   0.04002312,
   0.08898015,
   0.08190668,
   0.1666667,
   0.07992887,
   0.07769949,
   0.07915567,
   0.07830843,
   0.09489705,
   0.07701986,
   0.0743338,
   0.07927129,
   0.07766736,
   0.04736842,
   0.06826401,
   0.06594595,
   0.1137725,
   0.08439306,
   0.06432749,
   0.07112971,
   0.07757524,
   0.08098224,
   0.09797297,
   0.1234719,
   0.1115242,
   0.1037037,
   0.1133501,
   0.1094669,
   0.1560487,
   0.1764706,
   0.1729556,
   0.1666667,
   0.1601942,
   0.1562644,
   0.1517347,
   0.1563011,
   0.1530187,
   0.1377246,
   0.203125,
   0.1578546,
   0.13599,
   0.1506293,
   0.1505626,
   0.1572081,
   0.1597189,
   0.2222222,
   0.258427,
   0.1386431,
   0.158609,
   0.03004292,
   0.1572333,
   0.1548334,
   0.01793722,
   0.0243309,
   0.1509027,
   0.1637717,
   0.1422505,
   0.1543824,
   0.02083333,
   0.1665158,
   0.1936811,
   0.1843724,
   0.0339233,
   0.003802281,
   0,
   0.007194245,
   0,
   0,
   0,
   0.0392562,
   0.01123596,
   0.02398082,
   0.003802281,
   0.00122399,
   0.00141844,
   0.1813934,
   0.1868132,
   0.1928978,
   0,
   0.1948168,
   0.0007451565,
   0.1783217,
   0.1905136,
   0.1896475,
   0.1905626,
   0.1851895,
   0.1890549,
   0.1515755,
   0,
   0.02764613,
   0.1499038,
   0.1596829,
   0.1604185,
   0.1495409,
   0.1333333,
   0.1508916,
   0.06896552,
   0.1263158,
   0.1638456,
   0.125,
   0.1498748,
   0.1430274,
   0,
   0.09274194,
   0,
   0.122338,
   0.2962963,
   0.1528662,
   0.2,
   0,
   0.0001899696,
   0,
   0.1236011,
   0.1128221,
   0.1210526,
   0.129745,
   0.16,
   0.1238737,
   0.1218106,
   0.1173103,
   0.1155898,
   0.1143695,
   0.1125,
   0.1082996,
   0.1115789,
   0.1381119,
   0.114619,
   0.08641005,
   0.06675116,
   0,
   0.03846154,
   0.05973182,
   0.06710158,
   0.06683168,
   0.06756757,
   0.05779335,
   0,
   0.06506024,
   0.06217828,
   0.06194125,
   0.06179458,
   0.05409836,
   0.0608565,
   0.06862745,
   0.0741573,
   0.08198925,
   0.001362398,
   0.0940416,
   0.08734544,
   0.1015625,
   0,
   0.09600561,
   0.09253499,
   0.1113244,
   0,
   0.09291339,
   0.09599395,
   0.1026316,
   0.09154905,
   0.08920188,
   0.09209917};
   Double_t Graph0_fex1029[164] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1029[164] = {
   0.02022332,
   0.01631978,
   0.01348728,
   0.002404756,
   0.007804076,
   0.005243538,
   0.1666667,
   0.001324626,
   0.003846698,
   0.01445178,
   0.003232135,
   0.009217216,
   0.002630948,
   0.007219937,
   0.003606969,
   0.001425149,
   0.01578947,
   0.005555247,
   0.008443513,
   0.02610119,
   0.003733329,
   0.01371467,
   0.01725149,
   0.001532617,
   0.003252325,
   0.01819312,
   0.01228591,
   0.02036143,
   0.01600183,
   0.01194815,
   0.001655552,
   0.01056895,
   0.004263769,
   0.00238429,
   0.0248452,
   0.005692252,
   0.002562746,
   0.003401404,
   0.007997063,
   0.002576204,
   0.02871755,
   0.05633674,
   0.004479159,
   0.003940496,
   0.001870197,
   0.003596053,
   0.01012666,
   0.006221763,
   0.07856742,
   0.05388575,
   0.01429994,
   0.005187069,
   0.008029308,
   0.002811326,
   0.00234623,
   0.00896861,
   0.007694106,
   0.006376804,
   0.0142545,
   0.01003358,
   0.001974723,
   0.00931695,
   0.01227571,
   0.002238677,
   0.006149165,
   0.007073498,
   0.003802281,
   0,
   0.007194245,
   0,
   0,
   0,
   0.00900599,
   0.00794502,
   0.0075834,
   0.003802281,
   0.00122399,
   0.00141844,
   0.008778241,
   0.004576885,
   0.002219123,
   0,
   0.01319466,
   0.0005269052,
   0.01765648,
   0.001593657,
   0.00148726,
   0.007592196,
   0.003283481,
   0.00231712,
   0.007090401,
   0,
   0.003304344,
   0.001649387,
   0.009508979,
   0.006827864,
   0.00193687,
   0.03849002,
   0.006434041,
   0.02180881,
   0.0257841,
   0.0105324,
   0.08838835,
   0.001783718,
   0.00923238,
   0,
   0.01367405,
   0,
   0.007445255,
   0.1047566,
   0.02206434,
   0.2,
   0,
   0.0001899696,
   0,
   0.002028976,
   0.005954524,
   0.01262061,
   0.008573794,
   0.08,
   0.001316466,
   0.001209668,
   0.001422179,
   0.008277558,
   0.0129498,
   0.0375,
   0.01046972,
   0.01532655,
   0.01098759,
   0.001612913,
   0.008238876,
   0.005310437,
   0,
   0.03846154,
   0.002011275,
   0.007907997,
   0.007425743,
   0.01510857,
   0.01006053,
   0,
   0.01252085,
   0.001126981,
   0.006289181,
   0.004175691,
   0.009417316,
   0.006761833,
   0.02593874,
   0.009128133,
   0.005248824,
   0.0009633607,
   0.001327429,
   0.004793704,
   0.01064664,
   0,
   0.005799911,
   0.008482669,
   0.01461761,
   0,
   0.01209629,
   0.008518086,
   0.01162074,
   0.001269313,
   0.01447046,
   0.002467631};
   TGraphErrors *gre = new TGraphErrors(164,Graph0_fx1029,Graph0_fy1029,Graph0_fex1029,Graph0_fey1029);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1029 = new TH1F("Graph_Graph1029","",164,342833,344849);
   Graph_Graph1029->SetMinimum(0);
   Graph_Graph1029->SetMaximum(0.4411581);
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
