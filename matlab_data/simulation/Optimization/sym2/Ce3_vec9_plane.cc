/*
 * Automatically Generated from Mathematica.
 * Sun 28 Jul 2019 02:53:52 GMT-04:00
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
  double t651;
  double t673;
  double t711;
  double t766;
  double t1057;
  double t1114;
  double t1121;
  double t545;
  double t1510;
  double t313;
  double t1614;
  double t288;
  double t1772;
  double t1774;
  double t1781;
  double t1714;
  double t1731;
  double t1788;
  double t1275;
  double t1616;
  double t1634;
  double t1786;
  double t1789;
  double t1793;
  double t1802;
  double t1810;
  double t1821;
  double t1926;
  double t1941;
  double t1949;
  double t1967;
  double t2001;
  double t2117;
  double t2182;
  double t2183;
  double t2205;
  double t2209;
  double t2215;
  double t2219;
  double t2780;
  double t2793;
  double t2794;
  double t2799;
  double t2804;
  double t2841;
  double t3096;
  double t3098;
  double t3095;
  double t3103;
  double t3109;
  double t3116;
  double t3119;
  double t3273;
  double t3300;
  double t3303;
  double t3321;
  double t3371;
  double t3396;
  double t3410;
  double t3071;
  double t3075;
  double t3084;
  double t3093;
  double t3412;
  double t3416;
  double t3417;
  double t3420;
  double t3421;
  double t3425;
  double t3432;
  double t3436;
  double t3441;
  double t3446;
  double t3501;
  double t3559;
  double t3561;
  double t3577;
  double t3581;
  double t3583;
  double t3584;
  double t3620;
  double t3627;
  double t3633;
  double t3795;
  double t3822;
  double t3823;
  double t3665;
  double t3695;
  double t3719;
  double t3834;
  double t3840;
  double t3857;
  double t3537;
  double t3589;
  double t3605;
  double t3780;
  double t3783;
  double t3793;
  double t3977;
  double t3987;
  double t3994;
  double t4316;
  double t4322;
  double t4324;
  double t4362;
  double t4372;
  double t4373;
  double t3824;
  double t4641;
  double t4645;
  double t4657;
  double t3874;
  double t4009;
  double t4612;
  double t4614;
  double t4615;
  double t4051;
  double t3859;
  double t3862;
  double t3867;
  double t4609;
  double t4664;
  double t4672;
  double t4678;
  double t3875;
  double t3880;
  double t3884;
  double t4018;
  double t4034;
  double t4041;
  double t4713;
  double t4801;
  double t4808;
  double t4727;
  double t4743;
  double t4762;
  double t4063;
  double t4076;
  double t4089;
  double t4964;
  double t4966;
  double t4967;
  double t5052;
  double t5053;
  double t5054;
  double t5074;
  double t5088;
  double t5091;
  double t4588;
  double t4602;
  double t5140;
  double t5142;
  double t5133;
  double t5135;
  double t5137;
  double t5148;
  double t5151;
  double t5153;
  double t4686;
  double t4688;
  double t4689;
  double t4701;
  double t4708;
  double t4769;
  double t4777;
  double t4780;
  double t5138;
  double t5172;
  double t5189;
  double t5207;
  double t5239;
  double t5250;
  double t5256;
  double t5260;
  double t5511;
  double t5513;
  double t5514;
  double t5562;
  double t5563;
  double t5564;
  double t2279;
  double t2283;
  double t2289;
  double t5598;
  double t5602;
  double t5603;
  double t5610;
  double t5612;
  double t5613;
  double t5648;
  double t5649;
  double t5650;
  double t5652;
  double t5680;
  double t5685;
  double t5692;
  double t5723;
  double t5728;
  double t5735;
  double t5737;
  double t5803;
  double t5808;
  double t6253;
  double t6258;
  double t6259;
  double t6212;
  double t6233;
  double t6234;
  double t6056;
  double t5549;
  double t5569;
  double t5574;
  double t6112;
  double t6141;
  double t5444;
  double t5450;
  double t5451;
  double t5455;
  double t5459;
  double t5470;
  double t5475;
  double t5480;
  double t5485;
  double t5490;
  double t6649;
  double t6652;
  double t6587;
  double t6588;
  double t6613;
  double t5492;
  double t5505;
  double t5526;
  double t5530;
  double t5534;
  double t5537;
  double t5538;
  double t5542;
  double t5575;
  double t5577;
  double t5579;
  double t5585;
  double t5589;
  double t5593;
  double t5595;
  double t5604;
  double t5616;
  double t5619;
  double t5620;
  double t5622;
  double t5624;
  double t5628;
  double t5630;
  double t5631;
  double t5637;
  double t5641;
  double t5642;
  double t5643;
  double t5644;
  double t6702;
  double t6707;
  double t6709;
  double t5785;
  double t5793;
  double t6711;
  double t6712;
  double t6715;
  double t6728;
  double t6732;
  double t6735;
  double t6071;
  double t6077;
  double t6840;
  double t6842;
  double t6844;
  double t6133;
  double t6200;
  double t6743;
  double t6865;
  double t6280;
  double t6289;
  double t7020;
  double t7022;
  double t7024;
  double t7011;
  double t7017;
  double t7018;
  double t6909;
  double t6457;
  double t6934;
  double t6485;
  double t6491;
  t651 = Cos(var1[8]);
  t673 = Sin(var1[7]);
  t711 = -1.*t651*t673;
  t766 = Cos(var1[7]);
  t1057 = Sin(var1[8]);
  t1114 = -1.*t766*t1057;
  t1121 = t711 + t1114;
  t545 = Cos(var1[6]);
  t1510 = Sin(var1[5]);
  t313 = Cos(var1[5]);
  t1614 = Sin(var1[6]);
  t288 = Sin(var1[3]);
  t1772 = t766*t651;
  t1774 = -1.*t673*t1057;
  t1781 = t1772 + t1774;
  t1714 = Cos(var1[3]);
  t1731 = Cos(var1[4]);
  t1788 = Sin(var1[4]);
  t1275 = t313*t545*t1121;
  t1616 = t1510*t1614*t1121;
  t1634 = t1275 + t1616;
  t1786 = t1731*t1781;
  t1789 = -1.*t545*t1510*t1121;
  t1793 = t313*t1614*t1121;
  t1802 = t1789 + t1793;
  t1810 = -1.*t1788*t1802;
  t1821 = t1786 + t1810;
  t1926 = t313*t545*t1781;
  t1941 = t1510*t1614*t1781;
  t1949 = t1926 + t1941;
  t1967 = t651*t673;
  t2001 = t766*t1057;
  t2117 = t1967 + t2001;
  t2182 = t1731*t2117;
  t2183 = -1.*t545*t1510*t1781;
  t2205 = t313*t1614*t1781;
  t2209 = t2183 + t2205;
  t2215 = -1.*t1788*t2209;
  t2219 = t2182 + t2215;
  t2780 = -1.*t1788*t1781;
  t2793 = -1.*t1731*t1802;
  t2794 = t2780 + t2793;
  t2799 = -1.*t1788*t2117;
  t2804 = -1.*t1731*t2209;
  t2841 = t2799 + t2804;
  t3096 = -1.*t651;
  t3098 = 1. + t3096;
  t3095 = 0.242889*t673;
  t3103 = 0.100689*t3098;
  t3109 = 0.080689*t651;
  t3116 = -0.16*t1057;
  t3119 = t3103 + t3109 + t3116;
  t3273 = -1.*t673*t3119;
  t3300 = -0.20833*t3098;
  t3303 = -0.36833*t651;
  t3321 = 0.02*t1057;
  t3371 = t3300 + t3303 + t3321;
  t3396 = t766*t3371;
  t3410 = t3095 + t3273 + t3396;
  t3071 = t313*t545;
  t3075 = t1510*t1614;
  t3084 = t3071 + t3075;
  t3093 = 0.032875*t1614;
  t3412 = t545*t3410;
  t3416 = t3093 + t3412;
  t3417 = -1.*t1510*t3416;
  t3420 = -1.*t545;
  t3421 = 1. + t3420;
  t3425 = -0.081715*t3421;
  t3432 = -0.11459*t545;
  t3436 = t1614*t3410;
  t3441 = t3425 + t3432 + t3436;
  t3446 = t313*t3441;
  t3501 = t3417 + t3446;
  t3559 = -1.*t766;
  t3561 = 1. + t3559;
  t3577 = 0.242889*t3561;
  t3581 = t766*t3119;
  t3583 = t673*t3371;
  t3584 = t3577 + t3581 + t3583;
  t3620 = t1731*t3501;
  t3627 = t1788*t3584;
  t3633 = t3620 + t3627;
  t3795 = t313*t3416;
  t3822 = t1510*t3441;
  t3823 = t3795 + t3822;
  t3665 = t1788*t1781;
  t3695 = t1731*t1802;
  t3719 = t3665 + t3695;
  t3834 = -1.*t1788*t3501;
  t3840 = t1731*t3584;
  t3857 = t3834 + t3840;
  t3537 = -1.*t1731*t3501;
  t3589 = -1.*t1788*t3584;
  t3605 = t3537 + t3589;
  t3780 = t545*t1510;
  t3783 = -1.*t313*t1614;
  t3793 = t3780 + t3783;
  t3977 = t1788*t2117;
  t3987 = t1731*t2209;
  t3994 = t3977 + t3987;
  t4316 = -1.*t313*t545*t1121;
  t4322 = -1.*t1510*t1614*t1121;
  t4324 = t4316 + t4322;
  t4362 = -1.*t313*t545*t1781;
  t4372 = -1.*t1510*t1614*t1781;
  t4373 = t4362 + t4372;
  t3824 = t3793*t3823;
  t4641 = -1.*t313*t3416;
  t4645 = -1.*t1510*t3441;
  t4657 = t4641 + t4645;
  t3874 = -1.*t3823*t1634;
  t4009 = -1.*t3793*t3823;
  t4612 = -1.*t545*t1510;
  t4614 = t313*t1614;
  t4615 = t4612 + t4614;
  t4051 = t3823*t1949;
  t3859 = -1.*t1788*t3084*t3857;
  t3862 = t1731*t3084*t3633;
  t3867 = t3824 + t3859 + t3862;
  t4609 = t3793*t3501;
  t4664 = t3084*t3823;
  t4672 = -1.*t3823*t1802;
  t4678 = -1.*t3501*t1634;
  t3875 = -1.*t3633*t3719;
  t3880 = -1.*t3857*t1821;
  t3884 = t3874 + t3875 + t3880;
  t4018 = t1788*t3084*t3857;
  t4034 = -1.*t1731*t3084*t3633;
  t4041 = t4009 + t4018 + t4034;
  t4713 = -1.*t3793*t3501;
  t4801 = Power(t1731,2);
  t4808 = Power(t1788,2);
  t4727 = -1.*t3084*t3823;
  t4743 = t3823*t2209;
  t4762 = t3501*t1949;
  t4063 = t3633*t3994;
  t4076 = t3857*t2219;
  t4089 = t4051 + t4063 + t4076;
  t4964 = 0.032875*t545;
  t4966 = -1.*t1614*t3410;
  t4967 = t4964 + t4966;
  t5052 = t545*t1510*t1121;
  t5053 = -1.*t313*t1614*t1121;
  t5054 = t5052 + t5053;
  t5074 = t545*t1510*t1781;
  t5088 = -1.*t313*t1614*t1781;
  t5091 = t5074 + t5088;
  t4588 = t3084*t3501;
  t4602 = t4588 + t3824;
  t5140 = -1.*t1510*t4967;
  t5142 = t3795 + t5140;
  t5133 = t1510*t3416;
  t5135 = t313*t4967;
  t5137 = t5133 + t5135;
  t5148 = -1.*t313*t545;
  t5151 = -1.*t1510*t1614;
  t5153 = t5148 + t5151;
  t4686 = -1.*t3584*t1781;
  t4688 = -1.*t3501*t1802;
  t4689 = t4686 + t4688 + t3874;
  t4701 = -1.*t3084*t3501;
  t4708 = t4701 + t4009;
  t4769 = t3584*t2117;
  t4777 = t3501*t2209;
  t4780 = t4769 + t4777 + t4051;
  t5138 = t3793*t5137;
  t5172 = t5153*t3823;
  t5189 = -1.*t3823*t5054;
  t5207 = -1.*t5137*t1634;
  t5239 = -1.*t3793*t5137;
  t5250 = -1.*t5153*t3823;
  t5256 = t3823*t5091;
  t5260 = t5137*t1949;
  t5511 = -1.*t766*t651;
  t5513 = t673*t1057;
  t5514 = t5511 + t5513;
  t5562 = -1.*t545*t1510*t5514;
  t5563 = t313*t1614*t5514;
  t5564 = t5562 + t5563;
  t2279 = t1714*t1634;
  t2283 = -1.*t288*t1821;
  t2289 = t2279 + t2283;
  t5598 = t313*t545*t5514;
  t5602 = t1510*t1614*t5514;
  t5603 = t5598 + t5602;
  t5610 = t1731*t1121;
  t5612 = -1.*t1788*t5564;
  t5613 = t5610 + t5612;
  t5648 = 0.242889*t766;
  t5649 = -1.*t766*t3119;
  t5650 = -1.*t673*t3371;
  t5652 = t5648 + t5649 + t5650;
  t5680 = -1.*t545*t1510*t5652;
  t5685 = t313*t1614*t5652;
  t5692 = t5680 + t5685;
  t5723 = t313*t545*t5652;
  t5728 = t1510*t1614*t5652;
  t5735 = t5723 + t5728;
  t5737 = -1.*t3793*t5735;
  t5803 = t3823*t1634;
  t5808 = t5735*t1949;
  t6253 = t1731*t5692;
  t6258 = t1788*t3410;
  t6259 = t6253 + t6258;
  t6212 = -1.*t1788*t5692;
  t6233 = t1731*t3410;
  t6234 = t6212 + t6233;
  t6056 = t3793*t5735;
  t5549 = t1788*t1121;
  t5569 = t1731*t5564;
  t5574 = t5549 + t5569;
  t6112 = -1.*t5735*t1634;
  t6141 = -1.*t3823*t5603;
  t5444 = -1.*t1614*t3416;
  t5450 = t545*t3441;
  t5451 = t5444 + t5450;
  t5455 = -0.00482*t5451*t1121;
  t5459 = t1614*t3416;
  t5470 = -1.*t545*t3441;
  t5475 = t5459 + t5470;
  t5480 = 0.03856*t5475*t1781;
  t5485 = t5455 + t5480;
  t5490 = -0.5*var2[5]*t5485;
  t6649 = -0.16*t651;
  t6652 = t6649 + t3321;
  t6587 = 0.02*t651;
  t6588 = 0.16*t1057;
  t6613 = t6587 + t6588;
  t5492 = -0.0001584575*t1121;
  t5505 = -0.11459*t1781;
  t5526 = -0.081715*t5514;
  t5530 = t5505 + t5526;
  t5534 = 0.03856*t5530;
  t5537 = t5492 + t5534;
  t5538 = -0.5*var2[6]*t5537;
  t5542 = -0.00482*t3719;
  t5575 = 0.03856*t5574;
  t5577 = t5542 + t5575;
  t5579 = -0.5*var2[0]*t5577;
  t5585 = t288*t1634;
  t5589 = t1714*t1821;
  t5593 = t5585 + t5589;
  t5595 = -0.00482*t5593;
  t5604 = t288*t5603;
  t5616 = t1714*t5613;
  t5619 = t5604 + t5616;
  t5620 = 0.03856*t5619;
  t5622 = t5595 + t5620;
  t5624 = -0.5*var2[2]*t5622;
  t5628 = -0.00482*t2289;
  t5630 = t1714*t5603;
  t5631 = -1.*t288*t5613;
  t5637 = t5630 + t5631;
  t5641 = 0.03856*t5637;
  t5642 = t5628 + t5641;
  t5643 = -0.5*var2[1]*t5642;
  t5644 = t4708*t1634;
  t6702 = -1.*t673*t6652;
  t6707 = t766*t6613;
  t6709 = t6702 + t6707;
  t5785 = t3584*t1781;
  t5793 = t3501*t1802;
  t6711 = -1.*t545*t1510*t6709;
  t6712 = t313*t1614*t6709;
  t6715 = t6711 + t6712;
  t6728 = t313*t545*t6709;
  t6732 = t1510*t1614*t6709;
  t6735 = t6728 + t6732;
  t6071 = t4602*t5603;
  t6077 = -1.*t3584*t1121;
  t6840 = t766*t6652;
  t6842 = t673*t6613;
  t6844 = t6840 + t6842;
  t6133 = -1.*t3501*t5564;
  t6200 = t4041*t3719;
  t6743 = -1.*t3793*t6735;
  t6865 = t6735*t1949;
  t6280 = t3633*t3719;
  t6289 = t3857*t1821;
  t7020 = t1731*t6715;
  t7022 = t1788*t6844;
  t7024 = t7020 + t7022;
  t7011 = -1.*t1788*t6715;
  t7017 = t1731*t6844;
  t7018 = t7011 + t7017;
  t6909 = t3793*t6735;
  t6457 = t3867*t5574;
  t6934 = -1.*t6735*t1634;
  t6485 = -1.*t3633*t5574;
  t6491 = -1.*t3857*t5613;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=(-0.5*(0.03856*(-1.*t1714*t1821 - 1.*t1634*t288) - 0.00482*(-1.*t1714*t2219 - 1.*t1949*t288))*var2[1] - 0.5*(0.03856*t2289 - 0.00482*(t1714*t1949 - 1.*t2219*t288))*var2[2])*var2[8];
  p_output1[4]=(-0.5*(0.03856*t1821 - 0.00482*t2219)*var2[0] - 0.5*(-0.03856*t2794*t288 + 0.00482*t2841*t288)*var2[1] - 0.5*(0.03856*t1714*t2794 - 0.00482*t1714*t2841)*var2[2] - 0.5*(-0.00482*((-1.*t1788*t3084*t3605 - 1.*t1788*t3084*t3633)*t3719 + t1731*t3084*(-1.*t1821*t3605 - 1.*t1821*t3633 - 1.*t2794*t3857 - 1.*t3719*t3857) + t1821*t3867 - 1.*t1788*t3084*t3884) + 0.03856*((t1788*t3084*t3605 + t1788*t3084*t3633)*t3994 + t1731*t3084*(t2219*t3605 + t2219*t3633 + t2841*t3857 + t3857*t3994) + t2219*t4041 - 1.*t1788*t3084*t4089))*var2[3])*var2[8];
  p_output1[5]=(-0.5*(0.03856*t1731*t4324 - 0.00482*t1731*t4373)*var2[0] - 0.5*(0.03856*(t1714*t1802 + t1788*t288*t4324) - 0.00482*(t1714*t2209 + t1788*t288*t4373))*var2[1] - 0.5*(0.03856*(t1802*t288 - 1.*t1714*t1788*t4324) - 0.00482*(t2209*t288 - 1.*t1714*t1788*t4373))*var2[2] - 0.5*(0.03856*(t1731*t4041*t4373 + t1731*t4089*t4615 + t1731*t3084*(t1731*t3633*t4373 - 1.*t1788*t3857*t4373 - 1.*t1788*t2219*t4657 + t1731*t3994*t4657 + t4743 + t4762) + t3994*(-1.*t1731*t3633*t4615 + t1788*t3857*t4615 + t4713 + t4727 - 1.*t3084*t4657*t4801 - 1.*t3084*t4657*t4808)) - 0.00482*(t1731*t3867*t4324 + t1731*t3884*t4615 + t1731*t3084*(-1.*t1731*t3633*t4324 + t1788*t3857*t4324 + t1788*t1821*t4657 - 1.*t1731*t3719*t4657 + t4672 + t4678) + t3719*(t4609 + t1731*t3633*t4615 - 1.*t1788*t3857*t4615 + t4664 + t3084*t4657*t4801 + t3084*t4657*t4808)))*var2[3] - 0.5*(-0.00482*(t1802*t4602 + t1634*(t4609 + t3501*t4615 + t3084*t4657 + t4664) + t3793*(-1.*t3501*t4324 - 1.*t1802*t4657 + t4672 + t4678) + t3084*t4689) + 0.03856*(t2209*t4708 + t1949*(-1.*t3501*t4615 - 1.*t3084*t4657 + t4713 + t4727) + t3793*(t3501*t4373 + t2209*t4657 + t4743 + t4762) + t3084*t4780))*var2[4])*var2[8];
  p_output1[6]=(-0.5*(0.03856*t1634*t1731 - 0.00482*t1731*t1949)*var2[0] - 0.5*(0.03856*(t1634*t1788*t288 + t1714*t5054) - 0.00482*(t1788*t1949*t288 + t1714*t5091))*var2[1] - 0.5*(0.03856*(-1.*t1634*t1714*t1788 + t288*t5054) - 0.00482*(-1.*t1714*t1788*t1949 + t288*t5091))*var2[2] - 0.5*(-0.00482*(t1634*t1731*t3867 + t1731*t3793*t3884 + t3719*(t1731*t3633*t3793 - 1.*t1788*t3793*t3857 + t5138 + t3084*t4801*t5142 + t3084*t4808*t5142 + t5172) + t1731*t3084*(-1.*t1634*t1731*t3633 + t1634*t1788*t3857 + t1788*t1821*t5142 - 1.*t1731*t3719*t5142 + t5189 + t5207)) + 0.03856*(t1731*t1949*t4041 + t1731*t3793*t4089 + t3994*(-1.*t1731*t3633*t3793 + t1788*t3793*t3857 - 1.*t3084*t4801*t5142 - 1.*t3084*t4808*t5142 + t5239 + t5250) + t1731*t3084*(t1731*t1949*t3633 - 1.*t1788*t1949*t3857 - 1.*t1788*t2219*t5142 + t1731*t3994*t5142 + t5256 + t5260)))*var2[3] - 0.5*(-0.00482*(t4602*t5054 + t4689*t5153 + t1634*(t4609 + t5138 + t3084*t5142 + t5172) + t3793*(t4678 - 1.*t1802*t5142 + t5189 + t5207)) + 0.03856*(t4708*t5091 + t4780*t5153 + t1949*(t4713 - 1.*t3084*t5142 + t5239 + t5250) + t3793*(t4762 + t2209*t5142 + t5256 + t5260)))*var2[4] - 0.5*(-0.00482*t1781*(-1.*t1614*t3441 - 1.*t1614*t4967) + 0.03856*t2117*(t1614*t3441 + t1614*t4967))*var2[5])*var2[8];
  p_output1[7]=(t5490 + t5538 + t5579 + t5624 + t5643 - 0.5*(0.03856*(t6200 + t3994*(t5737 + t1788*t3084*t6234 - 1.*t1731*t3084*t6259) + t1731*t3084*(t5803 + t5808 + t2219*t6234 + t3994*t6259 + t6280 + t6289)) - 0.00482*(t3719*(t6056 - 1.*t1788*t3084*t6234 + t1731*t3084*t6259) + t6457 + t1731*t3084*(t6112 + t6141 - 1.*t1821*t6234 - 1.*t3719*t6259 + t6485 + t6491)))*var2[3] - 0.5*(0.03856*(t5644 + t1949*(-1.*t3084*t5692 + t5737) + t3793*(t2117*t3410 + t2209*t5692 + t5785 + t5793 + t5803 + t5808)) - 0.00482*(t1634*(t3084*t5692 + t6056) + t6071 + t3793*(-1.*t1781*t3410 - 1.*t1802*t5692 + t6077 + t6112 + t6133 + t6141)))*var2[4])*var2[8];
  p_output1[8]=(t5490 + t5538 + t5579 + t5624 + t5643 - 0.5*(-0.00482*(t6457 + t3719*(t6909 - 1.*t1788*t3084*t7018 + t1731*t3084*t7024) + t1731*t3084*(t6141 + t6485 + t6491 + t6934 - 1.*t1821*t7018 - 1.*t3719*t7024)) + 0.03856*(t6200 + t3994*(t6743 + t1788*t3084*t7018 - 1.*t1731*t3084*t7024) + t1731*t3084*(t5803 + t6280 + t6289 + t6865 + t2219*t7018 + t3994*t7024)))*var2[3] - 0.5*(0.03856*(t5644 + t1949*(-1.*t3084*t6715 + t6743) + t3793*(t5785 + t5793 + t5803 + t2209*t6715 + t2117*t6844 + t6865)) - 0.00482*(t6071 + t1634*(t3084*t6715 + t6909) + t3793*(t6077 + t6133 + t6141 - 1.*t1802*t6715 - 1.*t1781*t6844 + t6934)))*var2[4] - 0.5*(0.03856*(-1.*t1057*t3371 - 0.242889*t651 + t3119*t651 + t651*t6613 + t1057*t6652) - 0.00482*(-0.242889*t1057 + t1057*t3119 + t3371*t651 + t1057*t6613 - 1.*t651*t6652))*var2[7])*var2[8];
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

#include "Ce3_vec9_plane.hh"

namespace SymFunction
{

void Ce3_vec9_plane_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
