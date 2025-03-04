void tid_3_plus_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sat Oct  2 23:52:05 2021) by ROOT version6.10/04
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
   
   Double_t Graph0_fx1017[164] = {
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
   Double_t Graph0_fy1017[164] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.05789474,
   0.0420434,
   0.04648649,
   0.0239521,
   0.03930636,
   0.0380117,
   0.0460251,
   0.03836371,
   0.04022989,
   0.08108108,
   0.05378973,
   0.04832714,
   0.04444444,
   0.03526448,
   0.05748767,
   0.07372942,
   0.07077367,
   0.07191691,
   0.08148148,
   0.06351133,
   0.06720464,
   0.06633626,
   0.06833061,
   0.06588307,
   0.0239521,
   0.15625,
   0.05846467,
   0.05332268,
   0.06589885,
   0.06982736,
   0.05936073,
   0.05792535,
   0.1111111,
   0.05617978,
   0.07374631,
   0.0605598,
   0.008583691,
   0.066603,
   0.06580865,
   0.01345291,
   0.00486618,
   0.06628941,
   0.06823821,
   0.05590941,
   0.06506694,
   0.0125,
   0.08144796,
   0.07452259,
   0.07260049,
   0.01622419,
   0,
   0,
   0.007194245,
   0,
   0,
   0.001636661,
   0.01033058,
   0.005617978,
   0.007194245,
   0.003802281,
   0.00122399,
   0,
   0.07391674,
   0.07490469,
   0.07043476,
   0,
   0.07417337,
   0.0003725782,
   0.06468531,
   0.07413382,
   0.07629056,
   0.07259528,
   0.07294638,
   0.07361127,
   0.06898839,
   0,
   0.009478673,
   0.06500671,
   0.0617214,
   0.06015693,
   0.06424665,
   0.02222222,
   0.05432099,
   0,
   0.05789474,
   0.06770481,
   0.0625,
   0.06440793,
   0.05780691,
   0,
   0.05040323,
   0,
   0.04621658,
   0.03703704,
   0.05414013,
   0.2,
   0.002375297,
   0,
   0,
   0.04792832,
   0.0487115,
   0.04342105,
   0.04022663,
   0.08,
   0.04468633,
   0.04610543,
   0.04563793,
   0.04267931,
   0.0542522,
   0.0125,
   0.048583,
   0.03789474,
   0.04545455,
   0.04228421,
   0.04241948,
   0.03675539,
   0,
   0.03846154,
   0.03514831,
   0.03541473,
   0.02722772,
   0.04391892,
   0.04553415,
   0,
   0.03614458,
   0.03631833,
   0.0357599,
   0.03724605,
   0.03278689,
   0.0353118,
   0.04901961,
   0.04157303,
   0.03561828,
   0.0006811989,
   0.05216414,
   0.05814259,
   0.0546875,
   0,
   0.0553609,
   0.06065319,
   0.05566219,
   0,
   0.04251969,
   0.04535147,
   0.04473684,
   0.05247967,
   0.04929577,
   0.05328926};
   Double_t Graph0_fex1017[164] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1017[164] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01745592,
   0.004359698,
   0.007089123,
   0.01197605,
   0.002547853,
   0.01054255,
   0.01387709,
   0.001077786,
   0.00229231,
   0.01655061,
   0.008109107,
   0.01340354,
   0.01047566,
   0.006664361,
   0.001199744,
   0.007264776,
   0.002700184,
   0.001537472,
   0.01737191,
   0.003584152,
   0.001680641,
   0.00224901,
   0.005287581,
   0.001690421,
   0.01197605,
   0.04941059,
   0.002725929,
   0.002467479,
   0.001237006,
   0.002448953,
   0.006222696,
   0.00374688,
   0.05555556,
   0.02512436,
   0.0104293,
   0.003205164,
   0.004291845,
   0.001829725,
   0.001529607,
   0.007767044,
   0.003440909,
   0.004226458,
   0.009201239,
   0.0062903,
   0.001281998,
   0.007216878,
   0.008585369,
   0.001388646,
   0.003858673,
   0.004891777,
   0,
   0,
   0.007194245,
   0,
   0,
   0.001636661,
   0.004619975,
   0.005617978,
   0.004153599,
   0.003802281,
   0.00122399,
   0,
   0.005603613,
   0.002898149,
   0.001340946,
   0,
   0.008141585,
   0.0003725782,
   0.0106342,
   0.0009941225,
   0.0009432976,
   0.004686005,
   0.002060764,
   0.001445862,
   0.004783484,
   0,
   0.001934826,
   0.001086164,
   0.005911838,
   0.004181196,
   0.001269538,
   0.01571348,
   0.003860424,
   0,
   0.01745592,
   0.006770481,
   0.0625,
   0.001169315,
   0.005869403,
   0,
   0.01008065,
   0,
   0.004576123,
   0.03703704,
   0.01313091,
   0.2,
   0.002375297,
   0,
   0,
   0.001263461,
   0.003912602,
   0.007558635,
   0.004774022,
   0.05656854,
   0.0007906918,
   0.0007442169,
   0.0008870518,
   0.005029805,
   0.008919007,
   0.0125,
   0.007012351,
   0.008931875,
   0.006303411,
   0.0009796519,
   0.00577256,
   0.003940591,
   0,
   0.03846154,
   0.00154284,
   0.005745027,
   0.004739738,
   0.01218092,
   0.008929982,
   0,
   0.00933249,
   0.0008613109,
   0.004778617,
   0.003241852,
   0.007331371,
   0.005150755,
   0.02192224,
   0.006834565,
   0.003459553,
   0.0006811989,
   0.0009886382,
   0.003911094,
   0.0078125,
   0,
   0.004404277,
   0.006867621,
   0.01033621,
   0,
   0.008182917,
   0.00585485,
   0.007672305,
   0.0009610308,
   0.01075722,
   0.001877034};
   TGraphErrors *gre = new TGraphErrors(164,Graph0_fx1017,Graph0_fy1017,Graph0_fex1017,Graph0_fey1017);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1017 = new TH1F("Graph_Graph1017","",164,342833,344849);
   Graph_Graph1017->SetMinimum(0);
   Graph_Graph1017->SetMaximum(0.44);
   Graph_Graph1017->SetDirectory(0);
   Graph_Graph1017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1017->SetLineColor(ci);
   Graph_Graph1017->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1017->GetXaxis()->SetNoExponent();
   Graph_Graph1017->GetXaxis()->SetNdivisions(5);
   Graph_Graph1017->GetXaxis()->SetLabelFont(42);
   Graph_Graph1017->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1017->GetXaxis()->SetTitleFont(42);
   Graph_Graph1017->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1017->GetYaxis()->SetLabelFont(42);
   Graph_Graph1017->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1017->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1017->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1017->GetYaxis()->SetTitleFont(42);
   Graph_Graph1017->GetZaxis()->SetLabelFont(42);
   Graph_Graph1017->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1017->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1017);
   
   gre->Draw("ap");
   TLatex *   tex = new TLatex(0.64,0.94,"0T cosmic rays (2021)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03717);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23,0.83,"TID 3+");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
