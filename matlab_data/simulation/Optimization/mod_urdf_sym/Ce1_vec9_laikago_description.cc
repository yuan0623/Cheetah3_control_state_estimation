/*
 * Automatically Generated from Mathematica.
 * Tue 10 Dec 2019 16:01:19 GMT-05:00
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
  double t476;
  double t400;
  double t404;
  double t498;
  double t174;
  double t631;
  double t265;
  double t390;
  double t651;
  double t655;
  double t673;
  double t426;
  double t570;
  double t571;
  double t1024;
  double t1046;
  double t752;
  double t753;
  double t828;
  double t1142;
  double t1177;
  double t1185;
  double t1429;
  double t1431;
  double t1432;
  double t1377;
  double t1379;
  double t1403;
  double t1428;
  double t1433;
  double t1434;
  double t1443;
  double t1461;
  double t1463;
  double t1464;
  double t1495;
  double t1503;
  double t1531;
  double t1543;
  double t589;
  double t680;
  double t710;
  double t881;
  double t907;
  double t927;
  double t1215;
  double t1274;
  double t1299;
  double t1112;
  double t1190;
  double t1206;
  double t1209;
  double t1343;
  double t1345;
  double t1654;
  double t1659;
  double t1662;
  double t1712;
  double t1720;
  double t1721;
  double t1722;
  double t1733;
  double t1734;
  double t1735;
  double t1761;
  double t1763;
  double t1781;
  double t1789;
  double t1886;
  double t1887;
  double t1888;
  double t1912;
  double t1548;
  double t1551;
  double t1552;
  double t1567;
  double t1568;
  double t1570;
  double t1599;
  double t1602;
  double t1603;
  double t1612;
  double t1613;
  double t1620;
  double t1681;
  double t1690;
  double t1691;
  double t2103;
  double t2109;
  double t2128;
  double t2138;
  double t2146;
  double t2153;
  double t2158;
  double t2161;
  double t2166;
  double t2173;
  double t2174;
  double t2175;
  double t2180;
  double t2182;
  double t2183;
  double t2196;
  double t2208;
  double t2210;
  double t2216;
  double t2224;
  double t2227;
  double t2228;
  double t2231;
  double t2237;
  double t2244;
  double t2246;
  double t2283;
  double t2178;
  double t2284;
  double t2285;
  double t2299;
  double t2304;
  double t2311;
  double t2315;
  double t2320;
  double t2321;
  double t2322;
  double t2324;
  double t2326;
  double t2328;
  double t2332;
  double t2335;
  double t2341;
  double t2343;
  double t2346;
  double t2542;
  double t2555;
  double t2562;
  double t2570;
  double t2593;
  double t2596;
  double t2494;
  double t2507;
  double t2521;
  double t2291;
  double t2347;
  double t2350;
  double t2637;
  double t2642;
  double t2661;
  double t2531;
  double t2532;
  double t2541;
  double t2869;
  double t2876;
  double t2885;
  double t1066;
  double t1082;
  double t1093;
  double t2632;
  double t2634;
  double t2664;
  double t2674;
  double t1038;
  double t1057;
  double t1063;
  double t3023;
  double t3025;
  double t3026;
  double t3033;
  double t3035;
  double t2991;
  double t2993;
  double t2999;
  double t3070;
  double t3072;
  double t3096;
  double t3028;
  double t3036;
  double t3037;
  double t2723;
  double t2745;
  double t2746;
  double t2747;
  double t2908;
  double t2909;
  double t2911;
  double t2912;
  double t3109;
  double t3111;
  double t3112;
  double t3118;
  double t2944;
  double t2946;
  double t2948;
  double t2955;
  double t3367;
  double t3404;
  double t3418;
  double t3568;
  double t3577;
  double t3579;
  double t3580;
  double t3567;
  double t3582;
  double t3586;
  double t3618;
  double t3622;
  double t3623;
  double t3604;
  double t3610;
  double t3613;
  double t3596;
  double t3599;
  double t3600;
  double t3541;
  double t3542;
  double t3729;
  double t3732;
  double t3735;
  double t3736;
  double t3737;
  double t3734;
  double t3739;
  double t3740;
  double t3744;
  double t3747;
  double t3751;
  double t3754;
  double t3755;
  double t3756;
  double t3634;
  double t3783;
  double t3788;
  double t3790;
  double t3641;
  double t3646;
  double t3774;
  double t3775;
  double t3778;
  double t3759;
  double t3762;
  double t3765;
  double t3674;
  double t3689;
  double t3695;
  double t3705;
  double t3120;
  double t3121;
  double t3144;
  double t3153;
  double t3288;
  double t3952;
  double t3290;
  double t3298;
  double t3303;
  double t3902;
  double t3903;
  double t3906;
  double t3430;
  double t3441;
  double t3452;
  double t4014;
  double t4017;
  double t4025;
  double t3496;
  double t4046;
  double t4051;
  double t4052;
  double t4213;
  double t4248;
  double t4272;
  double t3507;
  double t3515;
  double t3625;
  double t3637;
  double t3664;
  double t4485;
  double t3685;
  double t4460;
  double t4464;
  double t3791;
  double t4480;
  double t4488;
  double t3828;
  double t3866;
  double t4540;
  double t4544;
  double t3871;
  double t4546;
  double t4055;
  double t4079;
  double t4174;
  double t4180;
  double t3976;
  double t3977;
  double t4003;
  double t4004;
  double t4755;
  double t4756;
  double t4487;
  double t4790;
  double t4795;
  double t4543;
  double t4857;
  double t4845;
  double t4852;
  double t4853;
  double t4859;
  double t4650;
  double t4879;
  double t4883;
  double t4717;
  double t4887;
  double t4952;
  double t4956;
  double t4960;
  double t4961;
  double t4967;
  double t4968;
  double t4972;
  t476 = Cos(var1[7]);
  t400 = Cos(var1[8]);
  t404 = Sin(var1[7]);
  t498 = Sin(var1[8]);
  t174 = Cos(var1[4]);
  t631 = Sin(var1[5]);
  t265 = Cos(var1[5]);
  t390 = Sin(var1[6]);
  t651 = t476*t400;
  t655 = -1.*t404*t498;
  t673 = t651 + t655;
  t426 = -1.*t400*t404;
  t570 = -1.*t476*t498;
  t571 = t426 + t570;
  t1024 = Cos(var1[6]);
  t1046 = Sin(var1[4]);
  t752 = t400*t404;
  t753 = t476*t498;
  t828 = t752 + t753;
  t1142 = t631*t390*t571;
  t1177 = t265*t673;
  t1185 = t1142 + t1177;
  t1429 = -1.*t476*t400;
  t1431 = t404*t498;
  t1432 = t1429 + t1431;
  t1377 = t1024*t1046*t571;
  t1379 = t174*t1185;
  t1403 = t1377 + t1379;
  t1428 = 0.000529236*t1403;
  t1433 = t1024*t1046*t1432;
  t1434 = t265*t571;
  t1443 = t631*t390*t1432;
  t1461 = t1434 + t1443;
  t1463 = t174*t1461;
  t1464 = t1433 + t1463;
  t1495 = -0.02973458*t1464;
  t1503 = t1428 + t1495;
  t1531 = Cos(var1[3]);
  t1543 = Sin(var1[3]);
  t589 = t265*t390*t571;
  t680 = -1.*t631*t673;
  t710 = t589 + t680;
  t881 = -1.*t631*t828;
  t907 = t265*t390*t673;
  t927 = t881 + t907;
  t1215 = t265*t828;
  t1274 = t631*t390*t673;
  t1299 = t1215 + t1274;
  t1112 = t174*t1024*t571;
  t1190 = -1.*t1046*t1185;
  t1206 = t1112 + t1190;
  t1209 = t174*t1024*t673;
  t1343 = -1.*t1046*t1299;
  t1345 = t1209 + t1343;
  t1654 = -1.*t265*t390*t571;
  t1659 = t631*t673;
  t1662 = t1654 + t1659;
  t1712 = t1531*t1662;
  t1720 = -1.*t1543*t1206;
  t1721 = t1712 + t1720;
  t1722 = 0.000529236*t1721;
  t1733 = t631*t571;
  t1734 = -1.*t265*t390*t1432;
  t1735 = t1733 + t1734;
  t1761 = t1531*t1735;
  t1763 = t174*t1024*t1432;
  t1781 = -1.*t1046*t1461;
  t1789 = t1763 + t1781;
  t1886 = -1.*t1543*t1789;
  t1887 = t1761 + t1886;
  t1888 = -0.02973458*t1887;
  t1912 = t1722 + t1888;
  t1548 = -1.*t1024*t1046*t631*t571;
  t1551 = -1.*t174*t390*t571;
  t1552 = t1548 + t1551;
  t1567 = -1.*t1024*t1046*t631*t673;
  t1568 = -1.*t174*t390*t673;
  t1570 = t1567 + t1568;
  t1599 = -1.*t1024*t1046*t571;
  t1602 = -1.*t174*t1185;
  t1603 = t1599 + t1602;
  t1612 = -1.*t1024*t1046*t673;
  t1613 = -1.*t174*t1299;
  t1620 = t1612 + t1613;
  t1681 = t631*t828;
  t1690 = -1.*t265*t390*t673;
  t1691 = t1681 + t1690;
  t2103 = t1543*t1662;
  t2109 = t1531*t1206;
  t2128 = t2103 + t2109;
  t2138 = 0.000529236*t2128;
  t2146 = t1543*t1735;
  t2153 = t1531*t1789;
  t2158 = t2146 + t2153;
  t2161 = -0.02973458*t2158;
  t2166 = t2138 + t2161;
  t2173 = t1024*t1046*t631;
  t2174 = t174*t390;
  t2175 = t2173 + t2174;
  t2180 = 0.21935*t404;
  t2182 = -1.*t400;
  t2183 = 1. + t2182;
  t2196 = 0.21935*t2183;
  t2208 = 0.217154*t400;
  t2210 = -0.12338*t498;
  t2216 = t2196 + t2208 + t2210;
  t2224 = -1.*t404*t2216;
  t2227 = -1. + t400;
  t2228 = 0.25*t2227;
  t2231 = -0.37338*t400;
  t2237 = 0.002196*t498;
  t2244 = t2228 + t2231 + t2237;
  t2246 = t476*t2244;
  t2283 = t2180 + t2224 + t2246;
  t2178 = -0.037381*t390;
  t2284 = t1024*t2283;
  t2285 = t2178 + t2284;
  t2299 = -1.*t1024;
  t2304 = 1. + t2299;
  t2311 = -0.0875*t2304;
  t2315 = -0.124881*t1024;
  t2320 = -1.*t390*t2283;
  t2321 = t2311 + t2315 + t2320;
  t2322 = -1.*t631*t2321;
  t2324 = -1.*t476;
  t2326 = 1. + t2324;
  t2328 = 0.21935*t2326;
  t2332 = t476*t2216;
  t2335 = t404*t2244;
  t2341 = t2328 + t2332 + t2335;
  t2343 = t265*t2341;
  t2346 = t2322 + t2343;
  t2542 = t174*t2285;
  t2555 = -1.*t1046*t2346;
  t2562 = t2542 + t2555;
  t2570 = -1.*t174*t1024*t631;
  t2593 = t1046*t390;
  t2596 = t2570 + t2593;
  t2494 = t1046*t2285;
  t2507 = t174*t2346;
  t2521 = t2494 + t2507;
  t2291 = -1.*t1046*t2285;
  t2347 = -1.*t174*t2346;
  t2350 = t2291 + t2347;
  t2637 = t265*t2321;
  t2642 = t631*t2341;
  t2661 = t2637 + t2642;
  t2531 = t174*t1024*t631;
  t2532 = -1.*t1046*t390;
  t2541 = t2531 + t2532;
  t2869 = t1024*t1046*t673;
  t2876 = t174*t1299;
  t2885 = t2869 + t2876;
  t1066 = t174*t1024*t631*t673;
  t1082 = -1.*t1046*t390*t673;
  t1093 = t1066 + t1082;
  t2632 = t2596*t2521;
  t2634 = t2175*t2562;
  t2664 = t265*t1024*t2661;
  t2674 = t2632 + t2634 + t2664;
  t1038 = t174*t1024*t631*t571;
  t1057 = -1.*t1046*t390*t571;
  t1063 = t1038 + t1057;
  t3023 = 0.037381*t390;
  t3025 = -1.*t1024*t2283;
  t3026 = t3023 + t3025;
  t3033 = -0.037381*t1024;
  t3035 = t3033 + t2320;
  t2991 = t1024*t1046;
  t2993 = t174*t631*t390;
  t2999 = t2991 + t2993;
  t3070 = -1.*t174*t631*t3026;
  t3072 = t1046*t3035;
  t3096 = t3070 + t3072;
  t3028 = t1046*t631*t3026;
  t3036 = t174*t3035;
  t3037 = t3028 + t3036;
  t2723 = -1.*t2661*t1662;
  t2745 = -1.*t2521*t1403;
  t2746 = -1.*t2562*t1206;
  t2747 = t2723 + t2745 + t2746;
  t2908 = -1.*t2596*t2521;
  t2909 = -1.*t2175*t2562;
  t2911 = -1.*t265*t1024*t2661;
  t2912 = t2908 + t2909 + t2911;
  t3109 = t174*t1024;
  t3111 = -1.*t1046*t631*t390;
  t3112 = t3109 + t3111;
  t3118 = Power(t265,2);
  t2944 = t2661*t1691;
  t2946 = t2521*t2885;
  t2948 = t2562*t1345;
  t2955 = t2944 + t2946 + t2948;
  t3367 = -1.*t265*t2321;
  t3404 = -1.*t631*t2341;
  t3418 = t3367 + t3404;
  t3568 = 0.21935*t476;
  t3577 = -1.*t476*t2216;
  t3579 = -1.*t404*t2244;
  t3580 = t3568 + t3577 + t3579;
  t3567 = t265*t2283;
  t3582 = t631*t390*t3580;
  t3586 = t3567 + t3582;
  t3618 = t631*t2283;
  t3622 = -1.*t265*t390*t3580;
  t3623 = t3618 + t3622;
  t3604 = t174*t3586;
  t3610 = t1024*t1046*t3580;
  t3613 = t3604 + t3610;
  t3596 = -1.*t1046*t3586;
  t3599 = t174*t1024*t3580;
  t3600 = t3596 + t3599;
  t3541 = 5.e-6*t1403;
  t3542 = t2912*t1403;
  t3729 = -0.12338*t400;
  t3732 = t3729 + t2237;
  t3735 = 0.002196*t400;
  t3736 = 0.12338*t498;
  t3737 = t3735 + t3736;
  t3734 = -1.*t404*t3732;
  t3739 = t476*t3737;
  t3740 = t3734 + t3739;
  t3744 = t631*t390*t3740;
  t3747 = t476*t3732;
  t3751 = t404*t3737;
  t3754 = t3747 + t3751;
  t3755 = t265*t3754;
  t3756 = t3744 + t3755;
  t3634 = t2661*t1662;
  t3783 = -1.*t265*t390*t3740;
  t3788 = t631*t3754;
  t3790 = t3783 + t3788;
  t3641 = t2521*t1403;
  t3646 = t2562*t1206;
  t3774 = t174*t3756;
  t3775 = t1024*t1046*t3740;
  t3778 = t3774 + t3775;
  t3759 = -1.*t1046*t3756;
  t3762 = t174*t1024*t3740;
  t3765 = t3759 + t3762;
  t3674 = t2674*t1464;
  t3689 = -1.*t2661*t1735;
  t3695 = -1.*t2521*t1464;
  t3705 = -1.*t2562*t1789;
  t3120 = t3118*t1024*t3026;
  t3121 = -1.*t265*t390*t2661;
  t3144 = t265*t1024*t2661*t571;
  t3153 = -1.*t265*t3026*t1662;
  t3288 = -1.*t3118*t1024*t3026;
  t3952 = Power(t631,2);
  t3290 = t265*t390*t2661;
  t3298 = -1.*t265*t1024*t2661*t673;
  t3303 = t265*t3026*t1691;
  t3902 = t390*t2285;
  t3903 = -1.*t1024*t631*t2346;
  t3906 = t3902 + t3903 + t2664;
  t3430 = -1.*t1024*t631*t2661;
  t3441 = -1.*t2661*t1185;
  t3452 = -1.*t2346*t1662;
  t4014 = -1.*t1024*t2285*t571;
  t4017 = -1.*t2346*t1185;
  t4025 = t4014 + t4017 + t2723;
  t3496 = t1024*t631*t2661;
  t4046 = -1.*t390*t2285;
  t4051 = t1024*t631*t2346;
  t4052 = t4046 + t4051 + t2911;
  t4213 = t1024*t2285*t673;
  t4248 = t2346*t1299;
  t4272 = t4213 + t2944 + t4248;
  t3507 = t2346*t1691;
  t3515 = t2661*t1299;
  t3625 = -1.*t265*t1024*t3623;
  t3637 = t3623*t1691;
  t3664 = t265*t1024*t3623;
  t4485 = Power(t1024,2);
  t3685 = -1.*t3623*t1662;
  t4460 = 5.e-6*t1662;
  t4464 = t4052*t1662;
  t3791 = -1.*t265*t1024*t3790;
  t4480 = t1024*t2285*t571;
  t4488 = t2346*t1185;
  t3828 = t3790*t1691;
  t3866 = t265*t1024*t3790;
  t4540 = t3906*t1735;
  t4544 = -1.*t1024*t2285*t1432;
  t3871 = -1.*t3790*t1662;
  t4546 = -1.*t2346*t1461;
  t4055 = -1.*t1024*t2285;
  t4079 = -1.*t390*t3035;
  t4174 = -1.*t390*t2285*t673;
  t4180 = t1024*t3035*t673;
  t3976 = t1024*t2285;
  t3977 = t390*t3035;
  t4003 = t390*t2285*t571;
  t4004 = -1.*t1024*t3035*t571;
  t4755 = -1.*t1024*t2321;
  t4756 = t4046 + t4755;
  t4487 = t4485*t3580*t673;
  t4790 = t1024*t2321;
  t4795 = t3902 + t4790;
  t4543 = -1.*t4485*t3580*t571;
  t4857 = Power(t390,2);
  t4845 = 5.e-6*t1024*t571;
  t4852 = t1024*t4756*t571;
  t4853 = -1.*t390*t2321*t571;
  t4859 = t2341*t673;
  t4650 = t4485*t3740*t673;
  t4879 = t1024*t4795*t1432;
  t4883 = -1.*t2341*t571;
  t4717 = -1.*t4485*t3740*t571;
  t4887 = t390*t2321*t1432;
  t4952 = -0.000019783370916*t571;
  t4956 = 5.e-6*t673;
  t4960 = 0.124881*t673;
  t4961 = 0.0875*t1432;
  t4967 = t4960 + t4961;
  t4968 = -0.02973458*t4967;
  t4972 = t4952 + t4956 + t4968;
  p_output1[0]=var2[8]*(-0.5*(-0.02973458*t1206 + 0.000529236*t1345)*var2[4] - 0.5*(-0.02973458*t174*t710 + 0.000529236*t174*t927)*var2[5] - 0.5*(-0.02973458*t1063 + 0.000529236*t1093)*var2[6] - 0.5*t1503*var2[7] - 0.5*t1503*var2[8]);
  p_output1[1]=var2[8]*(-0.5*(-0.02973458*(-1.*t1206*t1531 - 1.*t1543*t1662) + 0.000529236*(-1.*t1345*t1531 - 1.*t1543*t1691))*var2[3] - 0.5*(0.02973458*t1543*t1603 - 0.000529236*t1543*t1620)*var2[4] - 0.5*(-0.02973458*(t1185*t1531 + t1046*t1543*t710) + 0.000529236*(t1299*t1531 + t1046*t1543*t927))*var2[5] - 0.5*(-0.02973458*(-1.*t1543*t1552 - 1.*t1024*t1531*t265*t571) + 0.000529236*(-1.*t1543*t1570 - 1.*t1024*t1531*t265*t673))*var2[6] - 0.5*t1912*var2[7] - 0.5*t1912*var2[8]);
  p_output1[2]=var2[8]*(-0.5*(0.000529236*(-1.*t1345*t1543 + t1531*t1691) - 0.02973458*t1721)*var2[3] - 0.5*(-0.02973458*t1531*t1603 + 0.000529236*t1531*t1620)*var2[4] - 0.5*(-0.02973458*(t1185*t1543 - 1.*t1046*t1531*t710) + 0.000529236*(t1299*t1543 - 1.*t1046*t1531*t927))*var2[5] - 0.5*(-0.02973458*(t1531*t1552 - 1.*t1024*t1543*t265*t571) + 0.000529236*(t1531*t1570 - 1.*t1024*t1543*t265*t673))*var2[6] - 0.5*t2166*var2[7] - 0.5*t2166*var2[8]);
  p_output1[3]=var2[8]*(-0.5*(5.e-6*t1345 + 0.006197*t2175 + 0.000529236*((-1.*t1206*t2350 - 1.*t1206*t2521 - 1.*t1403*t2562 - 1.*t1603*t2562)*t2596 + t1403*(t2175*t2350 + t2175*t2521 + t2541*t2562 + t2562*t2596) + t1206*t2674 + t2175*t2747) - 0.02973458*((-1.*t2175*t2350 - 1.*t2175*t2521 - 1.*t2541*t2562 - 1.*t2562*t2596)*t2885 + t2596*(t1345*t2350 + t1345*t2521 + t1620*t2562 + t2562*t2885) + t1345*t2912 + t2175*t2955))*var2[4] - 0.5*(-0.006197*t1024*t174*t265 + 0.000529236*(-1.*t1024*t174*t265*t2747 + t1403*(t1024*t2346*t265 - 1.*t1024*t174*t2521*t265 + t1024*t1046*t2562*t265 - 1.*t1046*t2175*t3418 + t174*t2596*t3418 + t3430) + t174*t2674*t710 + t2596*(t1046*t1206*t3418 - 1.*t1403*t174*t3418 + t3441 + t3452 - 1.*t174*t2521*t710 + t1046*t2562*t710)) + 5.e-6*t174*t927 - 0.02973458*(-1.*t1024*t174*t265*t2955 + t2885*(-1.*t1024*t2346*t265 + t1024*t174*t2521*t265 - 1.*t1024*t1046*t2562*t265 + t1046*t2175*t3418 - 1.*t174*t2596*t3418 + t3496) + t174*t2912*t927 + t2596*(-1.*t1046*t1345*t3418 + t174*t2885*t3418 + t3507 + t3515 + t174*t2521*t927 - 1.*t1046*t2562*t927)))*var2[5] - 0.5*(5.e-6*t1093 + 0.006197*t2999 + 0.000529236*(t1063*t2674 + t2747*t2999 + t1403*(t2521*t2999 + t2175*t3037 + t2596*t3096 + t2562*t3112 + t3120 + t3121) + t2596*(-1.*t1063*t2521 - 1.*t1552*t2562 - 1.*t1206*t3037 - 1.*t1403*t3096 + t3144 + t3153)) - 0.02973458*(t1093*t2912 + t2955*t2999 + t2885*(-1.*t2521*t2999 - 1.*t2175*t3037 - 1.*t2596*t3096 - 1.*t2562*t3112 + t3288 + t3290) + t2596*(t1093*t2521 + t1570*t2562 + t1345*t3037 + t2885*t3096 + t3298 + t3303)))*var2[6] - 0.5*(t3541 - 0.02973458*(t3542 + t2885*(-1.*t2175*t3600 - 1.*t2596*t3613 + t3625) + t2596*(t1345*t3600 + t2885*t3613 + t3634 + t3637 + t3641 + t3646)) + 0.000529236*(t1403*(t2175*t3600 + t2596*t3613 + t3664) + t3674 + t2596*(-1.*t1206*t3600 - 1.*t1403*t3613 + t3685 + t3689 + t3695 + t3705)))*var2[7] - 0.5*(t3541 - 0.02973458*(t3542 + t2885*(-1.*t2175*t3765 - 1.*t2596*t3778 + t3791) + t2596*(t3634 + t3641 + t3646 + t1345*t3765 + t2885*t3778 + t3828)) + 0.000529236*(t3674 + t1403*(t2175*t3765 + t2596*t3778 + t3866) + t2596*(t3689 + t3695 + t3705 - 1.*t1206*t3765 - 1.*t1403*t3778 + t3871)))*var2[8]);
  p_output1[4]=var2[8]*(-0.5*(5.e-6*t1299 - 0.006197*t1024*t631 + 0.000529236*(t1185*t3906 - 1.*t1024*t4025*t631 + t1662*(t3430 - 1.*t1024*t3418*t631) + t1024*t265*(-1.*t1185*t3418 + t3441 + t3452 - 1.*t2346*t710)) - 0.02973458*(t1299*t4052 - 1.*t1024*t4272*t631 + t1691*(t3496 + t1024*t3418*t631) + t1024*t265*(t1299*t3418 + t3507 + t3515 + t2346*t927)))*var2[5] - 0.5*(-0.006197*t265*t390 + 0.000529236*(-1.*t265*t390*t4025 - 1.*t1024*t265*t3906*t571 + t1662*(t3120 + t3121 + t1024*t3026*t3952 + t3976 + t3977 + t2346*t390*t631) + t1024*t265*(t3144 + t3153 + t4003 + t4004 + t1185*t3026*t631 - 1.*t1024*t2346*t571*t631)) - 5.e-6*t1024*t265*t673 - 0.02973458*(-1.*t265*t390*t4272 + t1691*(t3288 + t3290 - 1.*t1024*t3026*t3952 + t4055 + t4079 - 1.*t2346*t390*t631) - 1.*t1024*t265*t4052*t673 + t1024*t265*(t3298 + t3303 + t4174 + t4180 - 1.*t1299*t3026*t631 + t1024*t2346*t631*t673)))*var2[6] - 0.5*(t4460 + 0.000529236*(t4540 + t1024*t265*(-1.*t1185*t3586 + t3685 + t3689 + t4543 + t4544 + t4546) + t1662*(t3664 + t1024*t3580*t390 - 1.*t1024*t3586*t631)) - 0.02973458*(t4464 + t1024*t265*(t1299*t3586 + t3634 + t3637 + t4480 + t4487 + t4488) + t1691*(t3625 - 1.*t1024*t3580*t390 + t1024*t3586*t631)))*var2[7] - 0.5*(t4460 + 0.000529236*(t4540 + t1024*t265*(t3689 - 1.*t1185*t3756 + t3871 + t4544 + t4546 + t4717) + t1662*(t3866 + t1024*t3740*t390 - 1.*t1024*t3756*t631)) - 0.02973458*(t4464 + t1024*t265*(t3634 + t1299*t3756 + t3828 + t4480 + t4488 + t4650) + t1691*(t3791 - 1.*t1024*t3740*t390 + t1024*t3756*t631)))*var2[8]);
  p_output1[5]=var2[8]*(-0.5*(0.006197*t1024 - 5.e-6*t390*t673 + 0.000529236*(t1024*(t1024*t3026 - 1.*t2321*t390 + t3976 + t3977)*t571 - 1.*t390*t4795*t571 + t390*(t4003 + t4004 + t1024*t2321*t571 + t3026*t390*t571) + t1024*(t4014 + t2321*t390*t571 - 1.*t2341*t673)) - 0.02973458*(t1024*(-1.*t1024*t3026 + t2321*t390 + t4055 + t4079)*t673 - 1.*t390*t4756*t673 + t390*(t4174 + t4180 - 1.*t1024*t2321*t673 - 1.*t3026*t390*t673) + t1024*(t4213 - 1.*t2321*t390*t673 + t2341*t828)))*var2[6] - 0.5*(t4845 + 0.000529236*(t4879 + t390*(t4543 + t4544 + t4883 + t4887 - 1.*t3580*t4857*t571 - 1.*t2283*t673)) - 0.02973458*(t4852 + t390*(t4480 + t4487 + t4853 + t4859 + t3580*t4857*t673 + t2283*t828)))*var2[7] - 0.5*(t4845 + 0.000529236*(t4879 + t390*(t4544 + t4717 + t4883 + t4887 - 1.*t3740*t4857*t571 - 1.*t3754*t673)) - 0.02973458*(t4852 + t390*(t4480 + t4650 + t4853 + t4859 + t3740*t4857*t673 + t3754*t828)))*var2[8]);
  p_output1[6]=var2[8]*(-0.5*t4972*var2[7] - 0.5*t4972*var2[8]);
  p_output1[7]=-0.5*(-0.02973458*(-0.21935*t400 + t2216*t400 + t3737*t400 - 1.*t2244*t498 + t3732*t498) + 0.000529236*(t2244*t400 - 1.*t3732*t400 - 0.21935*t498 + t2216*t498 + t3737*t498))*Power(var2[8],2);
  p_output1[8]=0;
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

#include "Ce1_vec9_laikago_description.hh"

namespace SymFunction
{

void Ce1_vec9_laikago_description_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
