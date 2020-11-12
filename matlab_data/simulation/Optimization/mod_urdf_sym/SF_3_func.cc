/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 13:00:21 GMT-05:00
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
  double t104;
  double t185;
  double t244;
  double t259;
  double t264;
  double t273;
  double t294;
  double t310;
  double t323;
  double t355;
  double t366;
  double t409;
  double t412;
  double t11;
  double t448;
  double t450;
  double t472;
  double t474;
  double t482;
  double t489;
  double t491;
  double t502;
  double t509;
  double t516;
  double t517;
  double t525;
  double t331;
  double t690;
  double t692;
  double t695;
  double t702;
  double t704;
  double t711;
  double t552;
  double t556;
  double t750;
  double t822;
  double t838;
  double t850;
  double t857;
  double t859;
  double t861;
  double t868;
  double t641;
  double t927;
  double t950;
  double t951;
  double t952;
  double t954;
  double t965;
  double t967;
  double t981;
  t104 = Cos(var1[5]);
  t185 = Sin(var1[3]);
  t244 = Sin(var1[4]);
  t259 = t104*t185*t244;
  t264 = Cos(var1[3]);
  t273 = Sin(var1[5]);
  t294 = -1.*t264*t273;
  t310 = t259 + t294;
  t323 = Cos(var1[6]);
  t355 = t264*t104*t244;
  t366 = t185*t273;
  t409 = t355 + t366;
  t412 = Sin(var1[6]);
  t11 = Cos(var1[4]);
  t448 = Cos(var1[7]);
  t450 = t323*t409;
  t472 = -1.*t412;
  t474 = 0. + t472;
  t482 = t310*t474;
  t489 = 0. + t450 + t482;
  t491 = t448*t489;
  t502 = t11*t104;
  t509 = 0. + t502;
  t516 = Sin(var1[7]);
  t517 = t509*t516;
  t525 = 0. + t491 + t517;
  t331 = 0. + t323;
  t690 = t264*t104;
  t692 = t185*t244*t273;
  t695 = t690 + t692;
  t702 = -1.*t104*t185;
  t704 = t264*t244*t273;
  t711 = t702 + t704;
  t552 = Cos(var1[8]);
  t556 = 0. + t552;
  t750 = t323*t711;
  t822 = t695*t474;
  t838 = 0. + t750 + t822;
  t850 = t448*t838;
  t857 = t11*t273;
  t859 = 0. + t857;
  t861 = t859*t516;
  t868 = 0. + t850 + t861;
  t641 = Sin(var1[8]);
  t927 = t264*t11*t323;
  t950 = t11*t185*t474;
  t951 = 0. + t927 + t950;
  t952 = t448*t951;
  t954 = -1.*t244;
  t965 = 0. + t954;
  t967 = t965*t516;
  t981 = 0. + t952 + t967;
  p_output1[0]=0.21935*t104*t11 - 0.0875*t310 - 0.037*(0. + t310*t331 + t409*t412) - 0.25*t525 - 0.27*(t525*t556 + (0. + t448*t509 - 1.*t489*t516)*t641) + var1[0];
  p_output1[1]=0.21935*t11*t273 - 0.0875*t695 - 0.037*(0. + t331*t695 + t412*t711) - 0.25*t868 - 0.27*(t641*(0. - 1.*t516*t838 + t448*t859) + t556*t868) + var1[1];
  p_output1[2]=-0.0875*t11*t185 - 0.21935*t244 - 0.037*(0. + t11*t185*t331 + t11*t264*t412) - 0.25*t981 - 0.27*(t641*(0. - 1.*t516*t951 + t448*t965) + t556*t981) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "SF_3_func.hh"

namespace SymFunction
{

void SF_3_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
