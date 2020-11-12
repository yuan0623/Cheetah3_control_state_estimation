/*
 * Automatically Generated from Mathematica.
 * Mon 29 Jul 2019 15:08:57 GMT-04:00
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
  double t179;
  double t136;
  double t148;
  double t138;
  double t222;
  double t168;
  double t289;
  double t322;
  double t398;
  double t406;
  double t409;
  double t632;
  double t628;
  double t562;
  double t614;
  double t638;
  double t644;
  double t655;
  double t667;
  double t671;
  double t1203;
  double t1250;
  double t766;
  double t362;
  double t1642;
  double t1648;
  double t1684;
  double t1756;
  double t1763;
  double t1848;
  double t1465;
  double t1893;
  double t1897;
  double t1909;
  double t1948;
  double t1961;
  double t1968;
  double t881;
  double t971;
  double t2069;
  double t2107;
  double t2111;
  double t2141;
  double t2157;
  double t2180;
  double t2184;
  double t2193;
  double t2208;
  double t2230;
  double t2477;
  double t2481;
  double t2514;
  double t2515;
  double t2543;
  double t2552;
  double t2555;
  double t2503;
  double t2566;
  double t2568;
  double t2569;
  double t2584;
  double t2593;
  double t2603;
  double t2618;
  double t2619;
  double t2310;
  double t2315;
  double t2341;
  double t2638;
  double t2644;
  double t2649;
  double t2667;
  double t2676;
  double t2677;
  double t2679;
  double t2733;
  double t2797;
  double t2798;
  double t2802;
  double t2810;
  double t2815;
  double t2834;
  double t2869;
  double t2872;
  double t2877;
  double t2898;
  double t2903;
  double t2906;
  double t2928;
  double t2929;
  double t2948;
  double t2907;
  double t2926;
  double t2950;
  double t2953;
  double t2958;
  double t2960;
  double t2962;
  double t3039;
  double t3040;
  double t3052;
  double t3021;
  double t3055;
  double t3059;
  double t3067;
  double t3070;
  double t3073;
  double t3154;
  double t3160;
  double t3161;
  double t3150;
  double t3164;
  double t3165;
  double t3183;
  double t3184;
  double t3188;
  double t3255;
  double t3259;
  double t3264;
  double t3248;
  double t3271;
  double t3273;
  double t3295;
  double t3301;
  double t3308;
  double t2681;
  double t2692;
  double t2708;
  double t3313;
  double t3326;
  double t3327;
  double t3329;
  double t3330;
  double t3331;
  double t2837;
  double t2722;
  double t2734;
  double t2779;
  double t2793;
  double t3124;
  double t3129;
  double t3134;
  double t2977;
  double t2997;
  double t3009;
  double t2965;
  double t2966;
  double t2969;
  double t3433;
  double t3435;
  double t3441;
  double t3466;
  double t3484;
  double t3502;
  double t3464;
  double t3507;
  double t3511;
  double t3530;
  double t3531;
  double t3539;
  double t3600;
  double t3609;
  double t3612;
  double t3595;
  double t3616;
  double t3622;
  double t3641;
  double t3648;
  double t3652;
  double t3589;
  double t3448;
  double t3451;
  double t3719;
  double t3723;
  double t3724;
  double t3781;
  double t3782;
  double t3844;
  double t3847;
  double t3871;
  double t3879;
  double t3880;
  double t3865;
  double t3866;
  double t3867;
  double t3763;
  double t3767;
  double t3769;
  double t3711;
  double t3716;
  double t3945;
  double t3951;
  double t3949;
  double t3953;
  double t3959;
  double t3961;
  double t3962;
  double t3964;
  double t4000;
  double t4003;
  double t4004;
  double t4001;
  double t4005;
  double t4006;
  double t4019;
  double t4025;
  double t4026;
  double t4054;
  double t4055;
  double t4056;
  double t4060;
  double t4064;
  double t4065;
  double t4069;
  double t4072;
  double t4073;
  double t4074;
  double t4091;
  double t4093;
  double t4105;
  double t4110;
  double t4141;
  double t4143;
  double t4144;
  double t4147;
  double t4188;
  double t4189;
  double t4190;
  double t4200;
  double t4201;
  double t4207;
  t179 = Cos(var1[3]);
  t136 = Cos(var1[5]);
  t148 = Sin(var1[4]);
  t138 = Sin(var1[3]);
  t222 = Sin(var1[5]);
  t168 = -1.*t136*t138*t148;
  t289 = t179*t222;
  t322 = t168 + t289;
  t398 = t179*t136*t148;
  t406 = t138*t222;
  t409 = t398 + t406;
  t632 = Cos(var1[16]);
  t628 = Cos(var1[15]);
  t562 = Sin(var1[16]);
  t614 = t562*t322;
  t638 = t628*t632*t409;
  t644 = t614 + t638;
  t655 = t632*t322;
  t667 = -1.*t628*t562*t409;
  t671 = t655 + t667;
  t1203 = Cos(var1[17]);
  t1250 = 0. + t1203;
  t766 = Sin(var1[17]);
  t362 = Sin(var1[15]);
  t1642 = -1.*t136*t138;
  t1648 = t179*t148*t222;
  t1684 = t1642 + t1648;
  t1756 = -1.*t179*t136;
  t1763 = -1.*t138*t148*t222;
  t1848 = t1756 + t1763;
  t1465 = 0. + t766;
  t1893 = -1.*t628*t562*t1684;
  t1897 = t632*t1848;
  t1909 = t1893 + t1897;
  t1948 = t628*t632*t1684;
  t1961 = t562*t1848;
  t1968 = t1948 + t1961;
  t881 = -1.*t766;
  t971 = 0. + t881;
  t2069 = Cos(var1[4]);
  t2107 = -1.*t628*t179*t2069*t562;
  t2111 = -1.*t632*t2069*t138;
  t2141 = t2107 + t2111;
  t2157 = t628*t632*t179*t2069;
  t2180 = -1.*t2069*t562*t138;
  t2184 = t2157 + t2180;
  t2193 = t1465*t2141;
  t2208 = t1250*t2184;
  t2230 = t2193 + t2208;
  t2477 = t179*t2069;
  t2481 = 0. + t2477;
  t2514 = t628*t2069*t138;
  t2515 = -1.*t362;
  t2543 = 0. + t2515;
  t2552 = -1.*t2543*t148;
  t2555 = 0. + t2514 + t2552;
  t2503 = t2481*t562;
  t2566 = t632*t2555;
  t2568 = 0. + t2503 + t2566;
  t2569 = t971*t2568;
  t2584 = t632*t2481;
  t2593 = -1.*t562*t2555;
  t2603 = 0. + t2584 + t2593;
  t2618 = t1250*t2603;
  t2619 = 0. + t2569 + t2618;
  t2310 = t1250*t2141;
  t2315 = t971*t2184;
  t2341 = t2310 + t2315;
  t2638 = Power(t2619,2);
  t2644 = t1250*t2568;
  t2649 = t1465*t2603;
  t2667 = 0. + t2644 + t2649;
  t2676 = Power(t2667,2);
  t2677 = t2638 + t2676;
  t2679 = 1/t2677;
  t2733 = 0. + t628;
  t2797 = -1.*t2069*t362*t138;
  t2798 = t2733*t148;
  t2802 = 0. + t2797 + t2798;
  t2810 = Power(t2802,2);
  t2815 = t2810 + t2638 + t2676;
  t2834 = 1/t2815;
  t2869 = t2733*t2069*t136;
  t2872 = t136*t138*t148;
  t2877 = -1.*t179*t222;
  t2898 = t2872 + t2877;
  t2903 = t362*t2898;
  t2906 = 0. + t2869 + t2903;
  t2928 = t179*t136;
  t2929 = t138*t148*t222;
  t2948 = t2928 + t2929;
  t2907 = Power(t2906,2);
  t2926 = t2733*t2069*t222;
  t2950 = t362*t2948;
  t2953 = 0. + t2926 + t2950;
  t2958 = Power(t2953,2);
  t2960 = t2907 + t2958;
  t2962 = 1/t2960;
  t3039 = t628*t2069*t136*t138;
  t3040 = -1.*t136*t2543*t148;
  t3052 = t3039 + t3040;
  t3021 = t179*t2069*t136*t562;
  t3055 = t632*t3052;
  t3059 = t3021 + t3055;
  t3067 = t632*t179*t2069*t136;
  t3070 = -1.*t562*t3052;
  t3073 = t3067 + t3070;
  t3154 = t628*t2069*t138*t222;
  t3160 = -1.*t2543*t148*t222;
  t3161 = t3154 + t3160;
  t3150 = t179*t2069*t562*t222;
  t3164 = t632*t3161;
  t3165 = t3150 + t3164;
  t3183 = t632*t179*t2069*t222;
  t3184 = -1.*t562*t3161;
  t3188 = t3183 + t3184;
  t3255 = -1.*t2069*t2543;
  t3259 = -1.*t628*t138*t148;
  t3264 = t3255 + t3259;
  t3248 = -1.*t179*t562*t148;
  t3271 = t632*t3264;
  t3273 = t3248 + t3271;
  t3295 = -1.*t632*t179*t148;
  t3301 = -1.*t562*t3264;
  t3308 = t3295 + t3301;
  t2681 = -1.*t1250*t2568;
  t2692 = -1.*t1465*t2603;
  t2708 = 0. + t2681 + t2692;
  t3313 = t971*t3273;
  t3326 = t1250*t3308;
  t3327 = t3313 + t3326;
  t3329 = t1250*t3273;
  t3330 = t1465*t3308;
  t3331 = t3329 + t3330;
  t2837 = Sqrt(t2677);
  t2722 = t2069*t362*t138;
  t2734 = -1.*t2733*t148;
  t2779 = 0. + t2722 + t2734;
  t2793 = 1/Sqrt(t2677);
  t3124 = t2069*t362*t138*t222;
  t3129 = -1.*t2733*t148*t222;
  t3134 = t3124 + t3129;
  t2977 = t2069*t136*t362*t138;
  t2997 = -1.*t2733*t136*t148;
  t3009 = t2977 + t2997;
  t2965 = -1.*t2733*t2069*t222;
  t2966 = -1.*t362*t2948;
  t2969 = 0. + t2965 + t2966;
  t3433 = t136*t138;
  t3435 = -1.*t179*t148*t222;
  t3441 = t3433 + t3435;
  t3466 = -1.*t2069*t2543*t222;
  t3484 = t628*t1848;
  t3502 = t3466 + t3484;
  t3464 = t562*t3441;
  t3507 = t632*t3502;
  t3511 = t3464 + t3507;
  t3530 = t632*t3441;
  t3531 = -1.*t562*t3502;
  t3539 = t3530 + t3531;
  t3600 = t2069*t136*t2543;
  t3609 = t628*t2898;
  t3612 = t3600 + t3609;
  t3595 = t562*t409;
  t3616 = t632*t3612;
  t3622 = t3595 + t3616;
  t3641 = t632*t409;
  t3648 = -1.*t562*t3612;
  t3652 = t3641 + t3648;
  t3589 = t2869 + t2903;
  t3448 = t362*t1848;
  t3451 = t2965 + t3448;
  t3719 = -1.*t628*t2069*t136;
  t3723 = -1.*t362*t2898;
  t3724 = t3719 + t3723;
  t3781 = -1.*t628*t2069*t222;
  t3782 = t3781 + t2966;
  t3844 = t628*t148;
  t3847 = t2797 + t3844;
  t3871 = t632*t1250*t3847;
  t3879 = -1.*t562*t1465*t3847;
  t3880 = t3871 + t3879;
  t3865 = -1.*t1250*t562*t3847;
  t3866 = t632*t971*t3847;
  t3867 = t3865 + t3866;
  t3763 = -1.*t2069*t362*t222;
  t3767 = t628*t2948;
  t3769 = t3763 + t3767;
  t3711 = -1.*t2069*t136*t362;
  t3716 = t3711 + t3609;
  t3945 = 0. + t398 + t406;
  t3951 = 0. + t3600 + t3609;
  t3949 = -1.*t562*t3945;
  t3953 = -1.*t632*t3951;
  t3959 = t3949 + t3953;
  t3961 = t632*t3945;
  t3962 = -1.*t562*t3951;
  t3964 = t3961 + t3962;
  t4000 = 0. + t1642 + t1648;
  t4003 = t2069*t2543*t222;
  t4004 = 0. + t4003 + t3767;
  t4001 = -1.*t562*t4000;
  t4005 = -1.*t632*t4004;
  t4006 = t4001 + t4005;
  t4019 = t632*t4000;
  t4025 = -1.*t562*t4004;
  t4026 = t4019 + t4025;
  t4054 = -1.*t2481*t562;
  t4055 = -1.*t632*t2555;
  t4056 = t4054 + t4055;
  t4060 = t2584 + t2593;
  t4064 = t1465*t4056;
  t4065 = t1250*t4060;
  t4069 = t4064 + t4065;
  t4072 = t1250*t4056;
  t4073 = t971*t4060;
  t4074 = t4072 + t4073;
  t4091 = t562*t3945;
  t4093 = t632*t3951;
  t4105 = 0. + t4091 + t4093;
  t4110 = 0. + t3961 + t3962;
  t4141 = t562*t4000;
  t4143 = t632*t4004;
  t4144 = 0. + t4141 + t4143;
  t4147 = 0. + t4019 + t4025;
  t4188 = -1.*t766*t2568;
  t4189 = t1203*t2603;
  t4190 = t4188 + t4189;
  t4200 = -1.*t1203*t2568;
  t4201 = -1.*t766*t2603;
  t4207 = t4200 + t4201;
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
  p_output1[30]=-0.1944*t322 + 0.0329*t362*t409 - 0.2083*t644 - 0.1422*t671 - 0.16*(t1250*t644 + t1465*t671) - 0.02*(t1250*t671 + t644*t971);
  p_output1[31]=-0.1944*t1848 - 0.1422*t1909 - 0.2083*t1968 - 0.16*(t1465*t1909 + t1250*t1968) + 0.0329*t1684*t362 - 0.02*(t1250*t1909 + t1968*t971);
  p_output1[32]=0.1944*t138*t2069 - 0.1422*t2141 - 0.2083*t2184 - 0.16*t2230 - 0.02*t2341 + 0.0329*t179*t2069*t362;
  p_output1[33]=t2230*t2619*t2679 + t2341*t2679*t2708;
  p_output1[34]=0.5*(2.*t2341*t2619 + 2.*t2230*t2667)*t2779*t2793*t2834 - 1.*t179*t2069*t2834*t2837*t362;
  p_output1[35]=t1684*t2906*t2962*t362 + t2962*t2969*t362*t409;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=-0.0817*t136*t148 - 0.1944*t136*t179*t2069 + 0.0329*t3009 - 0.2083*t3059 - 0.1422*t3073 - 0.16*(t1250*t3059 + t1465*t3073) - 0.02*(t1250*t3073 + t3059*t971);
  p_output1[40]=-0.0817*t148*t222 - 0.1944*t179*t2069*t222 + 0.0329*t3134 - 0.2083*t3165 - 0.1422*t3188 - 0.16*(t1250*t3165 + t1465*t3188) - 0.02*(t1250*t3188 + t3165*t971);
  p_output1[41]=0.1944*t148*t179 - 0.0817*t2069 - 0.2083*t3273 - 0.1422*t3308 - 0.02*t3327 - 0.16*t3331 + 0.0329*(-1.*t2069*t2733 - 1.*t138*t148*t362);
  p_output1[42]=t2679*t2708*t3327 + t2619*t2679*t3331;
  p_output1[43]=0.5*t2779*t2793*t2834*(2.*t2619*t3327 + 2.*t2667*t3331) + t2834*t2837*(t2069*t2733 + t138*t148*t362);
  p_output1[44]=t2962*t2969*t3009 + t2906*t2962*t3134;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.0817*t2069*t222 - 0.1944*t3441 + 0.0329*t3451 - 0.2083*t3511 - 0.1422*t3539 - 0.16*(t1250*t3511 + t1465*t3539) - 0.02*(t1250*t3539 + t3511*t971);
  p_output1[49]=0.0817*t136*t2069 + 0.0329*t3589 - 0.2083*t3622 - 0.1422*t3652 - 0.16*(t1250*t3622 + t1465*t3652) - 0.1944*t409 - 0.02*(t1250*t3652 + t3622*t971);
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=t2962*t2969*t3451 + t2906*t2962*t3589;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0;
  p_output1[79]=0;
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
  p_output1[138]=0.0329*t3716 + 0.1422*t3724*t562 - 0.2083*t3724*t632 - 0.16*(-1.*t1465*t3724*t562 + t1250*t3724*t632) - 0.02*(-1.*t1250*t3724*t562 + t3724*t632*t971);
  p_output1[139]=0.0329*t3769 + 0.1422*t3782*t562 - 0.2083*t3782*t632 - 0.16*(-1.*t1465*t3782*t562 + t1250*t3782*t632) - 0.02*(-1.*t1250*t3782*t562 + t3782*t632*t971);
  p_output1[140]=0.0329*(t2514 + t148*t362) - 0.02*t3867 - 0.16*t3880 + 0.1422*t3847*t562 - 0.2083*t3847*t632;
  p_output1[141]=t2679*t2708*t3867 + t2619*t2679*t3880;
  p_output1[142]=0.5*t2779*t2793*t2834*(2.*t2619*t3867 + 2.*t2667*t3880) + t2834*t2837*(-1.*t148*t362 - 1.*t138*t2069*t628);
  p_output1[143]=t2962*t2969*t3716 + t2906*t2962*t3769;
  p_output1[144]=0;
  p_output1[145]=0;
  p_output1[146]=0;
  p_output1[147]=-0.1422*t3959 - 0.2083*t3964 - 0.16*(t1465*t3959 + t1250*t3964) - 0.02*(t1250*t3959 + t3964*t971);
  p_output1[148]=-0.1422*t4006 - 0.2083*t4026 - 0.16*(t1465*t4006 + t1250*t4026) - 0.02*(t1250*t4006 + t4026*t971);
  p_output1[149]=-0.1422*t4056 - 0.2083*t4060 - 0.16*t4069 - 0.02*t4074;
  p_output1[150]=t2619*t2679*t4069 + t2679*t2708*t4074;
  p_output1[151]=0.5*t2779*t2793*t2834*(2.*t2667*t4069 + 2.*t2619*t4074);
  p_output1[152]=0;
  p_output1[153]=0;
  p_output1[154]=0;
  p_output1[155]=0;
  p_output1[156]=-0.16*(t1203*t4110 - 1.*t4105*t766) - 0.02*(-1.*t1203*t4105 - 1.*t4110*t766);
  p_output1[157]=-0.16*(t1203*t4147 - 1.*t4144*t766) - 0.02*(-1.*t1203*t4144 - 1.*t4147*t766);
  p_output1[158]=-0.16*t4190 - 0.02*t4207;
  p_output1[159]=t2619*t2679*t4190 + t2679*t2708*t4207;
  p_output1[160]=0.5*t2779*t2793*t2834*(2.*t2667*t4190 + 2.*t2619*t4207);
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

#include "j_hc_4_func.hh"

namespace SymFunction
{

void j_hc_4_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
