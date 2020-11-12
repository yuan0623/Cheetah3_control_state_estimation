/*
 * Automatically Generated from Mathematica.
 * Sun 28 Jul 2019 02:54:24 GMT-04:00
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
  double t221;
  double t232;
  double t255;
  double t267;
  double t268;
  double t283;
  double t304;
  double t196;
  double t312;
  double t323;
  double t328;
  double t220;
  double t307;
  double t309;
  double t331;
  double t178;
  double t498;
  double t505;
  double t508;
  double t433;
  double t457;
  double t530;
  double t590;
  double t592;
  double t583;
  double t585;
  double t310;
  double t338;
  double t356;
  double t513;
  double t547;
  double t548;
  double t552;
  double t557;
  double t558;
  double t586;
  double t594;
  double t599;
  double t654;
  double t659;
  double t667;
  double t677;
  double t682;
  double t690;
  double t691;
  double t710;
  double t715;
  double t857;
  double t865;
  double t876;
  double t887;
  double t895;
  double t899;
  double t1160;
  double t1163;
  double t1164;
  double t1199;
  double t1200;
  double t1211;
  double t1226;
  double t1228;
  double t1229;
  double t1239;
  double t1403;
  double t1408;
  double t1410;
  double t1431;
  double t1044;
  double t1067;
  double t1071;
  double t1078;
  double t1087;
  double t1133;
  double t1149;
  double t1150;
  double t1225;
  double t1250;
  double t1310;
  double t1352;
  double t1359;
  double t1389;
  double t1399;
  double t1442;
  double t1445;
  double t1517;
  double t1542;
  double t1544;
  double t1561;
  double t1563;
  double t1577;
  double t1666;
  double t1667;
  double t998;
  double t1647;
  double t1658;
  double t1639;
  double t1641;
  double t1642;
  double t1089;
  double t1101;
  double t1728;
  double t1674;
  double t1029;
  double t1030;
  double t1033;
  double t1346;
  double t1620;
  double t1626;
  double t1832;
  double t1834;
  double t1838;
  double t1005;
  double t1808;
  double t1827;
  double t1829;
  double t1973;
  double t1977;
  double t1982;
  double t2336;
  double t2347;
  double t2349;
  double t2371;
  double t2385;
  double t2390;
  double t2450;
  double t2538;
  double t1841;
  double t2750;
  double t2759;
  double t2763;
  double t2724;
  double t2808;
  double t1906;
  double t2054;
  double t2734;
  double t2742;
  double t2743;
  double t2223;
  double t2732;
  double t2829;
  double t1852;
  double t1853;
  double t1859;
  double t2853;
  double t2897;
  double t1911;
  double t1913;
  double t1922;
  double t3055;
  double t3111;
  double t2063;
  double t2070;
  double t2085;
  double t3152;
  double t3176;
  double t2259;
  double t2272;
  double t2273;
  double t3835;
  double t3848;
  double t3854;
  double t3936;
  double t3954;
  double t4069;
  double t4121;
  double t4126;
  double t4152;
  double t4161;
  double t4162;
  double t4191;
  double t4207;
  double t4208;
  double t4262;
  double t4263;
  double t4271;
  double t2702;
  double t2710;
  double t4742;
  double t4746;
  double t4748;
  double t4624;
  double t4625;
  double t4629;
  double t4790;
  double t4826;
  double t4844;
  double t2983;
  double t2984;
  double t2995;
  double t3016;
  double t3018;
  double t4666;
  double t4704;
  double t4709;
  double t3198;
  double t3200;
  double t3212;
  double t4634;
  double t4863;
  double t4884;
  double t4901;
  double t4975;
  double t5007;
  double t5046;
  double t5082;
  double t5392;
  double t5400;
  double t5405;
  double t5411;
  double t5836;
  double t5823;
  double t5873;
  double t5880;
  double t5886;
  double t5928;
  double t5932;
  double t5934;
  double t5948;
  double t5955;
  double t5957;
  double t5968;
  double t5969;
  double t5970;
  double t5978;
  double t5982;
  double t5985;
  double t6002;
  double t6004;
  double t6006;
  double t6012;
  double t6013;
  double t6019;
  double t6195;
  double t6199;
  double t6203;
  double t6206;
  double t6223;
  double t6240;
  double t6284;
  double t5942;
  double t5959;
  double t5961;
  double t6244;
  double t6299;
  double t6308;
  double t6492;
  double t6506;
  double t6509;
  double t6514;
  double t6523;
  double t6549;
  double t5923;
  double t5939;
  double t5940;
  double t6400;
  double t6437;
  double t6440;
  double t6811;
  double t6813;
  double t6796;
  double t6797;
  double t6807;
  double t6902;
  double t6904;
  double t6912;
  double t5707;
  double t5738;
  double t5743;
  double t5829;
  double t5832;
  double t5833;
  double t5834;
  double t5837;
  double t5870;
  double t5871;
  double t5894;
  double t5909;
  double t5912;
  double t5916;
  double t5921;
  double t5941;
  double t5962;
  double t5965;
  double t5966;
  double t5976;
  double t5989;
  double t5991;
  double t5997;
  double t6007;
  double t6020;
  double t6035;
  double t6041;
  double t6062;
  double t6085;
  double t6086;
  double t6137;
  double t6163;
  double t6173;
  double t6179;
  double t6182;
  double t6183;
  double t6184;
  double t6188;
  double t6193;
  double t6194;
  double t6282;
  double t6297;
  double t7028;
  double t7046;
  double t7047;
  double t7058;
  double t7069;
  double t7090;
  double t6381;
  double t7118;
  double t7119;
  double t7120;
  double t6425;
  double t6435;
  double t6465;
  double t7114;
  double t7131;
  double t6603;
  double t6614;
  double t7253;
  double t7274;
  double t7275;
  double t7286;
  double t7288;
  double t7293;
  double t6672;
  double t7161;
  double t7213;
  double t6706;
  double t6710;
  t221 = Cos(var1[17]);
  t232 = Sin(var1[16]);
  t255 = -1.*t221*t232;
  t267 = Cos(var1[16]);
  t268 = Sin(var1[17]);
  t283 = -1.*t267*t268;
  t304 = 0. + t255 + t283;
  t196 = Cos(var1[5]);
  t312 = Sin(var1[15]);
  t323 = -1.*t312*t304;
  t328 = 0. + t323;
  t220 = Cos(var1[15]);
  t307 = t220*t304;
  t309 = 0. + t307;
  t331 = Sin(var1[5]);
  t178 = Sin(var1[3]);
  t498 = t267*t221;
  t505 = -1.*t232*t268;
  t508 = 0. + t498 + t505;
  t433 = Cos(var1[3]);
  t457 = Cos(var1[4]);
  t530 = Sin(var1[4]);
  t590 = -1.*t312*t508;
  t592 = 0. + t590;
  t583 = t220*t508;
  t585 = 0. + t583;
  t310 = t196*t309;
  t338 = t328*t331;
  t356 = 0. + t310 + t338;
  t513 = t457*t508;
  t547 = t196*t328;
  t548 = -1.*t309*t331;
  t552 = 0. + t547 + t548;
  t557 = -1.*t530*t552;
  t558 = 0. + t513 + t557;
  t586 = t196*t585;
  t594 = t592*t331;
  t599 = 0. + t586 + t594;
  t654 = t221*t232;
  t659 = t267*t268;
  t667 = 0. + t654 + t659;
  t677 = t457*t667;
  t682 = t196*t592;
  t690 = -1.*t585*t331;
  t691 = 0. + t682 + t690;
  t710 = -1.*t530*t691;
  t715 = 0. + t677 + t710;
  t857 = -1.*t508*t530;
  t865 = -1.*t457*t552;
  t876 = t857 + t865;
  t887 = -1.*t667*t530;
  t895 = -1.*t457*t691;
  t899 = t887 + t895;
  t1160 = -1.*t221;
  t1163 = 1. + t1160;
  t1164 = -0.336601*t1163;
  t1199 = -0.356601*t221;
  t1200 = -0.16*t268;
  t1211 = 0. + t1164 + t1199 + t1200;
  t1226 = -0.20833*t1163;
  t1228 = -0.36833*t221;
  t1229 = 0.020000000000000018*t268;
  t1239 = 0. + t1226 + t1228 + t1229;
  t1403 = -0.194401*t232;
  t1408 = -1.*t232*t1211;
  t1410 = t267*t1239;
  t1431 = 0. + t1403 + t1408 + t1410;
  t1044 = 0. + t220;
  t1067 = t1044*t196;
  t1071 = 0. + t312;
  t1078 = -1.*t1071*t331;
  t1087 = 0. + t1067 + t1078;
  t1133 = -1.*t267;
  t1149 = 1. + t1133;
  t1150 = -0.194401*t1149;
  t1225 = t267*t1211;
  t1250 = t232*t1239;
  t1310 = 0. + t1150 + t1225 + t1250;
  t1352 = -1.*t220;
  t1359 = 1. + t1352;
  t1389 = 0.081715*t1359;
  t1399 = 0.11688*t220;
  t1442 = -1.*t312*t1431;
  t1445 = t1389 + t1399 + t1442;
  t1517 = t196*t1445;
  t1542 = 0.035165*t312;
  t1544 = t220*t1431;
  t1561 = t1542 + t1544;
  t1563 = -1.*t1561*t331;
  t1577 = 0. + t1517 + t1563;
  t1666 = t457*t1310;
  t1667 = -1.*t530*t1577;
  t998 = t513 + t557;
  t1647 = t457*t1087;
  t1658 = 0. + t1647;
  t1639 = t1310*t530;
  t1641 = t457*t1577;
  t1642 = 0. + t1639 + t1641;
  t1089 = -1.*t530*t1087;
  t1101 = 0. + t1089;
  t1728 = 0. + t1666 + t1667;
  t1674 = t1666 + t1667;
  t1029 = t508*t530;
  t1030 = t457*t552;
  t1033 = 0. + t1029 + t1030;
  t1346 = -1.*t1310*t530;
  t1620 = -1.*t457*t1577;
  t1626 = t1346 + t1620;
  t1832 = t196*t1561;
  t1834 = t1445*t331;
  t1838 = 0. + t1832 + t1834;
  t1005 = t677 + t710;
  t1808 = t196*t1071;
  t1827 = t1044*t331;
  t1829 = 0. + t1808 + t1827;
  t1973 = t667*t530;
  t1977 = t457*t691;
  t1982 = 0. + t1973 + t1977;
  t2336 = -1.*t196*t309;
  t2347 = -1.*t328*t331;
  t2349 = t2336 + t2347;
  t2371 = -1.*t196*t585;
  t2385 = -1.*t592*t331;
  t2390 = t2371 + t2385;
  t2450 = t547 + t548;
  t2538 = t682 + t690;
  t1841 = t1829*t1838;
  t2750 = -1.*t196*t1561;
  t2759 = -1.*t1445*t331;
  t2763 = t2750 + t2759;
  t2724 = t1517 + t1563;
  t2808 = t1067 + t1078;
  t1906 = -1.*t1838*t356;
  t2054 = -1.*t1829*t1838;
  t2734 = -1.*t196*t1071;
  t2742 = -1.*t1044*t331;
  t2743 = t2734 + t2742;
  t2223 = t1838*t599;
  t2732 = t1829*t2724;
  t2829 = t2808*t1838;
  t1852 = t1658*t1642;
  t1853 = t1101*t1728;
  t1859 = t1841 + t1852 + t1853;
  t2853 = -1.*t1838*t2450;
  t2897 = -1.*t2724*t356;
  t1911 = -1.*t1642*t1033;
  t1913 = -1.*t1728*t558;
  t1922 = t1906 + t1911 + t1913;
  t3055 = -1.*t1829*t2724;
  t3111 = -1.*t2808*t1838;
  t2063 = -1.*t1658*t1642;
  t2070 = -1.*t1101*t1728;
  t2085 = t2054 + t2063 + t2070;
  t3152 = t1838*t2538;
  t3176 = t2724*t599;
  t2259 = t1642*t1982;
  t2272 = t1728*t715;
  t2273 = t2223 + t2259 + t2272;
  t3835 = -0.035165*t312;
  t3848 = -1.*t220*t1431;
  t3854 = t3835 + t3848;
  t3936 = 0.035165*t220;
  t3954 = t3936 + t1442;
  t4069 = -1.*t220*t196*t304;
  t4121 = t312*t304*t331;
  t4126 = t4069 + t4121;
  t4152 = -1.*t220*t196*t508;
  t4161 = t312*t508*t331;
  t4162 = t4152 + t4161;
  t4191 = -1.*t196*t312*t304;
  t4207 = -1.*t220*t304*t331;
  t4208 = t4191 + t4207;
  t4262 = -1.*t196*t312*t508;
  t4263 = -1.*t220*t508*t331;
  t4271 = t4262 + t4263;
  t2702 = t1087*t1577;
  t2710 = 0. + t2702 + t1841;
  t4742 = t196*t3854;
  t4746 = -1.*t3954*t331;
  t4748 = t4742 + t4746;
  t4624 = t196*t3954;
  t4625 = t3854*t331;
  t4629 = t4624 + t4625;
  t4790 = t220*t196;
  t4826 = -1.*t312*t331;
  t4844 = t4790 + t4826;
  t2983 = -1.*t1310*t508;
  t2984 = -1.*t1577*t552;
  t2995 = t2983 + t2984 + t1906;
  t3016 = -1.*t1087*t1577;
  t3018 = 0. + t3016 + t2054;
  t4666 = -1.*t196*t312;
  t4704 = -1.*t220*t331;
  t4709 = t4666 + t4704;
  t3198 = t1310*t667;
  t3200 = t1577*t691;
  t3212 = t3198 + t3200 + t2223;
  t4634 = t1829*t4629;
  t4863 = t4844*t1838;
  t4884 = -1.*t1838*t4208;
  t4901 = -1.*t4629*t356;
  t4975 = -1.*t1829*t4629;
  t5007 = -1.*t4844*t1838;
  t5046 = t1838*t4271;
  t5082 = t4629*t599;
  t5392 = -0.194401*t267;
  t5400 = -1.*t267*t1211;
  t5405 = -1.*t232*t1239;
  t5411 = t5392 + t5400 + t5405;
  t5836 = t255 + t283;
  t5823 = t498 + t505;
  t5873 = -1.*t267*t221;
  t5880 = t232*t268;
  t5886 = t5873 + t5880;
  t5928 = -1.*t196*t312*t5836;
  t5932 = -1.*t220*t5836*t331;
  t5934 = t5928 + t5932;
  t5948 = -1.*t196*t312*t5886;
  t5955 = -1.*t220*t5886*t331;
  t5957 = t5948 + t5955;
  t5968 = t220*t196*t5836;
  t5969 = -1.*t312*t5836*t331;
  t5970 = t5968 + t5969;
  t5978 = t457*t5823;
  t5982 = -1.*t530*t5934;
  t5985 = t5978 + t5982;
  t6002 = t220*t196*t5886;
  t6004 = -1.*t312*t5886*t331;
  t6006 = t6002 + t6004;
  t6012 = t457*t5836;
  t6013 = -1.*t530*t5957;
  t6019 = t6012 + t6013;
  t6195 = -1.*t196*t312*t5411;
  t6199 = -1.*t220*t5411*t331;
  t6203 = t6195 + t6199;
  t6206 = t220*t196*t5411;
  t6223 = -1.*t312*t5411*t331;
  t6240 = t6206 + t6223;
  t6284 = t1403 + t1408 + t1410;
  t5942 = t5836*t530;
  t5959 = t457*t5957;
  t5961 = t5942 + t5959;
  t6244 = t1829*t6240;
  t6299 = -1.*t1838*t6006;
  t6308 = -1.*t6240*t356;
  t6492 = t6284*t530;
  t6506 = t457*t6203;
  t6509 = t6492 + t6506;
  t6514 = t457*t6284;
  t6523 = -1.*t530*t6203;
  t6549 = t6514 + t6523;
  t5923 = t5823*t530;
  t5939 = t457*t5934;
  t5940 = t5923 + t5939;
  t6400 = -1.*t1829*t6240;
  t6437 = t1838*t5970;
  t6440 = t6240*t599;
  t6811 = -0.16*t221;
  t6813 = t6811 + t1229;
  t6796 = 0.020000000000000018*t221;
  t6797 = 0.16*t268;
  t6807 = t6796 + t6797;
  t6902 = -1.*t232*t6813;
  t6904 = t267*t6807;
  t6912 = t6902 + t6904;
  t5707 = -1.*t1071*t1561;
  t5738 = -1.*t1044*t1445;
  t5743 = 0. + t5707 + t5738;
  t5829 = t5743*t5823;
  t5832 = t1071*t1561;
  t5833 = t1044*t1445;
  t5834 = 0. + t5832 + t5833;
  t5837 = t5834*t5836;
  t5870 = -0.00016949530000000016*t5836;
  t5871 = -0.11688*t5823;
  t5894 = -0.081715*t5886;
  t5909 = t5871 + t5894;
  t5912 = 0.03856*t5909;
  t5916 = t5870 + t5912;
  t5921 = -0.5*var2[15]*t5916;
  t5941 = -0.004820000000000004*t5940;
  t5962 = 0.03856*t5961;
  t5965 = t5941 + t5962;
  t5966 = -0.5*var2[0]*t5965;
  t5976 = t178*t5970;
  t5989 = t433*t5985;
  t5991 = t5976 + t5989;
  t5997 = -0.004820000000000004*t5991;
  t6007 = t178*t6006;
  t6020 = t433*t6019;
  t6035 = t6007 + t6020;
  t6041 = 0.03856*t6035;
  t6062 = t5997 + t6041;
  t6085 = -0.5*var2[2]*t6062;
  t6086 = t433*t5970;
  t6137 = -1.*t178*t5985;
  t6163 = t6086 + t6137;
  t6173 = -0.004820000000000004*t6163;
  t6179 = t433*t6006;
  t6182 = -1.*t178*t6019;
  t6183 = t6179 + t6182;
  t6184 = 0.03856*t6183;
  t6188 = t6173 + t6184;
  t6193 = -0.5*var2[1]*t6188;
  t6194 = t6006*t2710;
  t6282 = -1.*t1310*t5836;
  t6297 = -1.*t1577*t5957;
  t7028 = -1.*t196*t312*t6912;
  t7046 = -1.*t220*t6912*t331;
  t7047 = t7028 + t7046;
  t7058 = t220*t196*t6912;
  t7069 = -1.*t312*t6912*t331;
  t7090 = t7058 + t7069;
  t6381 = t5970*t3018;
  t7118 = t267*t6813;
  t7119 = t232*t6807;
  t7120 = t7118 + t7119;
  t6425 = t1310*t5823;
  t6435 = t1577*t5934;
  t6465 = t5961*t1859;
  t7114 = t1829*t7090;
  t7131 = -1.*t7090*t356;
  t6603 = -1.*t1642*t5961;
  t6614 = -1.*t1728*t6019;
  t7253 = t7120*t530;
  t7274 = t457*t7047;
  t7275 = t7253 + t7274;
  t7286 = t457*t7120;
  t7288 = -1.*t530*t7047;
  t7293 = t7286 + t7288;
  t6672 = t5940*t2085;
  t7161 = -1.*t1829*t7090;
  t7213 = t7090*t599;
  t6706 = t1642*t5940;
  t6710 = t1728*t5985;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=(-0.5*(0.03856*(-1.*t178*t356 - 1.*t433*t558) - 0.004820000000000004*(-1.*t178*t599 - 1.*t433*t715))*var2[1] - 0.5*(0.03856*(t356*t433 - 1.*t178*t558) - 0.004820000000000004*(t433*t599 - 1.*t178*t715))*var2[2])*var2[17];
  p_output1[4]=(-0.5*(-0.004820000000000004*t1005 + 0.03856*t998)*var2[0] - 0.5*(-0.03856*t178*t876 + 0.004820000000000004*t178*t899)*var2[1] - 0.5*(0.03856*t433*t876 - 0.004820000000000004*t433*t899)*var2[2] - 0.5*(0.03856*(t1005*t2085 - 1.*t1087*t2273*t530 + t1982*(-1.*t1101*t1626 - 1.*t1658*t1674 + t1087*t1728*t457 + t1087*t1642*t530) + t1658*(t1005*t1642 + t1674*t1982 + t1626*t715 + t1728*t899)) - 0.004820000000000004*(-1.*t1087*t1922*t530 + t1033*(t1101*t1626 + t1658*t1674 - 1.*t1087*t1728*t457 - 1.*t1087*t1642*t530) + t1859*t998 + t1658*(-1.*t1033*t1674 - 1.*t1626*t558 - 1.*t1728*t876 - 1.*t1642*t998)))*var2[3])*var2[17];
  p_output1[5]=(-0.5*(0.03856*t2349*t457 - 0.004820000000000004*t2390*t457)*var2[0] - 0.5*(0.03856*(t2450*t433 + t178*t2349*t530) - 0.004820000000000004*(t2538*t433 + t178*t2390*t530))*var2[1] - 0.5*(0.03856*(t178*t2450 - 1.*t2349*t433*t530) - 0.004820000000000004*(t178*t2538 - 1.*t2390*t433*t530))*var2[2] - 0.5*(-0.004820000000000004*(t1859*t2349*t457 + t1922*t2743*t457 + t1033*(t2732 + t2829 + t1642*t2743*t457 + t1658*t2763*t457 - 1.*t1728*t2743*t530 - 1.*t1101*t2763*t530) + t1658*(t2853 + t2897 - 1.*t1642*t2349*t457 - 1.*t1033*t2763*t457 + t1728*t2349*t530 + t2763*t530*t558)) + 0.03856*(t2085*t2390*t457 + t2273*t2743*t457 + t1982*(t3055 + t3111 - 1.*t1642*t2743*t457 - 1.*t1658*t2763*t457 + t1728*t2743*t530 + t1101*t2763*t530) + t1658*(t3152 + t3176 + t1642*t2390*t457 + t1982*t2763*t457 - 1.*t1728*t2390*t530 - 1.*t2763*t530*t715)))*var2[3] - 0.5*(-0.004820000000000004*(t2450*t2710 + t2808*t2995 + (t2732 + t1577*t2743 + t1087*t2763 + t2829)*t356 + t1829*(-1.*t1577*t2349 + t2853 + t2897 - 1.*t2763*t552)) + 0.03856*(t2538*t3018 + t2808*t3212 + (-1.*t1577*t2743 - 1.*t1087*t2763 + t3055 + t3111)*t599 + t1829*(t1577*t2390 + t3152 + t3176 + t2763*t691)))*var2[4])*var2[17];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.5*(0.03856*t4126*t457 - 0.004820000000000004*t4162*t457)*var2[0] - 0.5*(0.03856*(t4208*t433 + t178*t4126*t530) - 0.004820000000000004*(t4271*t433 + t178*t4162*t530))*var2[1] - 0.5*(0.03856*(t178*t4208 - 1.*t4126*t433*t530) - 0.004820000000000004*(t178*t4271 - 1.*t4162*t433*t530))*var2[2] - 0.5*(-0.004820000000000004*(t1859*t4126*t457 + t1922*t457*t4709 + t1033*(t4634 + t1642*t457*t4709 + t1658*t457*t4748 + t4863 - 1.*t1728*t4709*t530 - 1.*t1101*t4748*t530) + t1658*(-1.*t1642*t4126*t457 - 1.*t1033*t457*t4748 + t4884 + t4901 + t1728*t4126*t530 + t4748*t530*t558)) + 0.03856*(t2085*t4162*t457 + t2273*t457*t4709 + t1982*(-1.*t1642*t457*t4709 - 1.*t1658*t457*t4748 + t4975 + t5007 + t1728*t4709*t530 + t1101*t4748*t530) + t1658*(t1642*t4162*t457 + t1982*t457*t4748 + t5046 + t5082 - 1.*t1728*t4162*t530 - 1.*t4748*t530*t715)))*var2[3] - 0.5*(-0.004820000000000004*(t2710*t4208 + t2995*t4844 + t356*(t4634 + t1577*t4709 + t1087*t4748 + t4863) + t1829*(-1.*t1577*t4126 + t4884 + t4901 - 1.*t4748*t552)) + 0.03856*(t3018*t4271 + t3212*t4844 + (-1.*t1577*t4709 - 1.*t1087*t4748 + t4975 + t5007)*t599 + t1829*(t1577*t4162 + t5046 + t5082 + t4748*t691)))*var2[4] - 0.5*(-0.004820000000000004*(t1561*t220 - 1.*t1445*t312 + t1044*t3854 + t1071*t3954)*t508 + 0.03856*(-1.*t1561*t220 + t1445*t312 - 1.*t1044*t3854 - 1.*t1071*t3954)*t667)*var2[5])*var2[17];
  p_output1[16]=(t5921 + t5966 + t6085 + t6193 - 0.5*(-0.004820000000000004*(t6465 + t1033*(t6244 + t1658*t6509 + t1101*t6549) + t1658*(t6299 + t6308 - 1.*t1033*t6509 - 1.*t558*t6549 + t6603 + t6614)) + 0.03856*(t1982*(t6400 - 1.*t1658*t6509 - 1.*t1101*t6549) + t6672 + t1658*(t6437 + t6440 + t1982*t6509 + t6706 + t6710 + t6549*t715)))*var2[3] - 0.5*(-0.004820000000000004*(t6194 + t356*(t1087*t6203 + t6244) + t1829*(-1.*t552*t6203 + t6282 - 1.*t508*t6284 + t6297 + t6299 + t6308)) + 0.03856*(t6381 + t599*(-1.*t1087*t6203 + t6400) + t1829*(t6425 + t6435 + t6437 + t6440 + t6284*t667 + t6203*t691)))*var2[4] - 0.5*(-0.004820000000000004*(t508*(t1071*t220*t5411 - 1.*t1044*t312*t5411) + t5837) + 0.03856*(t5829 + (-1.*t1071*t220*t5411 + t1044*t312*t5411)*t667))*var2[5])*var2[17];
  p_output1[17]=(t5921 + t5966 + t6085 + t6193 - 0.5*(-0.004820000000000004*(t6465 + t1033*(t7114 + t1658*t7275 + t1101*t7293) + t1658*(t6299 + t6603 + t6614 + t7131 - 1.*t1033*t7275 - 1.*t558*t7293)) + 0.03856*(t6672 + t1982*(t7161 - 1.*t1658*t7275 - 1.*t1101*t7293) + t1658*(t6437 + t6706 + t6710 + t7213 + t1982*t7275 + t715*t7293)))*var2[3] - 0.5*(-0.004820000000000004*(t6194 + t356*(t1087*t7047 + t7114) + t1829*(t6282 + t6297 + t6299 - 1.*t552*t7047 - 1.*t508*t7120 + t7131)) + 0.03856*(t6381 + t599*(-1.*t1087*t7047 + t7161) + t1829*(t6425 + t6435 + t6437 + t691*t7047 + t667*t7120 + t7213)))*var2[4] - 0.5*(-0.004820000000000004*(t5837 + t508*(t1071*t220*t6912 - 1.*t1044*t312*t6912)) + 0.03856*(t5829 + t667*(-1.*t1071*t220*t6912 + t1044*t312*t6912)))*var2[5] - 0.5*(-0.004820000000000004*(t1239*t221 + 0.194401*t268 + t1211*t268 + t268*t6807 - 1.*t221*t6813) + 0.03856*(0.194401*t221 + t1211*t221 - 1.*t1239*t268 + t221*t6807 + t268*t6813))*var2[16])*var2[17];
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

#include "Ce3_vec18_plane.hh"

namespace SymFunction
{

void Ce3_vec18_plane_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
