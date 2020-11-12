/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 13:01:10 GMT-05:00
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
  double t174;
  double t353;
  double t270;
  double t161;
  double t481;
  double t302;
  double t489;
  double t498;
  double t891;
  double t773;
  double t827;
  double t858;
  double t762;
  double t1001;
  double t1018;
  double t1114;
  double t1146;
  double t1148;
  double t1271;
  double t1567;
  double t1570;
  double t1616;
  double t943;
  double t1671;
  double t1695;
  double t1696;
  double t1308;
  double t1371;
  double t1664;
  double t1712;
  double t1722;
  double t1462;
  double t1489;
  double t1937;
  double t1962;
  double t1974;
  double t1982;
  double t694;
  double t2170;
  double t2152;
  double t2254;
  double t2274;
  double t2280;
  double t2291;
  double t2303;
  double t2305;
  double t1618;
  double t2189;
  double t2390;
  double t2435;
  double t2581;
  double t2593;
  double t2655;
  double t2475;
  double t2481;
  double t1951;
  double t2869;
  double t2924;
  double t2965;
  double t3103;
  double t3088;
  double t3141;
  double t3204;
  double t3212;
  double t3225;
  double t3238;
  double t3245;
  double t3121;
  double t3262;
  double t3266;
  double t3563;
  double t3565;
  double t3568;
  double t3325;
  double t3388;
  double t3728;
  double t3730;
  double t3743;
  double t3853;
  double t3866;
  double t3874;
  double t3875;
  double t3877;
  double t3891;
  double t3951;
  double t3952;
  double t3966;
  double t3969;
  double t3986;
  double t3988;
  double t4091;
  double t4126;
  double t4130;
  double t4134;
  double t4143;
  double t4144;
  double t3826;
  double t4272;
  double t4277;
  double t4280;
  double t4292;
  double t4295;
  double t4298;
  double t3929;
  double t4393;
  double t4396;
  double t4409;
  double t4414;
  double t4417;
  double t4421;
  double t4072;
  double t4545;
  double t4553;
  double t4561;
  double t4565;
  double t4570;
  double t4586;
  double t4259;
  double t4718;
  double t4729;
  double t4741;
  double t4751;
  double t4778;
  double t4779;
  double t4372;
  double t4887;
  double t4891;
  double t4896;
  double t4897;
  double t4905;
  double t4908;
  double t4516;
  double t4975;
  double t4982;
  double t4984;
  double t4986;
  double t4989;
  double t4990;
  double t5067;
  double t5069;
  double t5073;
  double t5097;
  double t5100;
  double t5102;
  double t5107;
  double t5113;
  double t5121;
  double t5174;
  double t5183;
  double t5208;
  double t5223;
  double t5232;
  double t5243;
  double t5244;
  double t5262;
  double t5286;
  double t5066;
  double t5381;
  double t5383;
  double t5392;
  double t5409;
  double t5410;
  double t5411;
  double t5209;
  double t5480;
  double t5486;
  double t5492;
  double t5493;
  double t5511;
  double t5520;
  double t5334;
  double t5599;
  double t5602;
  double t5604;
  double t5608;
  double t5622;
  double t5630;
  double t5459;
  double t5755;
  double t5761;
  double t5762;
  double t5764;
  double t5773;
  double t5779;
  double t5872;
  double t5873;
  double t5875;
  double t5914;
  double t5924;
  double t5933;
  double t5899;
  double t5934;
  double t5937;
  double t2010;
  double t5977;
  double t5980;
  double t6007;
  double t6010;
  double t6012;
  double t6011;
  double t6013;
  double t6014;
  double t5939;
  double t6039;
  double t6040;
  double t6043;
  double t6044;
  double t6042;
  double t6045;
  double t6046;
  double t5983;
  double t6082;
  double t6083;
  double t6092;
  double t6093;
  double t6090;
  double t6094;
  double t6097;
  double t6186;
  double t6188;
  double t6195;
  double t6213;
  double t6214;
  double t6220;
  double t3752;
  double t6242;
  double t6243;
  double t6271;
  double t6268;
  double t6283;
  double t6285;
  double t6222;
  double t6327;
  double t6329;
  double t6318;
  double t6335;
  double t6338;
  double t6251;
  double t6373;
  double t6375;
  double t6376;
  double t6379;
  double t6382;
  double t6488;
  double t6489;
  double t6497;
  double t6520;
  double t6521;
  double t6522;
  double t2998;
  double t6585;
  double t6586;
  double t6651;
  double t6647;
  double t6652;
  double t6655;
  double t6531;
  double t6706;
  double t6707;
  double t6701;
  double t6708;
  double t6711;
  double t6589;
  double t6735;
  double t6736;
  double t6740;
  double t6742;
  double t6750;
  t174 = Cos(var1[5]);
  t353 = Sin(var1[3]);
  t270 = Sin(var1[4]);
  t161 = Cos(var1[3]);
  t481 = Sin(var1[5]);
  t302 = t161*t174*t270;
  t489 = t353*t481;
  t498 = t302 + t489;
  t891 = Cos(var1[9]);
  t773 = -1.*t174*t353*t270;
  t827 = t161*t481;
  t858 = t773 + t827;
  t762 = Sin(var1[9]);
  t1001 = Cos(var1[10]);
  t1018 = t891*t858;
  t1114 = -1.*t762;
  t1146 = 0. + t1114;
  t1148 = t1146*t498;
  t1271 = t1018 + t1148;
  t1567 = -1.*t174*t353;
  t1570 = t161*t270*t481;
  t1616 = t1567 + t1570;
  t943 = 0. + t891;
  t1671 = -1.*t161*t174;
  t1695 = -1.*t353*t270*t481;
  t1696 = t1671 + t1695;
  t1308 = Cos(var1[11]);
  t1371 = 0. + t1308;
  t1664 = t1146*t1616;
  t1712 = t891*t1696;
  t1722 = t1664 + t1712;
  t1462 = Sin(var1[10]);
  t1489 = Sin(var1[11]);
  t1937 = Cos(var1[4]);
  t1962 = t161*t1937*t1146;
  t1974 = -1.*t891*t1937*t353;
  t1982 = t1962 + t1974;
  t694 = 0.0875*t498;
  t2170 = Cos(var1[15]);
  t2152 = Sin(var1[15]);
  t2254 = Cos(var1[16]);
  t2274 = t2170*t858;
  t2280 = -1.*t2152;
  t2291 = 0. + t2280;
  t2303 = t2291*t498;
  t2305 = t2274 + t2303;
  t1618 = 0.0875*t1616;
  t2189 = 0. + t2170;
  t2390 = Cos(var1[17]);
  t2435 = 0. + t2390;
  t2581 = t2291*t1616;
  t2593 = t2170*t1696;
  t2655 = t2581 + t2593;
  t2475 = Sin(var1[16]);
  t2481 = Sin(var1[17]);
  t1951 = 0.0875*t161*t1937;
  t2869 = t161*t1937*t2291;
  t2924 = -1.*t2170*t1937*t353;
  t2965 = t2869 + t2924;
  t3103 = Cos(var1[12]);
  t3088 = Sin(var1[12]);
  t3141 = Cos(var1[13]);
  t3204 = t3103*t858;
  t3212 = -1.*t3088;
  t3225 = 0. + t3212;
  t3238 = t3225*t498;
  t3245 = t3204 + t3238;
  t3121 = 0. + t3103;
  t3262 = Cos(var1[14]);
  t3266 = 0. + t3262;
  t3563 = t3225*t1616;
  t3565 = t3103*t1696;
  t3568 = t3563 + t3565;
  t3325 = Sin(var1[13]);
  t3388 = Sin(var1[14]);
  t3728 = t161*t1937*t3225;
  t3730 = -1.*t3103*t1937*t353;
  t3743 = t3728 + t3730;
  t3853 = t891*t161*t1937*t174;
  t3866 = t1937*t174*t1146*t353;
  t3874 = t3853 + t3866;
  t3875 = t1001*t3874;
  t3877 = -1.*t174*t1462*t270;
  t3891 = t3875 + t3877;
  t3951 = -1.*t1462*t270*t481;
  t3952 = t891*t161*t1937*t481;
  t3966 = t1937*t1146*t353*t481;
  t3969 = t3952 + t3966;
  t3986 = t1001*t3969;
  t3988 = t3951 + t3986;
  t4091 = -1.*t1937*t1462;
  t4126 = -1.*t891*t161*t270;
  t4130 = -1.*t1146*t353*t270;
  t4134 = t4126 + t4130;
  t4143 = t1001*t4134;
  t4144 = t4091 + t4143;
  t3826 = 0.0875*t1937*t174*t353;
  t4272 = t2170*t161*t1937*t174;
  t4277 = t1937*t174*t2291*t353;
  t4280 = t4272 + t4277;
  t4292 = t2254*t4280;
  t4295 = -1.*t174*t2475*t270;
  t4298 = t4292 + t4295;
  t3929 = 0.0875*t1937*t353*t481;
  t4393 = -1.*t2475*t270*t481;
  t4396 = t2170*t161*t1937*t481;
  t4409 = t1937*t2291*t353*t481;
  t4414 = t4396 + t4409;
  t4417 = t2254*t4414;
  t4421 = t4393 + t4417;
  t4072 = -0.0875*t353*t270;
  t4545 = -1.*t1937*t2475;
  t4553 = -1.*t2170*t161*t270;
  t4561 = -1.*t2291*t353*t270;
  t4565 = t4553 + t4561;
  t4570 = t2254*t4565;
  t4586 = t4545 + t4570;
  t4259 = 0.21935*t174*t270;
  t4718 = t3103*t161*t1937*t174;
  t4729 = t1937*t174*t3225*t353;
  t4741 = t4718 + t4729;
  t4751 = t3141*t4741;
  t4778 = -1.*t174*t3325*t270;
  t4779 = t4751 + t4778;
  t4372 = 0.21935*t270*t481;
  t4887 = -1.*t3325*t270*t481;
  t4891 = t3103*t161*t1937*t481;
  t4896 = t1937*t3225*t353*t481;
  t4897 = t4891 + t4896;
  t4905 = t3141*t4897;
  t4908 = t4887 + t4905;
  t4516 = 0.21935*t1937;
  t4975 = -1.*t1937*t3325;
  t4982 = -1.*t3103*t161*t270;
  t4984 = -1.*t3225*t353*t270;
  t4986 = t4982 + t4984;
  t4989 = t3141*t4986;
  t4990 = t4975 + t4989;
  t5067 = t174*t353;
  t5069 = -1.*t161*t270*t481;
  t5073 = t5067 + t5069;
  t5097 = -1.*t1937*t1462*t481;
  t5100 = t891*t5073;
  t5102 = t1146*t1696;
  t5107 = t5100 + t5102;
  t5113 = t1001*t5107;
  t5121 = t5097 + t5113;
  t5174 = t174*t353*t270;
  t5183 = -1.*t161*t481;
  t5208 = t5174 + t5183;
  t5223 = t1937*t174*t1462;
  t5232 = t1146*t5208;
  t5243 = t891*t498;
  t5244 = t5232 + t5243;
  t5262 = t1001*t5244;
  t5286 = t5223 + t5262;
  t5066 = 0.0875*t1696;
  t5381 = -1.*t1937*t2475*t481;
  t5383 = t2170*t5073;
  t5392 = t2291*t1696;
  t5409 = t5383 + t5392;
  t5410 = t2254*t5409;
  t5411 = t5381 + t5410;
  t5209 = 0.0875*t5208;
  t5480 = t1937*t174*t2475;
  t5486 = t2291*t5208;
  t5492 = t2170*t498;
  t5493 = t5486 + t5492;
  t5511 = t2254*t5493;
  t5520 = t5480 + t5511;
  t5334 = 0.21935*t1937*t481;
  t5599 = -1.*t1937*t3325*t481;
  t5602 = t3103*t5073;
  t5604 = t3225*t1696;
  t5608 = t5602 + t5604;
  t5622 = t3141*t5608;
  t5630 = t5599 + t5622;
  t5459 = -0.21935*t1937*t174;
  t5755 = t1937*t174*t3325;
  t5761 = t3225*t5208;
  t5762 = t3103*t498;
  t5764 = t5761 + t5762;
  t5773 = t3141*t5764;
  t5779 = t5755 + t5773;
  t5872 = -1.*t891*t5208;
  t5873 = -1.*t762*t498;
  t5875 = t5872 + t5873;
  t5914 = t161*t174;
  t5924 = t353*t270*t481;
  t5933 = t5914 + t5924;
  t5899 = -1.*t762*t1616;
  t5934 = -1.*t891*t5933;
  t5937 = t5899 + t5934;
  t2010 = -1.*t1937*t762*t353;
  t5977 = -1.*t161*t1937*t762;
  t5980 = t5977 + t1974;
  t6007 = t1937*t174;
  t6010 = 0. + t6007;
  t6012 = 0. + t5232 + t5243;
  t6011 = t1001*t6010;
  t6013 = -1.*t1462*t6012;
  t6014 = t6011 + t6013;
  t5939 = t891*t1616;
  t6039 = t1937*t481;
  t6040 = 0. + t6039;
  t6043 = t1146*t5933;
  t6044 = 0. + t5939 + t6043;
  t6042 = t1001*t6040;
  t6045 = -1.*t1462*t6044;
  t6046 = t6042 + t6045;
  t5983 = t891*t161*t1937;
  t6082 = t1937*t1146*t353;
  t6083 = 0. + t5983 + t6082;
  t6092 = -1.*t270;
  t6093 = 0. + t6092;
  t6090 = -1.*t1462*t6083;
  t6094 = t1001*t6093;
  t6097 = t6090 + t6094;
  t6186 = -1.*t3103*t5208;
  t6188 = -1.*t3088*t498;
  t6195 = t6186 + t6188;
  t6213 = -1.*t3088*t1616;
  t6214 = -1.*t3103*t5933;
  t6220 = t6213 + t6214;
  t3752 = -1.*t1937*t3088*t353;
  t6242 = -1.*t161*t1937*t3088;
  t6243 = t6242 + t3730;
  t6271 = 0. + t5761 + t5762;
  t6268 = t3141*t6010;
  t6283 = -1.*t3325*t6271;
  t6285 = t6268 + t6283;
  t6222 = t3103*t1616;
  t6327 = t3225*t5933;
  t6329 = 0. + t6222 + t6327;
  t6318 = t3141*t6040;
  t6335 = -1.*t3325*t6329;
  t6338 = t6318 + t6335;
  t6251 = t3103*t161*t1937;
  t6373 = t1937*t3225*t353;
  t6375 = 0. + t6251 + t6373;
  t6376 = -1.*t3325*t6375;
  t6379 = t3141*t6093;
  t6382 = t6376 + t6379;
  t6488 = -1.*t2170*t5208;
  t6489 = -1.*t2152*t498;
  t6497 = t6488 + t6489;
  t6520 = -1.*t2152*t1616;
  t6521 = -1.*t2170*t5933;
  t6522 = t6520 + t6521;
  t2998 = -1.*t1937*t2152*t353;
  t6585 = -1.*t161*t1937*t2152;
  t6586 = t6585 + t2924;
  t6651 = 0. + t5486 + t5492;
  t6647 = t2254*t6010;
  t6652 = -1.*t2475*t6651;
  t6655 = t6647 + t6652;
  t6531 = t2170*t1616;
  t6706 = t2291*t5933;
  t6707 = 0. + t6531 + t6706;
  t6701 = t2254*t6040;
  t6708 = -1.*t2475*t6707;
  t6711 = t6701 + t6708;
  t6589 = t2170*t161*t1937;
  t6735 = t1937*t2291*t353;
  t6736 = 0. + t6589 + t6735;
  t6740 = -1.*t2475*t6736;
  t6742 = t2254*t6093;
  t6750 = t6740 + t6742;
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
  p_output1[27]=-0.25*t1001*t1271 - 0.27*(t1001*t1271*t1371 - 1.*t1271*t1462*t1489) + t694 + 0.037*(t762*t858 + t498*t943);
  p_output1[28]=t1618 - 0.25*t1001*t1722 - 0.27*(t1001*t1371*t1722 - 1.*t1462*t1489*t1722) + 0.037*(t1696*t762 + t1616*t943);
  p_output1[29]=t1951 - 0.25*t1001*t1982 - 0.27*(t1001*t1371*t1982 - 1.*t1462*t1489*t1982) + 0.037*(t2010 + t161*t1937*t943);
  p_output1[30]=-0.25*t2254*t2305 - 0.27*(t2254*t2305*t2435 - 1.*t2305*t2475*t2481) + t694 + 0.037*(t2189*t498 + t2152*t858);
  p_output1[31]=t1618 + 0.037*(t1696*t2152 + t1616*t2189) - 0.25*t2254*t2655 - 0.27*(t2254*t2435*t2655 - 1.*t2475*t2481*t2655);
  p_output1[32]=t1951 - 0.25*t2254*t2965 - 0.27*(t2254*t2435*t2965 - 1.*t2475*t2481*t2965) + 0.037*(t161*t1937*t2189 + t2998);
  p_output1[33]=-0.25*t3141*t3245 - 0.27*(t3141*t3245*t3266 - 1.*t3245*t3325*t3388) - 0.0875*t498 - 0.037*(t3121*t498 + t3088*t858);
  p_output1[34]=-0.0875*t1616 - 0.037*(t1696*t3088 + t1616*t3121) - 0.25*t3141*t3568 - 0.27*(t3141*t3266*t3568 - 1.*t3325*t3388*t3568);
  p_output1[35]=-0.0875*t161*t1937 - 0.25*t3141*t3743 - 0.27*(t3141*t3266*t3743 - 1.*t3325*t3388*t3743) - 0.037*(t161*t1937*t3121 + t3752);
  p_output1[36]=-0.21935*t174*t270 + t3826 - 0.25*t3891 - 0.27*(t1489*(-1.*t1001*t174*t270 - 1.*t1462*t3874) + t1371*t3891) + 0.037*(t161*t174*t1937*t762 + t174*t1937*t353*t943);
  p_output1[37]=t3929 - 0.25*t3988 - 0.21935*t270*t481 - 0.27*(t1371*t3988 + t1489*(-1.*t1462*t3969 - 1.*t1001*t270*t481)) + 0.037*(t161*t1937*t481*t762 + t1937*t353*t481*t943);
  p_output1[38]=-0.21935*t1937 + t4072 - 0.25*t4144 - 0.27*(t1489*(-1.*t1001*t1937 - 1.*t1462*t4134) + t1371*t4144) + 0.037*(-1.*t161*t270*t762 - 1.*t270*t353*t943);
  p_output1[39]=0.037*(t161*t174*t1937*t2152 + t174*t1937*t2189*t353) + t3826 + t4259 - 0.25*t4298 - 0.27*(t2481*(-1.*t174*t2254*t270 - 1.*t2475*t4280) + t2435*t4298);
  p_output1[40]=t3929 + t4372 - 0.25*t4421 + 0.037*(t161*t1937*t2152*t481 + t1937*t2189*t353*t481) - 0.27*(t2435*t4421 + t2481*(-1.*t2475*t4414 - 1.*t2254*t270*t481));
  p_output1[41]=0.037*(-1.*t161*t2152*t270 - 1.*t2189*t270*t353) + t4072 + t4516 - 0.25*t4586 - 0.27*(t2481*(-1.*t1937*t2254 - 1.*t2475*t4565) + t2435*t4586);
  p_output1[42]=-0.0875*t174*t1937*t353 - 0.037*(t161*t174*t1937*t3088 + t174*t1937*t3121*t353) + t4259 - 0.25*t4779 - 0.27*(t3388*(-1.*t174*t270*t3141 - 1.*t3325*t4741) + t3266*t4779);
  p_output1[43]=t4372 - 0.0875*t1937*t353*t481 - 0.037*(t161*t1937*t3088*t481 + t1937*t3121*t353*t481) - 0.25*t4908 - 0.27*(t3388*(-1.*t270*t3141*t481 - 1.*t3325*t4897) + t3266*t4908);
  p_output1[44]=0.0875*t270*t353 - 0.037*(-1.*t161*t270*t3088 - 1.*t270*t3121*t353) + t4516 - 0.25*t4990 - 0.27*(t3388*(-1.*t1937*t3141 - 1.*t3325*t4986) + t3266*t4990);
  p_output1[45]=-0.21935*t1937*t481 + t5066 - 0.25*t5121 - 0.27*(t1489*(-1.*t1001*t1937*t481 - 1.*t1462*t5107) + t1371*t5121) + 0.037*(t5073*t762 + t1696*t943);
  p_output1[46]=0.21935*t174*t1937 + t5209 - 0.25*t5286 - 0.27*(t1489*(t1001*t174*t1937 - 1.*t1462*t5244) + t1371*t5286) + 0.037*(t498*t762 + t5208*t943);
  p_output1[47]=0;
  p_output1[48]=t5066 + 0.037*(t1696*t2189 + t2152*t5073) + t5334 - 0.25*t5411 - 0.27*(t2481*(-1.*t1937*t2254*t481 - 1.*t2475*t5409) + t2435*t5411);
  p_output1[49]=0.037*(t2152*t498 + t2189*t5208) + t5209 + t5459 - 0.25*t5520 - 0.27*(t2481*(t174*t1937*t2254 - 1.*t2475*t5493) + t2435*t5520);
  p_output1[50]=0;
  p_output1[51]=-0.0875*t1696 - 0.037*(t1696*t3121 + t3088*t5073) + t5334 - 0.25*t5630 - 0.27*(t3388*(-1.*t1937*t3141*t481 - 1.*t3325*t5608) + t3266*t5630);
  p_output1[52]=-0.0875*t5208 - 0.037*(t3088*t498 + t3121*t5208) + t5459 - 0.25*t5779 - 0.27*(t3388*(t174*t1937*t3141 - 1.*t3325*t5764) + t3266*t5779);
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
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
  p_output1[81]=-0.25*t1001*t5875 - 0.27*(t1001*t1371*t5875 - 1.*t1462*t1489*t5875) + 0.037*(t5243 - 1.*t5208*t762);
  p_output1[82]=-0.25*t1001*t5937 - 0.27*(t1001*t1371*t5937 - 1.*t1462*t1489*t5937) + 0.037*(t5939 - 1.*t5933*t762);
  p_output1[83]=-0.25*t1001*t5980 - 0.27*(t1001*t1371*t5980 - 1.*t1462*t1489*t5980) + 0.037*(t2010 + t5983);
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
  p_output1[90]=-0.25*t6014 - 0.27*(t1489*(-1.*t1462*t6010 - 1.*t1001*t6012) + t1371*t6014);
  p_output1[91]=-0.25*t6046 - 0.27*(t1489*(-1.*t1462*t6040 - 1.*t1001*t6044) + t1371*t6046);
  p_output1[92]=-0.25*t6097 - 0.27*(t1489*(-1.*t1001*t6083 - 1.*t1462*t6093) + t1371*t6097);
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=-0.27*(-1.*t1489*(0. + t1462*t6010 + t1001*t6012) + t1308*(0. + t6011 + t6013));
  p_output1[100]=-0.27*(-1.*t1489*(0. + t1462*t6040 + t1001*t6044) + t1308*(0. + t6042 + t6045));
  p_output1[101]=-0.27*(-1.*t1489*(0. + t1001*t6083 + t1462*t6093) + t1308*(0. + t6090 + t6094));
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
  p_output1[114]=-0.037*(-1.*t3088*t5208 + t5762) - 0.25*t3141*t6195 - 0.27*(t3141*t3266*t6195 - 1.*t3325*t3388*t6195);
  p_output1[115]=-0.25*t3141*t6220 - 0.27*(t3141*t3266*t6220 - 1.*t3325*t3388*t6220) - 0.037*(-1.*t3088*t5933 + t6222);
  p_output1[116]=-0.25*t3141*t6243 - 0.27*(t3141*t3266*t6243 - 1.*t3325*t3388*t6243) - 0.037*(t3752 + t6251);
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
  p_output1[120]=0;
  p_output1[121]=0;
  p_output1[122]=0;
  p_output1[123]=-0.25*t6285 - 0.27*(t3388*(-1.*t3325*t6010 - 1.*t3141*t6271) + t3266*t6285);
  p_output1[124]=-0.25*t6338 - 0.27*(t3388*(-1.*t3325*t6040 - 1.*t3141*t6329) + t3266*t6338);
  p_output1[125]=-0.25*t6382 - 0.27*(t3388*(-1.*t3325*t6093 - 1.*t3141*t6375) + t3266*t6382);
  p_output1[126]=0;
  p_output1[127]=0;
  p_output1[128]=0;
  p_output1[129]=0;
  p_output1[130]=0;
  p_output1[131]=0;
  p_output1[132]=-0.27*(-1.*t3388*(0. + t3325*t6010 + t3141*t6271) + t3262*(0. + t6268 + t6283));
  p_output1[133]=-0.27*(-1.*t3388*(0. + t3325*t6040 + t3141*t6329) + t3262*(0. + t6318 + t6335));
  p_output1[134]=-0.27*(-1.*t3388*(0. + t3325*t6093 + t3141*t6375) + t3262*(0. + t6376 + t6379));
  p_output1[135]=0;
  p_output1[136]=0;
  p_output1[137]=0;
  p_output1[138]=0.037*(-1.*t2152*t5208 + t5492) - 0.25*t2254*t6497 - 0.27*(t2254*t2435*t6497 - 1.*t2475*t2481*t6497);
  p_output1[139]=-0.25*t2254*t6522 - 0.27*(t2254*t2435*t6522 - 1.*t2475*t2481*t6522) + 0.037*(-1.*t2152*t5933 + t6531);
  p_output1[140]=-0.25*t2254*t6586 - 0.27*(t2254*t2435*t6586 - 1.*t2475*t2481*t6586) + 0.037*(t2998 + t6589);
  p_output1[141]=0;
  p_output1[142]=0;
  p_output1[143]=0;
  p_output1[144]=0;
  p_output1[145]=0;
  p_output1[146]=0;
  p_output1[147]=-0.25*t6655 - 0.27*(t2481*(-1.*t2475*t6010 - 1.*t2254*t6651) + t2435*t6655);
  p_output1[148]=-0.25*t6711 - 0.27*(t2481*(-1.*t2475*t6040 - 1.*t2254*t6707) + t2435*t6711);
  p_output1[149]=-0.25*t6750 - 0.27*(t2481*(-1.*t2475*t6093 - 1.*t2254*t6736) + t2435*t6750);
  p_output1[150]=0;
  p_output1[151]=0;
  p_output1[152]=0;
  p_output1[153]=0;
  p_output1[154]=0;
  p_output1[155]=0;
  p_output1[156]=-0.27*(-1.*t2481*(0. + t2475*t6010 + t2254*t6651) + t2390*(0. + t6647 + t6652));
  p_output1[157]=-0.27*(-1.*t2481*(0. + t2475*t6040 + t2254*t6707) + t2390*(0. + t6701 + t6708));
  p_output1[158]=-0.27*(-1.*t2481*(0. + t2475*t6093 + t2254*t6736) + t2390*(0. + t6740 + t6742));
  p_output1[159]=0;
  p_output1[160]=0;
  p_output1[161]=0;
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

#include "Reset_j_2_func.hh"

namespace SymFunction
{

void Reset_j_2_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
