/*
 * Automatically Generated from Mathematica.
 * Fri 10 May 2019 14:10:18 GMT-04:00
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
  double t190;
  double t20;
  double t122;
  double t57;
  double t195;
  double t126;
  double t219;
  double t282;
  double t467;
  double t502;
  double t505;
  double t650;
  double t577;
  double t548;
  double t559;
  double t656;
  double t657;
  double t678;
  double t693;
  double t706;
  double t836;
  double t841;
  double t746;
  double t442;
  double t916;
  double t921;
  double t923;
  double t931;
  double t957;
  double t971;
  double t873;
  double t998;
  double t1000;
  double t1010;
  double t1035;
  double t1040;
  double t1042;
  double t770;
  double t815;
  double t1130;
  double t1173;
  double t1205;
  double t1209;
  double t1250;
  double t1266;
  double t1275;
  double t1487;
  double t1485;
  double t1454;
  double t1478;
  double t1530;
  double t1536;
  double t1565;
  double t1576;
  double t1577;
  double t1617;
  double t1621;
  double t1585;
  double t1406;
  double t1656;
  double t1689;
  double t1693;
  double t1695;
  double t1702;
  double t1705;
  double t1707;
  double t1598;
  double t1599;
  double t1794;
  double t1795;
  double t1797;
  double t1808;
  double t1810;
  double t1817;
  double t1956;
  double t1958;
  double t1959;
  double t1961;
  double t1969;
  double t1953;
  double t1972;
  double t1979;
  double t1987;
  double t1990;
  double t1994;
  double t1895;
  double t2098;
  double t2101;
  double t2102;
  double t2074;
  double t2109;
  double t2114;
  double t2121;
  double t2122;
  double t2125;
  double t2231;
  double t2234;
  double t2241;
  double t2228;
  double t2243;
  double t2245;
  double t2251;
  double t2256;
  double t2270;
  double t2369;
  double t2387;
  double t2391;
  double t2396;
  double t2364;
  double t2402;
  double t2405;
  double t2425;
  double t2427;
  double t2428;
  double t2358;
  double t2499;
  double t2503;
  double t2505;
  double t2497;
  double t2507;
  double t2511;
  double t2514;
  double t2515;
  double t2518;
  double t2622;
  double t2628;
  double t2629;
  double t2621;
  double t2636;
  double t2637;
  double t2643;
  double t2645;
  double t2656;
  double t2701;
  double t2708;
  double t2714;
  double t2747;
  double t2758;
  double t2759;
  double t2745;
  double t2760;
  double t2762;
  double t2765;
  double t2771;
  double t2773;
  double t2835;
  double t2836;
  double t2840;
  double t2865;
  double t2876;
  double t2890;
  double t2855;
  double t2892;
  double t2895;
  double t2905;
  double t2909;
  double t2910;
  double t3039;
  double t3040;
  double t3042;
  double t3038;
  double t3046;
  double t3053;
  double t3099;
  double t3100;
  double t3101;
  double t3161;
  double t3166;
  double t3171;
  double t3155;
  double t3180;
  double t3183;
  double t3190;
  double t3192;
  double t3193;
  double t3302;
  double t3310;
  double t3313;
  double t3370;
  double t3371;
  double t3375;
  double t3415;
  double t3416;
  double t3423;
  double t3465;
  double t3473;
  double t3484;
  double t3576;
  double t3586;
  double t3578;
  double t3598;
  double t3600;
  double t3630;
  double t3634;
  double t3645;
  double t3377;
  double t3709;
  double t3720;
  double t3727;
  double t3719;
  double t3728;
  double t3729;
  double t3736;
  double t3739;
  double t3742;
  double t3517;
  double t3838;
  double t3839;
  double t3847;
  double t3854;
  double t3844;
  double t3873;
  double t3881;
  double t3892;
  double t3893;
  double t3894;
  double t3989;
  double t3990;
  double t3997;
  double t4013;
  double t4057;
  double t4059;
  double t4073;
  double t4078;
  double t4114;
  double t4125;
  double t4132;
  double t4141;
  double t3139;
  double t4233;
  double t4234;
  double t4304;
  double t4316;
  double t4318;
  double t4380;
  double t4392;
  double t4426;
  double t4572;
  double t4569;
  double t4575;
  double t4581;
  double t4591;
  double t4595;
  double t4597;
  double t4669;
  double t4680;
  double t4682;
  double t4642;
  double t4691;
  double t4695;
  double t4697;
  double t4713;
  double t4715;
  double t4764;
  double t4770;
  double t4777;
  double t4763;
  double t4779;
  double t4786;
  double t4793;
  double t4797;
  double t4802;
  double t4837;
  double t4859;
  double t4860;
  double t4865;
  double t4899;
  double t4900;
  double t4914;
  double t4917;
  double t4937;
  double t4938;
  double t4939;
  double t4947;
  t190 = Cos(var1[3]);
  t20 = Cos(var1[5]);
  t122 = Sin(var1[4]);
  t57 = Sin(var1[3]);
  t195 = Sin(var1[5]);
  t126 = -1.*t20*t57*t122;
  t219 = t190*t195;
  t282 = t126 + t219;
  t467 = t190*t20*t122;
  t502 = t57*t195;
  t505 = t467 + t502;
  t650 = Cos(var1[10]);
  t577 = Cos(var1[9]);
  t548 = Sin(var1[10]);
  t559 = t548*t282;
  t656 = t577*t650*t505;
  t657 = t559 + t656;
  t678 = t650*t282;
  t693 = -1.*t577*t548*t505;
  t706 = t678 + t693;
  t836 = Cos(var1[11]);
  t841 = 0. + t836;
  t746 = Sin(var1[11]);
  t442 = Sin(var1[9]);
  t916 = -1.*t20*t57;
  t921 = t190*t122*t195;
  t923 = t916 + t921;
  t931 = -1.*t190*t20;
  t957 = -1.*t57*t122*t195;
  t971 = t931 + t957;
  t873 = 0. + t746;
  t998 = -1.*t577*t548*t923;
  t1000 = t650*t971;
  t1010 = t998 + t1000;
  t1035 = t577*t650*t923;
  t1040 = t548*t971;
  t1042 = t1035 + t1040;
  t770 = -1.*t746;
  t815 = 0. + t770;
  t1130 = Cos(var1[4]);
  t1173 = -1.*t577*t190*t1130*t548;
  t1205 = -1.*t650*t1130*t57;
  t1209 = t1173 + t1205;
  t1250 = t577*t650*t190*t1130;
  t1266 = -1.*t1130*t548*t57;
  t1275 = t1250 + t1266;
  t1487 = Cos(var1[13]);
  t1485 = Cos(var1[12]);
  t1454 = Sin(var1[13]);
  t1478 = t1454*t282;
  t1530 = t1485*t1487*t505;
  t1536 = t1478 + t1530;
  t1565 = t1487*t282;
  t1576 = -1.*t1485*t1454*t505;
  t1577 = t1565 + t1576;
  t1617 = Cos(var1[14]);
  t1621 = 0. + t1617;
  t1585 = Sin(var1[14]);
  t1406 = Sin(var1[12]);
  t1656 = 0. + t1585;
  t1689 = -1.*t1485*t1454*t923;
  t1693 = t1487*t971;
  t1695 = t1689 + t1693;
  t1702 = t1485*t1487*t923;
  t1705 = t1454*t971;
  t1707 = t1702 + t1705;
  t1598 = -1.*t1585;
  t1599 = 0. + t1598;
  t1794 = -1.*t1485*t190*t1130*t1454;
  t1795 = -1.*t1487*t1130*t57;
  t1797 = t1794 + t1795;
  t1808 = t1485*t1487*t190*t1130;
  t1810 = -1.*t1130*t1454*t57;
  t1817 = t1808 + t1810;
  t1956 = t577*t1130*t20*t57;
  t1958 = -1.*t442;
  t1959 = 0. + t1958;
  t1961 = -1.*t20*t1959*t122;
  t1969 = t1956 + t1961;
  t1953 = t190*t1130*t20*t548;
  t1972 = t650*t1969;
  t1979 = t1953 + t1972;
  t1987 = t650*t190*t1130*t20;
  t1990 = -1.*t548*t1969;
  t1994 = t1987 + t1990;
  t1895 = 0. + t577;
  t2098 = t577*t1130*t57*t195;
  t2101 = -1.*t1959*t122*t195;
  t2102 = t2098 + t2101;
  t2074 = t190*t1130*t548*t195;
  t2109 = t650*t2102;
  t2114 = t2074 + t2109;
  t2121 = t650*t190*t1130*t195;
  t2122 = -1.*t548*t2102;
  t2125 = t2121 + t2122;
  t2231 = -1.*t1130*t1959;
  t2234 = -1.*t577*t57*t122;
  t2241 = t2231 + t2234;
  t2228 = -1.*t190*t548*t122;
  t2243 = t650*t2241;
  t2245 = t2228 + t2243;
  t2251 = -1.*t650*t190*t122;
  t2256 = -1.*t548*t2241;
  t2270 = t2251 + t2256;
  t2369 = t1485*t1130*t20*t57;
  t2387 = 0. + t1406;
  t2391 = -1.*t20*t2387*t122;
  t2396 = t2369 + t2391;
  t2364 = t190*t1130*t20*t1454;
  t2402 = t1487*t2396;
  t2405 = t2364 + t2402;
  t2425 = t1487*t190*t1130*t20;
  t2427 = -1.*t1454*t2396;
  t2428 = t2425 + t2427;
  t2358 = 0. + t1485;
  t2499 = t1485*t1130*t57*t195;
  t2503 = -1.*t2387*t122*t195;
  t2505 = t2499 + t2503;
  t2497 = t190*t1130*t1454*t195;
  t2507 = t1487*t2505;
  t2511 = t2497 + t2507;
  t2514 = t1487*t190*t1130*t195;
  t2515 = -1.*t1454*t2505;
  t2518 = t2514 + t2515;
  t2622 = -1.*t1130*t2387;
  t2628 = -1.*t1485*t57*t122;
  t2629 = t2622 + t2628;
  t2621 = -1.*t190*t1454*t122;
  t2636 = t1487*t2629;
  t2637 = t2621 + t2636;
  t2643 = -1.*t1487*t190*t122;
  t2645 = -1.*t1454*t2629;
  t2656 = t2643 + t2645;
  t2701 = t20*t57;
  t2708 = -1.*t190*t122*t195;
  t2714 = t2701 + t2708;
  t2747 = -1.*t1130*t1959*t195;
  t2758 = t577*t971;
  t2759 = t2747 + t2758;
  t2745 = t548*t2714;
  t2760 = t650*t2759;
  t2762 = t2745 + t2760;
  t2765 = t650*t2714;
  t2771 = -1.*t548*t2759;
  t2773 = t2765 + t2771;
  t2835 = t20*t57*t122;
  t2836 = -1.*t190*t195;
  t2840 = t2835 + t2836;
  t2865 = t1130*t20*t1959;
  t2876 = t577*t2840;
  t2890 = t2865 + t2876;
  t2855 = t548*t505;
  t2892 = t650*t2890;
  t2895 = t2855 + t2892;
  t2905 = t650*t505;
  t2909 = -1.*t548*t2890;
  t2910 = t2905 + t2909;
  t3039 = -1.*t1130*t2387*t195;
  t3040 = t1485*t971;
  t3042 = t3039 + t3040;
  t3038 = t1454*t2714;
  t3046 = t1487*t3042;
  t3053 = t3038 + t3046;
  t3099 = t1487*t2714;
  t3100 = -1.*t1454*t3042;
  t3101 = t3099 + t3100;
  t3161 = t1130*t20*t2387;
  t3166 = t1485*t2840;
  t3171 = t3161 + t3166;
  t3155 = t1454*t505;
  t3180 = t1487*t3171;
  t3183 = t3155 + t3180;
  t3190 = t1487*t505;
  t3192 = -1.*t1454*t3171;
  t3193 = t3190 + t3192;
  t3302 = -1.*t577*t1130*t20;
  t3310 = -1.*t442*t2840;
  t3313 = t3302 + t3310;
  t3370 = t190*t20;
  t3371 = t57*t122*t195;
  t3375 = t3370 + t3371;
  t3415 = -1.*t577*t1130*t195;
  t3416 = -1.*t442*t3375;
  t3423 = t3415 + t3416;
  t3465 = -1.*t1130*t442*t57;
  t3473 = t577*t122;
  t3484 = t3465 + t3473;
  t3576 = 0. + t467 + t502;
  t3586 = 0. + t2865 + t2876;
  t3578 = -1.*t548*t3576;
  t3598 = -1.*t650*t3586;
  t3600 = t3578 + t3598;
  t3630 = t650*t3576;
  t3634 = -1.*t548*t3586;
  t3645 = t3630 + t3634;
  t3377 = t577*t3375;
  t3709 = 0. + t916 + t921;
  t3720 = t1130*t1959*t195;
  t3727 = 0. + t3720 + t3377;
  t3719 = -1.*t548*t3709;
  t3728 = -1.*t650*t3727;
  t3729 = t3719 + t3728;
  t3736 = t650*t3709;
  t3739 = -1.*t548*t3727;
  t3742 = t3736 + t3739;
  t3517 = t577*t1130*t57;
  t3838 = t190*t1130;
  t3839 = 0. + t3838;
  t3847 = -1.*t1959*t122;
  t3854 = 0. + t3517 + t3847;
  t3844 = -1.*t3839*t548;
  t3873 = -1.*t650*t3854;
  t3881 = t3844 + t3873;
  t3892 = t650*t3839;
  t3893 = -1.*t548*t3854;
  t3894 = t3892 + t3893;
  t3989 = t548*t3576;
  t3990 = t650*t3586;
  t3997 = 0. + t3989 + t3990;
  t4013 = 0. + t3630 + t3634;
  t4057 = t548*t3709;
  t4059 = t650*t3727;
  t4073 = 0. + t4057 + t4059;
  t4078 = 0. + t3736 + t3739;
  t4114 = t3839*t548;
  t4125 = t650*t3854;
  t4132 = 0. + t4114 + t4125;
  t4141 = 0. + t3892 + t3893;
  t3139 = -1.*t1406*t2840;
  t4233 = t1485*t1130*t20;
  t4234 = t4233 + t3139;
  t4304 = t1485*t1130*t195;
  t4316 = -1.*t1406*t3375;
  t4318 = t4304 + t4316;
  t4380 = -1.*t1130*t1406*t57;
  t4392 = -1.*t1485*t122;
  t4426 = t4380 + t4392;
  t4572 = 0. + t3161 + t3166;
  t4569 = -1.*t1454*t3576;
  t4575 = -1.*t1487*t4572;
  t4581 = t4569 + t4575;
  t4591 = t1487*t3576;
  t4595 = -1.*t1454*t4572;
  t4597 = t4591 + t4595;
  t4669 = t1130*t2387*t195;
  t4680 = t1485*t3375;
  t4682 = 0. + t4669 + t4680;
  t4642 = -1.*t1454*t3709;
  t4691 = -1.*t1487*t4682;
  t4695 = t4642 + t4691;
  t4697 = t1487*t3709;
  t4713 = -1.*t1454*t4682;
  t4715 = t4697 + t4713;
  t4764 = t1485*t1130*t57;
  t4770 = -1.*t2387*t122;
  t4777 = 0. + t4764 + t4770;
  t4763 = -1.*t3839*t1454;
  t4779 = -1.*t1487*t4777;
  t4786 = t4763 + t4779;
  t4793 = t1487*t3839;
  t4797 = -1.*t1454*t4777;
  t4802 = t4793 + t4797;
  t4837 = t1454*t3576;
  t4859 = t1487*t4572;
  t4860 = 0. + t4837 + t4859;
  t4865 = 0. + t4591 + t4595;
  t4899 = t1454*t3709;
  t4900 = t1487*t4682;
  t4914 = 0. + t4899 + t4900;
  t4917 = 0. + t4697 + t4713;
  t4937 = t3839*t1454;
  t4938 = t1487*t4777;
  t4939 = 0. + t4937 + t4938;
  t4947 = 0. + t4793 + t4797;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=1.;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=1.;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=1.;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=1.;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=1.;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=1.;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=1.;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=1.;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=1.;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0.2429*t282 + 0.035199999999999995*t442*t505 - 0.2083*t657 - 0.1422*t706 - 0.02*(t657*t815 + t706*t841) - 0.16*(t657*t841 + t706*t873);
  p_output1[43]=-0.1422*t1010 - 0.2083*t1042 - 0.02*(t1042*t815 + t1010*t841) - 0.16*(t1042*t841 + t1010*t873) + 0.035199999999999995*t442*t923 + 0.2429*t971;
  p_output1[44]=-0.1422*t1209 - 0.2083*t1275 + 0.035199999999999995*t1130*t190*t442 - 0.2429*t1130*t57 - 0.02*(t1275*t815 + t1209*t841) - 0.16*(t1275*t841 + t1209*t873);
  p_output1[45]=-0.2083*t1536 - 0.1422*t1577 - 0.02*(t1536*t1599 + t1577*t1621) - 0.16*(t1536*t1621 + t1577*t1656) - 0.1944*t282 + 0.0329*t1406*t505;
  p_output1[46]=-0.1422*t1695 - 0.2083*t1707 - 0.02*(t1621*t1695 + t1599*t1707) - 0.16*(t1656*t1695 + t1621*t1707) + 0.0329*t1406*t923 - 0.1944*t971;
  p_output1[47]=-0.1422*t1797 - 0.2083*t1817 - 0.02*(t1621*t1797 + t1599*t1817) - 0.16*(t1656*t1797 + t1621*t1817) + 0.0329*t1130*t1406*t190 + 0.1944*t1130*t57;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=1.;
  p_output1[53]=0;
  p_output1[54]=-0.2083*t1979 - 0.1422*t1994 - 0.0817*t122*t20 + 0.2429*t1130*t190*t20 + 0.035199999999999995*(-1.*t122*t1895*t20 + t1130*t20*t442*t57) - 0.02*(t1979*t815 + t1994*t841) - 0.16*(t1979*t841 + t1994*t873);
  p_output1[55]=-0.0817*t122*t195 + 0.2429*t1130*t190*t195 - 0.2083*t2114 - 0.1422*t2125 + 0.035199999999999995*(-1.*t122*t1895*t195 + t1130*t195*t442*t57) - 0.02*(t2114*t815 + t2125*t841) - 0.16*(t2114*t841 + t2125*t873);
  p_output1[56]=-0.0817*t1130 - 0.2429*t122*t190 - 0.2083*t2245 - 0.1422*t2270 + 0.035199999999999995*(-1.*t1130*t1895 - 1.*t122*t442*t57) - 0.02*(t2245*t815 + t2270*t841) - 0.16*(t2245*t841 + t2270*t873);
  p_output1[57]=0.0817*t122*t20 - 0.1944*t1130*t190*t20 - 0.2083*t2405 - 0.1422*t2428 - 0.02*(t1599*t2405 + t1621*t2428) - 0.16*(t1621*t2405 + t1656*t2428) - 0.0329*(-1.*t122*t20*t2358 - 1.*t1130*t1406*t20*t57);
  p_output1[58]=0.0817*t122*t195 - 0.1944*t1130*t190*t195 - 0.2083*t2511 - 0.1422*t2518 - 0.02*(t1599*t2511 + t1621*t2518) - 0.16*(t1621*t2511 + t1656*t2518) - 0.0329*(-1.*t122*t195*t2358 - 1.*t1130*t1406*t195*t57);
  p_output1[59]=0.0817*t1130 + 0.1944*t122*t190 - 0.2083*t2637 - 0.1422*t2656 - 0.02*(t1599*t2637 + t1621*t2656) - 0.16*(t1621*t2637 + t1656*t2656) - 0.0329*(-1.*t1130*t2358 + t122*t1406*t57);
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=1.;
  p_output1[66]=-0.0817*t1130*t195 + 0.2429*t2714 - 0.2083*t2762 - 0.1422*t2773 - 0.02*(t2762*t815 + t2773*t841) - 0.16*(t2762*t841 + t2773*t873) + 0.035199999999999995*(-1.*t1130*t1895*t195 + t442*t971);
  p_output1[67]=0.0817*t1130*t20 - 0.2083*t2895 - 0.1422*t2910 + 0.035199999999999995*(t1130*t1895*t20 + t2840*t442) + 0.2429*t505 - 0.02*(t2895*t815 + t2910*t841) - 0.16*(t2895*t841 + t2910*t873);
  p_output1[68]=0;
  p_output1[69]=0.0817*t1130*t195 - 0.1944*t2714 - 0.2083*t3053 - 0.1422*t3101 - 0.02*(t1599*t3053 + t1621*t3101) - 0.16*(t1621*t3053 + t1656*t3101) - 0.0329*(-1.*t1130*t195*t2358 - 1.*t1406*t971);
  p_output1[70]=-0.0817*t1130*t20 - 0.0329*(t1130*t20*t2358 + t3139) - 0.2083*t3183 - 0.1422*t3193 - 0.02*(t1599*t3183 + t1621*t3193) - 0.16*(t1621*t3183 + t1656*t3193) - 0.1944*t505;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
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
  p_output1[108]=0;
  p_output1[109]=0;
  p_output1[110]=0;
  p_output1[111]=0;
  p_output1[112]=0;
  p_output1[113]=0;
  p_output1[114]=0.035199999999999995*(t2876 - 1.*t1130*t20*t442) + 0.1422*t3313*t548 - 0.2083*t3313*t650 - 0.02*(t3313*t650*t815 - 1.*t3313*t548*t841) - 0.16*(t3313*t650*t841 - 1.*t3313*t548*t873);
  p_output1[115]=0.035199999999999995*(t3377 - 1.*t1130*t195*t442) + 0.1422*t3423*t548 - 0.2083*t3423*t650 - 0.02*(t3423*t650*t815 - 1.*t3423*t548*t841) - 0.16*(t3423*t650*t841 - 1.*t3423*t548*t873);
  p_output1[116]=0.035199999999999995*(t3517 + t122*t442) + 0.1422*t3484*t548 - 0.2083*t3484*t650 - 0.02*(t3484*t650*t815 - 1.*t3484*t548*t841) - 0.16*(t3484*t650*t841 - 1.*t3484*t548*t873);
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
  p_output1[120]=0;
  p_output1[121]=0;
  p_output1[122]=0;
  p_output1[123]=0;
  p_output1[124]=0;
  p_output1[125]=0;
  p_output1[126]=-0.1422*t3600 - 0.2083*t3645 - 0.02*(t3645*t815 + t3600*t841) - 0.16*(t3645*t841 + t3600*t873);
  p_output1[127]=-0.1422*t3729 - 0.2083*t3742 - 0.02*(t3742*t815 + t3729*t841) - 0.16*(t3742*t841 + t3729*t873);
  p_output1[128]=-0.1422*t3881 - 0.2083*t3894 - 0.02*(t3894*t815 + t3881*t841) - 0.16*(t3894*t841 + t3881*t873);
  p_output1[129]=0;
  p_output1[130]=0;
  p_output1[131]=0;
  p_output1[132]=0;
  p_output1[133]=0;
  p_output1[134]=0;
  p_output1[135]=0;
  p_output1[136]=0;
  p_output1[137]=0;
  p_output1[138]=-0.02*(-1.*t4013*t746 - 1.*t3997*t836) - 0.16*(-1.*t3997*t746 + t4013*t836);
  p_output1[139]=-0.02*(-1.*t4078*t746 - 1.*t4073*t836) - 0.16*(-1.*t4073*t746 + t4078*t836);
  p_output1[140]=-0.02*(-1.*t4141*t746 - 1.*t4132*t836) - 0.16*(-1.*t4132*t746 + t4141*t836);
  p_output1[141]=0;
  p_output1[142]=0;
  p_output1[143]=0;
  p_output1[144]=0;
  p_output1[145]=0;
  p_output1[146]=0;
  p_output1[147]=0;
  p_output1[148]=0;
  p_output1[149]=0;
  p_output1[150]=0;
  p_output1[151]=0;
  p_output1[152]=0;
  p_output1[153]=-0.0329*(-1.*t1130*t1406*t20 - 1.*t1485*t2840) + 0.1422*t1454*t4234 - 0.2083*t1487*t4234 - 0.02*(t1487*t1599*t4234 - 1.*t1454*t1621*t4234) - 0.16*(t1487*t1621*t4234 - 1.*t1454*t1656*t4234);
  p_output1[154]=-0.0329*(-1.*t1130*t1406*t195 - 1.*t1485*t3375) + 0.1422*t1454*t4318 - 0.2083*t1487*t4318 - 0.02*(t1487*t1599*t4318 - 1.*t1454*t1621*t4318) - 0.16*(t1487*t1621*t4318 - 1.*t1454*t1656*t4318);
  p_output1[155]=0.1422*t1454*t4426 - 0.2083*t1487*t4426 - 0.02*(t1487*t1599*t4426 - 1.*t1454*t1621*t4426) - 0.16*(t1487*t1621*t4426 - 1.*t1454*t1656*t4426) - 0.0329*(t122*t1406 - 1.*t1130*t1485*t57);
  p_output1[156]=0;
  p_output1[157]=0;
  p_output1[158]=0;
  p_output1[159]=0;
  p_output1[160]=0;
  p_output1[161]=0;
  p_output1[162]=0;
  p_output1[163]=0;
  p_output1[164]=0;
  p_output1[165]=-0.1422*t4581 - 0.2083*t4597 - 0.02*(t1621*t4581 + t1599*t4597) - 0.16*(t1656*t4581 + t1621*t4597);
  p_output1[166]=-0.1422*t4695 - 0.2083*t4715 - 0.02*(t1621*t4695 + t1599*t4715) - 0.16*(t1656*t4695 + t1621*t4715);
  p_output1[167]=-0.1422*t4786 - 0.2083*t4802 - 0.02*(t1621*t4786 + t1599*t4802) - 0.16*(t1656*t4786 + t1621*t4802);
  p_output1[168]=0;
  p_output1[169]=0;
  p_output1[170]=0;
  p_output1[171]=0;
  p_output1[172]=0;
  p_output1[173]=0;
  p_output1[174]=0;
  p_output1[175]=0;
  p_output1[176]=0;
  p_output1[177]=-0.02*(-1.*t1617*t4860 - 1.*t1585*t4865) - 0.16*(-1.*t1585*t4860 + t1617*t4865);
  p_output1[178]=-0.02*(-1.*t1617*t4914 - 1.*t1585*t4917) - 0.16*(-1.*t1585*t4914 + t1617*t4917);
  p_output1[179]=-0.02*(-1.*t1617*t4939 - 1.*t1585*t4947) - 0.16*(-1.*t1585*t4939 + t1617*t4947);
  p_output1[180]=0;
  p_output1[181]=0;
  p_output1[182]=0;
  p_output1[183]=0;
  p_output1[184]=0;
  p_output1[185]=0;
  p_output1[186]=0;
  p_output1[187]=0;
  p_output1[188]=0;
  p_output1[189]=0;
  p_output1[190]=0;
  p_output1[191]=0;
  p_output1[192]=0;
  p_output1[193]=0;
  p_output1[194]=0;
  p_output1[195]=0;
  p_output1[196]=0;
  p_output1[197]=0;
  p_output1[198]=0;
  p_output1[199]=0;
  p_output1[200]=0;
  p_output1[201]=0;
  p_output1[202]=0;
  p_output1[203]=0;
  p_output1[204]=0;
  p_output1[205]=0;
  p_output1[206]=0;
  p_output1[207]=0;
  p_output1[208]=0;
  p_output1[209]=0;
  p_output1[210]=0;
  p_output1[211]=0;
  p_output1[212]=0;
  p_output1[213]=0;
  p_output1[214]=0;
  p_output1[215]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 12, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "j_hc_2_func.hh"

namespace SymFunction
{

void j_hc_2_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
