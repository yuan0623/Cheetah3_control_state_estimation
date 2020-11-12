/*
 * Automatically Generated from Mathematica.
 * Fri 21 Dec 2018 15:12:03 GMT-05:00
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
  double t204;
  double t156;
  double t217;
  double t68;
  double t223;
  double t48;
  double t522;
  double t321;
  double t505;
  double t340;
  double t1058;
  double t1135;
  double t1074;
  double t1088;
  double t1288;
  double t1328;
  double t1342;
  double t1218;
  double t1236;
  double t1254;
  double t1260;
  double t1116;
  double t1134;
  double t1151;
  double t1155;
  double t1467;
  double t1489;
  double t1493;
  double t214;
  double t260;
  double t301;
  double t425;
  double t438;
  double t460;
  double t482;
  double t529;
  double t540;
  double t681;
  double t709;
  double t803;
  double t914;
  double t934;
  double t940;
  double t943;
  double t979;
  double t1040;
  double t1157;
  double t1164;
  double t1273;
  double t1284;
  double t1367;
  double t1383;
  double t1418;
  double t1495;
  double t1502;
  double t1518;
  double t1523;
  double t1527;
  double t1533;
  double t1551;
  double t1565;
  double t1569;
  double t1570;
  double t1573;
  double t1581;
  double t1591;
  double t1597;
  double t1609;
  double t1678;
  double t1684;
  double t1705;
  double t1748;
  double t1762;
  double t1763;
  double t1776;
  double t2104;
  double t2110;
  double t2124;
  double t2132;
  double t2154;
  double t2194;
  double t2213;
  double t2219;
  double t2223;
  double t2265;
  double t2308;
  double t2312;
  double t2505;
  double t2568;
  double t2587;
  double t2501;
  double t2598;
  double t2623;
  double t2638;
  double t2641;
  double t2644;
  double t2652;
  double t2655;
  double t2660;
  double t2787;
  double t2816;
  double t2826;
  double t2856;
  double t2860;
  double t2861;
  double t2947;
  double t2969;
  double t3011;
  double t3013;
  double t3020;
  double t3029;
  double t3047;
  double t3048;
  double t3067;
  double t3115;
  double t3133;
  double t3138;
  double t2881;
  double t3035;
  double t3040;
  double t3148;
  double t3164;
  double t3167;
  double t2636;
  double t2679;
  double t2709;
  double t2468;
  double t2476;
  double t2477;
  double t3328;
  double t3335;
  double t3348;
  double t3575;
  double t3577;
  double t3578;
  double t3579;
  double t3569;
  double t3584;
  double t3589;
  double t3590;
  double t3593;
  double t3596;
  double t3598;
  double t3599;
  double t3605;
  double t3615;
  double t3616;
  double t3617;
  double t3633;
  double t3636;
  double t3641;
  double t3707;
  double t3728;
  double t3729;
  double t3659;
  double t3661;
  double t3671;
  double t3751;
  double t3758;
  double t3770;
  double t3606;
  double t3619;
  double t3623;
  double t3939;
  double t3940;
  double t3951;
  double t4175;
  double t4176;
  double t4181;
  double t4196;
  double t4204;
  double t4217;
  double t4241;
  double t4246;
  double t4261;
  double t4276;
  double t4278;
  double t4285;
  double t2717;
  double t4798;
  double t4805;
  double t4807;
  double t3212;
  double t3358;
  double t4847;
  double t4848;
  double t4884;
  double t3393;
  double t3732;
  double t5094;
  double t5098;
  double t5102;
  double t3837;
  double t3966;
  double t4004;
  double t3042;
  double t3078;
  double t3095;
  double t4846;
  double t4917;
  double t4758;
  double t4821;
  double t3218;
  double t3231;
  double t3234;
  double t3362;
  double t3368;
  double t3369;
  double t4986;
  double t5272;
  double t5287;
  double t4993;
  double t5017;
  double t5022;
  double t3394;
  double t3428;
  double t3457;
  double t3776;
  double t3781;
  double t3796;
  double t5073;
  double t5110;
  double t5131;
  double t5137;
  double t3838;
  double t3843;
  double t3858;
  double t3970;
  double t3985;
  double t3987;
  double t5214;
  double t5220;
  double t5239;
  double t5244;
  double t4020;
  double t4025;
  double t4026;
  double t5612;
  double t5613;
  double t5616;
  double t5664;
  double t5665;
  double t5670;
  double t5763;
  double t5767;
  double t5769;
  double t5784;
  double t5788;
  double t5790;
  double t5817;
  double t5818;
  double t5822;
  double t5853;
  double t5856;
  double t5857;
  double t4695;
  double t4708;
  double t5939;
  double t5946;
  double t5951;
  double t5953;
  double t5954;
  double t5976;
  double t5977;
  double t5979;
  double t4948;
  double t4949;
  double t4950;
  double t4964;
  double t4979;
  double t5003;
  double t5005;
  double t5008;
  double t5063;
  double t5069;
  double t6057;
  double t6059;
  double t6045;
  double t6051;
  double t6055;
  double t5147;
  double t5148;
  double t5186;
  double t5201;
  double t5208;
  double t5250;
  double t5251;
  double t5253;
  double t5969;
  double t5983;
  double t5952;
  double t5958;
  double t6007;
  double t6012;
  double t6027;
  double t6029;
  double t6056;
  double t6065;
  double t6071;
  double t6079;
  double t6098;
  double t6103;
  double t6109;
  double t6111;
  double t6307;
  double t6308;
  double t6311;
  double t6341;
  double t6346;
  double t6359;
  double t6392;
  double t6422;
  double t6436;
  double t1894;
  double t1895;
  double t1896;
  double t1913;
  double t1918;
  double t1920;
  double t6561;
  double t6562;
  double t6566;
  double t6570;
  double t6572;
  double t6574;
  double t6616;
  double t6626;
  double t6650;
  double t6652;
  double t6654;
  double t6668;
  double t6669;
  double t6674;
  double t6785;
  double t6786;
  double t6788;
  double t6789;
  double t6791;
  double t6792;
  double t6793;
  double t6795;
  double t6798;
  double t6800;
  double t6675;
  double t6692;
  double t6871;
  double t6873;
  double t6874;
  double t6892;
  double t6910;
  double t6915;
  double t6698;
  double t6327;
  double t6328;
  double t6717;
  double t6762;
  double t6767;
  double t6801;
  double t6828;
  double t6833;
  double t6982;
  double t6983;
  double t6984;
  double t6976;
  double t6978;
  double t6979;
  double t6841;
  double t6339;
  double t6364;
  double t6365;
  double t6853;
  double t6857;
  double t7040;
  double t7042;
  double t7030;
  double t7031;
  double t7032;
  double t6269;
  double t6271;
  double t6274;
  double t6279;
  double t6281;
  double t6283;
  double t6284;
  double t6286;
  double t7027;
  double t7028;
  double t7038;
  double t7039;
  double t7043;
  double t7045;
  double t7050;
  double t7052;
  double t7054;
  double t6301;
  double t6304;
  double t6314;
  double t6316;
  double t6317;
  double t6332;
  double t6368;
  double t6556;
  double t6557;
  double t6559;
  double t6560;
  double t6569;
  double t6579;
  double t6586;
  double t6587;
  double t6605;
  double t1927;
  double t2034;
  double t2037;
  double t6606;
  double t6610;
  double t6611;
  double t6612;
  double t6774;
  double t7157;
  double t7160;
  double t7161;
  double t6825;
  double t6827;
  double t7162;
  double t7163;
  double t7165;
  double t7186;
  double t7188;
  double t7189;
  double t6846;
  double t6848;
  double t7199;
  double t7201;
  double t7202;
  double t6854;
  double t6975;
  double t7192;
  double t7206;
  double t6988;
  double t6989;
  double t7257;
  double t7259;
  double t7261;
  double t7251;
  double t7252;
  double t7253;
  double t7215;
  double t7006;
  double t7221;
  double t7009;
  double t7012;
  t204 = Cos(var1[7]);
  t156 = Cos(var1[6]);
  t217 = Sin(var1[5]);
  t68 = Cos(var1[5]);
  t223 = Sin(var1[6]);
  t48 = Sin(var1[3]);
  t522 = Sin(var1[7]);
  t321 = Cos(var1[3]);
  t505 = Cos(var1[4]);
  t340 = Sin(var1[4]);
  t1058 = Cos(var1[8]);
  t1135 = Sin(var1[8]);
  t1074 = -1.*t1058;
  t1088 = 1. + t1074;
  t1288 = -1.*t1058*t522;
  t1328 = -1.*t204*t1135;
  t1342 = t1288 + t1328;
  t1218 = 0.100689*t1088;
  t1236 = 0.080689*t1058;
  t1254 = -0.16*t1135;
  t1260 = t1218 + t1236 + t1254;
  t1116 = -0.20833*t1088;
  t1134 = -0.36833*t1058;
  t1151 = 0.02*t1135;
  t1155 = t1116 + t1134 + t1151;
  t1467 = t204*t1058;
  t1489 = -1.*t522*t1135;
  t1493 = t1467 + t1489;
  t214 = t68*t156*t204;
  t260 = t204*t217*t223;
  t301 = t214 + t260;
  t425 = -1.*t156*t204*t217;
  t438 = t68*t204*t223;
  t460 = t425 + t438;
  t482 = -1.*t340*t460;
  t529 = t505*t522;
  t540 = t482 + t529;
  t681 = -1.*t68*t156*t522;
  t709 = -1.*t217*t223*t522;
  t803 = t681 + t709;
  t914 = t505*t204;
  t934 = t156*t217*t522;
  t940 = -1.*t68*t223*t522;
  t943 = t934 + t940;
  t979 = -1.*t340*t943;
  t1040 = t914 + t979;
  t1157 = t1058*t1155;
  t1164 = -0.242889*t1135;
  t1273 = t1260*t1135;
  t1284 = t1157 + t1164 + t1273;
  t1367 = t68*t156*t1342;
  t1383 = t217*t223*t1342;
  t1418 = t1367 + t1383;
  t1495 = t505*t1493;
  t1502 = -1.*t156*t217*t1342;
  t1518 = t68*t223*t1342;
  t1523 = t1502 + t1518;
  t1527 = -1.*t340*t1523;
  t1533 = t1495 + t1527;
  t1551 = 0.242889*t1058;
  t1565 = -1.*t1058*t1260;
  t1569 = t1155*t1135;
  t1570 = t1551 + t1565 + t1569;
  t1573 = t68*t156*t1493;
  t1581 = t217*t223*t1493;
  t1591 = t1573 + t1581;
  t1597 = t1058*t522;
  t1609 = t204*t1135;
  t1678 = t1597 + t1609;
  t1684 = t505*t1678;
  t1705 = -1.*t156*t217*t1493;
  t1748 = t68*t223*t1493;
  t1762 = t1705 + t1748;
  t1763 = -1.*t340*t1762;
  t1776 = t1684 + t1763;
  t2104 = -1.*t505*t460;
  t2110 = -1.*t340*t522;
  t2124 = t2104 + t2110;
  t2132 = -1.*t204*t340;
  t2154 = -1.*t505*t943;
  t2194 = t2132 + t2154;
  t2213 = -1.*t340*t1493;
  t2219 = -1.*t505*t1523;
  t2223 = t2213 + t2219;
  t2265 = -1.*t340*t1678;
  t2308 = -1.*t505*t1762;
  t2312 = t2265 + t2308;
  t2505 = -0.04*t204;
  t2568 = 0.04*t522;
  t2587 = t2505 + t2568;
  t2501 = 0.053565*t223;
  t2598 = t156*t2587;
  t2623 = t2501 + t2598;
  t2638 = -1.*t156;
  t2641 = 1. + t2638;
  t2644 = -0.081715*t2641;
  t2652 = -0.13528*t156;
  t2655 = t223*t2587;
  t2660 = t2644 + t2652 + t2655;
  t2787 = t68*t156;
  t2816 = t217*t223;
  t2826 = t2787 + t2816;
  t2856 = -1.*t217*t2623;
  t2860 = t68*t2660;
  t2861 = t2856 + t2860;
  t2947 = -1.*t204;
  t2969 = 1. + t2947;
  t3011 = 0.242889*t2969;
  t3013 = 0.202889*t204;
  t3020 = -0.04*t522;
  t3029 = t3011 + t3013 + t3020;
  t3047 = t505*t2861;
  t3048 = t340*t3029;
  t3067 = t3047 + t3048;
  t3115 = -1.*t505*t2861;
  t3133 = -1.*t340*t3029;
  t3138 = t3115 + t3133;
  t2881 = -1.*t340*t2861;
  t3035 = t505*t3029;
  t3040 = t2881 + t3035;
  t3148 = t505*t460;
  t3164 = t340*t522;
  t3167 = t3148 + t3164;
  t2636 = t68*t2623;
  t2679 = t217*t2660;
  t2709 = t2636 + t2679;
  t2468 = t156*t217;
  t2476 = -1.*t68*t223;
  t2477 = t2468 + t2476;
  t3328 = t204*t340;
  t3335 = t505*t943;
  t3348 = t3328 + t3335;
  t3575 = 0.242889*t522;
  t3577 = -1.*t522*t1260;
  t3578 = t204*t1155;
  t3579 = t3575 + t3577 + t3578;
  t3569 = 0.032875*t223;
  t3584 = t156*t3579;
  t3589 = t3569 + t3584;
  t3590 = -1.*t217*t3589;
  t3593 = -0.11459*t156;
  t3596 = t223*t3579;
  t3598 = t2644 + t3593 + t3596;
  t3599 = t68*t3598;
  t3605 = t3590 + t3599;
  t3615 = t204*t1260;
  t3616 = t522*t1155;
  t3617 = t3011 + t3615 + t3616;
  t3633 = t505*t3605;
  t3636 = t340*t3617;
  t3641 = t3633 + t3636;
  t3707 = t68*t3589;
  t3728 = t217*t3598;
  t3729 = t3707 + t3728;
  t3659 = t340*t1493;
  t3661 = t505*t1523;
  t3671 = t3659 + t3661;
  t3751 = -1.*t340*t3605;
  t3758 = t505*t3617;
  t3770 = t3751 + t3758;
  t3606 = -1.*t505*t3605;
  t3619 = -1.*t340*t3617;
  t3623 = t3606 + t3619;
  t3939 = t340*t1678;
  t3940 = t505*t1762;
  t3951 = t3939 + t3940;
  t4175 = -1.*t68*t156*t204;
  t4176 = -1.*t204*t217*t223;
  t4181 = t4175 + t4176;
  t4196 = t68*t156*t522;
  t4204 = t217*t223*t522;
  t4217 = t4196 + t4204;
  t4241 = -1.*t68*t156*t1342;
  t4246 = -1.*t217*t223*t1342;
  t4261 = t4241 + t4246;
  t4276 = -1.*t68*t156*t1493;
  t4278 = -1.*t217*t223*t1493;
  t4285 = t4276 + t4278;
  t2717 = -1.*t2477*t2709;
  t4798 = -1.*t68*t2623;
  t4805 = -1.*t217*t2660;
  t4807 = t4798 + t4805;
  t3212 = t301*t2709;
  t3358 = t2477*t2709;
  t4847 = -1.*t156*t217;
  t4848 = t68*t223;
  t4884 = t4847 + t4848;
  t3393 = -1.*t2709*t803;
  t3732 = t2477*t3729;
  t5094 = -1.*t68*t3589;
  t5098 = -1.*t217*t3598;
  t5102 = t5094 + t5098;
  t3837 = -1.*t3729*t1418;
  t3966 = -1.*t2477*t3729;
  t4004 = t3729*t1591;
  t3042 = t340*t2826*t3040;
  t3078 = -1.*t505*t2826*t3067;
  t3095 = t2717 + t3042 + t3078;
  t4846 = -1.*t2477*t2861;
  t4917 = -1.*t2826*t2709;
  t4758 = t301*t2861;
  t4821 = t460*t2709;
  t3218 = t3040*t540;
  t3231 = t3067*t3167;
  t3234 = t3212 + t3218 + t3231;
  t3362 = -1.*t340*t2826*t3040;
  t3368 = t505*t2826*t3067;
  t3369 = t3358 + t3362 + t3368;
  t4986 = t2477*t2861;
  t5272 = Power(t505,2);
  t5287 = Power(t340,2);
  t4993 = t2826*t2709;
  t5017 = -1.*t2709*t943;
  t5022 = -1.*t2861*t803;
  t3394 = -1.*t3067*t3348;
  t3428 = -1.*t3040*t1040;
  t3457 = t3393 + t3394 + t3428;
  t3776 = -1.*t340*t2826*t3770;
  t3781 = t505*t2826*t3641;
  t3796 = t3732 + t3776 + t3781;
  t5073 = t2477*t3605;
  t5110 = t2826*t3729;
  t5131 = -1.*t3729*t1523;
  t5137 = -1.*t3605*t1418;
  t3838 = -1.*t3641*t3671;
  t3843 = -1.*t3770*t1533;
  t3858 = t3837 + t3838 + t3843;
  t3970 = t340*t2826*t3770;
  t3985 = -1.*t505*t2826*t3641;
  t3987 = t3966 + t3970 + t3985;
  t5214 = -1.*t2477*t3605;
  t5220 = -1.*t2826*t3729;
  t5239 = t3729*t1762;
  t5244 = t3605*t1591;
  t4020 = t3641*t3951;
  t4025 = t3770*t1776;
  t4026 = t4004 + t4020 + t4025;
  t5612 = 0.053565*t156;
  t5613 = -1.*t223*t2587;
  t5616 = t5612 + t5613;
  t5664 = 0.032875*t156;
  t5665 = -1.*t223*t3579;
  t5670 = t5664 + t5665;
  t5763 = t156*t204*t217;
  t5767 = -1.*t68*t204*t223;
  t5769 = t5763 + t5767;
  t5784 = -1.*t156*t217*t522;
  t5788 = t68*t223*t522;
  t5790 = t5784 + t5788;
  t5817 = t156*t217*t1342;
  t5818 = -1.*t68*t223*t1342;
  t5822 = t5817 + t5818;
  t5853 = t156*t217*t1493;
  t5856 = -1.*t68*t223*t1493;
  t5857 = t5853 + t5856;
  t4695 = -1.*t2826*t2861;
  t4708 = t4695 + t2717;
  t5939 = t217*t2623;
  t5946 = t68*t5616;
  t5951 = t5939 + t5946;
  t5953 = -1.*t217*t5616;
  t5954 = t2636 + t5953;
  t5976 = -1.*t68*t156;
  t5977 = -1.*t217*t223;
  t5979 = t5976 + t5977;
  t4948 = t460*t2861;
  t4949 = t3029*t522;
  t4950 = t4948 + t3212 + t4949;
  t4964 = t2826*t2861;
  t4979 = t4964 + t3358;
  t5003 = -1.*t204*t3029;
  t5005 = -1.*t2861*t943;
  t5008 = t5003 + t5005 + t3393;
  t5063 = t2826*t3605;
  t5069 = t5063 + t3732;
  t6057 = -1.*t217*t5670;
  t6059 = t3707 + t6057;
  t6045 = t217*t3589;
  t6051 = t68*t5670;
  t6055 = t6045 + t6051;
  t5147 = -1.*t3617*t1493;
  t5148 = -1.*t3605*t1523;
  t5186 = t5147 + t5148 + t3837;
  t5201 = -1.*t2826*t3605;
  t5208 = t5201 + t3966;
  t5250 = t3617*t1678;
  t5251 = t3605*t1762;
  t5253 = t5250 + t5251 + t4004;
  t5969 = -1.*t2477*t5951;
  t5983 = -1.*t5979*t2709;
  t5952 = t301*t5951;
  t5958 = t5769*t2709;
  t6007 = t2477*t5951;
  t6012 = t5979*t2709;
  t6027 = -1.*t2709*t5790;
  t6029 = -1.*t5951*t803;
  t6056 = t2477*t6055;
  t6065 = t5979*t3729;
  t6071 = -1.*t3729*t5822;
  t6079 = -1.*t6055*t1418;
  t6098 = -1.*t2477*t6055;
  t6103 = -1.*t5979*t3729;
  t6109 = t3729*t5857;
  t6111 = t6055*t1591;
  t6307 = -1.*t204*t1058;
  t6308 = t522*t1135;
  t6311 = t6307 + t6308;
  t6341 = -1.*t156*t217*t6311;
  t6346 = t68*t223*t6311;
  t6359 = t6341 + t6346;
  t6392 = -1.*t340*t5769;
  t6422 = -1.*t505*t522;
  t6436 = t6392 + t6422;
  t1894 = t321*t803;
  t1895 = -1.*t48*t1040;
  t1896 = t1894 + t1895;
  t1913 = t321*t1418;
  t1918 = -1.*t48*t1533;
  t1920 = t1913 + t1918;
  t6561 = t68*t156*t6311;
  t6562 = t217*t223*t6311;
  t6566 = t6561 + t6562;
  t6570 = t505*t1342;
  t6572 = -1.*t340*t6359;
  t6574 = t6570 + t6572;
  t6616 = 0.04*t204;
  t6626 = t6616 + t2568;
  t6650 = -1.*t156*t217*t6626;
  t6652 = t68*t223*t6626;
  t6654 = t6650 + t6652;
  t6668 = t68*t156*t6626;
  t6669 = t217*t223*t6626;
  t6674 = t6668 + t6669;
  t6785 = 0.242889*t204;
  t6786 = -1.*t204*t1260;
  t6788 = -1.*t522*t1155;
  t6789 = t6785 + t6786 + t6788;
  t6791 = -1.*t156*t217*t6789;
  t6792 = t68*t223*t6789;
  t6793 = t6791 + t6792;
  t6795 = t68*t156*t6789;
  t6798 = t217*t223*t6789;
  t6800 = t6795 + t6798;
  t6675 = -1.*t2477*t6674;
  t6692 = t301*t6674;
  t6871 = -1.*t340*t6654;
  t6873 = t505*t2587;
  t6874 = t6871 + t6873;
  t6892 = t505*t6654;
  t6910 = t340*t2587;
  t6915 = t6892 + t6910;
  t6698 = t2709*t803;
  t6327 = t505*t5769;
  t6328 = t6327 + t2110;
  t6717 = t2477*t6674;
  t6762 = -1.*t4181*t2709;
  t6767 = -1.*t6674*t803;
  t6801 = -1.*t2477*t6800;
  t6828 = t3729*t1418;
  t6833 = t6800*t1591;
  t6982 = t505*t6793;
  t6983 = t340*t3579;
  t6984 = t6982 + t6983;
  t6976 = -1.*t340*t6793;
  t6978 = t505*t3579;
  t6979 = t6976 + t6978;
  t6841 = t2477*t6800;
  t6339 = t340*t1342;
  t6364 = t505*t6359;
  t6365 = t6339 + t6364;
  t6853 = -1.*t6800*t1418;
  t6857 = -1.*t3729*t6566;
  t7040 = -0.16*t1058;
  t7042 = t7040 + t1151;
  t7030 = 0.02*t1058;
  t7031 = 0.16*t1135;
  t7032 = t7030 + t7031;
  t6269 = t223*t3589;
  t6271 = -1.*t156*t3598;
  t6274 = t6269 + t6271;
  t6279 = -0.241*t6274*t1493*t1284;
  t6281 = -1.*t223*t3589;
  t6283 = t156*t3598;
  t6284 = t6281 + t6283;
  t6286 = -0.241*t6284*t1342*t1570;
  t7027 = -0.242889*t1058;
  t7028 = t1058*t1260;
  t7038 = t1058*t7032;
  t7039 = -1.*t1155*t1135;
  t7043 = t7042*t1135;
  t7045 = t7027 + t7028 + t7038 + t7039 + t7043;
  t7050 = -1.*t1058*t7042;
  t7052 = t7032*t1135;
  t7054 = t1157 + t7050 + t1164 + t1273 + t7052;
  t6301 = -0.007922875*t1342*t1570;
  t6304 = -0.11459*t1493;
  t6314 = -0.081715*t6311;
  t6316 = t6304 + t6314;
  t6317 = -0.241*t1284*t6316;
  t6332 = -0.241*t1570*t3671;
  t6368 = -0.241*t1284*t6365;
  t6556 = t48*t1418;
  t6557 = t321*t1533;
  t6559 = t6556 + t6557;
  t6560 = -0.241*t1570*t6559;
  t6569 = t48*t6566;
  t6579 = t321*t6574;
  t6586 = t6569 + t6579;
  t6587 = -0.241*t1284*t6586;
  t6605 = -0.241*t1570*t1920;
  t1927 = t321*t1591;
  t2034 = -1.*t48*t1776;
  t2037 = t1927 + t2034;
  t6606 = t321*t6566;
  t6610 = -1.*t48*t6574;
  t6611 = t6606 + t6610;
  t6612 = -0.241*t1284*t6611;
  t6774 = t5208*t1418;
  t7157 = -1.*t522*t7042;
  t7160 = t204*t7032;
  t7161 = t7157 + t7160;
  t6825 = t3617*t1493;
  t6827 = t3605*t1523;
  t7162 = -1.*t156*t217*t7161;
  t7163 = t68*t223*t7161;
  t7165 = t7162 + t7163;
  t7186 = t68*t156*t7161;
  t7188 = t217*t223*t7161;
  t7189 = t7186 + t7188;
  t6846 = t5069*t6566;
  t6848 = -1.*t3617*t1342;
  t7199 = t204*t7042;
  t7201 = t522*t7032;
  t7202 = t7199 + t7201;
  t6854 = -1.*t3605*t6359;
  t6975 = t3987*t3671;
  t7192 = -1.*t2477*t7189;
  t7206 = t7189*t1591;
  t6988 = t3641*t3671;
  t6989 = t3770*t1533;
  t7257 = t505*t7165;
  t7259 = t340*t7202;
  t7261 = t7257 + t7259;
  t7251 = -1.*t340*t7165;
  t7252 = t505*t7202;
  t7253 = t7251 + t7252;
  t7215 = t2477*t7189;
  t7006 = t3796*t6365;
  t7221 = -1.*t7189*t1418;
  t7009 = -1.*t3641*t6365;
  t7012 = -1.*t3770*t6574;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=(-0.5*(-0.241*t1284*(-1.*t1533*t321 - 1.*t1418*t48) - 0.241*t1570*(-1.*t1776*t321 - 1.*t1591*t48) - 0.06108*(-1.*t301*t48 - 1.*t321*t540) + 0.06108*(-1.*t1040*t321 - 1.*t48*t803))*var2[1] - 0.5*(0.06108*t1896 - 0.241*t1284*t1920 - 0.241*t1570*t2037 - 0.06108*(t301*t321 - 1.*t48*t540))*var2[2])*var2[7];
  p_output1[4]=(-0.5*(0.06108*t1040 - 0.241*t1284*t1533 - 0.241*t1570*t1776 - 0.06108*t540)*var2[0] - 0.5*(0.06108*t2124*t48 - 0.06108*t2194*t48 + 0.241*t1284*t2223*t48 + 0.241*t1570*t2312*t48)*var2[1] - 0.5*(-0.06108*t2124*t321 + 0.06108*t2194*t321 - 0.241*t1284*t2223*t321 - 0.241*t1570*t2312*t321)*var2[2] - 0.5*(-0.06108*(t1040*t3369 + t3348*(-1.*t2826*t3067*t340 - 1.*t2826*t3138*t340) - 1.*t2826*t340*t3457 + t2826*(-1.*t2194*t3040 - 1.*t1040*t3067 - 1.*t1040*t3138 - 1.*t3040*t3348)*t505) - 0.241*t1570*((-1.*t2826*t340*t3623 - 1.*t2826*t340*t3641)*t3671 + t1533*t3796 - 1.*t2826*t340*t3858 + t2826*(-1.*t1533*t3623 - 1.*t1533*t3641 - 1.*t2223*t3770 - 1.*t3671*t3770)*t505) - 0.241*t1284*((t2826*t340*t3623 + t2826*t340*t3641)*t3951 + t1776*t3987 - 1.*t2826*t340*t4026 + t2826*(t1776*t3623 + t1776*t3641 + t2312*t3770 + t3770*t3951)*t505) + 0.06108*(-1.*t2826*t3234*t340 + t3167*(t2826*t3067*t340 + t2826*t3138*t340) + t3095*t540 + t2826*t505*(t2124*t3040 + t3040*t3167 + t3067*t540 + t3138*t540)))*var2[3])*var2[7];
  p_output1[5]=(-0.5*(-0.06108*t4181*t505 + 0.06108*t4217*t505 - 0.241*t1284*t4261*t505 - 0.241*t1570*t4285*t505)*var2[0] - 0.5*(-0.06108*(t321*t460 + t340*t4181*t48) - 0.241*t1284*(t1523*t321 + t340*t4261*t48) - 0.241*t1570*(t1762*t321 + t340*t4285*t48) + 0.06108*(t340*t4217*t48 + t321*t943))*var2[1] - 0.5*(-0.241*t1284*(-1.*t321*t340*t4261 + t1523*t48) - 0.241*t1570*(-1.*t321*t340*t4285 + t1762*t48) - 0.06108*(-1.*t321*t340*t4181 + t460*t48) + 0.06108*(-1.*t321*t340*t4217 + t48*t943))*var2[2] - 0.5*(-0.06108*(t3369*t4217*t505 + t3457*t4884*t505 + t2826*t505*(t3040*t340*t4217 + t1040*t340*t4807 + t5017 + t5022 - 1.*t3067*t4217*t505 - 1.*t3348*t4807*t505) + t3348*(-1.*t3040*t340*t4884 + t4986 + t4993 + t3067*t4884*t505 + t2826*t4807*t5272 + t2826*t4807*t5287)) - 0.241*t1284*(t3987*t4285*t505 + t4026*t4884*t505 + t2826*t505*(-1.*t340*t3770*t4285 + t3641*t4285*t505 - 1.*t1776*t340*t5102 + t3951*t505*t5102 + t5239 + t5244) + t3951*(t340*t3770*t4884 - 1.*t3641*t4884*t505 + t5214 + t5220 - 1.*t2826*t5102*t5272 - 1.*t2826*t5102*t5287)) - 0.241*t1570*(t3796*t4261*t505 + t3858*t4884*t505 + t2826*t505*(t340*t3770*t4261 - 1.*t3641*t4261*t505 + t1533*t340*t5102 - 1.*t3671*t505*t5102 + t5131 + t5137) + t3671*(-1.*t340*t3770*t4884 + t3641*t4884*t505 + t5073 + t5110 + t2826*t5102*t5272 + t2826*t5102*t5287)) + 0.06108*(t3095*t4181*t505 + t3234*t4884*t505 + t3167*(t4846 + t3040*t340*t4884 + t4917 - 1.*t3067*t4884*t505 - 1.*t2826*t4807*t5272 - 1.*t2826*t4807*t5287) + t2826*t505*(-1.*t3040*t340*t4181 + t4758 + t4821 + t3067*t4181*t505 + t3167*t4807*t505 - 1.*t340*t4807*t540)))*var2[3] - 0.5*(0.06108*(t460*t4708 + t2477*(t2861*t4181 + t4758 + t460*t4807 + t4821) + t301*(-1.*t2826*t4807 + t4846 - 1.*t2861*t4884 + t4917) + t2826*t4950) - 0.241*t1570*(t1523*t5069 + t1418*(t3605*t4884 + t5073 + t2826*t5102 + t5110) + t2477*(-1.*t3605*t4261 - 1.*t1523*t5102 + t5131 + t5137) + t2826*t5186) - 0.241*t1284*(t1762*t5208 + t1591*(-1.*t3605*t4884 - 1.*t2826*t5102 + t5214 + t5220) + t2477*(t3605*t4285 + t1762*t5102 + t5239 + t5244) + t2826*t5253) - 0.06108*(t2826*t5008 + (t2826*t4807 + t2861*t4884 + t4986 + t4993)*t803 + t4979*t943 + t2477*(-1.*t2861*t4217 + t5017 + t5022 - 1.*t4807*t943)))*var2[4])*var2[7];
  p_output1[6]=(-0.5*(-0.241*t1284*t1418*t505 - 0.241*t1570*t1591*t505 - 0.06108*t301*t505 + 0.06108*t505*t803)*var2[0] - 0.5*(-0.06108*(t301*t340*t48 + t321*t5769) - 0.241*t1284*(t1418*t340*t48 + t321*t5822) - 0.241*t1570*(t1591*t340*t48 + t321*t5857) + 0.06108*(t321*t5790 + t340*t48*t803))*var2[1] - 0.5*(-0.06108*(-1.*t301*t321*t340 + t48*t5769) - 0.241*t1284*(-1.*t1418*t321*t340 + t48*t5822) - 0.241*t1570*(-1.*t1591*t321*t340 + t48*t5857) + 0.06108*(t48*t5790 - 1.*t321*t340*t803))*var2[2] - 0.5*(0.06108*(t301*t3095*t505 + t2477*t3234*t505 + t2826*t505*(-1.*t301*t3040*t340 + t301*t3067*t505 + t5952 + t3167*t505*t5954 - 1.*t340*t540*t5954 + t5958) + t3167*(t2477*t3040*t340 - 1.*t2477*t3067*t505 - 1.*t2826*t5272*t5954 - 1.*t2826*t5287*t5954 + t5969 + t5983)) - 0.241*t1570*(t1418*t3796*t505 + t2477*t3858*t505 + t3671*(-1.*t2477*t340*t3770 + t2477*t3641*t505 + t6056 + t2826*t5272*t6059 + t2826*t5287*t6059 + t6065) + t2826*t505*(t1418*t340*t3770 - 1.*t1418*t3641*t505 + t1533*t340*t6059 - 1.*t3671*t505*t6059 + t6071 + t6079)) - 0.241*t1284*(t1591*t3987*t505 + t2477*t4026*t505 + t3951*(t2477*t340*t3770 - 1.*t2477*t3641*t505 - 1.*t2826*t5272*t6059 - 1.*t2826*t5287*t6059 + t6098 + t6103) + t2826*t505*(-1.*t1591*t340*t3770 + t1591*t3641*t505 - 1.*t1776*t340*t6059 + t3951*t505*t6059 + t6109 + t6111)) - 0.06108*(t2477*t3457*t505 + t3348*(-1.*t2477*t3040*t340 + t2477*t3067*t505 + t2826*t5272*t5954 + t2826*t5287*t5954 + t6007 + t6012) + t3369*t505*t803 + t2826*t505*(t1040*t340*t5954 - 1.*t3348*t505*t5954 + t6027 + t6029 + t3040*t340*t803 - 1.*t3067*t505*t803)))*var2[3] - 0.5*(0.06108*(t4708*t5769 + t2477*(t4758 + t5952 + t460*t5954 + t5958) + t4950*t5979 + t301*(t4846 - 1.*t2826*t5954 + t5969 + t5983)) - 0.241*t1570*(t5069*t5822 + t5186*t5979 + t1418*(t5073 + t6056 + t2826*t6059 + t6065) + t2477*(t5137 - 1.*t1523*t6059 + t6071 + t6079)) - 0.241*t1284*(t5208*t5857 + t5253*t5979 + t1591*(t5214 - 1.*t2826*t6059 + t6098 + t6103) + t2477*(t5244 + t1762*t6059 + t6109 + t6111)) - 0.06108*(t4979*t5790 + t5008*t5979 + (t4986 + t2826*t5954 + t6007 + t6012)*t803 + t2477*(t5022 + t6027 + t6029 - 1.*t5954*t943)))*var2[4] - 0.5*(-0.06108*t204*(-1.*t223*t2660 - 1.*t223*t5616) + 0.06108*t522*(t223*t2660 + t223*t5616) - 0.241*t1493*t1570*(-1.*t223*t3598 - 1.*t223*t5670) - 0.241*t1284*t1678*(t223*t3598 + t223*t5670))*var2[5])*var2[7];
  p_output1[7]=(-0.5*(-0.06108*t3348 + 0.06108*t6328 + t6332 + t6368)*var2[0] - 0.5*(-0.06108*t1896 + 0.06108*(t321*t4181 - 1.*t48*t6436) + t6605 + t6612)*var2[1] - 0.5*(0.06108*(t4181*t48 + t321*t6436) + t6560 + t6587 - 0.06108*(t1040*t321 + t48*t803))*var2[2] - 0.5*(0.06108*(t3095*t3348 + t2826*t505*(t1040*t3040 + t3067*t3348 + t6692 + t6698 + t540*t6874 + t3167*t6915) + t3167*(t6675 + t2826*t340*t6874 - 1.*t2826*t505*t6915)) - 0.06108*(t3369*t6328 + t2826*t505*(-1.*t3067*t6328 - 1.*t3040*t6436 + t6762 + t6767 - 1.*t1040*t6874 - 1.*t3348*t6915) + t3348*(t6717 - 1.*t2826*t340*t6874 + t2826*t505*t6915)) - 0.241*t1284*(t6975 + t3951*(t6801 + t2826*t340*t6979 - 1.*t2826*t505*t6984) + t2826*t505*(t6828 + t6833 + t1776*t6979 + t3951*t6984 + t6988 + t6989)) - 0.241*t1570*(t3671*(t6841 - 1.*t2826*t340*t6979 + t2826*t505*t6984) + t7006 + t2826*t505*(t6853 + t6857 - 1.*t1533*t6979 - 1.*t3671*t6984 + t7009 + t7012)))*var2[3] - 0.5*(-0.241*t1284*(t6774 + t1591*(-1.*t2826*t6793 + t6801) + t2477*(t1678*t3579 + t1762*t6793 + t6825 + t6827 + t6828 + t6833)) - 0.241*t1570*(t1418*(t2826*t6793 + t6841) + t6846 + t2477*(-1.*t1493*t3579 - 1.*t1523*t6793 + t6848 + t6853 + t6854 + t6857)) + 0.06108*(t301*(-1.*t2826*t6654 + t6675) + t4708*t803 + t2477*(t204*t3029 + t2587*t522 + t460*t6654 + t6692 + t6698 + t2861*t943)) - 0.06108*(t4181*t4979 + (t2826*t6654 + t6717)*t803 + t2477*(-1.*t204*t2587 + t4949 - 1.*t2861*t5769 + t6762 + t6767 - 1.*t6654*t943)))*var2[4] - 0.5*(0.06108*t204*(t223*t2623 - 1.*t156*t2660) + 0.06108*(-1.*t223*t2623 + t156*t2660)*t522 + t6279 + t6286)*var2[5] - 0.5*(-0.0032717502*t204 + 0.0032717502*t522 + t6301 + t6317)*var2[6])*var2[7];
  p_output1[8]=var2[7]*(-0.5*(t6332 + t6368 - 0.241*t3671*t7045 - 0.241*t3951*t7054)*var2[0] - 0.5*(t6605 + t6612 - 0.241*t1920*t7045 - 0.241*t2037*t7054)*var2[1] - 0.5*(t6560 + t6587 - 0.241*t6559*t7045 - 0.241*(t1776*t321 + t1591*t48)*t7054)*var2[2] - 0.5*(-0.241*(t3951*t3987 + t2826*t4026*t505)*t7045 - 0.241*(t3671*t3796 + t2826*t3858*t505)*t7054 - 0.241*t1284*(t6975 + t2826*t505*(t6828 + t6988 + t6989 + t7206 + t1776*t7253 + t3951*t7261) + t3951*(t7192 + t2826*t340*t7253 - 1.*t2826*t505*t7261)) - 0.241*t1570*(t7006 + t2826*t505*(t6857 + t7009 + t7012 + t7221 - 1.*t1533*t7253 - 1.*t3671*t7261) + t3671*(t7215 - 1.*t2826*t340*t7253 + t2826*t505*t7261)))*var2[3] - 0.5*(-0.241*(t1591*t5208 + t2477*t5253)*t7045 - 0.241*(t1418*t5069 + t2477*t5186)*t7054 - 0.241*t1284*(t6774 + t1591*(-1.*t2826*t7165 + t7192) + t2477*(t6825 + t6827 + t6828 + t1762*t7165 + t1678*t7202 + t7206)) - 0.241*t1570*(t6846 + t1418*(t2826*t7165 + t7215) + t2477*(t6848 + t6854 + t6857 - 1.*t1523*t7165 - 1.*t1493*t7202 + t7221)))*var2[4] - 0.5*(t6279 + t6286 - 0.241*t1678*t6274*t7045 - 0.241*t1493*t6284*t7054)*var2[5] - 0.5*(t6301 + t6317 - 0.241*(-0.081715*t1342 - 0.11459*t1678)*t7045 - 0.007922875*t1493*t7054)*var2[6] - 0.5*(-0.482*t1284*t7045 - 0.482*t1570*t7054)*var2[7] - 0.5*(0.03856*t7045 - 0.00482*t7054)*var2[8]);
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

#include "Ce3_vec8_plane.hh"

namespace SymFunction
{

void Ce3_vec8_plane_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
