/*
 * Automatically Generated from Mathematica.
 * Sun 28 Jul 2019 02:50:33 GMT-04:00
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
  double t77;
  double t119;
  double t133;
  double t137;
  double t145;
  double t152;
  double t197;
  double t51;
  double t61;
  double t67;
  double t233;
  double t306;
  double t322;
  double t338;
  double t235;
  double t749;
  double t740;
  double t803;
  double t806;
  double t833;
  double t723;
  double t748;
  double t751;
  double t756;
  double t772;
  double t790;
  double t797;
  double t800;
  double t802;
  double t836;
  double t846;
  double t883;
  double t912;
  double t917;
  double t919;
  double t932;
  double t447;
  double t452;
  double t399;
  double t407;
  double t658;
  double t664;
  double t553;
  double t606;
  double t203;
  double t259;
  double t267;
  double t1189;
  double t1243;
  double t340;
  double t343;
  double t348;
  double t981;
  double t982;
  double t984;
  double t1038;
  double t1043;
  double t1086;
  double t1090;
  double t1099;
  double t1107;
  double t421;
  double t534;
  double t541;
  double t652;
  double t670;
  double t685;
  double t1576;
  double t1581;
  double t1594;
  double t1596;
  double t1602;
  double t1607;
  double t1609;
  double t1611;
  double t1613;
  double t1617;
  double t1621;
  double t1632;
  double t1638;
  double t1642;
  double t1648;
  double t1657;
  double t1664;
  double t1687;
  double t1692;
  double t1708;
  double t1714;
  double t965;
  double t1007;
  double t1087;
  double t1109;
  double t1200;
  double t1201;
  double t1229;
  double t1267;
  double t1278;
  double t1288;
  double t1424;
  double t1425;
  double t1432;
  double t1444;
  double t1469;
  double t1470;
  double t1493;
  double t1530;
  double t2260;
  double t2263;
  double t2298;
  double t2307;
  double t2341;
  double t2361;
  double t2401;
  double t2409;
  double t2414;
  double t1728;
  double t1747;
  double t1756;
  double t1759;
  double t1802;
  double t1813;
  double t1820;
  double t1848;
  double t2807;
  double t2808;
  double t2804;
  double t2817;
  double t2825;
  double t2831;
  double t2835;
  double t2836;
  double t2838;
  double t2847;
  double t2848;
  double t2849;
  double t2850;
  double t2864;
  double t2942;
  double t3008;
  double t3010;
  double t3013;
  double t2803;
  double t2944;
  double t2786;
  double t2758;
  double t3372;
  double t3389;
  double t3409;
  double t3420;
  double t3424;
  double t3429;
  double t3133;
  double t3197;
  double t3218;
  double t3248;
  double t3258;
  double t3099;
  double t3113;
  double t3125;
  double t3452;
  double t3454;
  double t3457;
  double t3459;
  double t3466;
  double t3469;
  double t3470;
  double t3473;
  double t3474;
  double t3486;
  double t3489;
  double t3504;
  double t2762;
  double t2800;
  double t2801;
  double t3126;
  double t3320;
  double t3365;
  double t3430;
  double t3431;
  double t3478;
  double t3517;
  double t3519;
  double t3439;
  double t3443;
  double t3539;
  double t3540;
  double t3541;
  double t2957;
  double t3021;
  double t3052;
  double t2732;
  double t2734;
  double t2750;
  double t3060;
  double t3073;
  double t3077;
  double t3812;
  double t3815;
  double t3818;
  double t4117;
  double t4123;
  double t4142;
  double t4173;
  double t4174;
  double t4192;
  double t3563;
  double t3570;
  double t3573;
  double t3582;
  double t4095;
  double t3710;
  double t3714;
  double t3751;
  double t3770;
  double t4112;
  double t3868;
  double t3877;
  double t3883;
  double t3906;
  double t3975;
  double t3983;
  double t3985;
  double t3990;
  double t1011;
  double t4617;
  double t4565;
  double t4571;
  double t4585;
  double t1122;
  double t4877;
  double t4890;
  double t4900;
  double t4901;
  double t4936;
  double t4945;
  double t4948;
  double t4949;
  double t4909;
  double t4919;
  double t4925;
  double t4937;
  double t4954;
  double t4959;
  double t4964;
  double t4967;
  double t4973;
  double t4855;
  double t5399;
  double t5410;
  double t5413;
  double t5417;
  double t5422;
  double t5441;
  double t5445;
  double t5478;
  double t5622;
  double t5636;
  double t5640;
  double t5658;
  double t5670;
  double t5680;
  double t4998;
  double t5519;
  double t5564;
  double t5566;
  double t5021;
  double t5034;
  double t5647;
  double t5682;
  double t5689;
  double t5701;
  double t5705;
  double t5713;
  double t5091;
  double t5157;
  double t5178;
  double t5179;
  double t3053;
  double t3366;
  double t3605;
  double t3620;
  double t3820;
  double t3828;
  double t3932;
  double t3933;
  double t5902;
  double t5912;
  double t4105;
  double t4115;
  double t4264;
  double t4286;
  double t6000;
  double t6001;
  double t6022;
  double t6036;
  double t6046;
  double t4456;
  double t4457;
  double t4522;
  double t4524;
  double t6130;
  double t6149;
  double t6164;
  double t4929;
  double t5011;
  double t5092;
  double t5177;
  double t6979;
  double t5614;
  double t7040;
  double t7046;
  double t5736;
  double t7079;
  double t5766;
  double t7120;
  double t7126;
  double t5803;
  double t7805;
  double t7812;
  double t7820;
  double t7827;
  double t7858;
  double t7860;
  double t7867;
  double t7884;
  double t8124;
  double t8133;
  double t8136;
  double t8137;
  double t8149;
  double t8161;
  t77 = Cos(var1[17]);
  t119 = Sin(var1[16]);
  t133 = -1.*t77*t119;
  t137 = Cos(var1[16]);
  t145 = Sin(var1[17]);
  t152 = -1.*t137*t145;
  t197 = 0. + t133 + t152;
  t51 = Cos(var1[4]);
  t61 = Cos(var1[15]);
  t67 = Cos(var1[5]);
  t233 = Sin(var1[15]);
  t306 = t137*t77;
  t322 = -1.*t119*t145;
  t338 = 0. + t306 + t322;
  t235 = Sin(var1[5]);
  t749 = t133 + t152;
  t740 = Sin(var1[4]);
  t803 = -1.*t137*t77;
  t806 = t119*t145;
  t833 = t803 + t806;
  t723 = t306 + t322;
  t748 = t723*t740;
  t751 = -1.*t67*t233*t749;
  t756 = -1.*t61*t749*t235;
  t772 = t751 + t756;
  t790 = t51*t772;
  t797 = t748 + t790;
  t800 = 0.004820000000000004*t797;
  t802 = t749*t740;
  t836 = -1.*t67*t233*t833;
  t846 = -1.*t61*t833*t235;
  t883 = t836 + t846;
  t912 = t51*t883;
  t917 = t802 + t912;
  t919 = -0.03856*t917;
  t932 = t800 + t919;
  t447 = -1.*t233*t197;
  t452 = 0. + t447;
  t399 = t61*t197;
  t407 = 0. + t399;
  t658 = -1.*t233*t338;
  t664 = 0. + t658;
  t553 = t61*t338;
  t606 = 0. + t553;
  t203 = -1.*t61*t67*t197;
  t259 = t233*t197*t235;
  t267 = t203 + t259;
  t1189 = Cos(var1[3]);
  t1243 = Sin(var1[3]);
  t340 = -1.*t61*t67*t338;
  t343 = t233*t338*t235;
  t348 = t340 + t343;
  t981 = t67*t452;
  t982 = -1.*t407*t235;
  t984 = 0. + t981 + t982;
  t1038 = t77*t119;
  t1043 = t137*t145;
  t1086 = 0. + t1038 + t1043;
  t1090 = t67*t664;
  t1099 = -1.*t606*t235;
  t1107 = 0. + t1090 + t1099;
  t421 = -1.*t67*t407;
  t534 = -1.*t452*t235;
  t541 = t421 + t534;
  t652 = -1.*t67*t606;
  t670 = -1.*t664*t235;
  t685 = t652 + t670;
  t1576 = t61*t67*t749;
  t1581 = -1.*t233*t749*t235;
  t1594 = t1576 + t1581;
  t1596 = t1189*t1594;
  t1602 = t51*t723;
  t1607 = -1.*t740*t772;
  t1609 = t1602 + t1607;
  t1611 = -1.*t1243*t1609;
  t1613 = t1596 + t1611;
  t1617 = 0.004820000000000004*t1613;
  t1621 = t61*t67*t833;
  t1632 = -1.*t233*t833*t235;
  t1638 = t1621 + t1632;
  t1642 = t1189*t1638;
  t1648 = t51*t749;
  t1657 = -1.*t740*t883;
  t1664 = t1648 + t1657;
  t1687 = -1.*t1243*t1664;
  t1692 = t1642 + t1687;
  t1708 = -0.03856*t1692;
  t1714 = t1617 + t1708;
  t965 = t51*t338;
  t1007 = -1.*t740*t984;
  t1087 = t51*t1086;
  t1109 = -1.*t740*t1107;
  t1200 = -1.*t67*t233*t197;
  t1201 = -1.*t61*t197*t235;
  t1229 = t1200 + t1201;
  t1267 = -1.*t67*t233*t338;
  t1278 = -1.*t61*t338*t235;
  t1288 = t1267 + t1278;
  t1424 = -1.*t338*t740;
  t1425 = -1.*t51*t984;
  t1432 = t1424 + t1425;
  t1444 = -1.*t1086*t740;
  t1469 = -1.*t51*t1107;
  t1470 = t1444 + t1469;
  t1493 = t981 + t982;
  t1530 = t1090 + t1099;
  t2260 = t1243*t1594;
  t2263 = t1189*t1609;
  t2298 = t2260 + t2263;
  t2307 = 0.004820000000000004*t2298;
  t2341 = t1243*t1638;
  t2361 = t1189*t1664;
  t2401 = t2341 + t2361;
  t2409 = -0.03856*t2401;
  t2414 = t2307 + t2409;
  t1728 = t67*t407;
  t1747 = t452*t235;
  t1756 = 0. + t1728 + t1747;
  t1759 = 0. + t965 + t1007;
  t1802 = t67*t606;
  t1813 = t664*t235;
  t1820 = 0. + t1802 + t1813;
  t1848 = 0. + t1087 + t1109;
  t2807 = -1.*t77;
  t2808 = 1. + t2807;
  t2804 = -0.194401*t119;
  t2817 = -0.336601*t2808;
  t2825 = -0.356601*t77;
  t2831 = -0.16*t145;
  t2835 = 0. + t2817 + t2825 + t2831;
  t2836 = -1.*t119*t2835;
  t2838 = -0.20833*t2808;
  t2847 = -0.36833*t77;
  t2848 = 0.020000000000000018*t145;
  t2849 = 0. + t2838 + t2847 + t2848;
  t2850 = t137*t2849;
  t2864 = 0. + t2804 + t2836 + t2850;
  t2942 = -1.*t233*t2864;
  t3008 = -0.035165*t233;
  t3010 = -1.*t61*t2864;
  t3013 = t3008 + t3010;
  t2803 = 0.035165*t61;
  t2944 = t2803 + t2942;
  t2786 = 0. + t61;
  t2758 = 0. + t233;
  t3372 = t67*t3013;
  t3389 = -1.*t2944*t235;
  t3409 = t3372 + t3389;
  t3420 = t2786*t67;
  t3424 = -1.*t2758*t235;
  t3429 = 0. + t3420 + t3424;
  t3133 = -1.*t61;
  t3197 = 1. + t3133;
  t3218 = 0.081715*t3197;
  t3248 = 0.11688*t61;
  t3258 = t3218 + t3248 + t2942;
  t3099 = 0.035165*t233;
  t3113 = t61*t2864;
  t3125 = t3099 + t3113;
  t3452 = -1.*t67*t233;
  t3454 = -1.*t61*t235;
  t3457 = t3452 + t3454;
  t3459 = -1.*t137;
  t3466 = 1. + t3459;
  t3469 = -0.194401*t3466;
  t3470 = t137*t2835;
  t3473 = t119*t2849;
  t3474 = 0. + t3469 + t3470 + t3473;
  t3486 = t67*t3258;
  t3489 = -1.*t3125*t235;
  t3504 = 0. + t3486 + t3489;
  t2762 = t67*t2758;
  t2800 = t2786*t235;
  t2801 = 0. + t2762 + t2800;
  t3126 = t67*t3125;
  t3320 = t3258*t235;
  t3365 = 0. + t3126 + t3320;
  t3430 = t51*t3429;
  t3431 = 0. + t3430;
  t3478 = t3474*t740;
  t3517 = t51*t3504;
  t3519 = 0. + t3478 + t3517;
  t3439 = -1.*t740*t3429;
  t3443 = 0. + t3439;
  t3539 = t51*t3474;
  t3540 = -1.*t740*t3504;
  t3541 = 0. + t3539 + t3540;
  t2957 = t67*t2944;
  t3021 = t3013*t235;
  t3052 = t2957 + t3021;
  t2732 = t338*t740;
  t2734 = t51*t984;
  t2750 = 0. + t2732 + t2734;
  t3060 = t61*t67;
  t3073 = -1.*t233*t235;
  t3077 = t3060 + t3073;
  t3812 = t1086*t740;
  t3815 = t51*t1107;
  t3818 = 0. + t3812 + t3815;
  t4117 = -1.*t67*t3125;
  t4123 = -1.*t3258*t235;
  t4142 = t4117 + t4123;
  t4173 = -1.*t67*t2758;
  t4174 = -1.*t2786*t235;
  t4192 = t4173 + t4174;
  t3563 = t2801*t3365;
  t3570 = t3431*t3519;
  t3573 = t3443*t3541;
  t3582 = t3563 + t3570 + t3573;
  t4095 = t3486 + t3489;
  t3710 = -1.*t3365*t1756;
  t3714 = -1.*t3519*t2750;
  t3751 = -1.*t3541*t1759;
  t3770 = t3710 + t3714 + t3751;
  t4112 = t3420 + t3424;
  t3868 = -1.*t2801*t3365;
  t3877 = -1.*t3431*t3519;
  t3883 = -1.*t3443*t3541;
  t3906 = t3868 + t3877 + t3883;
  t3975 = t3365*t1820;
  t3983 = t3519*t3818;
  t3985 = t3541*t1848;
  t3990 = t3975 + t3983 + t3985;
  t1011 = t965 + t1007;
  t4617 = t3539 + t3540;
  t4565 = -1.*t3474*t740;
  t4571 = -1.*t51*t3504;
  t4585 = t4565 + t4571;
  t1122 = t1087 + t1109;
  t4877 = -0.194401*t137;
  t4890 = -1.*t137*t2835;
  t4900 = -1.*t119*t2849;
  t4901 = t4877 + t4890 + t4900;
  t4936 = t2804 + t2836 + t2850;
  t4945 = -1.*t67*t233*t4901;
  t4948 = -1.*t61*t4901*t235;
  t4949 = t4945 + t4948;
  t4909 = t61*t67*t4901;
  t4919 = -1.*t233*t4901*t235;
  t4925 = t4909 + t4919;
  t4937 = t4936*t740;
  t4954 = t51*t4949;
  t4959 = t4937 + t4954;
  t4964 = t51*t4936;
  t4967 = -1.*t740*t4949;
  t4973 = t4964 + t4967;
  t4855 = t917*t3582;
  t5399 = -0.16*t77;
  t5410 = t5399 + t2848;
  t5413 = -1.*t119*t5410;
  t5417 = 0.020000000000000018*t77;
  t5422 = 0.16*t145;
  t5441 = t5417 + t5422;
  t5445 = t137*t5441;
  t5478 = t5413 + t5445;
  t5622 = t137*t5410;
  t5636 = t119*t5441;
  t5640 = t5622 + t5636;
  t5658 = -1.*t67*t233*t5478;
  t5670 = -1.*t61*t5478*t235;
  t5680 = t5658 + t5670;
  t4998 = -1.*t3365*t1638;
  t5519 = t61*t67*t5478;
  t5564 = -1.*t233*t5478*t235;
  t5566 = t5519 + t5564;
  t5021 = -1.*t3519*t917;
  t5034 = -1.*t3541*t1664;
  t5647 = t5640*t740;
  t5682 = t51*t5680;
  t5689 = t5647 + t5682;
  t5701 = t51*t5640;
  t5705 = -1.*t740*t5680;
  t5713 = t5701 + t5705;
  t5091 = t797*t3906;
  t5157 = t3365*t1594;
  t5178 = t3519*t797;
  t5179 = t3541*t1609;
  t3053 = t2801*t3052;
  t3366 = t3077*t3365;
  t3605 = -1.*t3365*t1229;
  t3620 = -1.*t3052*t1756;
  t3820 = -1.*t2801*t3052;
  t3828 = -1.*t3077*t3365;
  t3932 = t3365*t1288;
  t3933 = t3052*t1820;
  t5902 = t3429*t3504;
  t5912 = 0. + t5902 + t3563;
  t4105 = t2801*t4095;
  t4115 = t4112*t3365;
  t4264 = -1.*t3365*t1493;
  t4286 = -1.*t4095*t1756;
  t6000 = -1.*t3474*t338;
  t6001 = -1.*t3504*t984;
  t6022 = t6000 + t6001 + t3710;
  t6036 = -1.*t3429*t3504;
  t6046 = 0. + t6036 + t3868;
  t4456 = -1.*t2801*t4095;
  t4457 = -1.*t4112*t3365;
  t4522 = t3365*t1530;
  t4524 = t4095*t1820;
  t6130 = t3474*t1086;
  t6149 = t3504*t1107;
  t6164 = t6130 + t6149 + t3975;
  t4929 = t2801*t4925;
  t5011 = -1.*t4925*t1756;
  t5092 = -1.*t2801*t4925;
  t5177 = t4925*t1820;
  t6979 = t1638*t5912;
  t5614 = t2801*t5566;
  t7040 = -1.*t3474*t749;
  t7046 = -1.*t3504*t883;
  t5736 = -1.*t5566*t1756;
  t7079 = t1594*t6046;
  t5766 = -1.*t2801*t5566;
  t7120 = t3474*t723;
  t7126 = t3504*t772;
  t5803 = t5566*t1820;
  t7805 = -1.*t2758*t3125;
  t7812 = -1.*t2786*t3258;
  t7820 = 0. + t7805 + t7812;
  t7827 = t7820*t723;
  t7858 = t2758*t3125;
  t7860 = t2786*t3258;
  t7867 = 0. + t7858 + t7860;
  t7884 = t7867*t749;
  t8124 = 0.00016949530000000016*t749;
  t8133 = -0.11688*t723;
  t8136 = -0.081715*t833;
  t8137 = t8133 + t8136;
  t8149 = -0.03856*t8137;
  t8161 = t8124 + t8149;
  p_output1[0]=var2[17]*(-0.5*(-0.03856*t1011 + 0.004820000000000004*t1122)*var2[4] - 0.5*(-0.03856*t51*t541 + 0.004820000000000004*t51*t685)*var2[5] - 0.5*(-0.03856*t267*t51 + 0.004820000000000004*t348*t51)*var2[15] - 0.5*t932*var2[16] - 0.5*t932*var2[17]);
  p_output1[1]=var2[17]*(-0.5*(-0.03856*(-1.*t1243*t1756 - 1.*t1189*t1759) + 0.004820000000000004*(-1.*t1243*t1820 - 1.*t1189*t1848))*var2[3] - 0.5*(0.03856*t1243*t1432 - 0.004820000000000004*t1243*t1470)*var2[4] - 0.5*(-0.03856*(t1189*t1493 + t1243*t541*t740) + 0.004820000000000004*(t1189*t1530 + t1243*t685*t740))*var2[5] - 0.5*(-0.03856*(t1189*t1229 + t1243*t267*t740) + 0.004820000000000004*(t1189*t1288 + t1243*t348*t740))*var2[15] - 0.5*t1714*var2[16] - 0.5*t1714*var2[17]);
  p_output1[2]=var2[17]*(-0.5*(-0.03856*(t1189*t1756 - 1.*t1243*t1759) + 0.004820000000000004*(t1189*t1820 - 1.*t1243*t1848))*var2[3] - 0.5*(-0.03856*t1189*t1432 + 0.004820000000000004*t1189*t1470)*var2[4] - 0.5*(-0.03856*(t1243*t1493 - 1.*t1189*t541*t740) + 0.004820000000000004*(t1243*t1530 - 1.*t1189*t685*t740))*var2[5] - 0.5*(-0.03856*(t1229*t1243 - 1.*t1189*t267*t740) + 0.004820000000000004*(t1243*t1288 - 1.*t1189*t348*t740))*var2[15] - 0.5*t2414*var2[16] - 0.5*t2414*var2[17]);
  p_output1[3]=var2[17]*(-0.5*(0.004820000000000004*(t1011*t3582 + t3431*(-1.*t1011*t3519 - 1.*t1432*t3541 - 1.*t1759*t4585 - 1.*t2750*t4617) - 1.*t3429*t3770*t740 + t2750*(t3443*t4585 + t3431*t4617 - 1.*t3429*t3541*t51 - 1.*t3429*t3519*t740)) - 0.03856*(t1122*t3906 + t3431*(t1122*t3519 + t1470*t3541 + t1848*t4585 + t3818*t4617) - 1.*t3429*t3990*t740 + t3818*(-1.*t3443*t4585 - 1.*t3431*t4617 + t3429*t3541*t51 + t3429*t3519*t740)))*var2[4] - 0.5*(0.004820000000000004*(t3770*t4192*t51 + t3582*t51*t541 + t2750*(t4105 + t4115 + t3431*t4142*t51 + t3519*t4192*t51 - 1.*t3443*t4142*t740 - 1.*t3541*t4192*t740) + t3431*(t4264 + t4286 - 1.*t2750*t4142*t51 - 1.*t3519*t51*t541 + t1759*t4142*t740 + t3541*t541*t740)) - 0.03856*(t3990*t4192*t51 + t3906*t51*t685 + t3818*(t4456 + t4457 - 1.*t3431*t4142*t51 - 1.*t3519*t4192*t51 + t3443*t4142*t740 + t3541*t4192*t740) + t3431*(t4522 + t4524 + t3818*t4142*t51 + t3519*t51*t685 - 1.*t1848*t4142*t740 - 1.*t3541*t685*t740)))*var2[5] - 0.5*(0.004820000000000004*(t267*t3582*t51 + t3457*t3770*t51 + t3431*(t3605 + t3620 - 1.*t2750*t3409*t51 - 1.*t267*t3519*t51 + t1759*t3409*t740 + t267*t3541*t740) + t2750*(t3053 + t3366 + t3409*t3431*t51 + t3457*t3519*t51 - 1.*t3409*t3443*t740 - 1.*t3457*t3541*t740)) - 0.03856*(t348*t3906*t51 + t3457*t3990*t51 + t3818*(t3820 + t3828 - 1.*t3409*t3431*t51 - 1.*t3457*t3519*t51 + t3409*t3443*t740 + t3457*t3541*t740) + t3431*(t3932 + t3933 + t348*t3519*t51 + t3409*t3818*t51 - 1.*t1848*t3409*t740 - 1.*t348*t3541*t740)))*var2[15] - 0.5*(0.004820000000000004*(t4855 + t2750*(t4929 + t3431*t4959 + t3443*t4973) + t3431*(-1.*t2750*t4959 - 1.*t1759*t4973 + t4998 + t5011 + t5021 + t5034)) - 0.03856*(t5091 + t3818*(-1.*t3431*t4959 - 1.*t3443*t4973 + t5092) + t3431*(t3818*t4959 + t1848*t4973 + t5157 + t5177 + t5178 + t5179)))*var2[16] - 0.5*(0.004820000000000004*(t4855 + t2750*(t5614 + t3431*t5689 + t3443*t5713) + t3431*(t4998 + t5021 + t5034 - 1.*t2750*t5689 - 1.*t1759*t5713 + t5736)) - 0.03856*(t5091 + t3818*(-1.*t3431*t5689 - 1.*t3443*t5713 + t5766) + t3431*(t5157 + t5178 + t5179 + t3818*t5689 + t1848*t5713 + t5803)))*var2[17]);
  p_output1[4]=var2[17]*(-0.5*(-0.03856*(t1820*(-1.*t3429*t4142 - 1.*t3504*t4192 + t4456 + t4457) + t1530*t6046 + t4112*t6164 + t2801*(t1107*t4142 + t4522 + t4524 + t3504*t685)) + 0.004820000000000004*(t1756*(t4105 + t4115 + t3429*t4142 + t3504*t4192) + t1493*t5912 + t4112*t6022 + t2801*(t4264 + t4286 - 1.*t3504*t541 - 1.*t4142*t984)))*var2[5] - 0.5*(-0.03856*(t1820*(-1.*t3409*t3429 - 1.*t3457*t3504 + t3820 + t3828) + t2801*(t1107*t3409 + t348*t3504 + t3932 + t3933) + t1288*t6046 + t3077*t6164) + 0.004820000000000004*(t1756*(t3053 + t3366 + t3409*t3429 + t3457*t3504) + t1229*t5912 + t3077*t6022 + t2801*(-1.*t267*t3504 + t3605 + t3620 - 1.*t3409*t984)))*var2[15] - 0.5*(-0.03856*(t1820*(-1.*t3429*t4949 + t5092) + t7079 + t2801*(t1086*t4936 + t1107*t4949 + t5157 + t5177 + t7120 + t7126)) + 0.004820000000000004*(t1756*(t4929 + t3429*t4949) + t6979 + t2801*(-1.*t338*t4936 + t4998 + t5011 + t7040 + t7046 - 1.*t4949*t984)))*var2[16] - 0.5*(-0.03856*(t1820*(-1.*t3429*t5680 + t5766) + t7079 + t2801*(t5157 + t1086*t5640 + t1107*t5680 + t5803 + t7120 + t7126)) + 0.004820000000000004*(t1756*(t5614 + t3429*t5680) + t6979 + t2801*(t4998 - 1.*t338*t5640 + t5736 + t7040 + t7046 - 1.*t5680*t984)))*var2[17]);
  p_output1[5]=var2[17]*(-0.5*(-0.03856*t1086*(-1.*t2758*t2944 - 1.*t2786*t3013 + t233*t3258 - 1.*t3125*t61) + 0.004820000000000004*t338*(t2758*t2944 + t2786*t3013 - 1.*t233*t3258 + t3125*t61))*var2[15] - 0.5*(-0.03856*(t1086*(t233*t2786*t4901 - 1.*t2758*t4901*t61) + t7827) + 0.004820000000000004*(t338*(-1.*t233*t2786*t4901 + t2758*t4901*t61) + t7884))*var2[16] - 0.5*(-0.03856*(t1086*(t233*t2786*t5478 - 1.*t2758*t5478*t61) + t7827) + 0.004820000000000004*(t338*(-1.*t233*t2786*t5478 + t2758*t5478*t61) + t7884))*var2[17]);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=var2[17]*(-0.5*t8161*var2[16] - 0.5*t8161*var2[17]);
  p_output1[16]=-0.5*(0.004820000000000004*(0.194401*t145 + t145*t2835 + t145*t5441 + t2849*t77 - 1.*t5410*t77) - 0.03856*(-1.*t145*t2849 + t145*t5410 + 0.194401*t77 + t2835*t77 + t5441*t77))*Power(var2[17],2);
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

#include "Ce1_vec18_plane.hh"

namespace SymFunction
{

void Ce1_vec18_plane_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
