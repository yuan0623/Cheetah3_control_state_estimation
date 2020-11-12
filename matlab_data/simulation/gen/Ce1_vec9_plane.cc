/*
 * Automatically Generated from Mathematica.
 * Fri 21 Dec 2018 15:11:44 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
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


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t163;
  double t256;
  double t391;
  double t416;
  double t439;
  double t506;
  double t525;
  double t80;
  double t94;
  double t120;
  double t677;
  double t695;
  double t887;
  double t901;
  double t952;
  double t1708;
  double t1830;
  double t1890;
  double t1900;
  double t2502;
  double t2510;
  double t2513;
  double t2394;
  double t2438;
  double t2452;
  double t2489;
  double t2496;
  double t2531;
  double t2546;
  double t2580;
  double t2594;
  double t2600;
  double t2604;
  double t2628;
  double t2656;
  double t2085;
  double t2091;
  double t2133;
  double t2206;
  double t2209;
  double t2215;
  double t610;
  double t724;
  double t831;
  double t2738;
  double t1044;
  double t1088;
  double t1237;
  double t1386;
  double t1453;
  double t1498;
  double t1522;
  double t1576;
  double t1604;
  double t1698;
  double t1946;
  double t1978;
  double t2162;
  double t2267;
  double t2280;
  double t3126;
  double t3127;
  double t3130;
  double t3141;
  double t3148;
  double t3152;
  double t3155;
  double t3174;
  double t3175;
  double t3176;
  double t3178;
  double t3203;
  double t3214;
  double t3274;
  double t3277;
  double t2667;
  double t2669;
  double t2676;
  double t2682;
  double t2689;
  double t2703;
  double t2914;
  double t2921;
  double t2923;
  double t2975;
  double t2982;
  double t2985;
  double t3552;
  double t3553;
  double t3554;
  double t3556;
  double t3559;
  double t3560;
  double t3562;
  double t3563;
  double t3564;
  double t3696;
  double t3700;
  double t3695;
  double t3705;
  double t3707;
  double t3708;
  double t3710;
  double t3714;
  double t3725;
  double t3727;
  double t3728;
  double t3739;
  double t3744;
  double t3745;
  double t3673;
  double t3748;
  double t3749;
  double t3778;
  double t3810;
  double t3825;
  double t3852;
  double t3855;
  double t3856;
  double t3889;
  double t3896;
  double t3897;
  double t4043;
  double t4092;
  double t4146;
  double t4211;
  double t4268;
  double t4278;
  double t4282;
  double t4292;
  double t4312;
  double t3660;
  double t3662;
  double t3666;
  double t3750;
  double t4400;
  double t4401;
  double t4418;
  double t4439;
  double t4443;
  double t3870;
  double t3879;
  double t4200;
  double t4316;
  double t4318;
  double t4361;
  double t4364;
  double t4366;
  double t4397;
  double t4430;
  double t4431;
  double t4436;
  double t4450;
  double t4459;
  double t4461;
  double t4466;
  double t4762;
  double t4765;
  double t4768;
  double t3884;
  double t4339;
  double t4367;
  double t4372;
  double t4877;
  double t4878;
  double t4879;
  double t4888;
  double t4901;
  double t4906;
  double t4674;
  double t4677;
  double t4685;
  double t4686;
  double t4696;
  double t4709;
  double t4716;
  double t4720;
  double t4831;
  double t4838;
  double t4840;
  double t4845;
  double t5039;
  double t5042;
  double t5045;
  double t5186;
  double t5187;
  double t5189;
  double t5198;
  double t5199;
  double t5201;
  double t5203;
  double t5240;
  double t5241;
  double t5242;
  double t5227;
  double t5230;
  double t5231;
  double t5215;
  double t5217;
  double t5219;
  double t5182;
  double t5482;
  double t5483;
  double t5495;
  double t5498;
  double t5506;
  double t5507;
  double t5514;
  double t5515;
  double t5577;
  double t5587;
  double t5592;
  double t5644;
  double t5662;
  double t5684;
  double t5252;
  double t5524;
  double t5525;
  double t5557;
  double t5258;
  double t5263;
  double t5698;
  double t5704;
  double t5705;
  double t5594;
  double t5685;
  double t5696;
  double t5326;
  double t5365;
  double t5433;
  double t5443;
  double t4432;
  double t4876;
  double t4468;
  double t4494;
  double t4498;
  double t4937;
  double t4731;
  double t4974;
  double t4746;
  double t4771;
  double t4780;
  double t5006;
  double t5906;
  double t5909;
  double t4886;
  double t4929;
  double t5940;
  double t5942;
  double t5944;
  double t5960;
  double t5962;
  double t4983;
  double t5002;
  double t5982;
  double t5983;
  double t5984;
  double t5244;
  double t5254;
  double t5290;
  double t5328;
  double t6122;
  double t5574;
  double t6160;
  double t6166;
  double t5729;
  double t5767;
  double t6206;
  double t6208;
  double t5788;
  double t6221;
  double t6367;
  double t6368;
  double t6369;
  double t6372;
  double t6375;
  double t6378;
  double t6384;
  double t6385;
  double t6387;
  double t6525;
  double t6528;
  double t6531;
  double t6535;
  double t6538;
  double t6541;
  t163 = Cos(var1[8]);
  t256 = Sin(var1[7]);
  t391 = -1.*t163*t256;
  t416 = Cos(var1[7]);
  t439 = Sin(var1[8]);
  t506 = -1.*t416*t439;
  t525 = t391 + t506;
  t80 = Cos(var1[4]);
  t94 = Cos(var1[5]);
  t120 = Cos(var1[6]);
  t677 = Sin(var1[5]);
  t695 = Sin(var1[6]);
  t887 = t416*t163;
  t901 = -1.*t256*t439;
  t952 = t887 + t901;
  t1708 = Sin(var1[4]);
  t1830 = -1.*t120*t677*t525;
  t1890 = t94*t695*t525;
  t1900 = t1830 + t1890;
  t2502 = -1.*t416*t163;
  t2510 = t256*t439;
  t2513 = t2502 + t2510;
  t2394 = t1708*t952;
  t2438 = t80*t1900;
  t2452 = t2394 + t2438;
  t2489 = 0.00482*t2452;
  t2496 = t1708*t525;
  t2531 = -1.*t120*t677*t2513;
  t2546 = t94*t695*t2513;
  t2580 = t2531 + t2546;
  t2594 = t80*t2580;
  t2600 = t2496 + t2594;
  t2604 = -0.03856*t2600;
  t2628 = t2489 + t2604;
  t2656 = Sin(var1[3]);
  t2085 = t163*t256;
  t2091 = t416*t439;
  t2133 = t2085 + t2091;
  t2206 = -1.*t120*t677*t952;
  t2209 = t94*t695*t952;
  t2215 = t2206 + t2209;
  t610 = -1.*t94*t120*t525;
  t724 = -1.*t677*t695*t525;
  t831 = t610 + t724;
  t2738 = Cos(var1[3]);
  t1044 = -1.*t94*t120*t952;
  t1088 = -1.*t677*t695*t952;
  t1237 = t1044 + t1088;
  t1386 = t94*t120*t525;
  t1453 = t677*t695*t525;
  t1498 = t1386 + t1453;
  t1522 = t94*t120*t952;
  t1576 = t677*t695*t952;
  t1604 = t1522 + t1576;
  t1698 = t80*t952;
  t1946 = -1.*t1708*t1900;
  t1978 = t1698 + t1946;
  t2162 = t80*t2133;
  t2267 = -1.*t1708*t2215;
  t2280 = t2162 + t2267;
  t3126 = t2738*t1498;
  t3127 = -1.*t2656*t1978;
  t3130 = t3126 + t3127;
  t3141 = 0.00482*t3130;
  t3148 = t94*t120*t2513;
  t3152 = t677*t695*t2513;
  t3155 = t3148 + t3152;
  t3174 = t2738*t3155;
  t3175 = t80*t525;
  t3176 = -1.*t1708*t2580;
  t3178 = t3175 + t3176;
  t3203 = -1.*t2656*t3178;
  t3214 = t3174 + t3203;
  t3274 = -0.03856*t3214;
  t3277 = t3141 + t3274;
  t2667 = -1.*t1708*t952;
  t2669 = -1.*t80*t1900;
  t2676 = t2667 + t2669;
  t2682 = -1.*t1708*t2133;
  t2689 = -1.*t80*t2215;
  t2703 = t2682 + t2689;
  t2914 = t120*t677*t525;
  t2921 = -1.*t94*t695*t525;
  t2923 = t2914 + t2921;
  t2975 = t120*t677*t952;
  t2982 = -1.*t94*t695*t952;
  t2985 = t2975 + t2982;
  t3552 = t2656*t1498;
  t3553 = t2738*t1978;
  t3554 = t3552 + t3553;
  t3556 = 0.00482*t3554;
  t3559 = t2656*t3155;
  t3560 = t2738*t3178;
  t3562 = t3559 + t3560;
  t3563 = -0.03856*t3562;
  t3564 = t3556 + t3563;
  t3696 = -1.*t163;
  t3700 = 1. + t3696;
  t3695 = 0.242889*t256;
  t3705 = 0.100689*t3700;
  t3707 = 0.080689*t163;
  t3708 = -0.16*t439;
  t3710 = t3705 + t3707 + t3708;
  t3714 = -1.*t256*t3710;
  t3725 = -0.20833*t3700;
  t3727 = -0.36833*t163;
  t3728 = 0.02*t439;
  t3739 = t3725 + t3727 + t3728;
  t3744 = t416*t3739;
  t3745 = t3695 + t3714 + t3744;
  t3673 = 0.032875*t695;
  t3748 = t120*t3745;
  t3749 = t3673 + t3748;
  t3778 = -1.*t120;
  t3810 = 1. + t3778;
  t3825 = -0.081715*t3810;
  t3852 = -0.11459*t120;
  t3855 = t695*t3745;
  t3856 = t3825 + t3852 + t3855;
  t3889 = t94*t120;
  t3896 = t677*t695;
  t3897 = t3889 + t3896;
  t4043 = -1.*t677*t3749;
  t4092 = t94*t3856;
  t4146 = t4043 + t4092;
  t4211 = -1.*t416;
  t4268 = 1. + t4211;
  t4278 = 0.242889*t4268;
  t4282 = t416*t3710;
  t4292 = t256*t3739;
  t4312 = t4278 + t4282 + t4292;
  t3660 = t120*t677;
  t3662 = -1.*t94*t695;
  t3666 = t3660 + t3662;
  t3750 = t94*t3749;
  t4400 = 0.032875*t120;
  t4401 = -1.*t695*t3745;
  t4418 = t4400 + t4401;
  t4439 = -1.*t677*t4418;
  t4443 = t3750 + t4439;
  t3870 = t677*t3856;
  t3879 = t3750 + t3870;
  t4200 = -1.*t1708*t4146;
  t4316 = t80*t4312;
  t4318 = t4200 + t4316;
  t4361 = t80*t4146;
  t4364 = t1708*t4312;
  t4366 = t4361 + t4364;
  t4397 = t677*t3749;
  t4430 = t94*t4418;
  t4431 = t4397 + t4430;
  t4436 = Power(t80,2);
  t4450 = Power(t1708,2);
  t4459 = -1.*t94*t120;
  t4461 = -1.*t677*t695;
  t4466 = t4459 + t4461;
  t4762 = t1708*t2133;
  t4765 = t80*t2215;
  t4768 = t4762 + t4765;
  t3884 = t3666*t3879;
  t4339 = -1.*t1708*t3897*t4318;
  t4367 = t80*t3897*t4366;
  t4372 = t3884 + t4339 + t4367;
  t4877 = -1.*t94*t3749;
  t4878 = -1.*t677*t3856;
  t4879 = t4877 + t4878;
  t4888 = -1.*t120*t677;
  t4901 = t94*t695;
  t4906 = t4888 + t4901;
  t4674 = -1.*t3879*t1498;
  t4677 = -1.*t4366*t2452;
  t4685 = -1.*t4318*t1978;
  t4686 = t4674 + t4677 + t4685;
  t4696 = -1.*t3666*t3879;
  t4709 = t1708*t3897*t4318;
  t4716 = -1.*t80*t3897*t4366;
  t4720 = t4696 + t4709 + t4716;
  t4831 = t3879*t1604;
  t4838 = t4366*t4768;
  t4840 = t4318*t2280;
  t4845 = t4831 + t4838 + t4840;
  t5039 = -1.*t80*t4146;
  t5042 = -1.*t1708*t4312;
  t5045 = t5039 + t5042;
  t5186 = 0.242889*t416;
  t5187 = -1.*t416*t3710;
  t5189 = -1.*t256*t3739;
  t5198 = t5186 + t5187 + t5189;
  t5199 = -1.*t120*t677*t5198;
  t5201 = t94*t695*t5198;
  t5203 = t5199 + t5201;
  t5240 = t94*t120*t5198;
  t5241 = t677*t695*t5198;
  t5242 = t5240 + t5241;
  t5227 = t80*t5203;
  t5230 = t1708*t3745;
  t5231 = t5227 + t5230;
  t5215 = -1.*t1708*t5203;
  t5217 = t80*t3745;
  t5219 = t5215 + t5217;
  t5182 = t4720*t2452;
  t5482 = -0.16*t163;
  t5483 = t5482 + t3728;
  t5495 = -1.*t256*t5483;
  t5498 = 0.02*t163;
  t5506 = 0.16*t439;
  t5507 = t5498 + t5506;
  t5514 = t416*t5507;
  t5515 = t5495 + t5514;
  t5577 = -1.*t120*t677*t5515;
  t5587 = t94*t695*t5515;
  t5592 = t5577 + t5587;
  t5644 = t416*t5483;
  t5662 = t256*t5507;
  t5684 = t5644 + t5662;
  t5252 = t3879*t1498;
  t5524 = t94*t120*t5515;
  t5525 = t677*t695*t5515;
  t5557 = t5524 + t5525;
  t5258 = t4366*t2452;
  t5263 = t4318*t1978;
  t5698 = t80*t5592;
  t5704 = t1708*t5684;
  t5705 = t5698 + t5704;
  t5594 = -1.*t1708*t5592;
  t5685 = t80*t5684;
  t5696 = t5594 + t5685;
  t5326 = t4372*t2600;
  t5365 = -1.*t3879*t3155;
  t5433 = -1.*t4366*t2600;
  t5443 = -1.*t4318*t3178;
  t4432 = t3666*t4431;
  t4876 = t3666*t4146;
  t4468 = t4466*t3879;
  t4494 = -1.*t3879*t2923;
  t4498 = -1.*t4431*t1498;
  t4937 = -1.*t4146*t1498;
  t4731 = -1.*t3666*t4431;
  t4974 = -1.*t3666*t4146;
  t4746 = -1.*t4466*t3879;
  t4771 = t3879*t2985;
  t4780 = t4431*t1604;
  t5006 = t4146*t1604;
  t5906 = t3897*t4146;
  t5909 = t5906 + t3884;
  t4886 = t3897*t3879;
  t4929 = -1.*t3879*t1900;
  t5940 = -1.*t4312*t952;
  t5942 = -1.*t4146*t1900;
  t5944 = t5940 + t5942 + t4674;
  t5960 = -1.*t3897*t4146;
  t5962 = t5960 + t4696;
  t4983 = -1.*t3897*t3879;
  t5002 = t3879*t2215;
  t5982 = t4312*t2133;
  t5983 = t4146*t2215;
  t5984 = t5982 + t5983 + t4831;
  t5244 = -1.*t3666*t5242;
  t5254 = t5242*t1604;
  t5290 = t3666*t5242;
  t5328 = -1.*t5242*t1498;
  t6122 = t5962*t1498;
  t5574 = -1.*t3666*t5557;
  t6160 = t4312*t952;
  t6166 = t4146*t1900;
  t5729 = t5557*t1604;
  t5767 = t3666*t5557;
  t6206 = t5909*t3155;
  t6208 = -1.*t4312*t525;
  t5788 = -1.*t5557*t1498;
  t6221 = -1.*t4146*t2580;
  t6367 = -1.*t695*t3749;
  t6368 = t120*t3856;
  t6369 = t6367 + t6368;
  t6372 = 0.00482*t6369*t525;
  t6375 = t695*t3749;
  t6378 = -1.*t120*t3856;
  t6384 = t6375 + t6378;
  t6385 = -0.03856*t6384*t952;
  t6387 = t6372 + t6385;
  t6525 = 0.0001584575*t525;
  t6528 = -0.11459*t952;
  t6531 = -0.081715*t2513;
  t6535 = t6528 + t6531;
  t6538 = -0.03856*t6535;
  t6541 = t6525 + t6538;
  p_output1[0]=var2[8]*(-0.5*(-0.03856*t1978 + 0.00482*t2280)*var2[4] - 0.5*(0.00482*t1237*t80 - 0.03856*t80*t831)*var2[5] - 0.5*(-0.03856*t1498*t80 + 0.00482*t1604*t80)*var2[6] - 0.5*t2628*var2[7] - 0.5*t2628*var2[8]);
  p_output1[1]=var2[8]*(-0.5*(-0.03856*(-1.*t1498*t2656 - 1.*t1978*t2738) + 0.00482*(-1.*t1604*t2656 - 1.*t2280*t2738))*var2[3] - 0.5*(0.03856*t2656*t2676 - 0.00482*t2656*t2703)*var2[4] - 0.5*(0.00482*(t1237*t1708*t2656 + t2215*t2738) - 0.03856*(t1900*t2738 + t1708*t2656*t831))*var2[5] - 0.5*(-0.03856*(t1498*t1708*t2656 + t2738*t2923) + 0.00482*(t1604*t1708*t2656 + t2738*t2985))*var2[6] - 0.5*t3277*var2[7] - 0.5*t3277*var2[8]);
  p_output1[2]=var2[8]*(-0.5*(0.00482*(-1.*t2280*t2656 + t1604*t2738) - 0.03856*t3130)*var2[3] - 0.5*(-0.03856*t2676*t2738 + 0.00482*t2703*t2738)*var2[4] - 0.5*(0.00482*(t2215*t2656 - 1.*t1237*t1708*t2738) - 0.03856*(t1900*t2656 - 1.*t1708*t2738*t831))*var2[5] - 0.5*(-0.03856*(-1.*t1498*t1708*t2738 + t2656*t2923) + 0.00482*(-1.*t1604*t1708*t2738 + t2656*t2985))*var2[6] - 0.5*t3564*var2[7] - 0.5*t3564*var2[8]);
  p_output1[3]=var2[8]*(-0.5*(0.00482*(t1978*t4372 - 1.*t1708*t3897*t4686 + t2452*(-1.*t1708*t3897*t4366 - 1.*t1708*t3897*t5045) + t3897*(-1.*t2452*t4318 - 1.*t2676*t4318 - 1.*t1978*t4366 - 1.*t1978*t5045)*t80) - 0.03856*(t2280*t4720 - 1.*t1708*t3897*t4845 + t4768*(t1708*t3897*t4366 + t1708*t3897*t5045) + t3897*(t2703*t4318 + t2280*t4366 + t4318*t4768 + t2280*t5045)*t80))*var2[4] - 0.5*(-0.03856*(t1237*t4720*t80 + t4845*t4906*t80 + t3897*t80*(-1.*t1237*t1708*t4318 - 1.*t1708*t2280*t4879 + t5002 + t5006 + t1237*t4366*t80 + t4768*t4879*t80) + t4768*(-1.*t3897*t4436*t4879 - 1.*t3897*t4450*t4879 + t1708*t4318*t4906 + t4974 + t4983 - 1.*t4366*t4906*t80)) + 0.00482*(t4686*t4906*t80 + t2452*(t4876 + t3897*t4436*t4879 + t3897*t4450*t4879 + t4886 - 1.*t1708*t4318*t4906 + t4366*t4906*t80) + t4372*t80*t831 + t3897*t80*(t1708*t1978*t4879 + t4929 + t4937 - 1.*t2452*t4879*t80 + t1708*t4318*t831 - 1.*t4366*t80*t831)))*var2[5] - 0.5*(0.00482*(t1498*t4372*t80 + t3666*t4686*t80 + t2452*(-1.*t1708*t3666*t4318 + t4432 + t3897*t4436*t4443 + t3897*t4443*t4450 + t4468 + t3666*t4366*t80) + t3897*t80*(t1498*t1708*t4318 + t1708*t1978*t4443 + t4494 + t4498 - 1.*t1498*t4366*t80 - 1.*t2452*t4443*t80)) - 0.03856*(t1604*t4720*t80 + t3666*t4845*t80 + t4768*(t1708*t3666*t4318 - 1.*t3897*t4436*t4443 - 1.*t3897*t4443*t4450 + t4731 + t4746 - 1.*t3666*t4366*t80) + t3897*t80*(-1.*t1604*t1708*t4318 - 1.*t1708*t2280*t4443 + t4771 + t4780 + t1604*t4366*t80 + t4443*t4768*t80)))*var2[6] - 0.5*(-0.03856*(t5182 + t3897*(t2280*t5219 + t4768*t5231 + t5252 + t5254 + t5258 + t5263)*t80 + t4768*(t1708*t3897*t5219 + t5244 - 1.*t3897*t5231*t80)) + 0.00482*(t5326 + t3897*(-1.*t1978*t5219 - 1.*t2452*t5231 + t5328 + t5365 + t5433 + t5443)*t80 + t2452*(-1.*t1708*t3897*t5219 + t5290 + t3897*t5231*t80)))*var2[7] - 0.5*(-0.03856*(t5182 + t3897*(t5252 + t5258 + t5263 + t2280*t5696 + t4768*t5705 + t5729)*t80 + t4768*(t5574 + t1708*t3897*t5696 - 1.*t3897*t5705*t80)) + 0.00482*(t5326 + t3897*(t5365 + t5433 + t5443 - 1.*t1978*t5696 - 1.*t2452*t5705 + t5788)*t80 + t2452*(-1.*t1708*t3897*t5696 + t5767 + t3897*t5705*t80)))*var2[8]);
  p_output1[4]=var2[8]*(-0.5*(-0.03856*(t1604*(-1.*t3897*t4879 - 1.*t4146*t4906 + t4974 + t4983) + t3666*(t1237*t4146 + t2215*t4879 + t5002 + t5006) + t2215*t5962 + t3897*t5984) + 0.00482*(t1498*(t4876 + t3897*t4879 + t4886 + t4146*t4906) + t1900*t5909 + t3897*t5944 + t3666*(-1.*t1900*t4879 + t4929 + t4937 - 1.*t4146*t831)))*var2[5] - 0.5*(0.00482*(t1498*(t4432 + t3897*t4443 + t4468 + t4876) + t3666*(-1.*t1900*t4443 + t4494 + t4498 + t4937) + t2923*t5909 + t4466*t5944) - 0.03856*(t1604*(-1.*t3897*t4443 + t4731 + t4746 + t4974) + t3666*(t2215*t4443 + t4771 + t4780 + t5006) + t2985*t5962 + t4466*t5984))*var2[6] - 0.5*(-0.03856*(t1604*(-1.*t3897*t5203 + t5244) + t6122 + t3666*(t2133*t3745 + t2215*t5203 + t5252 + t5254 + t6160 + t6166)) + 0.00482*(t1498*(t3897*t5203 + t5290) + t6206 + t3666*(-1.*t1900*t5203 + t5328 + t5365 + t6208 + t6221 - 1.*t3745*t952)))*var2[7] - 0.5*(-0.03856*(t1604*(t5574 - 1.*t3897*t5592) + t6122 + t3666*(t5252 + t2215*t5592 + t2133*t5684 + t5729 + t6160 + t6166)) + 0.00482*(t1498*(t3897*t5592 + t5767) + t6206 + t3666*(t5365 - 1.*t1900*t5592 + t5788 + t6208 + t6221 - 1.*t5684*t952)))*var2[8]);
  p_output1[5]=var2[8]*(-0.5*(-0.03856*t2133*(t3856*t695 + t4418*t695) + 0.00482*(-1.*t3856*t695 - 1.*t4418*t695)*t952)*var2[6] - 0.5*t6387*var2[7] - 0.5*t6387*var2[8]);
  p_output1[6]=var2[8]*(-0.5*t6541*var2[7] - 0.5*t6541*var2[8]);
  p_output1[7]=-0.5*(-0.03856*(-0.242889*t163 + t163*t3710 - 1.*t3739*t439 + t439*t5483 + t163*t5507) + 0.00482*(t163*t3739 - 0.242889*t439 + t3710*t439 - 1.*t163*t5483 + t439*t5507))*Power(var2[8],2);
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

#include "Ce1_vec9_plane.hh"

namespace SymFunction
{

void Ce1_vec9_plane_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
