/*
 * Automatically Generated from Mathematica.
 * Sun 28 Jul 2019 02:54:28 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
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

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t113;
  double t27;
  double t338;
  double t478;
  double t310;
  double t498;
  double t399;
  double t513;
  double t547;
  double t573;
  double t586;
  double t594;
  double t608;
  double t654;
  double t757;
  double t791;
  double t737;
  double t839;
  double t881;
  double t575;
  double t583;
  double t617;
  double t659;
  double t664;
  double t677;
  double t682;
  double t999;
  double t971;
  double t1016;
  double t1019;
  double t1027;
  double t771;
  double t782;
  double t789;
  double t793;
  double t800;
  double t814;
  double t818;
  double t1229;
  double t1199;
  double t1250;
  double t1255;
  double t1270;
  double t848;
  double t858;
  double t871;
  double t883;
  double t908;
  double t920;
  double t930;
  double t1631;
  double t1517;
  double t1639;
  double t1641;
  double t1644;
  double t981;
  double t988;
  double t994;
  double t1029;
  double t1817;
  double t1827;
  double t1832;
  double t1841;
  double t1067;
  double t1140;
  double t1147;
  double t1853;
  double t1864;
  double t1866;
  double t1200;
  double t1225;
  double t1226;
  double t1274;
  double t1990;
  double t1995;
  double t2006;
  double t2018;
  double t1401;
  double t1403;
  double t1410;
  double t2039;
  double t2041;
  double t2042;
  double t1542;
  double t1544;
  double t1566;
  double t1647;
  double t2223;
  double t2231;
  double t2259;
  double t2288;
  double t1724;
  double t1769;
  double t1770;
  double t2304;
  double t2305;
  double t2317;
  double t571;
  double t2414;
  double t2504;
  double t2489;
  double t2498;
  double t2501;
  double t2509;
  double t2511;
  double t2540;
  double t2543;
  double t2598;
  double t2613;
  double t2622;
  double t2628;
  double t2629;
  double t2601;
  double t2603;
  double t2606;
  double t2669;
  double t2747;
  double t2767;
  double t2805;
  double t3008;
  double t3015;
  double t3034;
  double t3051;
  double t2925;
  double t2977;
  double t2997;
  double t3378;
  double t3276;
  double t3291;
  double t3294;
  double t3307;
  double t3313;
  double t3517;
  double t3565;
  double t3595;
  double t3347;
  double t3384;
  double t3397;
  double t3408;
  double t3452;
  double t3730;
  double t3731;
  double t3740;
  double t3468;
  double t3473;
  double t3477;
  double t3479;
  double t3482;
  double t3870;
  double t3871;
  double t3909;
  double t3503;
  double t3614;
  double t1834;
  double t1847;
  double t1852;
  double t1874;
  double t1887;
  double t1895;
  double t3655;
  double t3663;
  double t3667;
  double t4028;
  double t4036;
  double t4039;
  double t3726;
  double t3756;
  double t2014;
  double t2021;
  double t2023;
  double t2048;
  double t2068;
  double t2091;
  double t3807;
  double t3811;
  double t3821;
  double t4181;
  double t4226;
  double t4232;
  double t3865;
  double t3931;
  double t2272;
  double t2291;
  double t2300;
  double t2327;
  double t2330;
  double t2333;
  double t4002;
  double t4008;
  double t4011;
  double t4396;
  double t4398;
  double t4439;
  double t3282;
  double t4591;
  double t4593;
  double t4601;
  double t4616;
  double t4623;
  double t4666;
  double t4675;
  double t4699;
  double t4646;
  double t4723;
  double t3045;
  double t3063;
  double t3073;
  double t4790;
  double t4825;
  double t4867;
  double t3091;
  double t3127;
  double t3148;
  double t4895;
  double t4900;
  double t4905;
  double t5047;
  double t5063;
  double t5066;
  double t5089;
  double t5106;
  double t5122;
  double t5085;
  double t5124;
  double t5126;
  double t5127;
  double t5129;
  double t5253;
  double t5255;
  double t5263;
  double t5179;
  double t5180;
  double t5181;
  double t5185;
  double t5186;
  double t5282;
  double t5284;
  double t5285;
  double t5199;
  double t5210;
  double t5212;
  double t5219;
  double t5225;
  double t5313;
  double t5316;
  double t5318;
  double t5923;
  double t5939;
  double t5940;
  double t5941;
  double t5942;
  double t5970;
  double t5976;
  double t5978;
  double t6205;
  double t6206;
  double t6209;
  double t6184;
  double t6213;
  double t6216;
  double t6220;
  double t6226;
  double t6260;
  double t6261;
  double t6262;
  double t6402;
  double t6407;
  double t6415;
  double t6417;
  double t6419;
  double t6424;
  double t6438;
  double t6473;
  double t6482;
  double t6489;
  double t6499;
  double t6591;
  double t6592;
  double t6595;
  double t6522;
  double t6695;
  double t6698;
  double t6700;
  double t6701;
  double t6721;
  double t6725;
  double t6814;
  double t6818;
  double t6823;
  double t6824;
  double t6825;
  double t6900;
  double t6904;
  double t6913;
  double t7021;
  double t7041;
  double t7048;
  double t6921;
  double t6958;
  double t7155;
  double t7158;
  double t7160;
  double t7171;
  double t7180;
  double t7240;
  double t7246;
  double t7248;
  double t7388;
  double t7390;
  double t7384;
  double t7392;
  double t7395;
  double t7399;
  double t7402;
  double t7440;
  double t7449;
  double t7451;
  double t7545;
  double t7547;
  double t7548;
  double t7464;
  double t7483;
  double t7606;
  double t7612;
  double t7618;
  double t7619;
  double t7639;
  double t7641;
  double t7813;
  double t7820;
  double t7822;
  double t7825;
  double t7832;
  double t7892;
  double t7894;
  double t7931;
  double t8097;
  double t8118;
  double t8125;
  double t7939;
  double t8021;
  t113 = Sin(var1[3]);
  t27 = Cos(var1[4]);
  t338 = Cos(var1[5]);
  t478 = Sin(var1[4]);
  t310 = Cos(var1[3]);
  t498 = Sin(var1[5]);
  t399 = t310*t338;
  t513 = -1.*t113*t478*t498;
  t547 = t399 + t513;
  t573 = Cos(var1[9]);
  t586 = t338*t113*t478;
  t594 = t310*t498;
  t608 = t586 + t594;
  t654 = Sin(var1[9]);
  t757 = Cos(var1[12]);
  t791 = Sin(var1[12]);
  t737 = 0.194401*t27*t113;
  t839 = Cos(var1[15]);
  t881 = Sin(var1[15]);
  t575 = -1.*t573;
  t583 = 1. + t575;
  t617 = 0.081715*t583*t608;
  t659 = -0.081715*t654*t547;
  t664 = t573*t608;
  t677 = t654*t547;
  t682 = t664 + t677;
  t999 = Sin(var1[10]);
  t971 = Cos(var1[10]);
  t1016 = -1.*t654*t608;
  t1019 = t573*t547;
  t1027 = t1016 + t1019;
  t771 = -1.*t757;
  t782 = 1. + t771;
  t789 = -0.081715*t782*t608;
  t793 = -0.081715*t791*t547;
  t800 = t757*t608;
  t814 = -1.*t791*t547;
  t818 = t800 + t814;
  t1229 = Sin(var1[13]);
  t1199 = Cos(var1[13]);
  t1250 = t791*t608;
  t1255 = t757*t547;
  t1270 = t1250 + t1255;
  t848 = -1.*t839;
  t858 = 1. + t848;
  t871 = 0.081715*t858*t608;
  t883 = -0.081715*t881*t547;
  t908 = t839*t608;
  t920 = t881*t547;
  t930 = t908 + t920;
  t1631 = Sin(var1[16]);
  t1517 = Cos(var1[16]);
  t1639 = -1.*t881*t608;
  t1641 = t839*t547;
  t1644 = t1639 + t1641;
  t981 = -1.*t971;
  t988 = 1. + t981;
  t994 = -0.242889*t988*t27*t113;
  t1029 = 0.242889*t999*t1027;
  t1817 = Cos(var1[11]);
  t1827 = -1.*t1817;
  t1832 = 1. + t1827;
  t1841 = Sin(var1[11]);
  t1067 = -1.*t971*t27*t113;
  t1140 = -1.*t999*t1027;
  t1147 = t1067 + t1140;
  t1853 = -1.*t27*t999*t113;
  t1864 = t971*t1027;
  t1866 = t1853 + t1864;
  t1200 = -1.*t1199;
  t1225 = 1. + t1200;
  t1226 = 0.194401*t1225*t27*t113;
  t1274 = -0.194401*t1229*t1270;
  t1990 = Cos(var1[14]);
  t1995 = -1.*t1990;
  t2006 = 1. + t1995;
  t2018 = Sin(var1[14]);
  t1401 = -1.*t1199*t27*t113;
  t1403 = -1.*t1229*t1270;
  t1410 = t1401 + t1403;
  t2039 = -1.*t27*t1229*t113;
  t2041 = t1199*t1270;
  t2042 = t2039 + t2041;
  t1542 = -1.*t1517;
  t1544 = 1. + t1542;
  t1566 = 0.194401*t1544*t27*t113;
  t1647 = -0.194401*t1631*t1644;
  t2223 = Cos(var1[17]);
  t2231 = -1.*t2223;
  t2259 = 1. + t2231;
  t2288 = Sin(var1[17]);
  t1724 = -1.*t1517*t27*t113;
  t1769 = -1.*t1631*t1644;
  t1770 = t1724 + t1769;
  t2304 = -1.*t27*t1631*t113;
  t2305 = t1517*t1644;
  t2317 = t2304 + t2305;
  t571 = -0.242889*t27*t113;
  t2414 = Cos(var1[6]);
  t2504 = Sin(var1[6]);
  t2489 = -1.*t2414;
  t2498 = 1. + t2489;
  t2501 = -0.081715*t2498*t608;
  t2509 = -0.081715*t547*t2504;
  t2511 = t2414*t608;
  t2540 = -1.*t547*t2504;
  t2543 = t2511 + t2540;
  t2598 = Cos(var1[7]);
  t2613 = t2414*t547;
  t2622 = t608*t2504;
  t2628 = t2613 + t2622;
  t2629 = Sin(var1[7]);
  t2601 = -1.*t2598;
  t2603 = 1. + t2601;
  t2606 = -0.242889*t27*t2603*t113;
  t2669 = 0.242889*t2628*t2629;
  t2747 = -1.*t27*t2598*t113;
  t2767 = -1.*t2628*t2629;
  t2805 = t2747 + t2767;
  t3008 = Cos(var1[8]);
  t3015 = -1.*t3008;
  t3034 = 1. + t3015;
  t3051 = Sin(var1[8]);
  t2925 = t2598*t2628;
  t2977 = -1.*t27*t113*t2629;
  t2997 = t2925 + t2977;
  t3378 = 0.194401*t310*t478;
  t3276 = -0.081715*t583*t310*t27*t338;
  t3291 = -0.081715*t310*t27*t654*t498;
  t3294 = -1.*t573*t310*t27*t338;
  t3307 = t310*t27*t654*t498;
  t3313 = t3294 + t3307;
  t3517 = t310*t27*t338*t654;
  t3565 = t573*t310*t27*t498;
  t3595 = t3517 + t3565;
  t3347 = 0.081715*t782*t310*t27*t338;
  t3384 = -0.081715*t310*t27*t791*t498;
  t3397 = -1.*t757*t310*t27*t338;
  t3408 = -1.*t310*t27*t791*t498;
  t3452 = t3397 + t3408;
  t3730 = -1.*t310*t27*t338*t791;
  t3731 = t757*t310*t27*t498;
  t3740 = t3730 + t3731;
  t3468 = -0.081715*t858*t310*t27*t338;
  t3473 = -0.081715*t310*t27*t881*t498;
  t3477 = -1.*t839*t310*t27*t338;
  t3479 = t310*t27*t881*t498;
  t3482 = t3477 + t3479;
  t3870 = t310*t27*t338*t881;
  t3871 = t839*t310*t27*t498;
  t3909 = t3870 + t3871;
  t3503 = -0.242889*t988*t310*t478;
  t3614 = 0.242889*t999*t3595;
  t1834 = -0.20833*t1832;
  t1847 = 0.100689*t1841;
  t1852 = t1834 + t1847;
  t1874 = 0.100689*t1832;
  t1887 = 0.20833*t1841;
  t1895 = t1874 + t1887;
  t3655 = -1.*t971*t310*t478;
  t3663 = -1.*t999*t3595;
  t3667 = t3655 + t3663;
  t4028 = -1.*t310*t999*t478;
  t4036 = t971*t3595;
  t4039 = t4028 + t4036;
  t3726 = 0.194401*t1225*t310*t478;
  t3756 = -0.194401*t1229*t3740;
  t2014 = -0.20833*t2006;
  t2021 = -0.336601*t2018;
  t2023 = 0. + t2014 + t2021;
  t2048 = -0.336601*t2006;
  t2068 = 0.20833*t2018;
  t2091 = 0. + t2048 + t2068;
  t3807 = -1.*t1199*t310*t478;
  t3811 = -1.*t1229*t3740;
  t3821 = t3807 + t3811;
  t4181 = -1.*t310*t1229*t478;
  t4226 = t1199*t3740;
  t4232 = t4181 + t4226;
  t3865 = 0.194401*t1544*t310*t478;
  t3931 = -0.194401*t1631*t3909;
  t2272 = -0.20833*t2259;
  t2291 = -0.336601*t2288;
  t2300 = 0. + t2272 + t2291;
  t2327 = -0.336601*t2259;
  t2330 = 0.20833*t2288;
  t2333 = 0. + t2327 + t2330;
  t4002 = -1.*t1517*t310*t478;
  t4008 = -1.*t1631*t3909;
  t4011 = t4002 + t4008;
  t4396 = -1.*t310*t1631*t478;
  t4398 = t1517*t3909;
  t4439 = t4396 + t4398;
  t3282 = -0.242889*t310*t478;
  t4591 = 0.081715*t310*t27*t338*t2498;
  t4593 = -0.081715*t310*t27*t498*t2504;
  t4601 = -1.*t310*t27*t338*t2414;
  t4616 = -1.*t310*t27*t498*t2504;
  t4623 = t4601 + t4616;
  t4666 = t310*t27*t2414*t498;
  t4675 = -1.*t310*t27*t338*t2504;
  t4699 = t4666 + t4675;
  t4646 = -0.242889*t310*t2603*t478;
  t4723 = 0.242889*t4699*t2629;
  t3045 = -0.20833*t3034;
  t3063 = 0.100689*t3051;
  t3073 = t3045 + t3063;
  t4790 = -1.*t310*t2598*t478;
  t4825 = -1.*t4699*t2629;
  t4867 = t4790 + t4825;
  t3091 = 0.100689*t3034;
  t3127 = 0.20833*t3051;
  t3148 = t3091 + t3127;
  t4895 = t2598*t4699;
  t4900 = -1.*t310*t478*t2629;
  t4905 = t4895 + t4900;
  t5047 = t310*t338*t478;
  t5063 = -1.*t113*t498;
  t5066 = t5047 + t5063;
  t5089 = t338*t113;
  t5106 = t310*t478*t498;
  t5122 = t5089 + t5106;
  t5085 = -0.081715*t654*t5066;
  t5124 = 0.081715*t583*t5122;
  t5126 = t654*t5066;
  t5127 = t573*t5122;
  t5129 = t5126 + t5127;
  t5253 = t573*t5066;
  t5255 = -1.*t654*t5122;
  t5263 = t5253 + t5255;
  t5179 = -0.081715*t791*t5066;
  t5180 = -0.081715*t782*t5122;
  t5181 = -1.*t791*t5066;
  t5185 = t757*t5122;
  t5186 = t5181 + t5185;
  t5282 = t757*t5066;
  t5284 = t791*t5122;
  t5285 = t5282 + t5284;
  t5199 = -0.081715*t881*t5066;
  t5210 = 0.081715*t858*t5122;
  t5212 = t881*t5066;
  t5219 = t839*t5122;
  t5225 = t5212 + t5219;
  t5313 = t839*t5066;
  t5316 = -1.*t881*t5122;
  t5318 = t5313 + t5316;
  t5923 = -0.081715*t2498*t5122;
  t5939 = -0.081715*t5066*t2504;
  t5940 = t2414*t5122;
  t5941 = -1.*t5066*t2504;
  t5942 = t5940 + t5941;
  t5970 = t2414*t5066;
  t5976 = t5122*t2504;
  t5978 = t5970 + t5976;
  t6205 = -1.*t310*t338*t478;
  t6206 = t113*t498;
  t6209 = t6205 + t6206;
  t6184 = -0.081715*t2414*t5122;
  t6213 = -0.081715*t6209*t2504;
  t6216 = -1.*t2414*t5122;
  t6220 = -1.*t6209*t2504;
  t6226 = t6216 + t6220;
  t6260 = t2414*t6209;
  t6261 = -1.*t5122*t2504;
  t6262 = t6260 + t6261;
  t6402 = t6209*t2504;
  t6407 = t5940 + t6402;
  t6415 = 0.242889*t2598*t6407;
  t6417 = 0.242889*t310*t27*t2629;
  t6419 = -1.*t2598*t6407;
  t6424 = -1.*t310*t27*t2629;
  t6438 = t6419 + t6424;
  t6473 = t310*t27*t2598;
  t6482 = -1.*t6407*t2629;
  t6489 = t6473 + t6482;
  t6499 = t3008*t6489;
  t6591 = t2598*t6407;
  t6592 = t310*t27*t2629;
  t6595 = t6591 + t6592;
  t6522 = -1.*t6489*t3051;
  t6695 = 0.081715*t654*t6209;
  t6698 = -0.081715*t573*t5122;
  t6700 = -1.*t654*t6209;
  t6701 = t6700 + t5127;
  t6721 = -1.*t573*t6209;
  t6725 = t6721 + t5255;
  t6814 = 0.242889*t310*t27*t999;
  t6818 = 0.242889*t971*t6701;
  t6823 = -1.*t310*t27*t999;
  t6824 = -1.*t971*t6701;
  t6825 = t6823 + t6824;
  t6900 = t971*t310*t27;
  t6904 = -1.*t999*t6701;
  t6913 = t6900 + t6904;
  t7021 = t310*t27*t999;
  t7041 = t971*t6701;
  t7048 = t7021 + t7041;
  t6921 = t1817*t6913;
  t6958 = -1.*t1841*t6913;
  t7155 = -0.081715*t791*t6209;
  t7158 = -0.081715*t757*t5122;
  t7160 = -1.*t791*t6209;
  t7171 = -1.*t757*t5122;
  t7180 = t7160 + t7171;
  t7240 = t757*t6209;
  t7246 = -1.*t791*t5122;
  t7248 = t7240 + t7246;
  t7388 = t791*t6209;
  t7390 = t7388 + t5185;
  t7384 = -0.194401*t310*t27*t1229;
  t7392 = -0.194401*t1199*t7390;
  t7395 = -1.*t310*t27*t1229;
  t7399 = -1.*t1199*t7390;
  t7402 = t7395 + t7399;
  t7440 = t1199*t310*t27;
  t7449 = -1.*t1229*t7390;
  t7451 = t7440 + t7449;
  t7545 = t310*t27*t1229;
  t7547 = t1199*t7390;
  t7548 = t7545 + t7547;
  t7464 = t1990*t7451;
  t7483 = -1.*t2018*t7451;
  t7606 = 0.081715*t881*t6209;
  t7612 = -0.081715*t839*t5122;
  t7618 = -1.*t881*t6209;
  t7619 = t7618 + t5219;
  t7639 = -1.*t839*t6209;
  t7641 = t7639 + t5316;
  t7813 = -0.194401*t310*t27*t1631;
  t7820 = -0.194401*t1517*t7619;
  t7822 = -1.*t310*t27*t1631;
  t7825 = -1.*t1517*t7619;
  t7832 = t7822 + t7825;
  t7892 = t1517*t310*t27;
  t7894 = -1.*t1631*t7619;
  t7931 = t7892 + t7894;
  t8097 = t310*t27*t1631;
  t8118 = t1517*t7619;
  t8125 = t8097 + t8118;
  t7939 = t2223*t7931;
  t8021 = -1.*t2288*t7931;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=-230.13279;
  p_output1[3]=-14.97987*(t2501 + t2509 - 0.13528*t2543 + t2606 + t2669 + 0.04*(-1.*t2598*t2628 + t113*t2629*t27) + 0.202889*t2805) - 2.36421*(t2501 + t2509 - 0.11459*t2543 + t2606 + t2669 - 0.36833*(t2997*t3008 + t2805*t3051) + 0.080689*(t2805*t3008 - 1.*t2997*t3051) + t2997*t3073 + t2805*t3148) - 134.54415*(-0.043794*t113*t27 + 0.03*t547) - 2.36421*(t2501 + t2509 - 0.061715*t2543 + t571) - 10.741950000000001*(t571 + t617 + t659 + 0.061715*t682) - 14.97987*(t1226 + t1274 - 0.234401*t1410 + 0.04*(-1.*t1199*t1270 + t113*t1229*t27) + t789 + t793 - 0.13528*t818) - 2.36421*(t1226 + t1274 + t2023*t2042 - 0.36833*(t1410*t2018 + t1990*t2042) - 0.356601*(t1410*t1990 - 1.*t2018*t2042) + t1410*t2091 + t789 + t793 - 0.11459*t818) - 2.36421*(t737 + t789 + t793 - 0.061715*t818) - 10.741950000000001*(t737 + t871 + t883 + 0.061715*t930) - 2.36421*(t1566 + t1647 + t2300*t2317 - 0.36833*(t1770*t2288 + t2223*t2317) - 0.356601*(t1770*t2223 - 1.*t2288*t2317) + t1770*t2333 + t871 + t883 + 0.11688*t930) - 14.97987*(t1566 + t1647 - 0.234401*t1770 + 0.04*(-1.*t1517*t1644 + t113*t1631*t27) + t871 + t883 + 0.13757*t930) - 2.36421*(t1029 + t1852*t1866 - 0.36833*(t1147*t1841 + t1817*t1866) + 0.080689*(t1147*t1817 - 1.*t1841*t1866) + t1147*t1895 + t617 + t659 + 0.11688*t682 + t994) - 14.97987*(t1029 + 0.202889*t1147 + t617 + t659 + 0.13757*t682 + t994 + 0.04*(-1.*t1027*t971 + t113*t27*t999));
  p_output1[4]=-10.741950000000001*(t3276 + t3282 + t3291 + 0.061715*t3313) - 2.36421*(t3347 + t3378 + t3384 - 0.061715*t3452) - 10.741950000000001*(t3378 + t3468 + t3473 + 0.061715*t3482) - 2.36421*(t3276 + t3291 + 0.11688*t3313 + t3503 + t3614 + t1895*t3667 + t1852*t4039 - 0.36833*(t1841*t3667 + t1817*t4039) + 0.080689*(t1817*t3667 - 1.*t1841*t4039)) - 2.36421*(t3347 + t3384 - 0.11459*t3452 + t3726 + t3756 + t2091*t3821 + t2023*t4232 - 0.36833*(t2018*t3821 + t1990*t4232) - 0.356601*(t1990*t3821 - 1.*t2018*t4232)) - 2.36421*(t3468 + t3473 + 0.11688*t3482 + t3865 + t3931 + t2333*t4011 + t2300*t4439 - 0.36833*(t2288*t4011 + t2223*t4439) - 0.356601*(t2223*t4011 - 1.*t2288*t4439)) - 2.36421*(t3282 + t4591 + t4593 - 0.061715*t4623) - 14.97987*(t3347 + t3384 - 0.13528*t3452 + t3726 + t3756 - 0.234401*t3821 + 0.04*(-1.*t1199*t3740 + t1229*t310*t478)) - 14.97987*(t3468 + t3473 + 0.13757*t3482 + t3865 + t3931 - 0.234401*t4011 + 0.04*(-1.*t1517*t3909 + t1631*t310*t478)) - 14.97987*(t4591 + t4593 - 0.13528*t4623 + t4646 + t4723 + 0.04*(-1.*t2598*t4699 + t2629*t310*t478) + 0.202889*t4867) - 2.36421*(t4591 + t4593 - 0.11459*t4623 + t4646 + t4723 + t3148*t4867 + t3073*t4905 - 0.36833*(t3051*t4867 + t3008*t4905) + 0.080689*(t3008*t4867 - 1.*t3051*t4905)) - 134.54415*(-0.043794*t310*t478 + 0.03*t27*t310*t498) - 14.97987*(t3276 + t3291 + 0.13757*t3313 + t3503 + t3614 + 0.202889*t3667 + 0.04*(-1.*t3595*t971 + t310*t478*t999));
  p_output1[5]=-4.0363245*t5066 - 10.741950000000001*(t5085 + t5124 + 0.061715*t5129) - 2.36421*(t5179 + t5180 - 0.061715*t5186) - 10.741950000000001*(t5199 + t5210 + 0.061715*t5225) - 14.97987*(t5179 + t5180 - 0.13528*t5186 - 0.04*t1199*t5285 + 0.04*t1229*t5285) - 2.36421*(t5179 + t5180 - 0.11459*t5186 - 0.194401*t1229*t5285 + t1199*t2023*t5285 - 1.*t1229*t2091*t5285 - 0.356601*(-1.*t1229*t1990*t5285 - 1.*t1199*t2018*t5285) - 0.36833*(t1199*t1990*t5285 - 1.*t1229*t2018*t5285)) - 14.97987*(t5199 + t5210 + 0.13757*t5225 - 0.04*t1517*t5318 + 0.04*t1631*t5318) - 2.36421*(t5199 + t5210 + 0.11688*t5225 - 0.194401*t1631*t5318 + t1517*t2300*t5318 - 1.*t1631*t2333*t5318 - 0.356601*(-1.*t1631*t2223*t5318 - 1.*t1517*t2288*t5318) - 0.36833*(t1517*t2223*t5318 - 1.*t1631*t2288*t5318)) - 2.36421*(t5923 + t5939 - 0.061715*t5942) - 14.97987*(t5923 + t5939 - 0.13528*t5942 - 0.04*t2598*t5978 + 0.04*t2629*t5978) - 2.36421*(t5923 + t5939 - 0.11459*t5942 + 0.242889*t2629*t5978 + t2598*t3073*t5978 - 1.*t2629*t3148*t5978 + 0.080689*(-1.*t2629*t3008*t5978 - 1.*t2598*t3051*t5978) - 0.36833*(t2598*t3008*t5978 - 1.*t2629*t3051*t5978)) - 14.97987*(t5085 + t5124 + 0.13757*t5129 - 0.04*t5263*t971 + 0.04*t5263*t999) - 2.36421*(t5085 + t5124 + 0.11688*t5129 + t1852*t5263*t971 + 0.242889*t5263*t999 - 1.*t1895*t5263*t999 + 0.080689*(-1.*t1841*t5263*t971 - 1.*t1817*t5263*t999) - 0.36833*(t1817*t5263*t971 - 1.*t1841*t5263*t999));
  p_output1[6]=-2.36421*(t6184 + t6213 - 0.061715*t6226) - 14.97987*(t6184 + t6213 - 0.13528*t6226 - 0.04*t2598*t6262 + 0.04*t2629*t6262) - 2.36421*(t6184 + t6213 - 0.11459*t6226 + 0.242889*t2629*t6262 + t2598*t3073*t6262 - 1.*t2629*t3148*t6262 + 0.080689*(-1.*t2629*t3008*t6262 - 1.*t2598*t3051*t6262) - 0.36833*(t2598*t3008*t6262 - 1.*t2629*t3051*t6262));
  p_output1[7]=-14.97987*(0.04*(-1.*t2598*t27*t310 + t2629*t6407) + t6415 + t6417 + 0.202889*t6438) - 2.36421*(t6415 + t6417 + t3148*t6438 + t3073*t6489 - 0.36833*(t3051*t6438 + t6499) + 0.080689*(t3008*t6438 + t6522));
  p_output1[8]=-2.36421*((0.20833*t3008 + t3063)*t6489 + (0.100689*t3008 - 0.20833*t3051)*t6595 + 0.080689*(t6522 - 1.*t3008*t6595) - 0.36833*(t6499 - 1.*t3051*t6595));
  p_output1[9]=-10.741950000000001*(t6695 + t6698 + 0.061715*t6701) - 14.97987*(t6695 + t6698 + 0.13757*t6701 - 0.04*t6725*t971 + 0.04*t6725*t999) - 2.36421*(t6695 + t6698 + 0.11688*t6701 + t1852*t6725*t971 + 0.242889*t6725*t999 - 1.*t1895*t6725*t999 + 0.080689*(-1.*t1841*t6725*t971 - 1.*t1817*t6725*t999) - 0.36833*(t1817*t6725*t971 - 1.*t1841*t6725*t999));
  p_output1[10]=-2.36421*(t6814 + t6818 + t1895*t6825 + t1852*t6913 - 0.36833*(t1841*t6825 + t6921) + 0.080689*(t1817*t6825 + t6958)) - 14.97987*(t6814 + t6818 + 0.202889*t6825 + 0.04*(-1.*t27*t310*t971 + t6701*t999));
  p_output1[11]=-2.36421*((0.20833*t1817 + t1847)*t6913 + (0.100689*t1817 - 0.20833*t1841)*t7048 + 0.080689*(t6958 - 1.*t1817*t7048) - 0.36833*(t6921 - 1.*t1841*t7048));
  p_output1[12]=-2.36421*(t7155 + t7158 - 0.061715*t7180) - 14.97987*(t7155 + t7158 - 0.13528*t7180 - 0.04*t1199*t7248 + 0.04*t1229*t7248) - 2.36421*(t7155 + t7158 - 0.11459*t7180 - 0.194401*t1229*t7248 + t1199*t2023*t7248 - 1.*t1229*t2091*t7248 - 0.356601*(-1.*t1229*t1990*t7248 - 1.*t1199*t2018*t7248) - 0.36833*(t1199*t1990*t7248 - 1.*t1229*t2018*t7248));
  p_output1[13]=-14.97987*(t7384 + 0.04*(-1.*t1199*t27*t310 + t1229*t7390) + t7392 - 0.234401*t7402) - 2.36421*(t7384 + t7392 + t2091*t7402 + t2023*t7451 - 0.36833*(t2018*t7402 + t7464) - 0.356601*(t1990*t7402 + t7483));
  p_output1[14]=-2.36421*((0.20833*t1990 + t2021)*t7451 + (-0.336601*t1990 - 0.20833*t2018)*t7548 - 0.356601*(t7483 - 1.*t1990*t7548) - 0.36833*(t7464 - 1.*t2018*t7548));
  p_output1[15]=-10.741950000000001*(t7606 + t7612 + 0.061715*t7619) - 14.97987*(t7606 + t7612 + 0.13757*t7619 - 0.04*t1517*t7641 + 0.04*t1631*t7641) - 2.36421*(t7606 + t7612 + 0.11688*t7619 - 0.194401*t1631*t7641 + t1517*t2300*t7641 - 1.*t1631*t2333*t7641 - 0.356601*(-1.*t1631*t2223*t7641 - 1.*t1517*t2288*t7641) - 0.36833*(t1517*t2223*t7641 - 1.*t1631*t2288*t7641));
  p_output1[16]=-14.97987*(0.04*(-1.*t1517*t27*t310 + t1631*t7619) + t7813 + t7820 - 0.234401*t7832) - 2.36421*(t7813 + t7820 + t2333*t7832 + t2300*t7931 - 0.36833*(t2288*t7832 + t7939) - 0.356601*(t2223*t7832 + t8021));
  p_output1[17]=-2.36421*((0.20833*t2223 + t2291)*t7931 + (-0.336601*t2223 - 0.20833*t2288)*t8125 - 0.356601*(t8021 - 1.*t2223*t8125) - 0.36833*(t7939 - 1.*t2288*t8125));
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

#include "Ge_vec_plane.hh"

namespace SymFunction
{

void Ge_vec_plane_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
