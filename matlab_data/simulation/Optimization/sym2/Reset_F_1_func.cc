/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 21:23:18 GMT-05:00
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
  double t97;
  double t84;
  double t235;
  double t174;
  double t173;
  double t334;
  double t192;
  double t373;
  double t684;
  double t418;
  double t689;
  double t690;
  double t694;
  double t879;
  double t811;
  double t806;
  double t983;
  double t1097;
  double t1103;
  double t1110;
  double t1159;
  double t823;
  double t1261;
  double t1292;
  double t1305;
  double t1307;
  double t1311;
  double t1452;
  double t1489;
  double t1349;
  double t548;
  double t1831;
  double t1876;
  double t2039;
  double t2044;
  double t2063;
  double t2228;
  double t2283;
  double t2340;
  double t2341;
  double t1393;
  double t1444;
  double t2264;
  double t2357;
  double t2502;
  double t2599;
  double t2679;
  double t2685;
  double t1673;
  double t2821;
  double t2831;
  double t2873;
  double t2874;
  double t2893;
  double t2841;
  double t2913;
  double t2929;
  double t2970;
  double t2977;
  double t2984;
  double t386;
  double t392;
  double t3213;
  double t3281;
  double t3308;
  double t3311;
  double t3315;
  double t3329;
  double t3330;
  double t3339;
  double t3410;
  double t3428;
  double t3451;
  double t3336;
  double t3397;
  double t3398;
  double t3498;
  double t3511;
  double t3547;
  double t1882;
  double t1904;
  double t3224;
  double t3708;
  double t3711;
  double t3717;
  double t3756;
  double t3759;
  double t3768;
  double t3725;
  double t3728;
  double t3737;
  double t3573;
  double t3613;
  double t3632;
  double t2794;
  double t3939;
  double t3940;
  double t3941;
  double t3959;
  double t3960;
  double t3970;
  double t3946;
  double t3952;
  double t3953;
  double t167;
  double t4054;
  double t4037;
  double t4095;
  double t4089;
  double t4098;
  double t4099;
  double t4102;
  double t4106;
  double t4107;
  double t4093;
  double t4110;
  double t4115;
  double t4123;
  double t4124;
  double t4127;
  double t4156;
  double t4174;
  double t4129;
  double t1816;
  double t4041;
  double t4240;
  double t4241;
  double t4243;
  double t4130;
  double t4136;
  double t4239;
  double t4244;
  double t4269;
  double t4279;
  double t4293;
  double t4294;
  double t4204;
  double t2796;
  double t4367;
  double t4368;
  double t4371;
  double t4365;
  double t4375;
  double t4377;
  double t4392;
  double t4397;
  double t4398;
  t97 = Cos(var1[5]);
  t84 = Cos(var1[4]);
  t235 = Sin(var1[3]);
  t174 = Sin(var1[4]);
  t173 = Cos(var1[3]);
  t334 = Sin(var1[5]);
  t192 = t173*t97*t174;
  t373 = t235*t334;
  t684 = Sin(var1[9]);
  t418 = Cos(var1[9]);
  t689 = t97*t235*t174;
  t690 = -1.*t173*t334;
  t694 = t689 + t690;
  t879 = Cos(var1[10]);
  t811 = 0. + t192 + t373;
  t806 = Sin(var1[10]);
  t983 = -1.*t684;
  t1097 = 0. + t983;
  t1103 = t84*t97*t1097;
  t1110 = t418*t694;
  t1159 = 0. + t1103 + t1110;
  t823 = t806*t811;
  t1261 = t879*t1159;
  t1292 = 0. + t823 + t1261;
  t1305 = t879*t811;
  t1307 = -1.*t806*t1159;
  t1311 = 0. + t1305 + t1307;
  t1452 = Cos(var1[11]);
  t1489 = 0. + t1452;
  t1349 = Sin(var1[11]);
  t548 = 0. + t418;
  t1831 = -1.*t97*t235;
  t1876 = t173*t174*t334;
  t2039 = t173*t97;
  t2044 = t235*t174*t334;
  t2063 = t2039 + t2044;
  t2228 = 0. + t1831 + t1876;
  t2283 = t84*t1097*t334;
  t2340 = t418*t2063;
  t2341 = 0. + t2283 + t2340;
  t1393 = -1.*t1349;
  t1444 = 0. + t1393;
  t2264 = t806*t2228;
  t2357 = t879*t2341;
  t2502 = 0. + t2264 + t2357;
  t2599 = t879*t2228;
  t2679 = -1.*t806*t2341;
  t2685 = 0. + t2599 + t2679;
  t1673 = 0. + t1349;
  t2821 = t173*t84;
  t2831 = 0. + t2821;
  t2873 = t418*t84*t235;
  t2874 = -1.*t1097*t174;
  t2893 = 0. + t2873 + t2874;
  t2841 = t2831*t806;
  t2913 = t879*t2893;
  t2929 = 0. + t2841 + t2913;
  t2970 = t879*t2831;
  t2977 = -1.*t806*t2893;
  t2984 = 0. + t2970 + t2977;
  t386 = t192 + t373;
  t392 = 0.2429*t386;
  t3213 = Cos(var1[6]);
  t3281 = Sin(var1[6]);
  t3308 = Cos(var1[7]);
  t3311 = t3213*t694;
  t3315 = 0. + t3281;
  t3329 = t84*t97*t3315;
  t3330 = 0. + t3311 + t3329;
  t3339 = Sin(var1[7]);
  t3410 = t3308*t811;
  t3428 = -1.*t3330*t3339;
  t3451 = 0. + t3410 + t3428;
  t3336 = t3308*t3330;
  t3397 = t811*t3339;
  t3398 = 0. + t3336 + t3397;
  t3498 = Cos(var1[8]);
  t3511 = 0. + t3498;
  t3547 = Sin(var1[8]);
  t1882 = t1831 + t1876;
  t1904 = 0.2429*t1882;
  t3224 = 0. + t3213;
  t3708 = t3213*t2063;
  t3711 = t84*t334*t3315;
  t3717 = 0. + t3708 + t3711;
  t3756 = t3308*t2228;
  t3759 = -1.*t3717*t3339;
  t3768 = 0. + t3756 + t3759;
  t3725 = t3308*t3717;
  t3728 = t2228*t3339;
  t3737 = 0. + t3725 + t3728;
  t3573 = -1.*t3547;
  t3613 = 0. + t3573;
  t3632 = 0. + t3547;
  t2794 = 0.2429*t173*t84;
  t3939 = t84*t3213*t235;
  t3940 = -1.*t174*t3315;
  t3941 = 0. + t3939 + t3940;
  t3959 = t2831*t3308;
  t3960 = -1.*t3941*t3339;
  t3970 = 0. + t3959 + t3960;
  t3946 = t3308*t3941;
  t3952 = t2831*t3339;
  t3953 = 0. + t3946 + t3952;
  t167 = 0.0817*t84*t97;
  t4054 = Sin(var1[15]);
  t4037 = Cos(var1[15]);
  t4095 = Cos(var1[16]);
  t4089 = Sin(var1[16]);
  t4098 = -1.*t4054;
  t4099 = 0. + t4098;
  t4102 = t84*t97*t4099;
  t4106 = t4037*t694;
  t4107 = 0. + t4102 + t4106;
  t4093 = t4089*t811;
  t4110 = t4095*t4107;
  t4115 = 0. + t4093 + t4110;
  t4123 = t4095*t811;
  t4124 = -1.*t4089*t4107;
  t4127 = 0. + t4123 + t4124;
  t4156 = Cos(var1[17]);
  t4174 = 0. + t4156;
  t4129 = Sin(var1[17]);
  t1816 = 0.0817*t84*t334;
  t4041 = 0. + t4037;
  t4240 = t84*t4099*t334;
  t4241 = t4037*t2063;
  t4243 = 0. + t4240 + t4241;
  t4130 = -1.*t4129;
  t4136 = 0. + t4130;
  t4239 = t4089*t2228;
  t4244 = t4095*t4243;
  t4269 = 0. + t4239 + t4244;
  t4279 = t4095*t2228;
  t4293 = -1.*t4089*t4243;
  t4294 = 0. + t4279 + t4293;
  t4204 = 0. + t4129;
  t2796 = -0.0817*t174;
  t4367 = t4037*t84*t235;
  t4368 = -1.*t4099*t174;
  t4371 = 0. + t4367 + t4368;
  t4365 = t2831*t4089;
  t4375 = t4095*t4371;
  t4377 = 0. + t4365 + t4375;
  t4392 = t4095*t2831;
  t4397 = -1.*t4089*t4371;
  t4398 = 0. + t4392 + t4397;
  p_output1[0]=-0.2083*t1292 - 0.1422*t1311 - 0.02*(0. + t1292*t1444 + t1311*t1489) + t167 - 0.16*(0. + t1292*t1489 + t1311*t1673) + t392 + 0.035199999999999995*(0. + t684*t694 + t548*t84*t97) + var1[0];
  p_output1[1]=t1816 + t1904 - 0.2083*t2502 - 0.1422*t2685 - 0.02*(0. + t1444*t2502 + t1489*t2685) - 0.16*(0. + t1489*t2502 + t1673*t2685) + 0.035199999999999995*(0. + t2063*t684 + t334*t548*t84) + var1[1];
  p_output1[2]=t2794 + t2796 - 0.2083*t2929 - 0.1422*t2984 - 0.02*(0. + t1444*t2929 + t1489*t2984) - 0.16*(0. + t1489*t2929 + t1673*t2984) + 0.035199999999999995*(0. - 1.*t174*t548 + t235*t684*t84) + var1[2];
  p_output1[3]=-0.2083*t3398 - 0.1422*t3451 - 0.02*(0. + t3451*t3511 + t3398*t3613) - 0.16*(0. + t3398*t3511 + t3451*t3632) + t392 - 0.0817*t84*t97 - 0.0329*(0. - 1.*t3281*t694 + t3224*t84*t97) + var1[0];
  p_output1[4]=t1904 - 0.2083*t3737 - 0.1422*t3768 - 0.02*(0. + t3613*t3737 + t3511*t3768) - 0.16*(0. + t3511*t3737 + t3632*t3768) - 0.0817*t334*t84 - 0.0329*(0. - 1.*t2063*t3281 + t3224*t334*t84) + var1[1];
  p_output1[5]=0.0817*t174 + t2794 - 0.2083*t3953 - 0.1422*t3970 - 0.02*(0. + t3613*t3953 + t3511*t3970) - 0.16*(0. + t3511*t3953 + t3632*t3970) - 0.0329*(0. - 1.*t174*t3224 - 1.*t235*t3281*t84) + var1[2];
  p_output1[6]=t167 - 0.1944*t386 - 0.2083*t4115 - 0.1422*t4127 - 0.02*(0. + t4115*t4136 + t4127*t4174) - 0.16*(0. + t4115*t4174 + t4127*t4204) + 0.035199999999999995*(0. + t4054*t694 + t4041*t84*t97) + var1[0];
  p_output1[7]=t1816 - 0.1944*t1882 - 0.2083*t4269 - 0.1422*t4294 - 0.02*(0. + t4136*t4269 + t4174*t4294) - 0.16*(0. + t4174*t4269 + t4204*t4294) + 0.035199999999999995*(0. + t2063*t4054 + t334*t4041*t84) + var1[1];
  p_output1[8]=t2796 - 0.2083*t4377 - 0.1422*t4398 - 0.02*(0. + t4136*t4377 + t4174*t4398) - 0.16*(0. + t4174*t4377 + t4204*t4398) - 0.1944*t173*t84 + 0.035199999999999995*(0. - 1.*t174*t4041 + t235*t4054*t84) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Reset_F_1_func.hh"

namespace SymFunction
{

void Reset_F_1_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
