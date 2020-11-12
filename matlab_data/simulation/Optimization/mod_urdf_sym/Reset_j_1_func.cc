/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 13:01:07 GMT-05:00
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
  double t135;
  double t715;
  double t432;
  double t59;
  double t744;
  double t481;
  double t827;
  double t878;
  double t1059;
  double t949;
  double t958;
  double t992;
  double t932;
  double t1295;
  double t1308;
  double t1326;
  double t1367;
  double t1371;
  double t1395;
  double t1662;
  double t1664;
  double t1674;
  double t1089;
  double t1798;
  double t1814;
  double t1894;
  double t1489;
  double t1494;
  double t1780;
  double t1897;
  double t1900;
  double t1539;
  double t1541;
  double t2083;
  double t2090;
  double t2136;
  double t2137;
  double t2388;
  double t2445;
  double t2369;
  double t2435;
  double t2477;
  double t2492;
  double t2505;
  double t2528;
  double t2552;
  double t2655;
  double t2675;
  double t2850;
  double t2858;
  double t2920;
  double t2723;
  double t2728;
  double t3122;
  double t3123;
  double t3124;
  double t890;
  double t3368;
  double t3324;
  double t3418;
  double t3420;
  double t3421;
  double t3457;
  double t3458;
  double t3550;
  double t1696;
  double t3380;
  double t3568;
  double t3608;
  double t3713;
  double t3715;
  double t3721;
  double t3620;
  double t3629;
  double t2087;
  double t3789;
  double t3791;
  double t3793;
  double t3900;
  double t3904;
  double t3906;
  double t3909;
  double t3913;
  double t3918;
  double t4003;
  double t4004;
  double t4012;
  double t4013;
  double t4024;
  double t4042;
  double t4156;
  double t4158;
  double t4162;
  double t4163;
  double t4179;
  double t4236;
  double t3896;
  double t4335;
  double t4336;
  double t4340;
  double t4343;
  double t4344;
  double t4353;
  double t3986;
  double t4443;
  double t4444;
  double t4445;
  double t4447;
  double t4463;
  double t4473;
  double t4134;
  double t4592;
  double t4595;
  double t4596;
  double t4611;
  double t4651;
  double t4652;
  double t3874;
  double t4789;
  double t4795;
  double t4799;
  double t4805;
  double t4809;
  double t4825;
  double t3969;
  double t4903;
  double t4905;
  double t4911;
  double t4914;
  double t4915;
  double t4916;
  double t4143;
  double t4991;
  double t5006;
  double t5011;
  double t5012;
  double t5013;
  double t5020;
  double t5080;
  double t5088;
  double t5093;
  double t5101;
  double t5102;
  double t5107;
  double t5111;
  double t5113;
  double t5119;
  double t5183;
  double t5184;
  double t5204;
  double t5223;
  double t5232;
  double t5236;
  double t5242;
  double t5243;
  double t5259;
  double t5069;
  double t5357;
  double t5381;
  double t5382;
  double t5392;
  double t5404;
  double t5407;
  double t5166;
  double t5466;
  double t5480;
  double t5481;
  double t5492;
  double t5493;
  double t5494;
  double t5073;
  double t5598;
  double t5599;
  double t5602;
  double t5603;
  double t5604;
  double t5619;
  double t5208;
  double t5714;
  double t5740;
  double t5742;
  double t5745;
  double t5755;
  double t5760;
  double t5861;
  double t5864;
  double t5869;
  double t5898;
  double t5899;
  double t5900;
  double t5902;
  double t5904;
  double t5912;
  double t3187;
  double t5944;
  double t5948;
  double t5987;
  double t5988;
  double t5989;
  double t5990;
  double t5992;
  double t5993;
  double t5915;
  double t6015;
  double t6017;
  double t6019;
  double t6020;
  double t6021;
  double t6024;
  double t6028;
  double t5952;
  double t6050;
  double t6054;
  double t6055;
  double t6056;
  double t6069;
  double t6072;
  double t6078;
  double t6162;
  double t6166;
  double t6168;
  double t6189;
  double t6190;
  double t6194;
  double t2220;
  double t6217;
  double t6219;
  double t6245;
  double t6243;
  double t6246;
  double t6249;
  double t6196;
  double t6271;
  double t6274;
  double t6268;
  double t6275;
  double t6278;
  double t6221;
  double t6305;
  double t6306;
  double t6307;
  double t6309;
  double t6311;
  double t6434;
  double t6437;
  double t6439;
  double t6463;
  double t6464;
  double t6465;
  double t3823;
  double t6494;
  double t6495;
  double t6525;
  double t6523;
  double t6527;
  double t6528;
  double t6469;
  double t6589;
  double t6613;
  double t6587;
  double t6614;
  double t6618;
  double t6499;
  double t6655;
  double t6657;
  double t6661;
  double t6662;
  double t6663;
  t135 = Cos(var1[5]);
  t715 = Sin(var1[3]);
  t432 = Sin(var1[4]);
  t59 = Cos(var1[3]);
  t744 = Sin(var1[5]);
  t481 = t59*t135*t432;
  t827 = t715*t744;
  t878 = t481 + t827;
  t1059 = Cos(var1[9]);
  t949 = -1.*t135*t715*t432;
  t958 = t59*t744;
  t992 = t949 + t958;
  t932 = Sin(var1[9]);
  t1295 = Cos(var1[10]);
  t1308 = t1059*t992;
  t1326 = -1.*t932;
  t1367 = 0. + t1326;
  t1371 = t1367*t878;
  t1395 = t1308 + t1371;
  t1662 = -1.*t135*t715;
  t1664 = t59*t432*t744;
  t1674 = t1662 + t1664;
  t1089 = 0. + t1059;
  t1798 = -1.*t59*t135;
  t1814 = -1.*t715*t432*t744;
  t1894 = t1798 + t1814;
  t1489 = Cos(var1[11]);
  t1494 = 0. + t1489;
  t1780 = t1367*t1674;
  t1897 = t1059*t1894;
  t1900 = t1780 + t1897;
  t1539 = Sin(var1[10]);
  t1541 = Sin(var1[11]);
  t2083 = Cos(var1[4]);
  t2090 = t59*t2083*t1367;
  t2136 = -1.*t1059*t2083*t715;
  t2137 = t2090 + t2136;
  t2388 = Cos(var1[6]);
  t2445 = Sin(var1[6]);
  t2369 = Cos(var1[7]);
  t2435 = t2388*t992;
  t2477 = -1.*t2445;
  t2492 = 0. + t2477;
  t2505 = t878*t2492;
  t2528 = t2435 + t2505;
  t2552 = 0. + t2388;
  t2655 = Cos(var1[8]);
  t2675 = 0. + t2655;
  t2850 = t2388*t1894;
  t2858 = t1674*t2492;
  t2920 = t2850 + t2858;
  t2723 = Sin(var1[7]);
  t2728 = Sin(var1[8]);
  t3122 = -1.*t2083*t2388*t715;
  t3123 = t59*t2083*t2492;
  t3124 = t3122 + t3123;
  t890 = 0.0875*t878;
  t3368 = Cos(var1[15]);
  t3324 = Sin(var1[15]);
  t3418 = Cos(var1[16]);
  t3420 = t3368*t992;
  t3421 = -1.*t3324;
  t3457 = 0. + t3421;
  t3458 = t3457*t878;
  t3550 = t3420 + t3458;
  t1696 = 0.0875*t1674;
  t3380 = 0. + t3368;
  t3568 = Cos(var1[17]);
  t3608 = 0. + t3568;
  t3713 = t3457*t1674;
  t3715 = t3368*t1894;
  t3721 = t3713 + t3715;
  t3620 = Sin(var1[16]);
  t3629 = Sin(var1[17]);
  t2087 = 0.0875*t59*t2083;
  t3789 = t59*t2083*t3457;
  t3791 = -1.*t3368*t2083*t715;
  t3793 = t3789 + t3791;
  t3900 = t1059*t59*t2083*t135;
  t3904 = t2083*t135*t1367*t715;
  t3906 = t3900 + t3904;
  t3909 = t1295*t3906;
  t3913 = -1.*t135*t1539*t432;
  t3918 = t3909 + t3913;
  t4003 = -1.*t1539*t432*t744;
  t4004 = t1059*t59*t2083*t744;
  t4012 = t2083*t1367*t715*t744;
  t4013 = t4004 + t4012;
  t4024 = t1295*t4013;
  t4042 = t4003 + t4024;
  t4156 = -1.*t2083*t1539;
  t4158 = -1.*t1059*t59*t432;
  t4162 = -1.*t1367*t715*t432;
  t4163 = t4158 + t4162;
  t4179 = t1295*t4163;
  t4236 = t4156 + t4179;
  t3896 = -0.21935*t135*t432;
  t4335 = t59*t2083*t135*t2388;
  t4336 = t2083*t135*t715*t2492;
  t4340 = t4335 + t4336;
  t4343 = t2369*t4340;
  t4344 = -1.*t135*t432*t2723;
  t4353 = t4343 + t4344;
  t3986 = -0.21935*t432*t744;
  t4443 = t59*t2083*t2388*t744;
  t4444 = t2083*t715*t744*t2492;
  t4445 = t4443 + t4444;
  t4447 = t2369*t4445;
  t4463 = -1.*t432*t744*t2723;
  t4473 = t4447 + t4463;
  t4134 = -0.21935*t2083;
  t4592 = -1.*t59*t2388*t432;
  t4595 = -1.*t715*t432*t2492;
  t4596 = t4592 + t4595;
  t4611 = t2369*t4596;
  t4651 = -1.*t2083*t2723;
  t4652 = t4611 + t4651;
  t3874 = 0.0875*t2083*t135*t715;
  t4789 = t3368*t59*t2083*t135;
  t4795 = t2083*t135*t3457*t715;
  t4799 = t4789 + t4795;
  t4805 = t3418*t4799;
  t4809 = -1.*t135*t3620*t432;
  t4825 = t4805 + t4809;
  t3969 = 0.0875*t2083*t715*t744;
  t4903 = -1.*t3620*t432*t744;
  t4905 = t3368*t59*t2083*t744;
  t4911 = t2083*t3457*t715*t744;
  t4914 = t4905 + t4911;
  t4915 = t3418*t4914;
  t4916 = t4903 + t4915;
  t4143 = -0.0875*t715*t432;
  t4991 = -1.*t2083*t3620;
  t5006 = -1.*t3368*t59*t432;
  t5011 = -1.*t3457*t715*t432;
  t5012 = t5006 + t5011;
  t5013 = t3418*t5012;
  t5020 = t4991 + t5013;
  t5080 = t135*t715;
  t5088 = -1.*t59*t432*t744;
  t5093 = t5080 + t5088;
  t5101 = -1.*t2083*t1539*t744;
  t5102 = t1059*t5093;
  t5107 = t1367*t1894;
  t5111 = t5102 + t5107;
  t5113 = t1295*t5111;
  t5119 = t5101 + t5113;
  t5183 = t135*t715*t432;
  t5184 = -1.*t59*t744;
  t5204 = t5183 + t5184;
  t5223 = t2083*t135*t1539;
  t5232 = t1367*t5204;
  t5236 = t1059*t878;
  t5242 = t5232 + t5236;
  t5243 = t1295*t5242;
  t5259 = t5223 + t5243;
  t5069 = -0.21935*t2083*t744;
  t5357 = t2388*t5093;
  t5381 = t1894*t2492;
  t5382 = t5357 + t5381;
  t5392 = t2369*t5382;
  t5404 = -1.*t2083*t744*t2723;
  t5407 = t5392 + t5404;
  t5166 = 0.21935*t2083*t135;
  t5466 = t2388*t878;
  t5480 = t5204*t2492;
  t5481 = t5466 + t5480;
  t5492 = t2369*t5481;
  t5493 = t2083*t135*t2723;
  t5494 = t5492 + t5493;
  t5073 = 0.0875*t1894;
  t5598 = -1.*t2083*t3620*t744;
  t5599 = t3368*t5093;
  t5602 = t3457*t1894;
  t5603 = t5599 + t5602;
  t5604 = t3418*t5603;
  t5619 = t5598 + t5604;
  t5208 = 0.0875*t5204;
  t5714 = t2083*t135*t3620;
  t5740 = t3457*t5204;
  t5742 = t3368*t878;
  t5745 = t5740 + t5742;
  t5755 = t3418*t5745;
  t5760 = t5714 + t5755;
  t5861 = -1.*t2388*t5204;
  t5864 = -1.*t878*t2445;
  t5869 = t5861 + t5864;
  t5898 = t59*t135;
  t5899 = t715*t432*t744;
  t5900 = t5898 + t5899;
  t5902 = -1.*t2388*t5900;
  t5904 = -1.*t1674*t2445;
  t5912 = t5902 + t5904;
  t3187 = -1.*t2083*t715*t2445;
  t5944 = -1.*t59*t2083*t2445;
  t5948 = t3122 + t5944;
  t5987 = t2083*t135;
  t5988 = 0. + t5987;
  t5989 = t5988*t2369;
  t5990 = 0. + t5466 + t5480;
  t5992 = -1.*t5990*t2723;
  t5993 = t5989 + t5992;
  t5915 = t2388*t1674;
  t6015 = t2083*t744;
  t6017 = 0. + t6015;
  t6019 = t2369*t6017;
  t6020 = t5900*t2492;
  t6021 = 0. + t5915 + t6020;
  t6024 = -1.*t6021*t2723;
  t6028 = t6019 + t6024;
  t5952 = t59*t2083*t2388;
  t6050 = -1.*t432;
  t6054 = 0. + t6050;
  t6055 = t2369*t6054;
  t6056 = t2083*t715*t2492;
  t6069 = 0. + t5952 + t6056;
  t6072 = -1.*t6069*t2723;
  t6078 = t6055 + t6072;
  t6162 = -1.*t1059*t5204;
  t6166 = -1.*t932*t878;
  t6168 = t6162 + t6166;
  t6189 = -1.*t932*t1674;
  t6190 = -1.*t1059*t5900;
  t6194 = t6189 + t6190;
  t2220 = -1.*t2083*t932*t715;
  t6217 = -1.*t59*t2083*t932;
  t6219 = t6217 + t2136;
  t6245 = 0. + t5232 + t5236;
  t6243 = t1295*t5988;
  t6246 = -1.*t1539*t6245;
  t6249 = t6243 + t6246;
  t6196 = t1059*t1674;
  t6271 = t1367*t5900;
  t6274 = 0. + t6196 + t6271;
  t6268 = t1295*t6017;
  t6275 = -1.*t1539*t6274;
  t6278 = t6268 + t6275;
  t6221 = t1059*t59*t2083;
  t6305 = t2083*t1367*t715;
  t6306 = 0. + t6221 + t6305;
  t6307 = -1.*t1539*t6306;
  t6309 = t1295*t6054;
  t6311 = t6307 + t6309;
  t6434 = -1.*t3368*t5204;
  t6437 = -1.*t3324*t878;
  t6439 = t6434 + t6437;
  t6463 = -1.*t3324*t1674;
  t6464 = -1.*t3368*t5900;
  t6465 = t6463 + t6464;
  t3823 = -1.*t2083*t3324*t715;
  t6494 = -1.*t59*t2083*t3324;
  t6495 = t6494 + t3791;
  t6525 = 0. + t5740 + t5742;
  t6523 = t3418*t5988;
  t6527 = -1.*t3620*t6525;
  t6528 = t6523 + t6527;
  t6469 = t3368*t1674;
  t6589 = t3457*t5900;
  t6613 = 0. + t6469 + t6589;
  t6587 = t3418*t6017;
  t6614 = -1.*t3620*t6613;
  t6618 = t6587 + t6614;
  t6499 = t3368*t59*t2083;
  t6655 = t2083*t3457*t715;
  t6657 = 0. + t6499 + t6655;
  t6661 = -1.*t3620*t6657;
  t6662 = t3418*t6054;
  t6663 = t6661 + t6662;
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
  p_output1[27]=-0.25*t1295*t1395 - 0.27*(t1295*t1395*t1494 - 1.*t1395*t1539*t1541) + t890 + 0.037*(t1089*t878 + t932*t992);
  p_output1[28]=t1696 - 0.25*t1295*t1900 - 0.27*(t1295*t1494*t1900 - 1.*t1539*t1541*t1900) + 0.037*(t1089*t1674 + t1894*t932);
  p_output1[29]=t2087 - 0.25*t1295*t2137 - 0.27*(t1295*t1494*t2137 - 1.*t1539*t1541*t2137) + 0.037*(t2220 + t1089*t2083*t59);
  p_output1[30]=-0.25*t2369*t2528 - 0.27*(t2369*t2528*t2675 - 1.*t2528*t2723*t2728) - 0.0875*t878 - 0.037*(t2552*t878 + t2445*t992);
  p_output1[31]=-0.0875*t1674 - 0.037*(t1894*t2445 + t1674*t2552) - 0.25*t2369*t2920 - 0.27*(t2369*t2675*t2920 - 1.*t2723*t2728*t2920);
  p_output1[32]=-0.25*t2369*t3124 - 0.27*(t2369*t2675*t3124 - 1.*t2723*t2728*t3124) - 0.0875*t2083*t59 - 0.037*(t3187 + t2083*t2552*t59);
  p_output1[33]=-0.25*t3418*t3550 - 0.27*(t3418*t3550*t3608 - 1.*t3550*t3620*t3629) + t890 + 0.037*(t3380*t878 + t3324*t992);
  p_output1[34]=t1696 + 0.037*(t1894*t3324 + t1674*t3380) - 0.25*t3418*t3721 - 0.27*(t3418*t3608*t3721 - 1.*t3620*t3629*t3721);
  p_output1[35]=t2087 - 0.25*t3418*t3793 - 0.27*(t3418*t3608*t3793 - 1.*t3620*t3629*t3793) + 0.037*(t3823 + t2083*t3380*t59);
  p_output1[36]=t3874 + t3896 - 0.25*t3918 - 0.27*(t1494*t3918 + t1541*(-1.*t1539*t3906 - 1.*t1295*t135*t432)) + 0.037*(t1089*t135*t2083*t715 + t135*t2083*t59*t932);
  p_output1[37]=t3969 + t3986 - 0.25*t4042 - 0.27*(t1494*t4042 + t1541*(-1.*t1539*t4013 - 1.*t1295*t432*t744)) + 0.037*(t1089*t2083*t715*t744 + t2083*t59*t744*t932);
  p_output1[38]=t4134 + t4143 - 0.25*t4236 - 0.27*(t1541*(-1.*t1295*t2083 - 1.*t1539*t4163) + t1494*t4236) + 0.037*(-1.*t1089*t432*t715 - 1.*t432*t59*t932);
  p_output1[39]=t3896 - 0.25*t4353 - 0.27*(t2728*(-1.*t135*t2369*t432 - 1.*t2723*t4340) + t2675*t4353) - 0.0875*t135*t2083*t715 - 0.037*(t135*t2083*t2445*t59 + t135*t2083*t2552*t715);
  p_output1[40]=t3986 - 0.25*t4473 - 0.0875*t2083*t715*t744 - 0.037*(t2083*t2445*t59*t744 + t2083*t2552*t715*t744) - 0.27*(t2675*t4473 + t2728*(-1.*t2723*t4445 - 1.*t2369*t432*t744));
  p_output1[41]=t4134 - 0.25*t4652 - 0.27*(t2728*(-1.*t2083*t2369 - 1.*t2723*t4596) + t2675*t4652) + 0.0875*t432*t715 - 0.037*(-1.*t2445*t432*t59 - 1.*t2552*t432*t715);
  p_output1[42]=t3874 + 0.21935*t135*t432 - 0.25*t4825 - 0.27*(t3629*(-1.*t135*t3418*t432 - 1.*t3620*t4799) + t3608*t4825) + 0.037*(t135*t2083*t3324*t59 + t135*t2083*t3380*t715);
  p_output1[43]=t3969 - 0.25*t4916 + 0.21935*t432*t744 + 0.037*(t2083*t3324*t59*t744 + t2083*t3380*t715*t744) - 0.27*(t3608*t4916 + t3629*(-1.*t3620*t4914 - 1.*t3418*t432*t744));
  p_output1[44]=0.21935*t2083 + t4143 - 0.25*t5020 - 0.27*(t3629*(-1.*t2083*t3418 - 1.*t3620*t5012) + t3608*t5020) + 0.037*(-1.*t3324*t432*t59 - 1.*t3380*t432*t715);
  p_output1[45]=t5069 + t5073 - 0.25*t5119 - 0.27*(t1494*t5119 + t1541*(-1.*t1539*t5111 - 1.*t1295*t2083*t744)) + 0.037*(t1089*t1894 + t5093*t932);
  p_output1[46]=t5166 + t5208 - 0.25*t5259 - 0.27*(t1541*(t1295*t135*t2083 - 1.*t1539*t5242) + t1494*t5259) + 0.037*(t1089*t5204 + t878*t932);
  p_output1[47]=0;
  p_output1[48]=-0.0875*t1894 + t5069 - 0.037*(t1894*t2552 + t2445*t5093) - 0.25*t5407 - 0.27*(t2675*t5407 + t2728*(-1.*t2723*t5382 - 1.*t2083*t2369*t744));
  p_output1[49]=t5166 - 0.0875*t5204 - 0.25*t5494 - 0.27*(t2728*(t135*t2083*t2369 - 1.*t2723*t5481) + t2675*t5494) - 0.037*(t2552*t5204 + t2445*t878);
  p_output1[50]=0;
  p_output1[51]=t5073 + 0.037*(t1894*t3380 + t3324*t5093) - 0.25*t5619 + 0.21935*t2083*t744 - 0.27*(t3608*t5619 + t3629*(-1.*t3620*t5603 - 1.*t2083*t3418*t744));
  p_output1[52]=-0.21935*t135*t2083 + t5208 - 0.25*t5760 - 0.27*(t3629*(t135*t2083*t3418 - 1.*t3620*t5745) + t3608*t5760) + 0.037*(t3380*t5204 + t3324*t878);
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=-0.037*(-1.*t2445*t5204 + t5466) - 0.25*t2369*t5869 - 0.27*(t2369*t2675*t5869 - 1.*t2723*t2728*t5869);
  p_output1[58]=-0.25*t2369*t5912 - 0.27*(t2369*t2675*t5912 - 1.*t2723*t2728*t5912) - 0.037*(-1.*t2445*t5900 + t5915);
  p_output1[59]=-0.25*t2369*t5948 - 0.27*(t2369*t2675*t5948 - 1.*t2723*t2728*t5948) - 0.037*(t3187 + t5952);
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=-0.25*t5993 - 0.27*(t2728*(-1.*t2723*t5988 - 1.*t2369*t5990) + t2675*t5993);
  p_output1[67]=-0.25*t6028 - 0.27*(t2728*(-1.*t2723*t6017 - 1.*t2369*t6021) + t2675*t6028);
  p_output1[68]=-0.25*t6078 - 0.27*(t2728*(-1.*t2723*t6054 - 1.*t2369*t6069) + t2675*t6078);
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=-0.27*(-1.*t2728*(0. + t2723*t5988 + t2369*t5990) + t2655*(0. + t5989 + t5992));
  p_output1[76]=-0.27*(-1.*t2728*(0. + t2723*t6017 + t2369*t6021) + t2655*(0. + t6019 + t6024));
  p_output1[77]=-0.27*(-1.*t2728*(0. + t2723*t6054 + t2369*t6069) + t2655*(0. + t6055 + t6072));
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=-0.25*t1295*t6168 - 0.27*(t1295*t1494*t6168 - 1.*t1539*t1541*t6168) + 0.037*(t5236 - 1.*t5204*t932);
  p_output1[82]=-0.25*t1295*t6194 - 0.27*(t1295*t1494*t6194 - 1.*t1539*t1541*t6194) + 0.037*(t6196 - 1.*t5900*t932);
  p_output1[83]=-0.25*t1295*t6219 - 0.27*(t1295*t1494*t6219 - 1.*t1539*t1541*t6219) + 0.037*(t2220 + t6221);
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
  p_output1[90]=-0.25*t6249 - 0.27*(t1541*(-1.*t1539*t5988 - 1.*t1295*t6245) + t1494*t6249);
  p_output1[91]=-0.25*t6278 - 0.27*(t1541*(-1.*t1539*t6017 - 1.*t1295*t6274) + t1494*t6278);
  p_output1[92]=-0.25*t6311 - 0.27*(t1541*(-1.*t1539*t6054 - 1.*t1295*t6306) + t1494*t6311);
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=-0.27*(-1.*t1541*(0. + t1539*t5988 + t1295*t6245) + t1489*(0. + t6243 + t6246));
  p_output1[100]=-0.27*(-1.*t1541*(0. + t1539*t6017 + t1295*t6274) + t1489*(0. + t6268 + t6275));
  p_output1[101]=-0.27*(-1.*t1541*(0. + t1539*t6054 + t1295*t6306) + t1489*(0. + t6307 + t6309));
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
  p_output1[141]=0.037*(-1.*t3324*t5204 + t5742) - 0.25*t3418*t6439 - 0.27*(t3418*t3608*t6439 - 1.*t3620*t3629*t6439);
  p_output1[142]=-0.25*t3418*t6465 - 0.27*(t3418*t3608*t6465 - 1.*t3620*t3629*t6465) + 0.037*(-1.*t3324*t5900 + t6469);
  p_output1[143]=-0.25*t3418*t6495 - 0.27*(t3418*t3608*t6495 - 1.*t3620*t3629*t6495) + 0.037*(t3823 + t6499);
  p_output1[144]=0;
  p_output1[145]=0;
  p_output1[146]=0;
  p_output1[147]=0;
  p_output1[148]=0;
  p_output1[149]=0;
  p_output1[150]=-0.25*t6528 - 0.27*(t3629*(-1.*t3620*t5988 - 1.*t3418*t6525) + t3608*t6528);
  p_output1[151]=-0.25*t6618 - 0.27*(t3629*(-1.*t3620*t6017 - 1.*t3418*t6613) + t3608*t6618);
  p_output1[152]=-0.25*t6663 - 0.27*(t3629*(-1.*t3620*t6054 - 1.*t3418*t6657) + t3608*t6663);
  p_output1[153]=0;
  p_output1[154]=0;
  p_output1[155]=0;
  p_output1[156]=0;
  p_output1[157]=0;
  p_output1[158]=0;
  p_output1[159]=-0.27*(-1.*t3629*(0. + t3620*t5988 + t3418*t6525) + t3568*(0. + t6523 + t6527));
  p_output1[160]=-0.27*(-1.*t3629*(0. + t3620*t6017 + t3418*t6613) + t3568*(0. + t6587 + t6614));
  p_output1[161]=-0.27*(-1.*t3629*(0. + t3620*t6054 + t3418*t6657) + t3568*(0. + t6661 + t6662));
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

#include "Reset_j_1_func.hh"

namespace SymFunction
{

void Reset_j_1_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
