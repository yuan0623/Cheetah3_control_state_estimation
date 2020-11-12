/*
 * Automatically Generated from Mathematica.
 * Sun 28 Jul 2019 02:49:57 GMT-04:00
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
  double t151;
  double t69;
  double t81;
  double t128;
  double t186;
  double t198;
  double t356;
  double t595;
  double t684;
  double t641;
  double t644;
  double t874;
  double t880;
  double t889;
  double t741;
  double t754;
  double t767;
  double t816;
  double t653;
  double t672;
  double t700;
  double t704;
  double t1002;
  double t1020;
  double t1026;
  double t706;
  double t732;
  double t857;
  double t873;
  double t940;
  double t959;
  double t974;
  double t993;
  double t1409;
  double t1743;
  double t1782;
  double t1785;
  double t1918;
  double t1934;
  double t1935;
  double t2269;
  double t2271;
  double t2273;
  double t2212;
  double t2233;
  double t2241;
  double t2255;
  double t2327;
  double t2332;
  double t2314;
  double t2317;
  double t2319;
  double t1954;
  double t1967;
  double t1985;
  double t2007;
  double t2046;
  double t2069;
  double t2256;
  double t2280;
  double t2283;
  double t2285;
  double t2286;
  double t2292;
  double t2296;
  double t1445;
  double t1446;
  double t1496;
  double t2145;
  double t2393;
  double t174;
  double t230;
  double t266;
  double t2481;
  double t381;
  double t391;
  double t488;
  double t894;
  double t895;
  double t909;
  double t1031;
  double t1035;
  double t1048;
  double t2122;
  double t2128;
  double t2129;
  double t1060;
  double t1064;
  double t1066;
  double t1085;
  double t1119;
  double t1158;
  double t1225;
  double t1234;
  double t1237;
  double t1325;
  double t1329;
  double t1333;
  double t1498;
  double t1535;
  double t1537;
  double t1647;
  double t1790;
  double t1794;
  double t1899;
  double t1936;
  double t1944;
  double t1987;
  double t2072;
  double t2077;
  double t2937;
  double t2938;
  double t2939;
  double t2941;
  double t2302;
  double t2305;
  double t2320;
  double t2325;
  double t2333;
  double t2340;
  double t2347;
  double t2348;
  double t2349;
  double t2968;
  double t2969;
  double t2976;
  double t2983;
  double t2986;
  double t2989;
  double t2995;
  double t2999;
  double t3000;
  double t3005;
  double t2395;
  double t2404;
  double t2436;
  double t2437;
  double t2442;
  double t2448;
  double t2450;
  double t2451;
  double t2457;
  double t2461;
  double t2468;
  double t2592;
  double t2593;
  double t2598;
  double t2613;
  double t2614;
  double t2626;
  double t2647;
  double t2648;
  double t2662;
  double t2919;
  double t2921;
  double t2922;
  double t3026;
  double t3029;
  double t3031;
  double t2900;
  double t2905;
  double t2906;
  double t3520;
  double t3521;
  double t3526;
  double t3533;
  double t3611;
  double t3631;
  double t3657;
  double t3659;
  double t3922;
  double t3935;
  double t3957;
  double t3890;
  double t3962;
  double t3974;
  double t4008;
  double t4009;
  double t4026;
  double t4031;
  double t4042;
  double t4048;
  double t4089;
  double t4093;
  double t4098;
  double t4103;
  double t4104;
  double t4116;
  double t4136;
  double t4139;
  double t4145;
  double t4168;
  double t4180;
  double t4182;
  double t3798;
  double t3873;
  double t3885;
  double t4002;
  double t4275;
  double t4300;
  double t4308;
  double t4364;
  double t4394;
  double t4057;
  double t4064;
  double t4133;
  double t4195;
  double t4210;
  double t4240;
  double t4241;
  double t4263;
  double t4271;
  double t4322;
  double t4324;
  double t4459;
  double t4465;
  double t4466;
  double t4337;
  double t4400;
  double t4424;
  double t4426;
  double t4432;
  double t2168;
  double t2180;
  double t2183;
  double t4979;
  double t4990;
  double t4997;
  double t5009;
  double t4978;
  double t5024;
  double t5030;
  double t5033;
  double t5061;
  double t5064;
  double t5086;
  double t5088;
  double t5140;
  double t5149;
  double t5151;
  double t5165;
  double t5031;
  double t5225;
  double t5228;
  double t5250;
  double t5328;
  double t5353;
  double t5065;
  double t5076;
  double t5148;
  double t5167;
  double t5170;
  double t5194;
  double t5201;
  double t5204;
  double t5224;
  double t5282;
  double t5300;
  double t2353;
  double t2354;
  double t2362;
  double t4065;
  double t4221;
  double t4265;
  double t4268;
  double t5915;
  double t5925;
  double t5926;
  double t5978;
  double t5984;
  double t5999;
  double t4674;
  double t4678;
  double t4679;
  double t4686;
  double t4709;
  double t4720;
  double t4724;
  double t4725;
  double t4886;
  double t4899;
  double t4908;
  double t4931;
  double t5085;
  double t5172;
  double t5209;
  double t5213;
  double t6321;
  double t6335;
  double t6336;
  double t5506;
  double t5510;
  double t5511;
  double t5522;
  double t5551;
  double t5601;
  double t5617;
  double t5624;
  double t5812;
  double t5823;
  double t5824;
  double t5830;
  double t6517;
  double t6524;
  double t6525;
  double t6673;
  double t6679;
  double t6692;
  double t6852;
  double t6854;
  double t6856;
  double t6865;
  double t6867;
  double t6903;
  double t6908;
  double t6911;
  double t6881;
  double t6886;
  double t6891;
  double t6896;
  double t6898;
  double t6900;
  double t2133;
  double t2151;
  double t7142;
  double t7159;
  double t7163;
  double t7164;
  double t7171;
  double t7190;
  double t7201;
  double t7250;
  double t7253;
  double t7254;
  double t7238;
  double t7246;
  double t7248;
  double t7204;
  double t7205;
  double t7220;
  double t7136;
  double t7605;
  double t7616;
  double t7638;
  double t7673;
  double t7677;
  double t7688;
  double t7693;
  double t7699;
  double t7717;
  double t7266;
  double t7647;
  double t7650;
  double t7662;
  double t7274;
  double t7288;
  double t7750;
  double t7751;
  double t7754;
  double t7691;
  double t7720;
  double t7747;
  double t7331;
  double t7352;
  double t7454;
  double t7458;
  double t4487;
  double t6018;
  double t4499;
  double t4334;
  double t5909;
  double t4450;
  double t4738;
  double t6159;
  double t4782;
  double t4815;
  double t4818;
  double t6233;
  double t5301;
  double t6313;
  double t5416;
  double t5442;
  double t5457;
  double t6400;
  double t5650;
  double t6436;
  double t5674;
  double t5735;
  double t5745;
  double t6480;
  double t8002;
  double t8009;
  double t6021;
  double t5972;
  double t8051;
  double t8064;
  double t8069;
  double t8084;
  double t8085;
  double t6202;
  double t8119;
  double t8141;
  double t8142;
  double t6229;
  double t8164;
  double t8166;
  double t6347;
  double t6390;
  double t8193;
  double t8195;
  double t8196;
  double t8235;
  double t8237;
  double t6446;
  double t6472;
  double t8293;
  double t8299;
  double t8306;
  double t6913;
  double t6929;
  double t6934;
  double t6987;
  double t6991;
  double t7026;
  double t7261;
  double t7268;
  double t7320;
  double t7345;
  double t8782;
  double t7672;
  double t8802;
  double t8804;
  double t7810;
  double t7919;
  double t8846;
  double t8849;
  double t7948;
  double t8859;
  double t8999;
  double t9000;
  double t9002;
  double t9014;
  double t9016;
  double t9023;
  double t9024;
  double t9026;
  double t9141;
  double t9149;
  double t9150;
  double t9154;
  double t9159;
  t151 = Cos(var1[7]);
  t69 = Cos(var1[4]);
  t81 = Cos(var1[5]);
  t128 = Cos(var1[6]);
  t186 = Sin(var1[5]);
  t198 = Sin(var1[6]);
  t356 = Sin(var1[7]);
  t595 = Cos(var1[8]);
  t684 = Sin(var1[8]);
  t641 = -1.*t595;
  t644 = 1. + t641;
  t874 = -1.*t595*t356;
  t880 = -1.*t151*t684;
  t889 = t874 + t880;
  t741 = 0.100689*t644;
  t754 = 0.080689*t595;
  t767 = -0.16*t684;
  t816 = t741 + t754 + t767;
  t653 = -0.20833*t644;
  t672 = -0.36833*t595;
  t700 = 0.02*t684;
  t704 = t653 + t672 + t700;
  t1002 = t151*t595;
  t1020 = -1.*t356*t684;
  t1026 = t1002 + t1020;
  t706 = t595*t704;
  t732 = -0.242889*t684;
  t857 = t816*t684;
  t873 = t706 + t732 + t857;
  t940 = 0.242889*t595;
  t959 = -1.*t595*t816;
  t974 = t704*t684;
  t993 = t940 + t959 + t974;
  t1409 = Sin(var1[4]);
  t1743 = t128*t186*t356;
  t1782 = -1.*t81*t198*t356;
  t1785 = t1743 + t1782;
  t1918 = -1.*t128*t186*t889;
  t1934 = t81*t198*t889;
  t1935 = t1918 + t1934;
  t2269 = -1.*t151*t595;
  t2271 = t356*t684;
  t2273 = t2269 + t2271;
  t2212 = t1409*t1026;
  t2233 = t69*t1935;
  t2241 = t2212 + t2233;
  t2255 = 0.241*t993*t2241;
  t2327 = -0.16*t595;
  t2332 = t2327 + t700;
  t2314 = 0.02*t595;
  t2317 = 0.16*t684;
  t2319 = t2314 + t2317;
  t1954 = t595*t356;
  t1967 = t151*t684;
  t1985 = t1954 + t1967;
  t2007 = -1.*t128*t186*t1026;
  t2046 = t81*t198*t1026;
  t2069 = t2007 + t2046;
  t2256 = t1409*t889;
  t2280 = -1.*t128*t186*t2273;
  t2283 = t81*t198*t2273;
  t2285 = t2280 + t2283;
  t2286 = t69*t2285;
  t2292 = t2256 + t2286;
  t2296 = 0.241*t873*t2292;
  t1445 = -1.*t128*t151*t186;
  t1446 = t81*t151*t198;
  t1496 = t1445 + t1446;
  t2145 = -1.*t1409*t356;
  t2393 = Sin(var1[3]);
  t174 = -1.*t81*t128*t151;
  t230 = -1.*t151*t186*t198;
  t266 = t174 + t230;
  t2481 = Cos(var1[3]);
  t381 = t81*t128*t356;
  t391 = t186*t198*t356;
  t488 = t381 + t391;
  t894 = -1.*t81*t128*t889;
  t895 = -1.*t186*t198*t889;
  t909 = t894 + t895;
  t1031 = -1.*t81*t128*t1026;
  t1035 = -1.*t186*t198*t1026;
  t1048 = t1031 + t1035;
  t2122 = t128*t151*t186;
  t2128 = -1.*t81*t151*t198;
  t2129 = t2122 + t2128;
  t1060 = t81*t128*t151;
  t1064 = t151*t186*t198;
  t1066 = t1060 + t1064;
  t1085 = -1.*t81*t128*t356;
  t1119 = -1.*t186*t198*t356;
  t1158 = t1085 + t1119;
  t1225 = t81*t128*t889;
  t1234 = t186*t198*t889;
  t1237 = t1225 + t1234;
  t1325 = t81*t128*t1026;
  t1329 = t186*t198*t1026;
  t1333 = t1325 + t1329;
  t1498 = -1.*t1409*t1496;
  t1535 = t69*t356;
  t1537 = t1498 + t1535;
  t1647 = t69*t151;
  t1790 = -1.*t1409*t1785;
  t1794 = t1647 + t1790;
  t1899 = t69*t1026;
  t1936 = -1.*t1409*t1935;
  t1944 = t1899 + t1936;
  t1987 = t69*t1985;
  t2072 = -1.*t1409*t2069;
  t2077 = t1987 + t2072;
  t2937 = t2481*t1237;
  t2938 = -1.*t2393*t1944;
  t2939 = t2937 + t2938;
  t2941 = 0.241*t993*t2939;
  t2302 = -0.242889*t595;
  t2305 = t595*t816;
  t2320 = t595*t2319;
  t2325 = -1.*t704*t684;
  t2333 = t2332*t684;
  t2340 = t2302 + t2305 + t2320 + t2325 + t2333;
  t2347 = -1.*t595*t2332;
  t2348 = t2319*t684;
  t2349 = t706 + t2347 + t732 + t857 + t2348;
  t2968 = t81*t128*t2273;
  t2969 = t186*t198*t2273;
  t2976 = t2968 + t2969;
  t2983 = t2481*t2976;
  t2986 = t69*t889;
  t2989 = -1.*t1409*t2285;
  t2995 = t2986 + t2989;
  t2999 = -1.*t2393*t2995;
  t3000 = t2983 + t2999;
  t3005 = 0.241*t873*t3000;
  t2395 = -1.*t69*t1496;
  t2404 = t2395 + t2145;
  t2436 = -1.*t151*t1409;
  t2437 = -1.*t69*t1785;
  t2442 = t2436 + t2437;
  t2448 = -1.*t1409*t1026;
  t2450 = -1.*t69*t1935;
  t2451 = t2448 + t2450;
  t2457 = -1.*t1409*t1985;
  t2461 = -1.*t69*t2069;
  t2468 = t2457 + t2461;
  t2592 = -1.*t128*t186*t356;
  t2593 = t81*t198*t356;
  t2598 = t2592 + t2593;
  t2613 = t128*t186*t889;
  t2614 = -1.*t81*t198*t889;
  t2626 = t2613 + t2614;
  t2647 = t128*t186*t1026;
  t2648 = -1.*t81*t198*t1026;
  t2662 = t2647 + t2648;
  t2919 = t2481*t1158;
  t2921 = -1.*t2393*t1794;
  t2922 = t2919 + t2921;
  t3026 = t2481*t1333;
  t3029 = -1.*t2393*t2077;
  t3031 = t3026 + t3029;
  t2900 = -1.*t1409*t2129;
  t2905 = -1.*t69*t356;
  t2906 = t2900 + t2905;
  t3520 = t2393*t1237;
  t3521 = t2481*t1944;
  t3526 = t3520 + t3521;
  t3533 = 0.241*t993*t3526;
  t3611 = t2393*t2976;
  t3631 = t2481*t2995;
  t3657 = t3611 + t3631;
  t3659 = 0.241*t873*t3657;
  t3922 = -0.04*t151;
  t3935 = 0.04*t356;
  t3957 = t3922 + t3935;
  t3890 = 0.053565*t198;
  t3962 = t128*t3957;
  t3974 = t3890 + t3962;
  t4008 = -1.*t128;
  t4009 = 1. + t4008;
  t4026 = -0.081715*t4009;
  t4031 = -0.13528*t128;
  t4042 = t198*t3957;
  t4048 = t4026 + t4031 + t4042;
  t4089 = t81*t128;
  t4093 = t186*t198;
  t4098 = t4089 + t4093;
  t4103 = -1.*t186*t3974;
  t4104 = t81*t4048;
  t4116 = t4103 + t4104;
  t4136 = -1.*t151;
  t4139 = 1. + t4136;
  t4145 = 0.242889*t4139;
  t4168 = 0.202889*t151;
  t4180 = -0.04*t356;
  t4182 = t4145 + t4168 + t4180;
  t3798 = t128*t186;
  t3873 = -1.*t81*t198;
  t3885 = t3798 + t3873;
  t4002 = t81*t3974;
  t4275 = 0.053565*t128;
  t4300 = -1.*t198*t3957;
  t4308 = t4275 + t4300;
  t4364 = -1.*t186*t4308;
  t4394 = t4002 + t4364;
  t4057 = t186*t4048;
  t4064 = t4002 + t4057;
  t4133 = -1.*t1409*t4116;
  t4195 = t69*t4182;
  t4210 = t4133 + t4195;
  t4240 = t69*t4116;
  t4241 = t1409*t4182;
  t4263 = t4240 + t4241;
  t4271 = t186*t3974;
  t4322 = t81*t4308;
  t4324 = t4271 + t4322;
  t4459 = t69*t1496;
  t4465 = t1409*t356;
  t4466 = t4459 + t4465;
  t4337 = Power(t69,2);
  t4400 = Power(t1409,2);
  t4424 = -1.*t81*t128;
  t4426 = -1.*t186*t198;
  t4432 = t4424 + t4426;
  t2168 = t151*t1409;
  t2180 = t69*t1785;
  t2183 = t2168 + t2180;
  t4979 = 0.242889*t356;
  t4990 = -1.*t356*t816;
  t4997 = t151*t704;
  t5009 = t4979 + t4990 + t4997;
  t4978 = 0.032875*t198;
  t5024 = t128*t5009;
  t5030 = t4978 + t5024;
  t5033 = -0.11459*t128;
  t5061 = t198*t5009;
  t5064 = t4026 + t5033 + t5061;
  t5086 = -1.*t186*t5030;
  t5088 = t81*t5064;
  t5140 = t5086 + t5088;
  t5149 = t151*t816;
  t5151 = t356*t704;
  t5165 = t4145 + t5149 + t5151;
  t5031 = t81*t5030;
  t5225 = 0.032875*t128;
  t5228 = -1.*t198*t5009;
  t5250 = t5225 + t5228;
  t5328 = -1.*t186*t5250;
  t5353 = t5031 + t5328;
  t5065 = t186*t5064;
  t5076 = t5031 + t5065;
  t5148 = -1.*t1409*t5140;
  t5167 = t69*t5165;
  t5170 = t5148 + t5167;
  t5194 = t69*t5140;
  t5201 = t1409*t5165;
  t5204 = t5194 + t5201;
  t5224 = t186*t5030;
  t5282 = t81*t5250;
  t5300 = t5224 + t5282;
  t2353 = t1409*t1985;
  t2354 = t69*t2069;
  t2362 = t2353 + t2354;
  t4065 = -1.*t3885*t4064;
  t4221 = t1409*t4098*t4210;
  t4265 = -1.*t69*t4098*t4263;
  t4268 = t4065 + t4221 + t4265;
  t5915 = -1.*t81*t3974;
  t5925 = -1.*t186*t4048;
  t5926 = t5915 + t5925;
  t5978 = -1.*t128*t186;
  t5984 = t81*t198;
  t5999 = t5978 + t5984;
  t4674 = t1066*t4064;
  t4678 = t4210*t1537;
  t4679 = t4263*t4466;
  t4686 = t4674 + t4678 + t4679;
  t4709 = t3885*t4064;
  t4720 = -1.*t1409*t4098*t4210;
  t4724 = t69*t4098*t4263;
  t4725 = t4709 + t4720 + t4724;
  t4886 = -1.*t4064*t1158;
  t4899 = -1.*t4263*t2183;
  t4908 = -1.*t4210*t1794;
  t4931 = t4886 + t4899 + t4908;
  t5085 = t3885*t5076;
  t5172 = -1.*t1409*t4098*t5170;
  t5209 = t69*t4098*t5204;
  t5213 = t5085 + t5172 + t5209;
  t6321 = -1.*t81*t5030;
  t6335 = -1.*t186*t5064;
  t6336 = t6321 + t6335;
  t5506 = -1.*t5076*t1237;
  t5510 = -1.*t5204*t2241;
  t5511 = -1.*t5170*t1944;
  t5522 = t5506 + t5510 + t5511;
  t5551 = -1.*t3885*t5076;
  t5601 = t1409*t4098*t5170;
  t5617 = -1.*t69*t4098*t5204;
  t5624 = t5551 + t5601 + t5617;
  t5812 = t5076*t1333;
  t5823 = t5204*t2362;
  t5824 = t5170*t2077;
  t5830 = t5812 + t5823 + t5824;
  t6517 = -1.*t69*t4116;
  t6524 = -1.*t1409*t4182;
  t6525 = t6517 + t6524;
  t6673 = -1.*t69*t5140;
  t6679 = -1.*t1409*t5165;
  t6692 = t6673 + t6679;
  t6852 = 0.04*t151;
  t6854 = t6852 + t3935;
  t6856 = -1.*t128*t186*t6854;
  t6865 = t81*t198*t6854;
  t6867 = t6856 + t6865;
  t6903 = t81*t128*t6854;
  t6908 = t186*t198*t6854;
  t6911 = t6903 + t6908;
  t6881 = -1.*t1409*t6867;
  t6886 = t69*t3957;
  t6891 = t6881 + t6886;
  t6896 = t69*t6867;
  t6898 = t1409*t3957;
  t6900 = t6896 + t6898;
  t2133 = t69*t2129;
  t2151 = t2133 + t2145;
  t7142 = 0.242889*t151;
  t7159 = -1.*t151*t816;
  t7163 = -1.*t356*t704;
  t7164 = t7142 + t7159 + t7163;
  t7171 = -1.*t128*t186*t7164;
  t7190 = t81*t198*t7164;
  t7201 = t7171 + t7190;
  t7250 = t81*t128*t7164;
  t7253 = t186*t198*t7164;
  t7254 = t7250 + t7253;
  t7238 = t69*t7201;
  t7246 = t1409*t5009;
  t7248 = t7238 + t7246;
  t7204 = -1.*t1409*t7201;
  t7205 = t69*t5009;
  t7220 = t7204 + t7205;
  t7136 = t5624*t2241;
  t7605 = -1.*t356*t2332;
  t7616 = t151*t2319;
  t7638 = t7605 + t7616;
  t7673 = -1.*t128*t186*t7638;
  t7677 = t81*t198*t7638;
  t7688 = t7673 + t7677;
  t7693 = t151*t2332;
  t7699 = t356*t2319;
  t7717 = t7693 + t7699;
  t7266 = t5076*t1237;
  t7647 = t81*t128*t7638;
  t7650 = t186*t198*t7638;
  t7662 = t7647 + t7650;
  t7274 = t5204*t2241;
  t7288 = t5170*t1944;
  t7750 = t69*t7688;
  t7751 = t1409*t7717;
  t7754 = t7750 + t7751;
  t7691 = -1.*t1409*t7688;
  t7720 = t69*t7717;
  t7747 = t7691 + t7720;
  t7331 = t5213*t2292;
  t7352 = -1.*t5076*t2976;
  t7454 = -1.*t5204*t2292;
  t7458 = -1.*t5170*t2995;
  t4487 = t1066*t4324;
  t6018 = t1066*t4116;
  t4499 = t2129*t4064;
  t4334 = -1.*t3885*t4324;
  t5909 = -1.*t3885*t4116;
  t4450 = -1.*t4432*t4064;
  t4738 = t3885*t4324;
  t6159 = t3885*t4116;
  t4782 = t4432*t4064;
  t4815 = -1.*t4064*t2598;
  t4818 = -1.*t4324*t1158;
  t6233 = -1.*t4116*t1158;
  t5301 = t3885*t5300;
  t6313 = t3885*t5140;
  t5416 = t4432*t5076;
  t5442 = -1.*t5076*t2626;
  t5457 = -1.*t5300*t1237;
  t6400 = -1.*t5140*t1237;
  t5650 = -1.*t3885*t5300;
  t6436 = -1.*t3885*t5140;
  t5674 = -1.*t4432*t5076;
  t5735 = t5076*t2662;
  t5745 = t5300*t1333;
  t6480 = t5140*t1333;
  t8002 = -1.*t4098*t4116;
  t8009 = t8002 + t4065;
  t6021 = t1496*t4064;
  t5972 = -1.*t4098*t4064;
  t8051 = t1496*t4116;
  t8064 = t4182*t356;
  t8069 = t8051 + t4674 + t8064;
  t8084 = t4098*t4116;
  t8085 = t8084 + t4709;
  t6202 = t4098*t4064;
  t8119 = -1.*t151*t4182;
  t8141 = -1.*t4116*t1785;
  t8142 = t8119 + t8141 + t4886;
  t6229 = -1.*t4064*t1785;
  t8164 = t4098*t5140;
  t8166 = t8164 + t5085;
  t6347 = t4098*t5076;
  t6390 = -1.*t5076*t1935;
  t8193 = -1.*t5165*t1026;
  t8195 = -1.*t5140*t1935;
  t8196 = t8193 + t8195 + t5506;
  t8235 = -1.*t4098*t5140;
  t8237 = t8235 + t5551;
  t6446 = -1.*t4098*t5076;
  t6472 = t5076*t2069;
  t8293 = t5165*t1985;
  t8299 = t5140*t2069;
  t8306 = t8293 + t8299 + t5812;
  t6913 = -1.*t3885*t6911;
  t6929 = t1066*t6911;
  t6934 = t4064*t1158;
  t6987 = t3885*t6911;
  t6991 = -1.*t266*t4064;
  t7026 = -1.*t6911*t1158;
  t7261 = -1.*t3885*t7254;
  t7268 = t7254*t1333;
  t7320 = t3885*t7254;
  t7345 = -1.*t7254*t1237;
  t8782 = t8237*t1237;
  t7672 = -1.*t3885*t7662;
  t8802 = t5165*t1026;
  t8804 = t5140*t1935;
  t7810 = t7662*t1333;
  t7919 = t3885*t7662;
  t8846 = t8166*t2976;
  t8849 = -1.*t5165*t889;
  t7948 = -1.*t7662*t1237;
  t8859 = -1.*t5140*t2285;
  t8999 = t198*t5030;
  t9000 = -1.*t128*t5064;
  t9002 = t8999 + t9000;
  t9014 = 0.241*t9002*t1026*t873;
  t9016 = -1.*t198*t5030;
  t9023 = t128*t5064;
  t9024 = t9016 + t9023;
  t9026 = 0.241*t9024*t889*t993;
  t9141 = 0.007922875*t889*t993;
  t9149 = -0.11459*t1026;
  t9150 = -0.081715*t2273;
  t9154 = t9149 + t9150;
  t9159 = 0.241*t873*t9154;
  p_output1[0]=var2[7]*(-0.5*(0.06108*t1537 - 0.06108*t1794 + 0.241*t1944*t873 + 0.241*t2077*t993)*var2[4] - 0.5*(0.06108*t266*t69 - 0.06108*t488*t69 + 0.241*t69*t873*t909 + 0.241*t1048*t69*t993)*var2[5] - 0.5*(0.06108*t1066*t69 - 0.06108*t1158*t69 + 0.241*t1237*t69*t873 + 0.241*t1333*t69*t993)*var2[6] - 0.5*(-0.06108*t2151 + 0.06108*t2183 + t2255 + t2296)*var2[7] - 0.5*(t2255 + t2296 + 0.241*t2241*t2340 + 0.241*t2349*t2362)*var2[8]);
  p_output1[1]=var2[7]*(-0.5*(0.06108*(-1.*t1066*t2393 - 1.*t1537*t2481) - 0.06108*(-1.*t1158*t2393 - 1.*t1794*t2481) + 0.241*(-1.*t1237*t2393 - 1.*t1944*t2481)*t873 + 0.241*(-1.*t1333*t2393 - 1.*t2077*t2481)*t993)*var2[3] - 0.5*(-0.06108*t2393*t2404 + 0.06108*t2393*t2442 - 0.241*t2393*t2451*t873 - 0.241*t2393*t2468*t993)*var2[4] - 0.5*(0.06108*(t1496*t2481 + t1409*t2393*t266) - 0.06108*(t1785*t2481 + t1409*t2393*t488) + 0.241*t873*(t1935*t2481 + t1409*t2393*t909) + 0.241*(t1048*t1409*t2393 + t2069*t2481)*t993)*var2[5] - 0.5*(0.06108*(t1066*t1409*t2393 + t2129*t2481) - 0.06108*(t1158*t1409*t2393 + t2481*t2598) + 0.241*(t1237*t1409*t2393 + t2481*t2626)*t873 + 0.241*(t1333*t1409*t2393 + t2481*t2662)*t993)*var2[6] - 0.5*(-0.06108*(t2481*t266 - 1.*t2393*t2906) + 0.06108*t2922 + t2941 + t3005)*var2[7] - 0.5*(0.241*t2340*t2939 + t2941 + t3005 + 0.241*t2349*t3031)*var2[8]);
  p_output1[2]=var2[7]*(-0.5*(0.06108*(-1.*t1537*t2393 + t1066*t2481) - 0.06108*t2922 + 0.241*t2939*t873 + 0.241*t3031*t993)*var2[3] - 0.5*(0.06108*t2404*t2481 - 0.06108*t2442*t2481 + 0.241*t2451*t2481*t873 + 0.241*t2468*t2481*t993)*var2[4] - 0.5*(0.06108*(t1496*t2393 - 1.*t1409*t2481*t266) - 0.06108*(t1785*t2393 - 1.*t1409*t2481*t488) + 0.241*t873*(t1935*t2393 - 1.*t1409*t2481*t909) + 0.241*(t2069*t2393 - 1.*t1048*t1409*t2481)*t993)*var2[5] - 0.5*(0.06108*(t2129*t2393 - 1.*t1066*t1409*t2481) - 0.06108*(-1.*t1158*t1409*t2481 + t2393*t2598) + 0.241*(-1.*t1237*t1409*t2481 + t2393*t2626)*t873 + 0.241*(-1.*t1333*t1409*t2481 + t2393*t2662)*t993)*var2[6] - 0.5*(0.06108*(t1158*t2393 + t1794*t2481) - 0.06108*(t2393*t266 + t2481*t2906) + t3533 + t3659)*var2[7] - 0.5*(0.241*t2349*(t1333*t2393 + t2077*t2481) + 0.241*t2340*t3526 + t3533 + t3659)*var2[8]);
  p_output1[3]=var2[7]*(-0.5*(-0.06108*(t1537*t4268 - 1.*t1409*t4098*t4686 + t4466*(t1409*t4098*t4263 + t1409*t4098*t6525) + t4098*(t2404*t4210 + t1537*t4263 + t4210*t4466 + t1537*t6525)*t69) + 0.06108*(t1794*t4725 - 1.*t1409*t4098*t4931 + t2183*(-1.*t1409*t4098*t4263 - 1.*t1409*t4098*t6525) + t4098*(-1.*t2183*t4210 - 1.*t2442*t4210 - 1.*t1794*t4263 - 1.*t1794*t6525)*t69) + 0.241*(t2077*t5624 - 1.*t1409*t4098*t5830 + t2362*(t1409*t4098*t5204 + t1409*t4098*t6692) + t4098*(t2362*t5170 + t2468*t5170 + t2077*t5204 + t2077*t6692)*t69)*t873 + 0.241*(t1944*t5213 - 1.*t1409*t4098*t5522 + t2241*(-1.*t1409*t4098*t5204 - 1.*t1409*t4098*t6692) + t4098*(-1.*t2241*t5170 - 1.*t2451*t5170 - 1.*t1944*t5204 - 1.*t1944*t6692)*t69)*t993)*var2[4] - 0.5*(-0.06108*(t266*t4268*t69 + t4686*t5999*t69 + t4098*t69*(-1.*t1409*t266*t4210 - 1.*t1409*t1537*t5926 + t6018 + t6021 + t266*t4263*t69 + t4466*t5926*t69) + t4466*(t5909 - 1.*t4098*t4337*t5926 - 1.*t4098*t4400*t5926 + t5972 + t1409*t4210*t5999 - 1.*t4263*t5999*t69)) + 0.06108*(t4725*t488*t69 + t4931*t5999*t69 + t4098*t69*(t1409*t4210*t488 + t1409*t1794*t5926 + t6229 + t6233 - 1.*t4263*t488*t69 - 1.*t2183*t5926*t69) + t2183*(t4098*t4337*t5926 + t4098*t4400*t5926 - 1.*t1409*t4210*t5999 + t6159 + t6202 + t4263*t5999*t69)) + 0.241*(t1048*t5624*t69 + t5830*t5999*t69 + t2362*(t1409*t5170*t5999 - 1.*t4098*t4337*t6336 - 1.*t4098*t4400*t6336 + t6436 + t6446 - 1.*t5204*t5999*t69) + t4098*t69*(-1.*t1048*t1409*t5170 - 1.*t1409*t2077*t6336 + t6472 + t6480 + t1048*t5204*t69 + t2362*t6336*t69))*t873 + 0.241*(t5522*t5999*t69 + t2241*(-1.*t1409*t5170*t5999 + t6313 + t4098*t4337*t6336 + t4098*t4400*t6336 + t6347 + t5204*t5999*t69) + t5213*t69*t909 + t4098*t69*(t1409*t1944*t6336 + t6390 + t6400 - 1.*t2241*t6336*t69 + t1409*t5170*t909 - 1.*t5204*t69*t909))*t993)*var2[5] - 0.5*(0.06108*(t1158*t4725*t69 + t3885*t4931*t69 + t2183*(-1.*t1409*t3885*t4210 + t4098*t4337*t4394 + t4098*t4394*t4400 + t4738 + t4782 + t3885*t4263*t69) + t4098*t69*(t1158*t1409*t4210 + t1409*t1794*t4394 + t4815 + t4818 - 1.*t1158*t4263*t69 - 1.*t2183*t4394*t69)) - 0.06108*(t1066*t4268*t69 + t3885*t4686*t69 + t4466*(t1409*t3885*t4210 + t4334 - 1.*t4098*t4337*t4394 - 1.*t4098*t4394*t4400 + t4450 - 1.*t3885*t4263*t69) + t4098*t69*(-1.*t1066*t1409*t4210 - 1.*t1409*t1537*t4394 + t4487 + t4499 + t1066*t4263*t69 + t4394*t4466*t69)) + 0.241*(t1333*t5624*t69 + t3885*t5830*t69 + t2362*(t1409*t3885*t5170 - 1.*t4098*t4337*t5353 - 1.*t4098*t4400*t5353 + t5650 + t5674 - 1.*t3885*t5204*t69) + t4098*t69*(-1.*t1333*t1409*t5170 - 1.*t1409*t2077*t5353 + t5735 + t5745 + t1333*t5204*t69 + t2362*t5353*t69))*t873 + 0.241*(t1237*t5213*t69 + t3885*t5522*t69 + t2241*(-1.*t1409*t3885*t5170 + t5301 + t4098*t4337*t5353 + t4098*t4400*t5353 + t5416 + t3885*t5204*t69) + t4098*t69*(t1237*t1409*t5170 + t1409*t1944*t5353 + t5442 + t5457 - 1.*t1237*t5204*t69 - 1.*t2241*t5353*t69))*t993)*var2[6] - 0.5*(-0.06108*(t2183*t4268 + t4466*(t1409*t4098*t6891 - 1.*t4098*t69*t6900 + t6913) + t4098*t69*(t1794*t4210 + t2183*t4263 + t1537*t6891 + t4466*t6900 + t6929 + t6934)) + 0.06108*(t2151*t4725 + t2183*(-1.*t1409*t4098*t6891 + t4098*t69*t6900 + t6987) + t4098*t69*(-1.*t2906*t4210 - 1.*t2151*t4263 - 1.*t1794*t6891 - 1.*t2183*t6900 + t6991 + t7026)) + 0.241*(t7136 + t2362*(t1409*t4098*t7220 - 1.*t4098*t69*t7248 + t7261) + t4098*t69*(t2077*t7220 + t2362*t7248 + t7266 + t7268 + t7274 + t7288))*t873 + 0.241*(t2241*(-1.*t1409*t4098*t7220 + t4098*t69*t7248 + t7320) + t7331 + t4098*t69*(-1.*t1944*t7220 - 1.*t2241*t7248 + t7345 + t7352 + t7454 + t7458))*t993)*var2[7] - 0.5*(0.241*t2349*(t2241*t5213 + t4098*t5522*t69) + 0.241*t2340*(t2362*t5624 + t4098*t5830*t69) + 0.241*(t7136 + t2362*(t7672 + t1409*t4098*t7747 - 1.*t4098*t69*t7754) + t4098*t69*(t7266 + t7274 + t7288 + t2077*t7747 + t2362*t7754 + t7810))*t873 + 0.241*(t7331 + t2241*(-1.*t1409*t4098*t7747 + t4098*t69*t7754 + t7919) + t4098*t69*(t7352 + t7454 + t7458 - 1.*t1944*t7747 - 1.*t2241*t7754 + t7948))*t993)*var2[8]);
  p_output1[4]=var2[7]*(-0.5*(-0.06108*(t1066*(t5909 - 1.*t4098*t5926 + t5972 - 1.*t4116*t5999) + t3885*(t266*t4116 + t1496*t5926 + t6018 + t6021) + t1496*t8009 + t4098*t8069) + 0.06108*(t1158*(t4098*t5926 + t4116*t5999 + t6159 + t6202) + t3885*(-1.*t4116*t488 - 1.*t1785*t5926 + t6229 + t6233) + t1785*t8085 + t4098*t8142) + 0.241*(t1333*(-1.*t5140*t5999 - 1.*t4098*t6336 + t6436 + t6446) + t3885*(t1048*t5140 + t2069*t6336 + t6472 + t6480) + t2069*t8237 + t4098*t8306)*t873 + 0.241*(t1237*(t5140*t5999 + t6313 + t4098*t6336 + t6347) + t1935*t8166 + t4098*t8196 + t3885*(-1.*t1935*t6336 + t6390 + t6400 - 1.*t5140*t909))*t993)*var2[5] - 0.5*(-0.06108*(t1066*(t4334 - 1.*t4098*t4394 + t4450 + t5909) + t3885*(t1496*t4394 + t4487 + t4499 + t6018) + t2129*t8009 + t4432*t8069) + 0.06108*(t1158*(t4098*t4394 + t4738 + t4782 + t6159) + t3885*(-1.*t1785*t4394 + t4815 + t4818 + t6233) + t2598*t8085 + t4432*t8142) + 0.241*(t1333*(-1.*t4098*t5353 + t5650 + t5674 + t6436) + t3885*(t2069*t5353 + t5735 + t5745 + t6480) + t2662*t8237 + t4432*t8306)*t873 + 0.241*(t1237*(t5301 + t4098*t5353 + t5416 + t6313) + t3885*(-1.*t1935*t5353 + t5442 + t5457 + t6400) + t2626*t8166 + t4432*t8196)*t993)*var2[6] - 0.5*(-0.06108*(t1066*(-1.*t4098*t6867 + t6913) + t3885*(t356*t3957 + t1785*t4116 + t151*t4182 + t1496*t6867 + t6929 + t6934) + t1158*t8009) + 0.06108*(t1158*(t4098*t6867 + t6987) + t3885*(-1.*t151*t3957 - 1.*t2129*t4116 - 1.*t1785*t6867 + t6991 + t7026 + t8064) + t266*t8085) + 0.241*t873*(t1333*(-1.*t4098*t7201 + t7261) + t8782 + t3885*(t1985*t5009 + t2069*t7201 + t7266 + t7268 + t8802 + t8804)) + 0.241*(t1237*(t4098*t7201 + t7320) + t8846 + t3885*(-1.*t1026*t5009 - 1.*t1935*t7201 + t7345 + t7352 + t8849 + t8859))*t993)*var2[7] - 0.5*(0.241*t2349*(t1237*t8166 + t3885*t8196) + 0.241*t2340*(t1333*t8237 + t3885*t8306) + 0.241*t873*(t1333*(t7672 - 1.*t4098*t7688) + t8782 + t3885*(t7266 + t2069*t7688 + t1985*t7717 + t7810 + t8802 + t8804)) + 0.241*(t1237*(t4098*t7688 + t7919) + t8846 + t3885*(t7352 - 1.*t1935*t7688 - 1.*t1026*t7717 + t7948 + t8849 + t8859))*t993)*var2[8]);
  p_output1[5]=var2[7]*(-0.5*(0.06108*t151*(-1.*t198*t4048 - 1.*t198*t4308) - 0.06108*t356*(t198*t4048 + t198*t4308) + 0.241*t1985*(t198*t5064 + t198*t5250)*t873 + 0.241*t1026*(-1.*t198*t5064 - 1.*t198*t5250)*t993)*var2[6] - 0.5*(-0.06108*t151*(t198*t3974 - 1.*t128*t4048) - 0.06108*t356*(-1.*t198*t3974 + t128*t4048) + t9014 + t9026)*var2[7] - 0.5*(0.241*t1985*t2340*t9002 + t9014 + 0.241*t1026*t2349*t9024 + t9026)*var2[8]);
  p_output1[6]=var2[7]*(-0.5*(0.0032717502*t151 - 0.0032717502*t356 + t9141 + t9159)*var2[7] - 0.5*(0.007922875*t1026*t2349 + 0.241*t2340*(-0.11459*t1985 - 0.081715*t889) + t9141 + t9159)*var2[8]);
  p_output1[7]=-0.5*(0.482*t2340*t873 + 0.482*t2349*t993)*var2[7]*var2[8];
  p_output1[8]=-0.5*(-0.03856*t2340 + 0.00482*t2349)*var2[7]*var2[8];
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

#include "Ce1_vec8_plane.hh"

namespace SymFunction
{

void Ce1_vec8_plane_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
