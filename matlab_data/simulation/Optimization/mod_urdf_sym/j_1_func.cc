/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 13:00:00 GMT-05:00
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
  double t155;
  double t362;
  double t283;
  double t46;
  double t368;
  double t291;
  double t384;
  double t387;
  double t444;
  double t449;
  double t457;
  double t465;
  double t484;
  double t437;
  double t471;
  double t486;
  double t511;
  double t512;
  double t518;
  double t650;
  double t663;
  double t674;
  double t552;
  double t679;
  double t682;
  double t685;
  double t604;
  double t606;
  double t697;
  double t701;
  double t725;
  double t617;
  double t631;
  double t825;
  double t854;
  double t860;
  double t885;
  double t1009;
  double t1002;
  double t1046;
  double t1059;
  double t1060;
  double t1094;
  double t1097;
  double t1099;
  double t1011;
  double t1112;
  double t1122;
  double t1163;
  double t1191;
  double t1195;
  double t1134;
  double t1141;
  double t1278;
  double t1288;
  double t1304;
  double t389;
  double t1419;
  double t1379;
  double t1458;
  double t1460;
  double t1465;
  double t1466;
  double t1470;
  double t1474;
  double t677;
  double t1421;
  double t1479;
  double t1495;
  double t1535;
  double t1536;
  double t1540;
  double t1499;
  double t1501;
  double t830;
  double t1665;
  double t1668;
  double t1669;
  double t1775;
  double t1780;
  double t1783;
  double t1786;
  double t1789;
  double t1790;
  double t1890;
  double t1947;
  double t1963;
  double t1965;
  double t1974;
  double t1975;
  double t2088;
  double t2093;
  double t2095;
  double t2105;
  double t2112;
  double t2115;
  double t2187;
  double t2188;
  double t2191;
  double t2192;
  double t2196;
  double t2197;
  double t2335;
  double t2336;
  double t2341;
  double t2347;
  double t2356;
  double t2357;
  double t2448;
  double t2449;
  double t2450;
  double t2452;
  double t2463;
  double t2464;
  double t1722;
  double t2177;
  double t2553;
  double t2558;
  double t2559;
  double t2572;
  double t2575;
  double t2580;
  double t1835;
  double t2271;
  double t2670;
  double t2671;
  double t2672;
  double t2676;
  double t2679;
  double t2680;
  double t2428;
  double t2071;
  double t2730;
  double t2732;
  double t2734;
  double t2741;
  double t2748;
  double t2751;
  double t2802;
  double t2803;
  double t2804;
  double t2835;
  double t2840;
  double t2848;
  double t2854;
  double t2861;
  double t2874;
  double t2952;
  double t2953;
  double t2954;
  double t2987;
  double t2988;
  double t2989;
  double t2993;
  double t2996;
  double t3006;
  double t3093;
  double t3095;
  double t3100;
  double t3101;
  double t3104;
  double t3105;
  double t3184;
  double t3193;
  double t3197;
  double t3198;
  double t3203;
  double t3205;
  double t3051;
  double t2796;
  double t3315;
  double t3316;
  double t3320;
  double t3322;
  double t3323;
  double t3324;
  double t3168;
  double t2956;
  double t3351;
  double t3354;
  double t3357;
  double t3358;
  double t3359;
  double t3364;
  double t3424;
  double t3425;
  double t3428;
  double t3446;
  double t3447;
  double t3449;
  double t3451;
  double t3453;
  double t3455;
  double t910;
  double t3486;
  double t3490;
  double t3542;
  double t3548;
  double t3549;
  double t3552;
  double t3554;
  double t3556;
  double t3460;
  double t3581;
  double t3587;
  double t3589;
  double t3590;
  double t3591;
  double t3596;
  double t3602;
  double t3495;
  double t3639;
  double t3642;
  double t3644;
  double t3645;
  double t3647;
  double t3652;
  double t3656;
  double t3819;
  double t3829;
  double t3835;
  double t3870;
  double t3876;
  double t3882;
  double t1684;
  double t3931;
  double t3933;
  double t3985;
  double t3983;
  double t3987;
  double t3993;
  double t3895;
  double t4061;
  double t4063;
  double t4048;
  double t4064;
  double t4069;
  double t3942;
  double t4127;
  double t4128;
  double t4129;
  double t4131;
  double t4133;
  double t4235;
  double t4238;
  double t4240;
  double t4279;
  double t4281;
  double t4294;
  double t1329;
  double t4325;
  double t4327;
  double t4351;
  double t4350;
  double t4352;
  double t4353;
  double t4297;
  double t4418;
  double t4419;
  double t4401;
  double t4422;
  double t4427;
  double t4333;
  double t4460;
  double t4468;
  double t4471;
  double t4474;
  double t4476;
  t155 = Cos(var1[5]);
  t362 = Sin(var1[3]);
  t283 = Sin(var1[4]);
  t46 = Cos(var1[3]);
  t368 = Sin(var1[5]);
  t291 = t46*t155*t283;
  t384 = t362*t368;
  t387 = t291 + t384;
  t444 = Cos(var1[6]);
  t449 = -1.*t155*t362*t283;
  t457 = t46*t368;
  t465 = t449 + t457;
  t484 = Sin(var1[6]);
  t437 = Cos(var1[7]);
  t471 = t444*t465;
  t486 = -1.*t484;
  t511 = 0. + t486;
  t512 = t387*t511;
  t518 = t471 + t512;
  t650 = -1.*t155*t362;
  t663 = t46*t283*t368;
  t674 = t650 + t663;
  t552 = 0. + t444;
  t679 = -1.*t46*t155;
  t682 = -1.*t362*t283*t368;
  t685 = t679 + t682;
  t604 = Cos(var1[8]);
  t606 = 0. + t604;
  t697 = t444*t685;
  t701 = t674*t511;
  t725 = t697 + t701;
  t617 = Sin(var1[7]);
  t631 = Sin(var1[8]);
  t825 = Cos(var1[4]);
  t854 = -1.*t825*t444*t362;
  t860 = t46*t825*t511;
  t885 = t854 + t860;
  t1009 = Cos(var1[15]);
  t1002 = Sin(var1[15]);
  t1046 = Cos(var1[16]);
  t1059 = t1009*t465;
  t1060 = -1.*t1002;
  t1094 = 0. + t1060;
  t1097 = t1094*t387;
  t1099 = t1059 + t1097;
  t1011 = 0. + t1009;
  t1112 = Cos(var1[17]);
  t1122 = 0. + t1112;
  t1163 = t1094*t674;
  t1191 = t1009*t685;
  t1195 = t1163 + t1191;
  t1134 = Sin(var1[16]);
  t1141 = Sin(var1[17]);
  t1278 = t46*t825*t1094;
  t1288 = -1.*t1009*t825*t362;
  t1304 = t1278 + t1288;
  t389 = -0.0875*t387;
  t1419 = Cos(var1[12]);
  t1379 = Sin(var1[12]);
  t1458 = Cos(var1[13]);
  t1460 = t1419*t465;
  t1465 = -1.*t1379;
  t1466 = 0. + t1465;
  t1470 = t1466*t387;
  t1474 = t1460 + t1470;
  t677 = -0.0875*t674;
  t1421 = 0. + t1419;
  t1479 = Cos(var1[14]);
  t1495 = 0. + t1479;
  t1535 = t1466*t674;
  t1536 = t1419*t685;
  t1540 = t1535 + t1536;
  t1499 = Sin(var1[13]);
  t1501 = Sin(var1[14]);
  t830 = -0.0875*t46*t825;
  t1665 = t46*t825*t1466;
  t1668 = -1.*t1419*t825*t362;
  t1669 = t1665 + t1668;
  t1775 = t46*t825*t155*t444;
  t1780 = t825*t155*t362*t511;
  t1783 = t1775 + t1780;
  t1786 = t437*t1783;
  t1789 = -1.*t155*t283*t617;
  t1790 = t1786 + t1789;
  t1890 = t46*t825*t444*t368;
  t1947 = t825*t362*t368*t511;
  t1963 = t1890 + t1947;
  t1965 = t437*t1963;
  t1974 = -1.*t283*t368*t617;
  t1975 = t1965 + t1974;
  t2088 = -1.*t46*t444*t283;
  t2093 = -1.*t362*t283*t511;
  t2095 = t2088 + t2093;
  t2105 = t437*t2095;
  t2112 = -1.*t825*t617;
  t2115 = t2105 + t2112;
  t2187 = t1009*t46*t825*t155;
  t2188 = t825*t155*t1094*t362;
  t2191 = t2187 + t2188;
  t2192 = t1046*t2191;
  t2196 = -1.*t155*t1134*t283;
  t2197 = t2192 + t2196;
  t2335 = -1.*t1134*t283*t368;
  t2336 = t1009*t46*t825*t368;
  t2341 = t825*t1094*t362*t368;
  t2347 = t2336 + t2341;
  t2356 = t1046*t2347;
  t2357 = t2335 + t2356;
  t2448 = -1.*t825*t1134;
  t2449 = -1.*t1009*t46*t283;
  t2450 = -1.*t1094*t362*t283;
  t2452 = t2449 + t2450;
  t2463 = t1046*t2452;
  t2464 = t2448 + t2463;
  t1722 = -0.0875*t825*t155*t362;
  t2177 = 0.21935*t155*t283;
  t2553 = t1419*t46*t825*t155;
  t2558 = t825*t155*t1466*t362;
  t2559 = t2553 + t2558;
  t2572 = t1458*t2559;
  t2575 = -1.*t155*t1499*t283;
  t2580 = t2572 + t2575;
  t1835 = -0.0875*t825*t362*t368;
  t2271 = 0.21935*t283*t368;
  t2670 = -1.*t1499*t283*t368;
  t2671 = t1419*t46*t825*t368;
  t2672 = t825*t1466*t362*t368;
  t2676 = t2671 + t2672;
  t2679 = t1458*t2676;
  t2680 = t2670 + t2679;
  t2428 = 0.21935*t825;
  t2071 = 0.0875*t362*t283;
  t2730 = -1.*t825*t1499;
  t2732 = -1.*t1419*t46*t283;
  t2734 = -1.*t1466*t362*t283;
  t2741 = t2732 + t2734;
  t2748 = t1458*t2741;
  t2751 = t2730 + t2748;
  t2802 = t155*t362;
  t2803 = -1.*t46*t283*t368;
  t2804 = t2802 + t2803;
  t2835 = t444*t2804;
  t2840 = t685*t511;
  t2848 = t2835 + t2840;
  t2854 = t437*t2848;
  t2861 = -1.*t825*t368*t617;
  t2874 = t2854 + t2861;
  t2952 = t155*t362*t283;
  t2953 = -1.*t46*t368;
  t2954 = t2952 + t2953;
  t2987 = t444*t387;
  t2988 = t2954*t511;
  t2989 = t2987 + t2988;
  t2993 = t437*t2989;
  t2996 = t825*t155*t617;
  t3006 = t2993 + t2996;
  t3093 = -1.*t825*t1134*t368;
  t3095 = t1009*t2804;
  t3100 = t1094*t685;
  t3101 = t3095 + t3100;
  t3104 = t1046*t3101;
  t3105 = t3093 + t3104;
  t3184 = t825*t155*t1134;
  t3193 = t1094*t2954;
  t3197 = t1009*t387;
  t3198 = t3193 + t3197;
  t3203 = t1046*t3198;
  t3205 = t3184 + t3203;
  t3051 = 0.21935*t825*t368;
  t2796 = -0.0875*t685;
  t3315 = -1.*t825*t1499*t368;
  t3316 = t1419*t2804;
  t3320 = t1466*t685;
  t3322 = t3316 + t3320;
  t3323 = t1458*t3322;
  t3324 = t3315 + t3323;
  t3168 = -0.21935*t825*t155;
  t2956 = -0.0875*t2954;
  t3351 = t825*t155*t1499;
  t3354 = t1466*t2954;
  t3357 = t1419*t387;
  t3358 = t3354 + t3357;
  t3359 = t1458*t3358;
  t3364 = t3351 + t3359;
  t3424 = -1.*t444*t2954;
  t3425 = -1.*t387*t484;
  t3428 = t3424 + t3425;
  t3446 = t46*t155;
  t3447 = t362*t283*t368;
  t3449 = t3446 + t3447;
  t3451 = -1.*t444*t3449;
  t3453 = -1.*t674*t484;
  t3455 = t3451 + t3453;
  t910 = -1.*t825*t362*t484;
  t3486 = -1.*t46*t825*t484;
  t3490 = t854 + t3486;
  t3542 = t825*t155;
  t3548 = 0. + t3542;
  t3549 = t3548*t437;
  t3552 = 0. + t2987 + t2988;
  t3554 = -1.*t3552*t617;
  t3556 = t3549 + t3554;
  t3460 = t444*t674;
  t3581 = t825*t368;
  t3587 = 0. + t3581;
  t3589 = t437*t3587;
  t3590 = t3449*t511;
  t3591 = 0. + t3460 + t3590;
  t3596 = -1.*t3591*t617;
  t3602 = t3589 + t3596;
  t3495 = t46*t825*t444;
  t3639 = -1.*t283;
  t3642 = 0. + t3639;
  t3644 = t437*t3642;
  t3645 = t825*t362*t511;
  t3647 = 0. + t3495 + t3645;
  t3652 = -1.*t3647*t617;
  t3656 = t3644 + t3652;
  t3819 = -1.*t1419*t2954;
  t3829 = -1.*t1379*t387;
  t3835 = t3819 + t3829;
  t3870 = -1.*t1379*t674;
  t3876 = -1.*t1419*t3449;
  t3882 = t3870 + t3876;
  t1684 = -1.*t825*t1379*t362;
  t3931 = -1.*t46*t825*t1379;
  t3933 = t3931 + t1668;
  t3985 = 0. + t3354 + t3357;
  t3983 = t1458*t3548;
  t3987 = -1.*t1499*t3985;
  t3993 = t3983 + t3987;
  t3895 = t1419*t674;
  t4061 = t1466*t3449;
  t4063 = 0. + t3895 + t4061;
  t4048 = t1458*t3587;
  t4064 = -1.*t1499*t4063;
  t4069 = t4048 + t4064;
  t3942 = t1419*t46*t825;
  t4127 = t825*t1466*t362;
  t4128 = 0. + t3942 + t4127;
  t4129 = -1.*t1499*t4128;
  t4131 = t1458*t3642;
  t4133 = t4129 + t4131;
  t4235 = -1.*t1009*t2954;
  t4238 = -1.*t1002*t387;
  t4240 = t4235 + t4238;
  t4279 = -1.*t1002*t674;
  t4281 = -1.*t1009*t3449;
  t4294 = t4279 + t4281;
  t1329 = -1.*t825*t1002*t362;
  t4325 = -1.*t46*t825*t1002;
  t4327 = t4325 + t1288;
  t4351 = 0. + t3193 + t3197;
  t4350 = t1046*t3548;
  t4352 = -1.*t1134*t4351;
  t4353 = t4350 + t4352;
  t4297 = t1009*t674;
  t4418 = t1094*t3449;
  t4419 = 0. + t4297 + t4418;
  t4401 = t1046*t3587;
  t4422 = -1.*t1134*t4419;
  t4427 = t4401 + t4422;
  t4333 = t1009*t46*t825;
  t4460 = t825*t1094*t362;
  t4468 = 0. + t4333 + t4460;
  t4471 = -1.*t1134*t4468;
  t4474 = t1046*t3642;
  t4476 = t4471 + t4474;
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
  p_output1[27]=t389 - 0.25*t437*t518 - 0.037*(t465*t484 + t387*t552) - 0.27*(t437*t518*t606 - 1.*t518*t617*t631);
  p_output1[28]=t677 - 0.037*(t552*t674 + t484*t685) - 0.25*t437*t725 - 0.27*(t437*t606*t725 - 1.*t617*t631*t725);
  p_output1[29]=t830 - 0.25*t437*t885 - 0.27*(t437*t606*t885 - 1.*t617*t631*t885) - 0.037*(t46*t552*t825 + t910);
  p_output1[30]=-0.25*t1046*t1099 - 0.27*(t1046*t1099*t1122 - 1.*t1099*t1134*t1141) + 0.0875*t387 + 0.037*(t1011*t387 + t1002*t465);
  p_output1[31]=-0.25*t1046*t1195 - 0.27*(t1046*t1122*t1195 - 1.*t1134*t1141*t1195) + 0.0875*t674 + 0.037*(t1011*t674 + t1002*t685);
  p_output1[32]=-0.25*t1046*t1304 - 0.27*(t1046*t1122*t1304 - 1.*t1134*t1141*t1304) + 0.0875*t46*t825 + 0.037*(t1329 + t1011*t46*t825);
  p_output1[33]=-0.25*t1458*t1474 - 0.27*(t1458*t1474*t1495 - 1.*t1474*t1499*t1501) + t389 - 0.037*(t1421*t387 + t1379*t465);
  p_output1[34]=-0.25*t1458*t1540 - 0.27*(t1458*t1495*t1540 - 1.*t1499*t1501*t1540) + t677 - 0.037*(t1421*t674 + t1379*t685);
  p_output1[35]=-0.25*t1458*t1669 - 0.27*(t1458*t1495*t1669 - 1.*t1499*t1501*t1669) - 0.037*(t1684 + t1421*t46*t825) + t830;
  p_output1[36]=t1722 - 0.25*t1790 - 0.21935*t155*t283 - 0.27*(t1790*t606 + (-1.*t155*t283*t437 - 1.*t1783*t617)*t631) - 0.037*(t155*t46*t484*t825 + t155*t362*t552*t825);
  p_output1[37]=t1835 - 0.25*t1975 - 0.21935*t283*t368 - 0.27*(t1975*t606 + (-1.*t283*t368*t437 - 1.*t1963*t617)*t631) - 0.037*(t368*t46*t484*t825 + t362*t368*t552*t825);
  p_output1[38]=t2071 - 0.25*t2115 - 0.037*(-1.*t283*t46*t484 - 1.*t283*t362*t552) - 0.21935*t825 - 0.27*(t2115*t606 + t631*(-1.*t2095*t617 - 1.*t437*t825));
  p_output1[39]=t2177 - 0.25*t2197 - 0.27*(t1122*t2197 + t1141*(-1.*t1134*t2191 - 1.*t1046*t155*t283)) + 0.0875*t155*t362*t825 + 0.037*(t1011*t155*t362*t825 + t1002*t155*t46*t825);
  p_output1[40]=t2271 - 0.25*t2357 - 0.27*(t1122*t2357 + t1141*(-1.*t1134*t2347 - 1.*t1046*t283*t368)) + 0.0875*t362*t368*t825 + 0.037*(t1011*t362*t368*t825 + t1002*t368*t46*t825);
  p_output1[41]=t2428 - 0.25*t2464 - 0.0875*t283*t362 + 0.037*(-1.*t1011*t283*t362 - 1.*t1002*t283*t46) - 0.27*(t1122*t2464 + t1141*(-1.*t1134*t2452 - 1.*t1046*t825));
  p_output1[42]=t1722 + t2177 - 0.25*t2580 - 0.27*(t1495*t2580 + t1501*(-1.*t1499*t2559 - 1.*t1458*t155*t283)) - 0.037*(t1421*t155*t362*t825 + t1379*t155*t46*t825);
  p_output1[43]=t1835 + t2271 - 0.25*t2680 - 0.27*(t1495*t2680 + t1501*(-1.*t1499*t2676 - 1.*t1458*t283*t368)) - 0.037*(t1421*t362*t368*t825 + t1379*t368*t46*t825);
  p_output1[44]=t2071 + t2428 - 0.25*t2751 - 0.037*(-1.*t1421*t283*t362 - 1.*t1379*t283*t46) - 0.27*(t1495*t2751 + t1501*(-1.*t1499*t2741 - 1.*t1458*t825));
  p_output1[45]=t2796 - 0.25*t2874 - 0.037*(t2804*t484 + t552*t685) - 0.21935*t368*t825 - 0.27*(t2874*t606 + t631*(-1.*t2848*t617 - 1.*t368*t437*t825));
  p_output1[46]=t2956 - 0.25*t3006 - 0.037*(t387*t484 + t2954*t552) + 0.21935*t155*t825 - 0.27*(t3006*t606 + t631*(-1.*t2989*t617 + t155*t437*t825));
  p_output1[47]=0;
  p_output1[48]=t3051 - 0.25*t3105 + 0.0875*t685 + 0.037*(t1002*t2804 + t1011*t685) - 0.27*(t1122*t3105 + t1141*(-1.*t1134*t3101 - 1.*t1046*t368*t825));
  p_output1[49]=0.0875*t2954 + t3168 - 0.25*t3205 + 0.037*(t1011*t2954 + t1002*t387) - 0.27*(t1122*t3205 + t1141*(-1.*t1134*t3198 + t1046*t155*t825));
  p_output1[50]=0;
  p_output1[51]=t2796 + t3051 - 0.25*t3324 - 0.037*(t1379*t2804 + t1421*t685) - 0.27*(t1495*t3324 + t1501*(-1.*t1499*t3322 - 1.*t1458*t368*t825));
  p_output1[52]=t2956 + t3168 - 0.25*t3364 - 0.037*(t1421*t2954 + t1379*t387) - 0.27*(t1495*t3364 + t1501*(-1.*t1499*t3358 + t1458*t155*t825));
  p_output1[53]=0;
  p_output1[54]=-0.25*t3428*t437 - 0.037*(t2987 - 1.*t2954*t484) - 0.27*(t3428*t437*t606 - 1.*t3428*t617*t631);
  p_output1[55]=-0.25*t3455*t437 - 0.037*(t3460 - 1.*t3449*t484) - 0.27*(t3455*t437*t606 - 1.*t3455*t617*t631);
  p_output1[56]=-0.25*t3490*t437 - 0.27*(t3490*t437*t606 - 1.*t3490*t617*t631) - 0.037*(t3495 + t910);
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=-0.25*t3556 - 0.27*(t3556*t606 + (-1.*t3552*t437 - 1.*t3548*t617)*t631);
  p_output1[64]=-0.25*t3602 - 0.27*(t3602*t606 + (-1.*t3591*t437 - 1.*t3587*t617)*t631);
  p_output1[65]=-0.25*t3656 - 0.27*(t3656*t606 + (-1.*t3647*t437 - 1.*t3642*t617)*t631);
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=-0.27*((0. + t3549 + t3554)*t604 - 1.*(0. + t3552*t437 + t3548*t617)*t631);
  p_output1[73]=-0.27*((0. + t3589 + t3596)*t604 - 1.*(0. + t3591*t437 + t3587*t617)*t631);
  p_output1[74]=-0.27*((0. + t3644 + t3652)*t604 - 1.*(0. + t3647*t437 + t3642*t617)*t631);
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
  p_output1[111]=0;
  p_output1[112]=0;
  p_output1[113]=0;
  p_output1[114]=-0.037*(-1.*t1379*t2954 + t3357) - 0.25*t1458*t3835 - 0.27*(t1458*t1495*t3835 - 1.*t1499*t1501*t3835);
  p_output1[115]=-0.25*t1458*t3882 - 0.27*(t1458*t1495*t3882 - 1.*t1499*t1501*t3882) - 0.037*(-1.*t1379*t3449 + t3895);
  p_output1[116]=-0.25*t1458*t3933 - 0.27*(t1458*t1495*t3933 - 1.*t1499*t1501*t3933) - 0.037*(t1684 + t3942);
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
  p_output1[120]=0;
  p_output1[121]=0;
  p_output1[122]=0;
  p_output1[123]=-0.25*t3993 - 0.27*(t1501*(-1.*t1499*t3548 - 1.*t1458*t3985) + t1495*t3993);
  p_output1[124]=-0.25*t4069 - 0.27*(t1501*(-1.*t1499*t3587 - 1.*t1458*t4063) + t1495*t4069);
  p_output1[125]=-0.25*t4133 - 0.27*(t1501*(-1.*t1499*t3642 - 1.*t1458*t4128) + t1495*t4133);
  p_output1[126]=0;
  p_output1[127]=0;
  p_output1[128]=0;
  p_output1[129]=0;
  p_output1[130]=0;
  p_output1[131]=0;
  p_output1[132]=-0.27*(-1.*t1501*(0. + t1499*t3548 + t1458*t3985) + t1479*(0. + t3983 + t3987));
  p_output1[133]=-0.27*(-1.*t1501*(0. + t1499*t3587 + t1458*t4063) + t1479*(0. + t4048 + t4064));
  p_output1[134]=-0.27*(-1.*t1501*(0. + t1499*t3642 + t1458*t4128) + t1479*(0. + t4129 + t4131));
  p_output1[135]=0;
  p_output1[136]=0;
  p_output1[137]=0;
  p_output1[138]=0.037*(-1.*t1002*t2954 + t3197) - 0.25*t1046*t4240 - 0.27*(t1046*t1122*t4240 - 1.*t1134*t1141*t4240);
  p_output1[139]=-0.25*t1046*t4294 - 0.27*(t1046*t1122*t4294 - 1.*t1134*t1141*t4294) + 0.037*(-1.*t1002*t3449 + t4297);
  p_output1[140]=-0.25*t1046*t4327 - 0.27*(t1046*t1122*t4327 - 1.*t1134*t1141*t4327) + 0.037*(t1329 + t4333);
  p_output1[141]=0;
  p_output1[142]=0;
  p_output1[143]=0;
  p_output1[144]=0;
  p_output1[145]=0;
  p_output1[146]=0;
  p_output1[147]=-0.25*t4353 - 0.27*(t1141*(-1.*t1134*t3548 - 1.*t1046*t4351) + t1122*t4353);
  p_output1[148]=-0.25*t4427 - 0.27*(t1141*(-1.*t1134*t3587 - 1.*t1046*t4419) + t1122*t4427);
  p_output1[149]=-0.25*t4476 - 0.27*(t1141*(-1.*t1134*t3642 - 1.*t1046*t4468) + t1122*t4476);
  p_output1[150]=0;
  p_output1[151]=0;
  p_output1[152]=0;
  p_output1[153]=0;
  p_output1[154]=0;
  p_output1[155]=0;
  p_output1[156]=-0.27*(-1.*t1141*(0. + t1134*t3548 + t1046*t4351) + t1112*(0. + t4350 + t4352));
  p_output1[157]=-0.27*(-1.*t1141*(0. + t1134*t3587 + t1046*t4419) + t1112*(0. + t4401 + t4422));
  p_output1[158]=-0.27*(-1.*t1141*(0. + t1134*t3642 + t1046*t4468) + t1112*(0. + t4471 + t4474));
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

#include "j_1_func.hh"

namespace SymFunction
{

void j_1_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
