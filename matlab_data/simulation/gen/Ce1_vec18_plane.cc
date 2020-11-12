/*
 * Automatically Generated from Mathematica.
 * Fri 21 Dec 2018 15:11:47 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
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


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t189;
  double t235;
  double t317;
  double t343;
  double t378;
  double t379;
  double t409;
  double t133;
  double t152;
  double t188;
  double t475;
  double t729;
  double t755;
  double t776;
  double t557;
  double t2025;
  double t1986;
  double t2224;
  double t2227;
  double t2231;
  double t1816;
  double t2005;
  double t2078;
  double t2134;
  double t2135;
  double t2141;
  double t2153;
  double t2160;
  double t2169;
  double t2251;
  double t2268;
  double t2279;
  double t2287;
  double t2290;
  double t2307;
  double t2408;
  double t1164;
  double t1178;
  double t1104;
  double t1128;
  double t1317;
  double t1343;
  double t1241;
  double t1262;
  double t445;
  double t673;
  double t717;
  double t3069;
  double t3237;
  double t842;
  double t848;
  double t870;
  double t2476;
  double t2500;
  double t2630;
  double t2739;
  double t2742;
  double t2746;
  double t2760;
  double t2776;
  double t2807;
  double t1152;
  double t1188;
  double t1195;
  double t1265;
  double t1472;
  double t1601;
  double t5352;
  double t5430;
  double t5447;
  double t5586;
  double t5812;
  double t5844;
  double t5927;
  double t6044;
  double t6070;
  double t6090;
  double t6348;
  double t6349;
  double t6427;
  double t6428;
  double t6433;
  double t6442;
  double t6458;
  double t6478;
  double t6848;
  double t6868;
  double t6969;
  double t2470;
  double t2636;
  double t2756;
  double t2846;
  double t3088;
  double t3125;
  double t3171;
  double t3546;
  double t3784;
  double t3853;
  double t4299;
  double t4357;
  double t4406;
  double t4479;
  double t4506;
  double t4524;
  double t4680;
  double t4954;
  double t9232;
  double t9234;
  double t9237;
  double t9254;
  double t9267;
  double t9295;
  double t9329;
  double t9330;
  double t9344;
  double t7137;
  double t7142;
  double t7175;
  double t7262;
  double t7702;
  double t7805;
  double t7810;
  double t8189;
  double t10396;
  double t10407;
  double t10362;
  double t10411;
  double t10422;
  double t10436;
  double t10440;
  double t10446;
  double t10492;
  double t10530;
  double t10531;
  double t10549;
  double t10567;
  double t10571;
  double t10582;
  double t10623;
  double t10636;
  double t10660;
  double t10346;
  double t10584;
  double t10188;
  double t10148;
  double t11046;
  double t11054;
  double t11061;
  double t11066;
  double t11068;
  double t11077;
  double t10875;
  double t10877;
  double t10878;
  double t10885;
  double t10915;
  double t10846;
  double t10851;
  double t10855;
  double t11152;
  double t11217;
  double t11232;
  double t11242;
  double t11253;
  double t11259;
  double t11267;
  double t11277;
  double t11282;
  double t11288;
  double t11292;
  double t11296;
  double t10175;
  double t10238;
  double t10289;
  double t10865;
  double t10921;
  double t10933;
  double t11091;
  double t11103;
  double t11285;
  double t11298;
  double t11299;
  double t11119;
  double t11134;
  double t11304;
  double t11311;
  double t11338;
  double t10599;
  double t10703;
  double t10714;
  double t9810;
  double t9861;
  double t10070;
  double t10787;
  double t10789;
  double t10845;
  double t11624;
  double t11649;
  double t11653;
  double t11892;
  double t11898;
  double t11900;
  double t11923;
  double t11924;
  double t11934;
  double t11390;
  double t11411;
  double t11412;
  double t11450;
  double t11861;
  double t11560;
  double t11564;
  double t11568;
  double t11578;
  double t11874;
  double t11709;
  double t11710;
  double t11722;
  double t11740;
  double t11783;
  double t11788;
  double t11789;
  double t11790;
  double t2677;
  double t12518;
  double t12417;
  double t12456;
  double t12464;
  double t2873;
  double t12877;
  double t12879;
  double t12907;
  double t12914;
  double t12980;
  double t12982;
  double t12987;
  double t12994;
  double t12923;
  double t12932;
  double t12959;
  double t12981;
  double t13011;
  double t13015;
  double t13019;
  double t13023;
  double t13030;
  double t12870;
  double t13230;
  double t13238;
  double t13242;
  double t13244;
  double t13245;
  double t13248;
  double t13250;
  double t13252;
  double t13262;
  double t13266;
  double t13275;
  double t13291;
  double t13295;
  double t13304;
  double t13076;
  double t13253;
  double t13259;
  double t13260;
  double t13078;
  double t13082;
  double t13285;
  double t13305;
  double t13309;
  double t13312;
  double t13317;
  double t13318;
  double t13142;
  double t13189;
  double t13191;
  double t13192;
  double t10748;
  double t10935;
  double t11469;
  double t11476;
  double t11660;
  double t11661;
  double t11746;
  double t11753;
  double t13454;
  double t13459;
  double t11873;
  double t11887;
  double t11952;
  double t11961;
  double t13505;
  double t13515;
  double t13518;
  double t13524;
  double t13525;
  double t12050;
  double t12109;
  double t12289;
  double t12300;
  double t13560;
  double t13571;
  double t13573;
  double t12962;
  double t13077;
  double t13149;
  double t13190;
  double t13671;
  double t13261;
  double t13698;
  double t13713;
  double t13331;
  double t13725;
  double t13365;
  double t13737;
  double t13738;
  double t13403;
  double t13949;
  double t13951;
  double t13953;
  double t13964;
  double t13973;
  double t13976;
  double t13977;
  double t13983;
  double t14068;
  double t14077;
  double t14080;
  double t14082;
  double t14088;
  double t14111;
  t189 = Cos(var1[17]);
  t235 = Sin(var1[16]);
  t317 = -1.*t189*t235;
  t343 = Cos(var1[16]);
  t378 = Sin(var1[17]);
  t379 = -1.*t343*t378;
  t409 = 0. + t317 + t379;
  t133 = Cos(var1[4]);
  t152 = Cos(var1[15]);
  t188 = Cos(var1[5]);
  t475 = Sin(var1[15]);
  t729 = t343*t189;
  t755 = -1.*t235*t378;
  t776 = 0. + t729 + t755;
  t557 = Sin(var1[5]);
  t2025 = t317 + t379;
  t1986 = Sin(var1[4]);
  t2224 = -1.*t343*t189;
  t2227 = t235*t378;
  t2231 = t2224 + t2227;
  t1816 = t729 + t755;
  t2005 = t1816*t1986;
  t2078 = -1.*t188*t475*t2025;
  t2134 = -1.*t152*t2025*t557;
  t2135 = t2078 + t2134;
  t2141 = t133*t2135;
  t2153 = t2005 + t2141;
  t2160 = 0.004820000000000004*t2153;
  t2169 = t2025*t1986;
  t2251 = -1.*t188*t475*t2231;
  t2268 = -1.*t152*t2231*t557;
  t2279 = t2251 + t2268;
  t2287 = t133*t2279;
  t2290 = t2169 + t2287;
  t2307 = -0.03856*t2290;
  t2408 = t2160 + t2307;
  t1164 = -1.*t475*t409;
  t1178 = 0. + t1164;
  t1104 = t152*t409;
  t1128 = 0. + t1104;
  t1317 = -1.*t475*t776;
  t1343 = 0. + t1317;
  t1241 = t152*t776;
  t1262 = 0. + t1241;
  t445 = -1.*t152*t188*t409;
  t673 = t475*t409*t557;
  t717 = t445 + t673;
  t3069 = Cos(var1[3]);
  t3237 = Sin(var1[3]);
  t842 = -1.*t152*t188*t776;
  t848 = t475*t776*t557;
  t870 = t842 + t848;
  t2476 = t188*t1178;
  t2500 = -1.*t1128*t557;
  t2630 = 0. + t2476 + t2500;
  t2739 = t189*t235;
  t2742 = t343*t378;
  t2746 = 0. + t2739 + t2742;
  t2760 = t188*t1343;
  t2776 = -1.*t1262*t557;
  t2807 = 0. + t2760 + t2776;
  t1152 = -1.*t188*t1128;
  t1188 = -1.*t1178*t557;
  t1195 = t1152 + t1188;
  t1265 = -1.*t188*t1262;
  t1472 = -1.*t1343*t557;
  t1601 = t1265 + t1472;
  t5352 = t152*t188*t2025;
  t5430 = -1.*t475*t2025*t557;
  t5447 = t5352 + t5430;
  t5586 = t3069*t5447;
  t5812 = t133*t1816;
  t5844 = -1.*t1986*t2135;
  t5927 = t5812 + t5844;
  t6044 = -1.*t3237*t5927;
  t6070 = t5586 + t6044;
  t6090 = 0.004820000000000004*t6070;
  t6348 = t152*t188*t2231;
  t6349 = -1.*t475*t2231*t557;
  t6427 = t6348 + t6349;
  t6428 = t3069*t6427;
  t6433 = t133*t2025;
  t6442 = -1.*t1986*t2279;
  t6458 = t6433 + t6442;
  t6478 = -1.*t3237*t6458;
  t6848 = t6428 + t6478;
  t6868 = -0.03856*t6848;
  t6969 = t6090 + t6868;
  t2470 = t133*t776;
  t2636 = -1.*t1986*t2630;
  t2756 = t133*t2746;
  t2846 = -1.*t1986*t2807;
  t3088 = -1.*t188*t475*t409;
  t3125 = -1.*t152*t409*t557;
  t3171 = t3088 + t3125;
  t3546 = -1.*t188*t475*t776;
  t3784 = -1.*t152*t776*t557;
  t3853 = t3546 + t3784;
  t4299 = -1.*t776*t1986;
  t4357 = -1.*t133*t2630;
  t4406 = t4299 + t4357;
  t4479 = -1.*t2746*t1986;
  t4506 = -1.*t133*t2807;
  t4524 = t4479 + t4506;
  t4680 = t2476 + t2500;
  t4954 = t2760 + t2776;
  t9232 = t3237*t5447;
  t9234 = t3069*t5927;
  t9237 = t9232 + t9234;
  t9254 = 0.004820000000000004*t9237;
  t9267 = t3237*t6427;
  t9295 = t3069*t6458;
  t9329 = t9267 + t9295;
  t9330 = -0.03856*t9329;
  t9344 = t9254 + t9330;
  t7137 = t188*t1128;
  t7142 = t1178*t557;
  t7175 = 0. + t7137 + t7142;
  t7262 = 0. + t2470 + t2636;
  t7702 = t188*t1262;
  t7805 = t1343*t557;
  t7810 = 0. + t7702 + t7805;
  t8189 = 0. + t2756 + t2846;
  t10396 = -1.*t189;
  t10407 = 1. + t10396;
  t10362 = -0.194401*t235;
  t10411 = -0.336601*t10407;
  t10422 = -0.356601*t189;
  t10436 = -0.16*t378;
  t10440 = 0. + t10411 + t10422 + t10436;
  t10446 = -1.*t235*t10440;
  t10492 = -0.20833*t10407;
  t10530 = -0.36833*t189;
  t10531 = 0.020000000000000018*t378;
  t10549 = 0. + t10492 + t10530 + t10531;
  t10567 = t343*t10549;
  t10571 = 0. + t10362 + t10446 + t10567;
  t10582 = -1.*t475*t10571;
  t10623 = -0.035165*t475;
  t10636 = -1.*t152*t10571;
  t10660 = t10623 + t10636;
  t10346 = 0.035165*t152;
  t10584 = t10346 + t10582;
  t10188 = 0. + t152;
  t10148 = 0. + t475;
  t11046 = t188*t10660;
  t11054 = -1.*t10584*t557;
  t11061 = t11046 + t11054;
  t11066 = t10188*t188;
  t11068 = -1.*t10148*t557;
  t11077 = 0. + t11066 + t11068;
  t10875 = -1.*t152;
  t10877 = 1. + t10875;
  t10878 = 0.081715*t10877;
  t10885 = 0.11688*t152;
  t10915 = t10878 + t10885 + t10582;
  t10846 = 0.035165*t475;
  t10851 = t152*t10571;
  t10855 = t10846 + t10851;
  t11152 = -1.*t188*t475;
  t11217 = -1.*t152*t557;
  t11232 = t11152 + t11217;
  t11242 = -1.*t343;
  t11253 = 1. + t11242;
  t11259 = -0.194401*t11253;
  t11267 = t343*t10440;
  t11277 = t235*t10549;
  t11282 = 0. + t11259 + t11267 + t11277;
  t11288 = t188*t10915;
  t11292 = -1.*t10855*t557;
  t11296 = 0. + t11288 + t11292;
  t10175 = t188*t10148;
  t10238 = t10188*t557;
  t10289 = 0. + t10175 + t10238;
  t10865 = t188*t10855;
  t10921 = t10915*t557;
  t10933 = 0. + t10865 + t10921;
  t11091 = t133*t11077;
  t11103 = 0. + t11091;
  t11285 = t11282*t1986;
  t11298 = t133*t11296;
  t11299 = 0. + t11285 + t11298;
  t11119 = -1.*t1986*t11077;
  t11134 = 0. + t11119;
  t11304 = t133*t11282;
  t11311 = -1.*t1986*t11296;
  t11338 = 0. + t11304 + t11311;
  t10599 = t188*t10584;
  t10703 = t10660*t557;
  t10714 = t10599 + t10703;
  t9810 = t776*t1986;
  t9861 = t133*t2630;
  t10070 = 0. + t9810 + t9861;
  t10787 = t152*t188;
  t10789 = -1.*t475*t557;
  t10845 = t10787 + t10789;
  t11624 = t2746*t1986;
  t11649 = t133*t2807;
  t11653 = 0. + t11624 + t11649;
  t11892 = -1.*t188*t10855;
  t11898 = -1.*t10915*t557;
  t11900 = t11892 + t11898;
  t11923 = -1.*t188*t10148;
  t11924 = -1.*t10188*t557;
  t11934 = t11923 + t11924;
  t11390 = t10289*t10933;
  t11411 = t11103*t11299;
  t11412 = t11134*t11338;
  t11450 = t11390 + t11411 + t11412;
  t11861 = t11288 + t11292;
  t11560 = -1.*t10933*t7175;
  t11564 = -1.*t11299*t10070;
  t11568 = -1.*t11338*t7262;
  t11578 = t11560 + t11564 + t11568;
  t11874 = t11066 + t11068;
  t11709 = -1.*t10289*t10933;
  t11710 = -1.*t11103*t11299;
  t11722 = -1.*t11134*t11338;
  t11740 = t11709 + t11710 + t11722;
  t11783 = t10933*t7810;
  t11788 = t11299*t11653;
  t11789 = t11338*t8189;
  t11790 = t11783 + t11788 + t11789;
  t2677 = t2470 + t2636;
  t12518 = t11304 + t11311;
  t12417 = -1.*t11282*t1986;
  t12456 = -1.*t133*t11296;
  t12464 = t12417 + t12456;
  t2873 = t2756 + t2846;
  t12877 = -0.194401*t343;
  t12879 = -1.*t343*t10440;
  t12907 = -1.*t235*t10549;
  t12914 = t12877 + t12879 + t12907;
  t12980 = t10362 + t10446 + t10567;
  t12982 = -1.*t188*t475*t12914;
  t12987 = -1.*t152*t12914*t557;
  t12994 = t12982 + t12987;
  t12923 = t152*t188*t12914;
  t12932 = -1.*t475*t12914*t557;
  t12959 = t12923 + t12932;
  t12981 = t12980*t1986;
  t13011 = t133*t12994;
  t13015 = t12981 + t13011;
  t13019 = t133*t12980;
  t13023 = -1.*t1986*t12994;
  t13030 = t13019 + t13023;
  t12870 = t2290*t11450;
  t13230 = -0.16*t189;
  t13238 = t13230 + t10531;
  t13242 = -1.*t235*t13238;
  t13244 = 0.020000000000000018*t189;
  t13245 = 0.16*t378;
  t13248 = t13244 + t13245;
  t13250 = t343*t13248;
  t13252 = t13242 + t13250;
  t13262 = t343*t13238;
  t13266 = t235*t13248;
  t13275 = t13262 + t13266;
  t13291 = -1.*t188*t475*t13252;
  t13295 = -1.*t152*t13252*t557;
  t13304 = t13291 + t13295;
  t13076 = -1.*t10933*t6427;
  t13253 = t152*t188*t13252;
  t13259 = -1.*t475*t13252*t557;
  t13260 = t13253 + t13259;
  t13078 = -1.*t11299*t2290;
  t13082 = -1.*t11338*t6458;
  t13285 = t13275*t1986;
  t13305 = t133*t13304;
  t13309 = t13285 + t13305;
  t13312 = t133*t13275;
  t13317 = -1.*t1986*t13304;
  t13318 = t13312 + t13317;
  t13142 = t2153*t11740;
  t13189 = t10933*t5447;
  t13191 = t11299*t2153;
  t13192 = t11338*t5927;
  t10748 = t10289*t10714;
  t10935 = t10845*t10933;
  t11469 = -1.*t10933*t3171;
  t11476 = -1.*t10714*t7175;
  t11660 = -1.*t10289*t10714;
  t11661 = -1.*t10845*t10933;
  t11746 = t10933*t3853;
  t11753 = t10714*t7810;
  t13454 = t11077*t11296;
  t13459 = 0. + t13454 + t11390;
  t11873 = t10289*t11861;
  t11887 = t11874*t10933;
  t11952 = -1.*t10933*t4680;
  t11961 = -1.*t11861*t7175;
  t13505 = -1.*t11282*t776;
  t13515 = -1.*t11296*t2630;
  t13518 = t13505 + t13515 + t11560;
  t13524 = -1.*t11077*t11296;
  t13525 = 0. + t13524 + t11709;
  t12050 = -1.*t10289*t11861;
  t12109 = -1.*t11874*t10933;
  t12289 = t10933*t4954;
  t12300 = t11861*t7810;
  t13560 = t11282*t2746;
  t13571 = t11296*t2807;
  t13573 = t13560 + t13571 + t11783;
  t12962 = t10289*t12959;
  t13077 = -1.*t12959*t7175;
  t13149 = -1.*t10289*t12959;
  t13190 = t12959*t7810;
  t13671 = t6427*t13459;
  t13261 = t10289*t13260;
  t13698 = -1.*t11282*t2025;
  t13713 = -1.*t11296*t2279;
  t13331 = -1.*t13260*t7175;
  t13725 = t5447*t13525;
  t13365 = -1.*t10289*t13260;
  t13737 = t11282*t1816;
  t13738 = t11296*t2135;
  t13403 = t13260*t7810;
  t13949 = -1.*t10148*t10855;
  t13951 = -1.*t10188*t10915;
  t13953 = 0. + t13949 + t13951;
  t13964 = t13953*t1816;
  t13973 = t10148*t10855;
  t13976 = t10188*t10915;
  t13977 = 0. + t13973 + t13976;
  t13983 = t13977*t2025;
  t14068 = 0.00016949530000000016*t2025;
  t14077 = -0.11688*t1816;
  t14080 = -0.081715*t2231;
  t14082 = t14077 + t14080;
  t14088 = -0.03856*t14082;
  t14111 = t14068 + t14088;
  p_output1[0]=var2[17]*(-0.5*(-0.03856*t2677 + 0.004820000000000004*t2873)*var2[4] - 0.5*(-0.03856*t1195*t133 + 0.004820000000000004*t133*t1601)*var2[5] - 0.5*(-0.03856*t133*t717 + 0.004820000000000004*t133*t870)*var2[15] - 0.5*t2408*var2[16] - 0.5*t2408*var2[17]);
  p_output1[1]=var2[17]*(-0.5*(-0.03856*(-1.*t3237*t7175 - 1.*t3069*t7262) + 0.004820000000000004*(-1.*t3237*t7810 - 1.*t3069*t8189))*var2[3] - 0.5*(0.03856*t3237*t4406 - 0.004820000000000004*t3237*t4524)*var2[4] - 0.5*(-0.03856*(t1195*t1986*t3237 + t3069*t4680) + 0.004820000000000004*(t1601*t1986*t3237 + t3069*t4954))*var2[5] - 0.5*(-0.03856*(t3069*t3171 + t1986*t3237*t717) + 0.004820000000000004*(t3069*t3853 + t1986*t3237*t870))*var2[15] - 0.5*t6969*var2[16] - 0.5*t6969*var2[17]);
  p_output1[2]=var2[17]*(-0.5*(-0.03856*(t3069*t7175 - 1.*t3237*t7262) + 0.004820000000000004*(t3069*t7810 - 1.*t3237*t8189))*var2[3] - 0.5*(-0.03856*t3069*t4406 + 0.004820000000000004*t3069*t4524)*var2[4] - 0.5*(-0.03856*(-1.*t1195*t1986*t3069 + t3237*t4680) + 0.004820000000000004*(-1.*t1601*t1986*t3069 + t3237*t4954))*var2[5] - 0.5*(-0.03856*(t3171*t3237 - 1.*t1986*t3069*t717) + 0.004820000000000004*(t3237*t3853 - 1.*t1986*t3069*t870))*var2[15] - 0.5*t9344*var2[16] - 0.5*t9344*var2[17]);
  p_output1[3]=var2[17]*(-0.5*(0.004820000000000004*(-1.*t11077*t11578*t1986 + t10070*(t11134*t12464 + t11103*t12518 - 1.*t11077*t11338*t133 - 1.*t11077*t11299*t1986) + t11450*t2677 + t11103*(-1.*t10070*t12518 - 1.*t11299*t2677 - 1.*t11338*t4406 - 1.*t12464*t7262)) - 0.03856*(-1.*t11077*t11790*t1986 + t11653*(-1.*t11134*t12464 - 1.*t11103*t12518 + t11077*t11338*t133 + t11077*t11299*t1986) + t11740*t2873 + t11103*(t11653*t12518 + t11299*t2873 + t11338*t4524 + t12464*t8189)))*var2[4] - 0.5*(0.004820000000000004*(t11578*t11934*t133 + t11450*t1195*t133 + t10070*(t11873 + t11887 + t11103*t11900*t133 + t11299*t11934*t133 - 1.*t11134*t11900*t1986 - 1.*t11338*t11934*t1986) + t11103*(t11952 + t11961 - 1.*t10070*t11900*t133 - 1.*t11299*t1195*t133 + t11338*t1195*t1986 + t11900*t1986*t7262)) - 0.03856*(t11790*t11934*t133 + t11740*t133*t1601 + t11653*(t12050 + t12109 - 1.*t11103*t11900*t133 - 1.*t11299*t11934*t133 + t11134*t11900*t1986 + t11338*t11934*t1986) + t11103*(t12289 + t12300 + t11653*t11900*t133 + t11299*t133*t1601 - 1.*t11338*t1601*t1986 - 1.*t11900*t1986*t8189)))*var2[5] - 0.5*(0.004820000000000004*(t11232*t11578*t133 + t10070*(t10748 + t10935 + t11061*t11103*t133 + t11232*t11299*t133 - 1.*t11061*t11134*t1986 - 1.*t11232*t11338*t1986) + t11450*t133*t717 + t11103*(t11469 + t11476 - 1.*t10070*t11061*t133 - 1.*t11299*t133*t717 + t11338*t1986*t717 + t11061*t1986*t7262)) - 0.03856*(t11232*t11790*t133 + t11653*(t11660 + t11661 - 1.*t11061*t11103*t133 - 1.*t11232*t11299*t133 + t11061*t11134*t1986 + t11232*t11338*t1986) + t11740*t133*t870 + t11103*(t11746 + t11753 + t11061*t11653*t133 - 1.*t11061*t1986*t8189 + t11299*t133*t870 - 1.*t11338*t1986*t870)))*var2[15] - 0.5*(0.004820000000000004*(t12870 + t10070*(t12962 + t11103*t13015 + t11134*t13030) + t11103*(-1.*t10070*t13015 + t13076 + t13077 + t13078 + t13082 - 1.*t13030*t7262)) - 0.03856*(t13142 + t11653*(-1.*t11103*t13015 - 1.*t11134*t13030 + t13149) + t11103*(t11653*t13015 + t13189 + t13190 + t13191 + t13192 + t13030*t8189)))*var2[16] - 0.5*(0.004820000000000004*(t12870 + t10070*(t13261 + t11103*t13309 + t11134*t13318) + t11103*(t13076 + t13078 + t13082 - 1.*t10070*t13309 + t13331 - 1.*t13318*t7262)) - 0.03856*(t13142 + t11653*(-1.*t11103*t13309 - 1.*t11134*t13318 + t13365) + t11103*(t13189 + t13191 + t13192 + t11653*t13309 + t13403 + t13318*t8189)))*var2[17]);
  p_output1[4]=var2[17]*(-0.5*(0.004820000000000004*(t11874*t13518 + t10289*(-1.*t11296*t1195 + t11952 + t11961 - 1.*t11900*t2630) + t13459*t4680 + (t11873 + t11887 + t11077*t11900 + t11296*t11934)*t7175) - 0.03856*(t11874*t13573 + t10289*(t12289 + t12300 + t11296*t1601 + t11900*t2807) + t13525*t4954 + (-1.*t11077*t11900 - 1.*t11296*t11934 + t12050 + t12109)*t7810))*var2[5] - 0.5*(0.004820000000000004*(t10845*t13518 + t13459*t3171 + t10289*(t11469 + t11476 - 1.*t11061*t2630 - 1.*t11296*t717) + (t10748 + t10935 + t11061*t11077 + t11232*t11296)*t7175) - 0.03856*(t10845*t13573 + t13525*t3853 + (-1.*t11061*t11077 - 1.*t11232*t11296 + t11660 + t11661)*t7810 + t10289*(t11746 + t11753 + t11061*t2807 + t11296*t870)))*var2[15] - 0.5*(0.004820000000000004*(t13671 + (t12962 + t11077*t12994)*t7175 + t10289*(t13076 + t13077 + t13698 + t13713 - 1.*t12994*t2630 - 1.*t12980*t776)) - 0.03856*(t13725 + t10289*(t13189 + t13190 + t13737 + t13738 + t12980*t2746 + t12994*t2807) + (-1.*t11077*t12994 + t13149)*t7810))*var2[16] - 0.5*(0.004820000000000004*(t13671 + (t13261 + t11077*t13304)*t7175 + t10289*(t13076 + t13331 + t13698 + t13713 - 1.*t13304*t2630 - 1.*t13275*t776)) - 0.03856*(t13725 + t10289*(t13189 + t13403 + t13737 + t13738 + t13275*t2746 + t13304*t2807) + (-1.*t11077*t13304 + t13365)*t7810))*var2[17]);
  p_output1[5]=var2[17]*(-0.5*(-0.03856*t2746*(-1.*t10148*t10584 - 1.*t10188*t10660 - 1.*t10855*t152 + t10915*t475) + 0.004820000000000004*(t10148*t10584 + t10188*t10660 + t10855*t152 - 1.*t10915*t475)*t776)*var2[15] - 0.5*(-0.03856*(t13964 + t2746*(-1.*t10148*t12914*t152 + t10188*t12914*t475)) + 0.004820000000000004*(t13983 + (t10148*t12914*t152 - 1.*t10188*t12914*t475)*t776))*var2[16] - 0.5*(-0.03856*(t13964 + t2746*(-1.*t10148*t13252*t152 + t10188*t13252*t475)) + 0.004820000000000004*(t13983 + (t10148*t13252*t152 - 1.*t10188*t13252*t475)*t776))*var2[17]);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=var2[17]*(-0.5*t14111*var2[16] - 0.5*t14111*var2[17]);
  p_output1[16]=-0.5*(-0.03856*(0.194401*t189 + t10440*t189 + t13248*t189 - 1.*t10549*t378 + t13238*t378) + 0.004820000000000004*(t10549*t189 - 1.*t13238*t189 + 0.194401*t378 + t10440*t378 + t13248*t378))*Power(var2[17],2);
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

#include "Ce1_vec18_plane.hh"

namespace SymFunction
{

void Ce1_vec18_plane_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
