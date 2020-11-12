/*
 * Automatically Generated from Mathematica.
 * Sun 28 Jul 2019 02:50:23 GMT-04:00
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
  double t334;
  double t346;
  double t430;
  double t432;
  double t433;
  double t443;
  double t468;
  double t111;
  double t148;
  double t292;
  double t537;
  double t571;
  double t596;
  double t600;
  double t544;
  double t1100;
  double t1077;
  double t1377;
  double t1401;
  double t1448;
  double t1063;
  double t1097;
  double t1125;
  double t1127;
  double t1136;
  double t1347;
  double t1350;
  double t1353;
  double t1374;
  double t1470;
  double t1474;
  double t1500;
  double t1504;
  double t1510;
  double t1514;
  double t1518;
  double t881;
  double t890;
  double t681;
  double t683;
  double t994;
  double t1009;
  double t984;
  double t986;
  double t494;
  double t549;
  double t566;
  double t1832;
  double t2082;
  double t602;
  double t614;
  double t646;
  double t1542;
  double t1590;
  double t1603;
  double t1656;
  double t1661;
  double t1669;
  double t1682;
  double t1684;
  double t1705;
  double t689;
  double t891;
  double t931;
  double t990;
  double t1025;
  double t1050;
  double t3034;
  double t3037;
  double t3038;
  double t3051;
  double t3060;
  double t3065;
  double t3066;
  double t3072;
  double t3077;
  double t3078;
  double t3079;
  double t3082;
  double t3087;
  double t3091;
  double t3185;
  double t3204;
  double t3205;
  double t3215;
  double t3218;
  double t3225;
  double t3226;
  double t1534;
  double t1610;
  double t1680;
  double t1756;
  double t1928;
  double t1939;
  double t2040;
  double t2144;
  double t2166;
  double t2226;
  double t2480;
  double t2483;
  double t2488;
  double t2492;
  double t2494;
  double t2518;
  double t2573;
  double t2714;
  double t3446;
  double t3453;
  double t3454;
  double t3455;
  double t3463;
  double t3468;
  double t3473;
  double t3474;
  double t3475;
  double t3241;
  double t3245;
  double t3247;
  double t3259;
  double t3265;
  double t3276;
  double t3277;
  double t3281;
  double t3585;
  double t3590;
  double t3578;
  double t3595;
  double t3601;
  double t3605;
  double t3607;
  double t3608;
  double t3609;
  double t3618;
  double t3619;
  double t3624;
  double t3626;
  double t3627;
  double t3637;
  double t3638;
  double t3639;
  double t3660;
  double t3565;
  double t3628;
  double t3629;
  double t3529;
  double t3517;
  double t3518;
  double t3684;
  double t3685;
  double t3688;
  double t3689;
  double t3690;
  double t3661;
  double t3667;
  double t3669;
  double t3670;
  double t3673;
  double t3676;
  double t3730;
  double t3731;
  double t3734;
  double t3738;
  double t3744;
  double t3751;
  double t3752;
  double t3759;
  double t3760;
  double t3772;
  double t3780;
  double t3781;
  double t3519;
  double t3557;
  double t3558;
  double t3677;
  double t3678;
  double t3700;
  double t3701;
  double t3761;
  double t3792;
  double t3793;
  double t3713;
  double t3719;
  double t3807;
  double t3814;
  double t3819;
  double t3630;
  double t3640;
  double t3645;
  double t3514;
  double t3515;
  double t3516;
  double t3648;
  double t3649;
  double t3650;
  double t3970;
  double t4028;
  double t4033;
  double t4254;
  double t4256;
  double t4259;
  double t4276;
  double t4277;
  double t4285;
  double t3839;
  double t3849;
  double t3850;
  double t3857;
  double t4231;
  double t3913;
  double t3918;
  double t3925;
  double t3940;
  double t4235;
  double t4071;
  double t4072;
  double t4073;
  double t4074;
  double t4114;
  double t4115;
  double t4117;
  double t4128;
  double t1633;
  double t4546;
  double t4509;
  double t4527;
  double t4528;
  double t1778;
  double t4684;
  double t4685;
  double t4688;
  double t4695;
  double t4734;
  double t4739;
  double t4740;
  double t4744;
  double t4699;
  double t4702;
  double t4706;
  double t4735;
  double t4747;
  double t4753;
  double t4761;
  double t4763;
  double t4764;
  double t4680;
  double t4868;
  double t4871;
  double t4872;
  double t4875;
  double t4877;
  double t4882;
  double t4883;
  double t4888;
  double t4895;
  double t4901;
  double t4902;
  double t4905;
  double t4906;
  double t4911;
  double t4768;
  double t4889;
  double t4890;
  double t4893;
  double t4774;
  double t4776;
  double t4904;
  double t4913;
  double t4914;
  double t4920;
  double t4921;
  double t4922;
  double t4791;
  double t4803;
  double t4808;
  double t4816;
  double t4234;
  double t4247;
  double t4297;
  double t4317;
  double t4381;
  double t4387;
  double t4445;
  double t4451;
  double t5053;
  double t5055;
  double t3646;
  double t3683;
  double t3859;
  double t3864;
  double t5109;
  double t5117;
  double t5132;
  double t5159;
  double t5169;
  double t4034;
  double t4037;
  double t4082;
  double t4083;
  double t5253;
  double t5258;
  double t5259;
  double t4712;
  double t4769;
  double t4792;
  double t4807;
  double t5470;
  double t4894;
  double t5484;
  double t5486;
  double t4935;
  double t5535;
  double t4946;
  double t5570;
  double t5595;
  double t4955;
  double t5963;
  double t5977;
  double t5986;
  double t5989;
  double t6014;
  double t6015;
  double t6022;
  double t6024;
  double t6148;
  double t6149;
  double t6150;
  double t6152;
  double t6154;
  double t6156;
  t334 = Cos(var1[14]);
  t346 = Sin(var1[13]);
  t430 = -1.*t334*t346;
  t432 = Cos(var1[13]);
  t433 = Sin(var1[14]);
  t443 = -1.*t432*t433;
  t468 = 0. + t430 + t443;
  t111 = Cos(var1[4]);
  t148 = Cos(var1[12]);
  t292 = Cos(var1[5]);
  t537 = Sin(var1[12]);
  t571 = t432*t334;
  t596 = -1.*t346*t433;
  t600 = 0. + t571 + t596;
  t544 = Sin(var1[5]);
  t1100 = t430 + t443;
  t1077 = Sin(var1[4]);
  t1377 = -1.*t432*t334;
  t1401 = t346*t433;
  t1448 = t1377 + t1401;
  t1063 = t571 + t596;
  t1097 = t1063*t1077;
  t1125 = t292*t537*t1100;
  t1127 = -1.*t148*t1100*t544;
  t1136 = t1125 + t1127;
  t1347 = t111*t1136;
  t1350 = t1097 + t1347;
  t1353 = 0.004820000000000004*t1350;
  t1374 = t1100*t1077;
  t1470 = t292*t537*t1448;
  t1474 = -1.*t148*t1448*t544;
  t1500 = t1470 + t1474;
  t1504 = t111*t1500;
  t1510 = t1374 + t1504;
  t1514 = -0.03856*t1510;
  t1518 = t1353 + t1514;
  t881 = t537*t468;
  t890 = 0. + t881;
  t681 = t148*t468;
  t683 = 0. + t681;
  t994 = t537*t600;
  t1009 = 0. + t994;
  t984 = t148*t600;
  t986 = 0. + t984;
  t494 = t148*t292*t468;
  t549 = t537*t468*t544;
  t566 = t494 + t549;
  t1832 = Cos(var1[3]);
  t2082 = Sin(var1[3]);
  t602 = t148*t292*t600;
  t614 = t537*t600*t544;
  t646 = t602 + t614;
  t1542 = t292*t890;
  t1590 = -1.*t683*t544;
  t1603 = 0. + t1542 + t1590;
  t1656 = t334*t346;
  t1661 = t432*t433;
  t1669 = 0. + t1656 + t1661;
  t1682 = t292*t1009;
  t1684 = -1.*t986*t544;
  t1705 = 0. + t1682 + t1684;
  t689 = -1.*t292*t683;
  t891 = -1.*t890*t544;
  t931 = t689 + t891;
  t990 = -1.*t292*t986;
  t1025 = -1.*t1009*t544;
  t1050 = t990 + t1025;
  t3034 = t148*t292*t1100;
  t3037 = t537*t1100*t544;
  t3038 = t3034 + t3037;
  t3051 = t1832*t3038;
  t3060 = t111*t1063;
  t3065 = -1.*t1077*t1136;
  t3066 = t3060 + t3065;
  t3072 = -1.*t2082*t3066;
  t3077 = t3051 + t3072;
  t3078 = 0.004820000000000004*t3077;
  t3079 = t148*t292*t1448;
  t3082 = t537*t1448*t544;
  t3087 = t3079 + t3082;
  t3091 = t1832*t3087;
  t3185 = t111*t1100;
  t3204 = -1.*t1077*t1500;
  t3205 = t3185 + t3204;
  t3215 = -1.*t2082*t3205;
  t3218 = t3091 + t3215;
  t3225 = -0.03856*t3218;
  t3226 = t3078 + t3225;
  t1534 = t111*t600;
  t1610 = -1.*t1077*t1603;
  t1680 = t111*t1669;
  t1756 = -1.*t1077*t1705;
  t1928 = -1.*t292*t537*t468;
  t1939 = t148*t468*t544;
  t2040 = t1928 + t1939;
  t2144 = -1.*t292*t537*t600;
  t2166 = t148*t600*t544;
  t2226 = t2144 + t2166;
  t2480 = -1.*t600*t1077;
  t2483 = -1.*t111*t1603;
  t2488 = t2480 + t2483;
  t2492 = -1.*t1669*t1077;
  t2494 = -1.*t111*t1705;
  t2518 = t2492 + t2494;
  t2573 = t1542 + t1590;
  t2714 = t1682 + t1684;
  t3446 = t2082*t3038;
  t3453 = t1832*t3066;
  t3454 = t3446 + t3453;
  t3455 = 0.004820000000000004*t3454;
  t3463 = t2082*t3087;
  t3468 = t1832*t3205;
  t3473 = t3463 + t3468;
  t3474 = -0.03856*t3473;
  t3475 = t3455 + t3474;
  t3241 = t292*t683;
  t3245 = t890*t544;
  t3247 = 0. + t3241 + t3245;
  t3259 = 0. + t1534 + t1610;
  t3265 = t292*t986;
  t3276 = t1009*t544;
  t3277 = 0. + t3265 + t3276;
  t3281 = 0. + t1680 + t1756;
  t3585 = -1.*t334;
  t3590 = 1. + t3585;
  t3578 = -0.194401*t346;
  t3595 = -0.336601*t3590;
  t3601 = -0.356601*t334;
  t3605 = -0.16*t433;
  t3607 = 0. + t3595 + t3601 + t3605;
  t3608 = -1.*t346*t3607;
  t3609 = -0.20833*t3590;
  t3618 = -0.36833*t334;
  t3619 = 0.020000000000000018*t433;
  t3624 = 0. + t3609 + t3618 + t3619;
  t3626 = t432*t3624;
  t3627 = 0. + t3578 + t3608 + t3626;
  t3637 = 0.032875*t537;
  t3638 = t148*t3627;
  t3639 = t3637 + t3638;
  t3660 = t292*t3639;
  t3565 = 0.032875*t148;
  t3628 = -1.*t537*t3627;
  t3629 = t3565 + t3628;
  t3529 = 0. + t148;
  t3517 = -1.*t537;
  t3518 = 0. + t3517;
  t3684 = -1.*t3629*t544;
  t3685 = t3660 + t3684;
  t3688 = t3529*t292;
  t3689 = -1.*t3518*t544;
  t3690 = 0. + t3688 + t3689;
  t3661 = -1.*t148;
  t3667 = 1. + t3661;
  t3669 = -0.081715*t3667;
  t3670 = -0.11459*t148;
  t3673 = t537*t3627;
  t3676 = t3669 + t3670 + t3673;
  t3730 = -1.*t292*t537;
  t3731 = t148*t544;
  t3734 = t3730 + t3731;
  t3738 = -1.*t432;
  t3744 = 1. + t3738;
  t3751 = -0.194401*t3744;
  t3752 = t432*t3607;
  t3759 = t346*t3624;
  t3760 = 0. + t3751 + t3752 + t3759;
  t3772 = t292*t3676;
  t3780 = -1.*t3639*t544;
  t3781 = 0. + t3772 + t3780;
  t3519 = t292*t3518;
  t3557 = t3529*t544;
  t3558 = 0. + t3519 + t3557;
  t3677 = t3676*t544;
  t3678 = 0. + t3660 + t3677;
  t3700 = t111*t3690;
  t3701 = 0. + t3700;
  t3761 = t3760*t1077;
  t3792 = t111*t3781;
  t3793 = 0. + t3761 + t3792;
  t3713 = -1.*t1077*t3690;
  t3719 = 0. + t3713;
  t3807 = t111*t3760;
  t3814 = -1.*t1077*t3781;
  t3819 = 0. + t3807 + t3814;
  t3630 = t292*t3629;
  t3640 = t3639*t544;
  t3645 = t3630 + t3640;
  t3514 = t600*t1077;
  t3515 = t111*t1603;
  t3516 = 0. + t3514 + t3515;
  t3648 = -1.*t148*t292;
  t3649 = -1.*t537*t544;
  t3650 = t3648 + t3649;
  t3970 = t1669*t1077;
  t4028 = t111*t1705;
  t4033 = 0. + t3970 + t4028;
  t4254 = -1.*t292*t3639;
  t4256 = -1.*t3676*t544;
  t4259 = t4254 + t4256;
  t4276 = -1.*t292*t3518;
  t4277 = -1.*t3529*t544;
  t4285 = t4276 + t4277;
  t3839 = t3558*t3678;
  t3849 = t3701*t3793;
  t3850 = t3719*t3819;
  t3857 = t3839 + t3849 + t3850;
  t4231 = t3772 + t3780;
  t3913 = -1.*t3678*t3247;
  t3918 = -1.*t3793*t3516;
  t3925 = -1.*t3819*t3259;
  t3940 = t3913 + t3918 + t3925;
  t4235 = t3688 + t3689;
  t4071 = -1.*t3558*t3678;
  t4072 = -1.*t3701*t3793;
  t4073 = -1.*t3719*t3819;
  t4074 = t4071 + t4072 + t4073;
  t4114 = t3678*t3277;
  t4115 = t3793*t4033;
  t4117 = t3819*t3281;
  t4128 = t4114 + t4115 + t4117;
  t1633 = t1534 + t1610;
  t4546 = t3807 + t3814;
  t4509 = -1.*t3760*t1077;
  t4527 = -1.*t111*t3781;
  t4528 = t4509 + t4527;
  t1778 = t1680 + t1756;
  t4684 = -0.194401*t432;
  t4685 = -1.*t432*t3607;
  t4688 = -1.*t346*t3624;
  t4695 = t4684 + t4685 + t4688;
  t4734 = t3578 + t3608 + t3626;
  t4739 = t292*t537*t4695;
  t4740 = -1.*t148*t4695*t544;
  t4744 = t4739 + t4740;
  t4699 = t148*t292*t4695;
  t4702 = t537*t4695*t544;
  t4706 = t4699 + t4702;
  t4735 = t4734*t1077;
  t4747 = t111*t4744;
  t4753 = t4735 + t4747;
  t4761 = t111*t4734;
  t4763 = -1.*t1077*t4744;
  t4764 = t4761 + t4763;
  t4680 = t1510*t3857;
  t4868 = -0.16*t334;
  t4871 = t4868 + t3619;
  t4872 = -1.*t346*t4871;
  t4875 = 0.020000000000000018*t334;
  t4877 = 0.16*t433;
  t4882 = t4875 + t4877;
  t4883 = t432*t4882;
  t4888 = t4872 + t4883;
  t4895 = t432*t4871;
  t4901 = t346*t4882;
  t4902 = t4895 + t4901;
  t4905 = t292*t537*t4888;
  t4906 = -1.*t148*t4888*t544;
  t4911 = t4905 + t4906;
  t4768 = -1.*t3678*t3087;
  t4889 = t148*t292*t4888;
  t4890 = t537*t4888*t544;
  t4893 = t4889 + t4890;
  t4774 = -1.*t3793*t1510;
  t4776 = -1.*t3819*t3205;
  t4904 = t4902*t1077;
  t4913 = t111*t4911;
  t4914 = t4904 + t4913;
  t4920 = t111*t4902;
  t4921 = -1.*t1077*t4911;
  t4922 = t4920 + t4921;
  t4791 = t1350*t4074;
  t4803 = t3678*t3038;
  t4808 = t3793*t1350;
  t4816 = t3819*t3066;
  t4234 = t3558*t4231;
  t4247 = t4235*t3678;
  t4297 = -1.*t3678*t2573;
  t4317 = -1.*t4231*t3247;
  t4381 = -1.*t3558*t4231;
  t4387 = -1.*t4235*t3678;
  t4445 = t3678*t2714;
  t4451 = t4231*t3277;
  t5053 = t3690*t3781;
  t5055 = 0. + t5053 + t3839;
  t3646 = t3558*t3645;
  t3683 = t3650*t3678;
  t3859 = -1.*t3678*t2040;
  t3864 = -1.*t3645*t3247;
  t5109 = -1.*t3760*t600;
  t5117 = -1.*t3781*t1603;
  t5132 = t5109 + t5117 + t3913;
  t5159 = -1.*t3690*t3781;
  t5169 = 0. + t5159 + t4071;
  t4034 = -1.*t3558*t3645;
  t4037 = -1.*t3650*t3678;
  t4082 = t3678*t2226;
  t4083 = t3645*t3277;
  t5253 = t3760*t1669;
  t5258 = t3781*t1705;
  t5259 = t5253 + t5258 + t4114;
  t4712 = t3558*t4706;
  t4769 = -1.*t4706*t3247;
  t4792 = -1.*t3558*t4706;
  t4807 = t4706*t3277;
  t5470 = t3087*t5055;
  t4894 = t3558*t4893;
  t5484 = -1.*t3760*t1100;
  t5486 = -1.*t3781*t1500;
  t4935 = -1.*t4893*t3247;
  t5535 = t3038*t5169;
  t4946 = -1.*t3558*t4893;
  t5570 = t3760*t1063;
  t5595 = t3781*t1136;
  t4955 = t4893*t3277;
  t5963 = -1.*t3518*t3639;
  t5977 = -1.*t3529*t3676;
  t5986 = 0. + t5963 + t5977;
  t5989 = t5986*t1063;
  t6014 = t3518*t3639;
  t6015 = t3529*t3676;
  t6022 = 0. + t6014 + t6015;
  t6024 = t6022*t1100;
  t6148 = 0.00015845750000000012*t1100;
  t6149 = -0.11459*t1063;
  t6150 = -0.081715*t1448;
  t6152 = t6149 + t6150;
  t6154 = -0.03856*t6152;
  t6156 = t6148 + t6154;
  p_output1[0]=var2[14]*(-0.5*(-0.03856*t1633 + 0.004820000000000004*t1778)*var2[4] - 0.5*(0.004820000000000004*t1050*t111 - 0.03856*t111*t931)*var2[5] - 0.5*(-0.03856*t111*t566 + 0.004820000000000004*t111*t646)*var2[12] - 0.5*t1518*var2[13] - 0.5*t1518*var2[14]);
  p_output1[1]=var2[14]*(-0.5*(-0.03856*(-1.*t2082*t3247 - 1.*t1832*t3259) + 0.004820000000000004*(-1.*t2082*t3277 - 1.*t1832*t3281))*var2[3] - 0.5*(0.03856*t2082*t2488 - 0.004820000000000004*t2082*t2518)*var2[4] - 0.5*(0.004820000000000004*(t1050*t1077*t2082 + t1832*t2714) - 0.03856*(t1832*t2573 + t1077*t2082*t931))*var2[5] - 0.5*(-0.03856*(t1832*t2040 + t1077*t2082*t566) + 0.004820000000000004*(t1832*t2226 + t1077*t2082*t646))*var2[12] - 0.5*t3226*var2[13] - 0.5*t3226*var2[14]);
  p_output1[2]=var2[14]*(-0.5*(-0.03856*(t1832*t3247 - 1.*t2082*t3259) + 0.004820000000000004*(t1832*t3277 - 1.*t2082*t3281))*var2[3] - 0.5*(-0.03856*t1832*t2488 + 0.004820000000000004*t1832*t2518)*var2[4] - 0.5*(0.004820000000000004*(-1.*t1050*t1077*t1832 + t2082*t2714) - 0.03856*(t2082*t2573 - 1.*t1077*t1832*t931))*var2[5] - 0.5*(-0.03856*(t2040*t2082 - 1.*t1077*t1832*t566) + 0.004820000000000004*(t2082*t2226 - 1.*t1077*t1832*t646))*var2[12] - 0.5*t3475*var2[13] - 0.5*t3475*var2[14]);
  p_output1[3]=var2[14]*(-0.5*(0.004820000000000004*(t1633*t3857 - 1.*t1077*t3690*t3940 + t3701*(-1.*t1633*t3793 - 1.*t2488*t3819 - 1.*t3259*t4528 - 1.*t3516*t4546) + t3516*(-1.*t1077*t3690*t3793 - 1.*t111*t3690*t3819 + t3719*t4528 + t3701*t4546)) - 0.03856*(t1778*t4074 - 1.*t1077*t3690*t4128 + t4033*(t1077*t3690*t3793 + t111*t3690*t3819 - 1.*t3719*t4528 - 1.*t3701*t4546) + t3701*(t1778*t3793 + t2518*t3819 + t3281*t4528 + t4033*t4546)))*var2[4] - 0.5*(-0.03856*(t1050*t111*t4074 + t111*t4128*t4285 + t4033*(-1.*t111*t3701*t4259 + t1077*t3719*t4259 - 1.*t111*t3793*t4285 + t1077*t3819*t4285 + t4381 + t4387) + t3701*(t1050*t111*t3793 - 1.*t1050*t1077*t3819 - 1.*t1077*t3281*t4259 + t111*t4033*t4259 + t4445 + t4451)) + 0.004820000000000004*(t111*t3940*t4285 + t3516*(t4234 + t4247 + t111*t3701*t4259 - 1.*t1077*t3719*t4259 + t111*t3793*t4285 - 1.*t1077*t3819*t4285) + t111*t3857*t931 + t3701*(t1077*t3259*t4259 - 1.*t111*t3516*t4259 + t4297 + t4317 - 1.*t111*t3793*t931 + t1077*t3819*t931)))*var2[5] - 0.5*(0.004820000000000004*(t3516*(t3646 + t3683 + t111*t3685*t3701 - 1.*t1077*t3685*t3719 + t111*t3734*t3793 - 1.*t1077*t3734*t3819) + t111*t3734*t3940 + t111*t3857*t566 + t3701*(t1077*t3259*t3685 - 1.*t111*t3516*t3685 + t3859 + t3864 - 1.*t111*t3793*t566 + t1077*t3819*t566)) - 0.03856*(t4033*(-1.*t111*t3685*t3701 + t1077*t3685*t3719 - 1.*t111*t3734*t3793 + t1077*t3734*t3819 + t4034 + t4037) + t111*t3734*t4128 + t111*t4074*t646 + t3701*(-1.*t1077*t3281*t3685 + t111*t3685*t4033 + t4082 + t4083 + t111*t3793*t646 - 1.*t1077*t3819*t646)))*var2[12] - 0.5*(0.004820000000000004*(t4680 + t3516*(t4712 + t3701*t4753 + t3719*t4764) + t3701*(-1.*t3516*t4753 - 1.*t3259*t4764 + t4768 + t4769 + t4774 + t4776)) - 0.03856*(t4791 + t4033*(-1.*t3701*t4753 - 1.*t3719*t4764 + t4792) + t3701*(t4033*t4753 + t3281*t4764 + t4803 + t4807 + t4808 + t4816)))*var2[13] - 0.5*(0.004820000000000004*(t4680 + t3516*(t4894 + t3701*t4914 + t3719*t4922) + t3701*(t4768 + t4774 + t4776 - 1.*t3516*t4914 - 1.*t3259*t4922 + t4935)) - 0.03856*(t4791 + t4033*(-1.*t3701*t4914 - 1.*t3719*t4922 + t4946) + t3701*(t4803 + t4808 + t4816 + t4033*t4914 + t3281*t4922 + t4955)))*var2[14]);
  p_output1[4]=var2[14]*(-0.5*(-0.03856*(t3277*(-1.*t3690*t4259 - 1.*t3781*t4285 + t4381 + t4387) + t3558*(t1050*t3781 + t1705*t4259 + t4445 + t4451) + t2714*t5169 + t4235*t5259) + 0.004820000000000004*(t3247*(t4234 + t4247 + t3690*t4259 + t3781*t4285) + t2573*t5055 + t4235*t5132 + t3558*(-1.*t1603*t4259 + t4297 + t4317 - 1.*t3781*t931)))*var2[5] - 0.5*(0.004820000000000004*(t3247*(t3646 + t3683 + t3685*t3690 + t3734*t3781) + t2040*t5055 + t3650*t5132 + t3558*(-1.*t1603*t3685 + t3859 + t3864 - 1.*t3781*t566)) - 0.03856*(t3277*(-1.*t3685*t3690 - 1.*t3734*t3781 + t4034 + t4037) + t2226*t5169 + t3650*t5259 + t3558*(t1705*t3685 + t4082 + t4083 + t3781*t646)))*var2[12] - 0.5*(-0.03856*(t3277*(-1.*t3690*t4744 + t4792) + t5535 + t3558*(t1669*t4734 + t1705*t4744 + t4803 + t4807 + t5570 + t5595)) + 0.004820000000000004*(t3247*(t4712 + t3690*t4744) + t5470 + t3558*(-1.*t1603*t4744 + t4768 + t4769 + t5484 + t5486 - 1.*t4734*t600)))*var2[13] - 0.5*(-0.03856*(t3277*(-1.*t3690*t4911 + t4946) + t5535 + t3558*(t4803 + t1669*t4902 + t1705*t4911 + t4955 + t5570 + t5595)) + 0.004820000000000004*(t3247*(t4894 + t3690*t4911) + t5470 + t3558*(t4768 - 1.*t1603*t4911 + t4935 + t5484 + t5486 - 1.*t4902*t600)))*var2[14]);
  p_output1[5]=var2[14]*(-0.5*(-0.03856*t1669*(-1.*t3518*t3629 + t148*t3639 - 1.*t3529*t3639 + t3676*t537) + 0.004820000000000004*(t3518*t3629 - 1.*t148*t3639 + t3529*t3639 - 1.*t3676*t537)*t600)*var2[12] - 0.5*(-0.03856*(t1669*(-1.*t148*t3518*t4695 - 1.*t3529*t4695*t537) + t5989) + 0.004820000000000004*((t148*t3518*t4695 + t3529*t4695*t537)*t600 + t6024))*var2[13] - 0.5*(-0.03856*(t1669*(-1.*t148*t3518*t4888 - 1.*t3529*t4888*t537) + t5989) + 0.004820000000000004*((t148*t3518*t4888 + t3529*t4888*t537)*t600 + t6024))*var2[14]);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=var2[14]*(-0.5*t6156*var2[13] - 0.5*t6156*var2[14]);
  p_output1[13]=-0.5*(-0.03856*(0.194401*t334 + t334*t3607 - 1.*t3624*t433 + t433*t4871 + t334*t4882) + 0.004820000000000004*(t334*t3624 + 0.194401*t433 + t3607*t433 - 1.*t334*t4871 + t433*t4882))*Power(var2[14],2);
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

#include "Ce1_vec15_plane.hh"

namespace SymFunction
{

void Ce1_vec15_plane_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
