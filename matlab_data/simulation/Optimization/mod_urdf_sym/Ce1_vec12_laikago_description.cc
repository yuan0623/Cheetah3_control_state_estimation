/*
 * Automatically Generated from Mathematica.
 * Tue 10 Dec 2019 16:01:25 GMT-05:00
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
  double t590;
  double t813;
  double t574;
  double t1210;
  double t172;
  double t225;
  double t521;
  double t652;
  double t1258;
  double t1638;
  double t1957;
  double t1975;
  double t1987;
  double t2020;
  double t2169;
  double t2280;
  double t1665;
  double t1921;
  double t1948;
  double t2599;
  double t2600;
  double t2624;
  double t2741;
  double t2748;
  double t2753;
  double t2689;
  double t2697;
  double t2717;
  double t2734;
  double t2754;
  double t2759;
  double t2764;
  double t2766;
  double t2768;
  double t2770;
  double t2785;
  double t2793;
  double t2083;
  double t2086;
  double t2088;
  double t2848;
  double t1641;
  double t1962;
  double t1963;
  double t2840;
  double t2667;
  double t2670;
  double t2676;
  double t2598;
  double t2626;
  double t2647;
  double t2665;
  double t2679;
  double t2683;
  double t3164;
  double t3165;
  double t3169;
  double t3315;
  double t3316;
  double t3320;
  double t3322;
  double t3323;
  double t3324;
  double t3349;
  double t3350;
  double t3351;
  double t3357;
  double t3361;
  double t3364;
  double t3365;
  double t3366;
  double t3369;
  double t2929;
  double t2933;
  double t2934;
  double t2950;
  double t2952;
  double t2956;
  double t2981;
  double t2983;
  double t2996;
  double t3084;
  double t3086;
  double t3100;
  double t3292;
  double t3293;
  double t3294;
  double t3602;
  double t3606;
  double t3614;
  double t3615;
  double t3617;
  double t3621;
  double t3628;
  double t3636;
  double t3639;
  double t3882;
  double t4012;
  double t4116;
  double t4145;
  double t4146;
  double t4149;
  double t4173;
  double t4189;
  double t4197;
  double t4207;
  double t4223;
  double t4301;
  double t4314;
  double t4315;
  double t4321;
  double t4325;
  double t4336;
  double t4350;
  double t4352;
  double t4367;
  double t4388;
  double t3769;
  double t3819;
  double t3855;
  double t4155;
  double t4254;
  double t4297;
  double t4428;
  double t4431;
  double t4471;
  double t4300;
  double t4393;
  double t4397;
  double t4638;
  double t4640;
  double t4648;
  double t4539;
  double t4574;
  double t4575;
  double t4399;
  double t4404;
  double t4427;
  double t4651;
  double t4653;
  double t4656;
  double t4591;
  double t4592;
  double t4618;
  double t4677;
  double t4720;
  double t4728;
  double t4835;
  double t4868;
  double t4905;
  double t2438;
  double t2447;
  double t2455;
  double t2260;
  double t2286;
  double t2409;
  double t4740;
  double t4746;
  double t4748;
  double t4754;
  double t5050;
  double t5054;
  double t5056;
  double t5060;
  double t5061;
  double t5024;
  double t5026;
  double t5035;
  double t5062;
  double t5063;
  double t5066;
  double t5070;
  double t5077;
  double t5078;
  double t4804;
  double t4809;
  double t4811;
  double t4820;
  double t4940;
  double t4943;
  double t4947;
  double t4950;
  double t5048;
  double t5082;
  double t5084;
  double t5086;
  double t4997;
  double t4999;
  double t5001;
  double t5004;
  double t5158;
  double t5159;
  double t5162;
  double t5173;
  double t5176;
  double t5182;
  double t5256;
  double t5258;
  double t5260;
  double t5274;
  double t5302;
  double t5303;
  double t5304;
  double t5281;
  double t5289;
  double t5295;
  double t5297;
  double t5313;
  double t5314;
  double t5335;
  double t5339;
  double t5342;
  double t5254;
  double t5255;
  double t5547;
  double t5551;
  double t5555;
  double t5556;
  double t5557;
  double t5552;
  double t5558;
  double t5573;
  double t5598;
  double t5607;
  double t5608;
  double t5674;
  double t5675;
  double t5678;
  double t5594;
  double t5609;
  double t5636;
  double t5361;
  double t5362;
  double t5365;
  double t5668;
  double t5685;
  double t5686;
  double t5688;
  double t5689;
  double t5713;
  double t5393;
  double t5510;
  double t5521;
  double t5525;
  double t5057;
  double t5068;
  double t5090;
  double t5091;
  double t5110;
  double t5812;
  double t5128;
  double t5137;
  double t5138;
  double t5796;
  double t5797;
  double t5806;
  double t4590;
  double t4774;
  double t4776;
  double t5870;
  double t5871;
  double t5872;
  double t5892;
  double t5905;
  double t5906;
  double t4913;
  double t5983;
  double t5984;
  double t5985;
  double t4976;
  double t4977;
  double t5296;
  double t5360;
  double t5470;
  double t6111;
  double t5511;
  double t6095;
  double t6106;
  double t5662;
  double t6108;
  double t6114;
  double t5730;
  double t6133;
  double t5741;
  double t6136;
  double t5754;
  double t6139;
  double t5924;
  double t5936;
  double t5960;
  double t5963;
  double t5810;
  double t5811;
  double t5834;
  double t5845;
  double t6213;
  double t6215;
  double t6112;
  double t6246;
  double t6248;
  double t6135;
  double t6319;
  double t6311;
  double t6313;
  double t6314;
  double t6322;
  double t6166;
  double t6330;
  double t6332;
  double t6184;
  double t6334;
  double t6412;
  double t6413;
  double t6416;
  double t6419;
  double t6423;
  double t6427;
  double t6440;
  t590 = Cos(var1[11]);
  t813 = Sin(var1[10]);
  t574 = Cos(var1[10]);
  t1210 = Sin(var1[11]);
  t172 = Cos(var1[4]);
  t225 = Cos(var1[5]);
  t521 = Sin(var1[9]);
  t652 = t574*t590;
  t1258 = -1.*t813*t1210;
  t1638 = t652 + t1258;
  t1957 = Sin(var1[5]);
  t1975 = -1.*t590*t813;
  t1987 = -1.*t574*t1210;
  t2020 = t1975 + t1987;
  t2169 = Sin(var1[4]);
  t2280 = Cos(var1[9]);
  t1665 = t590*t813;
  t1921 = t574*t1210;
  t1948 = t1665 + t1921;
  t2599 = t225*t1638;
  t2600 = t521*t2020*t1957;
  t2624 = t2599 + t2600;
  t2741 = -1.*t574*t590;
  t2748 = t813*t1210;
  t2753 = t2741 + t2748;
  t2689 = t2280*t2020*t2169;
  t2697 = t172*t2624;
  t2717 = t2689 + t2697;
  t2734 = 0.000529236*t2717;
  t2754 = t2280*t2753*t2169;
  t2759 = t225*t2020;
  t2764 = t521*t2753*t1957;
  t2766 = t2759 + t2764;
  t2768 = t172*t2766;
  t2770 = t2754 + t2768;
  t2785 = -0.02973458*t2770;
  t2793 = t2734 + t2785;
  t2083 = t225*t521*t2020;
  t2086 = -1.*t1638*t1957;
  t2088 = t2083 + t2086;
  t2848 = Sin(var1[3]);
  t1641 = t225*t521*t1638;
  t1962 = -1.*t1948*t1957;
  t1963 = t1641 + t1962;
  t2840 = Cos(var1[3]);
  t2667 = t225*t1948;
  t2670 = t521*t1638*t1957;
  t2676 = t2667 + t2670;
  t2598 = t2280*t172*t2020;
  t2626 = -1.*t2169*t2624;
  t2647 = t2598 + t2626;
  t2665 = t2280*t172*t1638;
  t2679 = -1.*t2169*t2676;
  t2683 = t2665 + t2679;
  t3164 = -1.*t225*t521*t2020;
  t3165 = t1638*t1957;
  t3169 = t3164 + t3165;
  t3315 = t2840*t3169;
  t3316 = -1.*t2848*t2647;
  t3320 = t3315 + t3316;
  t3322 = 0.000529236*t3320;
  t3323 = -1.*t225*t521*t2753;
  t3324 = t2020*t1957;
  t3349 = t3323 + t3324;
  t3350 = t2840*t3349;
  t3351 = t2280*t172*t2753;
  t3357 = -1.*t2169*t2766;
  t3361 = t3351 + t3357;
  t3364 = -1.*t2848*t3361;
  t3365 = t3350 + t3364;
  t3366 = -0.02973458*t3365;
  t3369 = t3322 + t3366;
  t2929 = -1.*t2280*t2020*t2169;
  t2933 = -1.*t172*t2624;
  t2934 = t2929 + t2933;
  t2950 = -1.*t2280*t1638*t2169;
  t2952 = -1.*t172*t2676;
  t2956 = t2950 + t2952;
  t2981 = -1.*t172*t521*t2020;
  t2983 = -1.*t2280*t2020*t2169*t1957;
  t2996 = t2981 + t2983;
  t3084 = -1.*t172*t521*t1638;
  t3086 = -1.*t2280*t1638*t2169*t1957;
  t3100 = t3084 + t3086;
  t3292 = -1.*t225*t521*t1638;
  t3293 = t1948*t1957;
  t3294 = t3292 + t3293;
  t3602 = t2848*t3169;
  t3606 = t2840*t2647;
  t3614 = t3602 + t3606;
  t3615 = 0.000529236*t3614;
  t3617 = t2848*t3349;
  t3621 = t2840*t3361;
  t3628 = t3617 + t3621;
  t3636 = -0.02973458*t3628;
  t3639 = t3615 + t3636;
  t3882 = -1.*t590;
  t4012 = 1. + t3882;
  t4116 = 0.21935*t4012;
  t4145 = 0.217154*t590;
  t4146 = -0.12338*t1210;
  t4149 = t4116 + t4145 + t4146;
  t4173 = -1. + t590;
  t4189 = 0.25*t4173;
  t4197 = -0.37338*t590;
  t4207 = 0.002196*t1210;
  t4223 = t4189 + t4197 + t4207;
  t4301 = -1.*t2280;
  t4314 = 1. + t4301;
  t4315 = 0.0875*t4314;
  t4321 = 0.124119*t2280;
  t4325 = 0.21935*t813;
  t4336 = -1.*t813*t4149;
  t4350 = t574*t4223;
  t4352 = t4325 + t4336 + t4350;
  t4367 = -1.*t521*t4352;
  t4388 = t4315 + t4321 + t4367;
  t3769 = -1.*t574;
  t3819 = 1. + t3769;
  t3855 = 0.21935*t3819;
  t4155 = t574*t4149;
  t4254 = t813*t4223;
  t4297 = t3855 + t4155 + t4254;
  t4428 = -1.*t225*t4388;
  t4431 = -1.*t4297*t1957;
  t4471 = t4428 + t4431;
  t4300 = t225*t4297;
  t4393 = -1.*t4388*t1957;
  t4397 = t4300 + t4393;
  t4638 = 0.036619*t521;
  t4640 = t2280*t4352;
  t4648 = t4638 + t4640;
  t4539 = t225*t4388;
  t4574 = t4297*t1957;
  t4575 = t4539 + t4574;
  t4399 = t521*t2169;
  t4404 = -1.*t2280*t172*t1957;
  t4427 = t4399 + t4404;
  t4651 = t4648*t2169;
  t4653 = t172*t4397;
  t4656 = t4651 + t4653;
  t4591 = t172*t521;
  t4592 = t2280*t2169*t1957;
  t4618 = t4591 + t4592;
  t4677 = t172*t4648;
  t4720 = -1.*t2169*t4397;
  t4728 = t4677 + t4720;
  t4835 = t2280*t1638*t2169;
  t4868 = t172*t2676;
  t4905 = t4835 + t4868;
  t2438 = -1.*t521*t1638*t2169;
  t2447 = t2280*t172*t1638*t1957;
  t2455 = t2438 + t2447;
  t2260 = -1.*t521*t2020*t2169;
  t2286 = t2280*t172*t2020*t1957;
  t2409 = t2260 + t2286;
  t4740 = t2280*t225*t4575;
  t4746 = t4427*t4656;
  t4748 = t4618*t4728;
  t4754 = t4740 + t4746 + t4748;
  t5050 = -0.036619*t521;
  t5054 = -1.*t2280*t4352;
  t5056 = t5050 + t5054;
  t5060 = 0.036619*t2280;
  t5061 = t5060 + t4367;
  t5024 = t2280*t2169;
  t5026 = t172*t521*t1957;
  t5035 = t5024 + t5026;
  t5062 = t5061*t2169;
  t5063 = -1.*t172*t5056*t1957;
  t5066 = t5062 + t5063;
  t5070 = t172*t5061;
  t5077 = t5056*t2169*t1957;
  t5078 = t5070 + t5077;
  t4804 = -1.*t4575*t3169;
  t4809 = -1.*t4656*t2717;
  t4811 = -1.*t4728*t2647;
  t4820 = t4804 + t4809 + t4811;
  t4940 = -1.*t2280*t225*t4575;
  t4943 = -1.*t4427*t4656;
  t4947 = -1.*t4618*t4728;
  t4950 = t4940 + t4943 + t4947;
  t5048 = Power(t225,2);
  t5082 = t2280*t172;
  t5084 = -1.*t521*t2169*t1957;
  t5086 = t5082 + t5084;
  t4997 = t4575*t3294;
  t4999 = t4656*t4905;
  t5001 = t4728*t2683;
  t5004 = t4997 + t4999 + t5001;
  t5158 = -1.*t4648*t2169;
  t5159 = -1.*t172*t4397;
  t5162 = t5158 + t5159;
  t5173 = -1.*t521*t2169;
  t5176 = t2280*t172*t1957;
  t5182 = t5173 + t5176;
  t5256 = 0.21935*t574;
  t5258 = -1.*t574*t4149;
  t5260 = -1.*t813*t4223;
  t5274 = t5256 + t5258 + t5260;
  t5302 = t225*t4352;
  t5303 = t521*t5274*t1957;
  t5304 = t5302 + t5303;
  t5281 = -1.*t225*t521*t5274;
  t5289 = t4352*t1957;
  t5295 = t5281 + t5289;
  t5297 = t2280*t5274*t2169;
  t5313 = t172*t5304;
  t5314 = t5297 + t5313;
  t5335 = t2280*t172*t5274;
  t5339 = -1.*t2169*t5304;
  t5342 = t5335 + t5339;
  t5254 = 5.e-6*t2717;
  t5255 = t2717*t4950;
  t5547 = -0.12338*t590;
  t5551 = t5547 + t4207;
  t5555 = 0.002196*t590;
  t5556 = 0.12338*t1210;
  t5557 = t5555 + t5556;
  t5552 = -1.*t813*t5551;
  t5558 = t574*t5557;
  t5573 = t5552 + t5558;
  t5598 = t574*t5551;
  t5607 = t813*t5557;
  t5608 = t5598 + t5607;
  t5674 = t225*t5608;
  t5675 = t521*t5573*t1957;
  t5678 = t5674 + t5675;
  t5594 = -1.*t225*t521*t5573;
  t5609 = t5608*t1957;
  t5636 = t5594 + t5609;
  t5361 = t4575*t3169;
  t5362 = t4656*t2717;
  t5365 = t4728*t2647;
  t5668 = t2280*t5573*t2169;
  t5685 = t172*t5678;
  t5686 = t5668 + t5685;
  t5688 = t2280*t172*t5573;
  t5689 = -1.*t2169*t5678;
  t5713 = t5688 + t5689;
  t5393 = t2770*t4754;
  t5510 = -1.*t4575*t3349;
  t5521 = -1.*t4656*t2770;
  t5525 = -1.*t4728*t3361;
  t5057 = t2280*t5048*t5056;
  t5068 = -1.*t225*t521*t4575;
  t5090 = t2280*t225*t2020*t4575;
  t5091 = -1.*t225*t5056*t3169;
  t5110 = -1.*t2280*t5048*t5056;
  t5812 = Power(t1957,2);
  t5128 = t225*t521*t4575;
  t5137 = -1.*t2280*t225*t1638*t4575;
  t5138 = t225*t5056*t3294;
  t5796 = t521*t4648;
  t5797 = -1.*t2280*t1957*t4397;
  t5806 = t5796 + t5797 + t4740;
  t4590 = -1.*t2280*t1957*t4575;
  t4774 = -1.*t4575*t2624;
  t4776 = -1.*t4397*t3169;
  t5870 = -1.*t2280*t4648*t2020;
  t5871 = -1.*t4397*t2624;
  t5872 = t5870 + t5871 + t4804;
  t5892 = -1.*t521*t4648;
  t5905 = t2280*t1957*t4397;
  t5906 = t5892 + t5905 + t4940;
  t4913 = t2280*t1957*t4575;
  t5983 = t2280*t4648*t1638;
  t5984 = t4397*t2676;
  t5985 = t5983 + t4997 + t5984;
  t4976 = t4397*t3294;
  t4977 = t4575*t2676;
  t5296 = -1.*t2280*t225*t5295;
  t5360 = t5295*t3294;
  t5470 = t2280*t225*t5295;
  t6111 = Power(t2280,2);
  t5511 = -1.*t5295*t3169;
  t6095 = 5.e-6*t3169;
  t6106 = t3169*t5906;
  t5662 = -1.*t2280*t225*t5636;
  t6108 = t2280*t4648*t2020;
  t6114 = t4397*t2624;
  t5730 = t5636*t3294;
  t6133 = t3349*t5806;
  t5741 = t2280*t225*t5636;
  t6136 = -1.*t2280*t4648*t2753;
  t5754 = -1.*t5636*t3169;
  t6139 = -1.*t4397*t2766;
  t5924 = -1.*t2280*t4648;
  t5936 = -1.*t521*t5061;
  t5960 = -1.*t521*t4648*t1638;
  t5963 = t2280*t5061*t1638;
  t5810 = t2280*t4648;
  t5811 = t521*t5061;
  t5834 = t521*t4648*t2020;
  t5845 = -1.*t2280*t5061*t2020;
  t6213 = -1.*t2280*t4388;
  t6215 = t5892 + t6213;
  t6112 = t6111*t5274*t1638;
  t6246 = t2280*t4388;
  t6248 = t5796 + t6246;
  t6135 = -1.*t6111*t5274*t2020;
  t6319 = Power(t521,2);
  t6311 = 5.e-6*t2280*t2020;
  t6313 = t2280*t6215*t2020;
  t6314 = -1.*t521*t4388*t2020;
  t6322 = t4297*t1638;
  t6166 = t6111*t5573*t1638;
  t6330 = t2280*t6248*t2753;
  t6332 = -1.*t4297*t2020;
  t6184 = -1.*t6111*t5573*t2020;
  t6334 = t521*t4388*t2753;
  t6412 = 0.000019380093084*t2020;
  t6413 = 5.e-6*t1638;
  t6416 = -0.124119*t1638;
  t6419 = -0.0875*t2753;
  t6423 = t6416 + t6419;
  t6427 = -0.02973458*t6423;
  t6440 = t6412 + t6413 + t6427;
  p_output1[0]=var2[11]*(-0.5*(-0.02973458*t2647 + 0.000529236*t2683)*var2[4] - 0.5*(0.000529236*t172*t1963 - 0.02973458*t172*t2088)*var2[5] - 0.5*(-0.02973458*t2409 + 0.000529236*t2455)*var2[9] - 0.5*t2793*var2[10] - 0.5*t2793*var2[11]);
  p_output1[1]=var2[11]*(-0.5*(-0.02973458*(-1.*t2647*t2840 - 1.*t2848*t3169) + 0.000529236*(-1.*t2683*t2840 - 1.*t2848*t3294))*var2[3] - 0.5*(0.02973458*t2848*t2934 - 0.000529236*t2848*t2956)*var2[4] - 0.5*(0.000529236*(t2676*t2840 + t1963*t2169*t2848) - 0.02973458*(t2624*t2840 + t2088*t2169*t2848))*var2[5] - 0.5*(-0.02973458*(-1.*t2020*t225*t2280*t2840 - 1.*t2848*t2996) + 0.000529236*(-1.*t1638*t225*t2280*t2840 - 1.*t2848*t3100))*var2[9] - 0.5*t3369*var2[10] - 0.5*t3369*var2[11]);
  p_output1[2]=var2[11]*(-0.5*(0.000529236*(-1.*t2683*t2848 + t2840*t3294) - 0.02973458*t3320)*var2[3] - 0.5*(-0.02973458*t2840*t2934 + 0.000529236*t2840*t2956)*var2[4] - 0.5*(-0.02973458*(-1.*t2088*t2169*t2840 + t2624*t2848) + 0.000529236*(-1.*t1963*t2169*t2840 + t2676*t2848))*var2[5] - 0.5*(-0.02973458*(-1.*t2020*t225*t2280*t2848 + t2840*t2996) + 0.000529236*(-1.*t1638*t225*t2280*t2848 + t2840*t3100))*var2[9] - 0.5*t3639*var2[10] - 0.5*t3639*var2[11]);
  p_output1[3]=var2[11]*(-0.5*(5.e-6*t2683 + 0.006197*t4618 - 0.02973458*(t2683*t4950 + t4618*t5004 + t4427*(t2683*t4656 + t2956*t4728 + t4728*t4905 + t2683*t5162) + t4905*(-1.*t4618*t4656 - 1.*t4427*t4728 - 1.*t4618*t5162 - 1.*t4728*t5182)) + 0.000529236*(t2647*t4754 + t4618*t4820 + t4427*(-1.*t2647*t4656 - 1.*t2717*t4728 - 1.*t2934*t4728 - 1.*t2647*t5162) + t2717*(t4618*t4656 + t4427*t4728 + t4618*t5162 + t4728*t5182)))*var2[4] - 0.5*(5.e-6*t172*t1963 - 0.006197*t172*t225*t2280 + 0.000529236*(t2717*(t225*t2280*t4397 + t172*t4427*t4471 + t4590 - 1.*t2169*t4471*t4618 - 1.*t172*t225*t2280*t4656 + t2169*t225*t2280*t4728) + t172*t2088*t4754 + t4427*(t2169*t2647*t4471 - 1.*t172*t2717*t4471 - 1.*t172*t2088*t4656 + t2088*t2169*t4728 + t4774 + t4776) - 1.*t172*t225*t2280*t4820) - 0.02973458*(t4905*(-1.*t225*t2280*t4397 - 1.*t172*t4427*t4471 + t2169*t4471*t4618 + t172*t225*t2280*t4656 - 1.*t2169*t225*t2280*t4728 + t4913) + t172*t1963*t4950 + t4427*(-1.*t2169*t2683*t4471 + t172*t1963*t4656 - 1.*t1963*t2169*t4728 + t172*t4471*t4905 + t4976 + t4977) - 1.*t172*t225*t2280*t5004))*var2[5] - 0.5*(5.e-6*t2455 + 0.006197*t5035 + 0.000529236*(t2409*t4754 + t4820*t5035 + t2717*(t4656*t5035 + t5057 + t4427*t5066 + t5068 + t4618*t5078 + t4728*t5086) + t4427*(-1.*t2409*t4656 - 1.*t2996*t4728 - 1.*t2717*t5066 - 1.*t2647*t5078 + t5090 + t5091)) - 0.02973458*(t2455*t4950 + t5004*t5035 + t4905*(-1.*t4656*t5035 - 1.*t4427*t5066 - 1.*t4618*t5078 - 1.*t4728*t5086 + t5110 + t5128) + t4427*(t2455*t4656 + t3100*t4728 + t4905*t5066 + t2683*t5078 + t5137 + t5138)))*var2[9] - 0.5*(t5254 - 0.02973458*(t5255 + t4905*(t5296 - 1.*t4427*t5314 - 1.*t4618*t5342) + t4427*(t4905*t5314 + t2683*t5342 + t5360 + t5361 + t5362 + t5365)) + 0.000529236*(t5393 + t2717*(t4427*t5314 + t4618*t5342 + t5470) + t4427*(-1.*t2717*t5314 - 1.*t2647*t5342 + t5510 + t5511 + t5521 + t5525)))*var2[10] - 0.5*(t5254 - 0.02973458*(t5255 + t4905*(t5662 - 1.*t4427*t5686 - 1.*t4618*t5713) + t4427*(t5361 + t5362 + t5365 + t4905*t5686 + t2683*t5713 + t5730)) + 0.000529236*(t5393 + t2717*(t4427*t5686 + t4618*t5713 + t5741) + t4427*(t5510 + t5521 + t5525 - 1.*t2717*t5686 - 1.*t2647*t5713 + t5754)))*var2[11]);
  p_output1[4]=var2[11]*(-0.5*(-0.006197*t1957*t2280 + 5.e-6*t2676 + 0.000529236*(t3169*(-1.*t1957*t2280*t4471 + t4590) + t225*t2280*(-1.*t2088*t4397 - 1.*t2624*t4471 + t4774 + t4776) + t2624*t5806 - 1.*t1957*t2280*t5872) - 0.02973458*(t3294*(t1957*t2280*t4471 + t4913) + t225*t2280*(t1963*t4397 + t2676*t4471 + t4976 + t4977) + t2676*t5906 - 1.*t1957*t2280*t5985))*var2[5] - 0.5*(-5.e-6*t1638*t225*t2280 - 0.006197*t225*t521 + 0.000529236*(-1.*t2020*t225*t2280*t5806 + t3169*(t5057 + t5068 + t1957*t4397*t521 + t5810 + t5811 + t2280*t5056*t5812) + t225*t2280*(-1.*t1957*t2020*t2280*t4397 + t1957*t2624*t5056 + t5090 + t5091 + t5834 + t5845) - 1.*t225*t521*t5872) - 0.02973458*(-1.*t1638*t225*t2280*t5906 + t3294*(t5110 + t5128 - 1.*t1957*t4397*t521 - 1.*t2280*t5056*t5812 + t5924 + t5936) + t225*t2280*(t1638*t1957*t2280*t4397 - 1.*t1957*t2676*t5056 + t5137 + t5138 + t5960 + t5963) - 1.*t225*t521*t5985))*var2[9] - 0.5*(t6095 - 0.02973458*(t3294*(-1.*t2280*t521*t5274 + t5296 + t1957*t2280*t5304) + t6106 + t225*t2280*(t2676*t5304 + t5360 + t5361 + t6108 + t6112 + t6114)) + 0.000529236*(t3169*(t2280*t521*t5274 - 1.*t1957*t2280*t5304 + t5470) + t6133 + t225*t2280*(-1.*t2624*t5304 + t5510 + t5511 + t6135 + t6136 + t6139)))*var2[10] - 0.5*(t6095 - 0.02973458*(t3294*(-1.*t2280*t521*t5573 + t5662 + t1957*t2280*t5678) + t6106 + t225*t2280*(t5361 + t2676*t5678 + t5730 + t6108 + t6114 + t6166)) + 0.000529236*(t3169*(t2280*t521*t5573 - 1.*t1957*t2280*t5678 + t5741) + t6133 + t225*t2280*(t5510 - 1.*t2624*t5678 + t5754 + t6136 + t6139 + t6184)))*var2[11]);
  p_output1[5]=var2[11]*(-0.5*(0.006197*t2280 - 5.e-6*t1638*t521 - 0.02973458*(t1638*t2280*(-1.*t2280*t5056 + t4388*t521 + t5924 + t5936) + t521*(-1.*t1638*t2280*t4388 - 1.*t1638*t5056*t521 + t5960 + t5963) + t2280*(t1948*t4297 - 1.*t1638*t4388*t521 + t5983) - 1.*t1638*t521*t6215) + 0.000529236*(t2020*t2280*(t2280*t5056 - 1.*t4388*t521 + t5810 + t5811) + t521*(t2020*t2280*t4388 + t2020*t5056*t521 + t5834 + t5845) + t2280*(-1.*t1638*t4297 + t2020*t4388*t521 + t5870) - 1.*t2020*t521*t6248))*var2[9] - 0.5*(t6311 - 0.02973458*(t6313 + t521*(t1948*t4352 + t6108 + t6112 + t6314 + t1638*t5274*t6319 + t6322)) + 0.000529236*(t6330 + t521*(-1.*t1638*t4352 + t6135 + t6136 - 1.*t2020*t5274*t6319 + t6332 + t6334)))*var2[10] - 0.5*(t6311 - 0.02973458*(t6313 + t521*(t1948*t5608 + t6108 + t6166 + t6314 + t1638*t5573*t6319 + t6322)) + 0.000529236*(t6330 + t521*(-1.*t1638*t5608 + t6136 + t6184 - 1.*t2020*t5573*t6319 + t6332 + t6334)))*var2[11]);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=var2[11]*(-0.5*t6440*var2[10] - 0.5*t6440*var2[11]);
  p_output1[10]=-0.5*(0.000529236*(-0.21935*t1210 + t1210*t4149 + t1210*t5557 + t4223*t590 - 1.*t5551*t590) - 0.02973458*(-1.*t1210*t4223 + t1210*t5551 - 0.21935*t590 + t4149*t590 + t5557*t590))*Power(var2[11],2);
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

#include "Ce1_vec12_laikago_description.hh"

namespace SymFunction
{

void Ce1_vec12_laikago_description_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
