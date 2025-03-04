void pixel_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sat Oct  2 23:52:00 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(342341.4,-0.2631079,344951,1.769998);
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
   
   Double_t Graph0_fx1003[164] = {
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
   Double_t Graph0_fy1003[164] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0371669,
   0.04283604,
   0.04252092,
   0.08947368,
   0.1148282,
   0.1145946,
   0.09580838,
   0.1172585,
   0.0877193,
   0.1046025,
   0.1136983,
   0.1166405,
   0,
   0,
   0,
   0,
   0,
   0.1234883,
   0.2133142,
   0.1852272,
   0.1910663,
   0.2074074,
   0,
   0.09111924,
   0.09218452,
   0.09410802,
   0.174228,
   0.1796407,
   0.203125,
   0.172725,
   0.04978306,
   0.05935076,
   0.1458387,
   0,
   0.1442075,
   0.2777778,
   0.1685393,
   0.01622419,
   0.01594572,
   0,
   0.01432593,
   0.01422121,
   0,
   0,
   0,
   0,
   0.1832979,
   0.2101288,
   0.004166667,
   0.2552036,
   0.2253273,
   0.2292863,
   0.004424779,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.2187766,
   0.225499,
   0.2311149,
   0,
   0,
   0,
   0.1940559,
   0.2288537,
   0.2328839,
   0.2292801,
   0.22763,
   0.2290696,
   0,
   0,
   0.003159558,
   0.2069072,
   0.2191393,
   0.2051729,
   0.2127339,
   0.1888889,
   0.2093278,
   0,
   0.1157895,
   0.1949898,
   0.4375,
   0.2153866,
   0.2020262,
   0,
   0.1673387,
   0,
   0,
   0,
   0,
   1,
   0,
   0.0001899696,
   0,
   0.1944111,
   0,
   0.2105263,
   0.2050992,
   0.32,
   0.1888886,
   0.1901759,
   0.1917931,
   0.1908714,
   0.1612903,
   0.175,
   0.187247,
   0.2189474,
   0,
   0.192333,
   0,
   0,
   0,
   0,
   0,
   0.2087605,
   0.1971947,
   0.1993243,
   0.2049037,
   0,
   0.1927711,
   0.183716,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.1961589,
   0,
   0,
   0,
   0,
   0,
   0.2284069,
   0,
   0.1748031,
   0.2010582,
   0.1723684,
   0.1925487,
   0.1995305,
   0.194843};
   Double_t Graph0_fex1003[164] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1003[164] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.005105266,
   0.002651484,
   0.00105449,
   0.02170056,
   0.007204962,
   0.01113041,
   0.0239521,
   0.004400632,
   0.01601528,
   0.0209205,
   0.001855449,
   0.003903227,
   0,
   0,
   0,
   0,
   0,
   0.001758387,
   0.01235696,
   0.004368273,
   0.002506016,
   0.02771598,
   0,
   0.001956953,
   0.002651214,
   0.006205299,
   0.002748951,
   0.03279776,
   0.05633674,
   0.004685386,
   0.002384176,
   0.00117394,
   0.00353919,
   0,
   0.00591193,
   0.08784105,
   0.04351667,
   0.004891777,
   0.001644675,
   0,
   0.0008485947,
   0.0007110605,
   0,
   0,
   0,
   0,
   0.01138958,
   0.002303828,
   0.004166667,
   0.01519715,
   0.002414653,
   0.006857364,
   0.002554647,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.009640447,
   0.005028501,
   0.002429023,
   0,
   0,
   0,
   0.01841898,
   0.001746669,
   0.001648098,
   0.008327828,
   0.003640332,
   0.002550577,
   0,
   0,
   0.001117072,
   0.001937778,
   0.01113948,
   0.007721784,
   0.002310143,
   0.04581228,
   0.007578177,
   0,
   0.0246864,
   0.01148989,
   0.1653595,
   0.002138313,
   0.01097256,
   0,
   0.01836781,
   0,
   0,
   0,
   0,
   0.4472136,
   0,
   0.0001899696,
   0,
   0.00254464,
   0,
   0.01664357,
   0.01077977,
   0.1131371,
   0.001625634,
   0.001511476,
   0.001818455,
   0.01063685,
   0.01537843,
   0.04677072,
   0.01376667,
   0.02146956,
   0,
   0.002089342,
   0,
   0,
   0,
   0,
   0,
   0.0139484,
   0.01275547,
   0.02594982,
   0.01894335,
   0,
   0.02155246,
   0.001937182,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.001917147,
   0,
   0,
   0,
   0,
   0,
   0.02093803,
   0,
   0.01659158,
   0.01232767,
   0.0150599,
   0.001840823,
   0.02164212,
   0.003589175};
   TGraphErrors *gre = new TGraphErrors(164,Graph0_fx1003,Graph0_fy1003,Graph0_fex1003,Graph0_fey1003);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","",164,342833,344849);
   Graph_Graph1003->SetMinimum(0);
   Graph_Graph1003->SetMaximum(1.591935);
   Graph_Graph1003->SetDirectory(0);
   Graph_Graph1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1003->SetLineColor(ci);
   Graph_Graph1003->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1003->GetXaxis()->SetNoExponent();
   Graph_Graph1003->GetXaxis()->SetNdivisions(5);
   Graph_Graph1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph1003->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph1003->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1003->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1003->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1003);
   
   gre->Draw("ap");
   TLatex *   tex = new TLatex(0.64,0.94,"0T cosmic rays (2021)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03717);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23,0.83,"PIXEL");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
