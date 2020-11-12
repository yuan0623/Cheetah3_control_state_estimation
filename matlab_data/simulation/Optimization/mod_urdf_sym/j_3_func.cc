/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 13:00:04 GMT-05:00
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
  double t138;
  double t389;
  double t291;
  double t97;
  double t394;
  double t381;
  double t400;
  double t426;
  double t549;
  double t471;
  double t512;
  double t519;
  double t466;
  double t636;
  double t645;
  double t677;
  double t685;
  double t696;
  double t697;
  double t830;
  double t836;
  double t852;
  double t569;
  double t889;
  double t895;
  double t911;
  double t756;
  double t760;
  double t887;
  double t931;
  double t946;
  double t784;
  double t795;
  double t1126;
  double t1163;
  double t1187;
  double t1191;
  double t465;
  double t1316;
  double t1302;
  double t1363;
  double t1364;
  double t1374;
  double t1376;
  double t1382;
  double t1401;
  double t860;
  double t1323;
  double t1424;
  double t1433;
  double t1506;
  double t1516;
  double t1518;
  double t1446;
  double t1460;
  double t1147;
  double t1610;
  double t1618;
  double t1627;
  double t1718;
  double t1708;
  double t1757;
  double t1758;
  double t1765;
  double t1772;
  double t1775;
  double t1780;
  double t1722;
  double t1788;
  double t1810;
  double t1835;
  double t1842;
  double t1847;
  double t1819;
  double t1821;
  double t2052;
  double t2053;
  double t2055;
  double t2133;
  double t2135;
  double t2140;
  double t2142;
  double t2144;
  double t2158;
  double t2241;
  double t2242;
  double t2244;
  double t2245;
  double t2255;
  double t2256;
  double t2414;
  double t2418;
  double t2422;
  double t2428;
  double t2430;
  double t2442;
  double t2105;
  double t2525;
  double t2530;
  double t2533;
  double t2546;
  double t2547;
  double t2553;
  double t2208;
  double t2679;
  double t2683;
  double t2689;
  double t2692;
  double t2693;
  double t2695;
  double t2362;
  double t2764;
  double t2766;
  double t2768;
  double t2770;
  double t2785;
  double t2793;
  double t2523;
  double t2919;
  double t2920;
  double t2927;
  double t2939;
  double t2952;
  double t2956;
  double t2659;
  double t3029;
  double t3033;
  double t3036;
  double t3040;
  double t3043;
  double t3047;
  double t2751;
  double t3136;
  double t3152;
  double t3164;
  double t3165;
  double t3168;
  double t3169;
  double t3241;
  double t3258;
  double t3263;
  double t3303;
  double t3307;
  double t3316;
  double t3320;
  double t3327;
  double t3332;
  double t3351;
  double t3354;
  double t3355;
  double t3386;
  double t3388;
  double t3389;
  double t3396;
  double t3406;
  double t3407;
  double t3239;
  double t3465;
  double t3468;
  double t3473;
  double t3476;
  double t3477;
  double t3478;
  double t3366;
  double t3564;
  double t3566;
  double t3567;
  double t3571;
  double t3572;
  double t3575;
  double t3446;
  double t3676;
  double t3680;
  double t3682;
  double t3683;
  double t3689;
  double t3690;
  double t3532;
  double t3779;
  double t3782;
  double t3783;
  double t3784;
  double t3794;
  double t3795;
  double t3914;
  double t3915;
  double t3916;
  double t3970;
  double t3979;
  double t3981;
  double t3965;
  double t3983;
  double t3995;
  double t1216;
  double t4061;
  double t4070;
  double t4131;
  double t4135;
  double t4139;
  double t4138;
  double t4141;
  double t4142;
  double t4012;
  double t4189;
  double t4197;
  double t4211;
  double t4215;
  double t4207;
  double t4220;
  double t4221;
  double t4081;
  double t4263;
  double t4265;
  double t4301;
  double t4303;
  double t4271;
  double t4312;
  double t4314;
  double t4497;
  double t4506;
  double t4513;
  double t4562;
  double t4565;
  double t4566;
  double t2062;
  double t4609;
  double t4610;
  double t4662;
  double t4661;
  double t4664;
  double t4666;
  double t4574;
  double t4737;
  double t4738;
  double t4725;
  double t4740;
  double t4746;
  double t4625;
  double t4785;
  double t4790;
  double t4791;
  double t4804;
  double t4812;
  double t4963;
  double t4976;
  double t4977;
  double t4997;
  double t4999;
  double t5001;
  double t1635;
  double t5033;
  double t5035;
  double t5061;
  double t5060;
  double t5062;
  double t5063;
  double t5007;
  double t5097;
  double t5098;
  double t5086;
  double t5104;
  double t5106;
  double t5039;
  double t5125;
  double t5128;
  double t5136;
  double t5137;
  double t5138;
  t138 = Cos(var1[5]);
  t389 = Sin(var1[3]);
  t291 = Sin(var1[4]);
  t97 = Cos(var1[3]);
  t394 = Sin(var1[5]);
  t381 = t97*t138*t291;
  t400 = t389*t394;
  t426 = t381 + t400;
  t549 = Cos(var1[9]);
  t471 = -1.*t138*t389*t291;
  t512 = t97*t394;
  t519 = t471 + t512;
  t466 = Sin(var1[9]);
  t636 = Cos(var1[10]);
  t645 = t549*t519;
  t677 = -1.*t466;
  t685 = 0. + t677;
  t696 = t685*t426;
  t697 = t645 + t696;
  t830 = -1.*t138*t389;
  t836 = t97*t291*t394;
  t852 = t830 + t836;
  t569 = 0. + t549;
  t889 = -1.*t97*t138;
  t895 = -1.*t389*t291*t394;
  t911 = t889 + t895;
  t756 = Cos(var1[11]);
  t760 = 0. + t756;
  t887 = t685*t852;
  t931 = t549*t911;
  t946 = t887 + t931;
  t784 = Sin(var1[10]);
  t795 = Sin(var1[11]);
  t1126 = Cos(var1[4]);
  t1163 = t97*t1126*t685;
  t1187 = -1.*t549*t1126*t389;
  t1191 = t1163 + t1187;
  t465 = 0.0875*t426;
  t1316 = Cos(var1[15]);
  t1302 = Sin(var1[15]);
  t1363 = Cos(var1[16]);
  t1364 = t1316*t519;
  t1374 = -1.*t1302;
  t1376 = 0. + t1374;
  t1382 = t1376*t426;
  t1401 = t1364 + t1382;
  t860 = 0.0875*t852;
  t1323 = 0. + t1316;
  t1424 = Cos(var1[17]);
  t1433 = 0. + t1424;
  t1506 = t1376*t852;
  t1516 = t1316*t911;
  t1518 = t1506 + t1516;
  t1446 = Sin(var1[16]);
  t1460 = Sin(var1[17]);
  t1147 = 0.0875*t97*t1126;
  t1610 = t97*t1126*t1376;
  t1618 = -1.*t1316*t1126*t389;
  t1627 = t1610 + t1618;
  t1718 = Cos(var1[12]);
  t1708 = Sin(var1[12]);
  t1757 = Cos(var1[13]);
  t1758 = t1718*t519;
  t1765 = -1.*t1708;
  t1772 = 0. + t1765;
  t1775 = t1772*t426;
  t1780 = t1758 + t1775;
  t1722 = 0. + t1718;
  t1788 = Cos(var1[14]);
  t1810 = 0. + t1788;
  t1835 = t1772*t852;
  t1842 = t1718*t911;
  t1847 = t1835 + t1842;
  t1819 = Sin(var1[13]);
  t1821 = Sin(var1[14]);
  t2052 = t97*t1126*t1772;
  t2053 = -1.*t1718*t1126*t389;
  t2055 = t2052 + t2053;
  t2133 = t549*t97*t1126*t138;
  t2135 = t1126*t138*t685*t389;
  t2140 = t2133 + t2135;
  t2142 = t636*t2140;
  t2144 = -1.*t138*t784*t291;
  t2158 = t2142 + t2144;
  t2241 = -1.*t784*t291*t394;
  t2242 = t549*t97*t1126*t394;
  t2244 = t1126*t685*t389*t394;
  t2245 = t2242 + t2244;
  t2255 = t636*t2245;
  t2256 = t2241 + t2255;
  t2414 = -1.*t1126*t784;
  t2418 = -1.*t549*t97*t291;
  t2422 = -1.*t685*t389*t291;
  t2428 = t2418 + t2422;
  t2430 = t636*t2428;
  t2442 = t2414 + t2430;
  t2105 = 0.0875*t1126*t138*t389;
  t2525 = t1316*t97*t1126*t138;
  t2530 = t1126*t138*t1376*t389;
  t2533 = t2525 + t2530;
  t2546 = t1363*t2533;
  t2547 = -1.*t138*t1446*t291;
  t2553 = t2546 + t2547;
  t2208 = 0.0875*t1126*t389*t394;
  t2679 = -1.*t1446*t291*t394;
  t2683 = t1316*t97*t1126*t394;
  t2689 = t1126*t1376*t389*t394;
  t2692 = t2683 + t2689;
  t2693 = t1363*t2692;
  t2695 = t2679 + t2693;
  t2362 = -0.0875*t389*t291;
  t2764 = -1.*t1126*t1446;
  t2766 = -1.*t1316*t97*t291;
  t2768 = -1.*t1376*t389*t291;
  t2770 = t2766 + t2768;
  t2785 = t1363*t2770;
  t2793 = t2764 + t2785;
  t2523 = 0.21935*t138*t291;
  t2919 = t1718*t97*t1126*t138;
  t2920 = t1126*t138*t1772*t389;
  t2927 = t2919 + t2920;
  t2939 = t1757*t2927;
  t2952 = -1.*t138*t1819*t291;
  t2956 = t2939 + t2952;
  t2659 = 0.21935*t291*t394;
  t3029 = -1.*t1819*t291*t394;
  t3033 = t1718*t97*t1126*t394;
  t3036 = t1126*t1772*t389*t394;
  t3040 = t3033 + t3036;
  t3043 = t1757*t3040;
  t3047 = t3029 + t3043;
  t2751 = 0.21935*t1126;
  t3136 = -1.*t1126*t1819;
  t3152 = -1.*t1718*t97*t291;
  t3164 = -1.*t1772*t389*t291;
  t3165 = t3152 + t3164;
  t3168 = t1757*t3165;
  t3169 = t3136 + t3168;
  t3241 = t138*t389;
  t3258 = -1.*t97*t291*t394;
  t3263 = t3241 + t3258;
  t3303 = -1.*t1126*t784*t394;
  t3307 = t549*t3263;
  t3316 = t685*t911;
  t3320 = t3307 + t3316;
  t3327 = t636*t3320;
  t3332 = t3303 + t3327;
  t3351 = t138*t389*t291;
  t3354 = -1.*t97*t394;
  t3355 = t3351 + t3354;
  t3386 = t1126*t138*t784;
  t3388 = t685*t3355;
  t3389 = t549*t426;
  t3396 = t3388 + t3389;
  t3406 = t636*t3396;
  t3407 = t3386 + t3406;
  t3239 = 0.0875*t911;
  t3465 = -1.*t1126*t1446*t394;
  t3468 = t1316*t3263;
  t3473 = t1376*t911;
  t3476 = t3468 + t3473;
  t3477 = t1363*t3476;
  t3478 = t3465 + t3477;
  t3366 = 0.0875*t3355;
  t3564 = t1126*t138*t1446;
  t3566 = t1376*t3355;
  t3567 = t1316*t426;
  t3571 = t3566 + t3567;
  t3572 = t1363*t3571;
  t3575 = t3564 + t3572;
  t3446 = 0.21935*t1126*t394;
  t3676 = -1.*t1126*t1819*t394;
  t3680 = t1718*t3263;
  t3682 = t1772*t911;
  t3683 = t3680 + t3682;
  t3689 = t1757*t3683;
  t3690 = t3676 + t3689;
  t3532 = -0.21935*t1126*t138;
  t3779 = t1126*t138*t1819;
  t3782 = t1772*t3355;
  t3783 = t1718*t426;
  t3784 = t3782 + t3783;
  t3794 = t1757*t3784;
  t3795 = t3779 + t3794;
  t3914 = -1.*t549*t3355;
  t3915 = -1.*t466*t426;
  t3916 = t3914 + t3915;
  t3970 = t97*t138;
  t3979 = t389*t291*t394;
  t3981 = t3970 + t3979;
  t3965 = -1.*t466*t852;
  t3983 = -1.*t549*t3981;
  t3995 = t3965 + t3983;
  t1216 = -1.*t1126*t466*t389;
  t4061 = -1.*t97*t1126*t466;
  t4070 = t4061 + t1187;
  t4131 = t1126*t138;
  t4135 = 0. + t4131;
  t4139 = 0. + t3388 + t3389;
  t4138 = t636*t4135;
  t4141 = -1.*t784*t4139;
  t4142 = t4138 + t4141;
  t4012 = t549*t852;
  t4189 = t1126*t394;
  t4197 = 0. + t4189;
  t4211 = t685*t3981;
  t4215 = 0. + t4012 + t4211;
  t4207 = t636*t4197;
  t4220 = -1.*t784*t4215;
  t4221 = t4207 + t4220;
  t4081 = t549*t97*t1126;
  t4263 = t1126*t685*t389;
  t4265 = 0. + t4081 + t4263;
  t4301 = -1.*t291;
  t4303 = 0. + t4301;
  t4271 = -1.*t784*t4265;
  t4312 = t636*t4303;
  t4314 = t4271 + t4312;
  t4497 = -1.*t1718*t3355;
  t4506 = -1.*t1708*t426;
  t4513 = t4497 + t4506;
  t4562 = -1.*t1708*t852;
  t4565 = -1.*t1718*t3981;
  t4566 = t4562 + t4565;
  t2062 = -1.*t1126*t1708*t389;
  t4609 = -1.*t97*t1126*t1708;
  t4610 = t4609 + t2053;
  t4662 = 0. + t3782 + t3783;
  t4661 = t1757*t4135;
  t4664 = -1.*t1819*t4662;
  t4666 = t4661 + t4664;
  t4574 = t1718*t852;
  t4737 = t1772*t3981;
  t4738 = 0. + t4574 + t4737;
  t4725 = t1757*t4197;
  t4740 = -1.*t1819*t4738;
  t4746 = t4725 + t4740;
  t4625 = t1718*t97*t1126;
  t4785 = t1126*t1772*t389;
  t4790 = 0. + t4625 + t4785;
  t4791 = -1.*t1819*t4790;
  t4804 = t1757*t4303;
  t4812 = t4791 + t4804;
  t4963 = -1.*t1316*t3355;
  t4976 = -1.*t1302*t426;
  t4977 = t4963 + t4976;
  t4997 = -1.*t1302*t852;
  t4999 = -1.*t1316*t3981;
  t5001 = t4997 + t4999;
  t1635 = -1.*t1126*t1302*t389;
  t5033 = -1.*t97*t1126*t1302;
  t5035 = t5033 + t1618;
  t5061 = 0. + t3566 + t3567;
  t5060 = t1363*t4135;
  t5062 = -1.*t1446*t5061;
  t5063 = t5060 + t5062;
  t5007 = t1316*t852;
  t5097 = t1376*t3981;
  t5098 = 0. + t5007 + t5097;
  t5086 = t1363*t4197;
  t5104 = -1.*t1446*t5098;
  t5106 = t5086 + t5104;
  t5039 = t1316*t97*t1126;
  t5125 = t1126*t1376*t389;
  t5128 = 0. + t5039 + t5125;
  t5136 = -1.*t1446*t5128;
  t5137 = t1363*t4303;
  t5138 = t5136 + t5137;
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
  p_output1[27]=t465 + 0.037*(t466*t519 + t426*t569) - 0.25*t636*t697 - 0.27*(t636*t697*t760 - 1.*t697*t784*t795);
  p_output1[28]=t860 + 0.037*(t569*t852 + t466*t911) - 0.25*t636*t946 - 0.27*(t636*t760*t946 - 1.*t784*t795*t946);
  p_output1[29]=t1147 - 0.25*t1191*t636 - 0.27*(t1191*t636*t760 - 1.*t1191*t784*t795) + 0.037*(t1216 + t1126*t569*t97);
  p_output1[30]=-0.25*t1363*t1401 - 0.27*(t1363*t1401*t1433 - 1.*t1401*t1446*t1460) + t465 + 0.037*(t1323*t426 + t1302*t519);
  p_output1[31]=-0.25*t1363*t1518 - 0.27*(t1363*t1433*t1518 - 1.*t1446*t1460*t1518) + t860 + 0.037*(t1323*t852 + t1302*t911);
  p_output1[32]=t1147 - 0.25*t1363*t1627 - 0.27*(t1363*t1433*t1627 - 1.*t1446*t1460*t1627) + 0.037*(t1635 + t1126*t1323*t97);
  p_output1[33]=-0.25*t1757*t1780 - 0.27*(t1757*t1780*t1810 - 1.*t1780*t1819*t1821) - 0.0875*t426 - 0.037*(t1722*t426 + t1708*t519);
  p_output1[34]=-0.25*t1757*t1847 - 0.27*(t1757*t1810*t1847 - 1.*t1819*t1821*t1847) - 0.0875*t852 - 0.037*(t1722*t852 + t1708*t911);
  p_output1[35]=-0.25*t1757*t2055 - 0.27*(t1757*t1810*t2055 - 1.*t1819*t1821*t2055) - 0.0875*t1126*t97 - 0.037*(t2062 + t1126*t1722*t97);
  p_output1[36]=t2105 - 0.25*t2158 - 0.21935*t138*t291 - 0.27*(t2158*t760 + (-1.*t138*t291*t636 - 1.*t2140*t784)*t795) + 0.037*(t1126*t138*t389*t569 + t1126*t138*t466*t97);
  p_output1[37]=t2208 - 0.25*t2256 - 0.21935*t291*t394 - 0.27*(t2256*t760 + (-1.*t291*t394*t636 - 1.*t2245*t784)*t795) + 0.037*(t1126*t389*t394*t569 + t1126*t394*t466*t97);
  p_output1[38]=-0.21935*t1126 + t2362 - 0.25*t2442 - 0.27*(t2442*t760 + (-1.*t1126*t636 - 1.*t2428*t784)*t795) + 0.037*(-1.*t291*t389*t569 - 1.*t291*t466*t97);
  p_output1[39]=t2105 + t2523 - 0.25*t2553 - 0.27*(t1433*t2553 + t1460*(-1.*t1446*t2533 - 1.*t1363*t138*t291)) + 0.037*(t1126*t1323*t138*t389 + t1126*t1302*t138*t97);
  p_output1[40]=t2208 + t2659 - 0.25*t2695 - 0.27*(t1433*t2695 + t1460*(-1.*t1446*t2692 - 1.*t1363*t291*t394)) + 0.037*(t1126*t1323*t389*t394 + t1126*t1302*t394*t97);
  p_output1[41]=t2362 + t2751 - 0.25*t2793 - 0.27*(t1460*(-1.*t1126*t1363 - 1.*t1446*t2770) + t1433*t2793) + 0.037*(-1.*t1323*t291*t389 - 1.*t1302*t291*t97);
  p_output1[42]=t2523 - 0.25*t2956 - 0.27*(t1821*(-1.*t138*t1757*t291 - 1.*t1819*t2927) + t1810*t2956) - 0.0875*t1126*t138*t389 - 0.037*(t1126*t138*t1722*t389 + t1126*t138*t1708*t97);
  p_output1[43]=t2659 - 0.25*t3047 - 0.0875*t1126*t389*t394 - 0.27*(t1810*t3047 + t1821*(-1.*t1819*t3040 - 1.*t1757*t291*t394)) - 0.037*(t1126*t1722*t389*t394 + t1126*t1708*t394*t97);
  p_output1[44]=t2751 - 0.25*t3169 - 0.27*(t1821*(-1.*t1126*t1757 - 1.*t1819*t3165) + t1810*t3169) + 0.0875*t291*t389 - 0.037*(-1.*t1722*t291*t389 - 1.*t1708*t291*t97);
  p_output1[45]=t3239 - 0.25*t3332 - 0.21935*t1126*t394 - 0.27*(t3332*t760 + (-1.*t1126*t394*t636 - 1.*t3320*t784)*t795) + 0.037*(t3263*t466 + t569*t911);
  p_output1[46]=0.21935*t1126*t138 + t3366 - 0.25*t3407 + 0.037*(t426*t466 + t3355*t569) - 0.27*(t3407*t760 + (t1126*t138*t636 - 1.*t3396*t784)*t795);
  p_output1[47]=0;
  p_output1[48]=t3239 + t3446 - 0.25*t3478 - 0.27*(t1433*t3478 + t1460*(-1.*t1446*t3476 - 1.*t1126*t1363*t394)) + 0.037*(t1302*t3263 + t1323*t911);
  p_output1[49]=t3366 + t3532 - 0.25*t3575 - 0.27*(t1460*(t1126*t1363*t138 - 1.*t1446*t3571) + t1433*t3575) + 0.037*(t1323*t3355 + t1302*t426);
  p_output1[50]=0;
  p_output1[51]=t3446 - 0.25*t3690 - 0.27*(t1810*t3690 + t1821*(-1.*t1819*t3683 - 1.*t1126*t1757*t394)) - 0.0875*t911 - 0.037*(t1708*t3263 + t1722*t911);
  p_output1[52]=-0.0875*t3355 + t3532 - 0.25*t3795 - 0.27*(t1821*(t1126*t138*t1757 - 1.*t1819*t3784) + t1810*t3795) - 0.037*(t1722*t3355 + t1708*t426);
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
  p_output1[81]=0.037*(t3389 - 1.*t3355*t466) - 0.25*t3916*t636 - 0.27*(t3916*t636*t760 - 1.*t3916*t784*t795);
  p_output1[82]=0.037*(t4012 - 1.*t3981*t466) - 0.25*t3995*t636 - 0.27*(t3995*t636*t760 - 1.*t3995*t784*t795);
  p_output1[83]=0.037*(t1216 + t4081) - 0.25*t4070*t636 - 0.27*(t4070*t636*t760 - 1.*t4070*t784*t795);
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
  p_output1[90]=-0.25*t4142 - 0.27*(t4142*t760 + (-1.*t4139*t636 - 1.*t4135*t784)*t795);
  p_output1[91]=-0.25*t4221 - 0.27*(t4221*t760 + (-1.*t4215*t636 - 1.*t4197*t784)*t795);
  p_output1[92]=-0.25*t4314 - 0.27*(t4314*t760 + (-1.*t4265*t636 - 1.*t4303*t784)*t795);
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=-0.27*((0. + t4138 + t4141)*t756 - 1.*(0. + t4139*t636 + t4135*t784)*t795);
  p_output1[100]=-0.27*((0. + t4207 + t4220)*t756 - 1.*(0. + t4215*t636 + t4197*t784)*t795);
  p_output1[101]=-0.27*((0. + t4271 + t4312)*t756 - 1.*(0. + t4265*t636 + t4303*t784)*t795);
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
  p_output1[114]=-0.037*(-1.*t1708*t3355 + t3783) - 0.25*t1757*t4513 - 0.27*(t1757*t1810*t4513 - 1.*t1819*t1821*t4513);
  p_output1[115]=-0.25*t1757*t4566 - 0.27*(t1757*t1810*t4566 - 1.*t1819*t1821*t4566) - 0.037*(-1.*t1708*t3981 + t4574);
  p_output1[116]=-0.25*t1757*t4610 - 0.27*(t1757*t1810*t4610 - 1.*t1819*t1821*t4610) - 0.037*(t2062 + t4625);
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
  p_output1[120]=0;
  p_output1[121]=0;
  p_output1[122]=0;
  p_output1[123]=-0.25*t4666 - 0.27*(t1821*(-1.*t1819*t4135 - 1.*t1757*t4662) + t1810*t4666);
  p_output1[124]=-0.25*t4746 - 0.27*(t1821*(-1.*t1819*t4197 - 1.*t1757*t4738) + t1810*t4746);
  p_output1[125]=-0.25*t4812 - 0.27*(t1821*(-1.*t1819*t4303 - 1.*t1757*t4790) + t1810*t4812);
  p_output1[126]=0;
  p_output1[127]=0;
  p_output1[128]=0;
  p_output1[129]=0;
  p_output1[130]=0;
  p_output1[131]=0;
  p_output1[132]=-0.27*(-1.*t1821*(0. + t1819*t4135 + t1757*t4662) + t1788*(0. + t4661 + t4664));
  p_output1[133]=-0.27*(-1.*t1821*(0. + t1819*t4197 + t1757*t4738) + t1788*(0. + t4725 + t4740));
  p_output1[134]=-0.27*(-1.*t1821*(0. + t1819*t4303 + t1757*t4790) + t1788*(0. + t4791 + t4804));
  p_output1[135]=0;
  p_output1[136]=0;
  p_output1[137]=0;
  p_output1[138]=0.037*(-1.*t1302*t3355 + t3567) - 0.25*t1363*t4977 - 0.27*(t1363*t1433*t4977 - 1.*t1446*t1460*t4977);
  p_output1[139]=-0.25*t1363*t5001 - 0.27*(t1363*t1433*t5001 - 1.*t1446*t1460*t5001) + 0.037*(-1.*t1302*t3981 + t5007);
  p_output1[140]=-0.25*t1363*t5035 - 0.27*(t1363*t1433*t5035 - 1.*t1446*t1460*t5035) + 0.037*(t1635 + t5039);
  p_output1[141]=0;
  p_output1[142]=0;
  p_output1[143]=0;
  p_output1[144]=0;
  p_output1[145]=0;
  p_output1[146]=0;
  p_output1[147]=-0.25*t5063 - 0.27*(t1460*(-1.*t1446*t4135 - 1.*t1363*t5061) + t1433*t5063);
  p_output1[148]=-0.25*t5106 - 0.27*(t1460*(-1.*t1446*t4197 - 1.*t1363*t5098) + t1433*t5106);
  p_output1[149]=-0.25*t5138 - 0.27*(t1460*(-1.*t1446*t4303 - 1.*t1363*t5128) + t1433*t5138);
  p_output1[150]=0;
  p_output1[151]=0;
  p_output1[152]=0;
  p_output1[153]=0;
  p_output1[154]=0;
  p_output1[155]=0;
  p_output1[156]=-0.27*(-1.*t1460*(0. + t1446*t4135 + t1363*t5061) + t1424*(0. + t5060 + t5062));
  p_output1[157]=-0.27*(-1.*t1460*(0. + t1446*t4197 + t1363*t5098) + t1424*(0. + t5086 + t5104));
  p_output1[158]=-0.27*(-1.*t1460*(0. + t1446*t4303 + t1363*t5128) + t1424*(0. + t5136 + t5137));
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

#include "j_3_func.hh"

namespace SymFunction
{

void j_3_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
