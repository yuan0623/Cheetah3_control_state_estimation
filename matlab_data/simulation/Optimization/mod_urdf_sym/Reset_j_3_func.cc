/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 13:01:12 GMT-05:00
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
  double t51;
  double t101;
  double t79;
  double t35;
  double t165;
  double t98;
  double t167;
  double t220;
  double t694;
  double t561;
  double t652;
  double t675;
  double t489;
  double t809;
  double t827;
  double t858;
  double t890;
  double t958;
  double t969;
  double t1317;
  double t1320;
  double t1349;
  double t720;
  double t1504;
  double t1508;
  double t1513;
  double t1018;
  double t1048;
  double t1493;
  double t1523;
  double t1549;
  double t1125;
  double t1148;
  double t1706;
  double t1742;
  double t1744;
  double t1764;
  double t1951;
  double t2001;
  double t1946;
  double t1962;
  double t2004;
  double t2021;
  double t2023;
  double t2029;
  double t2041;
  double t2103;
  double t2107;
  double t2274;
  double t2303;
  double t2311;
  double t2144;
  double t2160;
  double t2553;
  double t2564;
  double t2569;
  double t1934;
  double t2739;
  double t2706;
  double t2788;
  double t2798;
  double t2807;
  double t2850;
  double t2858;
  double t2869;
  double t2250;
  double t2758;
  double t2890;
  double t2902;
  double t3044;
  double t3048;
  double t3059;
  double t2982;
  double t2986;
  double t2535;
  double t3182;
  double t3204;
  double t3219;
  double t3651;
  double t3655;
  double t3672;
  double t3693;
  double t3697;
  double t3711;
  double t3812;
  double t3819;
  double t3826;
  double t3832;
  double t3840;
  double t3841;
  double t3922;
  double t3926;
  double t3929;
  double t3939;
  double t3941;
  double t3946;
  double t3625;
  double t4057;
  double t4067;
  double t4071;
  double t4072;
  double t4077;
  double t4081;
  double t3769;
  double t4179;
  double t4191;
  double t4236;
  double t4237;
  double t4248;
  double t4253;
  double t3900;
  double t4372;
  double t4378;
  double t4379;
  double t4381;
  double t4383;
  double t4396;
  double t3998;
  double t4487;
  double t4493;
  double t4516;
  double t4519;
  double t4521;
  double t4527;
  double t4148;
  double t4679;
  double t4688;
  double t4705;
  double t4708;
  double t4716;
  double t4717;
  double t4335;
  double t4876;
  double t4878;
  double t4886;
  double t4891;
  double t4896;
  double t4905;
  double t4961;
  double t4966;
  double t4969;
  double t4983;
  double t4989;
  double t4990;
  double t4991;
  double t5002;
  double t5013;
  double t5067;
  double t5073;
  double t5080;
  double t5102;
  double t5113;
  double t5115;
  double t5123;
  double t5130;
  double t5132;
  double t4948;
  double t5232;
  double t5234;
  double t5249;
  double t5262;
  double t5287;
  double t5289;
  double t5066;
  double t5368;
  double t5383;
  double t5387;
  double t5392;
  double t5410;
  double t5415;
  double t5210;
  double t5486;
  double t5511;
  double t5512;
  double t5521;
  double t5522;
  double t5526;
  double t5331;
  double t5620;
  double t5622;
  double t5635;
  double t5640;
  double t5642;
  double t5653;
  double t5727;
  double t5740;
  double t5752;
  double t5822;
  double t5828;
  double t5830;
  double t5841;
  double t5847;
  double t5849;
  double t2593;
  double t5914;
  double t5924;
  double t5982;
  double t5983;
  double t5987;
  double t5989;
  double t5994;
  double t5996;
  double t5857;
  double t6022;
  double t6029;
  double t6032;
  double t6033;
  double t6035;
  double t6038;
  double t6039;
  double t5940;
  double t6066;
  double t6081;
  double t6082;
  double t6092;
  double t6094;
  double t6099;
  double t6101;
  double t6203;
  double t6206;
  double t6209;
  double t6229;
  double t6231;
  double t6235;
  double t1789;
  double t6258;
  double t6259;
  double t6302;
  double t6300;
  double t6303;
  double t6304;
  double t6238;
  double t6344;
  double t6347;
  double t6342;
  double t6355;
  double t6356;
  double t6262;
  double t6399;
  double t6401;
  double t6403;
  double t6404;
  double t6405;
  double t6536;
  double t6537;
  double t6543;
  double t6587;
  double t6589;
  double t6598;
  double t3262;
  double t6662;
  double t6664;
  double t6714;
  double t6712;
  double t6715;
  double t6717;
  double t6610;
  double t6755;
  double t6761;
  double t6754;
  double t6762;
  double t6765;
  double t6676;
  double t6791;
  double t6792;
  double t6793;
  double t6795;
  double t6796;
  t51 = Cos(var1[5]);
  t101 = Sin(var1[3]);
  t79 = Sin(var1[4]);
  t35 = Cos(var1[3]);
  t165 = Sin(var1[5]);
  t98 = t35*t51*t79;
  t167 = t101*t165;
  t220 = t98 + t167;
  t694 = Cos(var1[9]);
  t561 = -1.*t51*t101*t79;
  t652 = t35*t165;
  t675 = t561 + t652;
  t489 = Sin(var1[9]);
  t809 = Cos(var1[10]);
  t827 = t694*t675;
  t858 = -1.*t489;
  t890 = 0. + t858;
  t958 = t890*t220;
  t969 = t827 + t958;
  t1317 = -1.*t51*t101;
  t1320 = t35*t79*t165;
  t1349 = t1317 + t1320;
  t720 = 0. + t694;
  t1504 = -1.*t35*t51;
  t1508 = -1.*t101*t79*t165;
  t1513 = t1504 + t1508;
  t1018 = Cos(var1[11]);
  t1048 = 0. + t1018;
  t1493 = t890*t1349;
  t1523 = t694*t1513;
  t1549 = t1493 + t1523;
  t1125 = Sin(var1[10]);
  t1148 = Sin(var1[11]);
  t1706 = Cos(var1[4]);
  t1742 = t35*t1706*t890;
  t1744 = -1.*t694*t1706*t101;
  t1764 = t1742 + t1744;
  t1951 = Cos(var1[6]);
  t2001 = Sin(var1[6]);
  t1946 = Cos(var1[7]);
  t1962 = t1951*t675;
  t2004 = -1.*t2001;
  t2021 = 0. + t2004;
  t2023 = t220*t2021;
  t2029 = t1962 + t2023;
  t2041 = 0. + t1951;
  t2103 = Cos(var1[8]);
  t2107 = 0. + t2103;
  t2274 = t1951*t1513;
  t2303 = t1349*t2021;
  t2311 = t2274 + t2303;
  t2144 = Sin(var1[7]);
  t2160 = Sin(var1[8]);
  t2553 = -1.*t1706*t1951*t101;
  t2564 = t35*t1706*t2021;
  t2569 = t2553 + t2564;
  t1934 = -0.0875*t220;
  t2739 = Cos(var1[12]);
  t2706 = Sin(var1[12]);
  t2788 = Cos(var1[13]);
  t2798 = t2739*t675;
  t2807 = -1.*t2706;
  t2850 = 0. + t2807;
  t2858 = t2850*t220;
  t2869 = t2798 + t2858;
  t2250 = -0.0875*t1349;
  t2758 = 0. + t2739;
  t2890 = Cos(var1[14]);
  t2902 = 0. + t2890;
  t3044 = t2850*t1349;
  t3048 = t2739*t1513;
  t3059 = t3044 + t3048;
  t2982 = Sin(var1[13]);
  t2986 = Sin(var1[14]);
  t2535 = -0.0875*t35*t1706;
  t3182 = t35*t1706*t2850;
  t3204 = -1.*t2739*t1706*t101;
  t3219 = t3182 + t3204;
  t3651 = t694*t35*t1706*t51;
  t3655 = t1706*t51*t890*t101;
  t3672 = t3651 + t3655;
  t3693 = t809*t3672;
  t3697 = -1.*t51*t1125*t79;
  t3711 = t3693 + t3697;
  t3812 = -1.*t1125*t79*t165;
  t3819 = t694*t35*t1706*t165;
  t3826 = t1706*t890*t101*t165;
  t3832 = t3819 + t3826;
  t3840 = t809*t3832;
  t3841 = t3812 + t3840;
  t3922 = -1.*t1706*t1125;
  t3926 = -1.*t694*t35*t79;
  t3929 = -1.*t890*t101*t79;
  t3939 = t3926 + t3929;
  t3941 = t809*t3939;
  t3946 = t3922 + t3941;
  t3625 = -0.21935*t51*t79;
  t4057 = t35*t1706*t51*t1951;
  t4067 = t1706*t51*t101*t2021;
  t4071 = t4057 + t4067;
  t4072 = t1946*t4071;
  t4077 = -1.*t51*t79*t2144;
  t4081 = t4072 + t4077;
  t3769 = -0.21935*t79*t165;
  t4179 = t35*t1706*t1951*t165;
  t4191 = t1706*t101*t165*t2021;
  t4236 = t4179 + t4191;
  t4237 = t1946*t4236;
  t4248 = -1.*t79*t165*t2144;
  t4253 = t4237 + t4248;
  t3900 = -0.21935*t1706;
  t4372 = -1.*t35*t1951*t79;
  t4378 = -1.*t101*t79*t2021;
  t4379 = t4372 + t4378;
  t4381 = t1946*t4379;
  t4383 = -1.*t1706*t2144;
  t4396 = t4381 + t4383;
  t3998 = -0.0875*t1706*t51*t101;
  t4487 = t2739*t35*t1706*t51;
  t4493 = t1706*t51*t2850*t101;
  t4516 = t4487 + t4493;
  t4519 = t2788*t4516;
  t4521 = -1.*t51*t2982*t79;
  t4527 = t4519 + t4521;
  t4148 = -0.0875*t1706*t101*t165;
  t4679 = -1.*t2982*t79*t165;
  t4688 = t2739*t35*t1706*t165;
  t4705 = t1706*t2850*t101*t165;
  t4708 = t4688 + t4705;
  t4716 = t2788*t4708;
  t4717 = t4679 + t4716;
  t4335 = 0.0875*t101*t79;
  t4876 = -1.*t1706*t2982;
  t4878 = -1.*t2739*t35*t79;
  t4886 = -1.*t2850*t101*t79;
  t4891 = t4878 + t4886;
  t4896 = t2788*t4891;
  t4905 = t4876 + t4896;
  t4961 = t51*t101;
  t4966 = -1.*t35*t79*t165;
  t4969 = t4961 + t4966;
  t4983 = -1.*t1706*t1125*t165;
  t4989 = t694*t4969;
  t4990 = t890*t1513;
  t4991 = t4989 + t4990;
  t5002 = t809*t4991;
  t5013 = t4983 + t5002;
  t5067 = t51*t101*t79;
  t5073 = -1.*t35*t165;
  t5080 = t5067 + t5073;
  t5102 = t1706*t51*t1125;
  t5113 = t890*t5080;
  t5115 = t694*t220;
  t5123 = t5113 + t5115;
  t5130 = t809*t5123;
  t5132 = t5102 + t5130;
  t4948 = -0.21935*t1706*t165;
  t5232 = t1951*t4969;
  t5234 = t1513*t2021;
  t5249 = t5232 + t5234;
  t5262 = t1946*t5249;
  t5287 = -1.*t1706*t165*t2144;
  t5289 = t5262 + t5287;
  t5066 = 0.21935*t1706*t51;
  t5368 = t1951*t220;
  t5383 = t5080*t2021;
  t5387 = t5368 + t5383;
  t5392 = t1946*t5387;
  t5410 = t1706*t51*t2144;
  t5415 = t5392 + t5410;
  t5210 = -0.0875*t1513;
  t5486 = -1.*t1706*t2982*t165;
  t5511 = t2739*t4969;
  t5512 = t2850*t1513;
  t5521 = t5511 + t5512;
  t5522 = t2788*t5521;
  t5526 = t5486 + t5522;
  t5331 = -0.0875*t5080;
  t5620 = t1706*t51*t2982;
  t5622 = t2850*t5080;
  t5635 = t2739*t220;
  t5640 = t5622 + t5635;
  t5642 = t2788*t5640;
  t5653 = t5620 + t5642;
  t5727 = -1.*t1951*t5080;
  t5740 = -1.*t220*t2001;
  t5752 = t5727 + t5740;
  t5822 = t35*t51;
  t5828 = t101*t79*t165;
  t5830 = t5822 + t5828;
  t5841 = -1.*t1951*t5830;
  t5847 = -1.*t1349*t2001;
  t5849 = t5841 + t5847;
  t2593 = -1.*t1706*t101*t2001;
  t5914 = -1.*t35*t1706*t2001;
  t5924 = t2553 + t5914;
  t5982 = t1706*t51;
  t5983 = 0. + t5982;
  t5987 = t5983*t1946;
  t5989 = 0. + t5368 + t5383;
  t5994 = -1.*t5989*t2144;
  t5996 = t5987 + t5994;
  t5857 = t1951*t1349;
  t6022 = t1706*t165;
  t6029 = 0. + t6022;
  t6032 = t1946*t6029;
  t6033 = t5830*t2021;
  t6035 = 0. + t5857 + t6033;
  t6038 = -1.*t6035*t2144;
  t6039 = t6032 + t6038;
  t5940 = t35*t1706*t1951;
  t6066 = -1.*t79;
  t6081 = 0. + t6066;
  t6082 = t1946*t6081;
  t6092 = t1706*t101*t2021;
  t6094 = 0. + t5940 + t6092;
  t6099 = -1.*t6094*t2144;
  t6101 = t6082 + t6099;
  t6203 = -1.*t694*t5080;
  t6206 = -1.*t489*t220;
  t6209 = t6203 + t6206;
  t6229 = -1.*t489*t1349;
  t6231 = -1.*t694*t5830;
  t6235 = t6229 + t6231;
  t1789 = -1.*t1706*t489*t101;
  t6258 = -1.*t35*t1706*t489;
  t6259 = t6258 + t1744;
  t6302 = 0. + t5113 + t5115;
  t6300 = t809*t5983;
  t6303 = -1.*t1125*t6302;
  t6304 = t6300 + t6303;
  t6238 = t694*t1349;
  t6344 = t890*t5830;
  t6347 = 0. + t6238 + t6344;
  t6342 = t809*t6029;
  t6355 = -1.*t1125*t6347;
  t6356 = t6342 + t6355;
  t6262 = t694*t35*t1706;
  t6399 = t1706*t890*t101;
  t6401 = 0. + t6262 + t6399;
  t6403 = -1.*t1125*t6401;
  t6404 = t809*t6081;
  t6405 = t6403 + t6404;
  t6536 = -1.*t2739*t5080;
  t6537 = -1.*t2706*t220;
  t6543 = t6536 + t6537;
  t6587 = -1.*t2706*t1349;
  t6589 = -1.*t2739*t5830;
  t6598 = t6587 + t6589;
  t3262 = -1.*t1706*t2706*t101;
  t6662 = -1.*t35*t1706*t2706;
  t6664 = t6662 + t3204;
  t6714 = 0. + t5622 + t5635;
  t6712 = t2788*t5983;
  t6715 = -1.*t2982*t6714;
  t6717 = t6712 + t6715;
  t6610 = t2739*t1349;
  t6755 = t2850*t5830;
  t6761 = 0. + t6610 + t6755;
  t6754 = t2788*t6029;
  t6762 = -1.*t2982*t6761;
  t6765 = t6754 + t6762;
  t6676 = t2739*t35*t1706;
  t6791 = t1706*t2850*t101;
  t6792 = 0. + t6676 + t6791;
  t6793 = -1.*t2982*t6792;
  t6795 = t2788*t6081;
  t6796 = t6793 + t6795;
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
  p_output1[27]=0.0875*t220 + 0.037*(t489*t675 + t220*t720) - 0.25*t809*t969 - 0.27*(-1.*t1125*t1148*t969 + t1048*t809*t969);
  p_output1[28]=0.0875*t1349 + 0.037*(t1513*t489 + t1349*t720) - 0.25*t1549*t809 - 0.27*(-1.*t1125*t1148*t1549 + t1048*t1549*t809);
  p_output1[29]=0.0875*t1706*t35 + 0.037*(t1789 + t1706*t35*t720) - 0.25*t1764*t809 - 0.27*(-1.*t1125*t1148*t1764 + t1048*t1764*t809);
  p_output1[30]=t1934 - 0.25*t1946*t2029 - 0.27*(t1946*t2029*t2107 - 1.*t2029*t2144*t2160) - 0.037*(t2041*t220 + t2001*t675);
  p_output1[31]=-0.037*(t1513*t2001 + t1349*t2041) + t2250 - 0.25*t1946*t2311 - 0.27*(t1946*t2107*t2311 - 1.*t2144*t2160*t2311);
  p_output1[32]=t2535 - 0.25*t1946*t2569 - 0.27*(t1946*t2107*t2569 - 1.*t2144*t2160*t2569) - 0.037*(t2593 + t1706*t2041*t35);
  p_output1[33]=t1934 - 0.25*t2788*t2869 - 0.27*(t2788*t2869*t2902 - 1.*t2869*t2982*t2986) - 0.037*(t220*t2758 + t2706*t675);
  p_output1[34]=t2250 - 0.037*(t1513*t2706 + t1349*t2758) - 0.25*t2788*t3059 - 0.27*(t2788*t2902*t3059 - 1.*t2982*t2986*t3059);
  p_output1[35]=t2535 - 0.25*t2788*t3219 - 0.27*(t2788*t2902*t3219 - 1.*t2982*t2986*t3219) - 0.037*(t3262 + t1706*t2758*t35);
  p_output1[36]=t3625 - 0.25*t3711 + 0.0875*t101*t1706*t51 + 0.037*(t1706*t35*t489*t51 + t101*t1706*t51*t720) - 0.27*(t1048*t3711 + t1148*(-1.*t1125*t3672 - 1.*t51*t79*t809));
  p_output1[37]=0.0875*t101*t165*t1706 + t3769 - 0.25*t3841 + 0.037*(t165*t1706*t35*t489 + t101*t165*t1706*t720) - 0.27*(t1048*t3841 + t1148*(-1.*t1125*t3832 - 1.*t165*t79*t809));
  p_output1[38]=t3900 - 0.25*t3946 - 0.0875*t101*t79 + 0.037*(-1.*t35*t489*t79 - 1.*t101*t720*t79) - 0.27*(t1048*t3946 + t1148*(-1.*t1125*t3939 - 1.*t1706*t809));
  p_output1[39]=t3625 + t3998 - 0.25*t4081 - 0.037*(t101*t1706*t2041*t51 + t1706*t2001*t35*t51) - 0.27*(t2107*t4081 + t2160*(-1.*t2144*t4071 - 1.*t1946*t51*t79));
  p_output1[40]=-0.037*(t101*t165*t1706*t2041 + t165*t1706*t2001*t35) + t3769 + t4148 - 0.25*t4253 - 0.27*(t2107*t4253 + t2160*(-1.*t2144*t4236 - 1.*t165*t1946*t79));
  p_output1[41]=t3900 + t4335 - 0.25*t4396 - 0.27*(t2160*(-1.*t1706*t1946 - 1.*t2144*t4379) + t2107*t4396) - 0.037*(-1.*t101*t2041*t79 - 1.*t2001*t35*t79);
  p_output1[42]=t3998 - 0.25*t4527 - 0.037*(t101*t1706*t2758*t51 + t1706*t2706*t35*t51) + 0.21935*t51*t79 - 0.27*(t2902*t4527 + t2986*(-1.*t2982*t4516 - 1.*t2788*t51*t79));
  p_output1[43]=-0.037*(t101*t165*t1706*t2758 + t165*t1706*t2706*t35) + t4148 - 0.25*t4717 + 0.21935*t165*t79 - 0.27*(t2902*t4717 + t2986*(-1.*t2982*t4708 - 1.*t165*t2788*t79));
  p_output1[44]=0.21935*t1706 + t4335 - 0.25*t4905 - 0.27*(t2986*(-1.*t1706*t2788 - 1.*t2982*t4891) + t2902*t4905) - 0.037*(-1.*t101*t2758*t79 - 1.*t2706*t35*t79);
  p_output1[45]=0.0875*t1513 + t4948 - 0.25*t5013 + 0.037*(t489*t4969 + t1513*t720) - 0.27*(t1048*t5013 + t1148*(-1.*t1125*t4991 - 1.*t165*t1706*t809));
  p_output1[46]=t5066 + 0.0875*t5080 - 0.25*t5132 + 0.037*(t220*t489 + t5080*t720) - 0.27*(t1048*t5132 + t1148*(-1.*t1125*t5123 + t1706*t51*t809));
  p_output1[47]=0;
  p_output1[48]=t4948 - 0.037*(t1513*t2041 + t2001*t4969) + t5210 - 0.25*t5289 - 0.27*(t2160*(-1.*t165*t1706*t1946 - 1.*t2144*t5249) + t2107*t5289);
  p_output1[49]=t5066 - 0.037*(t2001*t220 + t2041*t5080) + t5331 - 0.25*t5415 - 0.27*(t2160*(t1706*t1946*t51 - 1.*t2144*t5387) + t2107*t5415);
  p_output1[50]=0;
  p_output1[51]=0.21935*t165*t1706 - 0.037*(t1513*t2758 + t2706*t4969) + t5210 - 0.25*t5526 - 0.27*(t2986*(-1.*t165*t1706*t2788 - 1.*t2982*t5521) + t2902*t5526);
  p_output1[52]=-0.037*(t220*t2706 + t2758*t5080) - 0.21935*t1706*t51 + t5331 - 0.25*t5653 - 0.27*(t2986*(t1706*t2788*t51 - 1.*t2982*t5640) + t2902*t5653);
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=-0.037*(-1.*t2001*t5080 + t5368) - 0.25*t1946*t5752 - 0.27*(t1946*t2107*t5752 - 1.*t2144*t2160*t5752);
  p_output1[58]=-0.25*t1946*t5849 - 0.27*(t1946*t2107*t5849 - 1.*t2144*t2160*t5849) - 0.037*(-1.*t2001*t5830 + t5857);
  p_output1[59]=-0.25*t1946*t5924 - 0.27*(t1946*t2107*t5924 - 1.*t2144*t2160*t5924) - 0.037*(t2593 + t5940);
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=-0.25*t5996 - 0.27*(t2160*(-1.*t2144*t5983 - 1.*t1946*t5989) + t2107*t5996);
  p_output1[67]=-0.25*t6039 - 0.27*(t2160*(-1.*t2144*t6029 - 1.*t1946*t6035) + t2107*t6039);
  p_output1[68]=-0.25*t6101 - 0.27*(t2160*(-1.*t2144*t6081 - 1.*t1946*t6094) + t2107*t6101);
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=-0.27*(-1.*t2160*(0. + t2144*t5983 + t1946*t5989) + t2103*(0. + t5987 + t5994));
  p_output1[76]=-0.27*(-1.*t2160*(0. + t2144*t6029 + t1946*t6035) + t2103*(0. + t6032 + t6038));
  p_output1[77]=-0.27*(-1.*t2160*(0. + t2144*t6081 + t1946*t6094) + t2103*(0. + t6082 + t6099));
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0.037*(-1.*t489*t5080 + t5115) - 0.25*t6209*t809 - 0.27*(-1.*t1125*t1148*t6209 + t1048*t6209*t809);
  p_output1[82]=0.037*(-1.*t489*t5830 + t6238) - 0.25*t6235*t809 - 0.27*(-1.*t1125*t1148*t6235 + t1048*t6235*t809);
  p_output1[83]=0.037*(t1789 + t6262) - 0.25*t6259*t809 - 0.27*(-1.*t1125*t1148*t6259 + t1048*t6259*t809);
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
  p_output1[90]=-0.25*t6304 - 0.27*(t1048*t6304 + t1148*(-1.*t1125*t5983 - 1.*t6302*t809));
  p_output1[91]=-0.25*t6356 - 0.27*(t1048*t6356 + t1148*(-1.*t1125*t6029 - 1.*t6347*t809));
  p_output1[92]=-0.25*t6405 - 0.27*(t1048*t6405 + t1148*(-1.*t1125*t6081 - 1.*t6401*t809));
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=-0.27*(t1018*(0. + t6300 + t6303) - 1.*t1148*(0. + t1125*t5983 + t6302*t809));
  p_output1[100]=-0.27*(t1018*(0. + t6342 + t6355) - 1.*t1148*(0. + t1125*t6029 + t6347*t809));
  p_output1[101]=-0.27*(t1018*(0. + t6403 + t6404) - 1.*t1148*(0. + t1125*t6081 + t6401*t809));
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
  p_output1[114]=-0.037*(-1.*t2706*t5080 + t5635) - 0.25*t2788*t6543 - 0.27*(t2788*t2902*t6543 - 1.*t2982*t2986*t6543);
  p_output1[115]=-0.25*t2788*t6598 - 0.27*(t2788*t2902*t6598 - 1.*t2982*t2986*t6598) - 0.037*(-1.*t2706*t5830 + t6610);
  p_output1[116]=-0.25*t2788*t6664 - 0.27*(t2788*t2902*t6664 - 1.*t2982*t2986*t6664) - 0.037*(t3262 + t6676);
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
  p_output1[120]=0;
  p_output1[121]=0;
  p_output1[122]=0;
  p_output1[123]=-0.25*t6717 - 0.27*(t2986*(-1.*t2982*t5983 - 1.*t2788*t6714) + t2902*t6717);
  p_output1[124]=-0.25*t6765 - 0.27*(t2986*(-1.*t2982*t6029 - 1.*t2788*t6761) + t2902*t6765);
  p_output1[125]=-0.25*t6796 - 0.27*(t2986*(-1.*t2982*t6081 - 1.*t2788*t6792) + t2902*t6796);
  p_output1[126]=0;
  p_output1[127]=0;
  p_output1[128]=0;
  p_output1[129]=0;
  p_output1[130]=0;
  p_output1[131]=0;
  p_output1[132]=-0.27*(-1.*t2986*(0. + t2982*t5983 + t2788*t6714) + t2890*(0. + t6712 + t6715));
  p_output1[133]=-0.27*(-1.*t2986*(0. + t2982*t6029 + t2788*t6761) + t2890*(0. + t6754 + t6762));
  p_output1[134]=-0.27*(-1.*t2986*(0. + t2982*t6081 + t2788*t6792) + t2890*(0. + t6793 + t6795));
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

#include "Reset_j_3_func.hh"

namespace SymFunction
{

void Reset_j_3_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
