/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 13:00:06 GMT-05:00
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
static void output1(double *p_output1,const double *var1)
{
  double t358;
  double t465;
  double t381;
  double t199;
  double t496;
  double t400;
  double t512;
  double t519;
  double t645;
  double t563;
  double t574;
  double t604;
  double t557;
  double t756;
  double t757;
  double t764;
  double t766;
  double t774;
  double t801;
  double t1000;
  double t1031;
  double t1038;
  double t696;
  double t1048;
  double t1059;
  double t1065;
  double t823;
  double t824;
  double t1043;
  double t1078;
  double t1097;
  double t860;
  double t862;
  double t1246;
  double t1252;
  double t1258;
  double t1276;
  double t1440;
  double t1479;
  double t1424;
  double t1476;
  double t1498;
  double t1502;
  double t1506;
  double t1516;
  double t1535;
  double t1599;
  double t1602;
  double t1663;
  double t1665;
  double t1673;
  double t1609;
  double t1610;
  double t1758;
  double t1767;
  double t1775;
  double t1420;
  double t1855;
  double t1848;
  double t1896;
  double t1903;
  double t1930;
  double t1965;
  double t2031;
  double t2052;
  double t1650;
  double t1856;
  double t2059;
  double t2066;
  double t2112;
  double t2115;
  double t2116;
  double t2071;
  double t2075;
  double t1755;
  double t2177;
  double t2186;
  double t2187;
  double t2301;
  double t2320;
  double t2323;
  double t2341;
  double t2359;
  double t2362;
  double t2487;
  double t2489;
  double t2494;
  double t2497;
  double t2498;
  double t2509;
  double t2657;
  double t2659;
  double t2661;
  double t2667;
  double t2671;
  double t2672;
  double t2299;
  double t2754;
  double t2759;
  double t2761;
  double t2763;
  double t2764;
  double t2774;
  double t2447;
  double t2904;
  double t2907;
  double t2918;
  double t2919;
  double t2920;
  double t2939;
  double t2592;
  double t3019;
  double t3021;
  double t3033;
  double t3036;
  double t3043;
  double t3051;
  double t2730;
  double t3130;
  double t3134;
  double t3136;
  double t3168;
  double t3169;
  double t3171;
  double t2840;
  double t3274;
  double t3290;
  double t3292;
  double t3293;
  double t3307;
  double t3316;
  double t2995;
  double t3370;
  double t3376;
  double t3385;
  double t3386;
  double t3388;
  double t3406;
  double t3452;
  double t3457;
  double t3458;
  double t3479;
  double t3491;
  double t3493;
  double t3494;
  double t3495;
  double t3497;
  double t3563;
  double t3564;
  double t3566;
  double t3617;
  double t3620;
  double t3621;
  double t3622;
  double t3626;
  double t3628;
  double t3444;
  double t3723;
  double t3724;
  double t3725;
  double t3729;
  double t3733;
  double t3738;
  double t3562;
  double t3850;
  double t3859;
  double t3862;
  double t3863;
  double t3887;
  double t3898;
  double t3689;
  double t4023;
  double t4024;
  double t4044;
  double t4045;
  double t4048;
  double t4065;
  double t3798;
  double t4145;
  double t4152;
  double t4155;
  double t4156;
  double t4157;
  double t4161;
  double t4254;
  double t4256;
  double t4262;
  double t4332;
  double t4333;
  double t4334;
  double t4336;
  double t4346;
  double t4349;
  double t1811;
  double t4418;
  double t4428;
  double t4456;
  double t4460;
  double t4474;
  double t4477;
  double t4481;
  double t4484;
  double t4357;
  double t4582;
  double t4584;
  double t4588;
  double t4589;
  double t4590;
  double t4591;
  double t4608;
  double t4432;
  double t4660;
  double t4661;
  double t4685;
  double t4691;
  double t4693;
  double t4701;
  double t4705;
  double t4916;
  double t4917;
  double t4918;
  double t4933;
  double t4940;
  double t4943;
  double t1293;
  double t4995;
  double t4996;
  double t5039;
  double t5037;
  double t5049;
  double t5050;
  double t4946;
  double t5075;
  double t5077;
  double t5068;
  double t5082;
  double t5083;
  double t5008;
  double t5121;
  double t5122;
  double t5124;
  double t5125;
  double t5137;
  double t5280;
  double t5283;
  double t5284;
  double t5297;
  double t5299;
  double t5300;
  double t2211;
  double t5339;
  double t5342;
  double t5377;
  double t5375;
  double t5392;
  double t5393;
  double t5302;
  double t5435;
  double t5440;
  double t5434;
  double t5443;
  double t5444;
  double t5354;
  double t5496;
  double t5500;
  double t5502;
  double t5503;
  double t5508;
  t358 = Cos(var1[5]);
  t465 = Sin(var1[3]);
  t381 = Sin(var1[4]);
  t199 = Cos(var1[3]);
  t496 = Sin(var1[5]);
  t400 = t199*t358*t381;
  t512 = t465*t496;
  t519 = t400 + t512;
  t645 = Cos(var1[9]);
  t563 = -1.*t358*t465*t381;
  t574 = t199*t496;
  t604 = t563 + t574;
  t557 = Sin(var1[9]);
  t756 = Cos(var1[10]);
  t757 = t645*t604;
  t764 = -1.*t557;
  t766 = 0. + t764;
  t774 = t766*t519;
  t801 = t757 + t774;
  t1000 = -1.*t358*t465;
  t1031 = t199*t381*t496;
  t1038 = t1000 + t1031;
  t696 = 0. + t645;
  t1048 = -1.*t199*t358;
  t1059 = -1.*t465*t381*t496;
  t1065 = t1048 + t1059;
  t823 = Cos(var1[11]);
  t824 = 0. + t823;
  t1043 = t766*t1038;
  t1078 = t645*t1065;
  t1097 = t1043 + t1078;
  t860 = Sin(var1[10]);
  t862 = Sin(var1[11]);
  t1246 = Cos(var1[4]);
  t1252 = t199*t1246*t766;
  t1258 = -1.*t645*t1246*t465;
  t1276 = t1252 + t1258;
  t1440 = Cos(var1[6]);
  t1479 = Sin(var1[6]);
  t1424 = Cos(var1[7]);
  t1476 = t1440*t604;
  t1498 = -1.*t1479;
  t1502 = 0. + t1498;
  t1506 = t519*t1502;
  t1516 = t1476 + t1506;
  t1535 = 0. + t1440;
  t1599 = Cos(var1[8]);
  t1602 = 0. + t1599;
  t1663 = t1440*t1065;
  t1665 = t1038*t1502;
  t1673 = t1663 + t1665;
  t1609 = Sin(var1[7]);
  t1610 = Sin(var1[8]);
  t1758 = -1.*t1246*t1440*t465;
  t1767 = t199*t1246*t1502;
  t1775 = t1758 + t1767;
  t1420 = -0.0875*t519;
  t1855 = Cos(var1[12]);
  t1848 = Sin(var1[12]);
  t1896 = Cos(var1[13]);
  t1903 = t1855*t604;
  t1930 = -1.*t1848;
  t1965 = 0. + t1930;
  t2031 = t1965*t519;
  t2052 = t1903 + t2031;
  t1650 = -0.0875*t1038;
  t1856 = 0. + t1855;
  t2059 = Cos(var1[14]);
  t2066 = 0. + t2059;
  t2112 = t1965*t1038;
  t2115 = t1855*t1065;
  t2116 = t2112 + t2115;
  t2071 = Sin(var1[13]);
  t2075 = Sin(var1[14]);
  t1755 = -0.0875*t199*t1246;
  t2177 = t199*t1246*t1965;
  t2186 = -1.*t1855*t1246*t465;
  t2187 = t2177 + t2186;
  t2301 = t645*t199*t1246*t358;
  t2320 = t1246*t358*t766*t465;
  t2323 = t2301 + t2320;
  t2341 = t756*t2323;
  t2359 = -1.*t358*t860*t381;
  t2362 = t2341 + t2359;
  t2487 = -1.*t860*t381*t496;
  t2489 = t645*t199*t1246*t496;
  t2494 = t1246*t766*t465*t496;
  t2497 = t2489 + t2494;
  t2498 = t756*t2497;
  t2509 = t2487 + t2498;
  t2657 = -1.*t1246*t860;
  t2659 = -1.*t645*t199*t381;
  t2661 = -1.*t766*t465*t381;
  t2667 = t2659 + t2661;
  t2671 = t756*t2667;
  t2672 = t2657 + t2671;
  t2299 = -0.21935*t358*t381;
  t2754 = t199*t1246*t358*t1440;
  t2759 = t1246*t358*t465*t1502;
  t2761 = t2754 + t2759;
  t2763 = t1424*t2761;
  t2764 = -1.*t358*t381*t1609;
  t2774 = t2763 + t2764;
  t2447 = -0.21935*t381*t496;
  t2904 = t199*t1246*t1440*t496;
  t2907 = t1246*t465*t496*t1502;
  t2918 = t2904 + t2907;
  t2919 = t1424*t2918;
  t2920 = -1.*t381*t496*t1609;
  t2939 = t2919 + t2920;
  t2592 = -0.21935*t1246;
  t3019 = -1.*t199*t1440*t381;
  t3021 = -1.*t465*t381*t1502;
  t3033 = t3019 + t3021;
  t3036 = t1424*t3033;
  t3043 = -1.*t1246*t1609;
  t3051 = t3036 + t3043;
  t2730 = -0.0875*t1246*t358*t465;
  t3130 = t1855*t199*t1246*t358;
  t3134 = t1246*t358*t1965*t465;
  t3136 = t3130 + t3134;
  t3168 = t1896*t3136;
  t3169 = -1.*t358*t2071*t381;
  t3171 = t3168 + t3169;
  t2840 = -0.0875*t1246*t465*t496;
  t3274 = -1.*t2071*t381*t496;
  t3290 = t1855*t199*t1246*t496;
  t3292 = t1246*t1965*t465*t496;
  t3293 = t3290 + t3292;
  t3307 = t1896*t3293;
  t3316 = t3274 + t3307;
  t2995 = 0.0875*t465*t381;
  t3370 = -1.*t1246*t2071;
  t3376 = -1.*t1855*t199*t381;
  t3385 = -1.*t1965*t465*t381;
  t3386 = t3376 + t3385;
  t3388 = t1896*t3386;
  t3406 = t3370 + t3388;
  t3452 = t358*t465;
  t3457 = -1.*t199*t381*t496;
  t3458 = t3452 + t3457;
  t3479 = -1.*t1246*t860*t496;
  t3491 = t645*t3458;
  t3493 = t766*t1065;
  t3494 = t3491 + t3493;
  t3495 = t756*t3494;
  t3497 = t3479 + t3495;
  t3563 = t358*t465*t381;
  t3564 = -1.*t199*t496;
  t3566 = t3563 + t3564;
  t3617 = t1246*t358*t860;
  t3620 = t766*t3566;
  t3621 = t645*t519;
  t3622 = t3620 + t3621;
  t3626 = t756*t3622;
  t3628 = t3617 + t3626;
  t3444 = -0.21935*t1246*t496;
  t3723 = t1440*t3458;
  t3724 = t1065*t1502;
  t3725 = t3723 + t3724;
  t3729 = t1424*t3725;
  t3733 = -1.*t1246*t496*t1609;
  t3738 = t3729 + t3733;
  t3562 = 0.21935*t1246*t358;
  t3850 = t1440*t519;
  t3859 = t3566*t1502;
  t3862 = t3850 + t3859;
  t3863 = t1424*t3862;
  t3887 = t1246*t358*t1609;
  t3898 = t3863 + t3887;
  t3689 = -0.0875*t1065;
  t4023 = -1.*t1246*t2071*t496;
  t4024 = t1855*t3458;
  t4044 = t1965*t1065;
  t4045 = t4024 + t4044;
  t4048 = t1896*t4045;
  t4065 = t4023 + t4048;
  t3798 = -0.0875*t3566;
  t4145 = t1246*t358*t2071;
  t4152 = t1965*t3566;
  t4155 = t1855*t519;
  t4156 = t4152 + t4155;
  t4157 = t1896*t4156;
  t4161 = t4145 + t4157;
  t4254 = -1.*t1440*t3566;
  t4256 = -1.*t519*t1479;
  t4262 = t4254 + t4256;
  t4332 = t199*t358;
  t4333 = t465*t381*t496;
  t4334 = t4332 + t4333;
  t4336 = -1.*t1440*t4334;
  t4346 = -1.*t1038*t1479;
  t4349 = t4336 + t4346;
  t1811 = -1.*t1246*t465*t1479;
  t4418 = -1.*t199*t1246*t1479;
  t4428 = t1758 + t4418;
  t4456 = t1246*t358;
  t4460 = 0. + t4456;
  t4474 = t4460*t1424;
  t4477 = 0. + t3850 + t3859;
  t4481 = -1.*t4477*t1609;
  t4484 = t4474 + t4481;
  t4357 = t1440*t1038;
  t4582 = t1246*t496;
  t4584 = 0. + t4582;
  t4588 = t1424*t4584;
  t4589 = t4334*t1502;
  t4590 = 0. + t4357 + t4589;
  t4591 = -1.*t4590*t1609;
  t4608 = t4588 + t4591;
  t4432 = t199*t1246*t1440;
  t4660 = -1.*t381;
  t4661 = 0. + t4660;
  t4685 = t1424*t4661;
  t4691 = t1246*t465*t1502;
  t4693 = 0. + t4432 + t4691;
  t4701 = -1.*t4693*t1609;
  t4705 = t4685 + t4701;
  t4916 = -1.*t645*t3566;
  t4917 = -1.*t557*t519;
  t4918 = t4916 + t4917;
  t4933 = -1.*t557*t1038;
  t4940 = -1.*t645*t4334;
  t4943 = t4933 + t4940;
  t1293 = -1.*t1246*t557*t465;
  t4995 = -1.*t199*t1246*t557;
  t4996 = t4995 + t1258;
  t5039 = 0. + t3620 + t3621;
  t5037 = t756*t4460;
  t5049 = -1.*t860*t5039;
  t5050 = t5037 + t5049;
  t4946 = t645*t1038;
  t5075 = t766*t4334;
  t5077 = 0. + t4946 + t5075;
  t5068 = t756*t4584;
  t5082 = -1.*t860*t5077;
  t5083 = t5068 + t5082;
  t5008 = t645*t199*t1246;
  t5121 = t1246*t766*t465;
  t5122 = 0. + t5008 + t5121;
  t5124 = -1.*t860*t5122;
  t5125 = t756*t4661;
  t5137 = t5124 + t5125;
  t5280 = -1.*t1855*t3566;
  t5283 = -1.*t1848*t519;
  t5284 = t5280 + t5283;
  t5297 = -1.*t1848*t1038;
  t5299 = -1.*t1855*t4334;
  t5300 = t5297 + t5299;
  t2211 = -1.*t1246*t1848*t465;
  t5339 = -1.*t199*t1246*t1848;
  t5342 = t5339 + t2186;
  t5377 = 0. + t4152 + t4155;
  t5375 = t1896*t4460;
  t5392 = -1.*t2071*t5377;
  t5393 = t5375 + t5392;
  t5302 = t1855*t1038;
  t5435 = t1965*t4334;
  t5440 = 0. + t5302 + t5435;
  t5434 = t1896*t4584;
  t5443 = -1.*t2071*t5440;
  t5444 = t5434 + t5443;
  t5354 = t1855*t199*t1246;
  t5496 = t1246*t1965*t465;
  t5500 = 0. + t5354 + t5496;
  t5502 = -1.*t2071*t5500;
  t5503 = t1896*t4661;
  t5508 = t5502 + t5503;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=1.;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=1.;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=1.;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=1.;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=1.;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=1.;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=1.;
  p_output1[27]=0.0875*t519 + 0.037*(t557*t604 + t519*t696) - 0.25*t756*t801 - 0.27*(t756*t801*t824 - 1.*t801*t860*t862);
  p_output1[28]=0.0875*t1038 + 0.037*(t1065*t557 + t1038*t696) - 0.25*t1097*t756 - 0.27*(t1097*t756*t824 - 1.*t1097*t860*t862);
  p_output1[29]=0.0875*t1246*t199 + 0.037*(t1293 + t1246*t199*t696) - 0.25*t1276*t756 - 0.27*(t1276*t756*t824 - 1.*t1276*t860*t862);
  p_output1[30]=t1420 - 0.25*t1424*t1516 - 0.27*(t1424*t1516*t1602 - 1.*t1516*t1609*t1610) - 0.037*(t1535*t519 + t1479*t604);
  p_output1[31]=-0.037*(t1065*t1479 + t1038*t1535) + t1650 - 0.25*t1424*t1673 - 0.27*(t1424*t1602*t1673 - 1.*t1609*t1610*t1673);
  p_output1[32]=t1755 - 0.25*t1424*t1775 - 0.27*(t1424*t1602*t1775 - 1.*t1609*t1610*t1775) - 0.037*(t1811 + t1246*t1535*t199);
  p_output1[33]=t1420 - 0.25*t1896*t2052 - 0.27*(t1896*t2052*t2066 - 1.*t2052*t2071*t2075) - 0.037*(t1856*t519 + t1848*t604);
  p_output1[34]=t1650 - 0.037*(t1065*t1848 + t1038*t1856) - 0.25*t1896*t2116 - 0.27*(t1896*t2066*t2116 - 1.*t2071*t2075*t2116);
  p_output1[35]=t1755 - 0.25*t1896*t2187 - 0.27*(t1896*t2066*t2187 - 1.*t2071*t2075*t2187) - 0.037*(t1246*t1856*t199 + t2211);
  p_output1[36]=t2299 - 0.25*t2362 + 0.0875*t1246*t358*t465 + 0.037*(t1246*t199*t358*t557 + t1246*t358*t465*t696) - 0.27*(t2362*t824 + (-1.*t358*t381*t756 - 1.*t2323*t860)*t862);
  p_output1[37]=t2447 - 0.25*t2509 + 0.0875*t1246*t465*t496 + 0.037*(t1246*t199*t496*t557 + t1246*t465*t496*t696) - 0.27*(t2509*t824 + (-1.*t381*t496*t756 - 1.*t2497*t860)*t862);
  p_output1[38]=t2592 - 0.25*t2672 - 0.0875*t381*t465 + 0.037*(-1.*t199*t381*t557 - 1.*t381*t465*t696) - 0.27*(t2672*t824 + (-1.*t1246*t756 - 1.*t2667*t860)*t862);
  p_output1[39]=t2299 + t2730 - 0.25*t2774 - 0.27*(t1602*t2774 + t1610*(-1.*t1609*t2761 - 1.*t1424*t358*t381)) - 0.037*(t1246*t1479*t199*t358 + t1246*t1535*t358*t465);
  p_output1[40]=t2447 + t2840 - 0.25*t2939 - 0.037*(t1246*t1479*t199*t496 + t1246*t1535*t465*t496) - 0.27*(t1602*t2939 + t1610*(-1.*t1609*t2918 - 1.*t1424*t381*t496));
  p_output1[41]=t2592 + t2995 - 0.25*t3051 - 0.27*(t1610*(-1.*t1246*t1424 - 1.*t1609*t3033) + t1602*t3051) - 0.037*(-1.*t1479*t199*t381 - 1.*t1535*t381*t465);
  p_output1[42]=t2730 - 0.25*t3171 + 0.21935*t358*t381 - 0.27*(t2066*t3171 + t2075*(-1.*t2071*t3136 - 1.*t1896*t358*t381)) - 0.037*(t1246*t1848*t199*t358 + t1246*t1856*t358*t465);
  p_output1[43]=t2840 - 0.25*t3316 + 0.21935*t381*t496 - 0.037*(t1246*t1848*t199*t496 + t1246*t1856*t465*t496) - 0.27*(t2066*t3316 + t2075*(-1.*t2071*t3293 - 1.*t1896*t381*t496));
  p_output1[44]=0.21935*t1246 + t2995 - 0.25*t3406 - 0.27*(t2075*(-1.*t1246*t1896 - 1.*t2071*t3386) + t2066*t3406) - 0.037*(-1.*t1848*t199*t381 - 1.*t1856*t381*t465);
  p_output1[45]=0.0875*t1065 + t3444 - 0.25*t3497 + 0.037*(t3458*t557 + t1065*t696) - 0.27*(t3497*t824 + (-1.*t1246*t496*t756 - 1.*t3494*t860)*t862);
  p_output1[46]=t3562 + 0.0875*t3566 - 0.25*t3628 + 0.037*(t519*t557 + t3566*t696) - 0.27*(t3628*t824 + (t1246*t358*t756 - 1.*t3622*t860)*t862);
  p_output1[47]=0;
  p_output1[48]=t3444 - 0.037*(t1065*t1535 + t1479*t3458) + t3689 - 0.25*t3738 - 0.27*(t1602*t3738 + t1610*(-1.*t1609*t3725 - 1.*t1246*t1424*t496));
  p_output1[49]=t3562 + t3798 - 0.25*t3898 - 0.27*(t1610*(t1246*t1424*t358 - 1.*t1609*t3862) + t1602*t3898) - 0.037*(t1535*t3566 + t1479*t519);
  p_output1[50]=0;
  p_output1[51]=-0.037*(t1065*t1856 + t1848*t3458) + t3689 - 0.25*t4065 + 0.21935*t1246*t496 - 0.27*(t2066*t4065 + t2075*(-1.*t2071*t4045 - 1.*t1246*t1896*t496));
  p_output1[52]=-0.21935*t1246*t358 + t3798 - 0.25*t4161 - 0.27*(t2075*(t1246*t1896*t358 - 1.*t2071*t4156) + t2066*t4161) - 0.037*(t1856*t3566 + t1848*t519);
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=-0.037*(-1.*t1479*t3566 + t3850) - 0.25*t1424*t4262 - 0.27*(t1424*t1602*t4262 - 1.*t1609*t1610*t4262);
  p_output1[58]=-0.25*t1424*t4349 - 0.27*(t1424*t1602*t4349 - 1.*t1609*t1610*t4349) - 0.037*(-1.*t1479*t4334 + t4357);
  p_output1[59]=-0.25*t1424*t4428 - 0.27*(t1424*t1602*t4428 - 1.*t1609*t1610*t4428) - 0.037*(t1811 + t4432);
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=-0.25*t4484 - 0.27*(t1610*(-1.*t1609*t4460 - 1.*t1424*t4477) + t1602*t4484);
  p_output1[67]=-0.25*t4608 - 0.27*(t1610*(-1.*t1609*t4584 - 1.*t1424*t4590) + t1602*t4608);
  p_output1[68]=-0.25*t4705 - 0.27*(t1610*(-1.*t1609*t4661 - 1.*t1424*t4693) + t1602*t4705);
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=-0.27*(-1.*t1610*(0. + t1609*t4460 + t1424*t4477) + t1599*(0. + t4474 + t4481));
  p_output1[76]=-0.27*(-1.*t1610*(0. + t1609*t4584 + t1424*t4590) + t1599*(0. + t4588 + t4591));
  p_output1[77]=-0.27*(-1.*t1610*(0. + t1609*t4661 + t1424*t4693) + t1599*(0. + t4685 + t4701));
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0.037*(t3621 - 1.*t3566*t557) - 0.25*t4918*t756 - 0.27*(t4918*t756*t824 - 1.*t4918*t860*t862);
  p_output1[82]=0.037*(t4946 - 1.*t4334*t557) - 0.25*t4943*t756 - 0.27*(t4943*t756*t824 - 1.*t4943*t860*t862);
  p_output1[83]=0.037*(t1293 + t5008) - 0.25*t4996*t756 - 0.27*(t4996*t756*t824 - 1.*t4996*t860*t862);
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
  p_output1[90]=-0.25*t5050 - 0.27*(t5050*t824 + (-1.*t5039*t756 - 1.*t4460*t860)*t862);
  p_output1[91]=-0.25*t5083 - 0.27*(t5083*t824 + (-1.*t5077*t756 - 1.*t4584*t860)*t862);
  p_output1[92]=-0.25*t5137 - 0.27*(t5137*t824 + (-1.*t5122*t756 - 1.*t4661*t860)*t862);
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=-0.27*((0. + t5037 + t5049)*t823 - 1.*(0. + t5039*t756 + t4460*t860)*t862);
  p_output1[100]=-0.27*((0. + t5068 + t5082)*t823 - 1.*(0. + t5077*t756 + t4584*t860)*t862);
  p_output1[101]=-0.27*((0. + t5124 + t5125)*t823 - 1.*(0. + t5122*t756 + t4661*t860)*t862);
  p_output1[102]=0;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=0;
  p_output1[106]=0;
  p_output1[107]=0;
  p_output1[108]=0;
  p_output1[109]=0;
  p_output1[110]=0;
  p_output1[111]=0;
  p_output1[112]=0;
  p_output1[113]=0;
  p_output1[114]=-0.037*(-1.*t1848*t3566 + t4155) - 0.25*t1896*t5284 - 0.27*(t1896*t2066*t5284 - 1.*t2071*t2075*t5284);
  p_output1[115]=-0.25*t1896*t5300 - 0.27*(t1896*t2066*t5300 - 1.*t2071*t2075*t5300) - 0.037*(-1.*t1848*t4334 + t5302);
  p_output1[116]=-0.25*t1896*t5342 - 0.27*(t1896*t2066*t5342 - 1.*t2071*t2075*t5342) - 0.037*(t2211 + t5354);
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
  p_output1[120]=0;
  p_output1[121]=0;
  p_output1[122]=0;
  p_output1[123]=-0.25*t5393 - 0.27*(t2075*(-1.*t2071*t4460 - 1.*t1896*t5377) + t2066*t5393);
  p_output1[124]=-0.25*t5444 - 0.27*(t2075*(-1.*t2071*t4584 - 1.*t1896*t5440) + t2066*t5444);
  p_output1[125]=-0.25*t5508 - 0.27*(t2075*(-1.*t2071*t4661 - 1.*t1896*t5500) + t2066*t5508);
  p_output1[126]=0;
  p_output1[127]=0;
  p_output1[128]=0;
  p_output1[129]=0;
  p_output1[130]=0;
  p_output1[131]=0;
  p_output1[132]=-0.27*(-1.*t2075*(0. + t2071*t4460 + t1896*t5377) + t2059*(0. + t5375 + t5392));
  p_output1[133]=-0.27*(-1.*t2075*(0. + t2071*t4584 + t1896*t5440) + t2059*(0. + t5434 + t5443));
  p_output1[134]=-0.27*(-1.*t2075*(0. + t2071*t4661 + t1896*t5500) + t2059*(0. + t5502 + t5503));
  p_output1[135]=0;
  p_output1[136]=0;
  p_output1[137]=0;
  p_output1[138]=0;
  p_output1[139]=0;
  p_output1[140]=0;
  p_output1[141]=0;
  p_output1[142]=0;
  p_output1[143]=0;
  p_output1[144]=0;
  p_output1[145]=0;
  p_output1[146]=0;
  p_output1[147]=0;
  p_output1[148]=0;
  p_output1[149]=0;
  p_output1[150]=0;
  p_output1[151]=0;
  p_output1[152]=0;
  p_output1[153]=0;
  p_output1[154]=0;
  p_output1[155]=0;
  p_output1[156]=0;
  p_output1[157]=0;
  p_output1[158]=0;
  p_output1[159]=0;
  p_output1[160]=0;
  p_output1[161]=0;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "j_4_func.hh"

namespace SymFunction
{

void j_4_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
