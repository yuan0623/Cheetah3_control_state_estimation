/*
 * Automatically Generated from Mathematica.
 * Fri 7 Aug 2020 14:46:05 GMT-04:00
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
  double t55;
  double t54;
  double t74;
  double t60;
  double t58;
  double t79;
  double t66;
  double t80;
  double t114;
  double t85;
  double t116;
  double t117;
  double t118;
  double t137;
  double t129;
  double t125;
  double t140;
  double t145;
  double t148;
  double t149;
  double t150;
  double t131;
  double t151;
  double t152;
  double t163;
  double t174;
  double t175;
  double t188;
  double t189;
  double t180;
  double t87;
  double t214;
  double t216;
  double t224;
  double t233;
  double t234;
  double t240;
  double t247;
  double t251;
  double t253;
  double t181;
  double t185;
  double t244;
  double t256;
  double t258;
  double t262;
  double t263;
  double t264;
  double t208;
  double t295;
  double t298;
  double t300;
  double t305;
  double t306;
  double t299;
  double t312;
  double t313;
  double t315;
  double t317;
  double t318;
  double t81;
  double t352;
  double t346;
  double t359;
  double t357;
  double t364;
  double t366;
  double t369;
  double t370;
  double t358;
  double t371;
  double t372;
  double t375;
  double t376;
  double t377;
  double t385;
  double t386;
  double t380;
  double t217;
  double t350;
  double t415;
  double t417;
  double t421;
  double t382;
  double t383;
  double t411;
  double t422;
  double t425;
  double t428;
  double t429;
  double t433;
  double t397;
  double t463;
  double t466;
  double t467;
  double t462;
  double t468;
  double t472;
  double t474;
  double t475;
  double t478;
  t55 = Cos(var1[5]);
  t54 = Cos(var1[4]);
  t74 = Sin(var1[3]);
  t60 = Sin(var1[4]);
  t58 = Cos(var1[3]);
  t79 = Sin(var1[5]);
  t66 = t58*t55*t60;
  t80 = t74*t79;
  t114 = Sin(var1[9]);
  t85 = Cos(var1[9]);
  t116 = t55*t74*t60;
  t117 = -1.*t58*t79;
  t118 = t116 + t117;
  t137 = Cos(var1[10]);
  t129 = 0. + t66 + t80;
  t125 = Sin(var1[10]);
  t140 = -1.*t114;
  t145 = 0. + t140;
  t148 = t54*t55*t145;
  t149 = t85*t118;
  t150 = 0. + t148 + t149;
  t131 = t125*t129;
  t151 = t137*t150;
  t152 = 0. + t131 + t151;
  t163 = t137*t129;
  t174 = -1.*t125*t150;
  t175 = 0. + t163 + t174;
  t188 = Cos(var1[11]);
  t189 = 0. + t188;
  t180 = Sin(var1[11]);
  t87 = 0. + t85;
  t214 = -1.*t55*t74;
  t216 = t58*t60*t79;
  t224 = t58*t55;
  t233 = t74*t60*t79;
  t234 = t224 + t233;
  t240 = 0. + t214 + t216;
  t247 = t54*t145*t79;
  t251 = t85*t234;
  t253 = 0. + t247 + t251;
  t181 = -1.*t180;
  t185 = 0. + t181;
  t244 = t125*t240;
  t256 = t137*t253;
  t258 = 0. + t244 + t256;
  t262 = t137*t240;
  t263 = -1.*t125*t253;
  t264 = 0. + t262 + t263;
  t208 = 0. + t180;
  t295 = t58*t54;
  t298 = 0. + t295;
  t300 = t85*t54*t74;
  t305 = -1.*t145*t60;
  t306 = 0. + t300 + t305;
  t299 = t298*t125;
  t312 = t137*t306;
  t313 = 0. + t299 + t312;
  t315 = t137*t298;
  t317 = -1.*t125*t306;
  t318 = 0. + t315 + t317;
  t81 = t66 + t80;
  t352 = Sin(var1[12]);
  t346 = Cos(var1[12]);
  t359 = Cos(var1[13]);
  t357 = Sin(var1[13]);
  t364 = 0. + t352;
  t366 = t54*t55*t364;
  t369 = t346*t118;
  t370 = 0. + t366 + t369;
  t358 = t357*t129;
  t371 = t359*t370;
  t372 = 0. + t358 + t371;
  t375 = t359*t129;
  t376 = -1.*t357*t370;
  t377 = 0. + t375 + t376;
  t385 = Cos(var1[14]);
  t386 = 0. + t385;
  t380 = Sin(var1[14]);
  t217 = t214 + t216;
  t350 = 0. + t346;
  t415 = t54*t364*t79;
  t417 = t346*t234;
  t421 = 0. + t415 + t417;
  t382 = -1.*t380;
  t383 = 0. + t382;
  t411 = t357*t240;
  t422 = t359*t421;
  t425 = 0. + t411 + t422;
  t428 = t359*t240;
  t429 = -1.*t357*t421;
  t433 = 0. + t428 + t429;
  t397 = 0. + t380;
  t463 = t346*t54*t74;
  t466 = -1.*t364*t60;
  t467 = 0. + t463 + t466;
  t462 = t298*t357;
  t468 = t359*t467;
  t472 = 0. + t462 + t468;
  t474 = t359*t298;
  t475 = -1.*t357*t467;
  t478 = 0. + t474 + t475;
  p_output1[0]=-0.2083*t152 - 0.1422*t175 - 0.02*(0. + t152*t185 + t175*t189) - 0.16*(0. + t152*t189 + t175*t208) + 0.0817*t54*t55 + 0.2429*t81 + 0.035199999999999995*(0. + t114*t118 + t54*t55*t87) + var1[0];
  p_output1[1]=0.2429*t217 - 0.2083*t258 - 0.1422*t264 - 0.02*(0. + t185*t258 + t189*t264) - 0.16*(0. + t189*t258 + t208*t264) + 0.0817*t54*t79 + 0.035199999999999995*(0. + t114*t234 + t54*t79*t87) + var1[1];
  p_output1[2]=-0.2083*t313 - 0.1422*t318 - 0.02*(0. + t185*t313 + t189*t318) - 0.16*(0. + t189*t313 + t208*t318) + 0.2429*t54*t58 - 0.0817*t60 + 0.035199999999999995*(0. + t114*t54*t74 - 1.*t60*t87) + var1[2];
  p_output1[3]=-0.2083*t372 - 0.1422*t377 - 0.02*(0. + t372*t383 + t377*t386) - 0.16*(0. + t372*t386 + t377*t397) - 0.0817*t54*t55 - 0.0329*(0. - 1.*t118*t352 + t350*t54*t55) - 0.1944*t81 + var1[0];
  p_output1[4]=-0.1944*t217 - 0.2083*t425 - 0.1422*t433 - 0.02*(0. + t383*t425 + t386*t433) - 0.16*(0. + t386*t425 + t397*t433) - 0.0817*t54*t79 - 0.0329*(0. - 1.*t234*t352 + t350*t54*t79) + var1[1];
  p_output1[5]=-0.2083*t472 - 0.1422*t478 - 0.02*(0. + t383*t472 + t386*t478) - 0.16*(0. + t386*t472 + t397*t478) - 0.1944*t54*t58 + 0.0817*t60 - 0.0329*(0. - 1.*t350*t60 - 1.*t352*t54*t74) + var1[2];
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

#include "F_1_func.hh"

namespace SymFunction
{

void F_1_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
