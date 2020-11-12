/*
 * Automatically Generated from Mathematica.
 * Mon 29 Jul 2019 15:08:51 GMT-04:00
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
  double t376;
  double t97;
  double t156;
  double t141;
  double t399;
  double t308;
  double t465;
  double t655;
  double t832;
  double t927;
  double t1177;
  double t1316;
  double t1252;
  double t1215;
  double t1250;
  double t1325;
  double t1339;
  double t1389;
  double t1407;
  double t1419;
  double t1473;
  double t1567;
  double t1437;
  double t802;
  double t1809;
  double t1814;
  double t1830;
  double t1850;
  double t1852;
  double t1869;
  double t1643;
  double t1881;
  double t1897;
  double t1900;
  double t1934;
  double t1948;
  double t1961;
  double t1441;
  double t1446;
  double t2071;
  double t2099;
  double t2102;
  double t2107;
  double t2115;
  double t2122;
  double t2141;
  double t2178;
  double t2180;
  double t2183;
  double t2230;
  double t2231;
  double t2244;
  double t2249;
  double t2252;
  double t2261;
  double t2234;
  double t2277;
  double t2291;
  double t2310;
  double t2315;
  double t2329;
  double t2338;
  double t2341;
  double t2343;
  double t2188;
  double t2193;
  double t2201;
  double t2383;
  double t2388;
  double t2389;
  double t2393;
  double t2403;
  double t2407;
  double t2414;
  double t2485;
  double t2515;
  double t2543;
  double t2550;
  double t2552;
  double t2555;
  double t2565;
  double t2591;
  double t2603;
  double t2609;
  double t2610;
  double t2614;
  double t2615;
  double t2620;
  double t2625;
  double t2626;
  double t2618;
  double t2619;
  double t2627;
  double t2630;
  double t2638;
  double t2644;
  double t2648;
  double t2722;
  double t2724;
  double t2725;
  double t2719;
  double t2733;
  double t2734;
  double t2741;
  double t2754;
  double t2779;
  double t2858;
  double t2859;
  double t2867;
  double t2844;
  double t2869;
  double t2872;
  double t2878;
  double t2883;
  double t2888;
  double t2980;
  double t2981;
  double t2982;
  double t2979;
  double t2983;
  double t2985;
  double t2999;
  double t3004;
  double t3009;
  double t2454;
  double t2458;
  double t2464;
  double t3015;
  double t3021;
  double t3031;
  double t3040;
  double t3052;
  double t3053;
  double t2567;
  double t2484;
  double t2489;
  double t2497;
  double t2513;
  double t2819;
  double t2824;
  double t2836;
  double t2693;
  double t2694;
  double t2708;
  double t2653;
  double t2663;
  double t2669;
  double t3106;
  double t3107;
  double t3108;
  double t3132;
  double t3134;
  double t3139;
  double t3129;
  double t3140;
  double t3141;
  double t3154;
  double t3156;
  double t3160;
  double t3212;
  double t3218;
  double t3220;
  double t3206;
  double t3222;
  double t3225;
  double t3227;
  double t3228;
  double t3233;
  double t3201;
  double t3114;
  double t3124;
  double t3313;
  double t3314;
  double t3378;
  double t3381;
  double t3418;
  double t3427;
  double t3466;
  double t3468;
  double t3471;
  double t3452;
  double t3453;
  double t3461;
  double t3342;
  double t3346;
  double t3350;
  double t3296;
  double t3303;
  double t3308;
  double t3553;
  double t3560;
  double t3554;
  double t3561;
  double t3563;
  double t3574;
  double t3575;
  double t3576;
  double t3604;
  double t3612;
  double t3616;
  double t3617;
  double t3605;
  double t3621;
  double t3622;
  double t3641;
  double t3646;
  double t3648;
  double t3677;
  double t3679;
  double t3684;
  double t3688;
  double t3695;
  double t3697;
  double t3700;
  double t3707;
  double t3708;
  double t3713;
  double t3740;
  double t3741;
  double t3747;
  double t3750;
  double t3766;
  double t3767;
  double t3768;
  double t3776;
  double t3802;
  double t3804;
  double t3806;
  double t3812;
  double t3814;
  double t3816;
  t376 = Cos(var1[3]);
  t97 = Cos(var1[5]);
  t156 = Sin(var1[4]);
  t141 = Sin(var1[3]);
  t399 = Sin(var1[5]);
  t308 = -1.*t97*t141*t156;
  t465 = t376*t399;
  t655 = t308 + t465;
  t832 = t376*t97*t156;
  t927 = t141*t399;
  t1177 = t832 + t927;
  t1316 = Cos(var1[13]);
  t1252 = Cos(var1[12]);
  t1215 = Sin(var1[13]);
  t1250 = t1215*t655;
  t1325 = t1252*t1316*t1177;
  t1339 = t1250 + t1325;
  t1389 = t1316*t655;
  t1407 = -1.*t1252*t1215*t1177;
  t1419 = t1389 + t1407;
  t1473 = Cos(var1[14]);
  t1567 = 0. + t1473;
  t1437 = Sin(var1[14]);
  t802 = Sin(var1[12]);
  t1809 = -1.*t97*t141;
  t1814 = t376*t156*t399;
  t1830 = t1809 + t1814;
  t1850 = -1.*t376*t97;
  t1852 = -1.*t141*t156*t399;
  t1869 = t1850 + t1852;
  t1643 = 0. + t1437;
  t1881 = -1.*t1252*t1215*t1830;
  t1897 = t1316*t1869;
  t1900 = t1881 + t1897;
  t1934 = t1252*t1316*t1830;
  t1948 = t1215*t1869;
  t1961 = t1934 + t1948;
  t1441 = -1.*t1437;
  t1446 = 0. + t1441;
  t2071 = Cos(var1[4]);
  t2099 = -1.*t1252*t376*t2071*t1215;
  t2102 = -1.*t1316*t2071*t141;
  t2107 = t2099 + t2102;
  t2115 = t1252*t1316*t376*t2071;
  t2122 = -1.*t2071*t1215*t141;
  t2141 = t2115 + t2122;
  t2178 = t1643*t2107;
  t2180 = t1567*t2141;
  t2183 = t2178 + t2180;
  t2230 = t376*t2071;
  t2231 = 0. + t2230;
  t2244 = t1252*t2071*t141;
  t2249 = 0. + t802;
  t2252 = -1.*t2249*t156;
  t2261 = 0. + t2244 + t2252;
  t2234 = t2231*t1215;
  t2277 = t1316*t2261;
  t2291 = 0. + t2234 + t2277;
  t2310 = t1446*t2291;
  t2315 = t1316*t2231;
  t2329 = -1.*t1215*t2261;
  t2338 = 0. + t2315 + t2329;
  t2341 = t1567*t2338;
  t2343 = 0. + t2310 + t2341;
  t2188 = t1567*t2107;
  t2193 = t1446*t2141;
  t2201 = t2188 + t2193;
  t2383 = Power(t2343,2);
  t2388 = t1567*t2291;
  t2389 = t1643*t2338;
  t2393 = 0. + t2388 + t2389;
  t2403 = Power(t2393,2);
  t2407 = t2383 + t2403;
  t2414 = 1/t2407;
  t2485 = 0. + t1252;
  t2515 = t2071*t802*t141;
  t2543 = t2485*t156;
  t2550 = 0. + t2515 + t2543;
  t2552 = Power(t2550,2);
  t2555 = t2552 + t2383 + t2403;
  t2565 = 1/t2555;
  t2591 = t2485*t2071*t97;
  t2603 = t97*t141*t156;
  t2609 = -1.*t376*t399;
  t2610 = t2603 + t2609;
  t2614 = -1.*t802*t2610;
  t2615 = 0. + t2591 + t2614;
  t2620 = t376*t97;
  t2625 = t141*t156*t399;
  t2626 = t2620 + t2625;
  t2618 = Power(t2615,2);
  t2619 = t2485*t2071*t399;
  t2627 = -1.*t802*t2626;
  t2630 = 0. + t2619 + t2627;
  t2638 = Power(t2630,2);
  t2644 = t2618 + t2638;
  t2648 = 1/t2644;
  t2722 = t1252*t2071*t97*t141;
  t2724 = -1.*t97*t2249*t156;
  t2725 = t2722 + t2724;
  t2719 = t376*t2071*t97*t1215;
  t2733 = t1316*t2725;
  t2734 = t2719 + t2733;
  t2741 = t1316*t376*t2071*t97;
  t2754 = -1.*t1215*t2725;
  t2779 = t2741 + t2754;
  t2858 = t1252*t2071*t141*t399;
  t2859 = -1.*t2249*t156*t399;
  t2867 = t2858 + t2859;
  t2844 = t376*t2071*t1215*t399;
  t2869 = t1316*t2867;
  t2872 = t2844 + t2869;
  t2878 = t1316*t376*t2071*t399;
  t2883 = -1.*t1215*t2867;
  t2888 = t2878 + t2883;
  t2980 = -1.*t2071*t2249;
  t2981 = -1.*t1252*t141*t156;
  t2982 = t2980 + t2981;
  t2979 = -1.*t376*t1215*t156;
  t2983 = t1316*t2982;
  t2985 = t2979 + t2983;
  t2999 = -1.*t1316*t376*t156;
  t3004 = -1.*t1215*t2982;
  t3009 = t2999 + t3004;
  t2454 = -1.*t1567*t2291;
  t2458 = -1.*t1643*t2338;
  t2464 = 0. + t2454 + t2458;
  t3015 = t1446*t2985;
  t3021 = t1567*t3009;
  t3031 = t3015 + t3021;
  t3040 = t1567*t2985;
  t3052 = t1643*t3009;
  t3053 = t3040 + t3052;
  t2567 = Sqrt(t2407);
  t2484 = -1.*t2071*t802*t141;
  t2489 = -1.*t2485*t156;
  t2497 = 0. + t2484 + t2489;
  t2513 = 1/Sqrt(t2407);
  t2819 = -1.*t2071*t802*t141*t399;
  t2824 = -1.*t2485*t156*t399;
  t2836 = t2819 + t2824;
  t2693 = -1.*t2071*t97*t802*t141;
  t2694 = -1.*t2485*t97*t156;
  t2708 = t2693 + t2694;
  t2653 = -1.*t2485*t2071*t399;
  t2663 = t802*t2626;
  t2669 = 0. + t2653 + t2663;
  t3106 = t97*t141;
  t3107 = -1.*t376*t156*t399;
  t3108 = t3106 + t3107;
  t3132 = -1.*t2071*t2249*t399;
  t3134 = t1252*t1869;
  t3139 = t3132 + t3134;
  t3129 = t1215*t3108;
  t3140 = t1316*t3139;
  t3141 = t3129 + t3140;
  t3154 = t1316*t3108;
  t3156 = -1.*t1215*t3139;
  t3160 = t3154 + t3156;
  t3212 = t2071*t97*t2249;
  t3218 = t1252*t2610;
  t3220 = t3212 + t3218;
  t3206 = t1215*t1177;
  t3222 = t1316*t3220;
  t3225 = t3206 + t3222;
  t3227 = t1316*t1177;
  t3228 = -1.*t1215*t3220;
  t3233 = t3227 + t3228;
  t3201 = t2591 + t2614;
  t3114 = -1.*t802*t1869;
  t3124 = t2653 + t3114;
  t3313 = t1252*t2071*t97;
  t3314 = t3313 + t2614;
  t3378 = t1252*t2071*t399;
  t3381 = t3378 + t2627;
  t3418 = -1.*t1252*t156;
  t3427 = t2484 + t3418;
  t3466 = t1316*t1567*t3427;
  t3468 = -1.*t1215*t1643*t3427;
  t3471 = t3466 + t3468;
  t3452 = -1.*t1567*t1215*t3427;
  t3453 = t1316*t1446*t3427;
  t3461 = t3452 + t3453;
  t3342 = -1.*t2071*t802*t399;
  t3346 = -1.*t1252*t2626;
  t3350 = t3342 + t3346;
  t3296 = -1.*t2071*t97*t802;
  t3303 = -1.*t1252*t2610;
  t3308 = t3296 + t3303;
  t3553 = 0. + t832 + t927;
  t3560 = 0. + t3212 + t3218;
  t3554 = -1.*t1215*t3553;
  t3561 = -1.*t1316*t3560;
  t3563 = t3554 + t3561;
  t3574 = t1316*t3553;
  t3575 = -1.*t1215*t3560;
  t3576 = t3574 + t3575;
  t3604 = 0. + t1809 + t1814;
  t3612 = t2071*t2249*t399;
  t3616 = t1252*t2626;
  t3617 = 0. + t3612 + t3616;
  t3605 = -1.*t1215*t3604;
  t3621 = -1.*t1316*t3617;
  t3622 = t3605 + t3621;
  t3641 = t1316*t3604;
  t3646 = -1.*t1215*t3617;
  t3648 = t3641 + t3646;
  t3677 = -1.*t2231*t1215;
  t3679 = -1.*t1316*t2261;
  t3684 = t3677 + t3679;
  t3688 = t2315 + t2329;
  t3695 = t1643*t3684;
  t3697 = t1567*t3688;
  t3700 = t3695 + t3697;
  t3707 = t1567*t3684;
  t3708 = t1446*t3688;
  t3713 = t3707 + t3708;
  t3740 = t1215*t3553;
  t3741 = t1316*t3560;
  t3747 = 0. + t3740 + t3741;
  t3750 = 0. + t3574 + t3575;
  t3766 = t1215*t3604;
  t3767 = t1316*t3617;
  t3768 = 0. + t3766 + t3767;
  t3776 = 0. + t3641 + t3646;
  t3802 = -1.*t1437*t2291;
  t3804 = t1473*t2338;
  t3806 = t3802 + t3804;
  t3812 = -1.*t1473*t2291;
  t3814 = -1.*t1437*t2338;
  t3816 = t3812 + t3814;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=1.;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=1.;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=1.;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=1.;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=-0.2083*t1339 - 0.1422*t1419 - 0.02*(t1339*t1446 + t1419*t1567) - 0.16*(t1339*t1567 + t1419*t1643) - 0.1944*t655 + 0.0329*t1177*t802;
  p_output1[31]=-0.1944*t1869 - 0.1422*t1900 - 0.2083*t1961 - 0.02*(t1567*t1900 + t1446*t1961) - 0.16*(t1643*t1900 + t1567*t1961) + 0.0329*t1830*t802;
  p_output1[32]=0.1944*t141*t2071 - 0.1422*t2107 - 0.2083*t2141 - 0.16*t2183 - 0.02*t2201 + 0.0329*t2071*t376*t802;
  p_output1[33]=t2183*t2343*t2414 + t2201*t2414*t2464;
  p_output1[34]=0.5*(2.*t2201*t2343 + 2.*t2183*t2393)*t2497*t2513*t2565 + t2071*t2565*t2567*t376*t802;
  p_output1[35]=-1.*t1830*t2615*t2648*t802 - 1.*t1177*t2648*t2669*t802;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=-0.0329*t2708 - 0.2083*t2734 - 0.1422*t2779 - 0.02*(t1446*t2734 + t1567*t2779) - 0.16*(t1567*t2734 + t1643*t2779) + 0.0817*t156*t97 - 0.1944*t2071*t376*t97;
  p_output1[40]=-0.0329*t2836 - 0.2083*t2872 - 0.1422*t2888 - 0.02*(t1446*t2872 + t1567*t2888) - 0.16*(t1567*t2872 + t1643*t2888) + 0.0817*t156*t399 - 0.1944*t2071*t376*t399;
  p_output1[41]=0.0817*t2071 - 0.2083*t2985 - 0.1422*t3009 - 0.02*t3031 - 0.16*t3053 + 0.1944*t156*t376 - 0.0329*(-1.*t2071*t2485 + t141*t156*t802);
  p_output1[42]=t2414*t2464*t3031 + t2343*t2414*t3053;
  p_output1[43]=0.5*t2497*t2513*t2565*(2.*t2343*t3031 + 2.*t2393*t3053) + t2565*t2567*(t2071*t2485 - 1.*t141*t156*t802);
  p_output1[44]=t2648*t2669*t2708 + t2615*t2648*t2836;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.1944*t3108 - 0.0329*t3124 - 0.2083*t3141 - 0.1422*t3160 - 0.02*(t1446*t3141 + t1567*t3160) - 0.16*(t1567*t3141 + t1643*t3160) + 0.0817*t2071*t399;
  p_output1[49]=-0.1944*t1177 - 0.0329*t3201 - 0.2083*t3225 - 0.1422*t3233 - 0.02*(t1446*t3225 + t1567*t3233) - 0.16*(t1567*t3225 + t1643*t3233) - 0.0817*t2071*t97;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=t2648*t2669*t3124 + t2615*t2648*t3201;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=0;
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
  p_output1[102]=0;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=0;
  p_output1[106]=0;
  p_output1[107]=0;
  p_output1[108]=0;
  p_output1[109]=0;
  p_output1[110]=0;
  p_output1[111]=-0.0329*t3308 + 0.1422*t1215*t3314 - 0.2083*t1316*t3314 - 0.02*(t1316*t1446*t3314 - 1.*t1215*t1567*t3314) - 0.16*(t1316*t1567*t3314 - 1.*t1215*t1643*t3314);
  p_output1[112]=-0.0329*t3350 + 0.1422*t1215*t3381 - 0.2083*t1316*t3381 - 0.02*(t1316*t1446*t3381 - 1.*t1215*t1567*t3381) - 0.16*(t1316*t1567*t3381 - 1.*t1215*t1643*t3381);
  p_output1[113]=0.1422*t1215*t3427 - 0.2083*t1316*t3427 - 0.02*t3461 - 0.16*t3471 - 0.0329*(-1.*t1252*t141*t2071 + t156*t802);
  p_output1[114]=t2414*t2464*t3461 + t2343*t2414*t3471;
  p_output1[115]=0.5*t2497*t2513*t2565*(2.*t2343*t3461 + 2.*t2393*t3471) + t2565*t2567*(t2244 - 1.*t156*t802);
  p_output1[116]=t2648*t2669*t3308 + t2615*t2648*t3350;
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
  p_output1[120]=-0.1422*t3563 - 0.2083*t3576 - 0.02*(t1567*t3563 + t1446*t3576) - 0.16*(t1643*t3563 + t1567*t3576);
  p_output1[121]=-0.1422*t3622 - 0.2083*t3648 - 0.02*(t1567*t3622 + t1446*t3648) - 0.16*(t1643*t3622 + t1567*t3648);
  p_output1[122]=-0.1422*t3684 - 0.2083*t3688 - 0.16*t3700 - 0.02*t3713;
  p_output1[123]=t2343*t2414*t3700 + t2414*t2464*t3713;
  p_output1[124]=0.5*t2497*t2513*t2565*(2.*t2393*t3700 + 2.*t2343*t3713);
  p_output1[125]=0;
  p_output1[126]=0;
  p_output1[127]=0;
  p_output1[128]=0;
  p_output1[129]=-0.02*(-1.*t1473*t3747 - 1.*t1437*t3750) - 0.16*(-1.*t1437*t3747 + t1473*t3750);
  p_output1[130]=-0.02*(-1.*t1473*t3768 - 1.*t1437*t3776) - 0.16*(-1.*t1437*t3768 + t1473*t3776);
  p_output1[131]=-0.16*t3806 - 0.02*t3816;
  p_output1[132]=t2343*t2414*t3806 + t2414*t2464*t3816;
  p_output1[133]=0.5*t2497*t2513*t2565*(2.*t2393*t3806 + 2.*t2343*t3816);
  p_output1[134]=0;
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

#include "j_hc_2_func.hh"

namespace SymFunction
{

void j_hc_2_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
