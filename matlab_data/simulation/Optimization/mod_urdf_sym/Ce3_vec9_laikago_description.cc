/*
 * Automatically Generated from Mathematica.
 * Tue 10 Dec 2019 16:02:41 GMT-05:00
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
  double t1263;
  double t838;
  double t1237;
  double t1380;
  double t1239;
  double t1603;
  double t1646;
  double t1969;
  double t713;
  double t671;
  double t1970;
  double t1988;
  double t2171;
  double t264;
  double t2811;
  double t2866;
  double t2876;
  double t2976;
  double t3348;
  double t3384;
  double t3387;
  double t1916;
  double t2628;
  double t2781;
  double t2881;
  double t3135;
  double t3156;
  double t3233;
  double t3234;
  double t3264;
  double t3467;
  double t3536;
  double t3576;
  double t3640;
  double t3661;
  double t3799;
  double t3847;
  double t3853;
  double t3865;
  double t4370;
  double t4382;
  double t4386;
  double t4425;
  double t4440;
  double t4789;
  double t5489;
  double t5490;
  double t5494;
  double t5644;
  double t5680;
  double t5720;
  double t5761;
  double t5762;
  double t5798;
  double t5809;
  double t5886;
  double t5904;
  double t5938;
  double t5940;
  double t5961;
  double t5995;
  double t6032;
  double t6046;
  double t5615;
  double t6131;
  double t6137;
  double t6148;
  double t6153;
  double t6186;
  double t6209;
  double t6478;
  double t6531;
  double t6588;
  double t6600;
  double t6605;
  double t6644;
  double t6974;
  double t6987;
  double t7028;
  double t7062;
  double t7091;
  double t7929;
  double t7968;
  double t8179;
  double t8323;
  double t8381;
  double t8396;
  double t7593;
  double t7619;
  double t7685;
  double t8525;
  double t8563;
  double t8569;
  double t6146;
  double t7270;
  double t7354;
  double t8673;
  double t8676;
  double t8725;
  double t7797;
  double t7804;
  double t7813;
  double t9741;
  double t9764;
  double t9767;
  double t10229;
  double t10230;
  double t10273;
  double t10461;
  double t10535;
  double t10626;
  double t8803;
  double t16582;
  double t16584;
  double t16747;
  double t9391;
  double t9862;
  double t10033;
  double t8630;
  double t8647;
  double t8834;
  double t16934;
  double t9489;
  double t9505;
  double t9508;
  double t17021;
  double t17167;
  double t9821;
  double t9833;
  double t9866;
  double t17316;
  double t10039;
  double t10173;
  double t10183;
  double t17514;
  double t17559;
  double t18300;
  double t18331;
  double t18397;
  double t18556;
  double t18611;
  double t18615;
  double t17454;
  double t17467;
  double t18963;
  double t18965;
  double t19059;
  double t19103;
  double t19116;
  double t16372;
  double t17261;
  double t16376;
  double t16429;
  double t19361;
  double t19392;
  double t19461;
  double t19530;
  double t17280;
  double t17282;
  double t17458;
  double t17461;
  double t19805;
  double t19841;
  double t19063;
  double t19128;
  double t19189;
  double t19229;
  double t17480;
  double t17500;
  double t18210;
  double t18219;
  double t18226;
  double t20348;
  double t20361;
  double t20379;
  double t19807;
  double t19889;
  double t20011;
  double t20054;
  double t20488;
  double t20489;
  double t20500;
  double t20465;
  double t20471;
  double t20477;
  double t18254;
  double t18259;
  double t18272;
  double t20542;
  double t20567;
  double t20569;
  double t20177;
  double t20198;
  double t20232;
  double t20240;
  double t20815;
  double t20816;
  double t20826;
  double t18901;
  double t18941;
  double t20987;
  double t20989;
  double t20996;
  double t21001;
  double t19276;
  double t19310;
  double t20986;
  double t21008;
  double t20950;
  double t20952;
  double t20954;
  double t4140;
  double t4144;
  double t4153;
  double t21139;
  double t21140;
  double t21148;
  double t21160;
  double t21167;
  double t21172;
  double t20973;
  double t21005;
  double t21366;
  double t21374;
  double t21375;
  double t21423;
  double t21424;
  double t21426;
  double t21031;
  double t21068;
  double t21384;
  double t21623;
  double t21701;
  double t24504;
  double t24507;
  double t24539;
  double t24361;
  double t24438;
  double t24498;
  double t22706;
  double t20948;
  double t20955;
  double t20956;
  double t23105;
  double t23128;
  double t25034;
  double t25041;
  double t24998;
  double t25005;
  double t25008;
  double t20794;
  double t20827;
  double t20830;
  double t20849;
  double t20850;
  double t20855;
  double t20871;
  double t20877;
  double t20917;
  double t20960;
  double t20965;
  double t20967;
  double t20968;
  double t20970;
  double t20980;
  double t21017;
  double t25862;
  double t25963;
  double t26143;
  double t21030;
  double t21052;
  double t25120;
  double t25124;
  double t25171;
  double t21070;
  double t21108;
  double t21111;
  double t21119;
  double t21121;
  double t21155;
  double t21209;
  double t21213;
  double t21235;
  double t21239;
  double t21244;
  double t21247;
  double t21271;
  double t21293;
  double t21297;
  double t21302;
  double t21307;
  double t21314;
  double t21330;
  double t21348;
  double t26148;
  double t21554;
  double t26347;
  double t26369;
  double t26398;
  double t26323;
  double t26324;
  double t26334;
  double t23008;
  double t26239;
  double t23239;
  double t23553;
  double t23557;
  double t26408;
  double t26434;
  double t24649;
  double t24657;
  double t26806;
  double t26812;
  double t26825;
  double t26690;
  double t26694;
  double t26739;
  double t26571;
  double t24742;
  double t26614;
  double t24887;
  double t24893;
  t1263 = Cos(var1[7]);
  t838 = Cos(var1[8]);
  t1237 = Sin(var1[7]);
  t1380 = Sin(var1[8]);
  t1239 = -1.*t838*t1237;
  t1603 = -1.*t1263*t1380;
  t1646 = t1239 + t1603;
  t1969 = Sin(var1[5]);
  t713 = Sin(var1[6]);
  t671 = Cos(var1[5]);
  t1970 = t1263*t838;
  t1988 = -1.*t1237*t1380;
  t2171 = t1970 + t1988;
  t264 = Sin(var1[3]);
  t2811 = Cos(var1[3]);
  t2866 = Cos(var1[4]);
  t2876 = Cos(var1[6]);
  t2976 = Sin(var1[4]);
  t3348 = t838*t1237;
  t3384 = t1263*t1380;
  t3387 = t3348 + t3384;
  t1916 = -1.*t671*t713*t1646;
  t2628 = t1969*t2171;
  t2781 = t1916 + t2628;
  t2881 = t2866*t2876*t1646;
  t3135 = t1969*t713*t1646;
  t3156 = t671*t2171;
  t3233 = t3135 + t3156;
  t3234 = -1.*t2976*t3233;
  t3264 = t2881 + t3234;
  t3467 = t1969*t3387;
  t3536 = -1.*t671*t713*t2171;
  t3576 = t3467 + t3536;
  t3640 = t2866*t2876*t2171;
  t3661 = t671*t3387;
  t3799 = t1969*t713*t2171;
  t3847 = t3661 + t3799;
  t3853 = -1.*t2976*t3847;
  t3865 = t3640 + t3853;
  t4370 = -1.*t2876*t2976*t1646;
  t4382 = -1.*t2866*t3233;
  t4386 = t4370 + t4382;
  t4425 = -1.*t2876*t2976*t2171;
  t4440 = -1.*t2866*t3847;
  t4789 = t4425 + t4440;
  t5489 = t2876*t2976*t1969;
  t5490 = t2866*t713;
  t5494 = t5489 + t5490;
  t5644 = 0.21935*t1237;
  t5680 = -1.*t838;
  t5720 = 1. + t5680;
  t5761 = 0.21935*t5720;
  t5762 = 0.217154*t838;
  t5798 = -0.12338*t1380;
  t5809 = t5761 + t5762 + t5798;
  t5886 = -1.*t1237*t5809;
  t5904 = -1. + t838;
  t5938 = 0.25*t5904;
  t5940 = -0.37338*t838;
  t5961 = 0.002196*t1380;
  t5995 = t5938 + t5940 + t5961;
  t6032 = t1263*t5995;
  t6046 = t5644 + t5886 + t6032;
  t5615 = -0.037381*t713;
  t6131 = t2876*t6046;
  t6137 = t5615 + t6131;
  t6148 = -1.*t2876;
  t6153 = 1. + t6148;
  t6186 = -0.0875*t6153;
  t6209 = -0.124881*t2876;
  t6478 = -1.*t713*t6046;
  t6531 = t6186 + t6209 + t6478;
  t6588 = -1.*t1969*t6531;
  t6600 = -1.*t1263;
  t6605 = 1. + t6600;
  t6644 = 0.21935*t6605;
  t6974 = t1263*t5809;
  t6987 = t1237*t5995;
  t7028 = t6644 + t6974 + t6987;
  t7062 = t671*t7028;
  t7091 = t6588 + t7062;
  t7929 = t2866*t6137;
  t7968 = -1.*t2976*t7091;
  t8179 = t7929 + t7968;
  t8323 = -1.*t2866*t2876*t1969;
  t8381 = t2976*t713;
  t8396 = t8323 + t8381;
  t7593 = t2976*t6137;
  t7619 = t2866*t7091;
  t7685 = t7593 + t7619;
  t8525 = t2876*t2976*t1646;
  t8563 = t2866*t3233;
  t8569 = t8525 + t8563;
  t6146 = -1.*t2976*t6137;
  t7270 = -1.*t2866*t7091;
  t7354 = t6146 + t7270;
  t8673 = t671*t6531;
  t8676 = t1969*t7028;
  t8725 = t8673 + t8676;
  t7797 = t2866*t2876*t1969;
  t7804 = -1.*t2976*t713;
  t7813 = t7797 + t7804;
  t9741 = t2876*t2976*t2171;
  t9764 = t2866*t3847;
  t9767 = t9741 + t9764;
  t10229 = t671*t713*t1646;
  t10230 = -1.*t1969*t2171;
  t10273 = t10229 + t10230;
  t10461 = -1.*t1969*t3387;
  t10535 = t671*t713*t2171;
  t10626 = t10461 + t10535;
  t8803 = t671*t2876*t8725;
  t16582 = -1.*t671*t6531;
  t16584 = -1.*t1969*t7028;
  t16747 = t16582 + t16584;
  t9391 = -1.*t8725*t2781;
  t9862 = -1.*t671*t2876*t8725;
  t10033 = t8725*t3576;
  t8630 = t8396*t7685;
  t8647 = t5494*t8179;
  t8834 = t8630 + t8647 + t8803;
  t16934 = -1.*t2876*t1969*t8725;
  t9489 = -1.*t7685*t8569;
  t9505 = -1.*t8179*t3264;
  t9508 = t9391 + t9489 + t9505;
  t17021 = -1.*t8725*t3233;
  t17167 = -1.*t7091*t2781;
  t9821 = -1.*t8396*t7685;
  t9833 = -1.*t5494*t8179;
  t9866 = t9821 + t9833 + t9862;
  t17316 = t2876*t1969*t8725;
  t10039 = t7685*t9767;
  t10173 = t8179*t3865;
  t10183 = t10033 + t10039 + t10173;
  t17514 = t7091*t3576;
  t17559 = t8725*t3847;
  t18300 = -1.*t2876*t2976*t1969*t1646;
  t18331 = -1.*t2866*t713*t1646;
  t18397 = t18300 + t18331;
  t18556 = -1.*t2876*t2976*t1969*t2171;
  t18611 = -1.*t2866*t713*t2171;
  t18615 = t18556 + t18611;
  t17454 = -1.*t713*t6137;
  t17467 = t2876*t6137*t2171;
  t18963 = 0.037381*t713;
  t18965 = -1.*t2876*t6046;
  t19059 = t18963 + t18965;
  t19103 = -0.037381*t2876;
  t19116 = t19103 + t6478;
  t16372 = t713*t6137;
  t17261 = -1.*t2876*t6137*t1646;
  t16376 = -1.*t2876*t1969*t7091;
  t16429 = t16372 + t16376 + t8803;
  t19361 = t2876*t6137;
  t19392 = t713*t19116;
  t19461 = t713*t6137*t1646;
  t19530 = -1.*t2876*t19116*t1646;
  t17280 = -1.*t7091*t3233;
  t17282 = t17261 + t17280 + t9391;
  t17458 = t2876*t1969*t7091;
  t17461 = t17454 + t17458 + t9862;
  t19805 = Power(t671,2);
  t19841 = Power(t1969,2);
  t19063 = -1.*t2876*t6137;
  t19128 = -1.*t713*t19116;
  t19189 = -1.*t713*t6137*t2171;
  t19229 = t2876*t19116*t2171;
  t17480 = t7091*t3847;
  t17500 = t17467 + t10033 + t17480;
  t18210 = t2866*t2876*t1969*t1646;
  t18219 = -1.*t2976*t713*t1646;
  t18226 = t18210 + t18219;
  t20348 = t2876*t2976;
  t20361 = t2866*t1969*t713;
  t20379 = t20348 + t20361;
  t19807 = t19805*t2876*t19059;
  t19889 = -1.*t671*t713*t8725;
  t20011 = t671*t2876*t8725*t1646;
  t20054 = -1.*t671*t19059*t2781;
  t20488 = -1.*t2866*t1969*t19059;
  t20489 = t2976*t19116;
  t20500 = t20488 + t20489;
  t20465 = t2976*t1969*t19059;
  t20471 = t2866*t19116;
  t20477 = t20465 + t20471;
  t18254 = t2866*t2876*t1969*t2171;
  t18259 = -1.*t2976*t713*t2171;
  t18272 = t18254 + t18259;
  t20542 = t2866*t2876;
  t20567 = -1.*t2976*t1969*t713;
  t20569 = t20542 + t20567;
  t20177 = -1.*t19805*t2876*t19059;
  t20198 = t671*t713*t8725;
  t20232 = -1.*t671*t2876*t8725*t2171;
  t20240 = t671*t19059*t3576;
  t20815 = -1.*t1263*t838;
  t20816 = t1237*t1380;
  t20826 = t20815 + t20816;
  t18901 = -1.*t2876*t6531;
  t18941 = t17454 + t18901;
  t20987 = 0.21935*t1263;
  t20989 = -1.*t1263*t5809;
  t20996 = -1.*t1237*t5995;
  t21001 = t20987 + t20989 + t20996;
  t19276 = t2876*t6531;
  t19310 = t16372 + t19276;
  t20986 = Power(t2876,2);
  t21008 = Power(t713,2);
  t20950 = t671*t1646;
  t20952 = t1969*t713*t20826;
  t20954 = t20950 + t20952;
  t4140 = t2811*t2781;
  t4144 = -1.*t264*t3264;
  t4153 = t4140 + t4144;
  t21139 = t1969*t1646;
  t21140 = -1.*t671*t713*t20826;
  t21148 = t21139 + t21140;
  t21160 = t2866*t2876*t20826;
  t21167 = -1.*t2976*t20954;
  t21172 = t21160 + t21167;
  t20973 = t2876*t6137*t1646;
  t21005 = t20986*t21001*t2171;
  t21366 = t1969*t6046;
  t21374 = -1.*t671*t713*t21001;
  t21375 = t21366 + t21374;
  t21423 = t671*t6046;
  t21424 = t1969*t713*t21001;
  t21426 = t21423 + t21424;
  t21031 = -1.*t20986*t21001*t1646;
  t21068 = -1.*t2876*t6137*t20826;
  t21384 = -1.*t671*t2876*t21375;
  t21623 = t8725*t2781;
  t21701 = t21375*t3576;
  t24504 = t2866*t21426;
  t24507 = t2876*t2976*t21001;
  t24539 = t24504 + t24507;
  t24361 = -1.*t2976*t21426;
  t24438 = t2866*t2876*t21001;
  t24498 = t24361 + t24438;
  t22706 = t671*t2876*t21375;
  t20948 = t2876*t2976*t20826;
  t20955 = t2866*t20954;
  t20956 = t20948 + t20955;
  t23105 = -1.*t21375*t2781;
  t23128 = -1.*t8725*t21148;
  t25034 = -0.12338*t838;
  t25041 = t25034 + t5961;
  t24998 = 0.002196*t838;
  t25005 = 0.12338*t1380;
  t25008 = t24998 + t25005;
  t20794 = 0.000019783370916*t1646;
  t20827 = 5.e-6*t20826;
  t20830 = 0.124881*t2171;
  t20849 = 0.0875*t20826;
  t20850 = t20830 + t20849;
  t20855 = 0.02973458*t20850;
  t20871 = t20794 + t20827 + t20855;
  t20877 = -0.5*var2[6]*t20871;
  t20917 = -0.000529236*t8569;
  t20960 = 0.02973458*t20956;
  t20965 = t20917 + t20960;
  t20967 = -0.5*var2[0]*t20965;
  t20968 = -5.e-6*t2876*t1646;
  t20970 = t2876*t18941*t1646;
  t20980 = -1.*t713*t6531*t1646;
  t21017 = t7028*t2171;
  t25862 = -1.*t1237*t25041;
  t25963 = t1263*t25008;
  t26143 = t25862 + t25963;
  t21030 = t2876*t19310*t20826;
  t21052 = -1.*t7028*t1646;
  t25120 = t1263*t25041;
  t25124 = t1237*t25008;
  t25171 = t25120 + t25124;
  t21070 = t713*t6531*t20826;
  t21108 = t264*t2781;
  t21111 = t2811*t3264;
  t21119 = t21108 + t21111;
  t21121 = -0.000529236*t21119;
  t21155 = t264*t21148;
  t21209 = t2811*t21172;
  t21213 = t21155 + t21209;
  t21235 = 0.02973458*t21213;
  t21239 = t21121 + t21235;
  t21244 = -0.5*var2[2]*t21239;
  t21247 = -0.000529236*t4153;
  t21271 = t2811*t21148;
  t21293 = -1.*t264*t21172;
  t21297 = t21271 + t21293;
  t21302 = 0.02973458*t21297;
  t21307 = t21247 + t21302;
  t21314 = -0.5*var2[1]*t21307;
  t21330 = 5.e-6*t10273;
  t21348 = t17461*t2781;
  t26148 = t20986*t26143*t2171;
  t21554 = t7091*t3233;
  t26347 = -1.*t671*t713*t26143;
  t26369 = t1969*t25171;
  t26398 = t26347 + t26369;
  t26323 = t1969*t713*t26143;
  t26324 = t671*t25171;
  t26334 = t26323 + t26324;
  t23008 = t16429*t21148;
  t26239 = -1.*t20986*t26143*t1646;
  t23239 = -1.*t7091*t20954;
  t23553 = 5.e-6*t4386;
  t23557 = t9866*t8569;
  t26408 = -1.*t671*t2876*t26398;
  t26434 = t26398*t3576;
  t24649 = t7685*t8569;
  t24657 = t8179*t3264;
  t26806 = t2866*t26334;
  t26812 = t2876*t2976*t26143;
  t26825 = t26806 + t26812;
  t26690 = -1.*t2976*t26334;
  t26694 = t2866*t2876*t26143;
  t26739 = t26690 + t26694;
  t26571 = t671*t2876*t26398;
  t24742 = t8834*t20956;
  t26614 = -1.*t26398*t2781;
  t24887 = -1.*t7685*t20956;
  t24893 = -1.*t8179*t21172;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=(-0.5*(0.02973458*(-1.*t264*t2781 - 1.*t2811*t3264) - 0.000529236*(-1.*t264*t3576 - 1.*t2811*t3865))*var2[1] - 0.5*(-0.000529236*(t2811*t3576 - 1.*t264*t3865) + 0.02973458*t4153)*var2[2])*var2[8];
  p_output1[4]=(-0.5*(0.02973458*t3264 - 0.000529236*t3865)*var2[0] - 0.5*(-0.02973458*t264*t4386 + 0.000529236*t264*t4789)*var2[1] - 0.5*(0.02973458*t2811*t4386 - 0.000529236*t2811*t4789)*var2[2] - 0.5*(5.e-6*(-1.*t2171*t2866*t2876 + t2976*t3847) - 0.006197*t5494 - 0.000529236*((t5494*t7354 + t5494*t7685 + t7813*t8179 + t8179*t8396)*t8569 + t8396*(-1.*t3264*t7354 - 1.*t3264*t7685 - 1.*t4386*t8179 - 1.*t8179*t8569) + t3264*t8834 + t5494*t9508) + 0.02973458*(t10183*t5494 + (-1.*t5494*t7354 - 1.*t5494*t7685 - 1.*t7813*t8179 - 1.*t8179*t8396)*t9767 + t8396*(t3865*t7354 + t3865*t7685 + t4789*t8179 + t8179*t9767) + t3865*t9866))*var2[3])*var2[8];
  p_output1[5]=(-0.5*(0.02973458*t10273*t2866 - 0.000529236*t10626*t2866)*var2[0] - 0.5*(0.02973458*(t10273*t264*t2976 + t2811*t3233) - 0.000529236*(t10626*t264*t2976 + t2811*t3847))*var2[1] - 0.5*(0.02973458*(-1.*t10273*t2811*t2976 + t264*t3233) - 0.000529236*(-1.*t10626*t2811*t2976 + t264*t3847))*var2[2] - 0.5*(-5.e-6*t10626*t2866 + 0.006197*t2866*t2876*t671 - 0.000529236*((t16934 - 1.*t16747*t2976*t5494 + t2876*t671*t7091 - 1.*t2866*t2876*t671*t7685 + t2876*t2976*t671*t8179 + t16747*t2866*t8396)*t8569 + t8396*(t17021 + t17167 + t16747*t2976*t3264 - 1.*t10273*t2866*t7685 + t10273*t2976*t8179 - 1.*t16747*t2866*t8569) + t10273*t2866*t8834 - 1.*t2866*t2876*t671*t9508) + 0.02973458*(-1.*t10183*t2866*t2876*t671 + (t17316 + t16747*t2976*t5494 - 1.*t2876*t671*t7091 + t2866*t2876*t671*t7685 - 1.*t2876*t2976*t671*t8179 - 1.*t16747*t2866*t8396)*t9767 + t8396*(t17514 + t17559 - 1.*t16747*t2976*t3865 + t10626*t2866*t7685 - 1.*t10626*t2976*t8179 + t16747*t2866*t9767) + t10626*t2866*t9866))*var2[3] - 0.5*(0.006197*t1969*t2876 - 0.000529236*(-1.*t17282*t1969*t2876 + t2781*(t16934 - 1.*t16747*t1969*t2876) + t16429*t3233 + t2876*t671*(t17021 + t17167 - 1.*t16747*t3233 - 1.*t10273*t7091)) + 0.02973458*(-1.*t17500*t1969*t2876 + (t17316 + t16747*t1969*t2876)*t3576 + t17461*t3847 + t2876*t671*(t17514 + t17559 + t16747*t3847 + t10626*t7091)) + 5.e-6*(-1.*t3387*t671 - 1.*t1969*t2171*t713))*var2[4])*var2[8];
  p_output1[6]=(-0.5*(0.02973458*t18226 - 0.000529236*t18272)*var2[0] - 0.5*(0.02973458*(-1.*t18397*t264 - 1.*t1646*t2811*t2876*t671) - 0.000529236*(-1.*t18615*t264 - 1.*t2171*t2811*t2876*t671))*var2[1] - 0.5*(0.02973458*(t18397*t2811 - 1.*t1646*t264*t2876*t671) - 0.000529236*(t18615*t2811 - 1.*t2171*t264*t2876*t671))*var2[2] - 0.5*(-0.006197*t20379 + 5.e-6*(-1.*t1969*t2171*t2866*t2876 + t2171*t2976*t713) - 0.000529236*((t19807 + t19889 + t20477*t5494 + t20379*t7685 + t20569*t8179 + t20500*t8396)*t8569 + t8396*(t20011 + t20054 - 1.*t20477*t3264 - 1.*t18226*t7685 - 1.*t18397*t8179 - 1.*t20500*t8569) + t18226*t8834 + t20379*t9508) + 0.02973458*(t10183*t20379 + (t20177 + t20198 - 1.*t20477*t5494 - 1.*t20379*t7685 - 1.*t20569*t8179 - 1.*t20500*t8396)*t9767 + t8396*(t20232 + t20240 + t20477*t3865 + t18272*t7685 + t18615*t8179 + t20500*t9767) + t18272*t9866))*var2[3] - 0.5*(5.e-6*t2171*t2876*t671 + 0.006197*t671*t713 + 0.02973458*(-1.*t17461*t2171*t2876*t671 + t2876*t671*(t19189 + t19229 + t20232 + t20240 - 1.*t19059*t1969*t3847 + t1969*t2171*t2876*t7091) - 1.*t17500*t671*t713 + t3576*(t19063 + t19128 + t20177 + t20198 - 1.*t19059*t19841*t2876 - 1.*t1969*t7091*t713)) - 0.000529236*(-1.*t16429*t1646*t2876*t671 + t2876*t671*(t19461 + t19530 + t20011 + t20054 + t19059*t1969*t3233 - 1.*t1646*t1969*t2876*t7091) - 1.*t17282*t671*t713 + t2781*(t19361 + t19392 + t19807 + t19889 + t19059*t19841*t2876 + t1969*t7091*t713)))*var2[4] - 0.5*(-0.006197*t2876 + 5.e-6*t2171*t713 - 0.000529236*(-1.*t1646*t19310*t713 + t713*(t19461 + t19530 + t1646*t2876*t6531 + t1646*t19059*t713) + t1646*t2876*(t19361 + t19392 + t19059*t2876 - 1.*t6531*t713) + t2876*(t17261 - 1.*t2171*t7028 + t1646*t6531*t713)) + 0.02973458*(-1.*t18941*t2171*t713 + t713*(t19189 + t19229 - 1.*t2171*t2876*t6531 - 1.*t19059*t2171*t713) + t2171*t2876*(t19063 + t19128 - 1.*t19059*t2876 + t6531*t713) + t2876*(t17467 + t3387*t7028 - 1.*t2171*t6531*t713)))*var2[5])*var2[8];
  p_output1[7]=(t20877 + t20967 + t21244 + t21314 - 0.5*(t23553 - 0.000529236*(t24742 + (t22706 + t24498*t5494 + t24539*t8396)*t8569 + t8396*(t23105 + t23128 + t24887 + t24893 - 1.*t24498*t3264 - 1.*t24539*t8569)) + 0.02973458*(t23557 + (t21384 - 1.*t24498*t5494 - 1.*t24539*t8396)*t9767 + t8396*(t21623 + t21701 + t24649 + t24657 + t24498*t3865 + t24539*t9767)))*var2[3] - 0.5*(t21330 + 0.02973458*(t21348 + t2876*(t20973 + t21005 + t21554 + t21623 + t21701 + t21426*t3847)*t671 + t3576*(t21384 + t1969*t21426*t2876 - 1.*t21001*t2876*t713)) - 0.000529236*(t23008 + t2876*(t21031 + t21068 + t23105 + t23128 + t23239 - 1.*t21426*t3233)*t671 + t2781*(t22706 - 1.*t1969*t21426*t2876 + t21001*t2876*t713)))*var2[4] - 0.5*(t20968 - 0.000529236*(t21030 + (-1.*t1646*t21001*t21008 + t21031 + t21052 + t21068 + t21070 - 1.*t2171*t6046)*t713) + 0.02973458*(t20970 + (t20973 + t20980 + t21005 + t21017 + t21001*t21008*t2171 + t3387*t6046)*t713))*var2[5])*var2[8];
  p_output1[8]=(t20877 + t20967 + t21244 + t21314 - 0.5*(t23553 - 0.000529236*(t24742 + (t26571 + t26739*t5494 + t26825*t8396)*t8569 + t8396*(t23128 + t24887 + t24893 + t26614 - 1.*t26739*t3264 - 1.*t26825*t8569)) + 0.02973458*(t23557 + (t26408 - 1.*t26739*t5494 - 1.*t26825*t8396)*t9767 + t8396*(t21623 + t24649 + t24657 + t26434 + t26739*t3865 + t26825*t9767)))*var2[3] - 0.5*(t21330 + 0.02973458*(t21348 + t2876*(t20973 + t21554 + t21623 + t26148 + t26434 + t26334*t3847)*t671 + t3576*(t26408 + t1969*t26334*t2876 - 1.*t26143*t2876*t713)) - 0.000529236*(t23008 + t2876*(t21068 + t23128 + t23239 + t26239 + t26614 - 1.*t26334*t3233)*t671 + t2781*(t26571 - 1.*t1969*t26334*t2876 + t26143*t2876*t713)))*var2[4] - 0.5*(t20968 - 0.000529236*(t21030 + (t21052 + t21068 + t21070 - 1.*t2171*t25171 - 1.*t1646*t21008*t26143 + t26239)*t713) + 0.02973458*(t20970 + (t20973 + t20980 + t21017 + t21008*t2171*t26143 + t26148 + t25171*t3387)*t713))*var2[5] - 0.5*(0.02973458*(t1380*t25041 - 1.*t1380*t5995 - 0.21935*t838 + t25008*t838 + t5809*t838) - 0.000529236*(-0.21935*t1380 + t1380*t25008 + t1380*t5809 - 1.*t25041*t838 + t5995*t838))*var2[7])*var2[8];
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

#include "Ce3_vec9_laikago_description.hh"

namespace SymFunction
{

void Ce3_vec9_laikago_description_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
