void fpix_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sat Oct  2 22:02:27 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(342341.4,-0.05642859,344951,0.3796104);
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
   
   Double_t Graph0_fx1004[158] = {
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
   Double_t Graph0_fy1004[158] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.03786816,
   0.0431572,
   0.04270733,
   0.04787234,
   0.0465642,
   0.03504929,
   0.0239521,
   0.04772915,
   0.04373178,
   0.03097345,
   0.02370898,
   0.02705175,
   0,
   0,
   0,
   0,
   0.04958656,
   0,
   0.02863278,
   0.02874214,
   0.0278764,
   0.02583026,
   0,
   0.03165376,
   0.05303137,
   0.05901639,
   0.01201892,
   0.01796407,
   0.01298701,
   0.01332826,
   0.03928209,
   0.04599314,
   0.003865647,
   0,
   0.003393117,
   0,
   0,
   0.01622419,
   0.01492031,
   0,
   0.00671847,
   0.01447839,
   0,
   0,
   0,
   0,
   0.02355926,
   0.01977944,
   0.004291845,
   0.0760181,
   0.03480915,
   0.05140112,
   0.00312989,
   0,
   0,
   0,
   0,
   0,
   0,
   0.06201882,
   0.06139169,
   0.06373901,
   0.0002520797,
   0.06080403,
   0,
   0.0007326007,
   0.04912281,
   0.03973448,
   0.02850055,
   0.05652963,
   0.03509004,
   0.03329402,
   0,
   0,
   0.001976285,
   0.018369,
   0.05813953,
   0.06142649,
   0.02401993,
   0.01098901,
   0.05514403,
   0.05208333,
   0.06025728,
   0.1666667,
   0.05643809,
   0.05310263,
   0,
   0,
   0.05128205,
   0,
   0,
   0,
   0,
   0,
   0.000307031,
   0,
   0.04061183,
   0,
   0.04435484,
   0.05452436,
   0.1818182,
   0.03526045,
   0.04759623,
   0.04743022,
   0.05334914,
   0.0309119,
   0,
   0.07894737,
   0.04545455,
   0.06131078,
   0,
   0.03582213,
   0,
   0,
   0,
   0,
   0,
   0,
   0.04007456,
   0.04369748,
   0.05369128,
   0.04129264,
   0,
   0.04738155,
   0.04251024,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.03688303,
   0,
   0,
   0,
   0,
   0,
   0.04606526,
   0,
   0.03328835,
   0.03162055,
   0.04714916,
   0.0547619,
   0.05067478};
   Double_t Graph0_fex1004[158] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1004[158] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.005153204,
   0.002661187,
   0.00105684,
   0.01595745,
   0.004588106,
   0.006195897,
   0.01197605,
   0.002807597,
   0.0112915,
   0.01170686,
   0.000658329,
   0.001880227,
   0,
   0,
   0,
   0,
   0.001128425,
   0,
   0.004527241,
   0.001720747,
   0.0009572794,
   0.00976292,
   0,
   0.000847801,
   0.001931289,
   0.004918033,
   0.0007221468,
   0.01037156,
   0.01298701,
   0.001300705,
   0.002105741,
   0.001012122,
   0.0005762567,
   0,
   0.0009068486,
   0,
   0,
   0.004891777,
   0.001590511,
   0,
   0.0004007903,
   0.0007159103,
   0,
   0,
   0,
   0,
   0.002922167,
   0.0004145986,
   0.004291845,
   0.008294255,
   0.0007147203,
   0.002868931,
   0.002213167,
   0,
   0,
   0,
   0,
   0,
   0,
   0.005150383,
   0.002624919,
   0.001276057,
   0.0002520797,
   0.001053367,
   0,
   0.0005180269,
   0.009283338,
   0.000580762,
   0.0003899431,
   0.004133856,
   0.001077782,
   0.00070504,
   0,
   0,
   0.0008838213,
   0.0003298638,
   0.00542154,
   0.004228774,
   0.0004922572,
   0.01098901,
   0.00388956,
   0.0164702,
   0.006387259,
   0.1178511,
   0.001061286,
   0.005628867,
   0,
   0,
   0.01005724,
   0,
   0,
   0,
   0,
   0,
   0.0002171037,
   0,
   0.001064685,
   0,
   0.007721186,
   0.005623759,
   0.1285649,
   0.0006136197,
   0.0007550203,
   0.0009023285,
   0.005623493,
   0.006912111,
   0,
   0.03223013,
   0.006852531,
   0.01138513,
   0,
   0.0007709481,
   0,
   0,
   0,
   0,
   0,
   0,
   0.006111313,
   0.00605975,
   0.01342282,
   0.008610111,
   0,
   0.01087007,
   0.000921743,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0007149969,
   0,
   0,
   0,
   0,
   0,
   0.009403032,
   0,
   0.003869692,
   0.006454519,
   0.0008910354,
   0.01141865,
   0.001830954};
   TGraphErrors *gre = new TGraphErrors(158,Graph0_fx1004,Graph0_fy1004,Graph0_fex1004,Graph0_fey1004);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1004 = new TH1F("Graph_Graph1004","",158,342833,344849);
   Graph_Graph1004->SetMinimum(0);
   Graph_Graph1004->SetMaximum(0.3414214);
   Graph_Graph1004->SetDirectory(0);
   Graph_Graph1004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1004->SetLineColor(ci);
   Graph_Graph1004->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1004->GetXaxis()->SetNoExponent();
   Graph_Graph1004->GetXaxis()->SetNdivisions(5);
   Graph_Graph1004->GetXaxis()->SetLabelFont(42);
   Graph_Graph1004->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1004->GetXaxis()->SetTitleFont(42);
   Graph_Graph1004->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1004->GetYaxis()->SetLabelFont(42);
   Graph_Graph1004->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1004->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1004->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1004->GetYaxis()->SetTitleFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1004->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1004);
   
   gre->Draw("ap");
   TLatex *   tex = new TLatex(0.64,0.94,"0T cosmic rays (2021)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03717);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23,0.83,"FPIX");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
