/*
 * Automatically Generated from Mathematica.
 * Fri 10 May 2019 14:10:17 GMT-04:00
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
  double t447;
  double t205;
  double t432;
  double t281;
  double t452;
  double t548;
  double t559;
  double t567;
  double t441;
  double t467;
  double t505;
  double t631;
  double t628;
  double t661;
  double t706;
  double t729;
  double t735;
  double t656;
  double t671;
  double t678;
  double t765;
  double t768;
  double t776;
  double t576;
  double t876;
  double t881;
  double t890;
  double t896;
  double t906;
  double t909;
  double t915;
  double t916;
  double t929;
  double t957;
  double t971;
  double t973;
  double t778;
  double t813;
  double t847;
  double t1075;
  double t1098;
  double t1102;
  double t1108;
  double t1154;
  double t1159;
  double t1160;
  double t1389;
  double t1368;
  double t1356;
  double t1367;
  double t1390;
  double t1406;
  double t1454;
  double t1456;
  double t1478;
  double t1531;
  double t1535;
  double t1490;
  double t1337;
  double t1591;
  double t1635;
  double t1636;
  double t1651;
  double t1659;
  double t1663;
  double t1668;
  double t1509;
  double t1515;
  double t1755;
  double t1766;
  double t1780;
  double t1797;
  double t1803;
  double t1804;
  double t1897;
  double t1939;
  double t1941;
  double t1944;
  double t1961;
  double t1965;
  double t1969;
  double t1945;
  double t1953;
  double t1956;
  double t1862;
  double t2056;
  double t2059;
  double t2063;
  double t2074;
  double t2096;
  double t2101;
  double t2065;
  double t2067;
  double t2070;
  double t2175;
  double t2179;
  double t2189;
  double t2222;
  double t2223;
  double t2224;
  double t2206;
  double t2207;
  double t2208;
  double t2330;
  double t2331;
  double t2334;
  double t2335;
  double t2340;
  double t2329;
  double t2343;
  double t2346;
  double t2355;
  double t2356;
  double t2357;
  double t2305;
  double t2448;
  double t2456;
  double t2457;
  double t2443;
  double t2458;
  double t2459;
  double t2473;
  double t2474;
  double t2475;
  double t2520;
  double t2522;
  double t2526;
  double t2519;
  double t2528;
  double t2529;
  double t2540;
  double t2542;
  double t2543;
  double t2622;
  double t2624;
  double t2628;
  double t2645;
  double t2651;
  double t2652;
  double t2668;
  double t2669;
  double t2674;
  double t2656;
  double t2659;
  double t2661;
  double t2747;
  double t2750;
  double t2753;
  double t2760;
  double t2762;
  double t2763;
  double t2775;
  double t2787;
  double t2788;
  double t2764;
  double t2765;
  double t2771;
  double t2856;
  double t2865;
  double t2871;
  double t2855;
  double t2876;
  double t2890;
  double t2895;
  double t2896;
  double t2903;
  double t3015;
  double t3022;
  double t3023;
  double t3011;
  double t3039;
  double t3040;
  double t3053;
  double t3060;
  double t3068;
  double t2754;
  double t3139;
  double t3140;
  double t3193;
  double t3201;
  double t3205;
  double t3213;
  double t3220;
  double t3237;
  double t3320;
  double t3324;
  double t3330;
  double t3409;
  double t3381;
  double t3397;
  double t3410;
  double t3415;
  double t3423;
  double t3425;
  double t3426;
  double t3513;
  double t3486;
  double t3487;
  double t3496;
  double t3503;
  double t3514;
  double t3517;
  double t3520;
  double t3526;
  double t3528;
  double t3600;
  double t3615;
  double t3578;
  double t3584;
  double t3592;
  double t3599;
  double t3627;
  double t3628;
  double t3634;
  double t3636;
  double t3645;
  double t3719;
  double t3720;
  double t3724;
  double t3705;
  double t3778;
  double t3804;
  double t3805;
  double t3772;
  double t3847;
  double t3854;
  double t3871;
  double t3842;
  double t3960;
  double t3968;
  double t3972;
  double t4062;
  double t4065;
  double t4072;
  double t4129;
  double t4132;
  double t4137;
  double t4249;
  double t4242;
  double t4251;
  double t4252;
  double t4259;
  double t4262;
  double t4263;
  double t4054;
  double t4330;
  double t4335;
  double t4323;
  double t4337;
  double t4339;
  double t4344;
  double t4346;
  double t4353;
  double t4159;
  double t4453;
  double t4454;
  double t4435;
  double t4463;
  double t4464;
  double t4483;
  double t4485;
  double t4495;
  double t4581;
  double t4588;
  double t4589;
  double t4592;
  double t4621;
  double t4642;
  double t4652;
  double t4679;
  double t4721;
  double t4722;
  double t4725;
  double t4733;
  t447 = Cos(var1[3]);
  t205 = Cos(var1[5]);
  t432 = Sin(var1[4]);
  t281 = Sin(var1[3]);
  t452 = Sin(var1[5]);
  t548 = t447*t205*t432;
  t559 = t281*t452;
  t567 = t548 + t559;
  t441 = -1.*t205*t281*t432;
  t467 = t447*t452;
  t505 = t441 + t467;
  t631 = Cos(var1[7]);
  t628 = Cos(var1[6]);
  t661 = Sin(var1[7]);
  t706 = t631*t505;
  t729 = -1.*t628*t567*t661;
  t735 = t706 + t729;
  t656 = t628*t631*t567;
  t671 = t505*t661;
  t678 = t656 + t671;
  t765 = Cos(var1[8]);
  t768 = 0. + t765;
  t776 = Sin(var1[8]);
  t576 = Sin(var1[6]);
  t876 = -1.*t447*t205;
  t881 = -1.*t281*t432*t452;
  t890 = t876 + t881;
  t896 = -1.*t205*t281;
  t906 = t447*t432*t452;
  t909 = t896 + t906;
  t915 = t631*t890;
  t916 = -1.*t628*t909*t661;
  t929 = t915 + t916;
  t957 = t628*t631*t909;
  t971 = t890*t661;
  t973 = t957 + t971;
  t778 = -1.*t776;
  t813 = 0. + t778;
  t847 = 0. + t776;
  t1075 = Cos(var1[4]);
  t1098 = -1.*t1075*t631*t281;
  t1102 = -1.*t447*t1075*t628*t661;
  t1108 = t1098 + t1102;
  t1154 = t447*t1075*t628*t631;
  t1159 = -1.*t1075*t281*t661;
  t1160 = t1154 + t1159;
  t1389 = Cos(var1[16]);
  t1368 = Cos(var1[15]);
  t1356 = Sin(var1[16]);
  t1367 = t1356*t505;
  t1390 = t1368*t1389*t567;
  t1406 = t1367 + t1390;
  t1454 = t1389*t505;
  t1456 = -1.*t1368*t1356*t567;
  t1478 = t1454 + t1456;
  t1531 = Cos(var1[17]);
  t1535 = 0. + t1531;
  t1490 = Sin(var1[17]);
  t1337 = Sin(var1[15]);
  t1591 = 0. + t1490;
  t1635 = -1.*t1368*t1356*t909;
  t1636 = t1389*t890;
  t1651 = t1635 + t1636;
  t1659 = t1368*t1389*t909;
  t1663 = t1356*t890;
  t1668 = t1659 + t1663;
  t1509 = -1.*t1490;
  t1515 = 0. + t1509;
  t1755 = -1.*t1368*t447*t1075*t1356;
  t1766 = -1.*t1389*t1075*t281;
  t1780 = t1755 + t1766;
  t1797 = t1368*t1389*t447*t1075;
  t1803 = -1.*t1075*t1356*t281;
  t1804 = t1797 + t1803;
  t1897 = t1075*t205*t628*t281;
  t1939 = 0. + t576;
  t1941 = -1.*t205*t432*t1939;
  t1944 = t1897 + t1941;
  t1961 = t447*t1075*t205*t631;
  t1965 = -1.*t1944*t661;
  t1969 = t1961 + t1965;
  t1945 = t631*t1944;
  t1953 = t447*t1075*t205*t661;
  t1956 = t1945 + t1953;
  t1862 = 0. + t628;
  t2056 = t1075*t628*t281*t452;
  t2059 = -1.*t432*t452*t1939;
  t2063 = t2056 + t2059;
  t2074 = t447*t1075*t631*t452;
  t2096 = -1.*t2063*t661;
  t2101 = t2074 + t2096;
  t2065 = t631*t2063;
  t2067 = t447*t1075*t452*t661;
  t2070 = t2065 + t2067;
  t2175 = -1.*t628*t281*t432;
  t2179 = -1.*t1075*t1939;
  t2189 = t2175 + t2179;
  t2222 = -1.*t447*t631*t432;
  t2223 = -1.*t2189*t661;
  t2224 = t2222 + t2223;
  t2206 = t631*t2189;
  t2207 = -1.*t447*t432*t661;
  t2208 = t2206 + t2207;
  t2330 = t1368*t1075*t205*t281;
  t2331 = -1.*t1337;
  t2334 = 0. + t2331;
  t2335 = -1.*t205*t2334*t432;
  t2340 = t2330 + t2335;
  t2329 = t447*t1075*t205*t1356;
  t2343 = t1389*t2340;
  t2346 = t2329 + t2343;
  t2355 = t1389*t447*t1075*t205;
  t2356 = -1.*t1356*t2340;
  t2357 = t2355 + t2356;
  t2305 = 0. + t1368;
  t2448 = t1368*t1075*t281*t452;
  t2456 = -1.*t2334*t432*t452;
  t2457 = t2448 + t2456;
  t2443 = t447*t1075*t1356*t452;
  t2458 = t1389*t2457;
  t2459 = t2443 + t2458;
  t2473 = t1389*t447*t1075*t452;
  t2474 = -1.*t1356*t2457;
  t2475 = t2473 + t2474;
  t2520 = -1.*t1075*t2334;
  t2522 = -1.*t1368*t281*t432;
  t2526 = t2520 + t2522;
  t2519 = -1.*t447*t1356*t432;
  t2528 = t1389*t2526;
  t2529 = t2519 + t2528;
  t2540 = -1.*t1389*t447*t432;
  t2542 = -1.*t1356*t2526;
  t2543 = t2540 + t2542;
  t2622 = t205*t281;
  t2624 = -1.*t447*t432*t452;
  t2628 = t2622 + t2624;
  t2645 = t628*t890;
  t2651 = -1.*t1075*t452*t1939;
  t2652 = t2645 + t2651;
  t2668 = t631*t2628;
  t2669 = -1.*t2652*t661;
  t2674 = t2668 + t2669;
  t2656 = t631*t2652;
  t2659 = t2628*t661;
  t2661 = t2656 + t2659;
  t2747 = t205*t281*t432;
  t2750 = -1.*t447*t452;
  t2753 = t2747 + t2750;
  t2760 = t628*t2753;
  t2762 = t1075*t205*t1939;
  t2763 = t2760 + t2762;
  t2775 = t631*t567;
  t2787 = -1.*t2763*t661;
  t2788 = t2775 + t2787;
  t2764 = t631*t2763;
  t2765 = t567*t661;
  t2771 = t2764 + t2765;
  t2856 = -1.*t1075*t2334*t452;
  t2865 = t1368*t890;
  t2871 = t2856 + t2865;
  t2855 = t1356*t2628;
  t2876 = t1389*t2871;
  t2890 = t2855 + t2876;
  t2895 = t1389*t2628;
  t2896 = -1.*t1356*t2871;
  t2903 = t2895 + t2896;
  t3015 = t1075*t205*t2334;
  t3022 = t1368*t2753;
  t3023 = t3015 + t3022;
  t3011 = t1356*t567;
  t3039 = t1389*t3023;
  t3040 = t3011 + t3039;
  t3053 = t1389*t567;
  t3060 = -1.*t1356*t3023;
  t3068 = t3053 + t3060;
  t2754 = -1.*t2753*t576;
  t3139 = t1075*t205*t628;
  t3140 = t3139 + t2754;
  t3193 = t447*t205;
  t3201 = t281*t432*t452;
  t3205 = t3193 + t3201;
  t3213 = t1075*t628*t452;
  t3220 = -1.*t3205*t576;
  t3237 = t3213 + t3220;
  t3320 = -1.*t628*t432;
  t3324 = -1.*t1075*t281*t576;
  t3330 = t3320 + t3324;
  t3409 = 0. + t548 + t559;
  t3381 = 0. + t2760 + t2762;
  t3397 = -1.*t631*t3381;
  t3410 = -1.*t3409*t661;
  t3415 = t3397 + t3410;
  t3423 = t631*t3409;
  t3425 = -1.*t3381*t661;
  t3426 = t3423 + t3425;
  t3513 = 0. + t896 + t906;
  t3486 = t628*t3205;
  t3487 = t1075*t452*t1939;
  t3496 = 0. + t3486 + t3487;
  t3503 = -1.*t631*t3496;
  t3514 = -1.*t3513*t661;
  t3517 = t3503 + t3514;
  t3520 = t631*t3513;
  t3526 = -1.*t3496*t661;
  t3528 = t3520 + t3526;
  t3600 = t447*t1075;
  t3615 = 0. + t3600;
  t3578 = t1075*t628*t281;
  t3584 = -1.*t432*t1939;
  t3592 = 0. + t3578 + t3584;
  t3599 = -1.*t631*t3592;
  t3627 = -1.*t3615*t661;
  t3628 = t3599 + t3627;
  t3634 = t3615*t631;
  t3636 = -1.*t3592*t661;
  t3645 = t3634 + t3636;
  t3719 = t631*t3381;
  t3720 = t3409*t661;
  t3724 = 0. + t3719 + t3720;
  t3705 = 0. + t3423 + t3425;
  t3778 = t631*t3496;
  t3804 = t3513*t661;
  t3805 = 0. + t3778 + t3804;
  t3772 = 0. + t3520 + t3526;
  t3847 = t631*t3592;
  t3854 = t3615*t661;
  t3871 = 0. + t3847 + t3854;
  t3842 = 0. + t3634 + t3636;
  t3960 = -1.*t1368*t1075*t205;
  t3968 = -1.*t1337*t2753;
  t3972 = t3960 + t3968;
  t4062 = -1.*t1368*t1075*t452;
  t4065 = -1.*t1337*t3205;
  t4072 = t4062 + t4065;
  t4129 = -1.*t1075*t1337*t281;
  t4132 = t1368*t432;
  t4137 = t4129 + t4132;
  t4249 = 0. + t3015 + t3022;
  t4242 = -1.*t1356*t3409;
  t4251 = -1.*t1389*t4249;
  t4252 = t4242 + t4251;
  t4259 = t1389*t3409;
  t4262 = -1.*t1356*t4249;
  t4263 = t4259 + t4262;
  t4054 = t1368*t3205;
  t4330 = t1075*t2334*t452;
  t4335 = 0. + t4330 + t4054;
  t4323 = -1.*t1356*t3513;
  t4337 = -1.*t1389*t4335;
  t4339 = t4323 + t4337;
  t4344 = t1389*t3513;
  t4346 = -1.*t1356*t4335;
  t4353 = t4344 + t4346;
  t4159 = t1368*t1075*t281;
  t4453 = -1.*t2334*t432;
  t4454 = 0. + t4159 + t4453;
  t4435 = -1.*t3615*t1356;
  t4463 = -1.*t1389*t4454;
  t4464 = t4435 + t4463;
  t4483 = t1389*t3615;
  t4485 = -1.*t1356*t4454;
  t4495 = t4483 + t4485;
  t4581 = t1356*t3409;
  t4588 = t1389*t4249;
  t4589 = 0. + t4581 + t4588;
  t4592 = 0. + t4259 + t4262;
  t4621 = t1356*t3513;
  t4642 = t1389*t4335;
  t4652 = 0. + t4621 + t4642;
  t4679 = 0. + t4344 + t4346;
  t4721 = t3615*t1356;
  t4722 = t1389*t4454;
  t4725 = 0. + t4721 + t4722;
  t4733 = 0. + t4483 + t4485;
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
  p_output1[42]=0.2429*t505 + 0.0329*t567*t576 - 0.2083*t678 - 0.1422*t735 - 0.02*(t735*t768 + t678*t813) - 0.16*(t678*t768 + t735*t847);
  p_output1[43]=0.2429*t890 + 0.0329*t576*t909 - 0.1422*t929 - 0.2083*t973 - 0.16*(t847*t929 + t768*t973) - 0.02*(t768*t929 + t813*t973);
  p_output1[44]=-0.1422*t1108 - 0.2083*t1160 - 0.2429*t1075*t281 + 0.0329*t1075*t447*t576 - 0.02*(t1108*t768 + t1160*t813) - 0.16*(t1160*t768 + t1108*t847);
  p_output1[45]=-0.2083*t1406 - 0.1422*t1478 - 0.02*(t1406*t1515 + t1478*t1535) - 0.16*(t1406*t1535 + t1478*t1591) - 0.1944*t505 + 0.0329*t1337*t567;
  p_output1[46]=-0.1422*t1651 - 0.2083*t1668 - 0.02*(t1535*t1651 + t1515*t1668) - 0.16*(t1591*t1651 + t1535*t1668) - 0.1944*t890 + 0.0329*t1337*t909;
  p_output1[47]=-0.1422*t1780 - 0.2083*t1804 - 0.02*(t1535*t1780 + t1515*t1804) - 0.16*(t1591*t1780 + t1535*t1804) + 0.1944*t1075*t281 + 0.0329*t1075*t1337*t447;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=1.;
  p_output1[53]=0;
  p_output1[54]=-0.2083*t1956 - 0.1422*t1969 + 0.0817*t205*t432 + 0.2429*t1075*t205*t447 - 0.0329*(-1.*t1862*t205*t432 - 1.*t1075*t205*t281*t576) - 0.02*(t1969*t768 + t1956*t813) - 0.16*(t1956*t768 + t1969*t847);
  p_output1[55]=-0.2083*t2070 - 0.1422*t2101 + 0.0817*t432*t452 + 0.2429*t1075*t447*t452 - 0.0329*(-1.*t1862*t432*t452 - 1.*t1075*t281*t452*t576) - 0.02*(t2101*t768 + t2070*t813) - 0.16*(t2070*t768 + t2101*t847);
  p_output1[56]=0.0817*t1075 - 0.2083*t2208 - 0.1422*t2224 - 0.2429*t432*t447 - 0.0329*(-1.*t1075*t1862 + t281*t432*t576) - 0.02*(t2224*t768 + t2208*t813) - 0.16*(t2208*t768 + t2224*t847);
  p_output1[57]=-0.2083*t2346 - 0.1422*t2357 - 0.02*(t1515*t2346 + t1535*t2357) - 0.16*(t1535*t2346 + t1591*t2357) - 0.0817*t205*t432 + 0.0329*(t1075*t1337*t205*t281 - 1.*t205*t2305*t432) - 0.1944*t1075*t205*t447;
  p_output1[58]=-0.2083*t2459 - 0.1422*t2475 - 0.02*(t1515*t2459 + t1535*t2475) - 0.16*(t1535*t2459 + t1591*t2475) - 0.0817*t432*t452 - 0.1944*t1075*t447*t452 + 0.0329*(t1075*t1337*t281*t452 - 1.*t2305*t432*t452);
  p_output1[59]=-0.0817*t1075 - 0.2083*t2529 - 0.1422*t2543 - 0.02*(t1515*t2529 + t1535*t2543) - 0.16*(t1535*t2529 + t1591*t2543) + 0.0329*(-1.*t1075*t2305 - 1.*t1337*t281*t432) + 0.1944*t432*t447;
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=1.;
  p_output1[66]=0.2429*t2628 - 0.2083*t2661 - 0.1422*t2674 + 0.0817*t1075*t452 - 0.02*(t2674*t768 + t2661*t813) - 0.16*(t2661*t768 + t2674*t847) - 0.0329*(-1.*t1075*t1862*t452 - 1.*t576*t890);
  p_output1[67]=-0.0817*t1075*t205 - 0.0329*(t1075*t1862*t205 + t2754) - 0.2083*t2771 - 0.1422*t2788 + 0.2429*t567 - 0.02*(t2788*t768 + t2771*t813) - 0.16*(t2771*t768 + t2788*t847);
  p_output1[68]=0;
  p_output1[69]=-0.1944*t2628 - 0.2083*t2890 - 0.1422*t2903 - 0.02*(t1515*t2890 + t1535*t2903) - 0.16*(t1535*t2890 + t1591*t2903) - 0.0817*t1075*t452 + 0.0329*(-1.*t1075*t2305*t452 + t1337*t890);
  p_output1[70]=0.0817*t1075*t205 + 0.0329*(t1075*t205*t2305 + t1337*t2753) - 0.2083*t3040 - 0.1422*t3068 - 0.02*(t1515*t3040 + t1535*t3068) - 0.16*(t1535*t3040 + t1591*t3068) - 0.1944*t567;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=-0.0329*(-1.*t1075*t205*t576 - 1.*t2753*t628) - 0.2083*t3140*t631 + 0.1422*t3140*t661 - 0.02*(-1.*t3140*t661*t768 + t3140*t631*t813) - 0.16*(t3140*t631*t768 - 1.*t3140*t661*t847);
  p_output1[79]=-0.0329*(-1.*t1075*t452*t576 - 1.*t3205*t628) - 0.2083*t3237*t631 + 0.1422*t3237*t661 - 0.02*(-1.*t3237*t661*t768 + t3237*t631*t813) - 0.16*(t3237*t631*t768 - 1.*t3237*t661*t847);
  p_output1[80]=-0.0329*(t432*t576 - 1.*t1075*t281*t628) - 0.2083*t3330*t631 + 0.1422*t3330*t661 - 0.02*(-1.*t3330*t661*t768 + t3330*t631*t813) - 0.16*(t3330*t631*t768 - 1.*t3330*t661*t847);
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
  p_output1[90]=-0.1422*t3415 - 0.2083*t3426 - 0.02*(t3415*t768 + t3426*t813) - 0.16*(t3426*t768 + t3415*t847);
  p_output1[91]=-0.1422*t3517 - 0.2083*t3528 - 0.02*(t3517*t768 + t3528*t813) - 0.16*(t3528*t768 + t3517*t847);
  p_output1[92]=-0.1422*t3628 - 0.2083*t3645 - 0.02*(t3628*t768 + t3645*t813) - 0.16*(t3645*t768 + t3628*t847);
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
  p_output1[102]=-0.02*(-1.*t3724*t765 - 1.*t3705*t776) - 0.16*(t3705*t765 - 1.*t3724*t776);
  p_output1[103]=-0.02*(-1.*t3805*t765 - 1.*t3772*t776) - 0.16*(t3772*t765 - 1.*t3805*t776);
  p_output1[104]=-0.02*(-1.*t3871*t765 - 1.*t3842*t776) - 0.16*(t3842*t765 - 1.*t3871*t776);
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
  p_output1[153]=0;
  p_output1[154]=0;
  p_output1[155]=0;
  p_output1[156]=0;
  p_output1[157]=0;
  p_output1[158]=0;
  p_output1[159]=0;
  p_output1[160]=0;
  p_output1[161]=0;
  p_output1[162]=0;
  p_output1[163]=0;
  p_output1[164]=0;
  p_output1[165]=0;
  p_output1[166]=0;
  p_output1[167]=0;
  p_output1[168]=0;
  p_output1[169]=0;
  p_output1[170]=0;
  p_output1[171]=0;
  p_output1[172]=0;
  p_output1[173]=0;
  p_output1[174]=0;
  p_output1[175]=0;
  p_output1[176]=0;
  p_output1[177]=0;
  p_output1[178]=0;
  p_output1[179]=0;
  p_output1[180]=0;
  p_output1[181]=0;
  p_output1[182]=0;
  p_output1[183]=0;
  p_output1[184]=0;
  p_output1[185]=0;
  p_output1[186]=0;
  p_output1[187]=0;
  p_output1[188]=0;
  p_output1[189]=0.0329*(-1.*t1075*t1337*t205 + t3022) + 0.1422*t1356*t3972 - 0.2083*t1389*t3972 - 0.02*(t1389*t1515*t3972 - 1.*t1356*t1535*t3972) - 0.16*(t1389*t1535*t3972 - 1.*t1356*t1591*t3972);
  p_output1[190]=0.1422*t1356*t4072 - 0.2083*t1389*t4072 - 0.02*(t1389*t1515*t4072 - 1.*t1356*t1535*t4072) - 0.16*(t1389*t1535*t4072 - 1.*t1356*t1591*t4072) + 0.0329*(t4054 - 1.*t1075*t1337*t452);
  p_output1[191]=0.1422*t1356*t4137 - 0.2083*t1389*t4137 - 0.02*(t1389*t1515*t4137 - 1.*t1356*t1535*t4137) - 0.16*(t1389*t1535*t4137 - 1.*t1356*t1591*t4137) + 0.0329*(t4159 + t1337*t432);
  p_output1[192]=0;
  p_output1[193]=0;
  p_output1[194]=0;
  p_output1[195]=0;
  p_output1[196]=0;
  p_output1[197]=0;
  p_output1[198]=0;
  p_output1[199]=0;
  p_output1[200]=0;
  p_output1[201]=-0.1422*t4252 - 0.2083*t4263 - 0.02*(t1535*t4252 + t1515*t4263) - 0.16*(t1591*t4252 + t1535*t4263);
  p_output1[202]=-0.1422*t4339 - 0.2083*t4353 - 0.02*(t1535*t4339 + t1515*t4353) - 0.16*(t1591*t4339 + t1535*t4353);
  p_output1[203]=-0.1422*t4464 - 0.2083*t4495 - 0.02*(t1535*t4464 + t1515*t4495) - 0.16*(t1591*t4464 + t1535*t4495);
  p_output1[204]=0;
  p_output1[205]=0;
  p_output1[206]=0;
  p_output1[207]=0;
  p_output1[208]=0;
  p_output1[209]=0;
  p_output1[210]=0;
  p_output1[211]=0;
  p_output1[212]=0;
  p_output1[213]=-0.02*(-1.*t1531*t4589 - 1.*t1490*t4592) - 0.16*(-1.*t1490*t4589 + t1531*t4592);
  p_output1[214]=-0.02*(-1.*t1531*t4652 - 1.*t1490*t4679) - 0.16*(-1.*t1490*t4652 + t1531*t4679);
  p_output1[215]=-0.02*(-1.*t1531*t4725 - 1.*t1490*t4733) - 0.16*(-1.*t1490*t4725 + t1531*t4733);
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

#include "j_hc_1_func.hh"

namespace SymFunction
{

void j_hc_1_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
