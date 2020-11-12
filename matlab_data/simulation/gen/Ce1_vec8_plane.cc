/*
 * Automatically Generated from Mathematica.
 * Fri 21 Dec 2018 15:11:44 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t332;
  double t40;
  double t221;
  double t257;
  double t393;
  double t400;
  double t511;
  double t616;
  double t740;
  double t637;
  double t654;
  double t985;
  double t1004;
  double t1015;
  double t808;
  double t889;
  double t897;
  double t902;
  double t655;
  double t711;
  double t746;
  double t750;
  double t1119;
  double t1126;
  double t1137;
  double t756;
  double t788;
  double t927;
  double t961;
  double t1096;
  double t1099;
  double t1100;
  double t1112;
  double t1617;
  double t2051;
  double t2059;
  double t2065;
  double t2129;
  double t2136;
  double t2139;
  double t2342;
  double t2352;
  double t2361;
  double t2305;
  double t2311;
  double t2322;
  double t2325;
  double t2423;
  double t2424;
  double t2407;
  double t2410;
  double t2415;
  double t2165;
  double t2167;
  double t2170;
  double t2179;
  double t2180;
  double t2186;
  double t2327;
  double t2366;
  double t2368;
  double t2371;
  double t2373;
  double t2377;
  double t2382;
  double t1621;
  double t1625;
  double t1632;
  double t2249;
  double t2517;
  double t363;
  double t420;
  double t497;
  double t2611;
  double t533;
  double t576;
  double t578;
  double t1017;
  double t1029;
  double t1075;
  double t1139;
  double t1170;
  double t1175;
  double t2225;
  double t2236;
  double t2241;
  double t1293;
  double t1336;
  double t1351;
  double t1375;
  double t1377;
  double t1378;
  double t1420;
  double t1459;
  double t1481;
  double t1531;
  double t1546;
  double t1563;
  double t1889;
  double t1894;
  double t1899;
  double t1949;
  double t2068;
  double t2080;
  double t2093;
  double t2144;
  double t2155;
  double t2175;
  double t2197;
  double t2200;
  double t3220;
  double t3225;
  double t3229;
  double t3231;
  double t2396;
  double t2405;
  double t2417;
  double t2418;
  double t2426;
  double t2449;
  double t2454;
  double t2466;
  double t2468;
  double t3232;
  double t3233;
  double t3241;
  double t3246;
  double t3248;
  double t3249;
  double t3257;
  double t3258;
  double t3267;
  double t3269;
  double t2525;
  double t2528;
  double t2532;
  double t2542;
  double t2544;
  double t2551;
  double t2556;
  double t2559;
  double t2582;
  double t2586;
  double t2590;
  double t2872;
  double t2874;
  double t2876;
  double t2908;
  double t2909;
  double t2917;
  double t2949;
  double t2953;
  double t2961;
  double t3183;
  double t3188;
  double t3210;
  double t3282;
  double t3290;
  double t3294;
  double t3160;
  double t3170;
  double t3173;
  double t3761;
  double t3767;
  double t3791;
  double t3792;
  double t3799;
  double t3800;
  double t3801;
  double t3802;
  double t3927;
  double t3932;
  double t3936;
  double t3926;
  double t3937;
  double t3940;
  double t3950;
  double t3951;
  double t4022;
  double t4047;
  double t4072;
  double t4073;
  double t4097;
  double t4101;
  double t4107;
  double t4108;
  double t4110;
  double t4113;
  double t4119;
  double t4121;
  double t4138;
  double t4145;
  double t4147;
  double t4152;
  double t3900;
  double t3903;
  double t3919;
  double t3948;
  double t4221;
  double t4223;
  double t4228;
  double t4260;
  double t4275;
  double t4084;
  double t4089;
  double t4117;
  double t4156;
  double t4157;
  double t4161;
  double t4165;
  double t4176;
  double t4219;
  double t4240;
  double t4251;
  double t4328;
  double t4330;
  double t4334;
  double t4259;
  double t4290;
  double t4301;
  double t4305;
  double t4310;
  double t2270;
  double t2274;
  double t2276;
  double t4503;
  double t4507;
  double t4511;
  double t4512;
  double t4502;
  double t4516;
  double t4518;
  double t4523;
  double t4526;
  double t4528;
  double t4557;
  double t4559;
  double t4562;
  double t4573;
  double t4583;
  double t4586;
  double t4520;
  double t4626;
  double t4630;
  double t4631;
  double t4660;
  double t4664;
  double t4531;
  double t4549;
  double t4565;
  double t4590;
  double t4592;
  double t4596;
  double t4597;
  double t4598;
  double t4625;
  double t4634;
  double t4639;
  double t2472;
  double t2479;
  double t2486;
  double t4093;
  double t4158;
  double t4202;
  double t4203;
  double t4827;
  double t4828;
  double t4836;
  double t4851;
  double t4854;
  double t4857;
  double t4378;
  double t4387;
  double t4390;
  double t4395;
  double t4402;
  double t4403;
  double t4405;
  double t4407;
  double t4481;
  double t4484;
  double t4488;
  double t4491;
  double t4555;
  double t4595;
  double t4601;
  double t4607;
  double t4956;
  double t4958;
  double t4963;
  double t4702;
  double t4708;
  double t4712;
  double t4715;
  double t4722;
  double t4723;
  double t4727;
  double t4729;
  double t4783;
  double t4787;
  double t4792;
  double t4794;
  double t5070;
  double t5072;
  double t5074;
  double t5205;
  double t5210;
  double t5212;
  double t5336;
  double t5343;
  double t5357;
  double t5358;
  double t5369;
  double t5413;
  double t5414;
  double t5423;
  double t5373;
  double t5375;
  double t5380;
  double t5387;
  double t5392;
  double t5393;
  double t2243;
  double t2257;
  double t5607;
  double t5609;
  double t5612;
  double t5619;
  double t5623;
  double t5624;
  double t5626;
  double t5663;
  double t5665;
  double t5668;
  double t5645;
  double t5649;
  double t5656;
  double t5632;
  double t5638;
  double t5641;
  double t5605;
  double t5832;
  double t5833;
  double t5835;
  double t5853;
  double t5854;
  double t5857;
  double t5862;
  double t5865;
  double t5866;
  double t5688;
  double t5841;
  double t5843;
  double t5849;
  double t5693;
  double t5695;
  double t5880;
  double t5886;
  double t5889;
  double t5858;
  double t5877;
  double t5878;
  double t5735;
  double t5745;
  double t5757;
  double t5760;
  double t4353;
  double t4867;
  double t4360;
  double t4252;
  double t4826;
  double t4311;
  double t4423;
  double t4896;
  double t4434;
  double t4454;
  double t4455;
  double t4923;
  double t4657;
  double t4951;
  double t4668;
  double t4679;
  double t4684;
  double t4992;
  double t4737;
  double t5014;
  double t4742;
  double t4756;
  double t4758;
  double t5040;
  double t5968;
  double t5973;
  double t4872;
  double t4848;
  double t5986;
  double t5988;
  double t5991;
  double t6004;
  double t6005;
  double t4911;
  double t6018;
  double t6025;
  double t6027;
  double t4922;
  double t6040;
  double t6041;
  double t4973;
  double t4988;
  double t6059;
  double t6060;
  double t6061;
  double t6079;
  double t6080;
  double t5017;
  double t5028;
  double t6108;
  double t6110;
  double t6111;
  double t5424;
  double t5451;
  double t5466;
  double t5509;
  double t5516;
  double t5532;
  double t5673;
  double t5691;
  double t5728;
  double t5736;
  double t6547;
  double t5850;
  double t6565;
  double t6569;
  double t5903;
  double t5923;
  double t6630;
  double t6635;
  double t5941;
  double t6644;
  double t6808;
  double t6809;
  double t6811;
  double t6816;
  double t6819;
  double t6820;
  double t6821;
  double t6822;
  double t6915;
  double t6917;
  double t6918;
  double t6919;
  double t6924;
  t332 = Cos(var1[7]);
  t40 = Cos(var1[4]);
  t221 = Cos(var1[5]);
  t257 = Cos(var1[6]);
  t393 = Sin(var1[5]);
  t400 = Sin(var1[6]);
  t511 = Sin(var1[7]);
  t616 = Cos(var1[8]);
  t740 = Sin(var1[8]);
  t637 = -1.*t616;
  t654 = 1. + t637;
  t985 = -1.*t616*t511;
  t1004 = -1.*t332*t740;
  t1015 = t985 + t1004;
  t808 = 0.100689*t654;
  t889 = 0.080689*t616;
  t897 = -0.16*t740;
  t902 = t808 + t889 + t897;
  t655 = -0.20833*t654;
  t711 = -0.36833*t616;
  t746 = 0.02*t740;
  t750 = t655 + t711 + t746;
  t1119 = t332*t616;
  t1126 = -1.*t511*t740;
  t1137 = t1119 + t1126;
  t756 = t616*t750;
  t788 = -0.242889*t740;
  t927 = t902*t740;
  t961 = t756 + t788 + t927;
  t1096 = 0.242889*t616;
  t1099 = -1.*t616*t902;
  t1100 = t750*t740;
  t1112 = t1096 + t1099 + t1100;
  t1617 = Sin(var1[4]);
  t2051 = t257*t393*t511;
  t2059 = -1.*t221*t400*t511;
  t2065 = t2051 + t2059;
  t2129 = -1.*t257*t393*t1015;
  t2136 = t221*t400*t1015;
  t2139 = t2129 + t2136;
  t2342 = -1.*t332*t616;
  t2352 = t511*t740;
  t2361 = t2342 + t2352;
  t2305 = t1617*t1137;
  t2311 = t40*t2139;
  t2322 = t2305 + t2311;
  t2325 = 0.241*t1112*t2322;
  t2423 = -0.16*t616;
  t2424 = t2423 + t746;
  t2407 = 0.02*t616;
  t2410 = 0.16*t740;
  t2415 = t2407 + t2410;
  t2165 = t616*t511;
  t2167 = t332*t740;
  t2170 = t2165 + t2167;
  t2179 = -1.*t257*t393*t1137;
  t2180 = t221*t400*t1137;
  t2186 = t2179 + t2180;
  t2327 = t1617*t1015;
  t2366 = -1.*t257*t393*t2361;
  t2368 = t221*t400*t2361;
  t2371 = t2366 + t2368;
  t2373 = t40*t2371;
  t2377 = t2327 + t2373;
  t2382 = 0.241*t961*t2377;
  t1621 = -1.*t257*t332*t393;
  t1625 = t221*t332*t400;
  t1632 = t1621 + t1625;
  t2249 = -1.*t1617*t511;
  t2517 = Sin(var1[3]);
  t363 = -1.*t221*t257*t332;
  t420 = -1.*t332*t393*t400;
  t497 = t363 + t420;
  t2611 = Cos(var1[3]);
  t533 = t221*t257*t511;
  t576 = t393*t400*t511;
  t578 = t533 + t576;
  t1017 = -1.*t221*t257*t1015;
  t1029 = -1.*t393*t400*t1015;
  t1075 = t1017 + t1029;
  t1139 = -1.*t221*t257*t1137;
  t1170 = -1.*t393*t400*t1137;
  t1175 = t1139 + t1170;
  t2225 = t257*t332*t393;
  t2236 = -1.*t221*t332*t400;
  t2241 = t2225 + t2236;
  t1293 = t221*t257*t332;
  t1336 = t332*t393*t400;
  t1351 = t1293 + t1336;
  t1375 = -1.*t221*t257*t511;
  t1377 = -1.*t393*t400*t511;
  t1378 = t1375 + t1377;
  t1420 = t221*t257*t1015;
  t1459 = t393*t400*t1015;
  t1481 = t1420 + t1459;
  t1531 = t221*t257*t1137;
  t1546 = t393*t400*t1137;
  t1563 = t1531 + t1546;
  t1889 = -1.*t1617*t1632;
  t1894 = t40*t511;
  t1899 = t1889 + t1894;
  t1949 = t40*t332;
  t2068 = -1.*t1617*t2065;
  t2080 = t1949 + t2068;
  t2093 = t40*t1137;
  t2144 = -1.*t1617*t2139;
  t2155 = t2093 + t2144;
  t2175 = t40*t2170;
  t2197 = -1.*t1617*t2186;
  t2200 = t2175 + t2197;
  t3220 = t2611*t1481;
  t3225 = -1.*t2517*t2155;
  t3229 = t3220 + t3225;
  t3231 = 0.241*t1112*t3229;
  t2396 = -0.242889*t616;
  t2405 = t616*t902;
  t2417 = t616*t2415;
  t2418 = -1.*t750*t740;
  t2426 = t2424*t740;
  t2449 = t2396 + t2405 + t2417 + t2418 + t2426;
  t2454 = -1.*t616*t2424;
  t2466 = t2415*t740;
  t2468 = t756 + t2454 + t788 + t927 + t2466;
  t3232 = t221*t257*t2361;
  t3233 = t393*t400*t2361;
  t3241 = t3232 + t3233;
  t3246 = t2611*t3241;
  t3248 = t40*t1015;
  t3249 = -1.*t1617*t2371;
  t3257 = t3248 + t3249;
  t3258 = -1.*t2517*t3257;
  t3267 = t3246 + t3258;
  t3269 = 0.241*t961*t3267;
  t2525 = -1.*t40*t1632;
  t2528 = t2525 + t2249;
  t2532 = -1.*t332*t1617;
  t2542 = -1.*t40*t2065;
  t2544 = t2532 + t2542;
  t2551 = -1.*t1617*t1137;
  t2556 = -1.*t40*t2139;
  t2559 = t2551 + t2556;
  t2582 = -1.*t1617*t2170;
  t2586 = -1.*t40*t2186;
  t2590 = t2582 + t2586;
  t2872 = -1.*t257*t393*t511;
  t2874 = t221*t400*t511;
  t2876 = t2872 + t2874;
  t2908 = t257*t393*t1015;
  t2909 = -1.*t221*t400*t1015;
  t2917 = t2908 + t2909;
  t2949 = t257*t393*t1137;
  t2953 = -1.*t221*t400*t1137;
  t2961 = t2949 + t2953;
  t3183 = t2611*t1378;
  t3188 = -1.*t2517*t2080;
  t3210 = t3183 + t3188;
  t3282 = t2611*t1563;
  t3290 = -1.*t2517*t2200;
  t3294 = t3282 + t3290;
  t3160 = -1.*t1617*t2241;
  t3170 = -1.*t40*t511;
  t3173 = t3160 + t3170;
  t3761 = t2517*t1481;
  t3767 = t2611*t2155;
  t3791 = t3761 + t3767;
  t3792 = 0.241*t1112*t3791;
  t3799 = t2517*t3241;
  t3800 = t2611*t3257;
  t3801 = t3799 + t3800;
  t3802 = 0.241*t961*t3801;
  t3927 = -0.04*t332;
  t3932 = 0.04*t511;
  t3936 = t3927 + t3932;
  t3926 = 0.053565*t400;
  t3937 = t257*t3936;
  t3940 = t3926 + t3937;
  t3950 = -1.*t257;
  t3951 = 1. + t3950;
  t4022 = -0.081715*t3951;
  t4047 = -0.13528*t257;
  t4072 = t400*t3936;
  t4073 = t4022 + t4047 + t4072;
  t4097 = t221*t257;
  t4101 = t393*t400;
  t4107 = t4097 + t4101;
  t4108 = -1.*t393*t3940;
  t4110 = t221*t4073;
  t4113 = t4108 + t4110;
  t4119 = -1.*t332;
  t4121 = 1. + t4119;
  t4138 = 0.242889*t4121;
  t4145 = 0.202889*t332;
  t4147 = -0.04*t511;
  t4152 = t4138 + t4145 + t4147;
  t3900 = t257*t393;
  t3903 = -1.*t221*t400;
  t3919 = t3900 + t3903;
  t3948 = t221*t3940;
  t4221 = 0.053565*t257;
  t4223 = -1.*t400*t3936;
  t4228 = t4221 + t4223;
  t4260 = -1.*t393*t4228;
  t4275 = t3948 + t4260;
  t4084 = t393*t4073;
  t4089 = t3948 + t4084;
  t4117 = -1.*t1617*t4113;
  t4156 = t40*t4152;
  t4157 = t4117 + t4156;
  t4161 = t40*t4113;
  t4165 = t1617*t4152;
  t4176 = t4161 + t4165;
  t4219 = t393*t3940;
  t4240 = t221*t4228;
  t4251 = t4219 + t4240;
  t4328 = t40*t1632;
  t4330 = t1617*t511;
  t4334 = t4328 + t4330;
  t4259 = Power(t40,2);
  t4290 = Power(t1617,2);
  t4301 = -1.*t221*t257;
  t4305 = -1.*t393*t400;
  t4310 = t4301 + t4305;
  t2270 = t332*t1617;
  t2274 = t40*t2065;
  t2276 = t2270 + t2274;
  t4503 = 0.242889*t511;
  t4507 = -1.*t511*t902;
  t4511 = t332*t750;
  t4512 = t4503 + t4507 + t4511;
  t4502 = 0.032875*t400;
  t4516 = t257*t4512;
  t4518 = t4502 + t4516;
  t4523 = -0.11459*t257;
  t4526 = t400*t4512;
  t4528 = t4022 + t4523 + t4526;
  t4557 = -1.*t393*t4518;
  t4559 = t221*t4528;
  t4562 = t4557 + t4559;
  t4573 = t332*t902;
  t4583 = t511*t750;
  t4586 = t4138 + t4573 + t4583;
  t4520 = t221*t4518;
  t4626 = 0.032875*t257;
  t4630 = -1.*t400*t4512;
  t4631 = t4626 + t4630;
  t4660 = -1.*t393*t4631;
  t4664 = t4520 + t4660;
  t4531 = t393*t4528;
  t4549 = t4520 + t4531;
  t4565 = -1.*t1617*t4562;
  t4590 = t40*t4586;
  t4592 = t4565 + t4590;
  t4596 = t40*t4562;
  t4597 = t1617*t4586;
  t4598 = t4596 + t4597;
  t4625 = t393*t4518;
  t4634 = t221*t4631;
  t4639 = t4625 + t4634;
  t2472 = t1617*t2170;
  t2479 = t40*t2186;
  t2486 = t2472 + t2479;
  t4093 = -1.*t3919*t4089;
  t4158 = t1617*t4107*t4157;
  t4202 = -1.*t40*t4107*t4176;
  t4203 = t4093 + t4158 + t4202;
  t4827 = -1.*t221*t3940;
  t4828 = -1.*t393*t4073;
  t4836 = t4827 + t4828;
  t4851 = -1.*t257*t393;
  t4854 = t221*t400;
  t4857 = t4851 + t4854;
  t4378 = t1351*t4089;
  t4387 = t4157*t1899;
  t4390 = t4176*t4334;
  t4395 = t4378 + t4387 + t4390;
  t4402 = t3919*t4089;
  t4403 = -1.*t1617*t4107*t4157;
  t4405 = t40*t4107*t4176;
  t4407 = t4402 + t4403 + t4405;
  t4481 = -1.*t4089*t1378;
  t4484 = -1.*t4176*t2276;
  t4488 = -1.*t4157*t2080;
  t4491 = t4481 + t4484 + t4488;
  t4555 = t3919*t4549;
  t4595 = -1.*t1617*t4107*t4592;
  t4601 = t40*t4107*t4598;
  t4607 = t4555 + t4595 + t4601;
  t4956 = -1.*t221*t4518;
  t4958 = -1.*t393*t4528;
  t4963 = t4956 + t4958;
  t4702 = -1.*t4549*t1481;
  t4708 = -1.*t4598*t2322;
  t4712 = -1.*t4592*t2155;
  t4715 = t4702 + t4708 + t4712;
  t4722 = -1.*t3919*t4549;
  t4723 = t1617*t4107*t4592;
  t4727 = -1.*t40*t4107*t4598;
  t4729 = t4722 + t4723 + t4727;
  t4783 = t4549*t1563;
  t4787 = t4598*t2486;
  t4792 = t4592*t2200;
  t4794 = t4783 + t4787 + t4792;
  t5070 = -1.*t40*t4113;
  t5072 = -1.*t1617*t4152;
  t5074 = t5070 + t5072;
  t5205 = -1.*t40*t4562;
  t5210 = -1.*t1617*t4586;
  t5212 = t5205 + t5210;
  t5336 = 0.04*t332;
  t5343 = t5336 + t3932;
  t5357 = -1.*t257*t393*t5343;
  t5358 = t221*t400*t5343;
  t5369 = t5357 + t5358;
  t5413 = t221*t257*t5343;
  t5414 = t393*t400*t5343;
  t5423 = t5413 + t5414;
  t5373 = -1.*t1617*t5369;
  t5375 = t40*t3936;
  t5380 = t5373 + t5375;
  t5387 = t40*t5369;
  t5392 = t1617*t3936;
  t5393 = t5387 + t5392;
  t2243 = t40*t2241;
  t2257 = t2243 + t2249;
  t5607 = 0.242889*t332;
  t5609 = -1.*t332*t902;
  t5612 = -1.*t511*t750;
  t5619 = t5607 + t5609 + t5612;
  t5623 = -1.*t257*t393*t5619;
  t5624 = t221*t400*t5619;
  t5626 = t5623 + t5624;
  t5663 = t221*t257*t5619;
  t5665 = t393*t400*t5619;
  t5668 = t5663 + t5665;
  t5645 = t40*t5626;
  t5649 = t1617*t4512;
  t5656 = t5645 + t5649;
  t5632 = -1.*t1617*t5626;
  t5638 = t40*t4512;
  t5641 = t5632 + t5638;
  t5605 = t4729*t2322;
  t5832 = -1.*t511*t2424;
  t5833 = t332*t2415;
  t5835 = t5832 + t5833;
  t5853 = -1.*t257*t393*t5835;
  t5854 = t221*t400*t5835;
  t5857 = t5853 + t5854;
  t5862 = t332*t2424;
  t5865 = t511*t2415;
  t5866 = t5862 + t5865;
  t5688 = t4549*t1481;
  t5841 = t221*t257*t5835;
  t5843 = t393*t400*t5835;
  t5849 = t5841 + t5843;
  t5693 = t4598*t2322;
  t5695 = t4592*t2155;
  t5880 = t40*t5857;
  t5886 = t1617*t5866;
  t5889 = t5880 + t5886;
  t5858 = -1.*t1617*t5857;
  t5877 = t40*t5866;
  t5878 = t5858 + t5877;
  t5735 = t4607*t2377;
  t5745 = -1.*t4549*t3241;
  t5757 = -1.*t4598*t2377;
  t5760 = -1.*t4592*t3257;
  t4353 = t1351*t4251;
  t4867 = t1351*t4113;
  t4360 = t2241*t4089;
  t4252 = -1.*t3919*t4251;
  t4826 = -1.*t3919*t4113;
  t4311 = -1.*t4310*t4089;
  t4423 = t3919*t4251;
  t4896 = t3919*t4113;
  t4434 = t4310*t4089;
  t4454 = -1.*t4089*t2876;
  t4455 = -1.*t4251*t1378;
  t4923 = -1.*t4113*t1378;
  t4657 = t3919*t4639;
  t4951 = t3919*t4562;
  t4668 = t4310*t4549;
  t4679 = -1.*t4549*t2917;
  t4684 = -1.*t4639*t1481;
  t4992 = -1.*t4562*t1481;
  t4737 = -1.*t3919*t4639;
  t5014 = -1.*t3919*t4562;
  t4742 = -1.*t4310*t4549;
  t4756 = t4549*t2961;
  t4758 = t4639*t1563;
  t5040 = t4562*t1563;
  t5968 = -1.*t4107*t4113;
  t5973 = t5968 + t4093;
  t4872 = t1632*t4089;
  t4848 = -1.*t4107*t4089;
  t5986 = t1632*t4113;
  t5988 = t4152*t511;
  t5991 = t5986 + t4378 + t5988;
  t6004 = t4107*t4113;
  t6005 = t6004 + t4402;
  t4911 = t4107*t4089;
  t6018 = -1.*t332*t4152;
  t6025 = -1.*t4113*t2065;
  t6027 = t6018 + t6025 + t4481;
  t4922 = -1.*t4089*t2065;
  t6040 = t4107*t4562;
  t6041 = t6040 + t4555;
  t4973 = t4107*t4549;
  t4988 = -1.*t4549*t2139;
  t6059 = -1.*t4586*t1137;
  t6060 = -1.*t4562*t2139;
  t6061 = t6059 + t6060 + t4702;
  t6079 = -1.*t4107*t4562;
  t6080 = t6079 + t4722;
  t5017 = -1.*t4107*t4549;
  t5028 = t4549*t2186;
  t6108 = t4586*t2170;
  t6110 = t4562*t2186;
  t6111 = t6108 + t6110 + t4783;
  t5424 = -1.*t3919*t5423;
  t5451 = t1351*t5423;
  t5466 = t4089*t1378;
  t5509 = t3919*t5423;
  t5516 = -1.*t497*t4089;
  t5532 = -1.*t5423*t1378;
  t5673 = -1.*t3919*t5668;
  t5691 = t5668*t1563;
  t5728 = t3919*t5668;
  t5736 = -1.*t5668*t1481;
  t6547 = t6080*t1481;
  t5850 = -1.*t3919*t5849;
  t6565 = t4586*t1137;
  t6569 = t4562*t2139;
  t5903 = t5849*t1563;
  t5923 = t3919*t5849;
  t6630 = t6041*t3241;
  t6635 = -1.*t4586*t1015;
  t5941 = -1.*t5849*t1481;
  t6644 = -1.*t4562*t2371;
  t6808 = t400*t4518;
  t6809 = -1.*t257*t4528;
  t6811 = t6808 + t6809;
  t6816 = 0.241*t6811*t1137*t961;
  t6819 = -1.*t400*t4518;
  t6820 = t257*t4528;
  t6821 = t6819 + t6820;
  t6822 = 0.241*t6821*t1015*t1112;
  t6915 = 0.007922875*t1015*t1112;
  t6917 = -0.11459*t1137;
  t6918 = -0.081715*t2361;
  t6919 = t6917 + t6918;
  t6924 = 0.241*t961*t6919;
  p_output1[0]=var2[7]*(-0.5*(0.06108*t1899 - 0.06108*t2080 + 0.241*t1112*t2200 + 0.241*t2155*t961)*var2[4] - 0.5*(0.241*t1112*t1175*t40 + 0.06108*t40*t497 - 0.06108*t40*t578 + 0.241*t1075*t40*t961)*var2[5] - 0.5*(0.06108*t1351*t40 - 0.06108*t1378*t40 + 0.241*t1112*t1563*t40 + 0.241*t1481*t40*t961)*var2[6] - 0.5*(-0.06108*t2257 + 0.06108*t2276 + t2325 + t2382)*var2[7] - 0.5*(t2325 + t2382 + 0.241*t2322*t2449 + 0.241*t2468*t2486)*var2[8]);
  p_output1[1]=var2[7]*(-0.5*(0.06108*(-1.*t1351*t2517 - 1.*t1899*t2611) - 0.06108*(-1.*t1378*t2517 - 1.*t2080*t2611) + 0.241*t1112*(-1.*t1563*t2517 - 1.*t2200*t2611) + 0.241*(-1.*t1481*t2517 - 1.*t2155*t2611)*t961)*var2[3] - 0.5*(-0.06108*t2517*t2528 + 0.06108*t2517*t2544 - 0.241*t1112*t2517*t2590 - 0.241*t2517*t2559*t961)*var2[4] - 0.5*(0.241*t1112*(t1175*t1617*t2517 + t2186*t2611) + 0.06108*(t1632*t2611 + t1617*t2517*t497) - 0.06108*(t2065*t2611 + t1617*t2517*t578) + 0.241*(t1075*t1617*t2517 + t2139*t2611)*t961)*var2[5] - 0.5*(0.06108*(t1351*t1617*t2517 + t2241*t2611) - 0.06108*(t1378*t1617*t2517 + t2611*t2876) + 0.241*t1112*(t1563*t1617*t2517 + t2611*t2961) + 0.241*(t1481*t1617*t2517 + t2611*t2917)*t961)*var2[6] - 0.5*(0.06108*t3210 + t3231 + t3269 - 0.06108*(-1.*t2517*t3173 + t2611*t497))*var2[7] - 0.5*(0.241*t2449*t3229 + t3231 + t3269 + 0.241*t2468*t3294)*var2[8]);
  p_output1[2]=var2[7]*(-0.5*(0.06108*(-1.*t1899*t2517 + t1351*t2611) - 0.06108*t3210 + 0.241*t1112*t3294 + 0.241*t3229*t961)*var2[3] - 0.5*(0.06108*t2528*t2611 - 0.06108*t2544*t2611 + 0.241*t1112*t2590*t2611 + 0.241*t2559*t2611*t961)*var2[4] - 0.5*(0.241*t1112*(t2186*t2517 - 1.*t1175*t1617*t2611) + 0.06108*(t1632*t2517 - 1.*t1617*t2611*t497) - 0.06108*(t2065*t2517 - 1.*t1617*t2611*t578) + 0.241*(t2139*t2517 - 1.*t1075*t1617*t2611)*t961)*var2[5] - 0.5*(0.06108*(t2241*t2517 - 1.*t1351*t1617*t2611) - 0.06108*(-1.*t1378*t1617*t2611 + t2517*t2876) + 0.241*t1112*(-1.*t1563*t1617*t2611 + t2517*t2961) + 0.241*(-1.*t1481*t1617*t2611 + t2517*t2917)*t961)*var2[6] - 0.5*(0.06108*(t1378*t2517 + t2080*t2611) + t3792 + t3802 - 0.06108*(t2611*t3173 + t2517*t497))*var2[7] - 0.5*(0.241*t2468*(t1563*t2517 + t2200*t2611) + 0.241*t2449*t3791 + t3792 + t3802)*var2[8]);
  p_output1[3]=var2[7]*(-0.5*(0.06108*(t2080*t4407 - 1.*t1617*t4107*t4491 + t40*t4107*(-1.*t2276*t4157 - 1.*t2544*t4157 - 1.*t2080*t4176 - 1.*t2080*t5074) + t2276*(-1.*t1617*t4107*t4176 - 1.*t1617*t4107*t5074)) - 0.06108*(t1899*t4203 - 1.*t1617*t4107*t4395 + t40*t4107*(t2528*t4157 + t1899*t4176 + t4157*t4334 + t1899*t5074) + t4334*(t1617*t4107*t4176 + t1617*t4107*t5074)) + 0.241*t1112*(t2155*t4607 - 1.*t1617*t4107*t4715 + t40*t4107*(-1.*t2322*t4592 - 1.*t2559*t4592 - 1.*t2155*t4598 - 1.*t2155*t5212) + t2322*(-1.*t1617*t4107*t4598 - 1.*t1617*t4107*t5212)) + 0.241*(t2200*t4729 - 1.*t1617*t4107*t4794 + t40*t4107*(t2486*t4592 + t2590*t4592 + t2200*t4598 + t2200*t5212) + t2486*(t1617*t4107*t4598 + t1617*t4107*t5212))*t961)*var2[4] - 0.5*(-0.06108*(t40*t4395*t4857 + t4334*(t4826 - 1.*t4107*t4259*t4836 - 1.*t4107*t4290*t4836 + t4848 + t1617*t4157*t4857 - 1.*t40*t4176*t4857) + t40*t4203*t497 + t40*t4107*(-1.*t1617*t1899*t4836 + t40*t4334*t4836 + t4867 + t4872 - 1.*t1617*t4157*t497 + t40*t4176*t497)) + 0.241*t1112*(t1075*t40*t4607 + t40*t4715*t4857 + t2322*(-1.*t1617*t4592*t4857 + t40*t4598*t4857 + t4951 + t4107*t4259*t4963 + t4107*t4290*t4963 + t4973) + t40*t4107*(t1075*t1617*t4592 - 1.*t1075*t40*t4598 + t1617*t2155*t4963 - 1.*t2322*t40*t4963 + t4988 + t4992)) + 0.06108*(t40*t4491*t4857 + t2276*(t4107*t4259*t4836 + t4107*t4290*t4836 - 1.*t1617*t4157*t4857 + t40*t4176*t4857 + t4896 + t4911) + t40*t4407*t578 + t40*t4107*(t1617*t2080*t4836 - 1.*t2276*t40*t4836 + t4922 + t4923 + t1617*t4157*t578 - 1.*t40*t4176*t578)) + 0.241*(t1175*t40*t4729 + t40*t4794*t4857 + t2486*(t1617*t4592*t4857 - 1.*t40*t4598*t4857 - 1.*t4107*t4259*t4963 - 1.*t4107*t4290*t4963 + t5014 + t5017) + t40*t4107*(-1.*t1175*t1617*t4592 + t1175*t40*t4598 - 1.*t1617*t2200*t4963 + t2486*t40*t4963 + t5028 + t5040))*t961)*var2[5] - 0.5*(-0.06108*(t1351*t40*t4203 + (t1617*t3919*t4157 - 1.*t3919*t40*t4176 + t4252 - 1.*t4107*t4259*t4275 - 1.*t4107*t4275*t4290 + t4311)*t4334 + t40*t4107*(-1.*t1351*t1617*t4157 + t1351*t40*t4176 - 1.*t1617*t1899*t4275 + t40*t4275*t4334 + t4353 + t4360) + t3919*t40*t4395) + 0.06108*(t1378*t40*t4407 + t2276*(-1.*t1617*t3919*t4157 + t3919*t40*t4176 + t4107*t4259*t4275 + t4107*t4275*t4290 + t4423 + t4434) + t40*t4107*(t1378*t1617*t4157 - 1.*t1378*t40*t4176 + t1617*t2080*t4275 - 1.*t2276*t40*t4275 + t4454 + t4455) + t3919*t40*t4491) + 0.241*t1112*(t1481*t40*t4607 + t2322*(-1.*t1617*t3919*t4592 + t3919*t40*t4598 + t4657 + t4107*t4259*t4664 + t4107*t4290*t4664 + t4668) + t40*t4107*(t1481*t1617*t4592 - 1.*t1481*t40*t4598 + t1617*t2155*t4664 - 1.*t2322*t40*t4664 + t4679 + t4684) + t3919*t40*t4715) + 0.241*(t1563*t40*t4729 + t2486*(t1617*t3919*t4592 - 1.*t3919*t40*t4598 - 1.*t4107*t4259*t4664 - 1.*t4107*t4290*t4664 + t4737 + t4742) + t40*t4107*(-1.*t1563*t1617*t4592 + t1563*t40*t4598 - 1.*t1617*t2200*t4664 + t2486*t40*t4664 + t4756 + t4758) + t3919*t40*t4794)*t961)*var2[6] - 0.5*(-0.06108*(t2276*t4203 + t4334*(t1617*t4107*t5380 - 1.*t40*t4107*t5393 + t5424) + t40*t4107*(t2080*t4157 + t2276*t4176 + t1899*t5380 + t4334*t5393 + t5451 + t5466)) + 0.06108*(t2257*t4407 + t2276*(-1.*t1617*t4107*t5380 + t40*t4107*t5393 + t5509) + t40*t4107*(-1.*t3173*t4157 - 1.*t2257*t4176 - 1.*t2080*t5380 - 1.*t2276*t5393 + t5516 + t5532)) + 0.241*t1112*(t2322*(-1.*t1617*t4107*t5641 + t40*t4107*t5656 + t5728) + t5735 + t40*t4107*(-1.*t2155*t5641 - 1.*t2322*t5656 + t5736 + t5745 + t5757 + t5760)) + 0.241*(t5605 + t2486*(t1617*t4107*t5641 - 1.*t40*t4107*t5656 + t5673) + t40*t4107*(t2200*t5641 + t2486*t5656 + t5688 + t5691 + t5693 + t5695))*t961)*var2[7] - 0.5*(0.241*t2468*(t2322*t4607 + t40*t4107*t4715) + 0.241*t2449*(t2486*t4729 + t40*t4107*t4794) + 0.241*t1112*(t5735 + t2322*(-1.*t1617*t4107*t5878 + t40*t4107*t5889 + t5923) + t40*t4107*(t5745 + t5757 + t5760 - 1.*t2155*t5878 - 1.*t2322*t5889 + t5941)) + 0.241*(t5605 + t2486*(t5850 + t1617*t4107*t5878 - 1.*t40*t4107*t5889) + t40*t4107*(t5688 + t5693 + t5695 + t2200*t5878 + t2486*t5889 + t5903))*t961)*var2[8]);
  p_output1[4]=var2[7]*(-0.5*(-0.06108*(t1351*(t4826 - 1.*t4107*t4836 + t4848 - 1.*t4113*t4857) + t3919*(t1632*t4836 + t4867 + t4872 + t4113*t497) + t1632*t5973 + t4107*t5991) + 0.06108*(t1378*(t4107*t4836 + t4113*t4857 + t4896 + t4911) + t3919*(-1.*t2065*t4836 + t4922 + t4923 - 1.*t4113*t578) + t2065*t6005 + t4107*t6027) + 0.241*t1112*(t1481*(t4562*t4857 + t4951 + t4107*t4963 + t4973) + t3919*(-1.*t1075*t4562 - 1.*t2139*t4963 + t4988 + t4992) + t2139*t6041 + t4107*t6061) + 0.241*(t1563*(-1.*t4562*t4857 - 1.*t4107*t4963 + t5014 + t5017) + t3919*(t1175*t4562 + t2186*t4963 + t5028 + t5040) + t2186*t6080 + t4107*t6111)*t961)*var2[5] - 0.5*(-0.06108*(t1351*(t4252 - 1.*t4107*t4275 + t4311 + t4826) + t3919*(t1632*t4275 + t4353 + t4360 + t4867) + t2241*t5973 + t4310*t5991) + 0.06108*(t1378*(t4107*t4275 + t4423 + t4434 + t4896) + t3919*(-1.*t2065*t4275 + t4454 + t4455 + t4923) + t2876*t6005 + t4310*t6027) + 0.241*t1112*(t1481*(t4657 + t4107*t4664 + t4668 + t4951) + t3919*(-1.*t2139*t4664 + t4679 + t4684 + t4992) + t2917*t6041 + t4310*t6061) + 0.241*(t1563*(-1.*t4107*t4664 + t4737 + t4742 + t5014) + t3919*(t2186*t4664 + t4756 + t4758 + t5040) + t2961*t6080 + t4310*t6111)*t961)*var2[6] - 0.5*(-0.06108*(t1351*(-1.*t4107*t5369 + t5424) + t3919*(t2065*t4113 + t332*t4152 + t3936*t511 + t1632*t5369 + t5451 + t5466) + t1378*t5973) + 0.06108*(t1378*(t4107*t5369 + t5509) + t3919*(-1.*t332*t3936 - 1.*t2241*t4113 - 1.*t2065*t5369 + t5516 + t5532 + t5988) + t497*t6005) + 0.241*t1112*(t1481*(t4107*t5626 + t5728) + t6630 + t3919*(-1.*t1137*t4512 - 1.*t2139*t5626 + t5736 + t5745 + t6635 + t6644)) + 0.241*(t1563*(-1.*t4107*t5626 + t5673) + t6547 + t3919*(t2170*t4512 + t2186*t5626 + t5688 + t5691 + t6565 + t6569))*t961)*var2[7] - 0.5*(0.241*t2468*(t1481*t6041 + t3919*t6061) + 0.241*t2449*(t1563*t6080 + t3919*t6111) + 0.241*t1112*(t1481*(t4107*t5857 + t5923) + t6630 + t3919*(t5745 - 1.*t2139*t5857 - 1.*t1137*t5866 + t5941 + t6635 + t6644)) + 0.241*(t1563*(t5850 - 1.*t4107*t5857) + t6547 + t3919*(t5688 + t2186*t5857 + t2170*t5866 + t5903 + t6565 + t6569))*t961)*var2[8]);
  p_output1[5]=var2[7]*(-0.5*(0.06108*t332*(-1.*t400*t4073 - 1.*t400*t4228) + 0.241*t1112*t1137*(-1.*t400*t4528 - 1.*t400*t4631) - 0.06108*(t400*t4073 + t400*t4228)*t511 + 0.241*t2170*(t400*t4528 + t400*t4631)*t961)*var2[6] - 0.5*(-0.06108*t332*(t3940*t400 - 1.*t257*t4073) - 0.06108*(-1.*t3940*t400 + t257*t4073)*t511 + t6816 + t6822)*var2[7] - 0.5*(0.241*t2170*t2449*t6811 + t6816 + 0.241*t1137*t2468*t6821 + t6822)*var2[8]);
  p_output1[6]=var2[7]*(-0.5*(0.0032717502*t332 - 0.0032717502*t511 + t6915 + t6924)*var2[7] - 0.5*(0.241*(-0.081715*t1015 - 0.11459*t2170)*t2449 + 0.007922875*t1137*t2468 + t6915 + t6924)*var2[8]);
  p_output1[7]=-0.5*(0.482*t1112*t2468 + 0.482*t2449*t961)*var2[7]*var2[8];
  p_output1[8]=-0.5*(-0.03856*t2449 + 0.00482*t2468)*var2[7]*var2[8];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce1_vec8_plane.hh"

namespace SymFunction
{

void Ce1_vec8_plane_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
