/*
 * Automatically Generated from Mathematica.
 * Tue 10 Dec 2019 16:02:47 GMT-05:00
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
  double t208;
  double t166;
  double t184;
  double t215;
  double t204;
  double t342;
  double t380;
  double t155;
  double t392;
  double t421;
  double t437;
  double t164;
  double t444;
  double t113;
  double t461;
  double t464;
  double t465;
  double t484;
  double t643;
  double t644;
  double t645;
  double t389;
  double t449;
  double t457;
  double t471;
  double t497;
  double t510;
  double t511;
  double t512;
  double t515;
  double t602;
  double t650;
  double t656;
  double t663;
  double t677;
  double t679;
  double t682;
  double t685;
  double t697;
  double t885;
  double t889;
  double t908;
  double t910;
  double t911;
  double t913;
  double t988;
  double t989;
  double t990;
  double t1152;
  double t1153;
  double t1157;
  double t1158;
  double t1192;
  double t1196;
  double t1213;
  double t1215;
  double t1216;
  double t1219;
  double t1246;
  double t1144;
  double t1207;
  double t1257;
  double t1259;
  double t1134;
  double t1272;
  double t1274;
  double t1278;
  double t1288;
  double t1304;
  double t1322;
  double t1323;
  double t1329;
  double t1332;
  double t1337;
  double t1338;
  double t1343;
  double t1353;
  double t1360;
  double t1370;
  double t1374;
  double t1376;
  double t1466;
  double t1467;
  double t1470;
  double t1456;
  double t1458;
  double t1460;
  double t1421;
  double t1440;
  double t1446;
  double t1007;
  double t1009;
  double t1122;
  double t1276;
  double t1379;
  double t1390;
  double t1491;
  double t1495;
  double t1498;
  double t1476;
  double t1479;
  double t1480;
  double t1583;
  double t1600;
  double t1602;
  double t1819;
  double t1821;
  double t1834;
  double t1807;
  double t1810;
  double t1816;
  double t1499;
  double t2066;
  double t2067;
  double t2071;
  double t1533;
  double t1650;
  double t1753;
  double t2075;
  double t1500;
  double t1501;
  double t1502;
  double t2095;
  double t2105;
  double t1535;
  double t1536;
  double t1540;
  double t2144;
  double t1688;
  double t1703;
  double t1705;
  double t2192;
  double t2197;
  double t1755;
  double t1772;
  double t1775;
  double t2128;
  double t2442;
  double t2448;
  double t2449;
  double t2464;
  double t2465;
  double t2176;
  double t2053;
  double t2112;
  double t2718;
  double t2728;
  double t2730;
  double t2802;
  double t2803;
  double t2804;
  double t2055;
  double t2059;
  double t2553;
  double t2558;
  double t2572;
  double t2580;
  double t2116;
  double t2122;
  double t2133;
  double t2135;
  double t2897;
  double t2452;
  double t2467;
  double t2920;
  double t2489;
  double t2498;
  double t2177;
  double t2187;
  double t2657;
  double t2671;
  double t2672;
  double t2904;
  double t2939;
  double t3053;
  double t3065;
  double t3069;
  double t2958;
  double t2970;
  double t3106;
  double t3117;
  double t3130;
  double t3175;
  double t3179;
  double t3184;
  double t2680;
  double t2693;
  double t2696;
  double t3007;
  double t3012;
  double t3193;
  double t3203;
  double t3222;
  double t3019;
  double t3021;
  double t3331;
  double t3332;
  double t3334;
  double t2428;
  double t2430;
  double t3423;
  double t3424;
  double t3425;
  double t3430;
  double t2546;
  double t2547;
  double t3415;
  double t3432;
  double t3478;
  double t3495;
  double t3497;
  double t723;
  double t725;
  double t728;
  double t3564;
  double t3566;
  double t3571;
  double t3581;
  double t3587;
  double t3589;
  double t3406;
  double t3431;
  double t3698;
  double t3700;
  double t3723;
  double t3761;
  double t3765;
  double t3771;
  double t3449;
  double t3455;
  double t3724;
  double t3797;
  double t3798;
  double t3915;
  double t3920;
  double t3921;
  double t3928;
  double t3931;
  double t3933;
  double t3477;
  double t3512;
  double t3518;
  double t3839;
  double t3876;
  double t3895;
  double t4081;
  double t4092;
  double t4069;
  double t4070;
  double t4071;
  double t3328;
  double t3338;
  double t3339;
  double t3340;
  double t3341;
  double t3359;
  double t3379;
  double t3388;
  double t3389;
  double t3396;
  double t3407;
  double t3435;
  double t4133;
  double t4142;
  double t4162;
  double t3447;
  double t3453;
  double t4127;
  double t4128;
  double t4129;
  double t3460;
  double t3476;
  double t3519;
  double t3521;
  double t3549;
  double t3552;
  double t3554;
  double t3556;
  double t3562;
  double t3572;
  double t3590;
  double t3591;
  double t3626;
  double t3638;
  double t3642;
  double t3644;
  double t3645;
  double t3647;
  double t3656;
  double t3669;
  double t3682;
  double t3690;
  double t3691;
  double t3794;
  double t4171;
  double t3795;
  double t4232;
  double t4233;
  double t4234;
  double t4221;
  double t4222;
  double t4224;
  double t3863;
  double t4188;
  double t3898;
  double t3913;
  double t3914;
  double t4235;
  double t4263;
  double t3943;
  double t3956;
  double t4296;
  double t4312;
  double t4333;
  double t4345;
  double t4351;
  double t4353;
  double t3987;
  double t4273;
  double t4279;
  double t4016;
  double t4024;
  t208 = Cos(var1[10]);
  t166 = Cos(var1[11]);
  t184 = Sin(var1[10]);
  t215 = Sin(var1[11]);
  t204 = -1.*t166*t184;
  t342 = -1.*t208*t215;
  t380 = t204 + t342;
  t155 = Cos(var1[5]);
  t392 = t208*t166;
  t421 = -1.*t184*t215;
  t437 = t392 + t421;
  t164 = Sin(var1[9]);
  t444 = Sin(var1[5]);
  t113 = Sin(var1[3]);
  t461 = Cos(var1[3]);
  t464 = Cos(var1[9]);
  t465 = Cos(var1[4]);
  t484 = Sin(var1[4]);
  t643 = t166*t184;
  t644 = t208*t215;
  t645 = t643 + t644;
  t389 = -1.*t155*t164*t380;
  t449 = t437*t444;
  t457 = t389 + t449;
  t471 = t464*t465*t380;
  t497 = t155*t437;
  t510 = t164*t380*t444;
  t511 = t497 + t510;
  t512 = -1.*t484*t511;
  t515 = t471 + t512;
  t602 = -1.*t155*t164*t437;
  t650 = t645*t444;
  t656 = t602 + t650;
  t663 = t464*t465*t437;
  t677 = t155*t645;
  t679 = t164*t437*t444;
  t682 = t677 + t679;
  t685 = -1.*t484*t682;
  t697 = t663 + t685;
  t885 = -1.*t464*t380*t484;
  t889 = -1.*t465*t511;
  t908 = t885 + t889;
  t910 = -1.*t464*t437*t484;
  t911 = -1.*t465*t682;
  t913 = t910 + t911;
  t988 = t465*t164;
  t989 = t464*t484*t444;
  t990 = t988 + t989;
  t1152 = -1.*t166;
  t1153 = 1. + t1152;
  t1157 = 0.21935*t1153;
  t1158 = 0.217154*t166;
  t1192 = -0.12338*t215;
  t1196 = t1157 + t1158 + t1192;
  t1213 = -1. + t166;
  t1215 = 0.25*t1213;
  t1216 = -0.37338*t166;
  t1219 = 0.002196*t215;
  t1246 = t1215 + t1216 + t1219;
  t1144 = 0.21935*t184;
  t1207 = -1.*t184*t1196;
  t1257 = t208*t1246;
  t1259 = t1144 + t1207 + t1257;
  t1134 = 0.036619*t164;
  t1272 = t464*t1259;
  t1274 = t1134 + t1272;
  t1278 = -1.*t208;
  t1288 = 1. + t1278;
  t1304 = 0.21935*t1288;
  t1322 = t208*t1196;
  t1323 = t184*t1246;
  t1329 = t1304 + t1322 + t1323;
  t1332 = t155*t1329;
  t1337 = -1.*t464;
  t1338 = 1. + t1337;
  t1343 = 0.0875*t1338;
  t1353 = 0.124119*t464;
  t1360 = -1.*t164*t1259;
  t1370 = t1343 + t1353 + t1360;
  t1374 = -1.*t1370*t444;
  t1376 = t1332 + t1374;
  t1466 = t465*t1274;
  t1467 = -1.*t484*t1376;
  t1470 = t1466 + t1467;
  t1456 = t164*t484;
  t1458 = -1.*t464*t465*t444;
  t1460 = t1456 + t1458;
  t1421 = t1274*t484;
  t1440 = t465*t1376;
  t1446 = t1421 + t1440;
  t1007 = t464*t380*t484;
  t1009 = t465*t511;
  t1122 = t1007 + t1009;
  t1276 = -1.*t1274*t484;
  t1379 = -1.*t465*t1376;
  t1390 = t1276 + t1379;
  t1491 = t155*t1370;
  t1495 = t1329*t444;
  t1498 = t1491 + t1495;
  t1476 = -1.*t164*t484;
  t1479 = t464*t465*t444;
  t1480 = t1476 + t1479;
  t1583 = t464*t437*t484;
  t1600 = t465*t682;
  t1602 = t1583 + t1600;
  t1819 = t155*t164*t380;
  t1821 = -1.*t437*t444;
  t1834 = t1819 + t1821;
  t1807 = t155*t164*t437;
  t1810 = -1.*t645*t444;
  t1816 = t1807 + t1810;
  t1499 = t464*t155*t1498;
  t2066 = -1.*t155*t1370;
  t2067 = -1.*t1329*t444;
  t2071 = t2066 + t2067;
  t1533 = -1.*t1498*t457;
  t1650 = -1.*t464*t155*t1498;
  t1753 = t1498*t656;
  t2075 = -1.*t464*t444*t1498;
  t1500 = t1460*t1446;
  t1501 = t990*t1470;
  t1502 = t1499 + t1500 + t1501;
  t2095 = -1.*t1498*t511;
  t2105 = -1.*t1376*t457;
  t1535 = -1.*t1446*t1122;
  t1536 = -1.*t1470*t515;
  t1540 = t1533 + t1535 + t1536;
  t2144 = t464*t444*t1498;
  t1688 = -1.*t1460*t1446;
  t1703 = -1.*t990*t1470;
  t1705 = t1650 + t1688 + t1703;
  t2192 = t1376*t656;
  t2197 = t1498*t682;
  t1755 = t1446*t1602;
  t1772 = t1470*t697;
  t1775 = t1753 + t1755 + t1772;
  t2128 = -1.*t164*t1274;
  t2442 = -0.036619*t164;
  t2448 = -1.*t464*t1259;
  t2449 = t2442 + t2448;
  t2464 = 0.036619*t464;
  t2465 = t2464 + t1360;
  t2176 = t464*t1274*t437;
  t2053 = t164*t1274;
  t2112 = -1.*t464*t1274*t380;
  t2718 = -1.*t465*t164*t380;
  t2728 = -1.*t464*t380*t484*t444;
  t2730 = t2718 + t2728;
  t2802 = -1.*t465*t164*t437;
  t2803 = -1.*t464*t437*t484*t444;
  t2804 = t2802 + t2803;
  t2055 = -1.*t464*t444*t1376;
  t2059 = t2053 + t2055 + t1499;
  t2553 = t464*t1274;
  t2558 = t164*t2465;
  t2572 = t164*t1274*t380;
  t2580 = -1.*t464*t2465*t380;
  t2116 = -1.*t1376*t511;
  t2122 = t2112 + t2116 + t1533;
  t2133 = t464*t444*t1376;
  t2135 = t2128 + t2133 + t1650;
  t2897 = Power(t155,2);
  t2452 = -1.*t464*t1274;
  t2467 = -1.*t164*t2465;
  t2920 = Power(t444,2);
  t2489 = -1.*t164*t1274*t437;
  t2498 = t464*t2465*t437;
  t2177 = t1376*t682;
  t2187 = t2176 + t1753 + t2177;
  t2657 = -1.*t164*t380*t484;
  t2671 = t464*t465*t380*t444;
  t2672 = t2657 + t2671;
  t2904 = t464*t2897*t2449;
  t2939 = -1.*t155*t164*t1498;
  t3053 = t464*t484;
  t3065 = t465*t164*t444;
  t3069 = t3053 + t3065;
  t2958 = t464*t155*t380*t1498;
  t2970 = -1.*t155*t2449*t457;
  t3106 = t2465*t484;
  t3117 = -1.*t465*t2449*t444;
  t3130 = t3106 + t3117;
  t3175 = t465*t2465;
  t3179 = t2449*t484*t444;
  t3184 = t3175 + t3179;
  t2680 = -1.*t164*t437*t484;
  t2693 = t464*t465*t437*t444;
  t2696 = t2680 + t2693;
  t3007 = -1.*t464*t2897*t2449;
  t3012 = t155*t164*t1498;
  t3193 = t464*t465;
  t3203 = -1.*t164*t484*t444;
  t3222 = t3193 + t3203;
  t3019 = -1.*t464*t155*t437*t1498;
  t3021 = t155*t2449*t656;
  t3331 = -1.*t208*t166;
  t3332 = t184*t215;
  t3334 = t3331 + t3332;
  t2428 = -1.*t464*t1370;
  t2430 = t2128 + t2428;
  t3423 = 0.21935*t208;
  t3424 = -1.*t208*t1196;
  t3425 = -1.*t184*t1246;
  t3430 = t3423 + t3424 + t3425;
  t2546 = t464*t1370;
  t2547 = t2053 + t2546;
  t3415 = Power(t464,2);
  t3432 = Power(t164,2);
  t3478 = t155*t380;
  t3495 = t164*t3334*t444;
  t3497 = t3478 + t3495;
  t723 = t461*t457;
  t725 = -1.*t113*t515;
  t728 = t723 + t725;
  t3564 = -1.*t155*t164*t3334;
  t3566 = t380*t444;
  t3571 = t3564 + t3566;
  t3581 = t464*t465*t3334;
  t3587 = -1.*t484*t3497;
  t3589 = t3581 + t3587;
  t3406 = t464*t1274*t380;
  t3431 = t3415*t3430*t437;
  t3698 = -1.*t155*t164*t3430;
  t3700 = t1259*t444;
  t3723 = t3698 + t3700;
  t3761 = t155*t1259;
  t3765 = t164*t3430*t444;
  t3771 = t3761 + t3765;
  t3449 = -1.*t3415*t3430*t380;
  t3455 = -1.*t464*t1274*t3334;
  t3724 = -1.*t464*t155*t3723;
  t3797 = t3723*t656;
  t3798 = t1498*t457;
  t3915 = t464*t3430*t484;
  t3920 = t465*t3771;
  t3921 = t3915 + t3920;
  t3928 = t464*t465*t3430;
  t3931 = -1.*t484*t3771;
  t3933 = t3928 + t3931;
  t3477 = t464*t3334*t484;
  t3512 = t465*t3497;
  t3518 = t3477 + t3512;
  t3839 = t464*t155*t3723;
  t3876 = -1.*t1498*t3571;
  t3895 = -1.*t3723*t457;
  t4081 = -0.12338*t166;
  t4092 = t4081 + t1219;
  t4069 = 0.002196*t166;
  t4070 = 0.12338*t215;
  t4071 = t4069 + t4070;
  t3328 = -0.000019380093084*t380;
  t3338 = 5.e-6*t3334;
  t3339 = -0.124119*t437;
  t3340 = -0.0875*t3334;
  t3341 = t3339 + t3340;
  t3359 = 0.02973458*t3341;
  t3379 = t3328 + t3338 + t3359;
  t3388 = -0.5*var2[9]*t3379;
  t3389 = -5.e-6*t464*t380;
  t3396 = t464*t2430*t380;
  t3407 = -1.*t164*t1370*t380;
  t3435 = t1329*t437;
  t4133 = -1.*t184*t4092;
  t4142 = t208*t4071;
  t4162 = t4133 + t4142;
  t3447 = t464*t2547*t3334;
  t3453 = -1.*t1329*t380;
  t4127 = t208*t4092;
  t4128 = t184*t4071;
  t4129 = t4127 + t4128;
  t3460 = t164*t1370*t3334;
  t3476 = -0.000529236*t1122;
  t3519 = 0.02973458*t3518;
  t3521 = t3476 + t3519;
  t3549 = -0.5*var2[0]*t3521;
  t3552 = t113*t457;
  t3554 = t461*t515;
  t3556 = t3552 + t3554;
  t3562 = -0.000529236*t3556;
  t3572 = t113*t3571;
  t3590 = t461*t3589;
  t3591 = t3572 + t3590;
  t3626 = 0.02973458*t3591;
  t3638 = t3562 + t3626;
  t3642 = -0.5*var2[2]*t3638;
  t3644 = -0.000529236*t728;
  t3645 = t461*t3571;
  t3647 = -1.*t113*t3589;
  t3656 = t3645 + t3647;
  t3669 = 0.02973458*t3656;
  t3682 = t3644 + t3669;
  t3690 = -0.5*var2[1]*t3682;
  t3691 = 5.e-6*t1834;
  t3794 = t457*t2135;
  t4171 = t3415*t4162*t437;
  t3795 = t1376*t511;
  t4232 = -1.*t155*t164*t4162;
  t4233 = t4129*t444;
  t4234 = t4232 + t4233;
  t4221 = t155*t4129;
  t4222 = t164*t4162*t444;
  t4224 = t4221 + t4222;
  t3863 = t3571*t2059;
  t4188 = -1.*t3415*t4162*t380;
  t3898 = -1.*t1376*t3497;
  t3913 = 5.e-6*t908;
  t3914 = t1122*t1705;
  t4235 = -1.*t464*t155*t4234;
  t4263 = t4234*t656;
  t3943 = t1446*t1122;
  t3956 = t1470*t515;
  t4296 = t464*t4162*t484;
  t4312 = t465*t4224;
  t4333 = t4296 + t4312;
  t4345 = t464*t465*t4162;
  t4351 = -1.*t484*t4224;
  t4353 = t4345 + t4351;
  t3987 = t3518*t1502;
  t4273 = t464*t155*t4234;
  t4279 = -1.*t4234*t457;
  t4016 = -1.*t1446*t3518;
  t4024 = -1.*t1470*t3589;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=(-0.5*(0.02973458*(-1.*t113*t457 - 1.*t461*t515) - 0.000529236*(-1.*t113*t656 - 1.*t461*t697))*var2[1] - 0.5*(-0.000529236*(t461*t656 - 1.*t113*t697) + 0.02973458*t728)*var2[2])*var2[11];
  p_output1[4]=(-0.5*(0.02973458*t515 - 0.000529236*t697)*var2[0] - 0.5*(-0.02973458*t113*t908 + 0.000529236*t113*t913)*var2[1] - 0.5*(0.02973458*t461*t908 - 0.000529236*t461*t913)*var2[2] - 0.5*(5.e-6*(-1.*t437*t464*t465 + t484*t682) - 0.006197*t990 + 0.02973458*(t1705*t697 + t1460*(t1470*t1602 + t1390*t697 + t1446*t697 + t1470*t913) + t1775*t990 + t1602*(-1.*t1460*t1470 - 1.*t1470*t1480 - 1.*t1390*t990 - 1.*t1446*t990)) - 0.000529236*(t1502*t515 + t1460*(-1.*t1122*t1470 - 1.*t1390*t515 - 1.*t1446*t515 - 1.*t1470*t908) + t1540*t990 + t1122*(t1460*t1470 + t1470*t1480 + t1390*t990 + t1446*t990)))*var2[3])*var2[11];
  p_output1[5]=(-0.5*(-0.000529236*t1816*t465 + 0.02973458*t1834*t465)*var2[0] - 0.5*(0.02973458*(t113*t1834*t484 + t461*t511) - 0.000529236*(t113*t1816*t484 + t461*t682))*var2[1] - 0.5*(0.02973458*(-1.*t1834*t461*t484 + t113*t511) - 0.000529236*(-1.*t1816*t461*t484 + t113*t682))*var2[2] - 0.5*(-5.e-6*t1816*t465 + 0.006197*t155*t464*t465 - 0.000529236*(t1502*t1834*t465 - 1.*t1540*t155*t464*t465 + t1460*(t2095 + t2105 - 1.*t1446*t1834*t465 - 1.*t1122*t2071*t465 + t1470*t1834*t484 + t2071*t484*t515) + t1122*(t2075 + t1376*t155*t464 + t1460*t2071*t465 - 1.*t1446*t155*t464*t465 + t1470*t155*t464*t484 - 1.*t2071*t484*t990)) + 0.02973458*(t1705*t1816*t465 - 1.*t155*t1775*t464*t465 + t1460*(t2192 + t2197 + t1446*t1816*t465 + t1602*t2071*t465 - 1.*t1470*t1816*t484 - 1.*t2071*t484*t697) + t1602*(t2144 - 1.*t1376*t155*t464 - 1.*t1460*t2071*t465 + t1446*t155*t464*t465 - 1.*t1470*t155*t464*t484 + t2071*t484*t990)))*var2[3] - 0.5*(0.006197*t444*t464 - 0.000529236*(-1.*t2122*t444*t464 + t457*(t2075 - 1.*t2071*t444*t464) + t2059*t511 + t155*t464*(-1.*t1376*t1834 + t2095 + t2105 - 1.*t2071*t511)) + 5.e-6*(-1.*t164*t437*t444 - 1.*t155*t645) + 0.02973458*(-1.*t2187*t444*t464 + (t2144 + t2071*t444*t464)*t656 + t2135*t682 + t155*t464*(t1376*t1816 + t2192 + t2197 + t2071*t682)))*var2[4])*var2[11];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-0.5*(0.02973458*t2672 - 0.000529236*t2696)*var2[0] - 0.5*(0.02973458*(-1.*t113*t2730 - 1.*t155*t380*t461*t464) - 0.000529236*(-1.*t113*t2804 - 1.*t155*t437*t461*t464))*var2[1] - 0.5*(0.02973458*(t2730*t461 - 1.*t113*t155*t380*t464) - 0.000529236*(t2804*t461 - 1.*t113*t155*t437*t464))*var2[2] - 0.5*(-0.006197*t3069 + 5.e-6*(-1.*t437*t444*t464*t465 + t164*t437*t484) + 0.02973458*(t1705*t2696 + t1775*t3069 + t1460*(t1446*t2696 + t1470*t2804 + t3019 + t3021 + t1602*t3130 + t3184*t697) + t1602*(t3007 + t3012 - 1.*t1446*t3069 - 1.*t1460*t3130 - 1.*t1470*t3222 - 1.*t3184*t990)) - 0.000529236*(t1502*t2672 + t1540*t3069 + t1460*(-1.*t1446*t2672 - 1.*t1470*t2730 + t2958 + t2970 - 1.*t1122*t3130 - 1.*t3184*t515) + t1122*(t2904 + t2939 + t1446*t3069 + t1460*t3130 + t1470*t3222 + t3184*t990)))*var2[3] - 0.5*(0.006197*t155*t164 + 5.e-6*t155*t437*t464 - 0.000529236*(-1.*t155*t164*t2122 - 1.*t155*t2059*t380*t464 + t457*(t2553 + t2558 + t2904 + t2939 + t1376*t164*t444 + t2449*t2920*t464) + t155*t464*(t2572 + t2580 + t2958 + t2970 - 1.*t1376*t380*t444*t464 + t2449*t444*t511)) + 0.02973458*(-1.*t155*t164*t2187 - 1.*t155*t2135*t437*t464 + (t2452 + t2467 + t3007 + t3012 - 1.*t1376*t164*t444 - 1.*t2449*t2920*t464)*t656 + t155*t464*(t2489 + t2498 + t3019 + t3021 + t1376*t437*t444*t464 - 1.*t2449*t444*t682)))*var2[4] - 0.5*(5.e-6*t164*t437 - 0.006197*t464 - 0.000529236*(-1.*t164*t2547*t380 + (t2112 + t1370*t164*t380 - 1.*t1329*t437)*t464 + t380*t464*(-1.*t1370*t164 + t2553 + t2558 + t2449*t464) + t164*(t2572 + t2580 + t164*t2449*t380 + t1370*t380*t464)) + 0.02973458*(-1.*t164*t2430*t437 + t437*t464*(t1370*t164 + t2452 + t2467 - 1.*t2449*t464) + t164*(t2489 + t2498 - 1.*t164*t2449*t437 - 1.*t1370*t437*t464) + t464*(t2176 - 1.*t1370*t164*t437 + t1329*t645)))*var2[5])*var2[11];
  p_output1[10]=(t3388 + t3549 + t3642 + t3690 - 0.5*(t3913 + 0.02973458*(t3914 + t1460*(t3797 + t3798 + t1602*t3921 + t3943 + t3956 + t3933*t697) + t1602*(t3724 - 1.*t1460*t3921 - 1.*t3933*t990)) - 0.000529236*(t3987 + t1460*(t3876 + t3895 - 1.*t1122*t3921 + t4016 + t4024 - 1.*t3933*t515) + t1122*(t3839 + t1460*t3921 + t3933*t990)))*var2[3] - 0.5*(t3691 - 0.000529236*(t3863 + t457*(t3839 + t164*t3430*t464 - 1.*t3771*t444*t464) + t155*t464*(t3449 + t3455 + t3876 + t3895 + t3898 - 1.*t3771*t511)) + 0.02973458*(t3794 + (t3724 - 1.*t164*t3430*t464 + t3771*t444*t464)*t656 + t155*t464*(t3406 + t3431 + t3795 + t3797 + t3798 + t3771*t682)))*var2[4] - 0.5*(t3389 - 0.000529236*(t3447 + t164*(t3449 + t3453 + t3455 + t3460 - 1.*t3430*t3432*t380 - 1.*t1259*t437)) + 0.02973458*(t3396 + t164*(t3406 + t3407 + t3431 + t3435 + t3430*t3432*t437 + t1259*t645)))*var2[5])*var2[11];
  p_output1[11]=(t3388 + t3549 + t3642 + t3690 - 0.5*(t3913 + 0.02973458*(t3914 + t1460*(t3798 + t3943 + t3956 + t4263 + t1602*t4333 + t4353*t697) + t1602*(t4235 - 1.*t1460*t4333 - 1.*t4353*t990)) - 0.000529236*(t3987 + t1460*(t3876 + t4016 + t4024 + t4279 - 1.*t1122*t4333 - 1.*t4353*t515) + t1122*(t4273 + t1460*t4333 + t4353*t990)))*var2[3] - 0.5*(t3691 - 0.000529236*(t3863 + t457*(t4273 + t164*t4162*t464 - 1.*t4224*t444*t464) + t155*t464*(t3455 + t3876 + t3898 + t4188 + t4279 - 1.*t4224*t511)) + 0.02973458*(t3794 + (t4235 - 1.*t164*t4162*t464 + t4224*t444*t464)*t656 + t155*t464*(t3406 + t3795 + t3798 + t4171 + t4263 + t4224*t682)))*var2[4] - 0.5*(t3389 - 0.000529236*(t3447 + t164*(t3453 + t3455 + t3460 - 1.*t3432*t380*t4162 + t4188 - 1.*t4129*t437)) + 0.02973458*(t3396 + t164*(t3406 + t3407 + t3435 + t4171 + t3432*t4162*t437 + t4129*t645)))*var2[5] - 0.5*(-0.000529236*(t1246*t166 - 0.21935*t215 + t1196*t215 + t215*t4071 - 1.*t166*t4092) + 0.02973458*(-0.21935*t166 + t1196*t166 - 1.*t1246*t215 + t166*t4071 + t215*t4092))*var2[10])*var2[11];
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

#include "Ce3_vec12_laikago_description.hh"

namespace SymFunction
{

void Ce3_vec12_laikago_description_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
