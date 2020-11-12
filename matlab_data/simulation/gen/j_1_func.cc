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
  double t236;
  double t93;
  double t225;
  double t121;
  double t254;
  double t230;
  double t279;
  double t310;
  double t395;
  double t420;
  double t456;
  double t511;
  double t501;
  double t488;
  double t491;
  double t515;
  double t528;
  double t544;
  double t568;
  double t576;
  double t606;
  double t609;
  double t587;
  double t375;
  double t708;
  double t709;
  double t728;
  double t747;
  double t756;
  double t774;
  double t679;
  double t814;
  double t828;
  double t846;
  double t852;
  double t863;
  double t889;
  double t595;
  double t603;
  double t1009;
  double t1026;
  double t1043;
  double t1045;
  double t1060;
  double t1061;
  double t1098;
  double t1278;
  double t1277;
  double t1240;
  double t1262;
  double t1291;
  double t1302;
  double t1318;
  double t1322;
  double t1336;
  double t1375;
  double t1388;
  double t1338;
  double t1226;
  double t1451;
  double t1534;
  double t1535;
  double t1536;
  double t1562;
  double t1567;
  double t1573;
  double t1344;
  double t1347;
  double t1701;
  double t1717;
  double t1723;
  double t1728;
  double t1751;
  double t1759;
  double t1965;
  double t1977;
  double t1988;
  double t1997;
  double t1998;
  double t1960;
  double t1999;
  double t2005;
  double t2025;
  double t2032;
  double t2059;
  double t1906;
  double t2207;
  double t2218;
  double t2220;
  double t2206;
  double t2228;
  double t2234;
  double t2273;
  double t2291;
  double t2295;
  double t2377;
  double t2379;
  double t2381;
  double t2376;
  double t2383;
  double t2384;
  double t2397;
  double t2407;
  double t2418;
  double t2520;
  double t2530;
  double t2534;
  double t2539;
  double t2517;
  double t2566;
  double t2572;
  double t2577;
  double t2579;
  double t2586;
  double t2483;
  double t2669;
  double t2672;
  double t2673;
  double t2668;
  double t2674;
  double t2676;
  double t2682;
  double t2688;
  double t2689;
  double t2827;
  double t2841;
  double t2849;
  double t2817;
  double t2852;
  double t2856;
  double t2869;
  double t2875;
  double t2877;
  double t2925;
  double t2930;
  double t2938;
  double t3013;
  double t3017;
  double t3024;
  double t2978;
  double t3033;
  double t3037;
  double t3042;
  double t3043;
  double t3053;
  double t3161;
  double t3165;
  double t3200;
  double t3230;
  double t3234;
  double t3247;
  double t3220;
  double t3248;
  double t3252;
  double t3270;
  double t3272;
  double t3276;
  double t3354;
  double t3365;
  double t3373;
  double t3346;
  double t3375;
  double t3382;
  double t3410;
  double t3420;
  double t3422;
  double t3469;
  double t3471;
  double t3477;
  double t3466;
  double t3478;
  double t3484;
  double t3494;
  double t3497;
  double t3503;
  double t3556;
  double t3563;
  double t3571;
  double t3651;
  double t3652;
  double t3661;
  double t3701;
  double t3703;
  double t3704;
  double t3747;
  double t3749;
  double t3760;
  double t3814;
  double t3826;
  double t3820;
  double t3827;
  double t3831;
  double t3847;
  double t3848;
  double t3864;
  double t3679;
  double t3928;
  double t3960;
  double t3969;
  double t3932;
  double t3998;
  double t4012;
  double t4017;
  double t4019;
  double t4039;
  double t3770;
  double t4143;
  double t4144;
  double t4162;
  double t4174;
  double t4157;
  double t4177;
  double t4178;
  double t4188;
  double t4189;
  double t4202;
  double t4289;
  double t4304;
  double t4306;
  double t4348;
  double t4444;
  double t4452;
  double t4460;
  double t4494;
  double t4575;
  double t4577;
  double t4585;
  double t4594;
  double t3455;
  double t4652;
  double t4677;
  double t4751;
  double t4754;
  double t4769;
  double t4844;
  double t4852;
  double t4858;
  double t4959;
  double t4951;
  double t4960;
  double t4963;
  double t4972;
  double t4977;
  double t4978;
  double t5027;
  double t5035;
  double t5037;
  double t5022;
  double t5038;
  double t5040;
  double t5059;
  double t5069;
  double t5094;
  double t5172;
  double t5181;
  double t5183;
  double t5168;
  double t5199;
  double t5202;
  double t5227;
  double t5243;
  double t5252;
  double t5399;
  double t5418;
  double t5420;
  double t5430;
  double t5480;
  double t5490;
  double t5509;
  double t5515;
  double t5538;
  double t5546;
  double t5547;
  double t5563;
  t236 = Cos(var1[3]);
  t93 = Cos(var1[5]);
  t225 = Sin(var1[4]);
  t121 = Sin(var1[3]);
  t254 = Sin(var1[5]);
  t230 = -1.*t93*t121*t225;
  t279 = t236*t254;
  t310 = t230 + t279;
  t395 = t236*t93*t225;
  t420 = t121*t254;
  t456 = t395 + t420;
  t511 = Cos(var1[10]);
  t501 = Cos(var1[9]);
  t488 = Sin(var1[10]);
  t491 = t488*t310;
  t515 = t501*t511*t456;
  t528 = t491 + t515;
  t544 = t511*t310;
  t568 = -1.*t501*t488*t456;
  t576 = t544 + t568;
  t606 = Cos(var1[11]);
  t609 = 0. + t606;
  t587 = Sin(var1[11]);
  t375 = Sin(var1[9]);
  t708 = -1.*t93*t121;
  t709 = t236*t225*t254;
  t728 = t708 + t709;
  t747 = -1.*t236*t93;
  t756 = -1.*t121*t225*t254;
  t774 = t747 + t756;
  t679 = 0. + t587;
  t814 = -1.*t501*t488*t728;
  t828 = t511*t774;
  t846 = t814 + t828;
  t852 = t501*t511*t728;
  t863 = t488*t774;
  t889 = t852 + t863;
  t595 = -1.*t587;
  t603 = 0. + t595;
  t1009 = Cos(var1[4]);
  t1026 = -1.*t501*t236*t1009*t488;
  t1043 = -1.*t511*t1009*t121;
  t1045 = t1026 + t1043;
  t1060 = t501*t511*t236*t1009;
  t1061 = -1.*t1009*t488*t121;
  t1098 = t1060 + t1061;
  t1278 = Cos(var1[13]);
  t1277 = Cos(var1[12]);
  t1240 = Sin(var1[13]);
  t1262 = t1240*t310;
  t1291 = t1277*t1278*t456;
  t1302 = t1262 + t1291;
  t1318 = t1278*t310;
  t1322 = -1.*t1277*t1240*t456;
  t1336 = t1318 + t1322;
  t1375 = Cos(var1[14]);
  t1388 = 0. + t1375;
  t1338 = Sin(var1[14]);
  t1226 = Sin(var1[12]);
  t1451 = 0. + t1338;
  t1534 = -1.*t1277*t1240*t728;
  t1535 = t1278*t774;
  t1536 = t1534 + t1535;
  t1562 = t1277*t1278*t728;
  t1567 = t1240*t774;
  t1573 = t1562 + t1567;
  t1344 = -1.*t1338;
  t1347 = 0. + t1344;
  t1701 = -1.*t1277*t236*t1009*t1240;
  t1717 = -1.*t1278*t1009*t121;
  t1723 = t1701 + t1717;
  t1728 = t1277*t1278*t236*t1009;
  t1751 = -1.*t1009*t1240*t121;
  t1759 = t1728 + t1751;
  t1965 = t501*t1009*t93*t121;
  t1977 = -1.*t375;
  t1988 = 0. + t1977;
  t1997 = -1.*t93*t1988*t225;
  t1998 = t1965 + t1997;
  t1960 = t236*t1009*t93*t488;
  t1999 = t511*t1998;
  t2005 = t1960 + t1999;
  t2025 = t511*t236*t1009*t93;
  t2032 = -1.*t488*t1998;
  t2059 = t2025 + t2032;
  t1906 = 0. + t501;
  t2207 = t501*t1009*t121*t254;
  t2218 = -1.*t1988*t225*t254;
  t2220 = t2207 + t2218;
  t2206 = t236*t1009*t488*t254;
  t2228 = t511*t2220;
  t2234 = t2206 + t2228;
  t2273 = t511*t236*t1009*t254;
  t2291 = -1.*t488*t2220;
  t2295 = t2273 + t2291;
  t2377 = -1.*t1009*t1988;
  t2379 = -1.*t501*t121*t225;
  t2381 = t2377 + t2379;
  t2376 = -1.*t236*t488*t225;
  t2383 = t511*t2381;
  t2384 = t2376 + t2383;
  t2397 = -1.*t511*t236*t225;
  t2407 = -1.*t488*t2381;
  t2418 = t2397 + t2407;
  t2520 = t1277*t1009*t93*t121;
  t2530 = 0. + t1226;
  t2534 = -1.*t93*t2530*t225;
  t2539 = t2520 + t2534;
  t2517 = t236*t1009*t93*t1240;
  t2566 = t1278*t2539;
  t2572 = t2517 + t2566;
  t2577 = t1278*t236*t1009*t93;
  t2579 = -1.*t1240*t2539;
  t2586 = t2577 + t2579;
  t2483 = 0. + t1277;
  t2669 = t1277*t1009*t121*t254;
  t2672 = -1.*t2530*t225*t254;
  t2673 = t2669 + t2672;
  t2668 = t236*t1009*t1240*t254;
  t2674 = t1278*t2673;
  t2676 = t2668 + t2674;
  t2682 = t1278*t236*t1009*t254;
  t2688 = -1.*t1240*t2673;
  t2689 = t2682 + t2688;
  t2827 = -1.*t1009*t2530;
  t2841 = -1.*t1277*t121*t225;
  t2849 = t2827 + t2841;
  t2817 = -1.*t236*t1240*t225;
  t2852 = t1278*t2849;
  t2856 = t2817 + t2852;
  t2869 = -1.*t1278*t236*t225;
  t2875 = -1.*t1240*t2849;
  t2877 = t2869 + t2875;
  t2925 = t93*t121;
  t2930 = -1.*t236*t225*t254;
  t2938 = t2925 + t2930;
  t3013 = -1.*t1009*t1988*t254;
  t3017 = t501*t774;
  t3024 = t3013 + t3017;
  t2978 = t488*t2938;
  t3033 = t511*t3024;
  t3037 = t2978 + t3033;
  t3042 = t511*t2938;
  t3043 = -1.*t488*t3024;
  t3053 = t3042 + t3043;
  t3161 = t93*t121*t225;
  t3165 = -1.*t236*t254;
  t3200 = t3161 + t3165;
  t3230 = t1009*t93*t1988;
  t3234 = t501*t3200;
  t3247 = t3230 + t3234;
  t3220 = t488*t456;
  t3248 = t511*t3247;
  t3252 = t3220 + t3248;
  t3270 = t511*t456;
  t3272 = -1.*t488*t3247;
  t3276 = t3270 + t3272;
  t3354 = -1.*t1009*t2530*t254;
  t3365 = t1277*t774;
  t3373 = t3354 + t3365;
  t3346 = t1240*t2938;
  t3375 = t1278*t3373;
  t3382 = t3346 + t3375;
  t3410 = t1278*t2938;
  t3420 = -1.*t1240*t3373;
  t3422 = t3410 + t3420;
  t3469 = t1009*t93*t2530;
  t3471 = t1277*t3200;
  t3477 = t3469 + t3471;
  t3466 = t1240*t456;
  t3478 = t1278*t3477;
  t3484 = t3466 + t3478;
  t3494 = t1278*t456;
  t3497 = -1.*t1240*t3477;
  t3503 = t3494 + t3497;
  t3556 = -1.*t501*t1009*t93;
  t3563 = -1.*t375*t3200;
  t3571 = t3556 + t3563;
  t3651 = t236*t93;
  t3652 = t121*t225*t254;
  t3661 = t3651 + t3652;
  t3701 = -1.*t501*t1009*t254;
  t3703 = -1.*t375*t3661;
  t3704 = t3701 + t3703;
  t3747 = -1.*t1009*t375*t121;
  t3749 = t501*t225;
  t3760 = t3747 + t3749;
  t3814 = 0. + t395 + t420;
  t3826 = 0. + t3230 + t3234;
  t3820 = -1.*t488*t3814;
  t3827 = -1.*t511*t3826;
  t3831 = t3820 + t3827;
  t3847 = t511*t3814;
  t3848 = -1.*t488*t3826;
  t3864 = t3847 + t3848;
  t3679 = t501*t3661;
  t3928 = 0. + t708 + t709;
  t3960 = t1009*t1988*t254;
  t3969 = 0. + t3960 + t3679;
  t3932 = -1.*t488*t3928;
  t3998 = -1.*t511*t3969;
  t4012 = t3932 + t3998;
  t4017 = t511*t3928;
  t4019 = -1.*t488*t3969;
  t4039 = t4017 + t4019;
  t3770 = t501*t1009*t121;
  t4143 = t236*t1009;
  t4144 = 0. + t4143;
  t4162 = -1.*t1988*t225;
  t4174 = 0. + t3770 + t4162;
  t4157 = -1.*t4144*t488;
  t4177 = -1.*t511*t4174;
  t4178 = t4157 + t4177;
  t4188 = t511*t4144;
  t4189 = -1.*t488*t4174;
  t4202 = t4188 + t4189;
  t4289 = t488*t3814;
  t4304 = t511*t3826;
  t4306 = 0. + t4289 + t4304;
  t4348 = 0. + t3847 + t3848;
  t4444 = t488*t3928;
  t4452 = t511*t3969;
  t4460 = 0. + t4444 + t4452;
  t4494 = 0. + t4017 + t4019;
  t4575 = t4144*t488;
  t4577 = t511*t4174;
  t4585 = 0. + t4575 + t4577;
  t4594 = 0. + t4188 + t4189;
  t3455 = -1.*t1226*t3200;
  t4652 = t1277*t1009*t93;
  t4677 = t4652 + t3455;
  t4751 = t1277*t1009*t254;
  t4754 = -1.*t1226*t3661;
  t4769 = t4751 + t4754;
  t4844 = -1.*t1009*t1226*t121;
  t4852 = -1.*t1277*t225;
  t4858 = t4844 + t4852;
  t4959 = 0. + t3469 + t3471;
  t4951 = -1.*t1240*t3814;
  t4960 = -1.*t1278*t4959;
  t4963 = t4951 + t4960;
  t4972 = t1278*t3814;
  t4977 = -1.*t1240*t4959;
  t4978 = t4972 + t4977;
  t5027 = t1009*t2530*t254;
  t5035 = t1277*t3661;
  t5037 = 0. + t5027 + t5035;
  t5022 = -1.*t1240*t3928;
  t5038 = -1.*t1278*t5037;
  t5040 = t5022 + t5038;
  t5059 = t1278*t3928;
  t5069 = -1.*t1240*t5037;
  t5094 = t5059 + t5069;
  t5172 = t1277*t1009*t121;
  t5181 = -1.*t2530*t225;
  t5183 = 0. + t5172 + t5181;
  t5168 = -1.*t4144*t1240;
  t5199 = -1.*t1278*t5183;
  t5202 = t5168 + t5199;
  t5227 = t1278*t4144;
  t5243 = -1.*t1240*t5183;
  t5252 = t5227 + t5243;
  t5399 = t1240*t3814;
  t5418 = t1278*t4959;
  t5420 = 0. + t5399 + t5418;
  t5430 = 0. + t4972 + t4977;
  t5480 = t1240*t3928;
  t5490 = t1278*t5037;
  t5509 = 0. + t5480 + t5490;
  t5515 = 0. + t5059 + t5069;
  t5538 = t4144*t1240;
  t5546 = t1278*t5183;
  t5547 = 0. + t5538 + t5546;
  t5563 = 0. + t5227 + t5243;
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
  p_output1[18]=0.2429*t310 + 0.035199999999999995*t375*t456 - 0.2083*t528 - 0.1422*t576 - 0.02*(t528*t603 + t576*t609) - 0.16*(t528*t609 + t576*t679);
  p_output1[19]=0.035199999999999995*t375*t728 + 0.2429*t774 - 0.1422*t846 - 0.2083*t889 - 0.02*(t609*t846 + t603*t889) - 0.16*(t679*t846 + t609*t889);
  p_output1[20]=-0.1422*t1045 - 0.2083*t1098 - 0.2429*t1009*t121 + 0.035199999999999995*t1009*t236*t375 - 0.02*(t1098*t603 + t1045*t609) - 0.16*(t1098*t609 + t1045*t679);
  p_output1[21]=-0.2083*t1302 - 0.1422*t1336 - 0.02*(t1302*t1347 + t1336*t1388) - 0.16*(t1302*t1388 + t1336*t1451) - 0.1944*t310 + 0.0329*t1226*t456;
  p_output1[22]=-0.1422*t1536 - 0.2083*t1573 - 0.02*(t1388*t1536 + t1347*t1573) - 0.16*(t1451*t1536 + t1388*t1573) + 0.0329*t1226*t728 - 0.1944*t774;
  p_output1[23]=0.1944*t1009*t121 - 0.1422*t1723 - 0.2083*t1759 - 0.02*(t1388*t1723 + t1347*t1759) - 0.16*(t1451*t1723 + t1388*t1759) + 0.0329*t1009*t1226*t236;
  p_output1[24]=-0.2083*t2005 - 0.1422*t2059 - 0.02*(t2005*t603 + t2059*t609) - 0.16*(t2005*t609 + t2059*t679) - 0.0817*t225*t93 + 0.2429*t1009*t236*t93 + 0.035199999999999995*(-1.*t1906*t225*t93 + t1009*t121*t375*t93);
  p_output1[25]=-0.2083*t2234 - 0.1422*t2295 - 0.0817*t225*t254 + 0.2429*t1009*t236*t254 + 0.035199999999999995*(-1.*t1906*t225*t254 + t1009*t121*t254*t375) - 0.02*(t2234*t603 + t2295*t609) - 0.16*(t2234*t609 + t2295*t679);
  p_output1[26]=-0.0817*t1009 - 0.2429*t225*t236 - 0.2083*t2384 - 0.1422*t2418 + 0.035199999999999995*(-1.*t1009*t1906 - 1.*t121*t225*t375) - 0.02*(t2384*t603 + t2418*t609) - 0.16*(t2384*t609 + t2418*t679);
  p_output1[27]=-0.2083*t2572 - 0.1422*t2586 - 0.02*(t1347*t2572 + t1388*t2586) - 0.16*(t1388*t2572 + t1451*t2586) + 0.0817*t225*t93 - 0.1944*t1009*t236*t93 - 0.0329*(-1.*t1009*t121*t1226*t93 - 1.*t225*t2483*t93);
  p_output1[28]=0.0817*t225*t254 - 0.1944*t1009*t236*t254 - 0.0329*(-1.*t1009*t121*t1226*t254 - 1.*t225*t2483*t254) - 0.2083*t2676 - 0.1422*t2689 - 0.02*(t1347*t2676 + t1388*t2689) - 0.16*(t1388*t2676 + t1451*t2689);
  p_output1[29]=0.0817*t1009 + 0.1944*t225*t236 - 0.0329*(t121*t1226*t225 - 1.*t1009*t2483) - 0.2083*t2856 - 0.1422*t2877 - 0.02*(t1347*t2856 + t1388*t2877) - 0.16*(t1388*t2856 + t1451*t2877);
  p_output1[30]=-0.0817*t1009*t254 + 0.2429*t2938 - 0.2083*t3037 - 0.1422*t3053 - 0.02*(t3037*t603 + t3053*t609) - 0.16*(t3037*t609 + t3053*t679) + 0.035199999999999995*(-1.*t1009*t1906*t254 + t375*t774);
  p_output1[31]=-0.2083*t3252 - 0.1422*t3276 + 0.2429*t456 - 0.02*(t3252*t603 + t3276*t609) - 0.16*(t3252*t609 + t3276*t679) + 0.0817*t1009*t93 + 0.035199999999999995*(t3200*t375 + t1009*t1906*t93);
  p_output1[32]=0;
  p_output1[33]=0.0817*t1009*t254 - 0.1944*t2938 - 0.2083*t3382 - 0.1422*t3422 - 0.02*(t1347*t3382 + t1388*t3422) - 0.16*(t1388*t3382 + t1451*t3422) - 0.0329*(-1.*t1009*t2483*t254 - 1.*t1226*t774);
  p_output1[34]=-0.2083*t3484 - 0.1422*t3503 - 0.02*(t1347*t3484 + t1388*t3503) - 0.16*(t1388*t3484 + t1451*t3503) - 0.1944*t456 - 0.0817*t1009*t93 - 0.0329*(t3455 + t1009*t2483*t93);
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0.1422*t3571*t488 - 0.2083*t3571*t511 - 0.02*(t3571*t511*t603 - 1.*t3571*t488*t609) - 0.16*(t3571*t511*t609 - 1.*t3571*t488*t679) + 0.035199999999999995*(t3234 - 1.*t1009*t375*t93);
  p_output1[55]=0.035199999999999995*(t3679 - 1.*t1009*t254*t375) + 0.1422*t3704*t488 - 0.2083*t3704*t511 - 0.02*(t3704*t511*t603 - 1.*t3704*t488*t609) - 0.16*(t3704*t511*t609 - 1.*t3704*t488*t679);
  p_output1[56]=0.035199999999999995*(t225*t375 + t3770) + 0.1422*t3760*t488 - 0.2083*t3760*t511 - 0.02*(t3760*t511*t603 - 1.*t3760*t488*t609) - 0.16*(t3760*t511*t609 - 1.*t3760*t488*t679);
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=-0.1422*t3831 - 0.2083*t3864 - 0.02*(t3864*t603 + t3831*t609) - 0.16*(t3864*t609 + t3831*t679);
  p_output1[61]=-0.1422*t4012 - 0.2083*t4039 - 0.02*(t4039*t603 + t4012*t609) - 0.16*(t4039*t609 + t4012*t679);
  p_output1[62]=-0.1422*t4178 - 0.2083*t4202 - 0.02*(t4202*t603 + t4178*t609) - 0.16*(t4202*t609 + t4178*t679);
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=-0.02*(-1.*t4348*t587 - 1.*t4306*t606) - 0.16*(-1.*t4306*t587 + t4348*t606);
  p_output1[67]=-0.02*(-1.*t4494*t587 - 1.*t4460*t606) - 0.16*(-1.*t4460*t587 + t4494*t606);
  p_output1[68]=-0.02*(-1.*t4594*t587 - 1.*t4585*t606) - 0.16*(-1.*t4585*t587 + t4594*t606);
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0.1422*t1240*t4677 - 0.2083*t1278*t4677 - 0.02*(t1278*t1347*t4677 - 1.*t1240*t1388*t4677) - 0.16*(t1278*t1388*t4677 - 1.*t1240*t1451*t4677) - 0.0329*(-1.*t1277*t3200 - 1.*t1009*t1226*t93);
  p_output1[76]=-0.0329*(-1.*t1009*t1226*t254 - 1.*t1277*t3661) + 0.1422*t1240*t4769 - 0.2083*t1278*t4769 - 0.02*(t1278*t1347*t4769 - 1.*t1240*t1388*t4769) - 0.16*(t1278*t1388*t4769 - 1.*t1240*t1451*t4769);
  p_output1[77]=-0.0329*(-1.*t1009*t121*t1277 + t1226*t225) + 0.1422*t1240*t4858 - 0.2083*t1278*t4858 - 0.02*(t1278*t1347*t4858 - 1.*t1240*t1388*t4858) - 0.16*(t1278*t1388*t4858 - 1.*t1240*t1451*t4858);
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=-0.1422*t4963 - 0.2083*t4978 - 0.02*(t1388*t4963 + t1347*t4978) - 0.16*(t1451*t4963 + t1388*t4978);
  p_output1[82]=-0.1422*t5040 - 0.2083*t5094 - 0.02*(t1388*t5040 + t1347*t5094) - 0.16*(t1451*t5040 + t1388*t5094);
  p_output1[83]=-0.1422*t5202 - 0.2083*t5252 - 0.02*(t1388*t5202 + t1347*t5252) - 0.16*(t1451*t5202 + t1388*t5252);
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=-0.02*(-1.*t1375*t5420 - 1.*t1338*t5430) - 0.16*(-1.*t1338*t5420 + t1375*t5430);
  p_output1[88]=-0.02*(-1.*t1375*t5509 - 1.*t1338*t5515) - 0.16*(-1.*t1338*t5509 + t1375*t5515);
  p_output1[89]=-0.02*(-1.*t1375*t5547 - 1.*t1338*t5563) - 0.16*(-1.*t1338*t5547 + t1375*t5563);
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
