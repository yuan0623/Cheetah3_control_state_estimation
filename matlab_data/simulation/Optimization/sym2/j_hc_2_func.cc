/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 21:23:02 GMT-05:00
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
  double t697;
  double t225;
  double t261;
  double t259;
  double t1043;
  double t683;
  double t1510;
  double t1626;
  double t1787;
  double t1840;
  double t1850;
  double t1969;
  double t1931;
  double t1870;
  double t1877;
  double t1995;
  double t1996;
  double t2006;
  double t2017;
  double t2051;
  double t2110;
  double t2113;
  double t2097;
  double t1759;
  double t2257;
  double t2263;
  double t2268;
  double t2278;
  double t2294;
  double t2296;
  double t2192;
  double t2300;
  double t2301;
  double t2302;
  double t2325;
  double t2331;
  double t2340;
  double t2099;
  double t2102;
  double t2421;
  double t2436;
  double t2438;
  double t2440;
  double t2451;
  double t2453;
  double t2454;
  double t2616;
  double t2623;
  double t2624;
  double t2632;
  double t2615;
  double t2636;
  double t2637;
  double t2659;
  double t2664;
  double t2665;
  double t2569;
  double t2758;
  double t2759;
  double t2761;
  double t2718;
  double t2775;
  double t2785;
  double t2787;
  double t2789;
  double t2790;
  double t2837;
  double t2842;
  double t2849;
  double t2832;
  double t2851;
  double t2852;
  double t2859;
  double t2868;
  double t2869;
  double t2922;
  double t2923;
  double t2928;
  double t2946;
  double t2949;
  double t2952;
  double t2945;
  double t2953;
  double t2969;
  double t2979;
  double t2980;
  double t2982;
  double t3051;
  double t3052;
  double t3055;
  double t3074;
  double t3078;
  double t3079;
  double t3073;
  double t3086;
  double t3087;
  double t3092;
  double t3106;
  double t3107;
  double t3059;
  double t3143;
  double t3144;
  double t3184;
  double t3192;
  double t3201;
  double t3223;
  double t3232;
  double t3236;
  double t3276;
  double t3277;
  double t3279;
  double t3318;
  double t3320;
  double t3319;
  double t3324;
  double t3327;
  double t3330;
  double t3331;
  double t3336;
  double t3357;
  double t3361;
  double t3370;
  double t3381;
  double t3360;
  double t3386;
  double t3387;
  double t3391;
  double t3392;
  double t3393;
  double t3435;
  double t3436;
  double t3438;
  double t3439;
  double t3442;
  double t3437;
  double t3443;
  double t3445;
  double t3451;
  double t3457;
  double t3458;
  double t3510;
  double t3520;
  double t3525;
  double t3527;
  double t3556;
  double t3558;
  double t3559;
  double t3565;
  double t3586;
  double t3589;
  double t3598;
  double t3600;
  t697 = Cos(var1[3]);
  t225 = Cos(var1[5]);
  t261 = Sin(var1[4]);
  t259 = Sin(var1[3]);
  t1043 = Sin(var1[5]);
  t683 = -1.*t225*t259*t261;
  t1510 = t697*t1043;
  t1626 = t683 + t1510;
  t1787 = t697*t225*t261;
  t1840 = t259*t1043;
  t1850 = t1787 + t1840;
  t1969 = Cos(var1[13]);
  t1931 = Cos(var1[12]);
  t1870 = Sin(var1[13]);
  t1877 = t1870*t1626;
  t1995 = t1931*t1969*t1850;
  t1996 = t1877 + t1995;
  t2006 = t1969*t1626;
  t2017 = -1.*t1931*t1870*t1850;
  t2051 = t2006 + t2017;
  t2110 = Cos(var1[14]);
  t2113 = 0. + t2110;
  t2097 = Sin(var1[14]);
  t1759 = Sin(var1[12]);
  t2257 = -1.*t225*t259;
  t2263 = t697*t261*t1043;
  t2268 = t2257 + t2263;
  t2278 = -1.*t697*t225;
  t2294 = -1.*t259*t261*t1043;
  t2296 = t2278 + t2294;
  t2192 = 0. + t2097;
  t2300 = -1.*t1931*t1870*t2268;
  t2301 = t1969*t2296;
  t2302 = t2300 + t2301;
  t2325 = t1931*t1969*t2268;
  t2331 = t1870*t2296;
  t2340 = t2325 + t2331;
  t2099 = -1.*t2097;
  t2102 = 0. + t2099;
  t2421 = Cos(var1[4]);
  t2436 = -1.*t1931*t697*t2421*t1870;
  t2438 = -1.*t1969*t2421*t259;
  t2440 = t2436 + t2438;
  t2451 = t1931*t1969*t697*t2421;
  t2453 = -1.*t2421*t1870*t259;
  t2454 = t2451 + t2453;
  t2616 = t1931*t2421*t225*t259;
  t2623 = 0. + t1759;
  t2624 = -1.*t225*t2623*t261;
  t2632 = t2616 + t2624;
  t2615 = t697*t2421*t225*t1870;
  t2636 = t1969*t2632;
  t2637 = t2615 + t2636;
  t2659 = t1969*t697*t2421*t225;
  t2664 = -1.*t1870*t2632;
  t2665 = t2659 + t2664;
  t2569 = 0. + t1931;
  t2758 = t1931*t2421*t259*t1043;
  t2759 = -1.*t2623*t261*t1043;
  t2761 = t2758 + t2759;
  t2718 = t697*t2421*t1870*t1043;
  t2775 = t1969*t2761;
  t2785 = t2718 + t2775;
  t2787 = t1969*t697*t2421*t1043;
  t2789 = -1.*t1870*t2761;
  t2790 = t2787 + t2789;
  t2837 = -1.*t2421*t2623;
  t2842 = -1.*t1931*t259*t261;
  t2849 = t2837 + t2842;
  t2832 = -1.*t697*t1870*t261;
  t2851 = t1969*t2849;
  t2852 = t2832 + t2851;
  t2859 = -1.*t1969*t697*t261;
  t2868 = -1.*t1870*t2849;
  t2869 = t2859 + t2868;
  t2922 = t225*t259;
  t2923 = -1.*t697*t261*t1043;
  t2928 = t2922 + t2923;
  t2946 = -1.*t2421*t2623*t1043;
  t2949 = t1931*t2296;
  t2952 = t2946 + t2949;
  t2945 = t1870*t2928;
  t2953 = t1969*t2952;
  t2969 = t2945 + t2953;
  t2979 = t1969*t2928;
  t2980 = -1.*t1870*t2952;
  t2982 = t2979 + t2980;
  t3051 = t225*t259*t261;
  t3052 = -1.*t697*t1043;
  t3055 = t3051 + t3052;
  t3074 = t2421*t225*t2623;
  t3078 = t1931*t3055;
  t3079 = t3074 + t3078;
  t3073 = t1870*t1850;
  t3086 = t1969*t3079;
  t3087 = t3073 + t3086;
  t3092 = t1969*t1850;
  t3106 = -1.*t1870*t3079;
  t3107 = t3092 + t3106;
  t3059 = -1.*t1759*t3055;
  t3143 = t1931*t2421*t225;
  t3144 = t3143 + t3059;
  t3184 = t697*t225;
  t3192 = t259*t261*t1043;
  t3201 = t3184 + t3192;
  t3223 = t1931*t2421*t1043;
  t3232 = -1.*t1759*t3201;
  t3236 = t3223 + t3232;
  t3276 = -1.*t2421*t1759*t259;
  t3277 = -1.*t1931*t261;
  t3279 = t3276 + t3277;
  t3318 = 0. + t1787 + t1840;
  t3320 = 0. + t3074 + t3078;
  t3319 = -1.*t1870*t3318;
  t3324 = -1.*t1969*t3320;
  t3327 = t3319 + t3324;
  t3330 = t1969*t3318;
  t3331 = -1.*t1870*t3320;
  t3336 = t3330 + t3331;
  t3357 = 0. + t2257 + t2263;
  t3361 = t2421*t2623*t1043;
  t3370 = t1931*t3201;
  t3381 = 0. + t3361 + t3370;
  t3360 = -1.*t1870*t3357;
  t3386 = -1.*t1969*t3381;
  t3387 = t3360 + t3386;
  t3391 = t1969*t3357;
  t3392 = -1.*t1870*t3381;
  t3393 = t3391 + t3392;
  t3435 = t697*t2421;
  t3436 = 0. + t3435;
  t3438 = t1931*t2421*t259;
  t3439 = -1.*t2623*t261;
  t3442 = 0. + t3438 + t3439;
  t3437 = -1.*t3436*t1870;
  t3443 = -1.*t1969*t3442;
  t3445 = t3437 + t3443;
  t3451 = t1969*t3436;
  t3457 = -1.*t1870*t3442;
  t3458 = t3451 + t3457;
  t3510 = t1870*t3318;
  t3520 = t1969*t3320;
  t3525 = 0. + t3510 + t3520;
  t3527 = 0. + t3330 + t3331;
  t3556 = t1870*t3357;
  t3558 = t1969*t3381;
  t3559 = 0. + t3556 + t3558;
  t3565 = 0. + t3391 + t3392;
  t3586 = t3436*t1870;
  t3589 = t1969*t3442;
  t3598 = 0. + t3586 + t3589;
  t3600 = 0. + t3451 + t3457;
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
  p_output1[33]=-0.1944*t1626 + 0.0329*t1759*t1850 - 0.2083*t1996 - 0.1422*t2051 - 0.02*(t1996*t2102 + t2051*t2113) - 0.16*(t1996*t2113 + t2051*t2192);
  p_output1[34]=0.0329*t1759*t2268 - 0.1944*t2296 - 0.1422*t2302 - 0.2083*t2340 - 0.02*(t2113*t2302 + t2102*t2340) - 0.16*(t2192*t2302 + t2113*t2340);
  p_output1[35]=-0.1422*t2440 - 0.2083*t2454 - 0.02*(t2113*t2440 + t2102*t2454) - 0.16*(t2192*t2440 + t2113*t2454) + 0.1944*t2421*t259 + 0.0329*t1759*t2421*t697;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=1.;
  p_output1[41]=0;
  p_output1[42]=0.0817*t225*t261 - 0.0329*(-1.*t1759*t225*t2421*t259 - 1.*t225*t2569*t261) - 0.2083*t2637 - 0.1422*t2665 - 0.02*(t2102*t2637 + t2113*t2665) - 0.16*(t2113*t2637 + t2192*t2665) - 0.1944*t225*t2421*t697;
  p_output1[43]=0.0817*t1043*t261 - 0.0329*(-1.*t1043*t1759*t2421*t259 - 1.*t1043*t2569*t261) - 0.2083*t2785 - 0.1422*t2790 - 0.02*(t2102*t2785 + t2113*t2790) - 0.16*(t2113*t2785 + t2192*t2790) - 0.1944*t1043*t2421*t697;
  p_output1[44]=0.0817*t2421 - 0.0329*(-1.*t2421*t2569 + t1759*t259*t261) - 0.2083*t2852 - 0.1422*t2869 - 0.02*(t2102*t2852 + t2113*t2869) - 0.16*(t2113*t2852 + t2192*t2869) + 0.1944*t261*t697;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=1.;
  p_output1[51]=0.0817*t1043*t2421 - 0.0329*(-1.*t1759*t2296 - 1.*t1043*t2421*t2569) - 0.1944*t2928 - 0.2083*t2969 - 0.1422*t2982 - 0.02*(t2102*t2969 + t2113*t2982) - 0.16*(t2113*t2969 + t2192*t2982);
  p_output1[52]=-0.1944*t1850 - 0.0817*t225*t2421 - 0.0329*(t225*t2421*t2569 + t3059) - 0.2083*t3087 - 0.1422*t3107 - 0.02*(t2102*t3087 + t2113*t3107) - 0.16*(t2113*t3087 + t2192*t3107);
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
  p_output1[114]=-0.0329*(-1.*t1759*t225*t2421 - 1.*t1931*t3055) + 0.1422*t1870*t3144 - 0.2083*t1969*t3144 - 0.02*(t1969*t2102*t3144 - 1.*t1870*t2113*t3144) - 0.16*(t1969*t2113*t3144 - 1.*t1870*t2192*t3144);
  p_output1[115]=-0.0329*(-1.*t1043*t1759*t2421 - 1.*t1931*t3201) + 0.1422*t1870*t3236 - 0.2083*t1969*t3236 - 0.02*(t1969*t2102*t3236 - 1.*t1870*t2113*t3236) - 0.16*(t1969*t2113*t3236 - 1.*t1870*t2192*t3236);
  p_output1[116]=-0.0329*(-1.*t1931*t2421*t259 + t1759*t261) + 0.1422*t1870*t3279 - 0.2083*t1969*t3279 - 0.02*(t1969*t2102*t3279 - 1.*t1870*t2113*t3279) - 0.16*(t1969*t2113*t3279 - 1.*t1870*t2192*t3279);
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
  p_output1[120]=0;
  p_output1[121]=0;
  p_output1[122]=0;
  p_output1[123]=-0.1422*t3327 - 0.2083*t3336 - 0.02*(t2113*t3327 + t2102*t3336) - 0.16*(t2192*t3327 + t2113*t3336);
  p_output1[124]=-0.1422*t3387 - 0.2083*t3393 - 0.02*(t2113*t3387 + t2102*t3393) - 0.16*(t2192*t3387 + t2113*t3393);
  p_output1[125]=-0.1422*t3445 - 0.2083*t3458 - 0.02*(t2113*t3445 + t2102*t3458) - 0.16*(t2192*t3445 + t2113*t3458);
  p_output1[126]=0;
  p_output1[127]=0;
  p_output1[128]=0;
  p_output1[129]=0;
  p_output1[130]=0;
  p_output1[131]=0;
  p_output1[132]=-0.02*(-1.*t2110*t3525 - 1.*t2097*t3527) - 0.16*(-1.*t2097*t3525 + t2110*t3527);
  p_output1[133]=-0.02*(-1.*t2110*t3559 - 1.*t2097*t3565) - 0.16*(-1.*t2097*t3559 + t2110*t3565);
  p_output1[134]=-0.02*(-1.*t2110*t3598 - 1.*t2097*t3600) - 0.16*(-1.*t2097*t3598 + t2110*t3600);
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

#include "j_hc_2_func.hh"

namespace SymFunction
{

void j_hc_2_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
