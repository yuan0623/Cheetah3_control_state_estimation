/*
 * Automatically Generated from Mathematica.
 * Mon 29 Jul 2019 15:08:54 GMT-04:00
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
  double t465;
  double t58;
  double t248;
  double t245;
  double t602;
  double t671;
  double t766;
  double t780;
  double t295;
  double t628;
  double t649;
  double t958;
  double t927;
  double t1093;
  double t1325;
  double t1339;
  double t1381;
  double t971;
  double t1168;
  double t1203;
  double t1419;
  double t1425;
  double t1518;
  double t832;
  double t1798;
  double t1814;
  double t1834;
  double t1880;
  double t1897;
  double t1900;
  double t1920;
  double t1934;
  double t1948;
  double t1968;
  double t1978;
  double t1983;
  double t1522;
  double t1601;
  double t1653;
  double t2103;
  double t2115;
  double t2135;
  double t2141;
  double t2157;
  double t2178;
  double t2180;
  double t2389;
  double t2403;
  double t2407;
  double t2414;
  double t2341;
  double t2383;
  double t2230;
  double t2234;
  double t2277;
  double t2388;
  double t2416;
  double t2464;
  double t2473;
  double t2477;
  double t2481;
  double t2499;
  double t2503;
  double t2504;
  double t2188;
  double t2193;
  double t2203;
  double t2514;
  double t2515;
  double t2543;
  double t2550;
  double t2552;
  double t2555;
  double t2566;
  double t2620;
  double t2667;
  double t2676;
  double t2677;
  double t2679;
  double t2681;
  double t2687;
  double t2733;
  double t2734;
  double t2740;
  double t2741;
  double t2743;
  double t2776;
  double t2784;
  double t2787;
  double t2790;
  double t2779;
  double t2782;
  double t2791;
  double t2793;
  double t2798;
  double t2802;
  double t2807;
  double t2877;
  double t2878;
  double t2888;
  double t2929;
  double t2934;
  double t2950;
  double t2903;
  double t2906;
  double t2907;
  double t3010;
  double t3013;
  double t3015;
  double t3055;
  double t3056;
  double t3059;
  double t3021;
  double t3039;
  double t3040;
  double t3106;
  double t3108;
  double t3110;
  double t3140;
  double t3141;
  double t3150;
  double t3124;
  double t3125;
  double t3129;
  double t3165;
  double t3179;
  double t3181;
  double t3160;
  double t3161;
  double t3162;
  double t2587;
  double t2591;
  double t2603;
  double t2625;
  double t2630;
  double t2634;
  double t2663;
  double t2718;
  double t2983;
  double t2985;
  double t2997;
  double t2844;
  double t2858;
  double t2869;
  double t2812;
  double t2815;
  double t2818;
  double t3248;
  double t3253;
  double t3255;
  double t3279;
  double t3282;
  double t3293;
  double t3313;
  double t3320;
  double t3326;
  double t3295;
  double t3301;
  double t3308;
  double t3385;
  double t3387;
  double t3399;
  double t3414;
  double t3415;
  double t3417;
  double t3401;
  double t3402;
  double t3404;
  double t3378;
  double t3262;
  double t3264;
  double t3531;
  double t3536;
  double t3589;
  double t3590;
  double t3661;
  double t3662;
  double t3695;
  double t3697;
  double t3704;
  double t3684;
  double t3687;
  double t3688;
  double t3582;
  double t3584;
  double t3586;
  double t3512;
  double t3513;
  double t3519;
  double t3757;
  double t3754;
  double t3755;
  double t3758;
  double t3760;
  double t3763;
  double t3766;
  double t3767;
  double t3826;
  double t3804;
  double t3808;
  double t3817;
  double t3822;
  double t3827;
  double t3839;
  double t3844;
  double t3846;
  double t3847;
  double t3875;
  double t3877;
  double t3879;
  double t3882;
  double t3897;
  double t3898;
  double t3906;
  double t3885;
  double t3887;
  double t3890;
  double t3945;
  double t3949;
  double t3950;
  double t3942;
  double t3978;
  double t3984;
  double t3985;
  double t3974;
  double t4006;
  double t4009;
  double t4014;
  double t4017;
  double t4023;
  double t4024;
  t465 = Cos(var1[3]);
  t58 = Cos(var1[5]);
  t248 = Sin(var1[4]);
  t245 = Sin(var1[3]);
  t602 = Sin(var1[5]);
  t671 = t465*t58*t248;
  t766 = t245*t602;
  t780 = t671 + t766;
  t295 = -1.*t58*t245*t248;
  t628 = t465*t602;
  t649 = t295 + t628;
  t958 = Cos(var1[7]);
  t927 = Cos(var1[6]);
  t1093 = Sin(var1[7]);
  t1325 = t958*t649;
  t1339 = -1.*t927*t780*t1093;
  t1381 = t1325 + t1339;
  t971 = t927*t958*t780;
  t1168 = t649*t1093;
  t1203 = t971 + t1168;
  t1419 = Cos(var1[8]);
  t1425 = 0. + t1419;
  t1518 = Sin(var1[8]);
  t832 = Sin(var1[6]);
  t1798 = -1.*t465*t58;
  t1814 = -1.*t245*t248*t602;
  t1834 = t1798 + t1814;
  t1880 = -1.*t58*t245;
  t1897 = t465*t248*t602;
  t1900 = t1880 + t1897;
  t1920 = t958*t1834;
  t1934 = -1.*t927*t1900*t1093;
  t1948 = t1920 + t1934;
  t1968 = t927*t958*t1900;
  t1978 = t1834*t1093;
  t1983 = t1968 + t1978;
  t1522 = -1.*t1518;
  t1601 = 0. + t1522;
  t1653 = 0. + t1518;
  t2103 = Cos(var1[4]);
  t2115 = -1.*t2103*t958*t245;
  t2135 = -1.*t465*t2103*t927*t1093;
  t2141 = t2115 + t2135;
  t2157 = t465*t2103*t927*t958;
  t2178 = -1.*t2103*t245*t1093;
  t2180 = t2157 + t2178;
  t2389 = t2103*t927*t245;
  t2403 = 0. + t832;
  t2407 = -1.*t248*t2403;
  t2414 = 0. + t2389 + t2407;
  t2341 = t465*t2103;
  t2383 = 0. + t2341;
  t2230 = t1425*t2180;
  t2234 = t2141*t1653;
  t2277 = t2230 + t2234;
  t2388 = t2383*t958;
  t2416 = -1.*t2414*t1093;
  t2464 = 0. + t2388 + t2416;
  t2473 = t1425*t2464;
  t2477 = t958*t2414;
  t2481 = t2383*t1093;
  t2499 = 0. + t2477 + t2481;
  t2503 = t2499*t1601;
  t2504 = 0. + t2473 + t2503;
  t2188 = t1425*t2141;
  t2193 = t2180*t1601;
  t2203 = t2188 + t2193;
  t2514 = Power(t2504,2);
  t2515 = t1425*t2499;
  t2543 = t2464*t1653;
  t2550 = 0. + t2515 + t2543;
  t2552 = Power(t2550,2);
  t2555 = t2514 + t2552;
  t2566 = 1/t2555;
  t2620 = 0. + t927;
  t2667 = t2620*t248;
  t2676 = t2103*t245*t832;
  t2677 = 0. + t2667 + t2676;
  t2679 = Power(t2677,2);
  t2681 = t2679 + t2514 + t2552;
  t2687 = 1/t2681;
  t2733 = t2103*t58*t2620;
  t2734 = t58*t245*t248;
  t2740 = -1.*t465*t602;
  t2741 = t2734 + t2740;
  t2743 = -1.*t2741*t832;
  t2776 = 0. + t2733 + t2743;
  t2784 = t465*t58;
  t2787 = t245*t248*t602;
  t2790 = t2784 + t2787;
  t2779 = Power(t2776,2);
  t2782 = t2103*t2620*t602;
  t2791 = -1.*t2790*t832;
  t2793 = 0. + t2782 + t2791;
  t2798 = Power(t2793,2);
  t2802 = t2779 + t2798;
  t2807 = 1/t2802;
  t2877 = t2103*t58*t927*t245;
  t2878 = -1.*t58*t248*t2403;
  t2888 = t2877 + t2878;
  t2929 = t465*t2103*t58*t958;
  t2934 = -1.*t2888*t1093;
  t2950 = t2929 + t2934;
  t2903 = t958*t2888;
  t2906 = t465*t2103*t58*t1093;
  t2907 = t2903 + t2906;
  t3010 = t2103*t927*t245*t602;
  t3013 = -1.*t248*t602*t2403;
  t3015 = t3010 + t3013;
  t3055 = t465*t2103*t958*t602;
  t3056 = -1.*t3015*t1093;
  t3059 = t3055 + t3056;
  t3021 = t958*t3015;
  t3039 = t465*t2103*t602*t1093;
  t3040 = t3021 + t3039;
  t3106 = -1.*t927*t245*t248;
  t3108 = -1.*t2103*t2403;
  t3110 = t3106 + t3108;
  t3140 = -1.*t465*t958*t248;
  t3141 = -1.*t3110*t1093;
  t3150 = t3140 + t3141;
  t3124 = t958*t3110;
  t3125 = -1.*t465*t248*t1093;
  t3129 = t3124 + t3125;
  t3165 = t1425*t3129;
  t3179 = t3150*t1653;
  t3181 = t3165 + t3179;
  t3160 = t1425*t3150;
  t3161 = t3129*t1601;
  t3162 = t3160 + t3161;
  t2587 = -1.*t1425*t2499;
  t2591 = -1.*t2464*t1653;
  t2603 = 0. + t2587 + t2591;
  t2625 = -1.*t2620*t248;
  t2630 = -1.*t2103*t245*t832;
  t2634 = 0. + t2625 + t2630;
  t2663 = 1/Sqrt(t2555);
  t2718 = Sqrt(t2555);
  t2983 = -1.*t2620*t248*t602;
  t2985 = -1.*t2103*t245*t602*t832;
  t2997 = t2983 + t2985;
  t2844 = -1.*t58*t2620*t248;
  t2858 = -1.*t2103*t58*t245*t832;
  t2869 = t2844 + t2858;
  t2812 = -1.*t2103*t2620*t602;
  t2815 = t2790*t832;
  t2818 = 0. + t2812 + t2815;
  t3248 = t58*t245;
  t3253 = -1.*t465*t248*t602;
  t3255 = t3248 + t3253;
  t3279 = t927*t1834;
  t3282 = -1.*t2103*t602*t2403;
  t3293 = t3279 + t3282;
  t3313 = t958*t3255;
  t3320 = -1.*t3293*t1093;
  t3326 = t3313 + t3320;
  t3295 = t958*t3293;
  t3301 = t3255*t1093;
  t3308 = t3295 + t3301;
  t3385 = t927*t2741;
  t3387 = t2103*t58*t2403;
  t3399 = t3385 + t3387;
  t3414 = t958*t780;
  t3415 = -1.*t3399*t1093;
  t3417 = t3414 + t3415;
  t3401 = t958*t3399;
  t3402 = t780*t1093;
  t3404 = t3401 + t3402;
  t3378 = t2733 + t2743;
  t3262 = -1.*t1834*t832;
  t3264 = t2812 + t3262;
  t3531 = t2103*t58*t927;
  t3536 = t3531 + t2743;
  t3589 = t2103*t927*t602;
  t3590 = t3589 + t2791;
  t3661 = -1.*t927*t248;
  t3662 = t3661 + t2630;
  t3695 = t958*t1425*t3662;
  t3697 = -1.*t3662*t1093*t1653;
  t3704 = t3695 + t3697;
  t3684 = -1.*t1425*t3662*t1093;
  t3687 = t958*t3662*t1601;
  t3688 = t3684 + t3687;
  t3582 = -1.*t927*t2790;
  t3584 = -1.*t2103*t602*t832;
  t3586 = t3582 + t3584;
  t3512 = -1.*t927*t2741;
  t3513 = -1.*t2103*t58*t832;
  t3519 = t3512 + t3513;
  t3757 = 0. + t671 + t766;
  t3754 = 0. + t3385 + t3387;
  t3755 = -1.*t958*t3754;
  t3758 = -1.*t3757*t1093;
  t3760 = t3755 + t3758;
  t3763 = t958*t3757;
  t3766 = -1.*t3754*t1093;
  t3767 = t3763 + t3766;
  t3826 = 0. + t1880 + t1897;
  t3804 = t927*t2790;
  t3808 = t2103*t602*t2403;
  t3817 = 0. + t3804 + t3808;
  t3822 = -1.*t958*t3817;
  t3827 = -1.*t3826*t1093;
  t3839 = t3822 + t3827;
  t3844 = t958*t3826;
  t3846 = -1.*t3817*t1093;
  t3847 = t3844 + t3846;
  t3875 = -1.*t958*t2414;
  t3877 = -1.*t2383*t1093;
  t3879 = t3875 + t3877;
  t3882 = t2388 + t2416;
  t3897 = t1425*t3882;
  t3898 = t3879*t1653;
  t3906 = t3897 + t3898;
  t3885 = t1425*t3879;
  t3887 = t3882*t1601;
  t3890 = t3885 + t3887;
  t3945 = t958*t3754;
  t3949 = t3757*t1093;
  t3950 = 0. + t3945 + t3949;
  t3942 = 0. + t3763 + t3766;
  t3978 = t958*t3817;
  t3984 = t3826*t1093;
  t3985 = 0. + t3978 + t3984;
  t3974 = 0. + t3844 + t3846;
  t4006 = t1419*t2464;
  t4009 = -1.*t2499*t1518;
  t4014 = t4006 + t4009;
  t4017 = -1.*t1419*t2499;
  t4023 = -1.*t2464*t1518;
  t4024 = t4017 + t4023;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=1.;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=1.;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=1.;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=1.;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=-0.2083*t1203 - 0.1422*t1381 - 0.02*(t1381*t1425 + t1203*t1601) - 0.16*(t1203*t1425 + t1381*t1653) + 0.2429*t649 + 0.0329*t780*t832;
  p_output1[31]=0.2429*t1834 - 0.1422*t1948 - 0.2083*t1983 - 0.16*(t1653*t1948 + t1425*t1983) - 0.02*(t1425*t1948 + t1601*t1983) + 0.0329*t1900*t832;
  p_output1[32]=-0.1422*t2141 - 0.2083*t2180 - 0.02*t2203 - 0.16*t2277 - 0.2429*t2103*t245 + 0.0329*t2103*t465*t832;
  p_output1[33]=t2277*t2504*t2566 + t2203*t2566*t2603;
  p_output1[34]=0.5*(2.*t2203*t2504 + 2.*t2277*t2550)*t2634*t2663*t2687 + t2103*t2687*t2718*t465*t832;
  p_output1[35]=-1.*t1900*t2776*t2807*t832 - 1.*t2807*t2818*t780*t832;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=-0.0329*t2869 - 0.2083*t2907 - 0.1422*t2950 - 0.02*(t1601*t2907 + t1425*t2950) - 0.16*(t1425*t2907 + t1653*t2950) + 0.0817*t248*t58 + 0.2429*t2103*t465*t58;
  p_output1[40]=-0.0329*t2997 - 0.2083*t3040 - 0.1422*t3059 - 0.02*(t1601*t3040 + t1425*t3059) - 0.16*(t1425*t3040 + t1653*t3059) + 0.0817*t248*t602 + 0.2429*t2103*t465*t602;
  p_output1[41]=0.0817*t2103 - 0.2083*t3129 - 0.1422*t3150 - 0.02*t3162 - 0.16*t3181 - 0.2429*t248*t465 - 0.0329*(-1.*t2103*t2620 + t245*t248*t832);
  p_output1[42]=t2566*t2603*t3162 + t2504*t2566*t3181;
  p_output1[43]=0.5*t2634*t2663*t2687*(2.*t2504*t3162 + 2.*t2550*t3181) + t2687*t2718*(t2103*t2620 - 1.*t245*t248*t832);
  p_output1[44]=t2807*t2818*t2869 + t2776*t2807*t2997;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0.2429*t3255 - 0.0329*t3264 - 0.2083*t3308 - 0.1422*t3326 - 0.02*(t1601*t3308 + t1425*t3326) - 0.16*(t1425*t3308 + t1653*t3326) + 0.0817*t2103*t602;
  p_output1[49]=-0.0329*t3378 - 0.2083*t3404 - 0.1422*t3417 - 0.02*(t1601*t3404 + t1425*t3417) - 0.16*(t1425*t3404 + t1653*t3417) - 0.0817*t2103*t58 + 0.2429*t780;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=t2807*t2818*t3264 + t2776*t2807*t3378;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=-0.0329*t3519 + 0.1422*t1093*t3536 - 0.2083*t3536*t958 - 0.16*(-1.*t1093*t1653*t3536 + t1425*t3536*t958) - 0.02*(-1.*t1093*t1425*t3536 + t1601*t3536*t958);
  p_output1[58]=-0.0329*t3586 + 0.1422*t1093*t3590 - 0.2083*t3590*t958 - 0.16*(-1.*t1093*t1653*t3590 + t1425*t3590*t958) - 0.02*(-1.*t1093*t1425*t3590 + t1601*t3590*t958);
  p_output1[59]=0.1422*t1093*t3662 - 0.02*t3688 - 0.16*t3704 - 0.0329*(t248*t832 - 1.*t2103*t245*t927) - 0.2083*t3662*t958;
  p_output1[60]=t2566*t2603*t3688 + t2504*t2566*t3704;
  p_output1[61]=0.5*t2634*t2663*t2687*(2.*t2504*t3688 + 2.*t2550*t3704) + t2687*t2718*(t2389 - 1.*t248*t832);
  p_output1[62]=t2807*t2818*t3519 + t2776*t2807*t3586;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=-0.1422*t3760 - 0.2083*t3767 - 0.16*(t1653*t3760 + t1425*t3767) - 0.02*(t1425*t3760 + t1601*t3767);
  p_output1[67]=-0.1422*t3839 - 0.2083*t3847 - 0.16*(t1653*t3839 + t1425*t3847) - 0.02*(t1425*t3839 + t1601*t3847);
  p_output1[68]=-0.1422*t3879 - 0.2083*t3882 - 0.02*t3890 - 0.16*t3906;
  p_output1[69]=t2566*t2603*t3890 + t2504*t2566*t3906;
  p_output1[70]=0.5*t2634*t2663*t2687*(2.*t2504*t3890 + 2.*t2550*t3906);
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=-0.02*(-1.*t1518*t3942 - 1.*t1419*t3950) - 0.16*(t1419*t3942 - 1.*t1518*t3950);
  p_output1[76]=-0.02*(-1.*t1518*t3974 - 1.*t1419*t3985) - 0.16*(t1419*t3974 - 1.*t1518*t3985);
  p_output1[77]=-0.16*t4014 - 0.02*t4024;
  p_output1[78]=t2504*t2566*t4014 + t2566*t2603*t4024;
  p_output1[79]=0.5*t2634*t2663*t2687*(2.*t2550*t4014 + 2.*t2504*t4024);
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=0;
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
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
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
  p_output1[120]=0;
  p_output1[121]=0;
  p_output1[122]=0;
  p_output1[123]=0;
  p_output1[124]=0;
  p_output1[125]=0;
  p_output1[126]=0;
  p_output1[127]=0;
  p_output1[128]=0;
  p_output1[129]=0;
  p_output1[130]=0;
  p_output1[131]=0;
  p_output1[132]=0;
  p_output1[133]=0;
  p_output1[134]=0;
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

#include "j_hc_3_func.hh"

namespace SymFunction
{

void j_hc_3_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
