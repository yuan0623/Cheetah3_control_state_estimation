/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 21:22:09 GMT-05:00
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
  double t24;
  double t21;
  double t41;
  double t37;
  double t35;
  double t46;
  double t38;
  double t50;
  double t64;
  double t56;
  double t65;
  double t67;
  double t69;
  double t81;
  double t79;
  double t76;
  double t83;
  double t84;
  double t85;
  double t86;
  double t87;
  double t80;
  double t89;
  double t90;
  double t92;
  double t93;
  double t96;
  double t105;
  double t107;
  double t100;
  double t57;
  double t125;
  double t126;
  double t134;
  double t135;
  double t137;
  double t143;
  double t145;
  double t146;
  double t147;
  double t101;
  double t102;
  double t144;
  double t148;
  double t149;
  double t153;
  double t154;
  double t158;
  double t112;
  double t185;
  double t187;
  double t191;
  double t192;
  double t193;
  double t190;
  double t196;
  double t198;
  double t202;
  double t203;
  double t204;
  double t34;
  double t51;
  double t231;
  double t226;
  double t240;
  double t237;
  double t241;
  double t243;
  double t244;
  double t245;
  double t246;
  double t238;
  double t247;
  double t250;
  double t252;
  double t255;
  double t257;
  double t265;
  double t267;
  double t259;
  double t122;
  double t129;
  double t229;
  double t292;
  double t293;
  double t294;
  double t261;
  double t262;
  double t291;
  double t295;
  double t296;
  double t298;
  double t300;
  double t302;
  double t275;
  double t179;
  double t331;
  double t332;
  double t333;
  double t330;
  double t334;
  double t335;
  double t337;
  double t338;
  double t339;
  double t225;
  double t356;
  double t352;
  double t362;
  double t360;
  double t363;
  double t364;
  double t365;
  double t366;
  double t361;
  double t367;
  double t368;
  double t370;
  double t371;
  double t372;
  double t381;
  double t382;
  double t376;
  double t285;
  double t353;
  double t398;
  double t399;
  double t400;
  double t377;
  double t378;
  double t397;
  double t401;
  double t402;
  double t404;
  double t405;
  double t406;
  double t387;
  double t319;
  double t423;
  double t424;
  double t425;
  double t422;
  double t426;
  double t427;
  double t429;
  double t430;
  double t431;
  t24 = Cos(var1[5]);
  t21 = Cos(var1[4]);
  t41 = Sin(var1[3]);
  t37 = Sin(var1[4]);
  t35 = Cos(var1[3]);
  t46 = Sin(var1[5]);
  t38 = t35*t24*t37;
  t50 = t41*t46;
  t64 = Sin(var1[9]);
  t56 = Cos(var1[9]);
  t65 = t24*t41*t37;
  t67 = -1.*t35*t46;
  t69 = t65 + t67;
  t81 = Cos(var1[10]);
  t79 = 0. + t38 + t50;
  t76 = Sin(var1[10]);
  t83 = -1.*t64;
  t84 = 0. + t83;
  t85 = t21*t24*t84;
  t86 = t56*t69;
  t87 = 0. + t85 + t86;
  t80 = t76*t79;
  t89 = t81*t87;
  t90 = 0. + t80 + t89;
  t92 = t81*t79;
  t93 = -1.*t76*t87;
  t96 = 0. + t92 + t93;
  t105 = Cos(var1[11]);
  t107 = 0. + t105;
  t100 = Sin(var1[11]);
  t57 = 0. + t56;
  t125 = -1.*t24*t41;
  t126 = t35*t37*t46;
  t134 = t35*t24;
  t135 = t41*t37*t46;
  t137 = t134 + t135;
  t143 = 0. + t125 + t126;
  t145 = t21*t84*t46;
  t146 = t56*t137;
  t147 = 0. + t145 + t146;
  t101 = -1.*t100;
  t102 = 0. + t101;
  t144 = t76*t143;
  t148 = t81*t147;
  t149 = 0. + t144 + t148;
  t153 = t81*t143;
  t154 = -1.*t76*t147;
  t158 = 0. + t153 + t154;
  t112 = 0. + t100;
  t185 = t35*t21;
  t187 = 0. + t185;
  t191 = t56*t21*t41;
  t192 = -1.*t84*t37;
  t193 = 0. + t191 + t192;
  t190 = t187*t76;
  t196 = t81*t193;
  t198 = 0. + t190 + t196;
  t202 = t81*t187;
  t203 = -1.*t76*t193;
  t204 = 0. + t202 + t203;
  t34 = 0.0817*t21*t24;
  t51 = t38 + t50;
  t231 = Sin(var1[15]);
  t226 = Cos(var1[15]);
  t240 = Cos(var1[16]);
  t237 = Sin(var1[16]);
  t241 = -1.*t231;
  t243 = 0. + t241;
  t244 = t21*t24*t243;
  t245 = t226*t69;
  t246 = 0. + t244 + t245;
  t238 = t237*t79;
  t247 = t240*t246;
  t250 = 0. + t238 + t247;
  t252 = t240*t79;
  t255 = -1.*t237*t246;
  t257 = 0. + t252 + t255;
  t265 = Cos(var1[17]);
  t267 = 0. + t265;
  t259 = Sin(var1[17]);
  t122 = 0.0817*t21*t46;
  t129 = t125 + t126;
  t229 = 0. + t226;
  t292 = t21*t243*t46;
  t293 = t226*t137;
  t294 = 0. + t292 + t293;
  t261 = -1.*t259;
  t262 = 0. + t261;
  t291 = t237*t143;
  t295 = t240*t294;
  t296 = 0. + t291 + t295;
  t298 = t240*t143;
  t300 = -1.*t237*t294;
  t302 = 0. + t298 + t300;
  t275 = 0. + t259;
  t179 = -0.0817*t37;
  t331 = t226*t21*t41;
  t332 = -1.*t243*t37;
  t333 = 0. + t331 + t332;
  t330 = t187*t237;
  t334 = t240*t333;
  t335 = 0. + t330 + t334;
  t337 = t240*t187;
  t338 = -1.*t237*t333;
  t339 = 0. + t337 + t338;
  t225 = -0.1944*t51;
  t356 = Sin(var1[12]);
  t352 = Cos(var1[12]);
  t362 = Cos(var1[13]);
  t360 = Sin(var1[13]);
  t363 = 0. + t356;
  t364 = t21*t24*t363;
  t365 = t352*t69;
  t366 = 0. + t364 + t365;
  t361 = t360*t79;
  t367 = t362*t366;
  t368 = 0. + t361 + t367;
  t370 = t362*t79;
  t371 = -1.*t360*t366;
  t372 = 0. + t370 + t371;
  t381 = Cos(var1[14]);
  t382 = 0. + t381;
  t376 = Sin(var1[14]);
  t285 = -0.1944*t129;
  t353 = 0. + t352;
  t398 = t21*t363*t46;
  t399 = t352*t137;
  t400 = 0. + t398 + t399;
  t377 = -1.*t376;
  t378 = 0. + t377;
  t397 = t360*t143;
  t401 = t362*t400;
  t402 = 0. + t397 + t401;
  t404 = t362*t143;
  t405 = -1.*t360*t400;
  t406 = 0. + t404 + t405;
  t387 = 0. + t376;
  t319 = -0.1944*t35*t21;
  t423 = t352*t21*t41;
  t424 = -1.*t363*t37;
  t425 = 0. + t423 + t424;
  t422 = t187*t360;
  t426 = t362*t425;
  t427 = 0. + t422 + t426;
  t429 = t362*t187;
  t430 = -1.*t360*t425;
  t431 = 0. + t429 + t430;
  p_output1[0]=t34 + 0.2429*t51 + 0.035199999999999995*(0. + t21*t24*t57 + t64*t69) - 0.2083*t90 - 0.1422*t96 - 0.02*(0. + t102*t90 + t107*t96) - 0.16*(0. + t107*t90 + t112*t96) + var1[0];
  p_output1[1]=t122 + 0.2429*t129 - 0.2083*t149 - 0.1422*t158 - 0.02*(0. + t102*t149 + t107*t158) - 0.16*(0. + t107*t149 + t112*t158) + 0.035199999999999995*(0. + t21*t46*t57 + t137*t64) + var1[1];
  p_output1[2]=t179 - 0.2083*t198 - 0.1422*t204 - 0.02*(0. + t102*t198 + t107*t204) - 0.16*(0. + t107*t198 + t112*t204) + 0.2429*t21*t35 + 0.035199999999999995*(0. - 1.*t37*t57 + t21*t41*t64) + var1[2];
  p_output1[3]=t225 - 0.2083*t250 - 0.1422*t257 - 0.02*(0. + t250*t262 + t257*t267) - 0.16*(0. + t250*t267 + t257*t275) + t34 + 0.035199999999999995*(0. + t21*t229*t24 + t231*t69) + var1[0];
  p_output1[4]=t122 + t285 - 0.2083*t296 - 0.1422*t302 - 0.02*(0. + t262*t296 + t267*t302) - 0.16*(0. + t267*t296 + t275*t302) + 0.035199999999999995*(0. + t137*t231 + t21*t229*t46) + var1[1];
  p_output1[5]=t179 + t319 - 0.2083*t335 - 0.1422*t339 - 0.02*(0. + t262*t335 + t267*t339) - 0.16*(0. + t267*t335 + t275*t339) + 0.035199999999999995*(0. - 1.*t229*t37 + t21*t231*t41) + var1[2];
  p_output1[6]=t225 - 0.0817*t21*t24 - 0.2083*t368 - 0.1422*t372 - 0.02*(0. + t368*t378 + t372*t382) - 0.16*(0. + t368*t382 + t372*t387) - 0.0329*(0. + t21*t24*t353 - 1.*t356*t69) + var1[0];
  p_output1[7]=t285 - 0.2083*t402 - 0.1422*t406 - 0.02*(0. + t378*t402 + t382*t406) - 0.16*(0. + t382*t402 + t387*t406) - 0.0817*t21*t46 - 0.0329*(0. - 1.*t137*t356 + t21*t353*t46) + var1[1];
  p_output1[8]=t319 + 0.0817*t37 - 0.0329*(0. - 1.*t353*t37 - 1.*t21*t356*t41) - 0.2083*t427 - 0.1422*t431 - 0.02*(0. + t378*t427 + t382*t431) - 0.16*(0. + t382*t427 + t387*t431) + var1[2];
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

#include "F_3_func.hh"

namespace SymFunction
{

void F_3_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
