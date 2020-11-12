/*
 * Automatically Generated from Mathematica.
 * Sun 28 Jul 2019 02:53:48 GMT-04:00
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
  double t192;
  double t171;
  double t242;
  double t111;
  double t258;
  double t40;
  double t480;
  double t291;
  double t476;
  double t325;
  double t1188;
  double t1254;
  double t1189;
  double t1195;
  double t1457;
  double t1466;
  double t1474;
  double t1292;
  double t1336;
  double t1372;
  double t1397;
  double t1216;
  double t1219;
  double t1259;
  double t1277;
  double t1529;
  double t1560;
  double t1565;
  double t204;
  double t280;
  double t281;
  double t407;
  double t428;
  double t443;
  double t444;
  double t487;
  double t526;
  double t732;
  double t746;
  double t761;
  double t770;
  double t788;
  double t951;
  double t961;
  double t983;
  double t1053;
  double t1281;
  double t1286;
  double t1432;
  double t1456;
  double t1481;
  double t1483;
  double t1505;
  double t1579;
  double t1582;
  double t1589;
  double t1593;
  double t1597;
  double t1612;
  double t1637;
  double t1648;
  double t1664;
  double t1671;
  double t1691;
  double t1706;
  double t1712;
  double t1717;
  double t1721;
  double t1725;
  double t1730;
  double t1741;
  double t1742;
  double t1745;
  double t1748;
  double t1767;
  double t1953;
  double t1955;
  double t1958;
  double t1965;
  double t1966;
  double t1970;
  double t2012;
  double t2031;
  double t2040;
  double t2125;
  double t2137;
  double t2172;
  double t2345;
  double t2352;
  double t2356;
  double t2334;
  double t2363;
  double t2367;
  double t2435;
  double t2437;
  double t2440;
  double t2456;
  double t2457;
  double t2459;
  double t2477;
  double t2481;
  double t2482;
  double t2487;
  double t2491;
  double t2494;
  double t2561;
  double t2563;
  double t2569;
  double t2572;
  double t2575;
  double t2577;
  double t2586;
  double t2602;
  double t2619;
  double t2661;
  double t2689;
  double t2711;
  double t2522;
  double t2578;
  double t2581;
  double t2782;
  double t2783;
  double t2784;
  double t2389;
  double t2463;
  double t2471;
  double t2299;
  double t2301;
  double t2326;
  double t2931;
  double t2934;
  double t2937;
  double t3132;
  double t3142;
  double t3147;
  double t3158;
  double t3124;
  double t3183;
  double t3186;
  double t3193;
  double t3196;
  double t3197;
  double t3206;
  double t3230;
  double t3244;
  double t3254;
  double t3266;
  double t3267;
  double t3284;
  double t3285;
  double t3297;
  double t3322;
  double t3331;
  double t3333;
  double t3310;
  double t3317;
  double t3318;
  double t3341;
  double t3343;
  double t3350;
  double t3251;
  double t3268;
  double t3272;
  double t3464;
  double t3485;
  double t3492;
  double t3674;
  double t3684;
  double t3693;
  double t3702;
  double t3704;
  double t3708;
  double t3720;
  double t3747;
  double t3754;
  double t3770;
  double t3775;
  double t3776;
  double t2472;
  double t4105;
  double t4130;
  double t4133;
  double t2864;
  double t2963;
  double t4172;
  double t4179;
  double t4184;
  double t3001;
  double t3336;
  double t4426;
  double t4428;
  double t4440;
  double t3381;
  double t3508;
  double t3547;
  double t2585;
  double t2626;
  double t2643;
  double t4158;
  double t4209;
  double t4100;
  double t4139;
  double t2879;
  double t2881;
  double t2882;
  double t2967;
  double t2971;
  double t2974;
  double t4303;
  double t4628;
  double t4640;
  double t4320;
  double t4364;
  double t4366;
  double t3010;
  double t3028;
  double t3048;
  double t3357;
  double t3359;
  double t3370;
  double t4417;
  double t4455;
  double t4487;
  double t4495;
  double t3383;
  double t3388;
  double t3389;
  double t3518;
  double t3520;
  double t3531;
  double t4546;
  double t4551;
  double t4566;
  double t4586;
  double t3555;
  double t3556;
  double t3557;
  double t4891;
  double t4894;
  double t4897;
  double t4955;
  double t4960;
  double t4961;
  double t5049;
  double t5050;
  double t5051;
  double t5057;
  double t5058;
  double t5059;
  double t5075;
  double t5077;
  double t5079;
  double t5097;
  double t5098;
  double t5099;
  double t4074;
  double t4075;
  double t5155;
  double t5161;
  double t5164;
  double t5170;
  double t5171;
  double t5190;
  double t5194;
  double t5200;
  double t4240;
  double t4249;
  double t4254;
  double t4281;
  double t4286;
  double t4325;
  double t4328;
  double t4334;
  double t4384;
  double t4391;
  double t5271;
  double t5272;
  double t5261;
  double t5266;
  double t5267;
  double t4509;
  double t4528;
  double t4530;
  double t4540;
  double t4541;
  double t4592;
  double t4598;
  double t4599;
  double t5187;
  double t5202;
  double t5165;
  double t5175;
  double t5227;
  double t5234;
  double t5243;
  double t5249;
  double t5270;
  double t5288;
  double t5295;
  double t5299;
  double t5315;
  double t5330;
  double t5338;
  double t5340;
  double t5705;
  double t5709;
  double t5712;
  double t5755;
  double t5756;
  double t5762;
  double t5787;
  double t5789;
  double t5791;
  double t1812;
  double t1815;
  double t1820;
  double t1850;
  double t1868;
  double t1885;
  double t5889;
  double t5904;
  double t5908;
  double t5999;
  double t6000;
  double t6003;
  double t6115;
  double t6117;
  double t6120;
  double t6131;
  double t6145;
  double t6147;
  double t6155;
  double t6156;
  double t6346;
  double t6348;
  double t6351;
  double t6352;
  double t6363;
  double t6370;
  double t6378;
  double t6387;
  double t6390;
  double t6404;
  double t6161;
  double t6174;
  double t6622;
  double t6625;
  double t6626;
  double t6640;
  double t6645;
  double t6646;
  double t6232;
  double t5730;
  double t5734;
  double t6270;
  double t6290;
  double t6306;
  double t6406;
  double t6481;
  double t6484;
  double t6831;
  double t6832;
  double t6835;
  double t6754;
  double t6792;
  double t6815;
  double t6539;
  double t5749;
  double t5767;
  double t5768;
  double t6572;
  double t6578;
  double t6981;
  double t6988;
  double t6961;
  double t6962;
  double t6974;
  double t5653;
  double t5655;
  double t5658;
  double t5664;
  double t5668;
  double t5671;
  double t5673;
  double t5675;
  double t6950;
  double t6951;
  double t6975;
  double t6979;
  double t7000;
  double t7007;
  double t7012;
  double t7013;
  double t7014;
  double t5703;
  double t5704;
  double t5715;
  double t5719;
  double t5720;
  double t5747;
  double t5770;
  double t5825;
  double t5843;
  double t5850;
  double t5887;
  double t5945;
  double t6029;
  double t6036;
  double t6037;
  double t6080;
  double t1891;
  double t1893;
  double t1894;
  double t6081;
  double t6092;
  double t6104;
  double t6106;
  double t6345;
  double t7141;
  double t7143;
  double t7144;
  double t6475;
  double t6480;
  double t7145;
  double t7146;
  double t7157;
  double t7172;
  double t7173;
  double t7175;
  double t6561;
  double t6563;
  double t7193;
  double t7194;
  double t7195;
  double t6573;
  double t6751;
  double t7177;
  double t7203;
  double t6845;
  double t6848;
  double t7330;
  double t7331;
  double t7334;
  double t7292;
  double t7315;
  double t7323;
  double t7219;
  double t6914;
  double t7241;
  double t6928;
  double t6930;
  t192 = Cos(var1[7]);
  t171 = Cos(var1[6]);
  t242 = Sin(var1[5]);
  t111 = Cos(var1[5]);
  t258 = Sin(var1[6]);
  t40 = Sin(var1[3]);
  t480 = Sin(var1[7]);
  t291 = Cos(var1[3]);
  t476 = Cos(var1[4]);
  t325 = Sin(var1[4]);
  t1188 = Cos(var1[8]);
  t1254 = Sin(var1[8]);
  t1189 = -1.*t1188;
  t1195 = 1. + t1189;
  t1457 = -1.*t1188*t480;
  t1466 = -1.*t192*t1254;
  t1474 = t1457 + t1466;
  t1292 = 0.100689*t1195;
  t1336 = 0.080689*t1188;
  t1372 = -0.16*t1254;
  t1397 = t1292 + t1336 + t1372;
  t1216 = -0.20833*t1195;
  t1219 = -0.36833*t1188;
  t1259 = 0.02*t1254;
  t1277 = t1216 + t1219 + t1259;
  t1529 = t192*t1188;
  t1560 = -1.*t480*t1254;
  t1565 = t1529 + t1560;
  t204 = t111*t171*t192;
  t280 = t192*t242*t258;
  t281 = t204 + t280;
  t407 = -1.*t171*t192*t242;
  t428 = t111*t192*t258;
  t443 = t407 + t428;
  t444 = -1.*t325*t443;
  t487 = t476*t480;
  t526 = t444 + t487;
  t732 = -1.*t111*t171*t480;
  t746 = -1.*t242*t258*t480;
  t761 = t732 + t746;
  t770 = t476*t192;
  t788 = t171*t242*t480;
  t951 = -1.*t111*t258*t480;
  t961 = t788 + t951;
  t983 = -1.*t325*t961;
  t1053 = t770 + t983;
  t1281 = t1188*t1277;
  t1286 = -0.242889*t1254;
  t1432 = t1397*t1254;
  t1456 = t1281 + t1286 + t1432;
  t1481 = t111*t171*t1474;
  t1483 = t242*t258*t1474;
  t1505 = t1481 + t1483;
  t1579 = t476*t1565;
  t1582 = -1.*t171*t242*t1474;
  t1589 = t111*t258*t1474;
  t1593 = t1582 + t1589;
  t1597 = -1.*t325*t1593;
  t1612 = t1579 + t1597;
  t1637 = 0.242889*t1188;
  t1648 = -1.*t1188*t1397;
  t1664 = t1277*t1254;
  t1671 = t1637 + t1648 + t1664;
  t1691 = t111*t171*t1565;
  t1706 = t242*t258*t1565;
  t1712 = t1691 + t1706;
  t1717 = t1188*t480;
  t1721 = t192*t1254;
  t1725 = t1717 + t1721;
  t1730 = t476*t1725;
  t1741 = -1.*t171*t242*t1565;
  t1742 = t111*t258*t1565;
  t1745 = t1741 + t1742;
  t1748 = -1.*t325*t1745;
  t1767 = t1730 + t1748;
  t1953 = -1.*t476*t443;
  t1955 = -1.*t325*t480;
  t1958 = t1953 + t1955;
  t1965 = -1.*t192*t325;
  t1966 = -1.*t476*t961;
  t1970 = t1965 + t1966;
  t2012 = -1.*t325*t1565;
  t2031 = -1.*t476*t1593;
  t2040 = t2012 + t2031;
  t2125 = -1.*t325*t1725;
  t2137 = -1.*t476*t1745;
  t2172 = t2125 + t2137;
  t2345 = -0.04*t192;
  t2352 = 0.04*t480;
  t2356 = t2345 + t2352;
  t2334 = 0.053565*t258;
  t2363 = t171*t2356;
  t2367 = t2334 + t2363;
  t2435 = -1.*t171;
  t2437 = 1. + t2435;
  t2440 = -0.081715*t2437;
  t2456 = -0.13528*t171;
  t2457 = t258*t2356;
  t2459 = t2440 + t2456 + t2457;
  t2477 = t111*t171;
  t2481 = t242*t258;
  t2482 = t2477 + t2481;
  t2487 = -1.*t242*t2367;
  t2491 = t111*t2459;
  t2494 = t2487 + t2491;
  t2561 = -1.*t192;
  t2563 = 1. + t2561;
  t2569 = 0.242889*t2563;
  t2572 = 0.202889*t192;
  t2575 = -0.04*t480;
  t2577 = t2569 + t2572 + t2575;
  t2586 = t476*t2494;
  t2602 = t325*t2577;
  t2619 = t2586 + t2602;
  t2661 = -1.*t476*t2494;
  t2689 = -1.*t325*t2577;
  t2711 = t2661 + t2689;
  t2522 = -1.*t325*t2494;
  t2578 = t476*t2577;
  t2581 = t2522 + t2578;
  t2782 = t476*t443;
  t2783 = t325*t480;
  t2784 = t2782 + t2783;
  t2389 = t111*t2367;
  t2463 = t242*t2459;
  t2471 = t2389 + t2463;
  t2299 = t171*t242;
  t2301 = -1.*t111*t258;
  t2326 = t2299 + t2301;
  t2931 = t192*t325;
  t2934 = t476*t961;
  t2937 = t2931 + t2934;
  t3132 = 0.242889*t480;
  t3142 = -1.*t480*t1397;
  t3147 = t192*t1277;
  t3158 = t3132 + t3142 + t3147;
  t3124 = 0.032875*t258;
  t3183 = t171*t3158;
  t3186 = t3124 + t3183;
  t3193 = -1.*t242*t3186;
  t3196 = -0.11459*t171;
  t3197 = t258*t3158;
  t3206 = t2440 + t3196 + t3197;
  t3230 = t111*t3206;
  t3244 = t3193 + t3230;
  t3254 = t192*t1397;
  t3266 = t480*t1277;
  t3267 = t2569 + t3254 + t3266;
  t3284 = t476*t3244;
  t3285 = t325*t3267;
  t3297 = t3284 + t3285;
  t3322 = t111*t3186;
  t3331 = t242*t3206;
  t3333 = t3322 + t3331;
  t3310 = t325*t1565;
  t3317 = t476*t1593;
  t3318 = t3310 + t3317;
  t3341 = -1.*t325*t3244;
  t3343 = t476*t3267;
  t3350 = t3341 + t3343;
  t3251 = -1.*t476*t3244;
  t3268 = -1.*t325*t3267;
  t3272 = t3251 + t3268;
  t3464 = t325*t1725;
  t3485 = t476*t1745;
  t3492 = t3464 + t3485;
  t3674 = -1.*t111*t171*t192;
  t3684 = -1.*t192*t242*t258;
  t3693 = t3674 + t3684;
  t3702 = t111*t171*t480;
  t3704 = t242*t258*t480;
  t3708 = t3702 + t3704;
  t3720 = -1.*t111*t171*t1474;
  t3747 = -1.*t242*t258*t1474;
  t3754 = t3720 + t3747;
  t3770 = -1.*t111*t171*t1565;
  t3775 = -1.*t242*t258*t1565;
  t3776 = t3770 + t3775;
  t2472 = -1.*t2326*t2471;
  t4105 = -1.*t111*t2367;
  t4130 = -1.*t242*t2459;
  t4133 = t4105 + t4130;
  t2864 = t281*t2471;
  t2963 = t2326*t2471;
  t4172 = -1.*t171*t242;
  t4179 = t111*t258;
  t4184 = t4172 + t4179;
  t3001 = -1.*t2471*t761;
  t3336 = t2326*t3333;
  t4426 = -1.*t111*t3186;
  t4428 = -1.*t242*t3206;
  t4440 = t4426 + t4428;
  t3381 = -1.*t3333*t1505;
  t3508 = -1.*t2326*t3333;
  t3547 = t3333*t1712;
  t2585 = t325*t2482*t2581;
  t2626 = -1.*t476*t2482*t2619;
  t2643 = t2472 + t2585 + t2626;
  t4158 = -1.*t2326*t2494;
  t4209 = -1.*t2482*t2471;
  t4100 = t281*t2494;
  t4139 = t443*t2471;
  t2879 = t2581*t526;
  t2881 = t2619*t2784;
  t2882 = t2864 + t2879 + t2881;
  t2967 = -1.*t325*t2482*t2581;
  t2971 = t476*t2482*t2619;
  t2974 = t2963 + t2967 + t2971;
  t4303 = t2326*t2494;
  t4628 = Power(t476,2);
  t4640 = Power(t325,2);
  t4320 = t2482*t2471;
  t4364 = -1.*t2471*t961;
  t4366 = -1.*t2494*t761;
  t3010 = -1.*t2619*t2937;
  t3028 = -1.*t2581*t1053;
  t3048 = t3001 + t3010 + t3028;
  t3357 = -1.*t325*t2482*t3350;
  t3359 = t476*t2482*t3297;
  t3370 = t3336 + t3357 + t3359;
  t4417 = t2326*t3244;
  t4455 = t2482*t3333;
  t4487 = -1.*t3333*t1593;
  t4495 = -1.*t3244*t1505;
  t3383 = -1.*t3297*t3318;
  t3388 = -1.*t3350*t1612;
  t3389 = t3381 + t3383 + t3388;
  t3518 = t325*t2482*t3350;
  t3520 = -1.*t476*t2482*t3297;
  t3531 = t3508 + t3518 + t3520;
  t4546 = -1.*t2326*t3244;
  t4551 = -1.*t2482*t3333;
  t4566 = t3333*t1745;
  t4586 = t3244*t1712;
  t3555 = t3297*t3492;
  t3556 = t3350*t1767;
  t3557 = t3547 + t3555 + t3556;
  t4891 = 0.053565*t171;
  t4894 = -1.*t258*t2356;
  t4897 = t4891 + t4894;
  t4955 = 0.032875*t171;
  t4960 = -1.*t258*t3158;
  t4961 = t4955 + t4960;
  t5049 = t171*t192*t242;
  t5050 = -1.*t111*t192*t258;
  t5051 = t5049 + t5050;
  t5057 = -1.*t171*t242*t480;
  t5058 = t111*t258*t480;
  t5059 = t5057 + t5058;
  t5075 = t171*t242*t1474;
  t5077 = -1.*t111*t258*t1474;
  t5079 = t5075 + t5077;
  t5097 = t171*t242*t1565;
  t5098 = -1.*t111*t258*t1565;
  t5099 = t5097 + t5098;
  t4074 = -1.*t2482*t2494;
  t4075 = t4074 + t2472;
  t5155 = t242*t2367;
  t5161 = t111*t4897;
  t5164 = t5155 + t5161;
  t5170 = -1.*t242*t4897;
  t5171 = t2389 + t5170;
  t5190 = -1.*t111*t171;
  t5194 = -1.*t242*t258;
  t5200 = t5190 + t5194;
  t4240 = t443*t2494;
  t4249 = t2577*t480;
  t4254 = t4240 + t2864 + t4249;
  t4281 = t2482*t2494;
  t4286 = t4281 + t2963;
  t4325 = -1.*t192*t2577;
  t4328 = -1.*t2494*t961;
  t4334 = t4325 + t4328 + t3001;
  t4384 = t2482*t3244;
  t4391 = t4384 + t3336;
  t5271 = -1.*t242*t4961;
  t5272 = t3322 + t5271;
  t5261 = t242*t3186;
  t5266 = t111*t4961;
  t5267 = t5261 + t5266;
  t4509 = -1.*t3267*t1565;
  t4528 = -1.*t3244*t1593;
  t4530 = t4509 + t4528 + t3381;
  t4540 = -1.*t2482*t3244;
  t4541 = t4540 + t3508;
  t4592 = t3267*t1725;
  t4598 = t3244*t1745;
  t4599 = t4592 + t4598 + t3547;
  t5187 = -1.*t2326*t5164;
  t5202 = -1.*t5200*t2471;
  t5165 = t281*t5164;
  t5175 = t5051*t2471;
  t5227 = t2326*t5164;
  t5234 = t5200*t2471;
  t5243 = -1.*t2471*t5059;
  t5249 = -1.*t5164*t761;
  t5270 = t2326*t5267;
  t5288 = t5200*t3333;
  t5295 = -1.*t3333*t5079;
  t5299 = -1.*t5267*t1505;
  t5315 = -1.*t2326*t5267;
  t5330 = -1.*t5200*t3333;
  t5338 = t3333*t5099;
  t5340 = t5267*t1712;
  t5705 = -1.*t192*t1188;
  t5709 = t480*t1254;
  t5712 = t5705 + t5709;
  t5755 = -1.*t171*t242*t5712;
  t5756 = t111*t258*t5712;
  t5762 = t5755 + t5756;
  t5787 = -1.*t325*t5051;
  t5789 = -1.*t476*t480;
  t5791 = t5787 + t5789;
  t1812 = t291*t761;
  t1815 = -1.*t40*t1053;
  t1820 = t1812 + t1815;
  t1850 = t291*t1505;
  t1868 = -1.*t40*t1612;
  t1885 = t1850 + t1868;
  t5889 = t111*t171*t5712;
  t5904 = t242*t258*t5712;
  t5908 = t5889 + t5904;
  t5999 = t476*t1474;
  t6000 = -1.*t325*t5762;
  t6003 = t5999 + t6000;
  t6115 = 0.04*t192;
  t6117 = t6115 + t2352;
  t6120 = -1.*t171*t242*t6117;
  t6131 = t111*t258*t6117;
  t6145 = t6120 + t6131;
  t6147 = t111*t171*t6117;
  t6155 = t242*t258*t6117;
  t6156 = t6147 + t6155;
  t6346 = 0.242889*t192;
  t6348 = -1.*t192*t1397;
  t6351 = -1.*t480*t1277;
  t6352 = t6346 + t6348 + t6351;
  t6363 = -1.*t171*t242*t6352;
  t6370 = t111*t258*t6352;
  t6378 = t6363 + t6370;
  t6387 = t111*t171*t6352;
  t6390 = t242*t258*t6352;
  t6404 = t6387 + t6390;
  t6161 = -1.*t2326*t6156;
  t6174 = t281*t6156;
  t6622 = -1.*t325*t6145;
  t6625 = t476*t2356;
  t6626 = t6622 + t6625;
  t6640 = t476*t6145;
  t6645 = t325*t2356;
  t6646 = t6640 + t6645;
  t6232 = t2471*t761;
  t5730 = t476*t5051;
  t5734 = t5730 + t1955;
  t6270 = t2326*t6156;
  t6290 = -1.*t3693*t2471;
  t6306 = -1.*t6156*t761;
  t6406 = -1.*t2326*t6404;
  t6481 = t3333*t1505;
  t6484 = t6404*t1712;
  t6831 = t476*t6378;
  t6832 = t325*t3158;
  t6835 = t6831 + t6832;
  t6754 = -1.*t325*t6378;
  t6792 = t476*t3158;
  t6815 = t6754 + t6792;
  t6539 = t2326*t6404;
  t5749 = t325*t1474;
  t5767 = t476*t5762;
  t5768 = t5749 + t5767;
  t6572 = -1.*t6404*t1505;
  t6578 = -1.*t3333*t5908;
  t6981 = -0.16*t1188;
  t6988 = t6981 + t1259;
  t6961 = 0.02*t1188;
  t6962 = 0.16*t1254;
  t6974 = t6961 + t6962;
  t5653 = t258*t3186;
  t5655 = -1.*t171*t3206;
  t5658 = t5653 + t5655;
  t5664 = -0.241*t5658*t1565*t1456;
  t5668 = -1.*t258*t3186;
  t5671 = t171*t3206;
  t5673 = t5668 + t5671;
  t5675 = -0.241*t5673*t1474*t1671;
  t6950 = -0.242889*t1188;
  t6951 = t1188*t1397;
  t6975 = t1188*t6974;
  t6979 = -1.*t1277*t1254;
  t7000 = t6988*t1254;
  t7007 = t6950 + t6951 + t6975 + t6979 + t7000;
  t7012 = -1.*t1188*t6988;
  t7013 = t6974*t1254;
  t7014 = t1281 + t7012 + t1286 + t1432 + t7013;
  t5703 = -0.007922875*t1474*t1671;
  t5704 = -0.11459*t1565;
  t5715 = -0.081715*t5712;
  t5719 = t5704 + t5715;
  t5720 = -0.241*t1456*t5719;
  t5747 = -0.241*t1671*t3318;
  t5770 = -0.241*t1456*t5768;
  t5825 = t40*t1505;
  t5843 = t291*t1612;
  t5850 = t5825 + t5843;
  t5887 = -0.241*t1671*t5850;
  t5945 = t40*t5908;
  t6029 = t291*t6003;
  t6036 = t5945 + t6029;
  t6037 = -0.241*t1456*t6036;
  t6080 = -0.241*t1671*t1885;
  t1891 = t291*t1712;
  t1893 = -1.*t40*t1767;
  t1894 = t1891 + t1893;
  t6081 = t291*t5908;
  t6092 = -1.*t40*t6003;
  t6104 = t6081 + t6092;
  t6106 = -0.241*t1456*t6104;
  t6345 = t4541*t1505;
  t7141 = -1.*t480*t6988;
  t7143 = t192*t6974;
  t7144 = t7141 + t7143;
  t6475 = t3267*t1565;
  t6480 = t3244*t1593;
  t7145 = -1.*t171*t242*t7144;
  t7146 = t111*t258*t7144;
  t7157 = t7145 + t7146;
  t7172 = t111*t171*t7144;
  t7173 = t242*t258*t7144;
  t7175 = t7172 + t7173;
  t6561 = t4391*t5908;
  t6563 = -1.*t3267*t1474;
  t7193 = t192*t6988;
  t7194 = t480*t6974;
  t7195 = t7193 + t7194;
  t6573 = -1.*t3244*t5762;
  t6751 = t3531*t3318;
  t7177 = -1.*t2326*t7175;
  t7203 = t7175*t1712;
  t6845 = t3297*t3318;
  t6848 = t3350*t1612;
  t7330 = t476*t7157;
  t7331 = t325*t7195;
  t7334 = t7330 + t7331;
  t7292 = -1.*t325*t7157;
  t7315 = t476*t7195;
  t7323 = t7292 + t7315;
  t7219 = t2326*t7175;
  t6914 = t3370*t5768;
  t7241 = -1.*t7175*t1505;
  t6928 = -1.*t3297*t5768;
  t6930 = -1.*t3350*t6003;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=(-0.5*(-0.241*t1456*(-1.*t1612*t291 - 1.*t1505*t40) - 0.241*t1671*(-1.*t1767*t291 - 1.*t1712*t40) - 0.06108*(-1.*t281*t40 - 1.*t291*t526) + 0.06108*(-1.*t1053*t291 - 1.*t40*t761))*var2[1] - 0.5*(0.06108*t1820 - 0.241*t1456*t1885 - 0.241*t1671*t1894 - 0.06108*(t281*t291 - 1.*t40*t526))*var2[2])*var2[7];
  p_output1[4]=(-0.5*(0.06108*t1053 - 0.241*t1456*t1612 - 0.241*t1671*t1767 - 0.06108*t526)*var2[0] - 0.5*(0.06108*t1958*t40 - 0.06108*t1970*t40 + 0.241*t1456*t2040*t40 + 0.241*t1671*t2172*t40)*var2[1] - 0.5*(-0.06108*t1958*t291 + 0.06108*t1970*t291 - 0.241*t1456*t2040*t291 - 0.241*t1671*t2172*t291)*var2[2] - 0.5*(-0.06108*(t1053*t2974 - 1.*t2482*t3048*t325 + t2937*(-1.*t2482*t2619*t325 - 1.*t2482*t2711*t325) + t2482*(-1.*t1970*t2581 - 1.*t1053*t2619 - 1.*t1053*t2711 - 1.*t2581*t2937)*t476) - 0.241*t1671*((-1.*t2482*t325*t3272 - 1.*t2482*t325*t3297)*t3318 + t1612*t3370 - 1.*t2482*t325*t3389 + t2482*(-1.*t1612*t3272 - 1.*t1612*t3297 - 1.*t2040*t3350 - 1.*t3318*t3350)*t476) - 0.241*t1456*((t2482*t325*t3272 + t2482*t325*t3297)*t3492 + t1767*t3531 - 1.*t2482*t325*t3557 + t2482*(t1767*t3272 + t1767*t3297 + t2172*t3350 + t3350*t3492)*t476) + 0.06108*(-1.*t2482*t2882*t325 + t2784*(t2482*t2619*t325 + t2482*t2711*t325) + t2643*t526 + t2482*t476*(t1958*t2581 + t2581*t2784 + t2619*t526 + t2711*t526)))*var2[3])*var2[7];
  p_output1[5]=(-0.5*(-0.06108*t3693*t476 + 0.06108*t3708*t476 - 0.241*t1456*t3754*t476 - 0.241*t1671*t3776*t476)*var2[0] - 0.5*(-0.241*t1456*(t1593*t291 + t325*t3754*t40) - 0.241*t1671*(t1745*t291 + t325*t3776*t40) - 0.06108*(t325*t3693*t40 + t291*t443) + 0.06108*(t325*t3708*t40 + t291*t961))*var2[1] - 0.5*(-0.241*t1456*(-1.*t291*t325*t3754 + t1593*t40) - 0.241*t1671*(-1.*t291*t325*t3776 + t1745*t40) - 0.06108*(-1.*t291*t325*t3693 + t40*t443) + 0.06108*(-1.*t291*t325*t3708 + t40*t961))*var2[2] - 0.5*(-0.06108*(t2974*t3708*t476 + t3048*t4184*t476 + t2482*t476*(t2581*t325*t3708 + t1053*t325*t4133 + t4364 + t4366 - 1.*t2619*t3708*t476 - 1.*t2937*t4133*t476) + t2937*(-1.*t2581*t325*t4184 + t4303 + t4320 + t2482*t4133*t4628 + t2482*t4133*t4640 + t2619*t4184*t476)) - 0.241*t1671*(t3370*t3754*t476 + t3389*t4184*t476 + t3318*(-1.*t325*t3350*t4184 + t4417 + t4455 + t2482*t4440*t4628 + t2482*t4440*t4640 + t3297*t4184*t476) + t2482*t476*(t325*t3350*t3754 + t1612*t325*t4440 + t4487 + t4495 - 1.*t3297*t3754*t476 - 1.*t3318*t4440*t476)) - 0.241*t1456*(t3531*t3776*t476 + t3557*t4184*t476 + t3492*(t325*t3350*t4184 + t4546 + t4551 - 1.*t2482*t4440*t4628 - 1.*t2482*t4440*t4640 - 1.*t3297*t4184*t476) + t2482*t476*(-1.*t325*t3350*t3776 - 1.*t1767*t325*t4440 + t4566 + t4586 + t3297*t3776*t476 + t3492*t4440*t476)) + 0.06108*(t2643*t3693*t476 + t2882*t4184*t476 + t2784*(t4158 + t2581*t325*t4184 + t4209 - 1.*t2482*t4133*t4628 - 1.*t2482*t4133*t4640 - 1.*t2619*t4184*t476) + t2482*t476*(-1.*t2581*t325*t3693 + t4100 + t4139 + t2619*t3693*t476 + t2784*t4133*t476 - 1.*t325*t4133*t526)))*var2[3] - 0.5*(0.06108*(t281*(-1.*t2482*t4133 + t4158 - 1.*t2494*t4184 + t4209) + t2482*t4254 + t4075*t443 + t2326*(t2494*t3693 + t4100 + t4139 + t4133*t443)) - 0.241*t1671*(t1593*t4391 + t1505*(t3244*t4184 + t4417 + t2482*t4440 + t4455) + t2326*(-1.*t3244*t3754 - 1.*t1593*t4440 + t4487 + t4495) + t2482*t4530) - 0.241*t1456*(t1745*t4541 + t1712*(-1.*t3244*t4184 - 1.*t2482*t4440 + t4546 + t4551) + t2326*(t3244*t3776 + t1745*t4440 + t4566 + t4586) + t2482*t4599) - 0.06108*(t2482*t4334 + (t2482*t4133 + t2494*t4184 + t4303 + t4320)*t761 + t4286*t961 + t2326*(-1.*t2494*t3708 + t4364 + t4366 - 1.*t4133*t961)))*var2[4])*var2[7];
  p_output1[6]=(-0.5*(-0.241*t1456*t1505*t476 - 0.241*t1671*t1712*t476 - 0.06108*t281*t476 + 0.06108*t476*t761)*var2[0] - 0.5*(-0.06108*(t281*t325*t40 + t291*t5051) - 0.241*t1456*(t1505*t325*t40 + t291*t5079) - 0.241*t1671*(t1712*t325*t40 + t291*t5099) + 0.06108*(t291*t5059 + t325*t40*t761))*var2[1] - 0.5*(-0.06108*(-1.*t281*t291*t325 + t40*t5051) - 0.241*t1456*(-1.*t1505*t291*t325 + t40*t5079) - 0.241*t1671*(-1.*t1712*t291*t325 + t40*t5099) + 0.06108*(t40*t5059 - 1.*t291*t325*t761))*var2[2] - 0.5*(0.06108*(t2643*t281*t476 + t2326*t2882*t476 + t2784*(t2326*t2581*t325 - 1.*t2326*t2619*t476 - 1.*t2482*t4628*t5171 - 1.*t2482*t4640*t5171 + t5187 + t5202) + t2482*t476*(-1.*t2581*t281*t325 + t2619*t281*t476 + t5165 + t2784*t476*t5171 + t5175 - 1.*t325*t5171*t526)) - 0.241*t1671*(t1505*t3370*t476 + t2326*t3389*t476 + t3318*(-1.*t2326*t325*t3350 + t2326*t3297*t476 + t5270 + t2482*t4628*t5272 + t2482*t4640*t5272 + t5288) + t2482*t476*(t1505*t325*t3350 - 1.*t1505*t3297*t476 + t1612*t325*t5272 - 1.*t3318*t476*t5272 + t5295 + t5299)) - 0.241*t1456*(t1712*t3531*t476 + t2326*t3557*t476 + t3492*(t2326*t325*t3350 - 1.*t2326*t3297*t476 - 1.*t2482*t4628*t5272 - 1.*t2482*t4640*t5272 + t5315 + t5330) + t2482*t476*(-1.*t1712*t325*t3350 + t1712*t3297*t476 - 1.*t1767*t325*t5272 + t3492*t476*t5272 + t5338 + t5340)) - 0.06108*(t2326*t3048*t476 + t2937*(-1.*t2326*t2581*t325 + t2326*t2619*t476 + t2482*t4628*t5171 + t2482*t4640*t5171 + t5227 + t5234) + t2974*t476*t761 + t2482*t476*(t1053*t325*t5171 - 1.*t2937*t476*t5171 + t5243 + t5249 + t2581*t325*t761 - 1.*t2619*t476*t761)))*var2[3] - 0.5*(0.06108*(t4075*t5051 + t2326*(t4100 + t5165 + t443*t5171 + t5175) + t4254*t5200 + t281*(t4158 - 1.*t2482*t5171 + t5187 + t5202)) - 0.241*t1671*(t4391*t5079 + t4530*t5200 + t1505*(t4417 + t5270 + t2482*t5272 + t5288) + t2326*(t4495 - 1.*t1593*t5272 + t5295 + t5299)) - 0.241*t1456*(t4541*t5099 + t4599*t5200 + t1712*(t4546 - 1.*t2482*t5272 + t5315 + t5330) + t2326*(t4586 + t1745*t5272 + t5338 + t5340)) - 0.06108*(t4286*t5059 + t4334*t5200 + (t4303 + t2482*t5171 + t5227 + t5234)*t761 + t2326*(t4366 + t5243 + t5249 - 1.*t5171*t961)))*var2[4] - 0.5*(-0.06108*t192*(-1.*t2459*t258 - 1.*t258*t4897) + 0.06108*t480*(t2459*t258 + t258*t4897) - 0.241*t1565*t1671*(-1.*t258*t3206 - 1.*t258*t4961) - 0.241*t1456*t1725*(t258*t3206 + t258*t4961))*var2[5])*var2[7];
  p_output1[7]=(-0.5*(-0.06108*t2937 + 0.06108*t5734 + t5747 + t5770)*var2[0] - 0.5*(-0.06108*t1820 + 0.06108*(t291*t3693 - 1.*t40*t5791) + t6080 + t6106)*var2[1] - 0.5*(0.06108*(t3693*t40 + t291*t5791) + t5887 + t6037 - 0.06108*(t1053*t291 + t40*t761))*var2[2] - 0.5*(0.06108*(t2643*t2937 + t2482*t476*(t1053*t2581 + t2619*t2937 + t6174 + t6232 + t526*t6626 + t2784*t6646) + t2784*(t6161 + t2482*t325*t6626 - 1.*t2482*t476*t6646)) - 0.06108*(t2974*t5734 + t2482*t476*(-1.*t2619*t5734 - 1.*t2581*t5791 + t6290 + t6306 - 1.*t1053*t6626 - 1.*t2937*t6646) + t2937*(t6270 - 1.*t2482*t325*t6626 + t2482*t476*t6646)) - 0.241*t1456*(t6751 + t3492*(t6406 + t2482*t325*t6815 - 1.*t2482*t476*t6835) + t2482*t476*(t6481 + t6484 + t1767*t6815 + t3492*t6835 + t6845 + t6848)) - 0.241*t1671*(t3318*(t6539 - 1.*t2482*t325*t6815 + t2482*t476*t6835) + t6914 + t2482*t476*(t6572 + t6578 - 1.*t1612*t6815 - 1.*t3318*t6835 + t6928 + t6930)))*var2[3] - 0.5*(-0.241*t1456*(t6345 + t1712*(-1.*t2482*t6378 + t6406) + t2326*(t1725*t3158 + t1745*t6378 + t6475 + t6480 + t6481 + t6484)) - 0.241*t1671*(t1505*(t2482*t6378 + t6539) + t6561 + t2326*(-1.*t1565*t3158 - 1.*t1593*t6378 + t6563 + t6572 + t6573 + t6578)) + 0.06108*(t281*(-1.*t2482*t6145 + t6161) + t4075*t761 + t2326*(t192*t2577 + t2356*t480 + t443*t6145 + t6174 + t6232 + t2494*t961)) - 0.06108*(t3693*t4286 + (t2482*t6145 + t6270)*t761 + t2326*(-1.*t192*t2356 + t4249 - 1.*t2494*t5051 + t6290 + t6306 - 1.*t6145*t961)))*var2[4] - 0.5*(0.06108*t192*(-1.*t171*t2459 + t2367*t258) + 0.06108*(t171*t2459 - 1.*t2367*t258)*t480 + t5664 + t5675)*var2[5] - 0.5*(-0.0032717502*t192 + 0.0032717502*t480 + t5703 + t5720)*var2[6])*var2[7];
  p_output1[8]=var2[7]*(-0.5*(t5747 + t5770 - 0.241*t3318*t7007 - 0.241*t3492*t7014)*var2[0] - 0.5*(t6080 + t6106 - 0.241*t1885*t7007 - 0.241*t1894*t7014)*var2[1] - 0.5*(t5887 + t6037 - 0.241*t5850*t7007 - 0.241*(t1767*t291 + t1712*t40)*t7014)*var2[2] - 0.5*(-0.241*(t3492*t3531 + t2482*t3557*t476)*t7007 - 0.241*(t3318*t3370 + t2482*t3389*t476)*t7014 - 0.241*t1456*(t6751 + t2482*t476*(t6481 + t6845 + t6848 + t7203 + t1767*t7323 + t3492*t7334) + t3492*(t7177 + t2482*t325*t7323 - 1.*t2482*t476*t7334)) - 0.241*t1671*(t6914 + t2482*t476*(t6578 + t6928 + t6930 + t7241 - 1.*t1612*t7323 - 1.*t3318*t7334) + t3318*(t7219 - 1.*t2482*t325*t7323 + t2482*t476*t7334)))*var2[3] - 0.5*(-0.241*(t1712*t4541 + t2326*t4599)*t7007 - 0.241*(t1505*t4391 + t2326*t4530)*t7014 - 0.241*t1456*(t6345 + t1712*(-1.*t2482*t7157 + t7177) + t2326*(t6475 + t6480 + t6481 + t1745*t7157 + t1725*t7195 + t7203)) - 0.241*t1671*(t6561 + t1505*(t2482*t7157 + t7219) + t2326*(t6563 + t6573 + t6578 - 1.*t1593*t7157 - 1.*t1565*t7195 + t7241)))*var2[4] - 0.5*(t5664 + t5675 - 0.241*t1725*t5658*t7007 - 0.241*t1565*t5673*t7014)*var2[5] - 0.5*(t5703 + t5720 - 0.241*(-0.081715*t1474 - 0.11459*t1725)*t7007 - 0.007922875*t1565*t7014)*var2[6] - 0.5*(-0.482*t1456*t7007 - 0.482*t1671*t7014)*var2[7] - 0.5*(0.03856*t7007 - 0.00482*t7014)*var2[8]);
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

#include "Ce3_vec8_plane.hh"

namespace SymFunction
{

void Ce3_vec8_plane_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
