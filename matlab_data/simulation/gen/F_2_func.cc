/*
 * Automatically Generated from Mathematica.
 * Fri 7 Aug 2020 14:46:06 GMT-04:00
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
static void output1(double *p_output1,const double *var1)
{
  double t66;
  double t56;
  double t108;
  double t82;
  double t81;
  double t116;
  double t129;
  double t148;
  double t149;
  double t151;
  double t152;
  double t85;
  double t122;
  double t176;
  double t193;
  double t185;
  double t186;
  double t188;
  double t189;
  double t199;
  double t210;
  double t211;
  double t212;
  double t192;
  double t206;
  double t208;
  double t216;
  double t217;
  double t222;
  double t131;
  double t271;
  double t272;
  double t273;
  double t262;
  double t264;
  double t292;
  double t285;
  double t288;
  double t289;
  double t298;
  double t299;
  double t300;
  double t291;
  double t293;
  double t294;
  double t224;
  double t233;
  double t244;
  double t355;
  double t356;
  double t339;
  double t346;
  double t351;
  double t369;
  double t371;
  double t372;
  double t353;
  double t358;
  double t359;
  double t123;
  double t401;
  double t397;
  double t409;
  double t407;
  double t410;
  double t411;
  double t415;
  double t417;
  double t422;
  double t408;
  double t425;
  double t426;
  double t433;
  double t440;
  double t443;
  double t451;
  double t452;
  double t446;
  double t267;
  double t399;
  double t484;
  double t486;
  double t490;
  double t448;
  double t449;
  double t483;
  double t491;
  double t492;
  double t495;
  double t496;
  double t497;
  double t459;
  double t529;
  double t530;
  double t531;
  double t528;
  double t532;
  double t533;
  double t535;
  double t536;
  double t537;
  t66 = Cos(var1[5]);
  t56 = Cos(var1[4]);
  t108 = Sin(var1[3]);
  t82 = Sin(var1[4]);
  t81 = Cos(var1[3]);
  t116 = Sin(var1[5]);
  t129 = Cos(var1[6]);
  t148 = t66*t108*t82;
  t149 = -1.*t81*t116;
  t151 = t148 + t149;
  t152 = Sin(var1[6]);
  t85 = t81*t66*t82;
  t122 = t108*t116;
  t176 = Cos(var1[7]);
  t193 = 0. + t85 + t122;
  t185 = t129*t151;
  t186 = 0. + t152;
  t188 = t56*t66*t186;
  t189 = 0. + t185 + t188;
  t199 = Sin(var1[7]);
  t210 = t176*t193;
  t211 = -1.*t189*t199;
  t212 = 0. + t210 + t211;
  t192 = t176*t189;
  t206 = t193*t199;
  t208 = 0. + t192 + t206;
  t216 = Cos(var1[8]);
  t217 = 0. + t216;
  t222 = Sin(var1[8]);
  t131 = 0. + t129;
  t271 = t81*t66;
  t272 = t108*t82*t116;
  t273 = t271 + t272;
  t262 = -1.*t66*t108;
  t264 = t81*t82*t116;
  t292 = 0. + t262 + t264;
  t285 = t129*t273;
  t288 = t56*t116*t186;
  t289 = 0. + t285 + t288;
  t298 = t176*t292;
  t299 = -1.*t289*t199;
  t300 = 0. + t298 + t299;
  t291 = t176*t289;
  t293 = t292*t199;
  t294 = 0. + t291 + t293;
  t224 = -1.*t222;
  t233 = 0. + t224;
  t244 = 0. + t222;
  t355 = t81*t56;
  t356 = 0. + t355;
  t339 = t56*t129*t108;
  t346 = -1.*t82*t186;
  t351 = 0. + t339 + t346;
  t369 = t356*t176;
  t371 = -1.*t351*t199;
  t372 = 0. + t369 + t371;
  t353 = t176*t351;
  t358 = t356*t199;
  t359 = 0. + t353 + t358;
  t123 = t85 + t122;
  t401 = Sin(var1[15]);
  t397 = Cos(var1[15]);
  t409 = Cos(var1[16]);
  t407 = Sin(var1[16]);
  t410 = -1.*t401;
  t411 = 0. + t410;
  t415 = t56*t66*t411;
  t417 = t397*t151;
  t422 = 0. + t415 + t417;
  t408 = t407*t193;
  t425 = t409*t422;
  t426 = 0. + t408 + t425;
  t433 = t409*t193;
  t440 = -1.*t407*t422;
  t443 = 0. + t433 + t440;
  t451 = Cos(var1[17]);
  t452 = 0. + t451;
  t446 = Sin(var1[17]);
  t267 = t262 + t264;
  t399 = 0. + t397;
  t484 = t56*t411*t116;
  t486 = t397*t273;
  t490 = 0. + t484 + t486;
  t448 = -1.*t446;
  t449 = 0. + t448;
  t483 = t407*t292;
  t491 = t409*t490;
  t492 = 0. + t483 + t491;
  t495 = t409*t292;
  t496 = -1.*t407*t490;
  t497 = 0. + t495 + t496;
  t459 = 0. + t446;
  t529 = t397*t56*t108;
  t530 = -1.*t411*t82;
  t531 = 0. + t529 + t530;
  t528 = t356*t407;
  t532 = t409*t531;
  t533 = 0. + t528 + t532;
  t535 = t409*t356;
  t536 = -1.*t407*t531;
  t537 = 0. + t535 + t536;
  p_output1[0]=0.2429*t123 - 0.2083*t208 - 0.1422*t212 - 0.02*(0. + t212*t217 + t208*t233) - 0.16*(0. + t208*t217 + t212*t244) - 0.0817*t56*t66 - 0.0329*(0. - 1.*t151*t152 + t131*t56*t66) + var1[0];
  p_output1[1]=0.2429*t267 - 0.2083*t294 - 0.1422*t300 - 0.02*(0. + t233*t294 + t217*t300) - 0.16*(0. + t217*t294 + t244*t300) - 0.0817*t116*t56 - 0.0329*(0. - 1.*t152*t273 + t116*t131*t56) + var1[1];
  p_output1[2]=-0.2083*t359 - 0.1422*t372 - 0.02*(0. + t233*t359 + t217*t372) - 0.16*(0. + t217*t359 + t244*t372) + 0.2429*t56*t81 + 0.0817*t82 - 0.0329*(0. - 1.*t108*t152*t56 - 1.*t131*t82) + var1[2];
  p_output1[3]=-0.1944*t123 - 0.2083*t426 - 0.1422*t443 - 0.02*(0. + t426*t449 + t443*t452) - 0.16*(0. + t426*t452 + t443*t459) + 0.0817*t56*t66 + 0.035199999999999995*(0. + t151*t401 + t399*t56*t66) + var1[0];
  p_output1[4]=-0.1944*t267 - 0.2083*t492 - 0.1422*t497 - 0.02*(0. + t449*t492 + t452*t497) - 0.16*(0. + t452*t492 + t459*t497) + 0.0817*t116*t56 + 0.035199999999999995*(0. + t273*t401 + t116*t399*t56) + var1[1];
  p_output1[5]=-0.2083*t533 - 0.1422*t537 - 0.02*(0. + t449*t533 + t452*t537) - 0.16*(0. + t452*t533 + t459*t537) - 0.1944*t56*t81 - 0.0817*t82 + 0.035199999999999995*(0. + t108*t401*t56 - 1.*t399*t82) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "F_2_func.hh"

namespace SymFunction
{

void F_2_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
