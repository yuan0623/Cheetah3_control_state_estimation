/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 21:23:00 GMT-05:00
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
  double t1718;
  double t6;
  double t1074;
  double t18;
  double t1725;
  double t1596;
  double t1753;
  double t1759;
  double t1850;
  double t1855;
  double t1867;
  double t1934;
  double t1910;
  double t1874;
  double t1877;
  double t1969;
  double t1995;
  double t1999;
  double t2001;
  double t2006;
  double t2066;
  double t2068;
  double t2028;
  double t1807;
  double t2127;
  double t2132;
  double t2134;
  double t2144;
  double t2183;
  double t2189;
  double t2103;
  double t2194;
  double t2200;
  double t2204;
  double t2250;
  double t2257;
  double t2263;
  double t2031;
  double t2033;
  double t2321;
  double t2333;
  double t2337;
  double t2340;
  double t2359;
  double t2363;
  double t2364;
  double t2456;
  double t2460;
  double t2469;
  double t2477;
  double t2483;
  double t2454;
  double t2489;
  double t2507;
  double t2528;
  double t2530;
  double t2543;
  double t2447;
  double t2637;
  double t2638;
  double t2642;
  double t2636;
  double t2645;
  double t2659;
  double t2665;
  double t2669;
  double t2670;
  double t2738;
  double t2749;
  double t2757;
  double t2721;
  double t2758;
  double t2759;
  double t2762;
  double t2763;
  double t2775;
  double t2802;
  double t2803;
  double t2806;
  double t2828;
  double t2829;
  double t2830;
  double t2827;
  double t2831;
  double t2832;
  double t2842;
  double t2844;
  double t2849;
  double t2882;
  double t2904;
  double t2908;
  double t2923;
  double t2924;
  double t2925;
  double t2922;
  double t2928;
  double t2936;
  double t2939;
  double t2940;
  double t2941;
  double t2987;
  double t2988;
  double t2989;
  double t3052;
  double t3055;
  double t3056;
  double t3068;
  double t3069;
  double t3070;
  double t3108;
  double t3112;
  double t3113;
  double t3145;
  double t3148;
  double t3147;
  double t3150;
  double t3153;
  double t3163;
  double t3164;
  double t3165;
  double t3058;
  double t3204;
  double t3208;
  double t3209;
  double t3205;
  double t3210;
  double t3211;
  double t3223;
  double t3230;
  double t3232;
  double t3119;
  double t3252;
  double t3258;
  double t3268;
  double t3271;
  double t3259;
  double t3272;
  double t3273;
  double t3277;
  double t3278;
  double t3279;
  double t3305;
  double t3306;
  double t3310;
  double t3312;
  double t3330;
  double t3331;
  double t3334;
  double t3337;
  double t3352;
  double t3354;
  double t3355;
  double t3358;
  t1718 = Cos(var1[3]);
  t6 = Cos(var1[5]);
  t1074 = Sin(var1[4]);
  t18 = Sin(var1[3]);
  t1725 = Sin(var1[5]);
  t1596 = -1.*t6*t18*t1074;
  t1753 = t1718*t1725;
  t1759 = t1596 + t1753;
  t1850 = t1718*t6*t1074;
  t1855 = t18*t1725;
  t1867 = t1850 + t1855;
  t1934 = Cos(var1[10]);
  t1910 = Cos(var1[9]);
  t1874 = Sin(var1[10]);
  t1877 = t1874*t1759;
  t1969 = t1910*t1934*t1867;
  t1995 = t1877 + t1969;
  t1999 = t1934*t1759;
  t2001 = -1.*t1910*t1874*t1867;
  t2006 = t1999 + t2001;
  t2066 = Cos(var1[11]);
  t2068 = 0. + t2066;
  t2028 = Sin(var1[11]);
  t1807 = Sin(var1[9]);
  t2127 = -1.*t6*t18;
  t2132 = t1718*t1074*t1725;
  t2134 = t2127 + t2132;
  t2144 = -1.*t1718*t6;
  t2183 = -1.*t18*t1074*t1725;
  t2189 = t2144 + t2183;
  t2103 = 0. + t2028;
  t2194 = -1.*t1910*t1874*t2134;
  t2200 = t1934*t2189;
  t2204 = t2194 + t2200;
  t2250 = t1910*t1934*t2134;
  t2257 = t1874*t2189;
  t2263 = t2250 + t2257;
  t2031 = -1.*t2028;
  t2033 = 0. + t2031;
  t2321 = Cos(var1[4]);
  t2333 = -1.*t1910*t1718*t2321*t1874;
  t2337 = -1.*t1934*t2321*t18;
  t2340 = t2333 + t2337;
  t2359 = t1910*t1934*t1718*t2321;
  t2363 = -1.*t2321*t1874*t18;
  t2364 = t2359 + t2363;
  t2456 = t1910*t2321*t6*t18;
  t2460 = -1.*t1807;
  t2469 = 0. + t2460;
  t2477 = -1.*t6*t2469*t1074;
  t2483 = t2456 + t2477;
  t2454 = t1718*t2321*t6*t1874;
  t2489 = t1934*t2483;
  t2507 = t2454 + t2489;
  t2528 = t1934*t1718*t2321*t6;
  t2530 = -1.*t1874*t2483;
  t2543 = t2528 + t2530;
  t2447 = 0. + t1910;
  t2637 = t1910*t2321*t18*t1725;
  t2638 = -1.*t2469*t1074*t1725;
  t2642 = t2637 + t2638;
  t2636 = t1718*t2321*t1874*t1725;
  t2645 = t1934*t2642;
  t2659 = t2636 + t2645;
  t2665 = t1934*t1718*t2321*t1725;
  t2669 = -1.*t1874*t2642;
  t2670 = t2665 + t2669;
  t2738 = -1.*t2321*t2469;
  t2749 = -1.*t1910*t18*t1074;
  t2757 = t2738 + t2749;
  t2721 = -1.*t1718*t1874*t1074;
  t2758 = t1934*t2757;
  t2759 = t2721 + t2758;
  t2762 = -1.*t1934*t1718*t1074;
  t2763 = -1.*t1874*t2757;
  t2775 = t2762 + t2763;
  t2802 = t6*t18;
  t2803 = -1.*t1718*t1074*t1725;
  t2806 = t2802 + t2803;
  t2828 = -1.*t2321*t2469*t1725;
  t2829 = t1910*t2189;
  t2830 = t2828 + t2829;
  t2827 = t1874*t2806;
  t2831 = t1934*t2830;
  t2832 = t2827 + t2831;
  t2842 = t1934*t2806;
  t2844 = -1.*t1874*t2830;
  t2849 = t2842 + t2844;
  t2882 = t6*t18*t1074;
  t2904 = -1.*t1718*t1725;
  t2908 = t2882 + t2904;
  t2923 = t2321*t6*t2469;
  t2924 = t1910*t2908;
  t2925 = t2923 + t2924;
  t2922 = t1874*t1867;
  t2928 = t1934*t2925;
  t2936 = t2922 + t2928;
  t2939 = t1934*t1867;
  t2940 = -1.*t1874*t2925;
  t2941 = t2939 + t2940;
  t2987 = -1.*t1910*t2321*t6;
  t2988 = -1.*t1807*t2908;
  t2989 = t2987 + t2988;
  t3052 = t1718*t6;
  t3055 = t18*t1074*t1725;
  t3056 = t3052 + t3055;
  t3068 = -1.*t1910*t2321*t1725;
  t3069 = -1.*t1807*t3056;
  t3070 = t3068 + t3069;
  t3108 = -1.*t2321*t1807*t18;
  t3112 = t1910*t1074;
  t3113 = t3108 + t3112;
  t3145 = 0. + t1850 + t1855;
  t3148 = 0. + t2923 + t2924;
  t3147 = -1.*t1874*t3145;
  t3150 = -1.*t1934*t3148;
  t3153 = t3147 + t3150;
  t3163 = t1934*t3145;
  t3164 = -1.*t1874*t3148;
  t3165 = t3163 + t3164;
  t3058 = t1910*t3056;
  t3204 = 0. + t2127 + t2132;
  t3208 = t2321*t2469*t1725;
  t3209 = 0. + t3208 + t3058;
  t3205 = -1.*t1874*t3204;
  t3210 = -1.*t1934*t3209;
  t3211 = t3205 + t3210;
  t3223 = t1934*t3204;
  t3230 = -1.*t1874*t3209;
  t3232 = t3223 + t3230;
  t3119 = t1910*t2321*t18;
  t3252 = t1718*t2321;
  t3258 = 0. + t3252;
  t3268 = -1.*t2469*t1074;
  t3271 = 0. + t3119 + t3268;
  t3259 = -1.*t3258*t1874;
  t3272 = -1.*t1934*t3271;
  t3273 = t3259 + t3272;
  t3277 = t1934*t3258;
  t3278 = -1.*t1874*t3271;
  t3279 = t3277 + t3278;
  t3305 = t1874*t3145;
  t3306 = t1934*t3148;
  t3310 = 0. + t3305 + t3306;
  t3312 = 0. + t3163 + t3164;
  t3330 = t1874*t3204;
  t3331 = t1934*t3209;
  t3334 = 0. + t3330 + t3331;
  t3337 = 0. + t3223 + t3230;
  t3352 = t3258*t1874;
  t3354 = t1934*t3271;
  t3355 = 0. + t3352 + t3354;
  t3358 = 0. + t3277 + t3278;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=1.;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=1.;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=1.;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=1.;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=1.;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=1.;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0.2429*t1759 + 0.035199999999999995*t1807*t1867 - 0.2083*t1995 - 0.1422*t2006 - 0.02*(t1995*t2033 + t2006*t2068) - 0.16*(t1995*t2068 + t2006*t2103);
  p_output1[34]=0.035199999999999995*t1807*t2134 + 0.2429*t2189 - 0.1422*t2204 - 0.2083*t2263 - 0.02*(t2068*t2204 + t2033*t2263) - 0.16*(t2103*t2204 + t2068*t2263);
  p_output1[35]=-0.2429*t18*t2321 + 0.035199999999999995*t1718*t1807*t2321 - 0.1422*t2340 - 0.2083*t2364 - 0.02*(t2068*t2340 + t2033*t2364) - 0.16*(t2103*t2340 + t2068*t2364);
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=1.;
  p_output1[41]=0;
  p_output1[42]=-0.2083*t2507 - 0.1422*t2543 - 0.02*(t2033*t2507 + t2068*t2543) - 0.16*(t2068*t2507 + t2103*t2543) - 0.0817*t1074*t6 + 0.2429*t1718*t2321*t6 + 0.035199999999999995*(t18*t1807*t2321*t6 - 1.*t1074*t2447*t6);
  p_output1[43]=-0.0817*t1074*t1725 + 0.2429*t1718*t1725*t2321 + 0.035199999999999995*(t1725*t18*t1807*t2321 - 1.*t1074*t1725*t2447) - 0.2083*t2659 - 0.1422*t2670 - 0.02*(t2033*t2659 + t2068*t2670) - 0.16*(t2068*t2659 + t2103*t2670);
  p_output1[44]=-0.2429*t1074*t1718 - 0.0817*t2321 + 0.035199999999999995*(-1.*t1074*t18*t1807 - 1.*t2321*t2447) - 0.2083*t2759 - 0.1422*t2775 - 0.02*(t2033*t2759 + t2068*t2775) - 0.16*(t2068*t2759 + t2103*t2775);
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=1.;
  p_output1[51]=-0.0817*t1725*t2321 + 0.035199999999999995*(t1807*t2189 - 1.*t1725*t2321*t2447) + 0.2429*t2806 - 0.2083*t2832 - 0.1422*t2849 - 0.02*(t2033*t2832 + t2068*t2849) - 0.16*(t2068*t2832 + t2103*t2849);
  p_output1[52]=0.2429*t1867 - 0.2083*t2936 - 0.1422*t2941 - 0.02*(t2033*t2936 + t2068*t2941) - 0.16*(t2068*t2936 + t2103*t2941) + 0.0817*t2321*t6 + 0.035199999999999995*(t1807*t2908 + t2321*t2447*t6);
  p_output1[53]=0;
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
  p_output1[87]=0.1422*t1874*t2989 - 0.2083*t1934*t2989 - 0.02*(t1934*t2033*t2989 - 1.*t1874*t2068*t2989) - 0.16*(t1934*t2068*t2989 - 1.*t1874*t2103*t2989) + 0.035199999999999995*(t2924 - 1.*t1807*t2321*t6);
  p_output1[88]=0.035199999999999995*(-1.*t1725*t1807*t2321 + t3058) + 0.1422*t1874*t3070 - 0.2083*t1934*t3070 - 0.02*(t1934*t2033*t3070 - 1.*t1874*t2068*t3070) - 0.16*(t1934*t2068*t3070 - 1.*t1874*t2103*t3070);
  p_output1[89]=0.1422*t1874*t3113 - 0.2083*t1934*t3113 - 0.02*(t1934*t2033*t3113 - 1.*t1874*t2068*t3113) - 0.16*(t1934*t2068*t3113 - 1.*t1874*t2103*t3113) + 0.035199999999999995*(t1074*t1807 + t3119);
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=0;
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=-0.1422*t3153 - 0.2083*t3165 - 0.02*(t2068*t3153 + t2033*t3165) - 0.16*(t2103*t3153 + t2068*t3165);
  p_output1[97]=-0.1422*t3211 - 0.2083*t3232 - 0.02*(t2068*t3211 + t2033*t3232) - 0.16*(t2103*t3211 + t2068*t3232);
  p_output1[98]=-0.1422*t3273 - 0.2083*t3279 - 0.02*(t2068*t3273 + t2033*t3279) - 0.16*(t2103*t3273 + t2068*t3279);
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
  p_output1[102]=0;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=-0.02*(-1.*t2066*t3310 - 1.*t2028*t3312) - 0.16*(-1.*t2028*t3310 + t2066*t3312);
  p_output1[106]=-0.02*(-1.*t2066*t3334 - 1.*t2028*t3337) - 0.16*(-1.*t2028*t3334 + t2066*t3337);
  p_output1[107]=-0.02*(-1.*t2066*t3355 - 1.*t2028*t3358) - 0.16*(-1.*t2028*t3355 + t2066*t3358);
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

#include "j_hc_1_func.hh"

namespace SymFunction
{

void j_hc_1_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
