/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 13:00:50 GMT-05:00
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
  double t568;
  double t772;
  double t813;
  double t1418;
  double t990;
  double t1435;
  double t985;
  double t1014;
  double t1303;
  double t1407;
  double t1553;
  double t1575;
  double t1626;
  double t1716;
  double t1720;
  double t1935;
  double t1992;
  double t1751;
  double t1752;
  double t2037;
  double t2136;
  double t2143;
  double t2200;
  double t2169;
  double t2209;
  double t2220;
  double t1605;
  double t2444;
  double t2446;
  double t2448;
  double t2453;
  double t2459;
  double t2479;
  double t2617;
  double t2728;
  double t2733;
  double t2767;
  double t2769;
  double t2774;
  double t2793;
  double t2028;
  double t2040;
  double t2056;
  double t2080;
  double t2082;
  double t2090;
  double t2098;
  double t2132;
  double t2941;
  double t2968;
  double t2974;
  double t2976;
  double t2982;
  double t2988;
  double t2992;
  double t2994;
  double t2996;
  double t3074;
  double t3078;
  double t3083;
  double t3137;
  double t3142;
  double t3144;
  double t3145;
  double t3146;
  double t3011;
  double t3277;
  double t3292;
  double t3296;
  double t3299;
  double t3314;
  double t3319;
  double t3298;
  double t3327;
  double t3334;
  double t2221;
  double t2226;
  double t2232;
  double t2239;
  double t2246;
  double t2262;
  double t3180;
  double t3397;
  double t3401;
  double t3003;
  double t3013;
  double t3427;
  double t3432;
  double t3480;
  double t3482;
  double t3487;
  double t3507;
  double t3509;
  double t3341;
  double t3578;
  double t3586;
  double t895;
  double t1582;
  double t1616;
  double t1627;
  double t1696;
  double t1726;
  double t1884;
  double t1897;
  double t1907;
  double t1913;
  double t3406;
  double t3416;
  double t3418;
  double t3661;
  double t3665;
  double t3668;
  double t3658;
  double t3670;
  double t3681;
  double t3176;
  double t3181;
  double t3183;
  double t3187;
  double t3189;
  double t3194;
  double t3204;
  double t3238;
  double t3758;
  double t3759;
  double t3760;
  double t3755;
  double t3764;
  double t3779;
  double t2631;
  double t2637;
  double t2643;
  double t2654;
  double t2724;
  double t2726;
  double t2794;
  double t2795;
  double t2799;
  double t2820;
  double t2825;
  double t2833;
  double t2878;
  double t2880;
  double t2881;
  double t3340;
  double t3343;
  double t3344;
  double t3349;
  double t3362;
  double t3363;
  double t3373;
  double t3380;
  double t3383;
  double t3574;
  double t3599;
  double t3601;
  double t3603;
  double t3604;
  double t3605;
  double t3608;
  double t3617;
  double t3620;
  double t3754;
  double t3785;
  double t3790;
  double t3791;
  double t3805;
  double t3811;
  double t3812;
  double t3815;
  double t3820;
  double t3823;
  double t3829;
  double t2386;
  double t3643;
  double t3684;
  double t3690;
  double t3692;
  double t3697;
  double t3859;
  double t3864;
  double t2545;
  double t2284;
  double t2289;
  double t2301;
  double t2308;
  double t2314;
  double t2356;
  double t2362;
  double t2374;
  double t2381;
  double t3451;
  double t3488;
  double t3489;
  double t3496;
  double t3510;
  double t3512;
  double t3515;
  double t3728;
  double t3734;
  double t3740;
  double t3745;
  double t3752;
  double t3253;
  double t3259;
  double t3260;
  double t3263;
  double t3264;
  double t3910;
  double t3913;
  double t3920;
  double t3922;
  double t3925;
  double t3929;
  double t3936;
  double t3941;
  double t3945;
  double t4013;
  double t4016;
  double t4022;
  double t4075;
  double t4077;
  double t4078;
  double t4081;
  double t4082;
  double t4083;
  double t4086;
  double t4252;
  double t4257;
  double t4362;
  double t4366;
  double t4367;
  double t4085;
  double t4087;
  double t4243;
  double t4426;
  double t4429;
  double t4446;
  double t4491;
  double t4512;
  double t4519;
  double t4521;
  double t4523;
  double t4548;
  double t4552;
  double t4044;
  double t4628;
  double t4433;
  double t4434;
  double t4436;
  double t4245;
  double t4248;
  double t4258;
  double t4272;
  double t4284;
  double t4295;
  double t4306;
  double t4312;
  double t4791;
  double t4012;
  double t4024;
  double t4042;
  double t4047;
  double t4051;
  double t4057;
  double t4066;
  double t4071;
  double t4072;
  double t4073;
  double t4638;
  double t4648;
  double t4649;
  double t4650;
  double t4658;
  double t4660;
  double t4688;
  double t4689;
  double t4345;
  double t4372;
  double t4373;
  double t4390;
  double t4391;
  double t4392;
  double t4396;
  double t4414;
  double t4416;
  double t4921;
  double t4931;
  double t4932;
  double t4936;
  double t4937;
  double t4832;
  double t4838;
  double t4843;
  double t4845;
  double t4847;
  double t4848;
  double t4849;
  double t4852;
  double t4853;
  double t4857;
  double t4860;
  double t4862;
  double t4444;
  double t4452;
  double t4454;
  double t4470;
  double t4473;
  double t4474;
  double t4475;
  double t4480;
  double t4486;
  double t4090;
  double t4091;
  double t4092;
  double t4093;
  double t4095;
  double t4100;
  double t4103;
  double t4104;
  double t4109;
  double t4111;
  double t4112;
  double t4697;
  double t4700;
  double t4702;
  double t4703;
  double t4704;
  double t4706;
  double t4707;
  double t4708;
  double t4717;
  double t4910;
  double t4145;
  double t4152;
  double t4154;
  double t4158;
  double t4161;
  double t4878;
  double t4884;
  double t4886;
  double t4887;
  double t4888;
  double t4895;
  double t4897;
  double t4903;
  double t4115;
  double t4125;
  double t4136;
  double t4140;
  double t4143;
  double t4749;
  double t4765;
  double t4769;
  double t4779;
  double t4780;
  double t4514;
  double t4532;
  double t4539;
  double t4540;
  double t4556;
  double t4559;
  double t4561;
  double t4991;
  double t4992;
  double t4993;
  double t4994;
  double t5005;
  double t5009;
  double t5010;
  double t5011;
  double t5146;
  double t5147;
  double t5148;
  double t5165;
  double t5224;
  double t5225;
  double t5226;
  double t5212;
  double t5265;
  double t5267;
  double t5293;
  double t5295;
  double t5307;
  double t5263;
  double t5345;
  double t5264;
  double t5271;
  double t5276;
  double t5282;
  double t5285;
  double t5286;
  double t5287;
  double t5290;
  double t5318;
  double t5411;
  double t5413;
  double t5162;
  double t5176;
  double t5344;
  double t5357;
  double t5444;
  double t5451;
  double t5453;
  double t5461;
  double t5462;
  double t5454;
  double t5466;
  double t5417;
  double t5524;
  double t5525;
  double t5211;
  double t5216;
  double t5217;
  double t5223;
  double t5563;
  double t5567;
  double t5569;
  double t5291;
  double t5314;
  double t5315;
  double t5319;
  double t5321;
  double t5326;
  double t5327;
  double t5328;
  double t5330;
  double t5331;
  double t5415;
  double t5422;
  double t5425;
  double t5427;
  double t5428;
  double t5430;
  double t5431;
  double t5432;
  double t5522;
  double t5527;
  double t5531;
  double t5534;
  double t5546;
  double t5550;
  double t5551;
  double t5552;
  double t5555;
  double t5200;
  double t5203;
  double t5204;
  double t5208;
  double t5209;
  double t5361;
  double t5396;
  double t5397;
  double t5402;
  double t5404;
  double t5475;
  double t5483;
  double t5487;
  double t5471;
  double t5472;
  double t5488;
  double t5491;
  double t5603;
  double t5604;
  double t5607;
  double t5609;
  double t5613;
  double t5614;
  double t5615;
  double t5616;
  double t5617;
  t568 = Cos(var1[3]);
  t772 = Cos(var1[4]);
  t813 = Cos(var1[5]);
  t1418 = Cos(var1[9]);
  t990 = Sin(var1[9]);
  t1435 = Sin(var1[3]);
  t985 = Cos(var1[10]);
  t1014 = -1.*t990;
  t1303 = 0. + t1014;
  t1407 = t568*t772*t813*t1303;
  t1553 = -1.*t1418*t772*t813*t1435;
  t1575 = t1407 + t1553;
  t1626 = -1.*t772*t813*t990*t1435;
  t1716 = Cos(var1[11]);
  t1720 = 0. + t1716;
  t1935 = -1.*t568*t772*t813*t990;
  t1992 = t1935 + t1553;
  t1751 = Sin(var1[10]);
  t1752 = Sin(var1[11]);
  t2037 = t1418*t568*t772*t813;
  t2136 = t772*t813*t1303*t1435;
  t2143 = t2037 + t2136;
  t2200 = Sin(var1[4]);
  t2169 = -1.*t1751*t2143;
  t2209 = -1.*t985*t813*t2200;
  t2220 = t2169 + t2209;
  t1605 = 0. + t1418;
  t2444 = -1.*t772*t813*t1751;
  t2446 = -1.*t1418*t568*t813*t2200;
  t2448 = -1.*t813*t1303*t1435*t2200;
  t2453 = t2446 + t2448;
  t2459 = t985*t2453;
  t2479 = t2444 + t2459;
  t2617 = Sin(var1[5]);
  t2728 = t1751*t2200*t2617;
  t2733 = -1.*t1418*t568*t772*t2617;
  t2767 = -1.*t772*t1303*t1435*t2617;
  t2769 = t2733 + t2767;
  t2774 = t985*t2769;
  t2793 = t2728 + t2774;
  t2028 = -0.25*t985*t1992;
  t2040 = t2037 + t1626;
  t2056 = 0.037*t2040;
  t2080 = t985*t1720*t1992;
  t2082 = -1.*t1751*t1752*t1992;
  t2090 = t2080 + t2082;
  t2098 = -0.27*t2090;
  t2132 = t2028 + t2056 + t2098;
  t2941 = t813*t1435*t2200;
  t2968 = -1.*t568*t2617;
  t2974 = t2941 + t2968;
  t2976 = -1.*t1418*t2974;
  t2982 = t568*t813*t2200;
  t2988 = t1435*t2617;
  t2992 = t2982 + t2988;
  t2994 = -1.*t990*t2992;
  t2996 = t2976 + t2994;
  t3074 = t990*t2974;
  t3078 = -1.*t1418*t2992;
  t3083 = t3074 + t3078;
  t3137 = -1.*t813*t1435*t2200;
  t3142 = t568*t2617;
  t3144 = t3137 + t3142;
  t3145 = -1.*t990*t3144;
  t3146 = t3145 + t3078;
  t3011 = -1.*t985*t1752*t2996;
  t3277 = t813*t1435;
  t3292 = -1.*t568*t2200*t2617;
  t3296 = t3277 + t3292;
  t3299 = -1.*t568*t813;
  t3314 = -1.*t1435*t2200*t2617;
  t3319 = t3299 + t3314;
  t3298 = -1.*t990*t3296;
  t3327 = -1.*t1418*t3319;
  t3334 = t3298 + t3327;
  t2221 = t1716*t2220;
  t2226 = t985*t2143;
  t2232 = -1.*t813*t1751*t2200;
  t2239 = t2226 + t2232;
  t2246 = -1.*t1752*t2239;
  t2262 = t2221 + t2246;
  t3180 = t1418*t3144;
  t3397 = t1303*t2992;
  t3401 = t3180 + t3397;
  t3003 = -1.*t1716*t1751*t2996;
  t3013 = t3003 + t3011;
  t3427 = t772*t813;
  t3432 = 0. + t3427;
  t3480 = t1303*t2974;
  t3482 = t1418*t2992;
  t3487 = 0. + t3480 + t3482;
  t3507 = t985*t3432;
  t3509 = -1.*t1751*t3487;
  t3341 = t1418*t3296;
  t3578 = t1303*t3319;
  t3586 = t3341 + t3578;
  t895 = 0.0875*t568*t772*t813;
  t1582 = -0.25*t985*t1575;
  t1616 = t1605*t568*t772*t813;
  t1627 = t1616 + t1626;
  t1696 = 0.037*t1627;
  t1726 = t985*t1720*t1575;
  t1884 = -1.*t1751*t1752*t1575;
  t1897 = t1726 + t1884;
  t1907 = -0.27*t1897;
  t1913 = t895 + t1582 + t1696 + t1907;
  t3406 = -1.*t1716*t1751*t3401;
  t3416 = -1.*t985*t1752*t3401;
  t3418 = t3406 + t3416;
  t3661 = -1.*t568*t813*t2200;
  t3665 = -1.*t1435*t2617;
  t3668 = t3661 + t3665;
  t3658 = t1303*t3144;
  t3670 = t1418*t3668;
  t3681 = t3658 + t3670;
  t3176 = -0.25*t985*t3146;
  t3181 = t3180 + t2994;
  t3183 = 0.037*t3181;
  t3187 = t985*t1720*t3146;
  t3189 = -1.*t1751*t1752*t3146;
  t3194 = t3187 + t3189;
  t3204 = -0.27*t3194;
  t3238 = t3176 + t3183 + t3204;
  t3758 = t568*t813;
  t3759 = t1435*t2200*t2617;
  t3760 = t3758 + t3759;
  t3755 = t1303*t3296;
  t3764 = t1418*t3760;
  t3779 = t3755 + t3764;
  t2631 = -0.0875*t772*t1435*t2617;
  t2637 = 0.21935*t2200*t2617;
  t2643 = -1.*t568*t772*t990*t2617;
  t2654 = -1.*t1605*t772*t1435*t2617;
  t2724 = t2643 + t2654;
  t2726 = 0.037*t2724;
  t2794 = -0.25*t2793;
  t2795 = t1720*t2793;
  t2799 = t985*t2200*t2617;
  t2820 = -1.*t1751*t2769;
  t2825 = t2799 + t2820;
  t2833 = t1752*t2825;
  t2878 = t2795 + t2833;
  t2880 = -0.27*t2878;
  t2881 = t2631 + t2637 + t2726 + t2794 + t2880;
  t3340 = -0.25*t985*t3334;
  t3343 = -1.*t990*t3319;
  t3344 = t3341 + t3343;
  t3349 = 0.037*t3344;
  t3362 = t985*t1720*t3334;
  t3363 = -1.*t1751*t1752*t3334;
  t3373 = t3362 + t3363;
  t3380 = -0.27*t3373;
  t3383 = t3340 + t3349 + t3380;
  t3574 = -1.*t772*t1751*t2617;
  t3599 = t985*t3586;
  t3601 = t3574 + t3599;
  t3603 = -1.*t1752*t3601;
  t3604 = -1.*t985*t772*t2617;
  t3605 = -1.*t1751*t3586;
  t3608 = t3604 + t3605;
  t3617 = t1716*t3608;
  t3620 = t3603 + t3617;
  t3754 = 0.0875*t3296;
  t3785 = -0.25*t985*t3779;
  t3790 = t1605*t3296;
  t3791 = t990*t3760;
  t3805 = t3790 + t3791;
  t3811 = 0.037*t3805;
  t3812 = t985*t1720*t3779;
  t3815 = -1.*t1751*t1752*t3779;
  t3820 = t3812 + t3815;
  t3823 = -0.27*t3820;
  t3829 = t3754 + t3785 + t3811 + t3823;
  t2386 = -0.21935*t772*t813;
  t3643 = 0.0875*t3144;
  t3684 = t1605*t3144;
  t3690 = t990*t3668;
  t3692 = t3684 + t3690;
  t3697 = 0.037*t3692;
  t3859 = t985*t3681;
  t3864 = t2444 + t3859;
  t2545 = -1.*t985*t772*t813;
  t2284 = -0.25*t2220;
  t2289 = t1720*t2220;
  t2301 = -1.*t985*t2143;
  t2308 = t813*t1751*t2200;
  t2314 = t2301 + t2308;
  t2356 = t1752*t2314;
  t2362 = t2289 + t2356;
  t2374 = -0.27*t2362;
  t2381 = t2284 + t2374;
  t3451 = -1.*t3432*t1751;
  t3488 = -1.*t985*t3487;
  t3489 = t3451 + t3488;
  t3496 = t1716*t3489;
  t3510 = t3507 + t3509;
  t3512 = -1.*t1752*t3510;
  t3515 = t3496 + t3512;
  t3728 = 0.25*t1751*t3401;
  t3734 = -1.*t1720*t1751*t3401;
  t3740 = t3734 + t3416;
  t3745 = -0.27*t3740;
  t3752 = t3728 + t3745;
  t3253 = 0.25*t1751*t2996;
  t3259 = -1.*t1720*t1751*t2996;
  t3260 = t3259 + t3011;
  t3263 = -0.27*t3260;
  t3264 = t3253 + t3263;
  t3910 = -0.25*t3608;
  t3913 = t772*t1751*t2617;
  t3920 = -1.*t985*t3586;
  t3922 = t3913 + t3920;
  t3925 = t1752*t3922;
  t3929 = t1720*t3608;
  t3936 = t3925 + t3929;
  t3941 = -0.27*t3936;
  t3945 = t3910 + t3941;
  t4013 = t568*t772*t1303*t2617;
  t4016 = -1.*t1418*t772*t1435*t2617;
  t4022 = t4013 + t4016;
  t4075 = -1.*t813*t1435;
  t4077 = t568*t2200*t2617;
  t4078 = t4075 + t4077;
  t4081 = t1303*t4078;
  t4082 = t1418*t3319;
  t4083 = t4081 + t4082;
  t4086 = -1.*t985*t1752*t4083;
  t4252 = -1.*t1418*t4078;
  t4257 = t4252 + t3343;
  t4362 = t1418*t568*t772*t2617;
  t4366 = t772*t1303*t1435*t2617;
  t4367 = t4362 + t4366;
  t4085 = -1.*t1716*t1751*t4083;
  t4087 = t4085 + t4086;
  t4243 = -1.*t990*t4078;
  t4426 = -1.*t1418*t3760;
  t4429 = t4243 + t4426;
  t4446 = t3480 + t3482;
  t4491 = t772*t2617;
  t4512 = 0. + t4491;
  t4519 = t1418*t4078;
  t4521 = t1303*t3760;
  t4523 = 0. + t4519 + t4521;
  t4548 = t985*t4512;
  t4552 = -1.*t1751*t4523;
  t4044 = -1.*t772*t990*t1435*t2617;
  t4628 = t2643 + t4016;
  t4433 = -1.*t1716*t1751*t4429;
  t4434 = -1.*t985*t1752*t4429;
  t4436 = t4433 + t4434;
  t4245 = t4243 + t4082;
  t4248 = 0.037*t4245;
  t4258 = -0.25*t985*t4257;
  t4272 = t985*t1720*t4257;
  t4284 = -1.*t1751*t1752*t4257;
  t4295 = t4272 + t4284;
  t4306 = -0.27*t4295;
  t4312 = t4248 + t4258 + t4306;
  t4791 = t4252 + t3791;
  t4012 = 0.0875*t568*t772*t2617;
  t4024 = -0.25*t985*t4022;
  t4042 = t1605*t568*t772*t2617;
  t4047 = t4042 + t4044;
  t4051 = 0.037*t4047;
  t4057 = t985*t1720*t4022;
  t4066 = -1.*t1751*t1752*t4022;
  t4071 = t4057 + t4066;
  t4072 = -0.27*t4071;
  t4073 = t4012 + t4024 + t4051 + t4072;
  t4638 = -0.25*t985*t4628;
  t4648 = t4362 + t4044;
  t4649 = 0.037*t4648;
  t4650 = t985*t1720*t4628;
  t4658 = -1.*t1751*t1752*t4628;
  t4660 = t4650 + t4658;
  t4688 = -0.27*t4660;
  t4689 = t4638 + t4649 + t4688;
  t4345 = -1.*t1751*t2200*t2617;
  t4372 = t985*t4367;
  t4373 = t4345 + t4372;
  t4390 = -1.*t1752*t4373;
  t4391 = -1.*t985*t2200*t2617;
  t4392 = -1.*t1751*t4367;
  t4396 = t4391 + t4392;
  t4414 = t1716*t4396;
  t4416 = t4390 + t4414;
  t4921 = -1.*t1418*t568*t2200*t2617;
  t4931 = -1.*t1303*t1435*t2200*t2617;
  t4932 = t4921 + t4931;
  t4936 = t985*t4932;
  t4937 = t3574 + t4936;
  t4832 = 0.0875*t772*t813*t1435;
  t4838 = t568*t772*t813*t990;
  t4843 = t1605*t772*t813*t1435;
  t4845 = t4838 + t4843;
  t4847 = 0.037*t4845;
  t4848 = -0.21935*t813*t2200;
  t4849 = -0.25*t2239;
  t4852 = t1752*t2220;
  t4853 = t1720*t2239;
  t4857 = t4852 + t4853;
  t4860 = -0.27*t4857;
  t4862 = t4832 + t4847 + t4848 + t4849 + t4860;
  t4444 = t772*t813*t1751;
  t4452 = t985*t4446;
  t4454 = t4444 + t4452;
  t4470 = -1.*t1752*t4454;
  t4473 = t985*t772*t813;
  t4474 = -1.*t1751*t4446;
  t4475 = t4473 + t4474;
  t4480 = t1716*t4475;
  t4486 = t4470 + t4480;
  t4090 = 0.0875*t2992;
  t4091 = t990*t3144;
  t4092 = t1605*t2992;
  t4093 = t4091 + t4092;
  t4095 = 0.037*t4093;
  t4100 = -0.25*t985*t3401;
  t4103 = t985*t1720*t3401;
  t4104 = -1.*t1751*t1752*t3401;
  t4109 = t4103 + t4104;
  t4111 = -0.27*t4109;
  t4112 = t4090 + t4095 + t4100 + t4111;
  t4697 = -1.*t990*t2974;
  t4700 = t4697 + t3482;
  t4702 = 0.037*t4700;
  t4703 = -0.25*t985*t2996;
  t4704 = t985*t1720*t2996;
  t4706 = -1.*t1751*t1752*t2996;
  t4707 = t4704 + t4706;
  t4708 = -0.27*t4707;
  t4717 = t4702 + t4703 + t4708;
  t4910 = -0.21935*t772*t2617;
  t4145 = 0.0875*t3319;
  t4152 = t990*t3296;
  t4154 = t1605*t3319;
  t4158 = t4152 + t4154;
  t4161 = 0.037*t4158;
  t4878 = -0.25*t4396;
  t4884 = -1.*t985*t4367;
  t4886 = t2728 + t4884;
  t4887 = t1752*t4886;
  t4888 = t1720*t4396;
  t4895 = t4887 + t4888;
  t4897 = -0.27*t4895;
  t4903 = t4878 + t4897;
  t4115 = 0.25*t1751*t4083;
  t4125 = -1.*t1720*t1751*t4083;
  t4136 = t4125 + t4086;
  t4140 = -0.27*t4136;
  t4143 = t4115 + t4140;
  t4749 = 0.25*t1751*t4429;
  t4765 = -1.*t1720*t1751*t4429;
  t4769 = t4765 + t4434;
  t4779 = -0.27*t4769;
  t4780 = t4749 + t4779;
  t4514 = -1.*t1751*t4512;
  t4532 = -1.*t985*t4523;
  t4539 = t4514 + t4532;
  t4540 = t1716*t4539;
  t4556 = t4548 + t4552;
  t4559 = -1.*t1752*t4556;
  t4561 = t4540 + t4559;
  t4991 = -0.25*t4475;
  t4992 = -1.*t985*t4446;
  t4993 = t2444 + t4992;
  t4994 = t1752*t4993;
  t5005 = t1720*t4475;
  t5009 = t4994 + t5005;
  t5010 = -0.27*t5009;
  t5011 = t4991 + t5010;
  t5146 = t568*t772*t1303;
  t5147 = -1.*t1418*t772*t1435;
  t5148 = t5146 + t5147;
  t5165 = -1.*t985*t1752*t5148;
  t5224 = -1.*t1418*t568*t772;
  t5225 = -1.*t772*t1303*t1435;
  t5226 = t5224 + t5225;
  t5212 = -1.*t568*t772*t990;
  t5265 = t772*t990*t1435;
  t5267 = t5224 + t5265;
  t5293 = -1.*t568*t1303*t2200;
  t5295 = t1418*t1435*t2200;
  t5307 = t5293 + t5295;
  t5263 = t5212 + t5147;
  t5345 = -1.*t985*t1752*t5263;
  t5264 = 0.037*t5263;
  t5271 = -0.25*t985*t5267;
  t5276 = t985*t1720*t5267;
  t5282 = -1.*t1751*t1752*t5267;
  t5285 = t5276 + t5282;
  t5286 = -0.27*t5285;
  t5287 = t5264 + t5271 + t5286;
  t5290 = var2[9]*t5287;
  t5318 = t990*t1435*t2200;
  t5411 = t568*t990*t2200;
  t5413 = t5411 + t5295;
  t5162 = -1.*t1716*t1751*t5148;
  t5176 = t5162 + t5165;
  t5344 = -1.*t1716*t1751*t5263;
  t5357 = t5344 + t5345;
  t5444 = t1418*t568*t772;
  t5451 = t772*t1303*t1435;
  t5453 = 0. + t5444 + t5451;
  t5461 = -1.*t2200;
  t5462 = 0. + t5461;
  t5454 = -1.*t1751*t5453;
  t5466 = t985*t5462;
  t5417 = -1.*t1418*t568*t2200;
  t5524 = -1.*t1303*t1435*t2200;
  t5525 = t5417 + t5524;
  t5211 = -0.0875*t772*t1435;
  t5216 = -1.*t1605*t772*t1435;
  t5217 = t5212 + t5216;
  t5223 = 0.037*t5217;
  t5563 = t985*t5226;
  t5567 = t1751*t2200;
  t5569 = t5563 + t5567;
  t5291 = -0.0875*t568*t2200;
  t5314 = -0.25*t985*t5307;
  t5315 = -1.*t1605*t568*t2200;
  t5319 = t5315 + t5318;
  t5321 = 0.037*t5319;
  t5326 = t985*t1720*t5307;
  t5327 = -1.*t1751*t1752*t5307;
  t5328 = t5326 + t5327;
  t5330 = -0.27*t5328;
  t5331 = t5291 + t5314 + t5321 + t5330;
  t5415 = -0.25*t985*t5413;
  t5422 = t5417 + t5318;
  t5425 = 0.037*t5422;
  t5427 = t985*t1720*t5413;
  t5428 = -1.*t1751*t1752*t5413;
  t5430 = t5427 + t5428;
  t5431 = -0.27*t5430;
  t5432 = t5415 + t5425 + t5431;
  t5522 = -1.*t772*t1751;
  t5527 = t985*t5525;
  t5531 = t5522 + t5527;
  t5534 = -1.*t1752*t5531;
  t5546 = -1.*t985*t772;
  t5550 = -1.*t1751*t5525;
  t5551 = t5546 + t5550;
  t5552 = t1716*t5551;
  t5555 = t5534 + t5552;
  t5200 = 0.25*t1751*t5148;
  t5203 = -1.*t1720*t1751*t5148;
  t5204 = t5203 + t5165;
  t5208 = -0.27*t5204;
  t5209 = t5200 + t5208;
  t5361 = 0.25*t1751*t5263;
  t5396 = -1.*t1720*t1751*t5263;
  t5397 = t5396 + t5345;
  t5402 = -0.27*t5397;
  t5404 = t5361 + t5402;
  t5475 = -1.*t985*t5453;
  t5483 = -1.*t1751*t5462;
  t5487 = t5475 + t5483;
  t5471 = t5454 + t5466;
  t5472 = -1.*t1752*t5471;
  t5488 = t1716*t5487;
  t5491 = t5472 + t5488;
  t5603 = -0.25*t5551;
  t5604 = t772*t1751;
  t5607 = -1.*t985*t5525;
  t5609 = t5604 + t5607;
  t5613 = t1752*t5609;
  t5614 = t1720*t5551;
  t5615 = t5613 + t5614;
  t5616 = -0.27*t5615;
  t5617 = t5603 + t5616;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=var2[4]*(t1913*var2[3] + (t2386 - 0.25*t2479 - 0.27*(t1720*t2479 + t1752*(-1.*t1751*t2453 + t2545)) - 0.0875*t1435*t2200*t813 + 0.037*(-1.*t1435*t1605*t2200*t813 - 1.*t2200*t568*t813*t990))*var2[4] + t2881*var2[5] + t2132*var2[9] + t2381*var2[10] - 0.27*t2262*var2[11]) + var2[9]*(t3238*var2[3] + t2132*var2[4] + t3383*var2[5] + (0.037*t2996 - 0.25*t3083*t985 - 0.27*(-1.*t1751*t1752*t3083 + t1720*t3083*t985))*var2[9] + t3264*var2[10] - 0.27*t3013*var2[11]) + var2[3]*((t3643 + t3697 - 0.25*t3681*t985 - 0.27*(-1.*t1751*t1752*t3681 + t1720*t3681*t985))*var2[3] + t1913*var2[4] + t3829*var2[5] + t3238*var2[9] + t3752*var2[10] - 0.27*t3418*var2[11]) + var2[10]*(t3752*var2[3] + t2381*var2[4] + t3945*var2[5] + t3264*var2[9] + (-0.25*t3489 - 0.27*(t1720*t3489 + t1752*(t1751*t3487 - 1.*t3432*t985)))*var2[10] - 0.27*t3515*var2[11]) + var2[5]*(t3829*var2[3] + t2881*var2[4] + (t2386 + t3643 + t3697 - 0.25*t3864 - 0.27*(t1752*(t2545 - 1.*t1751*t3681) + t1720*t3864))*var2[5] + t3383*var2[9] + t3945*var2[10] - 0.27*t3620*var2[11]) + var2[11]*(-0.27*t3418*var2[3] - 0.27*t2262*var2[4] - 0.27*t3620*var2[5] - 0.27*t3013*var2[9] - 0.27*t3515*var2[10] - 0.27*(-1.*t1752*(0. + t3507 + t3509) - 1.*t1716*(0. + t1751*t3432 + t3487*t985))*var2[11]);
  p_output1[7]=var2[3]*((t4145 + t4161 - 0.25*t3586*t985 - 0.27*(-1.*t1751*t1752*t3586 + t1720*t3586*t985))*var2[3] + t4073*var2[4] + t4112*var2[5] + t4312*var2[9] + t4143*var2[10] - 0.27*t4087*var2[11]) + var2[4]*(t4073*var2[3] + (-0.0875*t1435*t2200*t2617 + t4910 - 0.25*t4937 - 0.27*(t1752*(t3604 - 1.*t1751*t4932) + t1720*t4937) + 0.037*(-1.*t1435*t1605*t2200*t2617 - 1.*t2200*t2617*t568*t990))*var2[4] + t4862*var2[5] + t4689*var2[9] + t4903*var2[10] - 0.27*t4416*var2[11]) + var2[9]*(t4312*var2[3] + t4689*var2[4] + t4717*var2[5] + (0.037*t4429 - 0.25*t4791*t985 - 0.27*(-1.*t1751*t1752*t4791 + t1720*t4791*t985))*var2[9] + t4780*var2[10] - 0.27*t4436*var2[11]) + var2[5]*(t4112*var2[3] + t4862*var2[4] + (-0.25*t3601 - 0.27*(t1720*t3601 + t1752*t3608) + t4145 + t4161 + t4910)*var2[5] + t4717*var2[9] + t5011*var2[10] - 0.27*t4486*var2[11]) + var2[10]*(t4143*var2[3] + t4903*var2[4] + t5011*var2[5] + t4780*var2[9] + (-0.25*t4539 - 0.27*(t1720*t4539 + t1752*(t1751*t4523 - 1.*t4512*t985)))*var2[10] - 0.27*t4561*var2[11]) + var2[11]*(-0.27*t4087*var2[3] - 0.27*t4416*var2[4] - 0.27*t4486*var2[5] - 0.27*t4436*var2[9] - 0.27*t4561*var2[10] - 0.27*(-1.*t1752*(0. + t4548 + t4552) - 1.*t1716*(0. + t1751*t4512 + t4523*t985))*var2[11]);
  p_output1[8]=var2[3]*(t5290 + (t5211 + t5223 - 0.25*t5226*t985 - 0.27*(-1.*t1751*t1752*t5226 + t1720*t5226*t985))*var2[3] + t5331*var2[4] + t5209*var2[10] - 0.27*t5176*var2[11]) + var2[9]*(t5290 + t5287*var2[3] + t5432*var2[4] + t5404*var2[10] - 0.27*t5357*var2[11]) + var2[10]*(t5209*var2[3] + t5617*var2[4] + t5404*var2[9] + (-0.25*t5487 - 0.27*(t1720*t5487 + t1752*(t1751*t5453 - 1.*t5462*t985)))*var2[10] - 0.27*t5491*var2[11]) + var2[4]*(t5331*var2[3] + (0.21935*t2200 + t5211 + t5223 - 0.25*t5569 - 0.27*(t1720*t5569 + t1752*(-1.*t1751*t5226 + t2200*t985)))*var2[4] + t5432*var2[9] + t5617*var2[10] - 0.27*t5555*var2[11]) + var2[11]*(-0.27*t5176*var2[3] - 0.27*t5555*var2[4] - 0.27*t5357*var2[9] - 0.27*t5491*var2[10] - 0.27*(-1.*t1752*(0. + t5454 + t5466) - 1.*t1716*(0. + t1751*t5462 + t5453*t985))*var2[11]);
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

#include "jj_hc_1_func.hh"

namespace SymFunction
{

void jj_hc_1_func_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
