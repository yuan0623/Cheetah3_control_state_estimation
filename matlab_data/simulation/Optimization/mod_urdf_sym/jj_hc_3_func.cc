/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 13:00:55 GMT-05:00
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
  double t91;
  double t54;
  double t77;
  double t61;
  double t188;
  double t29;
  double t86;
  double t211;
  double t229;
  double t253;
  double t261;
  double t277;
  double t307;
  double t311;
  double t335;
  double t383;
  double t445;
  double t486;
  double t10;
  double t530;
  double t546;
  double t613;
  double t638;
  double t753;
  double t754;
  double t761;
  double t767;
  double t563;
  double t866;
  double t875;
  double t878;
  double t920;
  double t1064;
  double t1074;
  double t1113;
  double t1143;
  double t1145;
  double t1230;
  double t1231;
  double t1241;
  double t1256;
  double t1616;
  double t1627;
  double t1541;
  double t1549;
  double t1584;
  double t1696;
  double t1741;
  double t537;
  double t584;
  double t592;
  double t2040;
  double t2124;
  double t2132;
  double t2135;
  double t2186;
  double t2356;
  double t2362;
  double t2364;
  double t2374;
  double t2380;
  double t2381;
  double t2501;
  double t2505;
  double t2507;
  double t2535;
  double t2537;
  double t2540;
  double t2637;
  double t2639;
  double t2664;
  double t771;
  double t775;
  double t818;
  double t2215;
  double t2813;
  double t2842;
  double t2982;
  double t2988;
  double t2674;
  double t2675;
  double t2681;
  double t2702;
  double t2705;
  double t2722;
  double t2724;
  double t2726;
  double t3126;
  double t3135;
  double t3142;
  double t856;
  double t928;
  double t932;
  double t955;
  double t958;
  double t975;
  double t996;
  double t1008;
  double t1018;
  double t2114;
  double t2136;
  double t2202;
  double t2220;
  double t2221;
  double t2226;
  double t2234;
  double t2243;
  double t2254;
  double t2262;
  double t2885;
  double t2888;
  double t2894;
  double t2916;
  double t2926;
  double t2940;
  double t2941;
  double t2951;
  double t3486;
  double t3496;
  double t3499;
  double t3507;
  double t3511;
  double t3515;
  double t3641;
  double t3657;
  double t3668;
  double t3672;
  double t3692;
  double t3693;
  double t1606;
  double t1640;
  double t1653;
  double t1674;
  double t1756;
  double t1762;
  double t1785;
  double t2037;
  double t2080;
  double t2083;
  double t2087;
  double t2090;
  double t2775;
  double t2780;
  double t2793;
  double t2798;
  double t2807;
  double t3373;
  double t3380;
  double t3383;
  double t3387;
  double t3388;
  double t3393;
  double t3394;
  double t3397;
  double t3418;
  double t1061;
  double t1305;
  double t1329;
  double t1367;
  double t1371;
  double t1407;
  double t1417;
  double t1448;
  double t1475;
  double t2469;
  double t2552;
  double t2560;
  double t2564;
  double t2569;
  double t2581;
  double t2586;
  double t2592;
  double t2593;
  double t2608;
  double t2616;
  double t3143;
  double t3176;
  double t3180;
  double t3181;
  double t3187;
  double t3194;
  double t3204;
  double t3238;
  double t3249;
  double t3759;
  double t3764;
  double t3785;
  double t3789;
  double t3790;
  double t3791;
  double t3805;
  double t3811;
  double t3812;
  double t3620;
  double t3624;
  double t3627;
  double t3634;
  double t3636;
  double t3638;
  double t3697;
  double t3700;
  double t3706;
  double t3708;
  double t3711;
  double t3713;
  double t3715;
  double t3721;
  double t3722;
  double t3421;
  double t2314;
  double t2386;
  double t2387;
  double t2388;
  double t2391;
  double t3896;
  double t3897;
  double t3544;
  double t3941;
  double t3945;
  double t3947;
  double t3949;
  double t3951;
  double t3958;
  double t3970;
  double t3976;
  double t3977;
  double t3992;
  double t4024;
  double t4042;
  double t4047;
  double t4091;
  double t4092;
  double t4082;
  double t4087;
  double t4089;
  double t4103;
  double t4112;
  double t3961;
  double t3963;
  double t3966;
  double t4258;
  double t4272;
  double t4274;
  double t4563;
  double t4569;
  double t3979;
  double t3980;
  double t3986;
  double t4306;
  double t4707;
  double t4545;
  double t4561;
  double t4586;
  double t4587;
  double t4588;
  double t4595;
  double t4596;
  double t4611;
  double t4845;
  double t4018;
  double t4051;
  double t4057;
  double t4071;
  double t4072;
  double t4073;
  double t4074;
  double t4076;
  double t4077;
  double t4248;
  double t4280;
  double t4295;
  double t4325;
  double t4331;
  double t4336;
  double t4337;
  double t4340;
  double t4343;
  double t4344;
  double t4708;
  double t4717;
  double t4741;
  double t4751;
  double t4752;
  double t4753;
  double t4776;
  double t4779;
  double t4993;
  double t4994;
  double t5005;
  double t5006;
  double t5009;
  double t3990;
  double t3996;
  double t3997;
  double t3998;
  double t4003;
  double t4004;
  double t4006;
  double t4007;
  double t4012;
  double t4358;
  double t4362;
  double t4372;
  double t4378;
  double t4393;
  double t4396;
  double t4414;
  double t4416;
  double t4417;
  double t4421;
  double t4436;
  double t4781;
  double t4784;
  double t4789;
  double t4795;
  double t4799;
  double t4802;
  double t4809;
  double t4810;
  double t4822;
  double t4915;
  double t4916;
  double t4936;
  double t4939;
  double t4941;
  double t4942;
  double t4945;
  double t4948;
  double t4958;
  double t4961;
  double t4966;
  double t4972;
  double t4978;
  double t4444;
  double t4452;
  double t4473;
  double t4475;
  double t4480;
  double t4090;
  double t4093;
  double t4095;
  double t4100;
  double t4113;
  double t4119;
  double t4130;
  double t4195;
  double t4212;
  double t4237;
  double t4238;
  double t4245;
  double t4652;
  double t4660;
  double t4688;
  double t4689;
  double t4691;
  double t5067;
  double t5069;
  double t5070;
  double t5073;
  double t5080;
  double t5088;
  double t5093;
  double t5094;
  double t4886;
  double t4887;
  double t4895;
  double t4897;
  double t4903;
  double t4905;
  double t4909;
  double t4911;
  double t5240;
  double t5242;
  double t5253;
  double t5265;
  double t5271;
  double t5291;
  double t5295;
  double t5311;
  double t5357;
  double t5359;
  double t5334;
  double t5335;
  double t5341;
  double t5382;
  double t5397;
  double t5255;
  double t5257;
  double t5259;
  double t5495;
  double t5508;
  double t5510;
  double t5556;
  double t5558;
  double t5561;
  double t5604;
  double t5609;
  double t5276;
  double t5285;
  double t5286;
  double t5603;
  double t5613;
  double t5614;
  double t5617;
  double t5619;
  double t5624;
  double t5626;
  double t5628;
  double t5571;
  double t5674;
  double t5700;
  double t5290;
  double t5314;
  double t5318;
  double t5319;
  double t5321;
  double t5324;
  double t5326;
  double t5328;
  double t5330;
  double t5554;
  double t5563;
  double t5567;
  double t5574;
  double t5585;
  double t5589;
  double t5593;
  double t5594;
  double t5598;
  double t5599;
  double t5706;
  double t5710;
  double t5712;
  double t5725;
  double t5728;
  double t5742;
  double t5745;
  double t5755;
  double t5494;
  double t5518;
  double t5520;
  double t5521;
  double t5876;
  double t5877;
  double t5879;
  double t5349;
  double t5361;
  double t5363;
  double t5381;
  double t5399;
  double t5402;
  double t5404;
  double t5441;
  double t5451;
  double t5461;
  double t5464;
  double t5466;
  double t5653;
  double t5654;
  double t5655;
  double t5658;
  double t5661;
  double t5829;
  double t5830;
  double t5831;
  double t5847;
  double t5849;
  double t5854;
  double t5855;
  double t5859;
  double t5861;
  t91 = Cos(var1[3]);
  t54 = Cos(var1[5]);
  t77 = Sin(var1[4]);
  t61 = Sin(var1[3]);
  t188 = Sin(var1[5]);
  t29 = Cos(var1[6]);
  t86 = -1.*t54*t61*t77;
  t211 = t91*t188;
  t229 = t86 + t211;
  t253 = t29*t229;
  t261 = t91*t54*t77;
  t277 = t61*t188;
  t307 = t261 + t277;
  t311 = Sin(var1[6]);
  t335 = -1.*t311;
  t383 = 0. + t335;
  t445 = t307*t383;
  t486 = t253 + t445;
  t10 = Cos(var1[8]);
  t530 = Sin(var1[7]);
  t546 = Cos(var1[7]);
  t613 = t54*t61*t77;
  t638 = -1.*t91*t188;
  t753 = t613 + t638;
  t754 = -1.*t29*t753;
  t761 = -1.*t307*t311;
  t767 = t754 + t761;
  t563 = Sin(var1[8]);
  t866 = Cos(var1[4]);
  t875 = t91*t866*t54*t29;
  t878 = t866*t54*t61*t383;
  t920 = t875 + t878;
  t1064 = t54*t61;
  t1074 = -1.*t91*t77*t188;
  t1113 = t1064 + t1074;
  t1143 = t29*t1113;
  t1145 = -1.*t91*t54;
  t1230 = -1.*t61*t77*t188;
  t1231 = t1145 + t1230;
  t1241 = t1231*t383;
  t1256 = t1143 + t1241;
  t1616 = t866*t54;
  t1627 = 0. + t1616;
  t1541 = t29*t307;
  t1549 = t753*t383;
  t1584 = 0. + t1541 + t1549;
  t1696 = t1627*t546;
  t1741 = -1.*t1584*t530;
  t537 = -1.*t10*t486*t530;
  t584 = -1.*t546*t486*t563;
  t592 = t537 + t584;
  t2040 = 0. + t10;
  t2124 = -1.*t866*t54*t29*t61;
  t2132 = t91*t866*t54*t383;
  t2135 = t2124 + t2132;
  t2186 = 0. + t29;
  t2356 = -1.*t91*t54*t77;
  t2362 = -1.*t61*t188;
  t2364 = t2356 + t2362;
  t2374 = t29*t2364;
  t2380 = t229*t383;
  t2381 = t2374 + t2380;
  t2501 = t91*t54;
  t2505 = t61*t77*t188;
  t2507 = t2501 + t2505;
  t2535 = t29*t2507;
  t2537 = t1113*t383;
  t2540 = t2535 + t2537;
  t2637 = -1.*t29*t307;
  t2639 = -1.*t229*t311;
  t2664 = t2637 + t2639;
  t771 = -1.*t10*t767*t530;
  t775 = -1.*t546*t767*t563;
  t818 = t771 + t775;
  t2215 = -1.*t866*t54*t61*t311;
  t2813 = -1.*t91*t866*t54*t311;
  t2842 = t2124 + t2813;
  t2982 = t753*t311;
  t2988 = t2637 + t2982;
  t2674 = -0.25*t546*t2664;
  t2675 = t253 + t761;
  t2681 = -0.037*t2675;
  t2702 = t546*t2040*t2664;
  t2705 = -1.*t2664*t530*t563;
  t2722 = t2702 + t2705;
  t2724 = -0.27*t2722;
  t2726 = t2674 + t2681 + t2724;
  t3126 = -1.*t29*t1231;
  t3135 = -1.*t1113*t311;
  t3142 = t3126 + t3135;
  t856 = -1.*t54*t546*t77;
  t928 = -1.*t920*t530;
  t932 = t856 + t928;
  t955 = t10*t932;
  t958 = t546*t920;
  t975 = -1.*t54*t77*t530;
  t996 = t958 + t975;
  t1008 = -1.*t996*t563;
  t1018 = t955 + t1008;
  t2114 = -0.0875*t91*t866*t54;
  t2136 = -0.25*t546*t2135;
  t2202 = t91*t866*t54*t2186;
  t2220 = t2202 + t2215;
  t2221 = -0.037*t2220;
  t2226 = t546*t2040*t2135;
  t2234 = -1.*t2135*t530*t563;
  t2243 = t2226 + t2234;
  t2254 = -0.27*t2243;
  t2262 = t2114 + t2136 + t2221 + t2254;
  t2885 = -0.25*t546*t2842;
  t2888 = t875 + t2215;
  t2894 = -0.037*t2888;
  t2916 = t546*t2040*t2842;
  t2926 = -1.*t2842*t530*t563;
  t2940 = t2916 + t2926;
  t2941 = -0.27*t2940;
  t2951 = t2885 + t2894 + t2941;
  t3486 = -1.*t91*t54*t29*t77;
  t3496 = -1.*t54*t61*t77*t383;
  t3499 = t3486 + t3496;
  t3507 = t546*t3499;
  t3511 = -1.*t866*t54*t530;
  t3515 = t3507 + t3511;
  t3641 = -1.*t91*t866*t29*t188;
  t3657 = -1.*t866*t61*t188*t383;
  t3668 = t3641 + t3657;
  t3672 = t546*t3668;
  t3692 = t77*t188*t530;
  t3693 = t3672 + t3692;
  t1606 = -1.*t546*t1584;
  t1640 = -1.*t1627*t530;
  t1653 = t1606 + t1640;
  t1674 = t10*t1653;
  t1756 = t1696 + t1741;
  t1762 = -1.*t1756*t563;
  t1785 = t1674 + t1762;
  t2037 = 0.25*t486*t530;
  t2080 = -1.*t2040*t486*t530;
  t2083 = t2080 + t584;
  t2087 = -0.27*t2083;
  t2090 = t2037 + t2087;
  t2775 = 0.25*t767*t530;
  t2780 = -1.*t2040*t767*t530;
  t2793 = t2780 + t775;
  t2798 = -0.27*t2793;
  t2807 = t2775 + t2798;
  t3373 = -0.25*t932;
  t3380 = t2040*t932;
  t3383 = -1.*t546*t920;
  t3387 = t54*t77*t530;
  t3388 = t3383 + t3387;
  t3393 = t3388*t563;
  t3394 = t3380 + t3393;
  t3397 = -0.27*t3394;
  t3418 = t3373 + t3397;
  t1061 = -1.*t866*t546*t188;
  t1305 = -1.*t1256*t530;
  t1329 = t1061 + t1305;
  t1367 = t10*t1329;
  t1371 = t546*t1256;
  t1407 = -1.*t866*t188*t530;
  t1417 = t1371 + t1407;
  t1448 = -1.*t1417*t563;
  t1475 = t1367 + t1448;
  t2469 = -0.0875*t1113;
  t2552 = -0.25*t546*t2540;
  t2560 = t2186*t1113;
  t2564 = t2507*t311;
  t2569 = t2560 + t2564;
  t2581 = -0.037*t2569;
  t2586 = t546*t2040*t2540;
  t2592 = -1.*t2540*t530*t563;
  t2593 = t2586 + t2592;
  t2608 = -0.27*t2593;
  t2616 = t2469 + t2552 + t2581 + t2608;
  t3143 = -0.25*t546*t3142;
  t3176 = -1.*t1231*t311;
  t3180 = t1143 + t3176;
  t3181 = -0.037*t3180;
  t3187 = t546*t2040*t3142;
  t3194 = -1.*t3142*t530*t563;
  t3204 = t3187 + t3194;
  t3238 = -0.27*t3204;
  t3249 = t3143 + t3181 + t3238;
  t3759 = -0.25*t1329;
  t3764 = t2040*t1329;
  t3785 = -1.*t546*t1256;
  t3789 = t866*t188*t530;
  t3790 = t3785 + t3789;
  t3791 = t3790*t563;
  t3805 = t3764 + t3791;
  t3811 = -0.27*t3805;
  t3812 = t3759 + t3811;
  t3620 = 0.0875*t866*t61*t188;
  t3624 = 0.21935*t77*t188;
  t3627 = -1.*t866*t2186*t61*t188;
  t3634 = -1.*t91*t866*t188*t311;
  t3636 = t3627 + t3634;
  t3638 = -0.037*t3636;
  t3697 = -0.25*t3693;
  t3700 = t2040*t3693;
  t3706 = t546*t77*t188;
  t3708 = -1.*t3668*t530;
  t3711 = t3706 + t3708;
  t3713 = t3711*t563;
  t3715 = t3700 + t3713;
  t3721 = -0.27*t3715;
  t3722 = t3620 + t3624 + t3638 + t3697 + t3721;
  t3421 = -0.21935*t866*t54;
  t2314 = -0.0875*t229;
  t2386 = t2186*t229;
  t2387 = t2364*t311;
  t2388 = t2386 + t2387;
  t2391 = -0.037*t2388;
  t3896 = t546*t2381;
  t3897 = t3896 + t3511;
  t3544 = -1.*t866*t54*t546;
  t3941 = t29*t1231;
  t3945 = -1.*t54*t61;
  t3947 = t91*t77*t188;
  t3949 = t3945 + t3947;
  t3951 = t3949*t383;
  t3958 = t3941 + t3951;
  t3970 = -1.*t29*t2507;
  t3976 = -1.*t3949*t311;
  t3977 = t3970 + t3976;
  t3992 = t1541 + t1549;
  t4024 = t91*t866*t29*t188;
  t4042 = t866*t61*t188*t383;
  t4047 = t4024 + t4042;
  t4091 = t866*t188;
  t4092 = 0. + t4091;
  t4082 = t29*t3949;
  t4087 = t2507*t383;
  t4089 = 0. + t4082 + t4087;
  t4103 = t546*t4092;
  t4112 = -1.*t4089*t530;
  t3961 = -1.*t10*t3958*t530;
  t3963 = -1.*t546*t3958*t563;
  t3966 = t3961 + t3963;
  t4258 = -1.*t866*t29*t61*t188;
  t4272 = t91*t866*t188*t383;
  t4274 = t4258 + t4272;
  t4563 = -1.*t29*t3949;
  t4569 = t4563 + t3176;
  t3979 = -1.*t10*t3977*t530;
  t3980 = -1.*t546*t3977*t563;
  t3986 = t3979 + t3980;
  t4306 = -1.*t866*t61*t188*t311;
  t4707 = t4258 + t3634;
  t4545 = t3941 + t3976;
  t4561 = -0.037*t4545;
  t4586 = -0.25*t546*t4569;
  t4587 = t546*t2040*t4569;
  t4588 = -1.*t4569*t530*t563;
  t4595 = t4587 + t4588;
  t4596 = -0.27*t4595;
  t4611 = t4561 + t4586 + t4596;
  t4845 = t4563 + t2564;
  t4018 = -1.*t546*t77*t188;
  t4051 = -1.*t4047*t530;
  t4057 = t4018 + t4051;
  t4071 = t10*t4057;
  t4072 = t546*t4047;
  t4073 = -1.*t77*t188*t530;
  t4074 = t4072 + t4073;
  t4076 = -1.*t4074*t563;
  t4077 = t4071 + t4076;
  t4248 = -0.0875*t91*t866*t188;
  t4280 = -0.25*t546*t4274;
  t4295 = t91*t866*t2186*t188;
  t4325 = t4295 + t4306;
  t4331 = -0.037*t4325;
  t4336 = t546*t2040*t4274;
  t4337 = -1.*t4274*t530*t563;
  t4340 = t4336 + t4337;
  t4343 = -0.27*t4340;
  t4344 = t4248 + t4280 + t4331 + t4343;
  t4708 = -0.25*t546*t4707;
  t4717 = t4024 + t4306;
  t4741 = -0.037*t4717;
  t4751 = t546*t2040*t4707;
  t4752 = -1.*t4707*t530*t563;
  t4753 = t4751 + t4752;
  t4776 = -0.27*t4753;
  t4779 = t4708 + t4741 + t4776;
  t4993 = -1.*t91*t29*t77*t188;
  t4994 = -1.*t61*t77*t188*t383;
  t5005 = t4993 + t4994;
  t5006 = t546*t5005;
  t5009 = t5006 + t1407;
  t3990 = t866*t54*t546;
  t3996 = -1.*t3992*t530;
  t3997 = t3990 + t3996;
  t3998 = t10*t3997;
  t4003 = t546*t3992;
  t4004 = t866*t54*t530;
  t4006 = t4003 + t4004;
  t4007 = -1.*t4006*t563;
  t4012 = t3998 + t4007;
  t4358 = -0.0875*t307;
  t4362 = -0.25*t546*t486;
  t4372 = t2186*t307;
  t4378 = t229*t311;
  t4393 = t4372 + t4378;
  t4396 = -0.037*t4393;
  t4414 = t546*t2040*t486;
  t4416 = -1.*t486*t530*t563;
  t4417 = t4414 + t4416;
  t4421 = -0.27*t4417;
  t4436 = t4358 + t4362 + t4396 + t4421;
  t4781 = -1.*t753*t311;
  t4784 = t1541 + t4781;
  t4789 = -0.037*t4784;
  t4795 = -0.25*t546*t767;
  t4799 = t546*t2040*t767;
  t4802 = -1.*t767*t530*t563;
  t4809 = t4799 + t4802;
  t4810 = -0.27*t4809;
  t4822 = t4789 + t4795 + t4810;
  t4915 = -0.0875*t866*t54*t61;
  t4916 = -0.21935*t54*t77;
  t4936 = t866*t54*t2186*t61;
  t4939 = t91*t866*t54*t311;
  t4941 = t4936 + t4939;
  t4942 = -0.037*t4941;
  t4945 = -0.25*t996;
  t4948 = t2040*t996;
  t4958 = t932*t563;
  t4961 = t4948 + t4958;
  t4966 = -0.27*t4961;
  t4972 = t4915 + t4916 + t4942 + t4945 + t4966;
  t4978 = -0.21935*t866*t188;
  t4444 = -0.0875*t1231;
  t4452 = t2186*t1231;
  t4473 = t1113*t311;
  t4475 = t4452 + t4473;
  t4480 = -0.037*t4475;
  t4090 = -1.*t546*t4089;
  t4093 = -1.*t4092*t530;
  t4095 = t4090 + t4093;
  t4100 = t10*t4095;
  t4113 = t4103 + t4112;
  t4119 = -1.*t4113*t563;
  t4130 = t4100 + t4119;
  t4195 = 0.25*t3958*t530;
  t4212 = -1.*t2040*t3958*t530;
  t4237 = t4212 + t3963;
  t4238 = -0.27*t4237;
  t4245 = t4195 + t4238;
  t4652 = 0.25*t3977*t530;
  t4660 = -1.*t2040*t3977*t530;
  t4688 = t4660 + t3980;
  t4689 = -0.27*t4688;
  t4691 = t4652 + t4689;
  t5067 = -0.25*t3997;
  t5069 = t2040*t3997;
  t5070 = -1.*t546*t3992;
  t5073 = t5070 + t3511;
  t5080 = t5073*t563;
  t5088 = t5069 + t5080;
  t5093 = -0.27*t5088;
  t5094 = t5067 + t5093;
  t4886 = -0.25*t4057;
  t4887 = t2040*t4057;
  t4895 = -1.*t546*t4047;
  t4897 = t4895 + t3692;
  t4903 = t4897*t563;
  t4905 = t4887 + t4903;
  t4909 = -0.27*t4905;
  t4911 = t4886 + t4909;
  t5240 = -1.*t866*t29*t61;
  t5242 = t91*t866*t383;
  t5253 = t5240 + t5242;
  t5265 = -1.*t91*t866*t311;
  t5271 = t5240 + t5265;
  t5291 = -1.*t91*t29*t77;
  t5295 = -1.*t61*t77*t383;
  t5311 = t5291 + t5295;
  t5357 = -1.*t77;
  t5359 = 0. + t5357;
  t5334 = t91*t866*t29;
  t5335 = t866*t61*t383;
  t5341 = 0. + t5334 + t5335;
  t5382 = t546*t5359;
  t5397 = -1.*t5341*t530;
  t5255 = -1.*t10*t5253*t530;
  t5257 = -1.*t546*t5253*t563;
  t5259 = t5255 + t5257;
  t5495 = -1.*t91*t866*t29;
  t5508 = -1.*t866*t61*t383;
  t5510 = t5495 + t5508;
  t5556 = t29*t61*t77;
  t5558 = -1.*t91*t77*t383;
  t5561 = t5556 + t5558;
  t5604 = t866*t61*t311;
  t5609 = t5495 + t5604;
  t5276 = -1.*t10*t5271*t530;
  t5285 = -1.*t546*t5271*t563;
  t5286 = t5276 + t5285;
  t5603 = -0.037*t5271;
  t5613 = -0.25*t546*t5609;
  t5614 = t546*t2040*t5609;
  t5617 = -1.*t5609*t530*t563;
  t5619 = t5614 + t5617;
  t5624 = -0.27*t5619;
  t5626 = t5603 + t5613 + t5624;
  t5628 = var2[6]*t5626;
  t5571 = t61*t77*t311;
  t5674 = t91*t77*t311;
  t5700 = t5556 + t5674;
  t5290 = -1.*t866*t546;
  t5314 = -1.*t5311*t530;
  t5318 = t5290 + t5314;
  t5319 = t10*t5318;
  t5321 = t546*t5311;
  t5324 = -1.*t866*t530;
  t5326 = t5321 + t5324;
  t5328 = -1.*t5326*t563;
  t5330 = t5319 + t5328;
  t5554 = 0.0875*t91*t77;
  t5563 = -0.25*t546*t5561;
  t5567 = -1.*t91*t2186*t77;
  t5574 = t5567 + t5571;
  t5585 = -0.037*t5574;
  t5589 = t546*t2040*t5561;
  t5593 = -1.*t5561*t530*t563;
  t5594 = t5589 + t5593;
  t5598 = -0.27*t5594;
  t5599 = t5554 + t5563 + t5585 + t5598;
  t5706 = -0.25*t546*t5700;
  t5710 = t5291 + t5571;
  t5712 = -0.037*t5710;
  t5725 = t546*t2040*t5700;
  t5728 = -1.*t5700*t530*t563;
  t5742 = t5725 + t5728;
  t5745 = -0.27*t5742;
  t5755 = t5706 + t5712 + t5745;
  t5494 = 0.0875*t866*t61;
  t5518 = -1.*t866*t2186*t61;
  t5520 = t5518 + t5265;
  t5521 = -0.037*t5520;
  t5876 = t546*t5510;
  t5877 = t77*t530;
  t5879 = t5876 + t5877;
  t5349 = -1.*t546*t5341;
  t5361 = -1.*t5359*t530;
  t5363 = t5349 + t5361;
  t5381 = t10*t5363;
  t5399 = t5382 + t5397;
  t5402 = -1.*t5399*t563;
  t5404 = t5381 + t5402;
  t5441 = 0.25*t5253*t530;
  t5451 = -1.*t2040*t5253*t530;
  t5461 = t5451 + t5257;
  t5464 = -0.27*t5461;
  t5466 = t5441 + t5464;
  t5653 = 0.25*t5271*t530;
  t5654 = -1.*t2040*t5271*t530;
  t5655 = t5654 + t5285;
  t5658 = -0.27*t5655;
  t5661 = t5653 + t5658;
  t5829 = -0.25*t5318;
  t5830 = t2040*t5318;
  t5831 = -1.*t546*t5311;
  t5847 = t866*t530;
  t5849 = t5831 + t5847;
  t5854 = t5849*t563;
  t5855 = t5830 + t5854;
  t5859 = -0.27*t5855;
  t5861 = t5829 + t5859;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=var2[4]*(t2262*var2[3] + (t3421 - 0.25*t3515 - 0.27*(t2040*t3515 + (t3544 - 1.*t3499*t530)*t563) + 0.0875*t54*t61*t77 - 0.037*(-1.*t2186*t54*t61*t77 - 1.*t311*t54*t77*t91))*var2[4] + t3722*var2[5] + t2951*var2[6] + t3418*var2[7] - 0.27*t1018*var2[8]) + var2[5]*(t2616*var2[3] + t3722*var2[4] + (t2314 + t2391 + t3421 - 0.25*t3897 - 0.27*(t2040*t3897 + (t3544 - 1.*t2381*t530)*t563))*var2[5] + t3249*var2[6] + t3812*var2[7] - 0.27*t1475*var2[8]) + var2[7]*(t2090*var2[3] + t3418*var2[4] + t3812*var2[5] + t2807*var2[6] + (-0.25*t1653 - 0.27*(t1653*t2040 + (t1584*t530 - 1.*t1627*t546)*t563))*var2[7] - 0.27*t1785*var2[8]) + var2[8]*(-0.27*t592*var2[3] - 0.27*t1018*var2[4] - 0.27*t1475*var2[5] - 0.27*t818*var2[6] - 0.27*t1785*var2[7] - 0.27*(-1.*t10*(0. + t1627*t530 + t1584*t546) - 1.*(0. + t1696 + t1741)*t563)*var2[8]) + var2[3]*((t2314 + t2391 - 0.25*t2381*t546 - 0.27*(t2040*t2381*t546 - 1.*t2381*t530*t563))*var2[3] + t2262*var2[4] + t2616*var2[5] + t2726*var2[6] + t2090*var2[7] - 0.27*t592*var2[8]) + var2[6]*(t2726*var2[3] + t2951*var2[4] + t3249*var2[5] + (-0.25*t2988*t546 - 0.27*(t2040*t2988*t546 - 1.*t2988*t530*t563) - 0.037*t767)*var2[6] + t2807*var2[7] - 0.27*t818*var2[8]);
  p_output1[7]=var2[3]*((t4444 + t4480 - 0.25*t1256*t546 - 0.27*(t1256*t2040*t546 - 1.*t1256*t530*t563))*var2[3] + t4344*var2[4] + t4436*var2[5] + t4611*var2[6] + t4245*var2[7] - 0.27*t3966*var2[8]) + var2[6]*(t4611*var2[3] + t4779*var2[4] + t4822*var2[5] + (-0.037*t3977 - 0.25*t4845*t546 - 0.27*(t2040*t4845*t546 - 1.*t4845*t530*t563))*var2[6] + t4691*var2[7] - 0.27*t3986*var2[8]) + var2[5]*(t4436*var2[3] + t4972*var2[4] + (-0.25*t1417 + t4444 + t4480 + t4978 - 0.27*(t1417*t2040 + t1329*t563))*var2[5] + t4822*var2[6] + t5094*var2[7] - 0.27*t4012*var2[8]) + var2[4]*(t4344*var2[3] + (t4978 - 0.25*t5009 - 0.27*(t2040*t5009 + (t1061 - 1.*t5005*t530)*t563) + 0.0875*t188*t61*t77 - 0.037*(-1.*t188*t2186*t61*t77 - 1.*t188*t311*t77*t91))*var2[4] + t4972*var2[5] + t4779*var2[6] + t4911*var2[7] - 0.27*t4077*var2[8]) + var2[7]*(t4245*var2[3] + t4911*var2[4] + t5094*var2[5] + t4691*var2[6] + (-0.25*t4095 - 0.27*(t2040*t4095 + (t4089*t530 - 1.*t4092*t546)*t563))*var2[7] - 0.27*t4130*var2[8]) + var2[8]*(-0.27*t3966*var2[3] - 0.27*t4077*var2[4] - 0.27*t4012*var2[5] - 0.27*t3986*var2[6] - 0.27*t4130*var2[7] - 0.27*(-1.*t10*(0. + t4092*t530 + t4089*t546) - 1.*(0. + t4103 + t4112)*t563)*var2[8]);
  p_output1[8]=var2[3]*(t5628 + (t5494 - 0.25*t546*t5510 + t5521 - 0.27*(t2040*t546*t5510 - 1.*t530*t5510*t563))*var2[3] + t5599*var2[4] + t5466*var2[7] - 0.27*t5259*var2[8]) + var2[6]*(t5628 + t5626*var2[3] + t5755*var2[4] + t5661*var2[7] - 0.27*t5286*var2[8]) + var2[4]*(t5599*var2[3] + (t5494 + t5521 - 0.25*t5879 + 0.21935*t77 - 0.27*(t2040*t5879 + t563*(-1.*t530*t5510 + t546*t77)))*var2[4] + t5755*var2[6] + t5861*var2[7] - 0.27*t5330*var2[8]) + var2[7]*(t5466*var2[3] + t5861*var2[4] + t5661*var2[6] + (-0.25*t5363 - 0.27*(t2040*t5363 + (t530*t5341 - 1.*t5359*t546)*t563))*var2[7] - 0.27*t5404*var2[8]) + var2[8]*(-0.27*t5259*var2[3] - 0.27*t5330*var2[4] - 0.27*t5286*var2[6] - 0.27*t5404*var2[7] - 0.27*(-1.*t10*(0. + t530*t5359 + t5341*t546) - 1.*(0. + t5382 + t5397)*t563)*var2[8]);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "jj_hc_3_func.hh"

namespace SymFunction
{

void jj_hc_3_func_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
