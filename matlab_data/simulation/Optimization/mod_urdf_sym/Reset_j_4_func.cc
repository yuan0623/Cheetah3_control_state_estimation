/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 13:01:14 GMT-05:00
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
  double t102;
  double t302;
  double t167;
  double t98;
  double t405;
  double t194;
  double t461;
  double t510;
  double t675;
  double t681;
  double t728;
  double t781;
  double t827;
  double t652;
  double t790;
  double t849;
  double t914;
  double t958;
  double t992;
  double t1308;
  double t1320;
  double t1374;
  double t1069;
  double t1432;
  double t1493;
  double t1513;
  double t1180;
  double t1187;
  double t1515;
  double t1523;
  double t1528;
  double t1218;
  double t1222;
  double t1664;
  double t1696;
  double t1700;
  double t1712;
  double t1924;
  double t1894;
  double t2077;
  double t2087;
  double t2090;
  double t2095;
  double t2100;
  double t2103;
  double t1934;
  double t2172;
  double t2185;
  double t2302;
  double t2303;
  double t2320;
  double t2216;
  double t2218;
  double t2441;
  double t2454;
  double t2466;
  double t569;
  double t2670;
  double t2602;
  double t2718;
  double t2720;
  double t2766;
  double t2773;
  double t2774;
  double t2798;
  double t1378;
  double t2677;
  double t2867;
  double t2889;
  double t2989;
  double t2999;
  double t3006;
  double t2904;
  double t2909;
  double t1687;
  double t3106;
  double t3108;
  double t3113;
  double t3393;
  double t3394;
  double t3400;
  double t3404;
  double t3411;
  double t3420;
  double t3655;
  double t3693;
  double t3713;
  double t3715;
  double t3722;
  double t3727;
  double t3845;
  double t3848;
  double t3849;
  double t3853;
  double t3866;
  double t3875;
  double t3947;
  double t3950;
  double t3952;
  double t3954;
  double t3966;
  double t3986;
  double t4067;
  double t4072;
  double t4082;
  double t4087;
  double t4091;
  double t4102;
  double t4256;
  double t4259;
  double t4272;
  double t4277;
  double t4287;
  double t4292;
  double t3291;
  double t3946;
  double t4377;
  double t4381;
  double t4383;
  double t4396;
  double t4407;
  double t4409;
  double t3598;
  double t4034;
  double t4487;
  double t4493;
  double t4519;
  double t4537;
  double t4545;
  double t4570;
  double t4174;
  double t3796;
  double t4705;
  double t4710;
  double t4716;
  double t4718;
  double t4728;
  double t4729;
  double t4867;
  double t4876;
  double t4896;
  double t4926;
  double t4933;
  double t4939;
  double t4941;
  double t4942;
  double t4945;
  double t4989;
  double t4990;
  double t5002;
  double t5053;
  double t5055;
  double t5056;
  double t5064;
  double t5066;
  double t5067;
  double t5174;
  double t5182;
  double t5209;
  double t5210;
  double t5211;
  double t5213;
  double t5331;
  double t5334;
  double t5350;
  double t5354;
  double t5357;
  double t5383;
  double t5151;
  double t4862;
  double t5461;
  double t5464;
  double t5474;
  double t5480;
  double t5511;
  double t5512;
  double t5303;
  double t5020;
  double t5585;
  double t5589;
  double t5602;
  double t5604;
  double t5620;
  double t5622;
  double t5712;
  double t5714;
  double t5741;
  double t5822;
  double t5823;
  double t5827;
  double t5828;
  double t5854;
  double t5859;
  double t1748;
  double t5940;
  double t5943;
  double t5998;
  double t6001;
  double t6002;
  double t6007;
  double t6009;
  double t6011;
  double t5862;
  double t6050;
  double t6051;
  double t6052;
  double t6053;
  double t6055;
  double t6056;
  double t6062;
  double t5952;
  double t6109;
  double t6110;
  double t6111;
  double t6113;
  double t6115;
  double t6116;
  double t6119;
  double t6244;
  double t6250;
  double t6251;
  double t6266;
  double t6268;
  double t6281;
  double t3125;
  double t6318;
  double t6327;
  double t6386;
  double t6384;
  double t6390;
  double t6392;
  double t6288;
  double t6417;
  double t6419;
  double t6415;
  double t6421;
  double t6422;
  double t6340;
  double t6468;
  double t6473;
  double t6475;
  double t6477;
  double t6478;
  double t6694;
  double t6701;
  double t6706;
  double t6735;
  double t6742;
  double t6751;
  double t2505;
  double t6786;
  double t6787;
  double t6806;
  double t6805;
  double t6807;
  double t6808;
  double t6754;
  double t6828;
  double t6835;
  double t6827;
  double t6839;
  double t6842;
  double t6795;
  double t6864;
  double t6866;
  double t6867;
  double t6875;
  double t6878;
  t102 = Cos(var1[5]);
  t302 = Sin(var1[3]);
  t167 = Sin(var1[4]);
  t98 = Cos(var1[3]);
  t405 = Sin(var1[5]);
  t194 = t98*t102*t167;
  t461 = t302*t405;
  t510 = t194 + t461;
  t675 = Cos(var1[6]);
  t681 = -1.*t102*t302*t167;
  t728 = t98*t405;
  t781 = t681 + t728;
  t827 = Sin(var1[6]);
  t652 = Cos(var1[7]);
  t790 = t675*t781;
  t849 = -1.*t827;
  t914 = 0. + t849;
  t958 = t510*t914;
  t992 = t790 + t958;
  t1308 = -1.*t102*t302;
  t1320 = t98*t167*t405;
  t1374 = t1308 + t1320;
  t1069 = 0. + t675;
  t1432 = -1.*t98*t102;
  t1493 = -1.*t302*t167*t405;
  t1513 = t1432 + t1493;
  t1180 = Cos(var1[8]);
  t1187 = 0. + t1180;
  t1515 = t675*t1513;
  t1523 = t1374*t914;
  t1528 = t1515 + t1523;
  t1218 = Sin(var1[7]);
  t1222 = Sin(var1[8]);
  t1664 = Cos(var1[4]);
  t1696 = -1.*t1664*t675*t302;
  t1700 = t98*t1664*t914;
  t1712 = t1696 + t1700;
  t1924 = Cos(var1[15]);
  t1894 = Sin(var1[15]);
  t2077 = Cos(var1[16]);
  t2087 = t1924*t781;
  t2090 = -1.*t1894;
  t2095 = 0. + t2090;
  t2100 = t2095*t510;
  t2103 = t2087 + t2100;
  t1934 = 0. + t1924;
  t2172 = Cos(var1[17]);
  t2185 = 0. + t2172;
  t2302 = t2095*t1374;
  t2303 = t1924*t1513;
  t2320 = t2302 + t2303;
  t2216 = Sin(var1[16]);
  t2218 = Sin(var1[17]);
  t2441 = t98*t1664*t2095;
  t2454 = -1.*t1924*t1664*t302;
  t2466 = t2441 + t2454;
  t569 = -0.0875*t510;
  t2670 = Cos(var1[12]);
  t2602 = Sin(var1[12]);
  t2718 = Cos(var1[13]);
  t2720 = t2670*t781;
  t2766 = -1.*t2602;
  t2773 = 0. + t2766;
  t2774 = t2773*t510;
  t2798 = t2720 + t2774;
  t1378 = -0.0875*t1374;
  t2677 = 0. + t2670;
  t2867 = Cos(var1[14]);
  t2889 = 0. + t2867;
  t2989 = t2773*t1374;
  t2999 = t2670*t1513;
  t3006 = t2989 + t2999;
  t2904 = Sin(var1[13]);
  t2909 = Sin(var1[14]);
  t1687 = -0.0875*t98*t1664;
  t3106 = t98*t1664*t2773;
  t3108 = -1.*t2670*t1664*t302;
  t3113 = t3106 + t3108;
  t3393 = t98*t1664*t102*t675;
  t3394 = t1664*t102*t302*t914;
  t3400 = t3393 + t3394;
  t3404 = t652*t3400;
  t3411 = -1.*t102*t167*t1218;
  t3420 = t3404 + t3411;
  t3655 = t98*t1664*t675*t405;
  t3693 = t1664*t302*t405*t914;
  t3713 = t3655 + t3693;
  t3715 = t652*t3713;
  t3722 = -1.*t167*t405*t1218;
  t3727 = t3715 + t3722;
  t3845 = -1.*t98*t675*t167;
  t3848 = -1.*t302*t167*t914;
  t3849 = t3845 + t3848;
  t3853 = t652*t3849;
  t3866 = -1.*t1664*t1218;
  t3875 = t3853 + t3866;
  t3947 = t1924*t98*t1664*t102;
  t3950 = t1664*t102*t2095*t302;
  t3952 = t3947 + t3950;
  t3954 = t2077*t3952;
  t3966 = -1.*t102*t2216*t167;
  t3986 = t3954 + t3966;
  t4067 = -1.*t2216*t167*t405;
  t4072 = t1924*t98*t1664*t405;
  t4082 = t1664*t2095*t302*t405;
  t4087 = t4072 + t4082;
  t4091 = t2077*t4087;
  t4102 = t4067 + t4091;
  t4256 = -1.*t1664*t2216;
  t4259 = -1.*t1924*t98*t167;
  t4272 = -1.*t2095*t302*t167;
  t4277 = t4259 + t4272;
  t4287 = t2077*t4277;
  t4292 = t4256 + t4287;
  t3291 = -0.0875*t1664*t102*t302;
  t3946 = 0.21935*t102*t167;
  t4377 = t2670*t98*t1664*t102;
  t4381 = t1664*t102*t2773*t302;
  t4383 = t4377 + t4381;
  t4396 = t2718*t4383;
  t4407 = -1.*t102*t2904*t167;
  t4409 = t4396 + t4407;
  t3598 = -0.0875*t1664*t302*t405;
  t4034 = 0.21935*t167*t405;
  t4487 = -1.*t2904*t167*t405;
  t4493 = t2670*t98*t1664*t405;
  t4519 = t1664*t2773*t302*t405;
  t4537 = t4493 + t4519;
  t4545 = t2718*t4537;
  t4570 = t4487 + t4545;
  t4174 = 0.21935*t1664;
  t3796 = 0.0875*t302*t167;
  t4705 = -1.*t1664*t2904;
  t4710 = -1.*t2670*t98*t167;
  t4716 = -1.*t2773*t302*t167;
  t4718 = t4710 + t4716;
  t4728 = t2718*t4718;
  t4729 = t4705 + t4728;
  t4867 = t102*t302;
  t4876 = -1.*t98*t167*t405;
  t4896 = t4867 + t4876;
  t4926 = t675*t4896;
  t4933 = t1513*t914;
  t4939 = t4926 + t4933;
  t4941 = t652*t4939;
  t4942 = -1.*t1664*t405*t1218;
  t4945 = t4941 + t4942;
  t4989 = t102*t302*t167;
  t4990 = -1.*t98*t405;
  t5002 = t4989 + t4990;
  t5053 = t675*t510;
  t5055 = t5002*t914;
  t5056 = t5053 + t5055;
  t5064 = t652*t5056;
  t5066 = t1664*t102*t1218;
  t5067 = t5064 + t5066;
  t5174 = -1.*t1664*t2216*t405;
  t5182 = t1924*t4896;
  t5209 = t2095*t1513;
  t5210 = t5182 + t5209;
  t5211 = t2077*t5210;
  t5213 = t5174 + t5211;
  t5331 = t1664*t102*t2216;
  t5334 = t2095*t5002;
  t5350 = t1924*t510;
  t5354 = t5334 + t5350;
  t5357 = t2077*t5354;
  t5383 = t5331 + t5357;
  t5151 = 0.21935*t1664*t405;
  t4862 = -0.0875*t1513;
  t5461 = -1.*t1664*t2904*t405;
  t5464 = t2670*t4896;
  t5474 = t2773*t1513;
  t5480 = t5464 + t5474;
  t5511 = t2718*t5480;
  t5512 = t5461 + t5511;
  t5303 = -0.21935*t1664*t102;
  t5020 = -0.0875*t5002;
  t5585 = t1664*t102*t2904;
  t5589 = t2773*t5002;
  t5602 = t2670*t510;
  t5604 = t5589 + t5602;
  t5620 = t2718*t5604;
  t5622 = t5585 + t5620;
  t5712 = -1.*t675*t5002;
  t5714 = -1.*t510*t827;
  t5741 = t5712 + t5714;
  t5822 = t98*t102;
  t5823 = t302*t167*t405;
  t5827 = t5822 + t5823;
  t5828 = -1.*t675*t5827;
  t5854 = -1.*t1374*t827;
  t5859 = t5828 + t5854;
  t1748 = -1.*t1664*t302*t827;
  t5940 = -1.*t98*t1664*t827;
  t5943 = t1696 + t5940;
  t5998 = t1664*t102;
  t6001 = 0. + t5998;
  t6002 = t6001*t652;
  t6007 = 0. + t5053 + t5055;
  t6009 = -1.*t6007*t1218;
  t6011 = t6002 + t6009;
  t5862 = t675*t1374;
  t6050 = t1664*t405;
  t6051 = 0. + t6050;
  t6052 = t652*t6051;
  t6053 = t5827*t914;
  t6055 = 0. + t5862 + t6053;
  t6056 = -1.*t6055*t1218;
  t6062 = t6052 + t6056;
  t5952 = t98*t1664*t675;
  t6109 = -1.*t167;
  t6110 = 0. + t6109;
  t6111 = t652*t6110;
  t6113 = t1664*t302*t914;
  t6115 = 0. + t5952 + t6113;
  t6116 = -1.*t6115*t1218;
  t6119 = t6111 + t6116;
  t6244 = -1.*t2670*t5002;
  t6250 = -1.*t2602*t510;
  t6251 = t6244 + t6250;
  t6266 = -1.*t2602*t1374;
  t6268 = -1.*t2670*t5827;
  t6281 = t6266 + t6268;
  t3125 = -1.*t1664*t2602*t302;
  t6318 = -1.*t98*t1664*t2602;
  t6327 = t6318 + t3108;
  t6386 = 0. + t5589 + t5602;
  t6384 = t2718*t6001;
  t6390 = -1.*t2904*t6386;
  t6392 = t6384 + t6390;
  t6288 = t2670*t1374;
  t6417 = t2773*t5827;
  t6419 = 0. + t6288 + t6417;
  t6415 = t2718*t6051;
  t6421 = -1.*t2904*t6419;
  t6422 = t6415 + t6421;
  t6340 = t2670*t98*t1664;
  t6468 = t1664*t2773*t302;
  t6473 = 0. + t6340 + t6468;
  t6475 = -1.*t2904*t6473;
  t6477 = t2718*t6110;
  t6478 = t6475 + t6477;
  t6694 = -1.*t1924*t5002;
  t6701 = -1.*t1894*t510;
  t6706 = t6694 + t6701;
  t6735 = -1.*t1894*t1374;
  t6742 = -1.*t1924*t5827;
  t6751 = t6735 + t6742;
  t2505 = -1.*t1664*t1894*t302;
  t6786 = -1.*t98*t1664*t1894;
  t6787 = t6786 + t2454;
  t6806 = 0. + t5334 + t5350;
  t6805 = t2077*t6001;
  t6807 = -1.*t2216*t6806;
  t6808 = t6805 + t6807;
  t6754 = t1924*t1374;
  t6828 = t2095*t5827;
  t6835 = 0. + t6754 + t6828;
  t6827 = t2077*t6051;
  t6839 = -1.*t2216*t6835;
  t6842 = t6827 + t6839;
  t6795 = t1924*t98*t1664;
  t6864 = t1664*t2095*t302;
  t6866 = 0. + t6795 + t6864;
  t6867 = -1.*t2216*t6866;
  t6875 = t2077*t6110;
  t6878 = t6867 + t6875;
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
  p_output1[27]=t569 - 0.037*(t1069*t510 + t781*t827) - 0.25*t652*t992 - 0.27*(-1.*t1218*t1222*t992 + t1187*t652*t992);
  p_output1[28]=t1378 - 0.25*t1528*t652 - 0.27*(-1.*t1218*t1222*t1528 + t1187*t1528*t652) - 0.037*(t1069*t1374 + t1513*t827);
  p_output1[29]=t1687 - 0.25*t1712*t652 - 0.27*(-1.*t1218*t1222*t1712 + t1187*t1712*t652) - 0.037*(t1748 + t1069*t1664*t98);
  p_output1[30]=-0.25*t2077*t2103 - 0.27*(t2077*t2103*t2185 - 1.*t2103*t2216*t2218) + 0.0875*t510 + 0.037*(t1934*t510 + t1894*t781);
  p_output1[31]=0.0875*t1374 + 0.037*(t1513*t1894 + t1374*t1934) - 0.25*t2077*t2320 - 0.27*(t2077*t2185*t2320 - 1.*t2216*t2218*t2320);
  p_output1[32]=-0.25*t2077*t2466 - 0.27*(t2077*t2185*t2466 - 1.*t2216*t2218*t2466) + 0.0875*t1664*t98 + 0.037*(t2505 + t1664*t1934*t98);
  p_output1[33]=-0.25*t2718*t2798 - 0.27*(t2718*t2798*t2889 - 1.*t2798*t2904*t2909) + t569 - 0.037*(t2677*t510 + t2602*t781);
  p_output1[34]=t1378 - 0.037*(t1513*t2602 + t1374*t2677) - 0.25*t2718*t3006 - 0.27*(t2718*t2889*t3006 - 1.*t2904*t2909*t3006);
  p_output1[35]=t1687 - 0.25*t2718*t3113 - 0.27*(t2718*t2889*t3113 - 1.*t2904*t2909*t3113) - 0.037*(t3125 + t1664*t2677*t98);
  p_output1[36]=-0.21935*t102*t167 + t3291 - 0.25*t3420 - 0.27*(t1187*t3420 + t1222*(-1.*t1218*t3400 - 1.*t102*t167*t652)) - 0.037*(t102*t1069*t1664*t302 + t102*t1664*t827*t98);
  p_output1[37]=t3598 - 0.25*t3727 - 0.21935*t167*t405 - 0.27*(t1187*t3727 + t1222*(-1.*t1218*t3713 - 1.*t167*t405*t652)) - 0.037*(t1069*t1664*t302*t405 + t1664*t405*t827*t98);
  p_output1[38]=-0.21935*t1664 + t3796 - 0.25*t3875 - 0.27*(t1187*t3875 + t1222*(-1.*t1218*t3849 - 1.*t1664*t652)) - 0.037*(-1.*t1069*t167*t302 - 1.*t167*t827*t98);
  p_output1[39]=0.0875*t102*t1664*t302 + t3946 - 0.25*t3986 - 0.27*(t2218*(-1.*t102*t167*t2077 - 1.*t2216*t3952) + t2185*t3986) + 0.037*(t102*t1664*t1934*t302 + t102*t1664*t1894*t98);
  p_output1[40]=t4034 + 0.0875*t1664*t302*t405 - 0.25*t4102 - 0.27*(t2218*(-1.*t167*t2077*t405 - 1.*t2216*t4087) + t2185*t4102) + 0.037*(t1664*t1934*t302*t405 + t1664*t1894*t405*t98);
  p_output1[41]=-0.0875*t167*t302 + t4174 - 0.25*t4292 - 0.27*(t2218*(-1.*t1664*t2077 - 1.*t2216*t4277) + t2185*t4292) + 0.037*(-1.*t167*t1934*t302 - 1.*t167*t1894*t98);
  p_output1[42]=t3291 + t3946 - 0.25*t4409 - 0.27*(t2909*(-1.*t102*t167*t2718 - 1.*t2904*t4383) + t2889*t4409) - 0.037*(t102*t1664*t2677*t302 + t102*t1664*t2602*t98);
  p_output1[43]=t3598 + t4034 - 0.25*t4570 - 0.27*(t2909*(-1.*t167*t2718*t405 - 1.*t2904*t4537) + t2889*t4570) - 0.037*(t1664*t2677*t302*t405 + t1664*t2602*t405*t98);
  p_output1[44]=t3796 + t4174 - 0.25*t4729 - 0.27*(t2909*(-1.*t1664*t2718 - 1.*t2904*t4718) + t2889*t4729) - 0.037*(-1.*t167*t2677*t302 - 1.*t167*t2602*t98);
  p_output1[45]=-0.21935*t1664*t405 + t4862 - 0.25*t4945 - 0.27*(t1187*t4945 + t1222*(-1.*t1218*t4939 - 1.*t1664*t405*t652)) - 0.037*(t1069*t1513 + t4896*t827);
  p_output1[46]=0.21935*t102*t1664 + t5020 - 0.25*t5067 - 0.27*(t1187*t5067 + t1222*(-1.*t1218*t5056 + t102*t1664*t652)) - 0.037*(t1069*t5002 + t510*t827);
  p_output1[47]=0;
  p_output1[48]=0.0875*t1513 + 0.037*(t1513*t1934 + t1894*t4896) + t5151 - 0.25*t5213 - 0.27*(t2218*(-1.*t1664*t2077*t405 - 1.*t2216*t5210) + t2185*t5213);
  p_output1[49]=0.0875*t5002 + 0.037*(t1934*t5002 + t1894*t510) + t5303 - 0.25*t5383 - 0.27*(t2218*(t102*t1664*t2077 - 1.*t2216*t5354) + t2185*t5383);
  p_output1[50]=0;
  p_output1[51]=t4862 - 0.037*(t1513*t2677 + t2602*t4896) + t5151 - 0.25*t5512 - 0.27*(t2909*(-1.*t1664*t2718*t405 - 1.*t2904*t5480) + t2889*t5512);
  p_output1[52]=t5020 - 0.037*(t2677*t5002 + t2602*t510) + t5303 - 0.25*t5622 - 0.27*(t2909*(t102*t1664*t2718 - 1.*t2904*t5604) + t2889*t5622);
  p_output1[53]=0;
  p_output1[54]=-0.25*t5741*t652 - 0.27*(-1.*t1218*t1222*t5741 + t1187*t5741*t652) - 0.037*(t5053 - 1.*t5002*t827);
  p_output1[55]=-0.25*t5859*t652 - 0.27*(-1.*t1218*t1222*t5859 + t1187*t5859*t652) - 0.037*(t5862 - 1.*t5827*t827);
  p_output1[56]=-0.037*(t1748 + t5952) - 0.25*t5943*t652 - 0.27*(-1.*t1218*t1222*t5943 + t1187*t5943*t652);
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=-0.25*t6011 - 0.27*(t1187*t6011 + t1222*(-1.*t1218*t6001 - 1.*t6007*t652));
  p_output1[64]=-0.25*t6062 - 0.27*(t1187*t6062 + t1222*(-1.*t1218*t6051 - 1.*t6055*t652));
  p_output1[65]=-0.25*t6119 - 0.27*(t1187*t6119 + t1222*(-1.*t1218*t6110 - 1.*t6115*t652));
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=-0.27*(t1180*(0. + t6002 + t6009) - 1.*t1222*(0. + t1218*t6001 + t6007*t652));
  p_output1[73]=-0.27*(t1180*(0. + t6052 + t6056) - 1.*t1222*(0. + t1218*t6051 + t6055*t652));
  p_output1[74]=-0.27*(t1180*(0. + t6111 + t6116) - 1.*t1222*(0. + t1218*t6110 + t6115*t652));
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
  p_output1[114]=-0.037*(-1.*t2602*t5002 + t5602) - 0.25*t2718*t6251 - 0.27*(t2718*t2889*t6251 - 1.*t2904*t2909*t6251);
  p_output1[115]=-0.25*t2718*t6281 - 0.27*(t2718*t2889*t6281 - 1.*t2904*t2909*t6281) - 0.037*(-1.*t2602*t5827 + t6288);
  p_output1[116]=-0.25*t2718*t6327 - 0.27*(t2718*t2889*t6327 - 1.*t2904*t2909*t6327) - 0.037*(t3125 + t6340);
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
  p_output1[120]=0;
  p_output1[121]=0;
  p_output1[122]=0;
  p_output1[123]=-0.25*t6392 - 0.27*(t2909*(-1.*t2904*t6001 - 1.*t2718*t6386) + t2889*t6392);
  p_output1[124]=-0.25*t6422 - 0.27*(t2909*(-1.*t2904*t6051 - 1.*t2718*t6419) + t2889*t6422);
  p_output1[125]=-0.25*t6478 - 0.27*(t2909*(-1.*t2904*t6110 - 1.*t2718*t6473) + t2889*t6478);
  p_output1[126]=0;
  p_output1[127]=0;
  p_output1[128]=0;
  p_output1[129]=0;
  p_output1[130]=0;
  p_output1[131]=0;
  p_output1[132]=-0.27*(-1.*t2909*(0. + t2904*t6001 + t2718*t6386) + t2867*(0. + t6384 + t6390));
  p_output1[133]=-0.27*(-1.*t2909*(0. + t2904*t6051 + t2718*t6419) + t2867*(0. + t6415 + t6421));
  p_output1[134]=-0.27*(-1.*t2909*(0. + t2904*t6110 + t2718*t6473) + t2867*(0. + t6475 + t6477));
  p_output1[135]=0;
  p_output1[136]=0;
  p_output1[137]=0;
  p_output1[138]=0.037*(-1.*t1894*t5002 + t5350) - 0.25*t2077*t6706 - 0.27*(t2077*t2185*t6706 - 1.*t2216*t2218*t6706);
  p_output1[139]=-0.25*t2077*t6751 - 0.27*(t2077*t2185*t6751 - 1.*t2216*t2218*t6751) + 0.037*(-1.*t1894*t5827 + t6754);
  p_output1[140]=-0.25*t2077*t6787 - 0.27*(t2077*t2185*t6787 - 1.*t2216*t2218*t6787) + 0.037*(t2505 + t6795);
  p_output1[141]=0;
  p_output1[142]=0;
  p_output1[143]=0;
  p_output1[144]=0;
  p_output1[145]=0;
  p_output1[146]=0;
  p_output1[147]=-0.25*t6808 - 0.27*(t2218*(-1.*t2216*t6001 - 1.*t2077*t6806) + t2185*t6808);
  p_output1[148]=-0.25*t6842 - 0.27*(t2218*(-1.*t2216*t6051 - 1.*t2077*t6835) + t2185*t6842);
  p_output1[149]=-0.25*t6878 - 0.27*(t2218*(-1.*t2216*t6110 - 1.*t2077*t6866) + t2185*t6878);
  p_output1[150]=0;
  p_output1[151]=0;
  p_output1[152]=0;
  p_output1[153]=0;
  p_output1[154]=0;
  p_output1[155]=0;
  p_output1[156]=-0.27*(-1.*t2218*(0. + t2216*t6001 + t2077*t6806) + t2172*(0. + t6805 + t6807));
  p_output1[157]=-0.27*(-1.*t2218*(0. + t2216*t6051 + t2077*t6835) + t2172*(0. + t6827 + t6839));
  p_output1[158]=-0.27*(-1.*t2218*(0. + t2216*t6110 + t2077*t6866) + t2172*(0. + t6867 + t6875));
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

#include "Reset_j_4_func.hh"

namespace SymFunction
{

void Reset_j_4_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
