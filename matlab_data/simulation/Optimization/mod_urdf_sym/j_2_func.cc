/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 13:00:02 GMT-05:00
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
  double t28;
  double t115;
  double t95;
  double t21;
  double t223;
  double t97;
  double t291;
  double t384;
  double t479;
  double t457;
  double t465;
  double t466;
  double t454;
  double t572;
  double t574;
  double t580;
  double t583;
  double t604;
  double t610;
  double t701;
  double t724;
  double t734;
  double t499;
  double t793;
  double t794;
  double t795;
  double t636;
  double t643;
  double t760;
  double t801;
  double t820;
  double t658;
  double t663;
  double t913;
  double t946;
  double t953;
  double t972;
  double t1144;
  double t1149;
  double t1133;
  double t1147;
  double t1152;
  double t1158;
  double t1163;
  double t1186;
  double t1196;
  double t1246;
  double t1257;
  double t1323;
  double t1330;
  double t1337;
  double t1259;
  double t1274;
  double t1451;
  double t1460;
  double t1470;
  double t389;
  double t1583;
  double t1550;
  double t1604;
  double t1618;
  double t1632;
  double t1647;
  double t1650;
  double t1660;
  double t756;
  double t1591;
  double t1673;
  double t1676;
  double t1718;
  double t1722;
  double t1723;
  double t1689;
  double t1697;
  double t931;
  double t1788;
  double t1799;
  double t1807;
  double t1858;
  double t1890;
  double t1947;
  double t1965;
  double t1990;
  double t1997;
  double t2114;
  double t2115;
  double t2116;
  double t2122;
  double t2125;
  double t2128;
  double t2188;
  double t2190;
  double t2192;
  double t2199;
  double t2208;
  double t2211;
  double t1856;
  double t2299;
  double t2301;
  double t2336;
  double t2341;
  double t2356;
  double t2360;
  double t2076;
  double t2448;
  double t2463;
  double t2464;
  double t2465;
  double t2467;
  double t2488;
  double t2168;
  double t2598;
  double t2599;
  double t2609;
  double t2610;
  double t2624;
  double t2626;
  double t1835;
  double t2696;
  double t2697;
  double t2700;
  double t2707;
  double t2717;
  double t2718;
  double t2075;
  double t2777;
  double t2785;
  double t2793;
  double t2796;
  double t2800;
  double t2802;
  double t2169;
  double t2927;
  double t2933;
  double t2934;
  double t2935;
  double t2939;
  double t2952;
  double t3012;
  double t3014;
  double t3019;
  double t3044;
  double t3047;
  double t3051;
  double t3053;
  double t3065;
  double t3069;
  double t3152;
  double t3154;
  double t3160;
  double t3175;
  double t3177;
  double t3179;
  double t3184;
  double t3193;
  double t3203;
  double t3000;
  double t3316;
  double t3320;
  double t3323;
  double t3327;
  double t3328;
  double t3331;
  double t3136;
  double t3359;
  double t3366;
  double t3369;
  double t3370;
  double t3376;
  double t3379;
  double t3007;
  double t3443;
  double t3444;
  double t3446;
  double t3447;
  double t3458;
  double t3463;
  double t3164;
  double t3512;
  double t3518;
  double t3519;
  double t3521;
  double t3539;
  double t3542;
  double t3589;
  double t3590;
  double t3615;
  double t3636;
  double t3638;
  double t3639;
  double t3644;
  double t3645;
  double t3666;
  double t1489;
  double t3700;
  double t3701;
  double t3756;
  double t3761;
  double t3765;
  double t3767;
  double t3769;
  double t3771;
  double t3672;
  double t3814;
  double t3818;
  double t3839;
  double t3850;
  double t3852;
  double t3855;
  double t3860;
  double t3721;
  double t3921;
  double t3928;
  double t3934;
  double t3942;
  double t3943;
  double t3948;
  double t3953;
  double t4146;
  double t4148;
  double t4149;
  double t4176;
  double t4178;
  double t4183;
  double t1007;
  double t4223;
  double t4224;
  double t4273;
  double t4265;
  double t4296;
  double t4300;
  double t4188;
  double t4336;
  double t4339;
  double t4334;
  double t4342;
  double t4345;
  double t4231;
  double t4390;
  double t4397;
  double t4398;
  double t4399;
  double t4401;
  double t4594;
  double t4601;
  double t4606;
  double t4629;
  double t4634;
  double t4638;
  double t1816;
  double t4677;
  double t4680;
  double t4728;
  double t4725;
  double t4729;
  double t4734;
  double t4641;
  double t4758;
  double t4759;
  double t4757;
  double t4766;
  double t4774;
  double t4691;
  double t4835;
  double t4836;
  double t4837;
  double t4838;
  double t4844;
  t28 = Cos(var1[5]);
  t115 = Sin(var1[3]);
  t95 = Sin(var1[4]);
  t21 = Cos(var1[3]);
  t223 = Sin(var1[5]);
  t97 = t21*t28*t95;
  t291 = t115*t223;
  t384 = t97 + t291;
  t479 = Cos(var1[9]);
  t457 = -1.*t28*t115*t95;
  t465 = t21*t223;
  t466 = t457 + t465;
  t454 = Sin(var1[9]);
  t572 = Cos(var1[10]);
  t574 = t479*t466;
  t580 = -1.*t454;
  t583 = 0. + t580;
  t604 = t583*t384;
  t610 = t574 + t604;
  t701 = -1.*t28*t115;
  t724 = t21*t95*t223;
  t734 = t701 + t724;
  t499 = 0. + t479;
  t793 = -1.*t21*t28;
  t794 = -1.*t115*t95*t223;
  t795 = t793 + t794;
  t636 = Cos(var1[11]);
  t643 = 0. + t636;
  t760 = t583*t734;
  t801 = t479*t795;
  t820 = t760 + t801;
  t658 = Sin(var1[10]);
  t663 = Sin(var1[11]);
  t913 = Cos(var1[4]);
  t946 = t21*t913*t583;
  t953 = -1.*t479*t913*t115;
  t972 = t946 + t953;
  t1144 = Cos(var1[6]);
  t1149 = Sin(var1[6]);
  t1133 = Cos(var1[7]);
  t1147 = t1144*t466;
  t1152 = -1.*t1149;
  t1158 = 0. + t1152;
  t1163 = t384*t1158;
  t1186 = t1147 + t1163;
  t1196 = 0. + t1144;
  t1246 = Cos(var1[8]);
  t1257 = 0. + t1246;
  t1323 = t1144*t795;
  t1330 = t734*t1158;
  t1337 = t1323 + t1330;
  t1259 = Sin(var1[7]);
  t1274 = Sin(var1[8]);
  t1451 = -1.*t913*t1144*t115;
  t1460 = t21*t913*t1158;
  t1470 = t1451 + t1460;
  t389 = 0.0875*t384;
  t1583 = Cos(var1[15]);
  t1550 = Sin(var1[15]);
  t1604 = Cos(var1[16]);
  t1618 = t1583*t466;
  t1632 = -1.*t1550;
  t1647 = 0. + t1632;
  t1650 = t1647*t384;
  t1660 = t1618 + t1650;
  t756 = 0.0875*t734;
  t1591 = 0. + t1583;
  t1673 = Cos(var1[17]);
  t1676 = 0. + t1673;
  t1718 = t1647*t734;
  t1722 = t1583*t795;
  t1723 = t1718 + t1722;
  t1689 = Sin(var1[16]);
  t1697 = Sin(var1[17]);
  t931 = 0.0875*t21*t913;
  t1788 = t21*t913*t1647;
  t1799 = -1.*t1583*t913*t115;
  t1807 = t1788 + t1799;
  t1858 = t479*t21*t913*t28;
  t1890 = t913*t28*t583*t115;
  t1947 = t1858 + t1890;
  t1965 = t572*t1947;
  t1990 = -1.*t28*t658*t95;
  t1997 = t1965 + t1990;
  t2114 = -1.*t658*t95*t223;
  t2115 = t479*t21*t913*t223;
  t2116 = t913*t583*t115*t223;
  t2122 = t2115 + t2116;
  t2125 = t572*t2122;
  t2128 = t2114 + t2125;
  t2188 = -1.*t913*t658;
  t2190 = -1.*t479*t21*t95;
  t2192 = -1.*t583*t115*t95;
  t2199 = t2190 + t2192;
  t2208 = t572*t2199;
  t2211 = t2188 + t2208;
  t1856 = -0.21935*t28*t95;
  t2299 = t21*t913*t28*t1144;
  t2301 = t913*t28*t115*t1158;
  t2336 = t2299 + t2301;
  t2341 = t1133*t2336;
  t2356 = -1.*t28*t95*t1259;
  t2360 = t2341 + t2356;
  t2076 = -0.21935*t95*t223;
  t2448 = t21*t913*t1144*t223;
  t2463 = t913*t115*t223*t1158;
  t2464 = t2448 + t2463;
  t2465 = t1133*t2464;
  t2467 = -1.*t95*t223*t1259;
  t2488 = t2465 + t2467;
  t2168 = -0.21935*t913;
  t2598 = -1.*t21*t1144*t95;
  t2599 = -1.*t115*t95*t1158;
  t2609 = t2598 + t2599;
  t2610 = t1133*t2609;
  t2624 = -1.*t913*t1259;
  t2626 = t2610 + t2624;
  t1835 = 0.0875*t913*t28*t115;
  t2696 = t1583*t21*t913*t28;
  t2697 = t913*t28*t1647*t115;
  t2700 = t2696 + t2697;
  t2707 = t1604*t2700;
  t2717 = -1.*t28*t1689*t95;
  t2718 = t2707 + t2717;
  t2075 = 0.0875*t913*t115*t223;
  t2777 = -1.*t1689*t95*t223;
  t2785 = t1583*t21*t913*t223;
  t2793 = t913*t1647*t115*t223;
  t2796 = t2785 + t2793;
  t2800 = t1604*t2796;
  t2802 = t2777 + t2800;
  t2169 = -0.0875*t115*t95;
  t2927 = -1.*t913*t1689;
  t2933 = -1.*t1583*t21*t95;
  t2934 = -1.*t1647*t115*t95;
  t2935 = t2933 + t2934;
  t2939 = t1604*t2935;
  t2952 = t2927 + t2939;
  t3012 = t28*t115;
  t3014 = -1.*t21*t95*t223;
  t3019 = t3012 + t3014;
  t3044 = -1.*t913*t658*t223;
  t3047 = t479*t3019;
  t3051 = t583*t795;
  t3053 = t3047 + t3051;
  t3065 = t572*t3053;
  t3069 = t3044 + t3065;
  t3152 = t28*t115*t95;
  t3154 = -1.*t21*t223;
  t3160 = t3152 + t3154;
  t3175 = t913*t28*t658;
  t3177 = t583*t3160;
  t3179 = t479*t384;
  t3184 = t3177 + t3179;
  t3193 = t572*t3184;
  t3203 = t3175 + t3193;
  t3000 = -0.21935*t913*t223;
  t3316 = t1144*t3019;
  t3320 = t795*t1158;
  t3323 = t3316 + t3320;
  t3327 = t1133*t3323;
  t3328 = -1.*t913*t223*t1259;
  t3331 = t3327 + t3328;
  t3136 = 0.21935*t913*t28;
  t3359 = t1144*t384;
  t3366 = t3160*t1158;
  t3369 = t3359 + t3366;
  t3370 = t1133*t3369;
  t3376 = t913*t28*t1259;
  t3379 = t3370 + t3376;
  t3007 = 0.0875*t795;
  t3443 = -1.*t913*t1689*t223;
  t3444 = t1583*t3019;
  t3446 = t1647*t795;
  t3447 = t3444 + t3446;
  t3458 = t1604*t3447;
  t3463 = t3443 + t3458;
  t3164 = 0.0875*t3160;
  t3512 = t913*t28*t1689;
  t3518 = t1647*t3160;
  t3519 = t1583*t384;
  t3521 = t3518 + t3519;
  t3539 = t1604*t3521;
  t3542 = t3512 + t3539;
  t3589 = -1.*t1144*t3160;
  t3590 = -1.*t384*t1149;
  t3615 = t3589 + t3590;
  t3636 = t21*t28;
  t3638 = t115*t95*t223;
  t3639 = t3636 + t3638;
  t3644 = -1.*t1144*t3639;
  t3645 = -1.*t734*t1149;
  t3666 = t3644 + t3645;
  t1489 = -1.*t913*t115*t1149;
  t3700 = -1.*t21*t913*t1149;
  t3701 = t1451 + t3700;
  t3756 = t913*t28;
  t3761 = 0. + t3756;
  t3765 = t3761*t1133;
  t3767 = 0. + t3359 + t3366;
  t3769 = -1.*t3767*t1259;
  t3771 = t3765 + t3769;
  t3672 = t1144*t734;
  t3814 = t913*t223;
  t3818 = 0. + t3814;
  t3839 = t1133*t3818;
  t3850 = t3639*t1158;
  t3852 = 0. + t3672 + t3850;
  t3855 = -1.*t3852*t1259;
  t3860 = t3839 + t3855;
  t3721 = t21*t913*t1144;
  t3921 = -1.*t95;
  t3928 = 0. + t3921;
  t3934 = t1133*t3928;
  t3942 = t913*t115*t1158;
  t3943 = 0. + t3721 + t3942;
  t3948 = -1.*t3943*t1259;
  t3953 = t3934 + t3948;
  t4146 = -1.*t479*t3160;
  t4148 = -1.*t454*t384;
  t4149 = t4146 + t4148;
  t4176 = -1.*t454*t734;
  t4178 = -1.*t479*t3639;
  t4183 = t4176 + t4178;
  t1007 = -1.*t913*t454*t115;
  t4223 = -1.*t21*t913*t454;
  t4224 = t4223 + t953;
  t4273 = 0. + t3177 + t3179;
  t4265 = t572*t3761;
  t4296 = -1.*t658*t4273;
  t4300 = t4265 + t4296;
  t4188 = t479*t734;
  t4336 = t583*t3639;
  t4339 = 0. + t4188 + t4336;
  t4334 = t572*t3818;
  t4342 = -1.*t658*t4339;
  t4345 = t4334 + t4342;
  t4231 = t479*t21*t913;
  t4390 = t913*t583*t115;
  t4397 = 0. + t4231 + t4390;
  t4398 = -1.*t658*t4397;
  t4399 = t572*t3928;
  t4401 = t4398 + t4399;
  t4594 = -1.*t1583*t3160;
  t4601 = -1.*t1550*t384;
  t4606 = t4594 + t4601;
  t4629 = -1.*t1550*t734;
  t4634 = -1.*t1583*t3639;
  t4638 = t4629 + t4634;
  t1816 = -1.*t913*t1550*t115;
  t4677 = -1.*t21*t913*t1550;
  t4680 = t4677 + t1799;
  t4728 = 0. + t3518 + t3519;
  t4725 = t1604*t3761;
  t4729 = -1.*t1689*t4728;
  t4734 = t4725 + t4729;
  t4641 = t1583*t734;
  t4758 = t1647*t3639;
  t4759 = 0. + t4641 + t4758;
  t4757 = t1604*t3818;
  t4766 = -1.*t1689*t4759;
  t4774 = t4757 + t4766;
  t4691 = t1583*t21*t913;
  t4835 = t913*t1647*t115;
  t4836 = 0. + t4691 + t4835;
  t4837 = -1.*t1689*t4836;
  t4838 = t1604*t3928;
  t4844 = t4837 + t4838;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=1.;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=1.;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=1.;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=1.;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=1.;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=1.;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=1.;
  p_output1[27]=t389 + 0.037*(t454*t466 + t384*t499) - 0.25*t572*t610 - 0.27*(t572*t610*t643 - 1.*t610*t658*t663);
  p_output1[28]=t756 + 0.037*(t499*t734 + t454*t795) - 0.25*t572*t820 - 0.27*(t572*t643*t820 - 1.*t658*t663*t820);
  p_output1[29]=0.037*(t1007 + t21*t499*t913) + t931 - 0.25*t572*t972 - 0.27*(t572*t643*t972 - 1.*t658*t663*t972);
  p_output1[30]=-0.25*t1133*t1186 - 0.27*(t1133*t1186*t1257 - 1.*t1186*t1259*t1274) - 0.0875*t384 - 0.037*(t1196*t384 + t1149*t466);
  p_output1[31]=-0.25*t1133*t1337 - 0.27*(t1133*t1257*t1337 - 1.*t1259*t1274*t1337) - 0.0875*t734 - 0.037*(t1196*t734 + t1149*t795);
  p_output1[32]=-0.25*t1133*t1470 - 0.27*(t1133*t1257*t1470 - 1.*t1259*t1274*t1470) - 0.0875*t21*t913 - 0.037*(t1489 + t1196*t21*t913);
  p_output1[33]=-0.25*t1604*t1660 - 0.27*(t1604*t1660*t1676 - 1.*t1660*t1689*t1697) + t389 + 0.037*(t1591*t384 + t1550*t466);
  p_output1[34]=-0.25*t1604*t1723 - 0.27*(t1604*t1676*t1723 - 1.*t1689*t1697*t1723) + t756 + 0.037*(t1591*t734 + t1550*t795);
  p_output1[35]=-0.25*t1604*t1807 - 0.27*(t1604*t1676*t1807 - 1.*t1689*t1697*t1807) + 0.037*(t1816 + t1591*t21*t913) + t931;
  p_output1[36]=t1835 + t1856 - 0.25*t1997 + 0.037*(t21*t28*t454*t913 + t115*t28*t499*t913) - 0.27*(t1997*t643 + t663*(-1.*t1947*t658 - 1.*t28*t572*t95));
  p_output1[37]=t2075 + t2076 - 0.25*t2128 + 0.037*(t21*t223*t454*t913 + t115*t223*t499*t913) - 0.27*(t2128*t643 + t663*(-1.*t2122*t658 - 1.*t223*t572*t95));
  p_output1[38]=t2168 + t2169 - 0.25*t2211 - 0.27*(t2211*t643 + t663*(-1.*t2199*t658 - 1.*t572*t913)) + 0.037*(-1.*t21*t454*t95 - 1.*t115*t499*t95);
  p_output1[39]=t1856 - 0.25*t2360 - 0.0875*t115*t28*t913 - 0.037*(t115*t1196*t28*t913 + t1149*t21*t28*t913) - 0.27*(t1257*t2360 + t1274*(-1.*t1259*t2336 - 1.*t1133*t28*t95));
  p_output1[40]=t2076 - 0.25*t2488 - 0.0875*t115*t223*t913 - 0.037*(t115*t1196*t223*t913 + t1149*t21*t223*t913) - 0.27*(t1257*t2488 + t1274*(-1.*t1259*t2464 - 1.*t1133*t223*t95));
  p_output1[41]=t2168 - 0.25*t2626 - 0.27*(t1257*t2626 + t1274*(-1.*t1259*t2609 - 1.*t1133*t913)) + 0.0875*t115*t95 - 0.037*(-1.*t115*t1196*t95 - 1.*t1149*t21*t95);
  p_output1[42]=t1835 - 0.25*t2718 + 0.037*(t115*t1591*t28*t913 + t1550*t21*t28*t913) + 0.21935*t28*t95 - 0.27*(t1676*t2718 + t1697*(-1.*t1689*t2700 - 1.*t1604*t28*t95));
  p_output1[43]=t2075 - 0.25*t2802 + 0.037*(t115*t1591*t223*t913 + t1550*t21*t223*t913) + 0.21935*t223*t95 - 0.27*(t1676*t2802 + t1697*(-1.*t1689*t2796 - 1.*t1604*t223*t95));
  p_output1[44]=t2169 - 0.25*t2952 + 0.21935*t913 - 0.27*(t1676*t2952 + t1697*(-1.*t1689*t2935 - 1.*t1604*t913)) + 0.037*(-1.*t115*t1591*t95 - 1.*t1550*t21*t95);
  p_output1[45]=t3000 + t3007 - 0.25*t3069 + 0.037*(t3019*t454 + t499*t795) - 0.27*(t3069*t643 + t663*(-1.*t3053*t658 - 1.*t223*t572*t913));
  p_output1[46]=t3136 + t3164 - 0.25*t3203 + 0.037*(t384*t454 + t3160*t499) - 0.27*(t3203*t643 + t663*(-1.*t3184*t658 + t28*t572*t913));
  p_output1[47]=0;
  p_output1[48]=t3000 - 0.25*t3331 - 0.0875*t795 - 0.037*(t1149*t3019 + t1196*t795) - 0.27*(t1257*t3331 + t1274*(-1.*t1259*t3323 - 1.*t1133*t223*t913));
  p_output1[49]=t3136 - 0.0875*t3160 - 0.25*t3379 - 0.037*(t1196*t3160 + t1149*t384) - 0.27*(t1257*t3379 + t1274*(-1.*t1259*t3369 + t1133*t28*t913));
  p_output1[50]=0;
  p_output1[51]=t3007 - 0.25*t3463 + 0.037*(t1550*t3019 + t1591*t795) + 0.21935*t223*t913 - 0.27*(t1676*t3463 + t1697*(-1.*t1689*t3447 - 1.*t1604*t223*t913));
  p_output1[52]=t3164 - 0.25*t3542 + 0.037*(t1591*t3160 + t1550*t384) - 0.21935*t28*t913 - 0.27*(t1676*t3542 + t1697*(-1.*t1689*t3521 + t1604*t28*t913));
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=-0.037*(-1.*t1149*t3160 + t3359) - 0.25*t1133*t3615 - 0.27*(t1133*t1257*t3615 - 1.*t1259*t1274*t3615);
  p_output1[58]=-0.25*t1133*t3666 - 0.27*(t1133*t1257*t3666 - 1.*t1259*t1274*t3666) - 0.037*(-1.*t1149*t3639 + t3672);
  p_output1[59]=-0.25*t1133*t3701 - 0.27*(t1133*t1257*t3701 - 1.*t1259*t1274*t3701) - 0.037*(t1489 + t3721);
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=-0.25*t3771 - 0.27*(t1274*(-1.*t1259*t3761 - 1.*t1133*t3767) + t1257*t3771);
  p_output1[67]=-0.25*t3860 - 0.27*(t1274*(-1.*t1259*t3818 - 1.*t1133*t3852) + t1257*t3860);
  p_output1[68]=-0.25*t3953 - 0.27*(t1274*(-1.*t1259*t3928 - 1.*t1133*t3943) + t1257*t3953);
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=-0.27*(-1.*t1274*(0. + t1259*t3761 + t1133*t3767) + t1246*(0. + t3765 + t3769));
  p_output1[76]=-0.27*(-1.*t1274*(0. + t1259*t3818 + t1133*t3852) + t1246*(0. + t3839 + t3855));
  p_output1[77]=-0.27*(-1.*t1274*(0. + t1259*t3928 + t1133*t3943) + t1246*(0. + t3934 + t3948));
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0.037*(t3179 - 1.*t3160*t454) - 0.25*t4149*t572 - 0.27*(t4149*t572*t643 - 1.*t4149*t658*t663);
  p_output1[82]=0.037*(t4188 - 1.*t3639*t454) - 0.25*t4183*t572 - 0.27*(t4183*t572*t643 - 1.*t4183*t658*t663);
  p_output1[83]=0.037*(t1007 + t4231) - 0.25*t4224*t572 - 0.27*(t4224*t572*t643 - 1.*t4224*t658*t663);
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
  p_output1[90]=-0.25*t4300 - 0.27*(t4300*t643 + (-1.*t4273*t572 - 1.*t3761*t658)*t663);
  p_output1[91]=-0.25*t4345 - 0.27*(t4345*t643 + (-1.*t4339*t572 - 1.*t3818*t658)*t663);
  p_output1[92]=-0.25*t4401 - 0.27*(t4401*t643 + (-1.*t4397*t572 - 1.*t3928*t658)*t663);
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=-0.27*((0. + t4265 + t4296)*t636 - 1.*(0. + t4273*t572 + t3761*t658)*t663);
  p_output1[100]=-0.27*((0. + t4334 + t4342)*t636 - 1.*(0. + t4339*t572 + t3818*t658)*t663);
  p_output1[101]=-0.27*((0. + t4398 + t4399)*t636 - 1.*(0. + t4397*t572 + t3928*t658)*t663);
  p_output1[102]=0;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=0;
  p_output1[106]=0;
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
  p_output1[141]=0.037*(-1.*t1550*t3160 + t3519) - 0.25*t1604*t4606 - 0.27*(t1604*t1676*t4606 - 1.*t1689*t1697*t4606);
  p_output1[142]=-0.25*t1604*t4638 - 0.27*(t1604*t1676*t4638 - 1.*t1689*t1697*t4638) + 0.037*(-1.*t1550*t3639 + t4641);
  p_output1[143]=-0.25*t1604*t4680 - 0.27*(t1604*t1676*t4680 - 1.*t1689*t1697*t4680) + 0.037*(t1816 + t4691);
  p_output1[144]=0;
  p_output1[145]=0;
  p_output1[146]=0;
  p_output1[147]=0;
  p_output1[148]=0;
  p_output1[149]=0;
  p_output1[150]=-0.25*t4734 - 0.27*(t1697*(-1.*t1689*t3761 - 1.*t1604*t4728) + t1676*t4734);
  p_output1[151]=-0.25*t4774 - 0.27*(t1697*(-1.*t1689*t3818 - 1.*t1604*t4759) + t1676*t4774);
  p_output1[152]=-0.25*t4844 - 0.27*(t1697*(-1.*t1689*t3928 - 1.*t1604*t4836) + t1676*t4844);
  p_output1[153]=0;
  p_output1[154]=0;
  p_output1[155]=0;
  p_output1[156]=0;
  p_output1[157]=0;
  p_output1[158]=0;
  p_output1[159]=-0.27*(-1.*t1697*(0. + t1689*t3761 + t1604*t4728) + t1673*(0. + t4725 + t4729));
  p_output1[160]=-0.27*(-1.*t1697*(0. + t1689*t3818 + t1604*t4759) + t1673*(0. + t4757 + t4766));
  p_output1[161]=-0.27*(-1.*t1697*(0. + t1689*t3928 + t1604*t4836) + t1673*(0. + t4837 + t4838));
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
