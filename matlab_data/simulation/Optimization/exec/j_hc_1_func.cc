/*
 * Automatically Generated from Mathematica.
 * Mon 29 Jul 2019 15:08:48 GMT-04:00
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
  double t1086;
  double t587;
  double t900;
  double t737;
  double t1198;
  double t1015;
  double t1203;
  double t1215;
  double t1381;
  double t1389;
  double t1390;
  double t1580;
  double t1455;
  double t1436;
  double t1446;
  double t1601;
  double t1642;
  double t1653;
  double t1654;
  double t1684;
  double t1825;
  double t1828;
  double t1750;
  double t1332;
  double t1924;
  double t1934;
  double t1945;
  double t1949;
  double t1953;
  double t1961;
  double t1870;
  double t1969;
  double t1978;
  double t2009;
  double t2029;
  double t2037;
  double t2041;
  double t1760;
  double t1761;
  double t2118;
  double t2158;
  double t2174;
  double t2178;
  double t2183;
  double t2187;
  double t2193;
  double t2203;
  double t2208;
  double t2213;
  double t2252;
  double t2254;
  double t2277;
  double t2279;
  double t2283;
  double t2284;
  double t2285;
  double t2261;
  double t2291;
  double t2305;
  double t2310;
  double t2315;
  double t2323;
  double t2324;
  double t2329;
  double t2333;
  double t2231;
  double t2234;
  double t2237;
  double t2338;
  double t2341;
  double t2343;
  double t2360;
  double t2383;
  double t2388;
  double t2389;
  double t2425;
  double t2471;
  double t2473;
  double t2481;
  double t2484;
  double t2485;
  double t2487;
  double t2503;
  double t2504;
  double t2508;
  double t2511;
  double t2513;
  double t2515;
  double t2552;
  double t2555;
  double t2563;
  double t2543;
  double t2550;
  double t2565;
  double t2566;
  double t2567;
  double t2584;
  double t2587;
  double t2630;
  double t2631;
  double t2633;
  double t2627;
  double t2638;
  double t2644;
  double t2649;
  double t2652;
  double t2653;
  double t2741;
  double t2745;
  double t2752;
  double t2740;
  double t2754;
  double t2779;
  double t2784;
  double t2786;
  double t2787;
  double t2861;
  double t2862;
  double t2865;
  double t2860;
  double t2867;
  double t2869;
  double t2873;
  double t2876;
  double t2877;
  double t2397;
  double t2398;
  double t2403;
  double t2883;
  double t2888;
  double t2894;
  double t2906;
  double t2907;
  double t2917;
  double t2491;
  double t2416;
  double t2442;
  double t2451;
  double t2470;
  double t2725;
  double t2732;
  double t2733;
  double t2620;
  double t2621;
  double t2625;
  double t2592;
  double t2596;
  double t2603;
  double t2985;
  double t2990;
  double t2997;
  double t3018;
  double t3021;
  double t3026;
  double t3015;
  double t3039;
  double t3040;
  double t3053;
  double t3054;
  double t3055;
  double t3092;
  double t3102;
  double t3105;
  double t3091;
  double t3106;
  double t3107;
  double t3110;
  double t3111;
  double t3114;
  double t3088;
  double t3004;
  double t3009;
  double t3167;
  double t3175;
  double t3178;
  double t3223;
  double t3224;
  double t3273;
  double t3278;
  double t3309;
  double t3310;
  double t3311;
  double t3302;
  double t3303;
  double t3306;
  double t3217;
  double t3218;
  double t3220;
  double t3163;
  double t3164;
  double t3368;
  double t3375;
  double t3370;
  double t3377;
  double t3378;
  double t3382;
  double t3384;
  double t3385;
  double t3419;
  double t3427;
  double t3428;
  double t3423;
  double t3430;
  double t3431;
  double t3435;
  double t3439;
  double t3441;
  double t3485;
  double t3501;
  double t3502;
  double t3511;
  double t3513;
  double t3519;
  double t3526;
  double t3531;
  double t3536;
  double t3537;
  double t3561;
  double t3563;
  double t3564;
  double t3568;
  double t3593;
  double t3595;
  double t3596;
  double t3611;
  double t3651;
  double t3652;
  double t3654;
  double t3657;
  double t3659;
  double t3660;
  t1086 = Cos(var1[3]);
  t587 = Cos(var1[5]);
  t900 = Sin(var1[4]);
  t737 = Sin(var1[3]);
  t1198 = Sin(var1[5]);
  t1015 = -1.*t587*t737*t900;
  t1203 = t1086*t1198;
  t1215 = t1015 + t1203;
  t1381 = t1086*t587*t900;
  t1389 = t737*t1198;
  t1390 = t1381 + t1389;
  t1580 = Cos(var1[10]);
  t1455 = Cos(var1[9]);
  t1436 = Sin(var1[10]);
  t1446 = t1436*t1215;
  t1601 = t1455*t1580*t1390;
  t1642 = t1446 + t1601;
  t1653 = t1580*t1215;
  t1654 = -1.*t1455*t1436*t1390;
  t1684 = t1653 + t1654;
  t1825 = Cos(var1[11]);
  t1828 = 0. + t1825;
  t1750 = Sin(var1[11]);
  t1332 = Sin(var1[9]);
  t1924 = -1.*t587*t737;
  t1934 = t1086*t900*t1198;
  t1945 = t1924 + t1934;
  t1949 = -1.*t1086*t587;
  t1953 = -1.*t737*t900*t1198;
  t1961 = t1949 + t1953;
  t1870 = 0. + t1750;
  t1969 = -1.*t1455*t1436*t1945;
  t1978 = t1580*t1961;
  t2009 = t1969 + t1978;
  t2029 = t1455*t1580*t1945;
  t2037 = t1436*t1961;
  t2041 = t2029 + t2037;
  t1760 = -1.*t1750;
  t1761 = 0. + t1760;
  t2118 = Cos(var1[4]);
  t2158 = -1.*t1455*t1086*t2118*t1436;
  t2174 = -1.*t1580*t2118*t737;
  t2178 = t2158 + t2174;
  t2183 = t1455*t1580*t1086*t2118;
  t2187 = -1.*t2118*t1436*t737;
  t2193 = t2183 + t2187;
  t2203 = t1870*t2178;
  t2208 = t1828*t2193;
  t2213 = t2203 + t2208;
  t2252 = t1086*t2118;
  t2254 = 0. + t2252;
  t2277 = t1455*t2118*t737;
  t2279 = -1.*t1332;
  t2283 = 0. + t2279;
  t2284 = -1.*t2283*t900;
  t2285 = 0. + t2277 + t2284;
  t2261 = t2254*t1436;
  t2291 = t1580*t2285;
  t2305 = 0. + t2261 + t2291;
  t2310 = t1761*t2305;
  t2315 = t1580*t2254;
  t2323 = -1.*t1436*t2285;
  t2324 = 0. + t2315 + t2323;
  t2329 = t1828*t2324;
  t2333 = 0. + t2310 + t2329;
  t2231 = t1828*t2178;
  t2234 = t1761*t2193;
  t2237 = t2231 + t2234;
  t2338 = Power(t2333,2);
  t2341 = t1828*t2305;
  t2343 = t1870*t2324;
  t2360 = 0. + t2341 + t2343;
  t2383 = Power(t2360,2);
  t2388 = t2338 + t2383;
  t2389 = 1/t2388;
  t2425 = 0. + t1455;
  t2471 = -1.*t2118*t1332*t737;
  t2473 = t2425*t900;
  t2481 = 0. + t2471 + t2473;
  t2484 = Power(t2481,2);
  t2485 = t2484 + t2338 + t2383;
  t2487 = 1/t2485;
  t2503 = t2425*t2118*t587;
  t2504 = t587*t737*t900;
  t2508 = -1.*t1086*t1198;
  t2511 = t2504 + t2508;
  t2513 = t1332*t2511;
  t2515 = 0. + t2503 + t2513;
  t2552 = t1086*t587;
  t2555 = t737*t900*t1198;
  t2563 = t2552 + t2555;
  t2543 = Power(t2515,2);
  t2550 = t2425*t2118*t1198;
  t2565 = t1332*t2563;
  t2566 = 0. + t2550 + t2565;
  t2567 = Power(t2566,2);
  t2584 = t2543 + t2567;
  t2587 = 1/t2584;
  t2630 = t1455*t2118*t587*t737;
  t2631 = -1.*t587*t2283*t900;
  t2633 = t2630 + t2631;
  t2627 = t1086*t2118*t587*t1436;
  t2638 = t1580*t2633;
  t2644 = t2627 + t2638;
  t2649 = t1580*t1086*t2118*t587;
  t2652 = -1.*t1436*t2633;
  t2653 = t2649 + t2652;
  t2741 = t1455*t2118*t737*t1198;
  t2745 = -1.*t2283*t900*t1198;
  t2752 = t2741 + t2745;
  t2740 = t1086*t2118*t1436*t1198;
  t2754 = t1580*t2752;
  t2779 = t2740 + t2754;
  t2784 = t1580*t1086*t2118*t1198;
  t2786 = -1.*t1436*t2752;
  t2787 = t2784 + t2786;
  t2861 = -1.*t2118*t2283;
  t2862 = -1.*t1455*t737*t900;
  t2865 = t2861 + t2862;
  t2860 = -1.*t1086*t1436*t900;
  t2867 = t1580*t2865;
  t2869 = t2860 + t2867;
  t2873 = -1.*t1580*t1086*t900;
  t2876 = -1.*t1436*t2865;
  t2877 = t2873 + t2876;
  t2397 = -1.*t1828*t2305;
  t2398 = -1.*t1870*t2324;
  t2403 = 0. + t2397 + t2398;
  t2883 = t1761*t2869;
  t2888 = t1828*t2877;
  t2894 = t2883 + t2888;
  t2906 = t1828*t2869;
  t2907 = t1870*t2877;
  t2917 = t2906 + t2907;
  t2491 = Sqrt(t2388);
  t2416 = t2118*t1332*t737;
  t2442 = -1.*t2425*t900;
  t2451 = 0. + t2416 + t2442;
  t2470 = 1/Sqrt(t2388);
  t2725 = t2118*t1332*t737*t1198;
  t2732 = -1.*t2425*t900*t1198;
  t2733 = t2725 + t2732;
  t2620 = t2118*t587*t1332*t737;
  t2621 = -1.*t2425*t587*t900;
  t2625 = t2620 + t2621;
  t2592 = -1.*t2425*t2118*t1198;
  t2596 = -1.*t1332*t2563;
  t2603 = 0. + t2592 + t2596;
  t2985 = t587*t737;
  t2990 = -1.*t1086*t900*t1198;
  t2997 = t2985 + t2990;
  t3018 = -1.*t2118*t2283*t1198;
  t3021 = t1455*t1961;
  t3026 = t3018 + t3021;
  t3015 = t1436*t2997;
  t3039 = t1580*t3026;
  t3040 = t3015 + t3039;
  t3053 = t1580*t2997;
  t3054 = -1.*t1436*t3026;
  t3055 = t3053 + t3054;
  t3092 = t2118*t587*t2283;
  t3102 = t1455*t2511;
  t3105 = t3092 + t3102;
  t3091 = t1436*t1390;
  t3106 = t1580*t3105;
  t3107 = t3091 + t3106;
  t3110 = t1580*t1390;
  t3111 = -1.*t1436*t3105;
  t3114 = t3110 + t3111;
  t3088 = t2503 + t2513;
  t3004 = t1332*t1961;
  t3009 = t2592 + t3004;
  t3167 = -1.*t1455*t2118*t587;
  t3175 = -1.*t1332*t2511;
  t3178 = t3167 + t3175;
  t3223 = -1.*t1455*t2118*t1198;
  t3224 = t3223 + t2596;
  t3273 = t1455*t900;
  t3278 = t2471 + t3273;
  t3309 = t1580*t1828*t3278;
  t3310 = -1.*t1436*t1870*t3278;
  t3311 = t3309 + t3310;
  t3302 = -1.*t1828*t1436*t3278;
  t3303 = t1580*t1761*t3278;
  t3306 = t3302 + t3303;
  t3217 = -1.*t2118*t1332*t1198;
  t3218 = t1455*t2563;
  t3220 = t3217 + t3218;
  t3163 = -1.*t2118*t587*t1332;
  t3164 = t3163 + t3102;
  t3368 = 0. + t1381 + t1389;
  t3375 = 0. + t3092 + t3102;
  t3370 = -1.*t1436*t3368;
  t3377 = -1.*t1580*t3375;
  t3378 = t3370 + t3377;
  t3382 = t1580*t3368;
  t3384 = -1.*t1436*t3375;
  t3385 = t3382 + t3384;
  t3419 = 0. + t1924 + t1934;
  t3427 = t2118*t2283*t1198;
  t3428 = 0. + t3427 + t3218;
  t3423 = -1.*t1436*t3419;
  t3430 = -1.*t1580*t3428;
  t3431 = t3423 + t3430;
  t3435 = t1580*t3419;
  t3439 = -1.*t1436*t3428;
  t3441 = t3435 + t3439;
  t3485 = -1.*t2254*t1436;
  t3501 = -1.*t1580*t2285;
  t3502 = t3485 + t3501;
  t3511 = t2315 + t2323;
  t3513 = t1870*t3502;
  t3519 = t1828*t3511;
  t3526 = t3513 + t3519;
  t3531 = t1828*t3502;
  t3536 = t1761*t3511;
  t3537 = t3531 + t3536;
  t3561 = t1436*t3368;
  t3563 = t1580*t3375;
  t3564 = 0. + t3561 + t3563;
  t3568 = 0. + t3382 + t3384;
  t3593 = t1436*t3419;
  t3595 = t1580*t3428;
  t3596 = 0. + t3593 + t3595;
  t3611 = 0. + t3435 + t3439;
  t3651 = -1.*t1750*t2305;
  t3652 = t1825*t2324;
  t3654 = t3651 + t3652;
  t3657 = -1.*t1825*t2305;
  t3659 = -1.*t1750*t2324;
  t3660 = t3657 + t3659;
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
  p_output1[30]=0.2429*t1215 + 0.035199999999999995*t1332*t1390 - 0.2083*t1642 - 0.1422*t1684 - 0.02*(t1642*t1761 + t1684*t1828) - 0.16*(t1642*t1828 + t1684*t1870);
  p_output1[31]=0.035199999999999995*t1332*t1945 + 0.2429*t1961 - 0.1422*t2009 - 0.2083*t2041 - 0.02*(t1828*t2009 + t1761*t2041) - 0.16*(t1870*t2009 + t1828*t2041);
  p_output1[32]=0.035199999999999995*t1086*t1332*t2118 - 0.1422*t2178 - 0.2083*t2193 - 0.16*t2213 - 0.02*t2237 - 0.2429*t2118*t737;
  p_output1[33]=t2213*t2333*t2389 + t2237*t2389*t2403;
  p_output1[34]=0.5*(2.*t2237*t2333 + 2.*t2213*t2360)*t2451*t2470*t2487 - 1.*t1086*t1332*t2118*t2487*t2491;
  p_output1[35]=t1332*t1945*t2515*t2587 + t1332*t1390*t2587*t2603;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0.035199999999999995*t2625 - 0.2083*t2644 - 0.1422*t2653 - 0.02*(t1761*t2644 + t1828*t2653) - 0.16*(t1828*t2644 + t1870*t2653) + 0.2429*t1086*t2118*t587 - 0.0817*t587*t900;
  p_output1[40]=0.2429*t1086*t1198*t2118 + 0.035199999999999995*t2733 - 0.2083*t2779 - 0.1422*t2787 - 0.02*(t1761*t2779 + t1828*t2787) - 0.16*(t1828*t2779 + t1870*t2787) - 0.0817*t1198*t900;
  p_output1[41]=-0.0817*t2118 - 0.2083*t2869 - 0.1422*t2877 - 0.02*t2894 - 0.16*t2917 - 0.2429*t1086*t900 + 0.035199999999999995*(-1.*t2118*t2425 - 1.*t1332*t737*t900);
  p_output1[42]=t2389*t2403*t2894 + t2333*t2389*t2917;
  p_output1[43]=0.5*t2451*t2470*t2487*(2.*t2333*t2894 + 2.*t2360*t2917) + t2487*t2491*(t2118*t2425 + t1332*t737*t900);
  p_output1[44]=t2587*t2603*t2625 + t2515*t2587*t2733;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.0817*t1198*t2118 + 0.2429*t2997 + 0.035199999999999995*t3009 - 0.2083*t3040 - 0.1422*t3055 - 0.02*(t1761*t3040 + t1828*t3055) - 0.16*(t1828*t3040 + t1870*t3055);
  p_output1[49]=0.2429*t1390 + 0.035199999999999995*t3088 - 0.2083*t3107 - 0.1422*t3114 - 0.02*(t1761*t3107 + t1828*t3114) - 0.16*(t1828*t3107 + t1870*t3114) + 0.0817*t2118*t587;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=t2587*t2603*t3009 + t2515*t2587*t3088;
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
  p_output1[84]=0.035199999999999995*t3164 + 0.1422*t1436*t3178 - 0.2083*t1580*t3178 - 0.02*(t1580*t1761*t3178 - 1.*t1436*t1828*t3178) - 0.16*(t1580*t1828*t3178 - 1.*t1436*t1870*t3178);
  p_output1[85]=0.035199999999999995*t3220 + 0.1422*t1436*t3224 - 0.2083*t1580*t3224 - 0.02*(t1580*t1761*t3224 - 1.*t1436*t1828*t3224) - 0.16*(t1580*t1828*t3224 - 1.*t1436*t1870*t3224);
  p_output1[86]=0.1422*t1436*t3278 - 0.2083*t1580*t3278 - 0.02*t3306 - 0.16*t3311 + 0.035199999999999995*(t2277 + t1332*t900);
  p_output1[87]=t2389*t2403*t3306 + t2333*t2389*t3311;
  p_output1[88]=0.5*t2451*t2470*t2487*(2.*t2333*t3306 + 2.*t2360*t3311) + t2487*t2491*(-1.*t1455*t2118*t737 - 1.*t1332*t900);
  p_output1[89]=t2587*t2603*t3164 + t2515*t2587*t3220;
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=0;
  p_output1[93]=-0.1422*t3378 - 0.2083*t3385 - 0.02*(t1828*t3378 + t1761*t3385) - 0.16*(t1870*t3378 + t1828*t3385);
  p_output1[94]=-0.1422*t3431 - 0.2083*t3441 - 0.02*(t1828*t3431 + t1761*t3441) - 0.16*(t1870*t3431 + t1828*t3441);
  p_output1[95]=-0.1422*t3502 - 0.2083*t3511 - 0.16*t3526 - 0.02*t3537;
  p_output1[96]=t2333*t2389*t3526 + t2389*t2403*t3537;
  p_output1[97]=0.5*t2451*t2470*t2487*(2.*t2360*t3526 + 2.*t2333*t3537);
  p_output1[98]=0;
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
  p_output1[102]=-0.02*(-1.*t1825*t3564 - 1.*t1750*t3568) - 0.16*(-1.*t1750*t3564 + t1825*t3568);
  p_output1[103]=-0.02*(-1.*t1825*t3596 - 1.*t1750*t3611) - 0.16*(-1.*t1750*t3596 + t1825*t3611);
  p_output1[104]=-0.16*t3654 - 0.02*t3660;
  p_output1[105]=t2333*t2389*t3654 + t2389*t2403*t3660;
  p_output1[106]=0.5*t2451*t2470*t2487*(2.*t2360*t3654 + 2.*t2333*t3660);
  p_output1[107]=0;
  p_output1[108]=0;
  p_output1[109]=0;
  p_output1[110]=0;
  p_output1[111]=0;
  p_output1[112]=0;
  p_output1[113]=0;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
  p_output1[120]=0;
  p_output1[121]=0;
  p_output1[122]=0;
  p_output1[123]=0;
  p_output1[124]=0;
  p_output1[125]=0;
  p_output1[126]=0;
  p_output1[127]=0;
  p_output1[128]=0;
  p_output1[129]=0;
  p_output1[130]=0;
  p_output1[131]=0;
  p_output1[132]=0;
  p_output1[133]=0;
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

#include "j_hc_1_func.hh"

namespace SymFunction
{

void j_hc_1_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
