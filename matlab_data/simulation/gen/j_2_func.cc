/*
 * Automatically Generated from Mathematica.
 * Fri 10 May 2019 14:10:15 GMT-04:00
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
  double t279;
  double t89;
  double t200;
  double t168;
  double t310;
  double t372;
  double t395;
  double t420;
  double t206;
  double t328;
  double t360;
  double t484;
  double t477;
  double t515;
  double t542;
  double t544;
  double t560;
  double t491;
  double t523;
  double t524;
  double t579;
  double t605;
  double t618;
  double t464;
  double t709;
  double t742;
  double t761;
  double t801;
  double t815;
  double t828;
  double t842;
  double t846;
  double t847;
  double t863;
  double t889;
  double t890;
  double t641;
  double t663;
  double t680;
  double t981;
  double t991;
  double t1001;
  double t1015;
  double t1031;
  double t1033;
  double t1045;
  double t1202;
  double t1181;
  double t1162;
  double t1165;
  double t1207;
  double t1211;
  double t1221;
  double t1238;
  double t1250;
  double t1313;
  double t1318;
  double t1287;
  double t1132;
  double t1376;
  double t1494;
  double t1509;
  double t1515;
  double t1530;
  double t1531;
  double t1535;
  double t1291;
  double t1293;
  double t1642;
  double t1646;
  double t1651;
  double t1697;
  double t1710;
  double t1723;
  double t1876;
  double t1896;
  double t1922;
  double t1934;
  double t1965;
  double t1999;
  double t2005;
  double t1936;
  double t1944;
  double t1958;
  double t1857;
  double t2179;
  double t2194;
  double t2201;
  double t2234;
  double t2240;
  double t2262;
  double t2204;
  double t2206;
  double t2207;
  double t2371;
  double t2372;
  double t2373;
  double t2404;
  double t2418;
  double t2420;
  double t2383;
  double t2384;
  double t2387;
  double t2520;
  double t2566;
  double t2572;
  double t2574;
  double t2577;
  double t2517;
  double t2586;
  double t2595;
  double t2609;
  double t2610;
  double t2622;
  double t2481;
  double t2678;
  double t2682;
  double t2689;
  double t2676;
  double t2714;
  double t2718;
  double t2757;
  double t2761;
  double t2762;
  double t2883;
  double t2884;
  double t2887;
  double t2877;
  double t2890;
  double t2892;
  double t2907;
  double t2908;
  double t2913;
  double t3033;
  double t3037;
  double t3039;
  double t3099;
  double t3108;
  double t3116;
  double t3144;
  double t3149;
  double t3155;
  double t3119;
  double t3123;
  double t3124;
  double t3276;
  double t3278;
  double t3282;
  double t3287;
  double t3300;
  double t3312;
  double t3324;
  double t3329;
  double t3330;
  double t3315;
  double t3318;
  double t3320;
  double t3439;
  double t3440;
  double t3443;
  double t3438;
  double t3447;
  double t3448;
  double t3461;
  double t3464;
  double t3466;
  double t3548;
  double t3549;
  double t3553;
  double t3544;
  double t3555;
  double t3578;
  double t3584;
  double t3589;
  double t3599;
  double t3283;
  double t3709;
  double t3712;
  double t3764;
  double t3769;
  double t3770;
  double t3786;
  double t3791;
  double t3792;
  double t3874;
  double t3878;
  double t3880;
  double t4103;
  double t4091;
  double t4097;
  double t4105;
  double t4113;
  double t4143;
  double t4178;
  double t4186;
  double t4289;
  double t4269;
  double t4274;
  double t4280;
  double t4285;
  double t4294;
  double t4304;
  double t4353;
  double t4354;
  double t4365;
  double t4537;
  double t4541;
  double t4491;
  double t4497;
  double t4500;
  double t4511;
  double t4567;
  double t4569;
  double t4575;
  double t4577;
  double t4588;
  double t4652;
  double t4680;
  double t4687;
  double t4649;
  double t4733;
  double t4734;
  double t4740;
  double t4731;
  double t4811;
  double t4817;
  double t4832;
  double t4803;
  double t4901;
  double t4902;
  double t4913;
  double t5007;
  double t5009;
  double t5019;
  double t5105;
  double t5111;
  double t5113;
  double t5347;
  double t5333;
  double t5357;
  double t5363;
  double t5393;
  double t5397;
  double t5399;
  double t5001;
  double t5480;
  double t5490;
  double t5479;
  double t5513;
  double t5516;
  double t5520;
  double t5525;
  double t5526;
  double t5133;
  double t5588;
  double t5591;
  double t5579;
  double t5602;
  double t5604;
  double t5606;
  double t5610;
  double t5611;
  double t5662;
  double t5663;
  double t5664;
  double t5668;
  double t5696;
  double t5697;
  double t5698;
  double t5709;
  double t5739;
  double t5743;
  double t5746;
  double t5757;
  t279 = Cos(var1[3]);
  t89 = Cos(var1[5]);
  t200 = Sin(var1[4]);
  t168 = Sin(var1[3]);
  t310 = Sin(var1[5]);
  t372 = t279*t89*t200;
  t395 = t168*t310;
  t420 = t372 + t395;
  t206 = -1.*t89*t168*t200;
  t328 = t279*t310;
  t360 = t206 + t328;
  t484 = Cos(var1[7]);
  t477 = Cos(var1[6]);
  t515 = Sin(var1[7]);
  t542 = t484*t360;
  t544 = -1.*t477*t420*t515;
  t560 = t542 + t544;
  t491 = t477*t484*t420;
  t523 = t360*t515;
  t524 = t491 + t523;
  t579 = Cos(var1[8]);
  t605 = 0. + t579;
  t618 = Sin(var1[8]);
  t464 = Sin(var1[6]);
  t709 = -1.*t279*t89;
  t742 = -1.*t168*t200*t310;
  t761 = t709 + t742;
  t801 = -1.*t89*t168;
  t815 = t279*t200*t310;
  t828 = t801 + t815;
  t842 = t484*t761;
  t846 = -1.*t477*t828*t515;
  t847 = t842 + t846;
  t863 = t477*t484*t828;
  t889 = t761*t515;
  t890 = t863 + t889;
  t641 = -1.*t618;
  t663 = 0. + t641;
  t680 = 0. + t618;
  t981 = Cos(var1[4]);
  t991 = -1.*t981*t484*t168;
  t1001 = -1.*t279*t981*t477*t515;
  t1015 = t991 + t1001;
  t1031 = t279*t981*t477*t484;
  t1033 = -1.*t981*t168*t515;
  t1045 = t1031 + t1033;
  t1202 = Cos(var1[16]);
  t1181 = Cos(var1[15]);
  t1162 = Sin(var1[16]);
  t1165 = t1162*t360;
  t1207 = t1181*t1202*t420;
  t1211 = t1165 + t1207;
  t1221 = t1202*t360;
  t1238 = -1.*t1181*t1162*t420;
  t1250 = t1221 + t1238;
  t1313 = Cos(var1[17]);
  t1318 = 0. + t1313;
  t1287 = Sin(var1[17]);
  t1132 = Sin(var1[15]);
  t1376 = 0. + t1287;
  t1494 = -1.*t1181*t1162*t828;
  t1509 = t1202*t761;
  t1515 = t1494 + t1509;
  t1530 = t1181*t1202*t828;
  t1531 = t1162*t761;
  t1535 = t1530 + t1531;
  t1291 = -1.*t1287;
  t1293 = 0. + t1291;
  t1642 = -1.*t1181*t279*t981*t1162;
  t1646 = -1.*t1202*t981*t168;
  t1651 = t1642 + t1646;
  t1697 = t1181*t1202*t279*t981;
  t1710 = -1.*t981*t1162*t168;
  t1723 = t1697 + t1710;
  t1876 = t981*t89*t477*t168;
  t1896 = 0. + t464;
  t1922 = -1.*t89*t200*t1896;
  t1934 = t1876 + t1922;
  t1965 = t279*t981*t89*t484;
  t1999 = -1.*t1934*t515;
  t2005 = t1965 + t1999;
  t1936 = t484*t1934;
  t1944 = t279*t981*t89*t515;
  t1958 = t1936 + t1944;
  t1857 = 0. + t477;
  t2179 = t981*t477*t168*t310;
  t2194 = -1.*t200*t310*t1896;
  t2201 = t2179 + t2194;
  t2234 = t279*t981*t484*t310;
  t2240 = -1.*t2201*t515;
  t2262 = t2234 + t2240;
  t2204 = t484*t2201;
  t2206 = t279*t981*t310*t515;
  t2207 = t2204 + t2206;
  t2371 = -1.*t477*t168*t200;
  t2372 = -1.*t981*t1896;
  t2373 = t2371 + t2372;
  t2404 = -1.*t279*t484*t200;
  t2418 = -1.*t2373*t515;
  t2420 = t2404 + t2418;
  t2383 = t484*t2373;
  t2384 = -1.*t279*t200*t515;
  t2387 = t2383 + t2384;
  t2520 = t1181*t981*t89*t168;
  t2566 = -1.*t1132;
  t2572 = 0. + t2566;
  t2574 = -1.*t89*t2572*t200;
  t2577 = t2520 + t2574;
  t2517 = t279*t981*t89*t1162;
  t2586 = t1202*t2577;
  t2595 = t2517 + t2586;
  t2609 = t1202*t279*t981*t89;
  t2610 = -1.*t1162*t2577;
  t2622 = t2609 + t2610;
  t2481 = 0. + t1181;
  t2678 = t1181*t981*t168*t310;
  t2682 = -1.*t2572*t200*t310;
  t2689 = t2678 + t2682;
  t2676 = t279*t981*t1162*t310;
  t2714 = t1202*t2689;
  t2718 = t2676 + t2714;
  t2757 = t1202*t279*t981*t310;
  t2761 = -1.*t1162*t2689;
  t2762 = t2757 + t2761;
  t2883 = -1.*t981*t2572;
  t2884 = -1.*t1181*t168*t200;
  t2887 = t2883 + t2884;
  t2877 = -1.*t279*t1162*t200;
  t2890 = t1202*t2887;
  t2892 = t2877 + t2890;
  t2907 = -1.*t1202*t279*t200;
  t2908 = -1.*t1162*t2887;
  t2913 = t2907 + t2908;
  t3033 = t89*t168;
  t3037 = -1.*t279*t200*t310;
  t3039 = t3033 + t3037;
  t3099 = t477*t761;
  t3108 = -1.*t981*t310*t1896;
  t3116 = t3099 + t3108;
  t3144 = t484*t3039;
  t3149 = -1.*t3116*t515;
  t3155 = t3144 + t3149;
  t3119 = t484*t3116;
  t3123 = t3039*t515;
  t3124 = t3119 + t3123;
  t3276 = t89*t168*t200;
  t3278 = -1.*t279*t310;
  t3282 = t3276 + t3278;
  t3287 = t477*t3282;
  t3300 = t981*t89*t1896;
  t3312 = t3287 + t3300;
  t3324 = t484*t420;
  t3329 = -1.*t3312*t515;
  t3330 = t3324 + t3329;
  t3315 = t484*t3312;
  t3318 = t420*t515;
  t3320 = t3315 + t3318;
  t3439 = -1.*t981*t2572*t310;
  t3440 = t1181*t761;
  t3443 = t3439 + t3440;
  t3438 = t1162*t3039;
  t3447 = t1202*t3443;
  t3448 = t3438 + t3447;
  t3461 = t1202*t3039;
  t3464 = -1.*t1162*t3443;
  t3466 = t3461 + t3464;
  t3548 = t981*t89*t2572;
  t3549 = t1181*t3282;
  t3553 = t3548 + t3549;
  t3544 = t1162*t420;
  t3555 = t1202*t3553;
  t3578 = t3544 + t3555;
  t3584 = t1202*t420;
  t3589 = -1.*t1162*t3553;
  t3599 = t3584 + t3589;
  t3283 = -1.*t3282*t464;
  t3709 = t981*t89*t477;
  t3712 = t3709 + t3283;
  t3764 = t279*t89;
  t3769 = t168*t200*t310;
  t3770 = t3764 + t3769;
  t3786 = t981*t477*t310;
  t3791 = -1.*t3770*t464;
  t3792 = t3786 + t3791;
  t3874 = -1.*t477*t200;
  t3878 = -1.*t981*t168*t464;
  t3880 = t3874 + t3878;
  t4103 = 0. + t372 + t395;
  t4091 = 0. + t3287 + t3300;
  t4097 = -1.*t484*t4091;
  t4105 = -1.*t4103*t515;
  t4113 = t4097 + t4105;
  t4143 = t484*t4103;
  t4178 = -1.*t4091*t515;
  t4186 = t4143 + t4178;
  t4289 = 0. + t801 + t815;
  t4269 = t477*t3770;
  t4274 = t981*t310*t1896;
  t4280 = 0. + t4269 + t4274;
  t4285 = -1.*t484*t4280;
  t4294 = -1.*t4289*t515;
  t4304 = t4285 + t4294;
  t4353 = t484*t4289;
  t4354 = -1.*t4280*t515;
  t4365 = t4353 + t4354;
  t4537 = t279*t981;
  t4541 = 0. + t4537;
  t4491 = t981*t477*t168;
  t4497 = -1.*t200*t1896;
  t4500 = 0. + t4491 + t4497;
  t4511 = -1.*t484*t4500;
  t4567 = -1.*t4541*t515;
  t4569 = t4511 + t4567;
  t4575 = t4541*t484;
  t4577 = -1.*t4500*t515;
  t4588 = t4575 + t4577;
  t4652 = t484*t4091;
  t4680 = t4103*t515;
  t4687 = 0. + t4652 + t4680;
  t4649 = 0. + t4143 + t4178;
  t4733 = t484*t4280;
  t4734 = t4289*t515;
  t4740 = 0. + t4733 + t4734;
  t4731 = 0. + t4353 + t4354;
  t4811 = t484*t4500;
  t4817 = t4541*t515;
  t4832 = 0. + t4811 + t4817;
  t4803 = 0. + t4575 + t4577;
  t4901 = -1.*t1181*t981*t89;
  t4902 = -1.*t1132*t3282;
  t4913 = t4901 + t4902;
  t5007 = -1.*t1181*t981*t310;
  t5009 = -1.*t1132*t3770;
  t5019 = t5007 + t5009;
  t5105 = -1.*t981*t1132*t168;
  t5111 = t1181*t200;
  t5113 = t5105 + t5111;
  t5347 = 0. + t3548 + t3549;
  t5333 = -1.*t1162*t4103;
  t5357 = -1.*t1202*t5347;
  t5363 = t5333 + t5357;
  t5393 = t1202*t4103;
  t5397 = -1.*t1162*t5347;
  t5399 = t5393 + t5397;
  t5001 = t1181*t3770;
  t5480 = t981*t2572*t310;
  t5490 = 0. + t5480 + t5001;
  t5479 = -1.*t1162*t4289;
  t5513 = -1.*t1202*t5490;
  t5516 = t5479 + t5513;
  t5520 = t1202*t4289;
  t5525 = -1.*t1162*t5490;
  t5526 = t5520 + t5525;
  t5133 = t1181*t981*t168;
  t5588 = -1.*t2572*t200;
  t5591 = 0. + t5133 + t5588;
  t5579 = -1.*t4541*t1162;
  t5602 = -1.*t1202*t5591;
  t5604 = t5579 + t5602;
  t5606 = t1202*t4541;
  t5610 = -1.*t1162*t5591;
  t5611 = t5606 + t5610;
  t5662 = t1162*t4103;
  t5663 = t1202*t5347;
  t5664 = 0. + t5662 + t5663;
  t5668 = 0. + t5393 + t5397;
  t5696 = t1162*t4289;
  t5697 = t1202*t5490;
  t5698 = 0. + t5696 + t5697;
  t5709 = 0. + t5520 + t5525;
  t5739 = t4541*t1162;
  t5743 = t1202*t5591;
  t5746 = 0. + t5739 + t5743;
  t5757 = 0. + t5606 + t5610;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=1.;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=1.;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=1.;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=1.;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=1.;
  p_output1[18]=0.2429*t360 + 0.0329*t420*t464 - 0.2083*t524 - 0.1422*t560 - 0.02*(t560*t605 + t524*t663) - 0.16*(t524*t605 + t560*t680);
  p_output1[19]=0.2429*t761 + 0.0329*t464*t828 - 0.1422*t847 - 0.2083*t890 - 0.16*(t680*t847 + t605*t890) - 0.02*(t605*t847 + t663*t890);
  p_output1[20]=-0.1422*t1015 - 0.2083*t1045 - 0.02*(t1015*t605 + t1045*t663) - 0.16*(t1045*t605 + t1015*t680) - 0.2429*t168*t981 + 0.0329*t279*t464*t981;
  p_output1[21]=-0.2083*t1211 - 0.1422*t1250 - 0.02*(t1211*t1293 + t1250*t1318) - 0.16*(t1211*t1318 + t1250*t1376) - 0.1944*t360 + 0.0329*t1132*t420;
  p_output1[22]=-0.1422*t1515 - 0.2083*t1535 - 0.02*(t1318*t1515 + t1293*t1535) - 0.16*(t1376*t1515 + t1318*t1535) - 0.1944*t761 + 0.0329*t1132*t828;
  p_output1[23]=-0.1422*t1651 - 0.2083*t1723 - 0.02*(t1318*t1651 + t1293*t1723) - 0.16*(t1376*t1651 + t1318*t1723) + 0.1944*t168*t981 + 0.0329*t1132*t279*t981;
  p_output1[24]=-0.2083*t1958 - 0.1422*t2005 - 0.02*(t2005*t605 + t1958*t663) - 0.16*(t1958*t605 + t2005*t680) + 0.0817*t200*t89 + 0.2429*t279*t89*t981 - 0.0329*(-1.*t1857*t200*t89 - 1.*t168*t464*t89*t981);
  p_output1[25]=-0.2083*t2207 - 0.1422*t2262 + 0.0817*t200*t310 - 0.02*(t2262*t605 + t2207*t663) - 0.16*(t2207*t605 + t2262*t680) + 0.2429*t279*t310*t981 - 0.0329*(-1.*t1857*t200*t310 - 1.*t168*t310*t464*t981);
  p_output1[26]=-0.2083*t2387 - 0.1422*t2420 - 0.2429*t200*t279 - 0.02*(t2420*t605 + t2387*t663) - 0.16*(t2387*t605 + t2420*t680) + 0.0817*t981 - 0.0329*(t168*t200*t464 - 1.*t1857*t981);
  p_output1[27]=-0.2083*t2595 - 0.1422*t2622 - 0.02*(t1293*t2595 + t1318*t2622) - 0.16*(t1318*t2595 + t1376*t2622) - 0.0817*t200*t89 - 0.1944*t279*t89*t981 + 0.0329*(-1.*t200*t2481*t89 + t1132*t168*t89*t981);
  p_output1[28]=-0.2083*t2718 - 0.1422*t2762 - 0.02*(t1293*t2718 + t1318*t2762) - 0.16*(t1318*t2718 + t1376*t2762) - 0.0817*t200*t310 - 0.1944*t279*t310*t981 + 0.0329*(-1.*t200*t2481*t310 + t1132*t168*t310*t981);
  p_output1[29]=0.1944*t200*t279 - 0.2083*t2892 - 0.1422*t2913 - 0.02*(t1293*t2892 + t1318*t2913) - 0.16*(t1318*t2892 + t1376*t2913) - 0.0817*t981 + 0.0329*(-1.*t1132*t168*t200 - 1.*t2481*t981);
  p_output1[30]=0.2429*t3039 - 0.2083*t3124 - 0.1422*t3155 - 0.02*(t3155*t605 + t3124*t663) - 0.16*(t3124*t605 + t3155*t680) + 0.0817*t310*t981 - 0.0329*(-1.*t464*t761 - 1.*t1857*t310*t981);
  p_output1[31]=-0.2083*t3320 - 0.1422*t3330 + 0.2429*t420 - 0.02*(t3330*t605 + t3320*t663) - 0.16*(t3320*t605 + t3330*t680) - 0.0817*t89*t981 - 0.0329*(t3283 + t1857*t89*t981);
  p_output1[32]=0;
  p_output1[33]=-0.1944*t3039 - 0.2083*t3448 - 0.1422*t3466 - 0.02*(t1293*t3448 + t1318*t3466) - 0.16*(t1318*t3448 + t1376*t3466) - 0.0817*t310*t981 + 0.0329*(t1132*t761 - 1.*t2481*t310*t981);
  p_output1[34]=-0.2083*t3578 - 0.1422*t3599 - 0.02*(t1293*t3578 + t1318*t3599) - 0.16*(t1318*t3578 + t1376*t3599) - 0.1944*t420 + 0.0817*t89*t981 + 0.0329*(t1132*t3282 + t2481*t89*t981);
  p_output1[35]=0;
  p_output1[36]=-0.2083*t3712*t484 + 0.1422*t3712*t515 - 0.02*(-1.*t3712*t515*t605 + t3712*t484*t663) - 0.16*(t3712*t484*t605 - 1.*t3712*t515*t680) - 0.0329*(-1.*t3282*t477 - 1.*t464*t89*t981);
  p_output1[37]=-0.2083*t3792*t484 + 0.1422*t3792*t515 - 0.02*(-1.*t3792*t515*t605 + t3792*t484*t663) - 0.16*(t3792*t484*t605 - 1.*t3792*t515*t680) - 0.0329*(-1.*t3770*t477 - 1.*t310*t464*t981);
  p_output1[38]=-0.2083*t3880*t484 + 0.1422*t3880*t515 - 0.02*(-1.*t3880*t515*t605 + t3880*t484*t663) - 0.16*(t3880*t484*t605 - 1.*t3880*t515*t680) - 0.0329*(t200*t464 - 1.*t168*t477*t981);
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=-0.1422*t4113 - 0.2083*t4186 - 0.02*(t4113*t605 + t4186*t663) - 0.16*(t4186*t605 + t4113*t680);
  p_output1[43]=-0.1422*t4304 - 0.2083*t4365 - 0.02*(t4304*t605 + t4365*t663) - 0.16*(t4365*t605 + t4304*t680);
  p_output1[44]=-0.1422*t4569 - 0.2083*t4588 - 0.02*(t4569*t605 + t4588*t663) - 0.16*(t4588*t605 + t4569*t680);
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.02*(-1.*t4687*t579 - 1.*t4649*t618) - 0.16*(t4649*t579 - 1.*t4687*t618);
  p_output1[49]=-0.02*(-1.*t4740*t579 - 1.*t4731*t618) - 0.16*(t4731*t579 - 1.*t4740*t618);
  p_output1[50]=-0.02*(-1.*t4832*t579 - 1.*t4803*t618) - 0.16*(t4803*t579 - 1.*t4832*t618);
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
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
  p_output1[93]=0.1422*t1162*t4913 - 0.2083*t1202*t4913 - 0.02*(t1202*t1293*t4913 - 1.*t1162*t1318*t4913) - 0.16*(t1202*t1318*t4913 - 1.*t1162*t1376*t4913) + 0.0329*(t3549 - 1.*t1132*t89*t981);
  p_output1[94]=0.1422*t1162*t5019 - 0.2083*t1202*t5019 - 0.02*(t1202*t1293*t5019 - 1.*t1162*t1318*t5019) - 0.16*(t1202*t1318*t5019 - 1.*t1162*t1376*t5019) + 0.0329*(t5001 - 1.*t1132*t310*t981);
  p_output1[95]=0.1422*t1162*t5113 - 0.2083*t1202*t5113 - 0.02*(t1202*t1293*t5113 - 1.*t1162*t1318*t5113) - 0.16*(t1202*t1318*t5113 - 1.*t1162*t1376*t5113) + 0.0329*(t1132*t200 + t5133);
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=-0.1422*t5363 - 0.2083*t5399 - 0.02*(t1318*t5363 + t1293*t5399) - 0.16*(t1376*t5363 + t1318*t5399);
  p_output1[100]=-0.1422*t5516 - 0.2083*t5526 - 0.02*(t1318*t5516 + t1293*t5526) - 0.16*(t1376*t5516 + t1318*t5526);
  p_output1[101]=-0.1422*t5604 - 0.2083*t5611 - 0.02*(t1318*t5604 + t1293*t5611) - 0.16*(t1376*t5604 + t1318*t5611);
  p_output1[102]=0;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=-0.02*(-1.*t1313*t5664 - 1.*t1287*t5668) - 0.16*(-1.*t1287*t5664 + t1313*t5668);
  p_output1[106]=-0.02*(-1.*t1313*t5698 - 1.*t1287*t5709) - 0.16*(-1.*t1287*t5698 + t1313*t5709);
  p_output1[107]=-0.02*(-1.*t1313*t5746 - 1.*t1287*t5757) - 0.16*(-1.*t1287*t5746 + t1313*t5757);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "j_2_func.hh"

namespace SymFunction
{

void j_2_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
