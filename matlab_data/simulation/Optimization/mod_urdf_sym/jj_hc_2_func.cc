/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 13:00:52 GMT-05:00
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
  double t7;
  double t16;
  double t56;
  double t276;
  double t193;
  double t364;
  double t190;
  double t203;
  double t206;
  double t229;
  double t505;
  double t506;
  double t677;
  double t893;
  double t895;
  double t1282;
  double t1355;
  double t959;
  double t1070;
  double t1417;
  double t1696;
  double t1726;
  double t1799;
  double t1782;
  double t1826;
  double t1854;
  double t605;
  double t2283;
  double t2284;
  double t2289;
  double t2308;
  double t2314;
  double t2349;
  double t2411;
  double t2535;
  double t2557;
  double t2562;
  double t2563;
  double t2564;
  double t2569;
  double t1407;
  double t1475;
  double t1539;
  double t1549;
  double t1582;
  double t1606;
  double t1616;
  double t1627;
  double t2793;
  double t2794;
  double t2795;
  double t2799;
  double t2807;
  double t2809;
  double t2825;
  double t2833;
  double t2878;
  double t2894;
  double t2901;
  double t2914;
  double t3013;
  double t3057;
  double t3068;
  double t3074;
  double t3115;
  double t2881;
  double t3249;
  double t3253;
  double t3260;
  double t3264;
  double t3276;
  double t3277;
  double t3263;
  double t3340;
  double t3341;
  double t1879;
  double t1897;
  double t1905;
  double t1907;
  double t1913;
  double t1920;
  double t3122;
  double t3427;
  double t3442;
  double t2880;
  double t2885;
  double t3515;
  double t3517;
  double t3534;
  double t3544;
  double t3558;
  double t3568;
  double t3569;
  double t3349;
  double t3657;
  double t3658;
  double t188;
  double t530;
  double t638;
  double t754;
  double t875;
  double t928;
  double t1096;
  double t1113;
  double t1143;
  double t1231;
  double t3480;
  double t3482;
  double t3486;
  double t3740;
  double t3745;
  double t3752;
  double t3728;
  double t3753;
  double t3754;
  double t3121;
  double t3123;
  double t3125;
  double t3126;
  double t3133;
  double t3135;
  double t3142;
  double t3176;
  double t3853;
  double t3859;
  double t3865;
  double t3848;
  double t3866;
  double t3871;
  double t2414;
  double t2435;
  double t2439;
  double t2459;
  double t2505;
  double t2507;
  double t2592;
  double t2593;
  double t2608;
  double t2631;
  double t2637;
  double t2664;
  double t2674;
  double t2681;
  double t2702;
  double t3344;
  double t3362;
  double t3373;
  double t3380;
  double t3383;
  double t3384;
  double t3387;
  double t3388;
  double t3393;
  double t3643;
  double t3668;
  double t3670;
  double t3682;
  double t3684;
  double t3690;
  double t3692;
  double t3697;
  double t3700;
  double t3845;
  double t3875;
  double t3891;
  double t3894;
  double t3896;
  double t3904;
  double t3906;
  double t3910;
  double t3913;
  double t3922;
  double t3925;
  double t2136;
  double t3721;
  double t3758;
  double t3759;
  double t3764;
  double t3785;
  double t3958;
  double t3960;
  double t2367;
  double t2037;
  double t2040;
  double t2056;
  double t2080;
  double t2087;
  double t2090;
  double t2098;
  double t2114;
  double t2132;
  double t3529;
  double t3560;
  double t3561;
  double t3563;
  double t3570;
  double t3578;
  double t3599;
  double t3823;
  double t3829;
  double t3832;
  double t3837;
  double t3841;
  double t3181;
  double t3183;
  double t3187;
  double t3194;
  double t3204;
  double t3990;
  double t3992;
  double t3995;
  double t3996;
  double t3998;
  double t4003;
  double t4004;
  double t4006;
  double t4007;
  double t4103;
  double t4109;
  double t4111;
  double t4154;
  double t4158;
  double t4161;
  double t4162;
  double t4164;
  double t4168;
  double t4211;
  double t4540;
  double t4548;
  double t4614;
  double t4620;
  double t4630;
  double t4184;
  double t4212;
  double t4491;
  double t4700;
  double t4702;
  double t4740;
  double t4795;
  double t4798;
  double t4802;
  double t4809;
  double t4819;
  double t4827;
  double t4829;
  double t4115;
  double t4871;
  double t4703;
  double t4704;
  double t4707;
  double t4519;
  double t4521;
  double t4561;
  double t4563;
  double t4583;
  double t4586;
  double t4587;
  double t4588;
  double t4981;
  double t4100;
  double t4112;
  double t4113;
  double t4119;
  double t4130;
  double t4136;
  double t4140;
  double t4143;
  double t4144;
  double t4145;
  double t4876;
  double t4878;
  double t4886;
  double t4887;
  double t4888;
  double t4895;
  double t4897;
  double t4903;
  double t4612;
  double t4638;
  double t4644;
  double t4648;
  double t4649;
  double t4650;
  double t4660;
  double t4688;
  double t4689;
  double t5135;
  double t5146;
  double t5176;
  double t5184;
  double t5200;
  double t5010;
  double t5011;
  double t5012;
  double t5013;
  double t5020;
  double t5032;
  double t5042;
  double t5046;
  double t5053;
  double t5055;
  double t5056;
  double t5064;
  double t4717;
  double t4741;
  double t4749;
  double t4769;
  double t4776;
  double t4777;
  double t4779;
  double t4780;
  double t4781;
  double t4238;
  double t4245;
  double t4248;
  double t4258;
  double t4272;
  double t4295;
  double t4306;
  double t4312;
  double t4331;
  double t4336;
  double t4340;
  double t4910;
  double t4911;
  double t4914;
  double t4915;
  double t4916;
  double t4917;
  double t4936;
  double t4939;
  double t4941;
  double t5107;
  double t4417;
  double t4421;
  double t4436;
  double t4443;
  double t4444;
  double t5080;
  double t5087;
  double t5088;
  double t5093;
  double t5094;
  double t5095;
  double t5097;
  double t5101;
  double t4362;
  double t4366;
  double t4372;
  double t4396;
  double t4414;
  double t4948;
  double t4949;
  double t4958;
  double t4961;
  double t4966;
  double t4800;
  double t4821;
  double t4824;
  double t4825;
  double t4832;
  double t4838;
  double t4843;
  double t5262;
  double t5264;
  double t5265;
  double t5271;
  double t5276;
  double t5285;
  double t5286;
  double t5287;
  double t5430;
  double t5431;
  double t5432;
  double t5437;
  double t5496;
  double t5505;
  double t5507;
  double t5488;
  double t5552;
  double t5555;
  double t5575;
  double t5585;
  double t5586;
  double t5546;
  double t5616;
  double t5551;
  double t5556;
  double t5558;
  double t5560;
  double t5561;
  double t5563;
  double t5567;
  double t5571;
  double t5593;
  double t5658;
  double t5660;
  double t5435;
  double t5438;
  double t5615;
  double t5617;
  double t5761;
  double t5762;
  double t5798;
  double t5805;
  double t5807;
  double t5802;
  double t5808;
  double t5663;
  double t5880;
  double t5882;
  double t5480;
  double t5491;
  double t5494;
  double t5495;
  double t5914;
  double t5916;
  double t5922;
  double t5574;
  double t5589;
  double t5590;
  double t5594;
  double t5598;
  double t5599;
  double t5601;
  double t5602;
  double t5603;
  double t5604;
  double t5661;
  double t5666;
  double t5668;
  double t5674;
  double t5699;
  double t5700;
  double t5706;
  double t5710;
  double t5879;
  double t5883;
  double t5886;
  double t5887;
  double t5891;
  double t5893;
  double t5897;
  double t5898;
  double t5899;
  double t5441;
  double t5444;
  double t5451;
  double t5461;
  double t5464;
  double t5626;
  double t5627;
  double t5640;
  double t5642;
  double t5653;
  double t5813;
  double t5818;
  double t5825;
  double t5809;
  double t5810;
  double t5829;
  double t5831;
  double t5969;
  double t5970;
  double t5972;
  double t5976;
  double t5977;
  double t5980;
  double t5983;
  double t5987;
  double t5988;
  t7 = Cos(var1[3]);
  t16 = Cos(var1[4]);
  t56 = Cos(var1[5]);
  t276 = Cos(var1[12]);
  t193 = Sin(var1[12]);
  t364 = Sin(var1[3]);
  t190 = Cos(var1[13]);
  t203 = -1.*t193;
  t206 = 0. + t203;
  t229 = t7*t16*t56*t206;
  t505 = -1.*t276*t16*t56*t364;
  t506 = t229 + t505;
  t677 = -1.*t16*t56*t193*t364;
  t893 = Cos(var1[14]);
  t895 = 0. + t893;
  t1282 = -1.*t7*t16*t56*t193;
  t1355 = t1282 + t505;
  t959 = Sin(var1[13]);
  t1070 = Sin(var1[14]);
  t1417 = t276*t7*t16*t56;
  t1696 = t16*t56*t206*t364;
  t1726 = t1417 + t1696;
  t1799 = Sin(var1[4]);
  t1782 = -1.*t959*t1726;
  t1826 = -1.*t190*t56*t1799;
  t1854 = t1782 + t1826;
  t605 = 0. + t276;
  t2283 = -1.*t16*t56*t959;
  t2284 = -1.*t276*t7*t56*t1799;
  t2289 = -1.*t56*t206*t364*t1799;
  t2308 = t2284 + t2289;
  t2314 = t190*t2308;
  t2349 = t2283 + t2314;
  t2411 = Sin(var1[5]);
  t2535 = t959*t1799*t2411;
  t2557 = -1.*t276*t7*t16*t2411;
  t2562 = -1.*t16*t206*t364*t2411;
  t2563 = t2557 + t2562;
  t2564 = t190*t2563;
  t2569 = t2535 + t2564;
  t1407 = -0.25*t190*t1355;
  t1475 = t1417 + t677;
  t1539 = -0.037*t1475;
  t1549 = t190*t895*t1355;
  t1582 = -1.*t959*t1070*t1355;
  t1606 = t1549 + t1582;
  t1616 = -0.27*t1606;
  t1627 = t1407 + t1539 + t1616;
  t2793 = t56*t364*t1799;
  t2794 = -1.*t7*t2411;
  t2795 = t2793 + t2794;
  t2799 = -1.*t276*t2795;
  t2807 = t7*t56*t1799;
  t2809 = t364*t2411;
  t2825 = t2807 + t2809;
  t2833 = -1.*t193*t2825;
  t2878 = t2799 + t2833;
  t2894 = t193*t2795;
  t2901 = -1.*t276*t2825;
  t2914 = t2894 + t2901;
  t3013 = -1.*t56*t364*t1799;
  t3057 = t7*t2411;
  t3068 = t3013 + t3057;
  t3074 = -1.*t193*t3068;
  t3115 = t3074 + t2901;
  t2881 = -1.*t190*t1070*t2878;
  t3249 = t56*t364;
  t3253 = -1.*t7*t1799*t2411;
  t3260 = t3249 + t3253;
  t3264 = -1.*t7*t56;
  t3276 = -1.*t364*t1799*t2411;
  t3277 = t3264 + t3276;
  t3263 = -1.*t193*t3260;
  t3340 = -1.*t276*t3277;
  t3341 = t3263 + t3340;
  t1879 = t893*t1854;
  t1897 = t190*t1726;
  t1905 = -1.*t56*t959*t1799;
  t1907 = t1897 + t1905;
  t1913 = -1.*t1070*t1907;
  t1920 = t1879 + t1913;
  t3122 = t276*t3068;
  t3427 = t206*t2825;
  t3442 = t3122 + t3427;
  t2880 = -1.*t893*t959*t2878;
  t2885 = t2880 + t2881;
  t3515 = t16*t56;
  t3517 = 0. + t3515;
  t3534 = t206*t2795;
  t3544 = t276*t2825;
  t3558 = 0. + t3534 + t3544;
  t3568 = t190*t3517;
  t3569 = -1.*t959*t3558;
  t3349 = t276*t3260;
  t3657 = t206*t3277;
  t3658 = t3349 + t3657;
  t188 = -0.0875*t7*t16*t56;
  t530 = -0.25*t190*t506;
  t638 = t605*t7*t16*t56;
  t754 = t638 + t677;
  t875 = -0.037*t754;
  t928 = t190*t895*t506;
  t1096 = -1.*t959*t1070*t506;
  t1113 = t928 + t1096;
  t1143 = -0.27*t1113;
  t1231 = t188 + t530 + t875 + t1143;
  t3480 = -1.*t893*t959*t3442;
  t3482 = -1.*t190*t1070*t3442;
  t3486 = t3480 + t3482;
  t3740 = -1.*t7*t56*t1799;
  t3745 = -1.*t364*t2411;
  t3752 = t3740 + t3745;
  t3728 = t206*t3068;
  t3753 = t276*t3752;
  t3754 = t3728 + t3753;
  t3121 = -0.25*t190*t3115;
  t3123 = t3122 + t2833;
  t3125 = -0.037*t3123;
  t3126 = t190*t895*t3115;
  t3133 = -1.*t959*t1070*t3115;
  t3135 = t3126 + t3133;
  t3142 = -0.27*t3135;
  t3176 = t3121 + t3125 + t3142;
  t3853 = t7*t56;
  t3859 = t364*t1799*t2411;
  t3865 = t3853 + t3859;
  t3848 = t206*t3260;
  t3866 = t276*t3865;
  t3871 = t3848 + t3866;
  t2414 = 0.0875*t16*t364*t2411;
  t2435 = -0.21935*t1799*t2411;
  t2439 = -1.*t7*t16*t193*t2411;
  t2459 = -1.*t605*t16*t364*t2411;
  t2505 = t2439 + t2459;
  t2507 = -0.037*t2505;
  t2592 = -0.25*t2569;
  t2593 = t895*t2569;
  t2608 = t190*t1799*t2411;
  t2631 = -1.*t959*t2563;
  t2637 = t2608 + t2631;
  t2664 = t1070*t2637;
  t2674 = t2593 + t2664;
  t2681 = -0.27*t2674;
  t2702 = t2414 + t2435 + t2507 + t2592 + t2681;
  t3344 = -0.25*t190*t3341;
  t3362 = -1.*t193*t3277;
  t3373 = t3349 + t3362;
  t3380 = -0.037*t3373;
  t3383 = t190*t895*t3341;
  t3384 = -1.*t959*t1070*t3341;
  t3387 = t3383 + t3384;
  t3388 = -0.27*t3387;
  t3393 = t3344 + t3380 + t3388;
  t3643 = -1.*t16*t959*t2411;
  t3668 = t190*t3658;
  t3670 = t3643 + t3668;
  t3682 = -1.*t1070*t3670;
  t3684 = -1.*t190*t16*t2411;
  t3690 = -1.*t959*t3658;
  t3692 = t3684 + t3690;
  t3697 = t893*t3692;
  t3700 = t3682 + t3697;
  t3845 = -0.0875*t3260;
  t3875 = -0.25*t190*t3871;
  t3891 = t605*t3260;
  t3894 = t193*t3865;
  t3896 = t3891 + t3894;
  t3904 = -0.037*t3896;
  t3906 = t190*t895*t3871;
  t3910 = -1.*t959*t1070*t3871;
  t3913 = t3906 + t3910;
  t3922 = -0.27*t3913;
  t3925 = t3845 + t3875 + t3904 + t3922;
  t2136 = 0.21935*t16*t56;
  t3721 = -0.0875*t3068;
  t3758 = t605*t3068;
  t3759 = t193*t3752;
  t3764 = t3758 + t3759;
  t3785 = -0.037*t3764;
  t3958 = t190*t3754;
  t3960 = t2283 + t3958;
  t2367 = -1.*t190*t16*t56;
  t2037 = -0.25*t1854;
  t2040 = t895*t1854;
  t2056 = -1.*t190*t1726;
  t2080 = t56*t959*t1799;
  t2087 = t2056 + t2080;
  t2090 = t1070*t2087;
  t2098 = t2040 + t2090;
  t2114 = -0.27*t2098;
  t2132 = t2037 + t2114;
  t3529 = -1.*t3517*t959;
  t3560 = -1.*t190*t3558;
  t3561 = t3529 + t3560;
  t3563 = t893*t3561;
  t3570 = t3568 + t3569;
  t3578 = -1.*t1070*t3570;
  t3599 = t3563 + t3578;
  t3823 = 0.25*t959*t3442;
  t3829 = -1.*t895*t959*t3442;
  t3832 = t3829 + t3482;
  t3837 = -0.27*t3832;
  t3841 = t3823 + t3837;
  t3181 = 0.25*t959*t2878;
  t3183 = -1.*t895*t959*t2878;
  t3187 = t3183 + t2881;
  t3194 = -0.27*t3187;
  t3204 = t3181 + t3194;
  t3990 = -0.25*t3692;
  t3992 = t16*t959*t2411;
  t3995 = -1.*t190*t3658;
  t3996 = t3992 + t3995;
  t3998 = t1070*t3996;
  t4003 = t895*t3692;
  t4004 = t3998 + t4003;
  t4006 = -0.27*t4004;
  t4007 = t3990 + t4006;
  t4103 = t7*t16*t206*t2411;
  t4109 = -1.*t276*t16*t364*t2411;
  t4111 = t4103 + t4109;
  t4154 = -1.*t56*t364;
  t4158 = t7*t1799*t2411;
  t4161 = t4154 + t4158;
  t4162 = t206*t4161;
  t4164 = t276*t3277;
  t4168 = t4162 + t4164;
  t4211 = -1.*t190*t1070*t4168;
  t4540 = -1.*t276*t4161;
  t4548 = t4540 + t3362;
  t4614 = t276*t7*t16*t2411;
  t4620 = t16*t206*t364*t2411;
  t4630 = t4614 + t4620;
  t4184 = -1.*t893*t959*t4168;
  t4212 = t4184 + t4211;
  t4491 = -1.*t193*t4161;
  t4700 = -1.*t276*t3865;
  t4702 = t4491 + t4700;
  t4740 = t3534 + t3544;
  t4795 = t16*t2411;
  t4798 = 0. + t4795;
  t4802 = t276*t4161;
  t4809 = t206*t3865;
  t4819 = 0. + t4802 + t4809;
  t4827 = t190*t4798;
  t4829 = -1.*t959*t4819;
  t4115 = -1.*t16*t193*t364*t2411;
  t4871 = t2439 + t4109;
  t4703 = -1.*t893*t959*t4702;
  t4704 = -1.*t190*t1070*t4702;
  t4707 = t4703 + t4704;
  t4519 = t4491 + t4164;
  t4521 = -0.037*t4519;
  t4561 = -0.25*t190*t4548;
  t4563 = t190*t895*t4548;
  t4583 = -1.*t959*t1070*t4548;
  t4586 = t4563 + t4583;
  t4587 = -0.27*t4586;
  t4588 = t4521 + t4561 + t4587;
  t4981 = t4540 + t3894;
  t4100 = -0.0875*t7*t16*t2411;
  t4112 = -0.25*t190*t4111;
  t4113 = t605*t7*t16*t2411;
  t4119 = t4113 + t4115;
  t4130 = -0.037*t4119;
  t4136 = t190*t895*t4111;
  t4140 = -1.*t959*t1070*t4111;
  t4143 = t4136 + t4140;
  t4144 = -0.27*t4143;
  t4145 = t4100 + t4112 + t4130 + t4144;
  t4876 = -0.25*t190*t4871;
  t4878 = t4614 + t4115;
  t4886 = -0.037*t4878;
  t4887 = t190*t895*t4871;
  t4888 = -1.*t959*t1070*t4871;
  t4895 = t4887 + t4888;
  t4897 = -0.27*t4895;
  t4903 = t4876 + t4886 + t4897;
  t4612 = -1.*t959*t1799*t2411;
  t4638 = t190*t4630;
  t4644 = t4612 + t4638;
  t4648 = -1.*t1070*t4644;
  t4649 = -1.*t190*t1799*t2411;
  t4650 = -1.*t959*t4630;
  t4660 = t4649 + t4650;
  t4688 = t893*t4660;
  t4689 = t4648 + t4688;
  t5135 = -1.*t276*t7*t1799*t2411;
  t5146 = -1.*t206*t364*t1799*t2411;
  t5176 = t5135 + t5146;
  t5184 = t190*t5176;
  t5200 = t3643 + t5184;
  t5010 = -0.0875*t16*t56*t364;
  t5011 = t7*t16*t56*t193;
  t5012 = t605*t16*t56*t364;
  t5013 = t5011 + t5012;
  t5020 = -0.037*t5013;
  t5032 = 0.21935*t56*t1799;
  t5042 = -0.25*t1907;
  t5046 = t1070*t1854;
  t5053 = t895*t1907;
  t5055 = t5046 + t5053;
  t5056 = -0.27*t5055;
  t5064 = t5010 + t5020 + t5032 + t5042 + t5056;
  t4717 = t16*t56*t959;
  t4741 = t190*t4740;
  t4749 = t4717 + t4741;
  t4769 = -1.*t1070*t4749;
  t4776 = t190*t16*t56;
  t4777 = -1.*t959*t4740;
  t4779 = t4776 + t4777;
  t4780 = t893*t4779;
  t4781 = t4769 + t4780;
  t4238 = -0.0875*t2825;
  t4245 = t193*t3068;
  t4248 = t605*t2825;
  t4258 = t4245 + t4248;
  t4272 = -0.037*t4258;
  t4295 = -0.25*t190*t3442;
  t4306 = t190*t895*t3442;
  t4312 = -1.*t959*t1070*t3442;
  t4331 = t4306 + t4312;
  t4336 = -0.27*t4331;
  t4340 = t4238 + t4272 + t4295 + t4336;
  t4910 = -1.*t193*t2795;
  t4911 = t4910 + t3544;
  t4914 = -0.037*t4911;
  t4915 = -0.25*t190*t2878;
  t4916 = t190*t895*t2878;
  t4917 = -1.*t959*t1070*t2878;
  t4936 = t4916 + t4917;
  t4939 = -0.27*t4936;
  t4941 = t4914 + t4915 + t4939;
  t5107 = 0.21935*t16*t2411;
  t4417 = -0.0875*t3277;
  t4421 = t193*t3260;
  t4436 = t605*t3277;
  t4443 = t4421 + t4436;
  t4444 = -0.037*t4443;
  t5080 = -0.25*t4660;
  t5087 = -1.*t190*t4630;
  t5088 = t2535 + t5087;
  t5093 = t1070*t5088;
  t5094 = t895*t4660;
  t5095 = t5093 + t5094;
  t5097 = -0.27*t5095;
  t5101 = t5080 + t5097;
  t4362 = 0.25*t959*t4168;
  t4366 = -1.*t895*t959*t4168;
  t4372 = t4366 + t4211;
  t4396 = -0.27*t4372;
  t4414 = t4362 + t4396;
  t4948 = 0.25*t959*t4702;
  t4949 = -1.*t895*t959*t4702;
  t4958 = t4949 + t4704;
  t4961 = -0.27*t4958;
  t4966 = t4948 + t4961;
  t4800 = -1.*t959*t4798;
  t4821 = -1.*t190*t4819;
  t4824 = t4800 + t4821;
  t4825 = t893*t4824;
  t4832 = t4827 + t4829;
  t4838 = -1.*t1070*t4832;
  t4843 = t4825 + t4838;
  t5262 = -0.25*t4779;
  t5264 = -1.*t190*t4740;
  t5265 = t2283 + t5264;
  t5271 = t1070*t5265;
  t5276 = t895*t4779;
  t5285 = t5271 + t5276;
  t5286 = -0.27*t5285;
  t5287 = t5262 + t5286;
  t5430 = t7*t16*t206;
  t5431 = -1.*t276*t16*t364;
  t5432 = t5430 + t5431;
  t5437 = -1.*t190*t1070*t5432;
  t5496 = -1.*t276*t7*t16;
  t5505 = -1.*t16*t206*t364;
  t5507 = t5496 + t5505;
  t5488 = -1.*t7*t16*t193;
  t5552 = t16*t193*t364;
  t5555 = t5496 + t5552;
  t5575 = -1.*t7*t206*t1799;
  t5585 = t276*t364*t1799;
  t5586 = t5575 + t5585;
  t5546 = t5488 + t5431;
  t5616 = -1.*t190*t1070*t5546;
  t5551 = -0.037*t5546;
  t5556 = -0.25*t190*t5555;
  t5558 = t190*t895*t5555;
  t5560 = -1.*t959*t1070*t5555;
  t5561 = t5558 + t5560;
  t5563 = -0.27*t5561;
  t5567 = t5551 + t5556 + t5563;
  t5571 = var2[12]*t5567;
  t5593 = t193*t364*t1799;
  t5658 = t7*t193*t1799;
  t5660 = t5658 + t5585;
  t5435 = -1.*t893*t959*t5432;
  t5438 = t5435 + t5437;
  t5615 = -1.*t893*t959*t5546;
  t5617 = t5615 + t5616;
  t5761 = t276*t7*t16;
  t5762 = t16*t206*t364;
  t5798 = 0. + t5761 + t5762;
  t5805 = -1.*t1799;
  t5807 = 0. + t5805;
  t5802 = -1.*t959*t5798;
  t5808 = t190*t5807;
  t5663 = -1.*t276*t7*t1799;
  t5880 = -1.*t206*t364*t1799;
  t5882 = t5663 + t5880;
  t5480 = 0.0875*t16*t364;
  t5491 = -1.*t605*t16*t364;
  t5494 = t5488 + t5491;
  t5495 = -0.037*t5494;
  t5914 = t190*t5507;
  t5916 = t959*t1799;
  t5922 = t5914 + t5916;
  t5574 = 0.0875*t7*t1799;
  t5589 = -0.25*t190*t5586;
  t5590 = -1.*t605*t7*t1799;
  t5594 = t5590 + t5593;
  t5598 = -0.037*t5594;
  t5599 = t190*t895*t5586;
  t5601 = -1.*t959*t1070*t5586;
  t5602 = t5599 + t5601;
  t5603 = -0.27*t5602;
  t5604 = t5574 + t5589 + t5598 + t5603;
  t5661 = -0.25*t190*t5660;
  t5666 = t5663 + t5593;
  t5668 = -0.037*t5666;
  t5674 = t190*t895*t5660;
  t5699 = -1.*t959*t1070*t5660;
  t5700 = t5674 + t5699;
  t5706 = -0.27*t5700;
  t5710 = t5661 + t5668 + t5706;
  t5879 = -1.*t16*t959;
  t5883 = t190*t5882;
  t5886 = t5879 + t5883;
  t5887 = -1.*t1070*t5886;
  t5891 = -1.*t190*t16;
  t5893 = -1.*t959*t5882;
  t5897 = t5891 + t5893;
  t5898 = t893*t5897;
  t5899 = t5887 + t5898;
  t5441 = 0.25*t959*t5432;
  t5444 = -1.*t895*t959*t5432;
  t5451 = t5444 + t5437;
  t5461 = -0.27*t5451;
  t5464 = t5441 + t5461;
  t5626 = 0.25*t959*t5546;
  t5627 = -1.*t895*t959*t5546;
  t5640 = t5627 + t5616;
  t5642 = -0.27*t5640;
  t5653 = t5626 + t5642;
  t5813 = -1.*t190*t5798;
  t5818 = -1.*t959*t5807;
  t5825 = t5813 + t5818;
  t5809 = t5802 + t5808;
  t5810 = -1.*t1070*t5809;
  t5829 = t893*t5825;
  t5831 = t5810 + t5829;
  t5969 = -0.25*t5897;
  t5970 = t16*t959;
  t5972 = -1.*t190*t5882;
  t5976 = t5970 + t5972;
  t5977 = t1070*t5976;
  t5980 = t895*t5897;
  t5983 = t5977 + t5980;
  t5987 = -0.27*t5983;
  t5988 = t5969 + t5987;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=var2[4]*(t1231*var2[3] + (t2136 - 0.25*t2349 + 0.0875*t1799*t364*t56 - 0.037*(-1.*t1799*t364*t56*t605 - 1.*t1799*t193*t56*t7) - 0.27*(t2349*t895 + t1070*(t2367 - 1.*t2308*t959)))*var2[4] + t2702*var2[5] + t1627*var2[12] + t2132*var2[13] - 0.27*t1920*var2[14]) + var2[12]*(t3176*var2[3] + t1627*var2[4] + t3393*var2[5] + (-0.037*t2878 - 0.25*t190*t2914 - 0.27*(t190*t2914*t895 - 1.*t1070*t2914*t959))*var2[12] + t3204*var2[13] - 0.27*t2885*var2[14]) + var2[3]*((t3721 - 0.25*t190*t3754 + t3785 - 0.27*(t190*t3754*t895 - 1.*t1070*t3754*t959))*var2[3] + t1231*var2[4] + t3925*var2[5] + t3176*var2[12] + t3841*var2[13] - 0.27*t3486*var2[14]) + var2[13]*(t3841*var2[3] + t2132*var2[4] + t4007*var2[5] + t3204*var2[12] + (-0.25*t3561 - 0.27*(t3561*t895 + t1070*(-1.*t190*t3517 + t3558*t959)))*var2[13] - 0.27*t3599*var2[14]) + var2[5]*(t3925*var2[3] + t2702*var2[4] + (t2136 + t3721 + t3785 - 0.25*t3960 - 0.27*(t3960*t895 + t1070*(t2367 - 1.*t3754*t959)))*var2[5] + t3393*var2[12] + t4007*var2[13] - 0.27*t3700*var2[14]) + var2[14]*(-0.27*t3486*var2[3] - 0.27*t1920*var2[4] - 0.27*t3700*var2[5] - 0.27*t2885*var2[12] - 0.27*t3599*var2[13] - 0.27*(-1.*t1070*(0. + t3568 + t3569) - 1.*t893*(0. + t190*t3558 + t3517*t959))*var2[14]);
  p_output1[7]=var2[3]*((-0.25*t190*t3658 + t4417 + t4444 - 0.27*(t190*t3658*t895 - 1.*t1070*t3658*t959))*var2[3] + t4145*var2[4] + t4340*var2[5] + t4588*var2[12] + t4414*var2[13] - 0.27*t4212*var2[14]) + var2[4]*(t4145*var2[3] + (0.0875*t1799*t2411*t364 + t5107 - 0.25*t5200 - 0.037*(-1.*t1799*t2411*t364*t605 - 1.*t1799*t193*t2411*t7) - 0.27*(t5200*t895 + t1070*(t3684 - 1.*t5176*t959)))*var2[4] + t5064*var2[5] + t4903*var2[12] + t5101*var2[13] - 0.27*t4689*var2[14]) + var2[12]*(t4588*var2[3] + t4903*var2[4] + t4941*var2[5] + (-0.037*t4702 - 0.25*t190*t4981 - 0.27*(t190*t4981*t895 - 1.*t1070*t4981*t959))*var2[12] + t4966*var2[13] - 0.27*t4707*var2[14]) + var2[5]*(t4340*var2[3] + t5064*var2[4] + (-0.25*t3670 + t4417 + t4444 + t5107 - 0.27*(t1070*t3692 + t3670*t895))*var2[5] + t4941*var2[12] + t5287*var2[13] - 0.27*t4781*var2[14]) + var2[13]*(t4414*var2[3] + t5101*var2[4] + t5287*var2[5] + t4966*var2[12] + (-0.25*t4824 - 0.27*(t4824*t895 + t1070*(-1.*t190*t4798 + t4819*t959)))*var2[13] - 0.27*t4843*var2[14]) + var2[14]*(-0.27*t4212*var2[3] - 0.27*t4689*var2[4] - 0.27*t4781*var2[5] - 0.27*t4707*var2[12] - 0.27*t4843*var2[13] - 0.27*(-1.*t1070*(0. + t4827 + t4829) - 1.*t893*(0. + t190*t4819 + t4798*t959))*var2[14]);
  p_output1[8]=var2[3]*(t5571 + (t5480 + t5495 - 0.25*t190*t5507 - 0.27*(t190*t5507*t895 - 1.*t1070*t5507*t959))*var2[3] + t5604*var2[4] + t5464*var2[13] - 0.27*t5438*var2[14]) + var2[12]*(t5571 + t5567*var2[3] + t5710*var2[4] + t5653*var2[13] - 0.27*t5617*var2[14]) + var2[13]*(t5464*var2[3] + t5988*var2[4] + t5653*var2[12] + (-0.25*t5825 - 0.27*(t5825*t895 + t1070*(-1.*t190*t5807 + t5798*t959)))*var2[13] - 0.27*t5831*var2[14]) + var2[4]*(t5604*var2[3] + (-0.21935*t1799 + t5480 + t5495 - 0.25*t5922 - 0.27*(t5922*t895 + t1070*(t1799*t190 - 1.*t5507*t959)))*var2[4] + t5710*var2[12] + t5988*var2[13] - 0.27*t5899*var2[14]) + var2[14]*(-0.27*t5438*var2[3] - 0.27*t5899*var2[4] - 0.27*t5617*var2[12] - 0.27*t5831*var2[13] - 0.27*(-1.*t1070*(0. + t5802 + t5808) - 1.*t893*(0. + t190*t5798 + t5807*t959))*var2[14]);
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

#include "jj_hc_2_func.hh"

namespace SymFunction
{

void jj_hc_2_func_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
