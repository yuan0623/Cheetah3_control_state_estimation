/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 13:00:57 GMT-05:00
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
  double t52;
  double t87;
  double t120;
  double t324;
  double t211;
  double t390;
  double t196;
  double t253;
  double t261;
  double t277;
  double t414;
  double t415;
  double t447;
  double t473;
  double t485;
  double t752;
  double t818;
  double t524;
  double t580;
  double t875;
  double t1033;
  double t1053;
  double t1143;
  double t1064;
  double t1241;
  double t1271;
  double t427;
  double t1785;
  double t1820;
  double t1854;
  double t1879;
  double t1886;
  double t1892;
  double t1994;
  double t2090;
  double t2098;
  double t2114;
  double t2132;
  double t2136;
  double t2137;
  double t827;
  double t878;
  double t884;
  double t932;
  double t936;
  double t955;
  double t958;
  double t964;
  double t2374;
  double t2380;
  double t2384;
  double t2386;
  double t2387;
  double t2388;
  double t2389;
  double t2391;
  double t2408;
  double t2462;
  double t2469;
  double t2501;
  double t2586;
  double t2593;
  double t2608;
  double t2616;
  double t2634;
  double t2423;
  double t2885;
  double t2888;
  double t2894;
  double t2940;
  double t2941;
  double t2950;
  double t2916;
  double t2951;
  double t2956;
  double t1295;
  double t1326;
  double t1329;
  double t1341;
  double t1353;
  double t1357;
  double t2675;
  double t3131;
  double t3143;
  double t2414;
  double t2429;
  double t3238;
  double t3249;
  double t3266;
  double t3275;
  double t3280;
  double t3344;
  double t3349;
  double t2999;
  double t3423;
  double t3427;
  double t135;
  double t420;
  double t445;
  double t457;
  double t469;
  double t492;
  double t592;
  double t597;
  double t613;
  double t615;
  double t3164;
  double t3180;
  double t3181;
  double t3636;
  double t3638;
  double t3672;
  double t3629;
  double t3687;
  double t3692;
  double t2674;
  double t2681;
  double t2702;
  double t2722;
  double t2724;
  double t2726;
  double t2728;
  double t2764;
  double t3764;
  double t3789;
  double t3790;
  double t3759;
  double t3791;
  double t3805;
  double t2028;
  double t2029;
  double t2035;
  double t2037;
  double t2083;
  double t2087;
  double t2202;
  double t2220;
  double t2221;
  double t2226;
  double t2243;
  double t2254;
  double t2262;
  double t2274;
  double t2303;
  double t2982;
  double t3034;
  double t3039;
  double t3057;
  double t3059;
  double t3082;
  double t3088;
  double t3093;
  double t3119;
  double t3422;
  double t3457;
  double t3484;
  double t3507;
  double t3534;
  double t3535;
  double t3550;
  double t3555;
  double t3563;
  double t3758;
  double t3811;
  double t3812;
  double t3819;
  double t3820;
  double t3823;
  double t3832;
  double t3837;
  double t3841;
  double t3842;
  double t3845;
  double t1631;
  double t3624;
  double t3697;
  double t3700;
  double t3706;
  double t3711;
  double t3875;
  double t3884;
  double t1898;
  double t1371;
  double t1395;
  double t1475;
  double t1494;
  double t1513;
  double t1538;
  double t1539;
  double t1541;
  double t1549;
  double t3259;
  double t3281;
  double t3288;
  double t3324;
  double t3354;
  double t3373;
  double t3380;
  double t3730;
  double t3738;
  double t3741;
  double t3752;
  double t3753;
  double t2774;
  double t2775;
  double t2793;
  double t2798;
  double t2807;
  double t3919;
  double t3922;
  double t3925;
  double t3926;
  double t3929;
  double t3936;
  double t3939;
  double t3941;
  double t3947;
  double t4091;
  double t4100;
  double t4103;
  double t4164;
  double t4179;
  double t4195;
  double t4236;
  double t4237;
  double t4238;
  double t4247;
  double t4480;
  double t4483;
  double t4595;
  double t4596;
  double t4607;
  double t4245;
  double t4248;
  double t4452;
  double t4689;
  double t4691;
  double t4745;
  double t4809;
  double t4810;
  double t4825;
  double t4827;
  double t4843;
  double t4852;
  double t4853;
  double t4136;
  double t4909;
  double t4696;
  double t4701;
  double t4708;
  double t4473;
  double t4475;
  double t4486;
  double t4487;
  double t4488;
  double t4516;
  double t4519;
  double t4521;
  double t5042;
  double t4087;
  double t4130;
  double t4134;
  double t4143;
  double t4144;
  double t4145;
  double t4152;
  double t4156;
  double t4158;
  double t4162;
  double t4911;
  double t4914;
  double t4915;
  double t4916;
  double t4936;
  double t4939;
  double t4941;
  double t4942;
  double t4587;
  double t4611;
  double t4614;
  double t4620;
  double t4633;
  double t4638;
  double t4651;
  double t4652;
  double t4677;
  double t5214;
  double t5217;
  double t5219;
  double t5223;
  double t5228;
  double t5073;
  double t5080;
  double t5088;
  double t5093;
  double t5094;
  double t5095;
  double t5097;
  double t5101;
  double t5102;
  double t5107;
  double t5111;
  double t5113;
  double t4741;
  double t4751;
  double t4753;
  double t4776;
  double t4779;
  double t4780;
  double t4784;
  double t4789;
  double t4795;
  double t4280;
  double t4292;
  double t4295;
  double t4313;
  double t4323;
  double t4325;
  double t4326;
  double t4331;
  double t4335;
  double t4336;
  double t4340;
  double t4958;
  double t4961;
  double t4966;
  double t4972;
  double t4975;
  double t4978;
  double t4982;
  double t4986;
  double t4989;
  double t5204;
  double t4378;
  double t4383;
  double t4393;
  double t4396;
  double t4414;
  double t5134;
  double t5138;
  double t5151;
  double t5154;
  double t5155;
  double t5163;
  double t5166;
  double t5183;
  double t4344;
  double t4347;
  double t4353;
  double t4358;
  double t4362;
  double t5006;
  double t5010;
  double t5011;
  double t5012;
  double t5013;
  double t4822;
  double t4847;
  double t4848;
  double t4849;
  double t4857;
  double t4860;
  double t4861;
  double t5334;
  double t5335;
  double t5357;
  double t5381;
  double t5382;
  double t5392;
  double t5404;
  double t5407;
  double t5554;
  double t5556;
  double t5563;
  double t5574;
  double t5624;
  double t5626;
  double t5628;
  double t5613;
  double t5674;
  double t5706;
  double t5768;
  double t5805;
  double t5808;
  double t5666;
  double t5877;
  double t5668;
  double t5710;
  double t5712;
  double t5725;
  double t5742;
  double t5745;
  double t5755;
  double t5761;
  double t5830;
  double t5912;
  double t5913;
  double t5571;
  double t5584;
  double t5876;
  double t5883;
  double t5953;
  double t5955;
  double t5956;
  double t5961;
  double t5964;
  double t5958;
  double t5965;
  double t5916;
  double t5999;
  double t6000;
  double t5604;
  double t5614;
  double t5619;
  double t5622;
  double t6020;
  double t6021;
  double t6023;
  double t5762;
  double t5828;
  double t5829;
  double t5847;
  double t5849;
  double t5854;
  double t5855;
  double t5859;
  double t5861;
  double t5864;
  double t5914;
  double t5924;
  double t5933;
  double t5934;
  double t5935;
  double t5937;
  double t5938;
  double t5940;
  double t5998;
  double t6002;
  double t6005;
  double t6006;
  double t6007;
  double t6008;
  double t6010;
  double t6011;
  double t6012;
  double t5589;
  double t5594;
  double t5598;
  double t5599;
  double t5602;
  double t5891;
  double t5897;
  double t5898;
  double t5899;
  double t5900;
  double t5969;
  double t5970;
  double t5976;
  double t5967;
  double t5968;
  double t5977;
  double t5980;
  double t6055;
  double t6056;
  double t6067;
  double t6069;
  double t6072;
  double t6078;
  double t6081;
  double t6082;
  double t6090;
  t52 = Cos(var1[3]);
  t87 = Cos(var1[4]);
  t120 = Cos(var1[5]);
  t324 = Cos(var1[15]);
  t211 = Sin(var1[15]);
  t390 = Sin(var1[3]);
  t196 = Cos(var1[16]);
  t253 = -1.*t211;
  t261 = 0. + t253;
  t277 = t52*t87*t120*t261;
  t414 = -1.*t324*t87*t120*t390;
  t415 = t277 + t414;
  t447 = -1.*t87*t120*t211*t390;
  t473 = Cos(var1[17]);
  t485 = 0. + t473;
  t752 = -1.*t52*t87*t120*t211;
  t818 = t752 + t414;
  t524 = Sin(var1[16]);
  t580 = Sin(var1[17]);
  t875 = t324*t52*t87*t120;
  t1033 = t87*t120*t261*t390;
  t1053 = t875 + t1033;
  t1143 = Sin(var1[4]);
  t1064 = -1.*t524*t1053;
  t1241 = -1.*t196*t120*t1143;
  t1271 = t1064 + t1241;
  t427 = 0. + t324;
  t1785 = -1.*t87*t120*t524;
  t1820 = -1.*t324*t52*t120*t1143;
  t1854 = -1.*t120*t261*t390*t1143;
  t1879 = t1820 + t1854;
  t1886 = t196*t1879;
  t1892 = t1785 + t1886;
  t1994 = Sin(var1[5]);
  t2090 = t524*t1143*t1994;
  t2098 = -1.*t324*t52*t87*t1994;
  t2114 = -1.*t87*t261*t390*t1994;
  t2132 = t2098 + t2114;
  t2136 = t196*t2132;
  t2137 = t2090 + t2136;
  t827 = -0.25*t196*t818;
  t878 = t875 + t447;
  t884 = 0.037*t878;
  t932 = t196*t485*t818;
  t936 = -1.*t524*t580*t818;
  t955 = t932 + t936;
  t958 = -0.27*t955;
  t964 = t827 + t884 + t958;
  t2374 = t120*t390*t1143;
  t2380 = -1.*t52*t1994;
  t2384 = t2374 + t2380;
  t2386 = -1.*t324*t2384;
  t2387 = t52*t120*t1143;
  t2388 = t390*t1994;
  t2389 = t2387 + t2388;
  t2391 = -1.*t211*t2389;
  t2408 = t2386 + t2391;
  t2462 = t211*t2384;
  t2469 = -1.*t324*t2389;
  t2501 = t2462 + t2469;
  t2586 = -1.*t120*t390*t1143;
  t2593 = t52*t1994;
  t2608 = t2586 + t2593;
  t2616 = -1.*t211*t2608;
  t2634 = t2616 + t2469;
  t2423 = -1.*t196*t580*t2408;
  t2885 = t120*t390;
  t2888 = -1.*t52*t1143*t1994;
  t2894 = t2885 + t2888;
  t2940 = -1.*t52*t120;
  t2941 = -1.*t390*t1143*t1994;
  t2950 = t2940 + t2941;
  t2916 = -1.*t211*t2894;
  t2951 = -1.*t324*t2950;
  t2956 = t2916 + t2951;
  t1295 = t473*t1271;
  t1326 = t196*t1053;
  t1329 = -1.*t120*t524*t1143;
  t1341 = t1326 + t1329;
  t1353 = -1.*t580*t1341;
  t1357 = t1295 + t1353;
  t2675 = t324*t2608;
  t3131 = t261*t2389;
  t3143 = t2675 + t3131;
  t2414 = -1.*t473*t524*t2408;
  t2429 = t2414 + t2423;
  t3238 = t87*t120;
  t3249 = 0. + t3238;
  t3266 = t261*t2384;
  t3275 = t324*t2389;
  t3280 = 0. + t3266 + t3275;
  t3344 = t196*t3249;
  t3349 = -1.*t524*t3280;
  t2999 = t324*t2894;
  t3423 = t261*t2950;
  t3427 = t2999 + t3423;
  t135 = 0.0875*t52*t87*t120;
  t420 = -0.25*t196*t415;
  t445 = t427*t52*t87*t120;
  t457 = t445 + t447;
  t469 = 0.037*t457;
  t492 = t196*t485*t415;
  t592 = -1.*t524*t580*t415;
  t597 = t492 + t592;
  t613 = -0.27*t597;
  t615 = t135 + t420 + t469 + t613;
  t3164 = -1.*t473*t524*t3143;
  t3180 = -1.*t196*t580*t3143;
  t3181 = t3164 + t3180;
  t3636 = -1.*t52*t120*t1143;
  t3638 = -1.*t390*t1994;
  t3672 = t3636 + t3638;
  t3629 = t261*t2608;
  t3687 = t324*t3672;
  t3692 = t3629 + t3687;
  t2674 = -0.25*t196*t2634;
  t2681 = t2675 + t2391;
  t2702 = 0.037*t2681;
  t2722 = t196*t485*t2634;
  t2724 = -1.*t524*t580*t2634;
  t2726 = t2722 + t2724;
  t2728 = -0.27*t2726;
  t2764 = t2674 + t2702 + t2728;
  t3764 = t52*t120;
  t3789 = t390*t1143*t1994;
  t3790 = t3764 + t3789;
  t3759 = t261*t2894;
  t3791 = t324*t3790;
  t3805 = t3759 + t3791;
  t2028 = -0.0875*t87*t390*t1994;
  t2029 = -0.21935*t1143*t1994;
  t2035 = -1.*t52*t87*t211*t1994;
  t2037 = -1.*t427*t87*t390*t1994;
  t2083 = t2035 + t2037;
  t2087 = 0.037*t2083;
  t2202 = -0.25*t2137;
  t2220 = t485*t2137;
  t2221 = t196*t1143*t1994;
  t2226 = -1.*t524*t2132;
  t2243 = t2221 + t2226;
  t2254 = t580*t2243;
  t2262 = t2220 + t2254;
  t2274 = -0.27*t2262;
  t2303 = t2028 + t2029 + t2087 + t2202 + t2274;
  t2982 = -0.25*t196*t2956;
  t3034 = -1.*t211*t2950;
  t3039 = t2999 + t3034;
  t3057 = 0.037*t3039;
  t3059 = t196*t485*t2956;
  t3082 = -1.*t524*t580*t2956;
  t3088 = t3059 + t3082;
  t3093 = -0.27*t3088;
  t3119 = t2982 + t3057 + t3093;
  t3422 = -1.*t87*t524*t1994;
  t3457 = t196*t3427;
  t3484 = t3422 + t3457;
  t3507 = -1.*t580*t3484;
  t3534 = -1.*t196*t87*t1994;
  t3535 = -1.*t524*t3427;
  t3550 = t3534 + t3535;
  t3555 = t473*t3550;
  t3563 = t3507 + t3555;
  t3758 = 0.0875*t2894;
  t3811 = -0.25*t196*t3805;
  t3812 = t427*t2894;
  t3819 = t211*t3790;
  t3820 = t3812 + t3819;
  t3823 = 0.037*t3820;
  t3832 = t196*t485*t3805;
  t3837 = -1.*t524*t580*t3805;
  t3841 = t3832 + t3837;
  t3842 = -0.27*t3841;
  t3845 = t3758 + t3811 + t3823 + t3842;
  t1631 = 0.21935*t87*t120;
  t3624 = 0.0875*t2608;
  t3697 = t427*t2608;
  t3700 = t211*t3672;
  t3706 = t3697 + t3700;
  t3711 = 0.037*t3706;
  t3875 = t196*t3692;
  t3884 = t1785 + t3875;
  t1898 = -1.*t196*t87*t120;
  t1371 = -0.25*t1271;
  t1395 = t485*t1271;
  t1475 = -1.*t196*t1053;
  t1494 = t120*t524*t1143;
  t1513 = t1475 + t1494;
  t1538 = t580*t1513;
  t1539 = t1395 + t1538;
  t1541 = -0.27*t1539;
  t1549 = t1371 + t1541;
  t3259 = -1.*t3249*t524;
  t3281 = -1.*t196*t3280;
  t3288 = t3259 + t3281;
  t3324 = t473*t3288;
  t3354 = t3344 + t3349;
  t3373 = -1.*t580*t3354;
  t3380 = t3324 + t3373;
  t3730 = 0.25*t524*t3143;
  t3738 = -1.*t485*t524*t3143;
  t3741 = t3738 + t3180;
  t3752 = -0.27*t3741;
  t3753 = t3730 + t3752;
  t2774 = 0.25*t524*t2408;
  t2775 = -1.*t485*t524*t2408;
  t2793 = t2775 + t2423;
  t2798 = -0.27*t2793;
  t2807 = t2774 + t2798;
  t3919 = -0.25*t3550;
  t3922 = t87*t524*t1994;
  t3925 = -1.*t196*t3427;
  t3926 = t3922 + t3925;
  t3929 = t580*t3926;
  t3936 = t485*t3550;
  t3939 = t3929 + t3936;
  t3941 = -0.27*t3939;
  t3947 = t3919 + t3941;
  t4091 = t52*t87*t261*t1994;
  t4100 = -1.*t324*t87*t390*t1994;
  t4103 = t4091 + t4100;
  t4164 = -1.*t120*t390;
  t4179 = t52*t1143*t1994;
  t4195 = t4164 + t4179;
  t4236 = t261*t4195;
  t4237 = t324*t2950;
  t4238 = t4236 + t4237;
  t4247 = -1.*t196*t580*t4238;
  t4480 = -1.*t324*t4195;
  t4483 = t4480 + t3034;
  t4595 = t324*t52*t87*t1994;
  t4596 = t87*t261*t390*t1994;
  t4607 = t4595 + t4596;
  t4245 = -1.*t473*t524*t4238;
  t4248 = t4245 + t4247;
  t4452 = -1.*t211*t4195;
  t4689 = -1.*t324*t3790;
  t4691 = t4452 + t4689;
  t4745 = t3266 + t3275;
  t4809 = t87*t1994;
  t4810 = 0. + t4809;
  t4825 = t324*t4195;
  t4827 = t261*t3790;
  t4843 = 0. + t4825 + t4827;
  t4852 = t196*t4810;
  t4853 = -1.*t524*t4843;
  t4136 = -1.*t87*t211*t390*t1994;
  t4909 = t2035 + t4100;
  t4696 = -1.*t473*t524*t4691;
  t4701 = -1.*t196*t580*t4691;
  t4708 = t4696 + t4701;
  t4473 = t4452 + t4237;
  t4475 = 0.037*t4473;
  t4486 = -0.25*t196*t4483;
  t4487 = t196*t485*t4483;
  t4488 = -1.*t524*t580*t4483;
  t4516 = t4487 + t4488;
  t4519 = -0.27*t4516;
  t4521 = t4475 + t4486 + t4519;
  t5042 = t4480 + t3819;
  t4087 = 0.0875*t52*t87*t1994;
  t4130 = -0.25*t196*t4103;
  t4134 = t427*t52*t87*t1994;
  t4143 = t4134 + t4136;
  t4144 = 0.037*t4143;
  t4145 = t196*t485*t4103;
  t4152 = -1.*t524*t580*t4103;
  t4156 = t4145 + t4152;
  t4158 = -0.27*t4156;
  t4162 = t4087 + t4130 + t4144 + t4158;
  t4911 = -0.25*t196*t4909;
  t4914 = t4595 + t4136;
  t4915 = 0.037*t4914;
  t4916 = t196*t485*t4909;
  t4936 = -1.*t524*t580*t4909;
  t4939 = t4916 + t4936;
  t4941 = -0.27*t4939;
  t4942 = t4911 + t4915 + t4941;
  t4587 = -1.*t524*t1143*t1994;
  t4611 = t196*t4607;
  t4614 = t4587 + t4611;
  t4620 = -1.*t580*t4614;
  t4633 = -1.*t196*t1143*t1994;
  t4638 = -1.*t524*t4607;
  t4651 = t4633 + t4638;
  t4652 = t473*t4651;
  t4677 = t4620 + t4652;
  t5214 = -1.*t324*t52*t1143*t1994;
  t5217 = -1.*t261*t390*t1143*t1994;
  t5219 = t5214 + t5217;
  t5223 = t196*t5219;
  t5228 = t3422 + t5223;
  t5073 = 0.0875*t87*t120*t390;
  t5080 = t52*t87*t120*t211;
  t5088 = t427*t87*t120*t390;
  t5093 = t5080 + t5088;
  t5094 = 0.037*t5093;
  t5095 = 0.21935*t120*t1143;
  t5097 = -0.25*t1341;
  t5101 = t580*t1271;
  t5102 = t485*t1341;
  t5107 = t5101 + t5102;
  t5111 = -0.27*t5107;
  t5113 = t5073 + t5094 + t5095 + t5097 + t5111;
  t4741 = t87*t120*t524;
  t4751 = t196*t4745;
  t4753 = t4741 + t4751;
  t4776 = -1.*t580*t4753;
  t4779 = t196*t87*t120;
  t4780 = -1.*t524*t4745;
  t4784 = t4779 + t4780;
  t4789 = t473*t4784;
  t4795 = t4776 + t4789;
  t4280 = 0.0875*t2389;
  t4292 = t211*t2608;
  t4295 = t427*t2389;
  t4313 = t4292 + t4295;
  t4323 = 0.037*t4313;
  t4325 = -0.25*t196*t3143;
  t4326 = t196*t485*t3143;
  t4331 = -1.*t524*t580*t3143;
  t4335 = t4326 + t4331;
  t4336 = -0.27*t4335;
  t4340 = t4280 + t4323 + t4325 + t4336;
  t4958 = -1.*t211*t2384;
  t4961 = t4958 + t3275;
  t4966 = 0.037*t4961;
  t4972 = -0.25*t196*t2408;
  t4975 = t196*t485*t2408;
  t4978 = -1.*t524*t580*t2408;
  t4982 = t4975 + t4978;
  t4986 = -0.27*t4982;
  t4989 = t4966 + t4972 + t4986;
  t5204 = 0.21935*t87*t1994;
  t4378 = 0.0875*t2950;
  t4383 = t211*t2894;
  t4393 = t427*t2950;
  t4396 = t4383 + t4393;
  t4414 = 0.037*t4396;
  t5134 = -0.25*t4651;
  t5138 = -1.*t196*t4607;
  t5151 = t2090 + t5138;
  t5154 = t580*t5151;
  t5155 = t485*t4651;
  t5163 = t5154 + t5155;
  t5166 = -0.27*t5163;
  t5183 = t5134 + t5166;
  t4344 = 0.25*t524*t4238;
  t4347 = -1.*t485*t524*t4238;
  t4353 = t4347 + t4247;
  t4358 = -0.27*t4353;
  t4362 = t4344 + t4358;
  t5006 = 0.25*t524*t4691;
  t5010 = -1.*t485*t524*t4691;
  t5011 = t5010 + t4701;
  t5012 = -0.27*t5011;
  t5013 = t5006 + t5012;
  t4822 = -1.*t524*t4810;
  t4847 = -1.*t196*t4843;
  t4848 = t4822 + t4847;
  t4849 = t473*t4848;
  t4857 = t4852 + t4853;
  t4860 = -1.*t580*t4857;
  t4861 = t4849 + t4860;
  t5334 = -0.25*t4784;
  t5335 = -1.*t196*t4745;
  t5357 = t1785 + t5335;
  t5381 = t580*t5357;
  t5382 = t485*t4784;
  t5392 = t5381 + t5382;
  t5404 = -0.27*t5392;
  t5407 = t5334 + t5404;
  t5554 = t52*t87*t261;
  t5556 = -1.*t324*t87*t390;
  t5563 = t5554 + t5556;
  t5574 = -1.*t196*t580*t5563;
  t5624 = -1.*t324*t52*t87;
  t5626 = -1.*t87*t261*t390;
  t5628 = t5624 + t5626;
  t5613 = -1.*t52*t87*t211;
  t5674 = t87*t211*t390;
  t5706 = t5624 + t5674;
  t5768 = -1.*t52*t261*t1143;
  t5805 = t324*t390*t1143;
  t5808 = t5768 + t5805;
  t5666 = t5613 + t5556;
  t5877 = -1.*t196*t580*t5666;
  t5668 = 0.037*t5666;
  t5710 = -0.25*t196*t5706;
  t5712 = t196*t485*t5706;
  t5725 = -1.*t524*t580*t5706;
  t5742 = t5712 + t5725;
  t5745 = -0.27*t5742;
  t5755 = t5668 + t5710 + t5745;
  t5761 = var2[15]*t5755;
  t5830 = t211*t390*t1143;
  t5912 = t52*t211*t1143;
  t5913 = t5912 + t5805;
  t5571 = -1.*t473*t524*t5563;
  t5584 = t5571 + t5574;
  t5876 = -1.*t473*t524*t5666;
  t5883 = t5876 + t5877;
  t5953 = t324*t52*t87;
  t5955 = t87*t261*t390;
  t5956 = 0. + t5953 + t5955;
  t5961 = -1.*t1143;
  t5964 = 0. + t5961;
  t5958 = -1.*t524*t5956;
  t5965 = t196*t5964;
  t5916 = -1.*t324*t52*t1143;
  t5999 = -1.*t261*t390*t1143;
  t6000 = t5916 + t5999;
  t5604 = -0.0875*t87*t390;
  t5614 = -1.*t427*t87*t390;
  t5619 = t5613 + t5614;
  t5622 = 0.037*t5619;
  t6020 = t196*t5628;
  t6021 = t524*t1143;
  t6023 = t6020 + t6021;
  t5762 = -0.0875*t52*t1143;
  t5828 = -0.25*t196*t5808;
  t5829 = -1.*t427*t52*t1143;
  t5847 = t5829 + t5830;
  t5849 = 0.037*t5847;
  t5854 = t196*t485*t5808;
  t5855 = -1.*t524*t580*t5808;
  t5859 = t5854 + t5855;
  t5861 = -0.27*t5859;
  t5864 = t5762 + t5828 + t5849 + t5861;
  t5914 = -0.25*t196*t5913;
  t5924 = t5916 + t5830;
  t5933 = 0.037*t5924;
  t5934 = t196*t485*t5913;
  t5935 = -1.*t524*t580*t5913;
  t5937 = t5934 + t5935;
  t5938 = -0.27*t5937;
  t5940 = t5914 + t5933 + t5938;
  t5998 = -1.*t87*t524;
  t6002 = t196*t6000;
  t6005 = t5998 + t6002;
  t6006 = -1.*t580*t6005;
  t6007 = -1.*t196*t87;
  t6008 = -1.*t524*t6000;
  t6010 = t6007 + t6008;
  t6011 = t473*t6010;
  t6012 = t6006 + t6011;
  t5589 = 0.25*t524*t5563;
  t5594 = -1.*t485*t524*t5563;
  t5598 = t5594 + t5574;
  t5599 = -0.27*t5598;
  t5602 = t5589 + t5599;
  t5891 = 0.25*t524*t5666;
  t5897 = -1.*t485*t524*t5666;
  t5898 = t5897 + t5877;
  t5899 = -0.27*t5898;
  t5900 = t5891 + t5899;
  t5969 = -1.*t196*t5956;
  t5970 = -1.*t524*t5964;
  t5976 = t5969 + t5970;
  t5967 = t5958 + t5965;
  t5968 = -1.*t580*t5967;
  t5977 = t473*t5976;
  t5980 = t5968 + t5977;
  t6055 = -0.25*t6010;
  t6056 = t87*t524;
  t6067 = -1.*t196*t6000;
  t6069 = t6056 + t6067;
  t6072 = t580*t6069;
  t6078 = t485*t6010;
  t6081 = t6072 + t6078;
  t6082 = -0.27*t6081;
  t6090 = t6055 + t6082;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=var2[4]*(t615*var2[3] + (t1631 - 0.25*t1892 - 0.0875*t1143*t120*t390 + 0.037*(-1.*t1143*t120*t390*t427 - 1.*t1143*t120*t211*t52) - 0.27*(t1892*t485 + (t1898 - 1.*t1879*t524)*t580))*var2[4] + t2303*var2[5] + t964*var2[15] + t1549*var2[16] - 0.27*t1357*var2[17]) + var2[15]*(t2764*var2[3] + t964*var2[4] + t3119*var2[5] + (0.037*t2408 - 0.25*t196*t2501 - 0.27*(t196*t2501*t485 - 1.*t2501*t524*t580))*var2[15] + t2807*var2[16] - 0.27*t2429*var2[17]) + var2[3]*((t3624 - 0.25*t196*t3692 + t3711 - 0.27*(t196*t3692*t485 - 1.*t3692*t524*t580))*var2[3] + t615*var2[4] + t3845*var2[5] + t2764*var2[15] + t3753*var2[16] - 0.27*t3181*var2[17]) + var2[16]*(t3753*var2[3] + t1549*var2[4] + t3947*var2[5] + t2807*var2[15] + (-0.25*t3288 - 0.27*(t3288*t485 + (-1.*t196*t3249 + t3280*t524)*t580))*var2[16] - 0.27*t3380*var2[17]) + var2[5]*(t3845*var2[3] + t2303*var2[4] + (t1631 + t3624 + t3711 - 0.25*t3884 - 0.27*(t3884*t485 + (t1898 - 1.*t3692*t524)*t580))*var2[5] + t3119*var2[15] + t3947*var2[16] - 0.27*t3563*var2[17]) + var2[17]*(-0.27*t3181*var2[3] - 0.27*t1357*var2[4] - 0.27*t3563*var2[5] - 0.27*t2429*var2[15] - 0.27*t3380*var2[16] - 0.27*(-1.*t473*(0. + t196*t3280 + t3249*t524) - 1.*(0. + t3344 + t3349)*t580)*var2[17]);
  p_output1[7]=var2[3]*((-0.25*t196*t3427 + t4378 + t4414 - 0.27*(t196*t3427*t485 - 1.*t3427*t524*t580))*var2[3] + t4162*var2[4] + t4340*var2[5] + t4521*var2[15] + t4362*var2[16] - 0.27*t4248*var2[17]) + var2[4]*(t4162*var2[3] + (-0.0875*t1143*t1994*t390 + 0.037*(-1.*t1143*t1994*t390*t427 - 1.*t1143*t1994*t211*t52) + t5204 - 0.25*t5228 - 0.27*(t485*t5228 + (t3534 - 1.*t5219*t524)*t580))*var2[4] + t5113*var2[5] + t4942*var2[15] + t5183*var2[16] - 0.27*t4677*var2[17]) + var2[15]*(t4521*var2[3] + t4942*var2[4] + t4989*var2[5] + (0.037*t4691 - 0.25*t196*t5042 - 0.27*(t196*t485*t5042 - 1.*t5042*t524*t580))*var2[15] + t5013*var2[16] - 0.27*t4708*var2[17]) + var2[5]*(t4340*var2[3] + t5113*var2[4] + (-0.25*t3484 + t4378 + t4414 + t5204 - 0.27*(t3484*t485 + t3550*t580))*var2[5] + t4989*var2[15] + t5407*var2[16] - 0.27*t4795*var2[17]) + var2[16]*(t4362*var2[3] + t5183*var2[4] + t5407*var2[5] + t5013*var2[15] + (-0.25*t4848 - 0.27*(t4848*t485 + (-1.*t196*t4810 + t4843*t524)*t580))*var2[16] - 0.27*t4861*var2[17]) + var2[17]*(-0.27*t4248*var2[3] - 0.27*t4677*var2[4] - 0.27*t4795*var2[5] - 0.27*t4708*var2[15] - 0.27*t4861*var2[16] - 0.27*(-1.*t473*(0. + t196*t4843 + t4810*t524) - 1.*(0. + t4852 + t4853)*t580)*var2[17]);
  p_output1[8]=var2[3]*(t5761 + (t5604 + t5622 - 0.25*t196*t5628 - 0.27*(t196*t485*t5628 - 1.*t524*t5628*t580))*var2[3] + t5864*var2[4] + t5602*var2[16] - 0.27*t5584*var2[17]) + var2[15]*(t5761 + t5755*var2[3] + t5940*var2[4] + t5900*var2[16] - 0.27*t5883*var2[17]) + var2[17]*(-0.27*t5584*var2[3] - 0.27*t6012*var2[4] - 0.27*t5883*var2[15] - 0.27*t5980*var2[16] - 0.27*(-1.*t473*(0. + t196*t5956 + t524*t5964) - 1.*t580*(0. + t5958 + t5965))*var2[17]) + var2[16]*(t5602*var2[3] + t6090*var2[4] + t5900*var2[15] + (-0.25*t5976 - 0.27*(t580*(t524*t5956 - 1.*t196*t5964) + t485*t5976))*var2[16] - 0.27*t5980*var2[17]) + var2[4]*(t5864*var2[3] + (-0.21935*t1143 + t5604 + t5622 - 0.25*t6023 - 0.27*((t1143*t196 - 1.*t524*t5628)*t580 + t485*t6023))*var2[4] + t5940*var2[15] + t6090*var2[16] - 0.27*t6012*var2[17]);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "jj_hc_4_func.hh"

namespace SymFunction
{

void jj_hc_4_func_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
