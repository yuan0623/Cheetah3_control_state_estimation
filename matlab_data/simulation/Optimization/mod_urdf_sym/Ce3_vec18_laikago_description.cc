/*
 * Automatically Generated from Mathematica.
 * Tue 10 Dec 2019 16:02:59 GMT-05:00
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
  double t4015;
  double t2375;
  double t3459;
  double t4053;
  double t3773;
  double t4123;
  double t4228;
  double t2239;
  double t4612;
  double t4964;
  double t5318;
  double t2346;
  double t5337;
  double t2235;
  double t5622;
  double t5658;
  double t5950;
  double t5967;
  double t6353;
  double t6363;
  double t6378;
  double t4611;
  double t5363;
  double t5406;
  double t5966;
  double t5968;
  double t6043;
  double t6212;
  double t6214;
  double t6264;
  double t6339;
  double t6425;
  double t6476;
  double t6943;
  double t7049;
  double t7078;
  double t7079;
  double t7097;
  double t7099;
  double t8866;
  double t8928;
  double t8929;
  double t9162;
  double t9167;
  double t9184;
  double t17993;
  double t17994;
  double t18069;
  double t18562;
  double t18566;
  double t18592;
  double t18596;
  double t18597;
  double t18605;
  double t18667;
  double t18705;
  double t18745;
  double t18817;
  double t18818;
  double t18561;
  double t18627;
  double t18825;
  double t19065;
  double t18540;
  double t19080;
  double t19117;
  double t19122;
  double t19124;
  double t19143;
  double t19146;
  double t19149;
  double t19154;
  double t19195;
  double t19196;
  double t19198;
  double t19234;
  double t19236;
  double t19241;
  double t19248;
  double t19264;
  double t19277;
  double t19359;
  double t19373;
  double t19376;
  double t19350;
  double t19355;
  double t19358;
  double t19337;
  double t19338;
  double t19339;
  double t18491;
  double t18518;
  double t18529;
  double t19119;
  double t19295;
  double t19298;
  double t19491;
  double t19523;
  double t19529;
  double t19378;
  double t19382;
  double t19383;
  double t19645;
  double t19650;
  double t19657;
  double t19919;
  double t19932;
  double t19939;
  double t19901;
  double t19909;
  double t19914;
  double t19533;
  double t20190;
  double t20196;
  double t20205;
  double t19586;
  double t19682;
  double t19750;
  double t20217;
  double t19538;
  double t19542;
  double t19545;
  double t20257;
  double t20282;
  double t19606;
  double t19608;
  double t19610;
  double t20420;
  double t19686;
  double t19691;
  double t19694;
  double t20506;
  double t20509;
  double t19751;
  double t19766;
  double t19784;
  double t20384;
  double t21074;
  double t21075;
  double t21077;
  double t21086;
  double t21087;
  double t20452;
  double t20142;
  double t20325;
  double t25073;
  double t25075;
  double t25084;
  double t25250;
  double t25254;
  double t25562;
  double t20145;
  double t20188;
  double t23033;
  double t23384;
  double t23740;
  double t23742;
  double t20346;
  double t20373;
  double t20394;
  double t20396;
  double t27040;
  double t21083;
  double t21096;
  double t27044;
  double t21446;
  double t21448;
  double t20456;
  double t20484;
  double t24867;
  double t24895;
  double t24896;
  double t27042;
  double t27076;
  double t27382;
  double t27385;
  double t27501;
  double t27086;
  double t27094;
  double t27546;
  double t27573;
  double t27574;
  double t27622;
  double t27623;
  double t27628;
  double t24930;
  double t24932;
  double t24944;
  double t27118;
  double t27148;
  double t27652;
  double t27655;
  double t27664;
  double t27217;
  double t27223;
  double t27879;
  double t27880;
  double t27881;
  double t20922;
  double t20931;
  double t27981;
  double t27983;
  double t28010;
  double t28042;
  double t21702;
  double t21821;
  double t27975;
  double t28064;
  double t28147;
  double t28149;
  double t28151;
  double t8635;
  double t8645;
  double t8661;
  double t28189;
  double t28190;
  double t28193;
  double t28206;
  double t28207;
  double t28211;
  double t27939;
  double t28048;
  double t28369;
  double t28373;
  double t28385;
  double t28464;
  double t28471;
  double t28473;
  double t28093;
  double t28100;
  double t28460;
  double t28510;
  double t28515;
  double t28805;
  double t28807;
  double t28808;
  double t28811;
  double t28813;
  double t28877;
  double t28145;
  double t28156;
  double t28158;
  double t28581;
  double t28606;
  double t28610;
  double t29289;
  double t29308;
  double t29142;
  double t29144;
  double t29145;
  double t27878;
  double t27883;
  double t27890;
  double t27899;
  double t27912;
  double t27916;
  double t27920;
  double t27928;
  double t27929;
  double t27937;
  double t27969;
  double t28066;
  double t29569;
  double t29570;
  double t29571;
  double t28092;
  double t28097;
  double t29534;
  double t29536;
  double t29555;
  double t28104;
  double t28139;
  double t28160;
  double t28162;
  double t28165;
  double t28166;
  double t28168;
  double t28170;
  double t28175;
  double t28197;
  double t28216;
  double t28218;
  double t28220;
  double t28224;
  double t28247;
  double t28251;
  double t28252;
  double t28253;
  double t28258;
  double t28260;
  double t28262;
  double t28290;
  double t28297;
  double t28498;
  double t29587;
  double t28501;
  double t29878;
  double t29885;
  double t29889;
  double t29862;
  double t29864;
  double t29866;
  double t28601;
  double t29670;
  double t28611;
  double t28773;
  double t28803;
  double t29891;
  double t29934;
  double t28890;
  double t28891;
  double t30125;
  double t30127;
  double t30133;
  double t30173;
  double t30250;
  double t30267;
  double t28971;
  double t30024;
  double t30076;
  double t29054;
  double t29056;
  t4015 = Cos(var1[16]);
  t2375 = Cos(var1[17]);
  t3459 = Sin(var1[16]);
  t4053 = Sin(var1[17]);
  t3773 = -1.*t2375*t3459;
  t4123 = -1.*t4015*t4053;
  t4228 = t3773 + t4123;
  t2239 = Cos(var1[5]);
  t4612 = t4015*t2375;
  t4964 = -1.*t3459*t4053;
  t5318 = t4612 + t4964;
  t2346 = Sin(var1[15]);
  t5337 = Sin(var1[5]);
  t2235 = Sin(var1[3]);
  t5622 = Cos(var1[3]);
  t5658 = Cos(var1[15]);
  t5950 = Cos(var1[4]);
  t5967 = Sin(var1[4]);
  t6353 = t2375*t3459;
  t6363 = t4015*t4053;
  t6378 = t6353 + t6363;
  t4611 = -1.*t2239*t2346*t4228;
  t5363 = t5318*t5337;
  t5406 = t4611 + t5363;
  t5966 = t5658*t5950*t4228;
  t5968 = t2239*t5318;
  t6043 = t2346*t4228*t5337;
  t6212 = t5968 + t6043;
  t6214 = -1.*t5967*t6212;
  t6264 = t5966 + t6214;
  t6339 = -1.*t2239*t2346*t5318;
  t6425 = t6378*t5337;
  t6476 = t6339 + t6425;
  t6943 = t5658*t5950*t5318;
  t7049 = t2239*t6378;
  t7078 = t2346*t5318*t5337;
  t7079 = t7049 + t7078;
  t7097 = -1.*t5967*t7079;
  t7099 = t6943 + t7097;
  t8866 = -1.*t5658*t4228*t5967;
  t8928 = -1.*t5950*t6212;
  t8929 = t8866 + t8928;
  t9162 = -1.*t5658*t5318*t5967;
  t9167 = -1.*t5950*t7079;
  t9184 = t9162 + t9167;
  t17993 = t5950*t2346;
  t17994 = t5658*t5967*t5337;
  t18069 = t17993 + t17994;
  t18562 = -1.*t2375;
  t18566 = 1. + t18562;
  t18592 = -0.21935*t18566;
  t18596 = -0.221546*t2375;
  t18597 = -0.12338*t4053;
  t18605 = t18592 + t18596 + t18597;
  t18667 = -1. + t2375;
  t18705 = 0.25*t18667;
  t18745 = -0.37338*t2375;
  t18817 = 0.002196*t4053;
  t18818 = t18705 + t18745 + t18817;
  t18561 = -0.21935*t3459;
  t18627 = -1.*t3459*t18605;
  t18825 = t4015*t18818;
  t19065 = t18561 + t18627 + t18825;
  t18540 = 0.036619*t2346;
  t19080 = t5658*t19065;
  t19117 = t18540 + t19080;
  t19122 = -1.*t4015;
  t19124 = 1. + t19122;
  t19143 = -0.21935*t19124;
  t19146 = t4015*t18605;
  t19149 = t3459*t18818;
  t19154 = t19143 + t19146 + t19149;
  t19195 = t2239*t19154;
  t19196 = -1.*t5658;
  t19198 = 1. + t19196;
  t19234 = 0.0875*t19198;
  t19236 = 0.124119*t5658;
  t19241 = -1.*t2346*t19065;
  t19248 = t19234 + t19236 + t19241;
  t19264 = -1.*t19248*t5337;
  t19277 = t19195 + t19264;
  t19359 = t5950*t19117;
  t19373 = -1.*t5967*t19277;
  t19376 = t19359 + t19373;
  t19350 = t2346*t5967;
  t19355 = -1.*t5658*t5950*t5337;
  t19358 = t19350 + t19355;
  t19337 = t19117*t5967;
  t19338 = t5950*t19277;
  t19339 = t19337 + t19338;
  t18491 = t5658*t4228*t5967;
  t18518 = t5950*t6212;
  t18529 = t18491 + t18518;
  t19119 = -1.*t19117*t5967;
  t19295 = -1.*t5950*t19277;
  t19298 = t19119 + t19295;
  t19491 = t2239*t19248;
  t19523 = t19154*t5337;
  t19529 = t19491 + t19523;
  t19378 = -1.*t2346*t5967;
  t19382 = t5658*t5950*t5337;
  t19383 = t19378 + t19382;
  t19645 = t5658*t5318*t5967;
  t19650 = t5950*t7079;
  t19657 = t19645 + t19650;
  t19919 = t2239*t2346*t4228;
  t19932 = -1.*t5318*t5337;
  t19939 = t19919 + t19932;
  t19901 = t2239*t2346*t5318;
  t19909 = -1.*t6378*t5337;
  t19914 = t19901 + t19909;
  t19533 = t5658*t2239*t19529;
  t20190 = -1.*t2239*t19248;
  t20196 = -1.*t19154*t5337;
  t20205 = t20190 + t20196;
  t19586 = -1.*t19529*t5406;
  t19682 = -1.*t5658*t2239*t19529;
  t19750 = t19529*t6476;
  t20217 = -1.*t5658*t5337*t19529;
  t19538 = t19358*t19339;
  t19542 = t18069*t19376;
  t19545 = t19533 + t19538 + t19542;
  t20257 = -1.*t19529*t6212;
  t20282 = -1.*t19277*t5406;
  t19606 = -1.*t19339*t18529;
  t19608 = -1.*t19376*t6264;
  t19610 = t19586 + t19606 + t19608;
  t20420 = t5658*t5337*t19529;
  t19686 = -1.*t19358*t19339;
  t19691 = -1.*t18069*t19376;
  t19694 = t19682 + t19686 + t19691;
  t20506 = t19277*t6476;
  t20509 = t19529*t7079;
  t19751 = t19339*t19657;
  t19766 = t19376*t7099;
  t19784 = t19750 + t19751 + t19766;
  t20384 = -1.*t2346*t19117;
  t21074 = -0.036619*t2346;
  t21075 = -1.*t5658*t19065;
  t21077 = t21074 + t21075;
  t21086 = 0.036619*t5658;
  t21087 = t21086 + t19241;
  t20452 = t5658*t19117*t5318;
  t20142 = t2346*t19117;
  t20325 = -1.*t5658*t19117*t4228;
  t25073 = -1.*t5950*t2346*t4228;
  t25075 = -1.*t5658*t4228*t5967*t5337;
  t25084 = t25073 + t25075;
  t25250 = -1.*t5950*t2346*t5318;
  t25254 = -1.*t5658*t5318*t5967*t5337;
  t25562 = t25250 + t25254;
  t20145 = -1.*t5658*t5337*t19277;
  t20188 = t20142 + t20145 + t19533;
  t23033 = t5658*t19117;
  t23384 = t2346*t21087;
  t23740 = t2346*t19117*t4228;
  t23742 = -1.*t5658*t21087*t4228;
  t20346 = -1.*t19277*t6212;
  t20373 = t20325 + t20346 + t19586;
  t20394 = t5658*t5337*t19277;
  t20396 = t20384 + t20394 + t19682;
  t27040 = Power(t2239,2);
  t21083 = -1.*t5658*t19117;
  t21096 = -1.*t2346*t21087;
  t27044 = Power(t5337,2);
  t21446 = -1.*t2346*t19117*t5318;
  t21448 = t5658*t21087*t5318;
  t20456 = t19277*t7079;
  t20484 = t20452 + t19750 + t20456;
  t24867 = -1.*t2346*t4228*t5967;
  t24895 = t5658*t5950*t4228*t5337;
  t24896 = t24867 + t24895;
  t27042 = t5658*t27040*t21077;
  t27076 = -1.*t2239*t2346*t19529;
  t27382 = t5658*t5967;
  t27385 = t5950*t2346*t5337;
  t27501 = t27382 + t27385;
  t27086 = t5658*t2239*t4228*t19529;
  t27094 = -1.*t2239*t21077*t5406;
  t27546 = t21087*t5967;
  t27573 = -1.*t5950*t21077*t5337;
  t27574 = t27546 + t27573;
  t27622 = t5950*t21087;
  t27623 = t21077*t5967*t5337;
  t27628 = t27622 + t27623;
  t24930 = -1.*t2346*t5318*t5967;
  t24932 = t5658*t5950*t5318*t5337;
  t24944 = t24930 + t24932;
  t27118 = -1.*t5658*t27040*t21077;
  t27148 = t2239*t2346*t19529;
  t27652 = t5658*t5950;
  t27655 = -1.*t2346*t5967*t5337;
  t27664 = t27652 + t27655;
  t27217 = -1.*t5658*t2239*t5318*t19529;
  t27223 = t2239*t21077*t6476;
  t27879 = -1.*t4015*t2375;
  t27880 = t3459*t4053;
  t27881 = t27879 + t27880;
  t20922 = -1.*t5658*t19248;
  t20931 = t20384 + t20922;
  t27981 = -0.21935*t4015;
  t27983 = -1.*t4015*t18605;
  t28010 = -1.*t3459*t18818;
  t28042 = t27981 + t27983 + t28010;
  t21702 = t5658*t19248;
  t21821 = t20142 + t21702;
  t27975 = Power(t5658,2);
  t28064 = Power(t2346,2);
  t28147 = t2239*t4228;
  t28149 = t2346*t27881*t5337;
  t28151 = t28147 + t28149;
  t8635 = t5622*t5406;
  t8645 = -1.*t2235*t6264;
  t8661 = t8635 + t8645;
  t28189 = -1.*t2239*t2346*t27881;
  t28190 = t4228*t5337;
  t28193 = t28189 + t28190;
  t28206 = t5658*t5950*t27881;
  t28207 = -1.*t5967*t28151;
  t28211 = t28206 + t28207;
  t27939 = t5658*t19117*t4228;
  t28048 = t27975*t28042*t5318;
  t28369 = -1.*t2239*t2346*t28042;
  t28373 = t19065*t5337;
  t28385 = t28369 + t28373;
  t28464 = t2239*t19065;
  t28471 = t2346*t28042*t5337;
  t28473 = t28464 + t28471;
  t28093 = -1.*t27975*t28042*t4228;
  t28100 = -1.*t5658*t19117*t27881;
  t28460 = -1.*t5658*t2239*t28385;
  t28510 = t28385*t6476;
  t28515 = t19529*t5406;
  t28805 = t5658*t28042*t5967;
  t28807 = t5950*t28473;
  t28808 = t28805 + t28807;
  t28811 = t5658*t5950*t28042;
  t28813 = -1.*t5967*t28473;
  t28877 = t28811 + t28813;
  t28145 = t5658*t27881*t5967;
  t28156 = t5950*t28151;
  t28158 = t28145 + t28156;
  t28581 = t5658*t2239*t28385;
  t28606 = -1.*t19529*t28193;
  t28610 = -1.*t28385*t5406;
  t29289 = -0.12338*t2375;
  t29308 = t29289 + t18817;
  t29142 = 0.002196*t2375;
  t29144 = 0.12338*t4053;
  t29145 = t29142 + t29144;
  t27878 = -0.000019380093084*t4228;
  t27883 = 5.e-6*t27881;
  t27890 = -0.124119*t5318;
  t27899 = -0.0875*t27881;
  t27912 = t27890 + t27899;
  t27916 = 0.02973458*t27912;
  t27920 = t27878 + t27883 + t27916;
  t27928 = -0.5*var2[15]*t27920;
  t27929 = -5.e-6*t5658*t4228;
  t27937 = t5658*t20931*t4228;
  t27969 = -1.*t2346*t19248*t4228;
  t28066 = t19154*t5318;
  t29569 = -1.*t3459*t29308;
  t29570 = t4015*t29145;
  t29571 = t29569 + t29570;
  t28092 = t5658*t21821*t27881;
  t28097 = -1.*t19154*t4228;
  t29534 = t4015*t29308;
  t29536 = t3459*t29145;
  t29555 = t29534 + t29536;
  t28104 = t2346*t19248*t27881;
  t28139 = -0.000529236*t18529;
  t28160 = 0.02973458*t28158;
  t28162 = t28139 + t28160;
  t28165 = -0.5*var2[0]*t28162;
  t28166 = t2235*t5406;
  t28168 = t5622*t6264;
  t28170 = t28166 + t28168;
  t28175 = -0.000529236*t28170;
  t28197 = t2235*t28193;
  t28216 = t5622*t28211;
  t28218 = t28197 + t28216;
  t28220 = 0.02973458*t28218;
  t28224 = t28175 + t28220;
  t28247 = -0.5*var2[2]*t28224;
  t28251 = -0.000529236*t8661;
  t28252 = t5622*t28193;
  t28253 = -1.*t2235*t28211;
  t28258 = t28252 + t28253;
  t28260 = 0.02973458*t28258;
  t28262 = t28251 + t28260;
  t28290 = -0.5*var2[1]*t28262;
  t28297 = 5.e-6*t19939;
  t28498 = t5406*t20396;
  t29587 = t27975*t29571*t5318;
  t28501 = t19277*t6212;
  t29878 = -1.*t2239*t2346*t29571;
  t29885 = t29555*t5337;
  t29889 = t29878 + t29885;
  t29862 = t2239*t29555;
  t29864 = t2346*t29571*t5337;
  t29866 = t29862 + t29864;
  t28601 = t28193*t20188;
  t29670 = -1.*t27975*t29571*t4228;
  t28611 = -1.*t19277*t28151;
  t28773 = 5.e-6*t8929;
  t28803 = t18529*t19694;
  t29891 = -1.*t5658*t2239*t29889;
  t29934 = t29889*t6476;
  t28890 = t19339*t18529;
  t28891 = t19376*t6264;
  t30125 = t5658*t29571*t5967;
  t30127 = t5950*t29866;
  t30133 = t30125 + t30127;
  t30173 = t5658*t5950*t29571;
  t30250 = -1.*t5967*t29866;
  t30267 = t30173 + t30250;
  t28971 = t28158*t19545;
  t30024 = t5658*t2239*t29889;
  t30076 = -1.*t29889*t5406;
  t29054 = -1.*t19339*t28158;
  t29056 = -1.*t19376*t28211;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=(-0.5*(0.02973458*(-1.*t2235*t5406 - 1.*t5622*t6264) - 0.000529236*(-1.*t2235*t6476 - 1.*t5622*t7099))*var2[1] - 0.5*(-0.000529236*(t5622*t6476 - 1.*t2235*t7099) + 0.02973458*t8661)*var2[2])*var2[17];
  p_output1[4]=(-0.5*(0.02973458*t6264 - 0.000529236*t7099)*var2[0] - 0.5*(-0.02973458*t2235*t8929 + 0.000529236*t2235*t9184)*var2[1] - 0.5*(0.02973458*t5622*t8929 - 0.000529236*t5622*t9184)*var2[2] - 0.5*(-0.006197*t18069 + 5.e-6*(-1.*t5318*t5658*t5950 + t5967*t7079) - 0.000529236*(t18529*(t18069*t19298 + t18069*t19339 + t19358*t19376 + t19376*t19383) + t18069*t19610 + t19545*t6264 + t19358*(-1.*t18529*t19376 - 1.*t19298*t6264 - 1.*t19339*t6264 - 1.*t19376*t8929)) + 0.02973458*((-1.*t18069*t19298 - 1.*t18069*t19339 - 1.*t19358*t19376 - 1.*t19376*t19383)*t19657 + t18069*t19784 + t19694*t7099 + t19358*(t19376*t19657 + t19298*t7099 + t19339*t7099 + t19376*t9184)))*var2[3])*var2[17];
  p_output1[5]=(-0.5*(-0.000529236*t19914*t5950 + 0.02973458*t19939*t5950)*var2[0] - 0.5*(0.02973458*(t19939*t2235*t5967 + t5622*t6212) - 0.000529236*(t19914*t2235*t5967 + t5622*t7079))*var2[1] - 0.5*(0.02973458*(-1.*t19939*t5622*t5967 + t2235*t6212) - 0.000529236*(-1.*t19914*t5622*t5967 + t2235*t7079))*var2[2] - 0.5*(-5.e-6*t19914*t5950 + 0.006197*t2239*t5658*t5950 - 0.000529236*(t19545*t19939*t5950 - 1.*t19610*t2239*t5658*t5950 + t18529*(t20217 + t19277*t2239*t5658 + t19358*t20205*t5950 - 1.*t19339*t2239*t5658*t5950 - 1.*t18069*t20205*t5967 + t19376*t2239*t5658*t5967) + t19358*(t20257 + t20282 - 1.*t19339*t19939*t5950 - 1.*t18529*t20205*t5950 + t19376*t19939*t5967 + t20205*t5967*t6264)) + 0.02973458*(t19694*t19914*t5950 - 1.*t19784*t2239*t5658*t5950 + t19657*(t20420 - 1.*t19277*t2239*t5658 - 1.*t19358*t20205*t5950 + t19339*t2239*t5658*t5950 + t18069*t20205*t5967 - 1.*t19376*t2239*t5658*t5967) + t19358*(t20506 + t20509 + t19339*t19914*t5950 + t19657*t20205*t5950 - 1.*t19376*t19914*t5967 - 1.*t20205*t5967*t7099)))*var2[3] - 0.5*(0.006197*t5337*t5658 - 0.000529236*(-1.*t20373*t5337*t5658 + t5406*(t20217 - 1.*t20205*t5337*t5658) + t20188*t6212 + t2239*t5658*(-1.*t19277*t19939 + t20257 + t20282 - 1.*t20205*t6212)) + 5.e-6*(-1.*t2346*t5318*t5337 - 1.*t2239*t6378) + 0.02973458*(-1.*t20484*t5337*t5658 + (t20420 + t20205*t5337*t5658)*t6476 + t20396*t7079 + t2239*t5658*(t19277*t19914 + t20506 + t20509 + t20205*t7079)))*var2[4])*var2[17];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.5*(0.02973458*t24896 - 0.000529236*t24944)*var2[0] - 0.5*(0.02973458*(-1.*t2235*t25084 - 1.*t2239*t4228*t5622*t5658) - 0.000529236*(-1.*t2235*t25562 - 1.*t2239*t5318*t5622*t5658))*var2[1] - 0.5*(0.02973458*(t25084*t5622 - 1.*t2235*t2239*t4228*t5658) - 0.000529236*(t25562*t5622 - 1.*t2235*t2239*t5318*t5658))*var2[2] - 0.5*(-0.006197*t27501 + 5.e-6*(-1.*t5318*t5337*t5658*t5950 + t2346*t5318*t5967) - 0.000529236*(t19545*t24896 + t19610*t27501 + t18529*(t27042 + t27076 + t19339*t27501 + t19358*t27574 + t18069*t27628 + t19376*t27664) + t19358*(-1.*t19339*t24896 - 1.*t19376*t25084 + t27086 + t27094 - 1.*t18529*t27574 - 1.*t27628*t6264)) + 0.02973458*(t19694*t24944 + t19784*t27501 + t19657*(t27118 + t27148 - 1.*t19339*t27501 - 1.*t19358*t27574 - 1.*t18069*t27628 - 1.*t19376*t27664) + t19358*(t19339*t24944 + t19376*t25562 + t27217 + t27223 + t19657*t27574 + t27628*t7099)))*var2[3] - 0.5*(0.006197*t2239*t2346 + 5.e-6*t2239*t5318*t5658 - 0.000529236*(-1.*t20373*t2239*t2346 - 1.*t20188*t2239*t4228*t5658 + t5406*(t23033 + t23384 + t27042 + t27076 + t19277*t2346*t5337 + t21077*t27044*t5658) + t2239*t5658*(t23740 + t23742 + t27086 + t27094 - 1.*t19277*t4228*t5337*t5658 + t21077*t5337*t6212)) + 0.02973458*(-1.*t20484*t2239*t2346 - 1.*t20396*t2239*t5318*t5658 + (t21083 + t21096 + t27118 + t27148 - 1.*t19277*t2346*t5337 - 1.*t21077*t27044*t5658)*t6476 + t2239*t5658*(t21446 + t21448 + t27217 + t27223 + t19277*t5318*t5337*t5658 - 1.*t21077*t5337*t7079)))*var2[4] - 0.5*(5.e-6*t2346*t5318 - 0.006197*t5658 - 0.000529236*(-1.*t21821*t2346*t4228 + (t20325 + t19248*t2346*t4228 - 1.*t19154*t5318)*t5658 + t4228*t5658*(t23033 + t23384 - 1.*t19248*t2346 + t21077*t5658) + t2346*(t23740 + t23742 + t21077*t2346*t4228 + t19248*t4228*t5658)) + 0.02973458*(-1.*t20931*t2346*t5318 + t5318*t5658*(t21083 + t21096 + t19248*t2346 - 1.*t21077*t5658) + t2346*(t21446 + t21448 - 1.*t21077*t2346*t5318 - 1.*t19248*t5318*t5658) + t5658*(t20452 - 1.*t19248*t2346*t5318 + t19154*t6378)))*var2[5])*var2[17];
  p_output1[16]=(t27928 + t28165 + t28247 + t28290 - 0.5*(t28773 - 0.000529236*(t18529*(t28581 + t19358*t28808 + t18069*t28877) + t28971 + t19358*(t28606 + t28610 - 1.*t18529*t28808 + t29054 + t29056 - 1.*t28877*t6264)) + 0.02973458*(t28803 + t19657*(t28460 - 1.*t19358*t28808 - 1.*t18069*t28877) + t19358*(t28510 + t28515 + t19657*t28808 + t28890 + t28891 + t28877*t7099)))*var2[3] - 0.5*(t28297 - 0.000529236*(t28601 + t5406*(t28581 + t2346*t28042*t5658 - 1.*t28473*t5337*t5658) + t2239*t5658*(t28093 + t28100 + t28606 + t28610 + t28611 - 1.*t28473*t6212)) + 0.02973458*(t28498 + (t28460 - 1.*t2346*t28042*t5658 + t28473*t5337*t5658)*t6476 + t2239*t5658*(t27939 + t28048 + t28501 + t28510 + t28515 + t28473*t7079)))*var2[4] - 0.5*(t27929 - 0.000529236*(t28092 + t2346*(t28093 + t28097 + t28100 + t28104 - 1.*t28042*t28064*t4228 - 1.*t19065*t5318)) + 0.02973458*(t27937 + t2346*(t27939 + t27969 + t28048 + t28066 + t28042*t28064*t5318 + t19065*t6378)))*var2[5])*var2[17];
  p_output1[17]=(t27928 + t28165 + t28247 + t28290 - 0.5*(t28773 - 0.000529236*(t28971 + t18529*(t30024 + t19358*t30133 + t18069*t30267) + t19358*(t28606 + t29054 + t29056 + t30076 - 1.*t18529*t30133 - 1.*t30267*t6264)) + 0.02973458*(t28803 + t19657*(t29891 - 1.*t19358*t30133 - 1.*t18069*t30267) + t19358*(t28515 + t28890 + t28891 + t29934 + t19657*t30133 + t30267*t7099)))*var2[3] - 0.5*(t28297 - 0.000529236*(t28601 + t5406*(t30024 + t2346*t29571*t5658 - 1.*t29866*t5337*t5658) + t2239*t5658*(t28100 + t28606 + t28611 + t29670 + t30076 - 1.*t29866*t6212)) + 0.02973458*(t28498 + (t29891 - 1.*t2346*t29571*t5658 + t29866*t5337*t5658)*t6476 + t2239*t5658*(t27939 + t28501 + t28515 + t29587 + t29934 + t29866*t7079)))*var2[4] - 0.5*(t27929 - 0.000529236*(t28092 + t2346*(t28097 + t28100 + t28104 + t29670 - 1.*t28064*t29571*t4228 - 1.*t29555*t5318)) + 0.02973458*(t27937 + t2346*(t27939 + t27969 + t28066 + t29587 + t28064*t29571*t5318 + t29555*t6378)))*var2[5] - 0.5*(-0.000529236*(t18818*t2375 - 1.*t2375*t29308 + 0.21935*t4053 + t18605*t4053 + t29145*t4053) + 0.02973458*(0.21935*t2375 + t18605*t2375 + t2375*t29145 - 1.*t18818*t4053 + t29308*t4053))*var2[16])*var2[17];
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

#include "Ce3_vec18_laikago_description.hh"

namespace SymFunction
{

void Ce3_vec18_laikago_description_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
