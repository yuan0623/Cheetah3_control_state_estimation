/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 13:00:23 GMT-05:00
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
  double t158;
  double t259;
  double t310;
  double t317;
  double t323;
  double t331;
  double t342;
  double t355;
  double t11;
  double t442;
  double t409;
  double t448;
  double t450;
  double t474;
  double t509;
  double t517;
  double t525;
  double t545;
  double t552;
  double t556;
  double t604;
  double t611;
  double t612;
  double t624;
  double t641;
  double t669;
  double t424;
  double t726;
  double t743;
  double t750;
  double t850;
  double t857;
  double t859;
  double t682;
  double t688;
  double t871;
  double t874;
  double t876;
  double t887;
  double t888;
  double t898;
  double t900;
  double t904;
  double t690;
  double t1013;
  double t1019;
  double t1025;
  double t1043;
  double t1045;
  double t1058;
  double t1063;
  double t1067;
  t158 = Cos(var1[5]);
  t259 = Sin(var1[3]);
  t310 = Sin(var1[4]);
  t317 = t158*t259*t310;
  t323 = Cos(var1[3]);
  t331 = Sin(var1[5]);
  t342 = -1.*t323*t331;
  t355 = t317 + t342;
  t11 = Cos(var1[4]);
  t442 = Sin(var1[15]);
  t409 = Cos(var1[15]);
  t448 = t323*t158*t310;
  t450 = t259*t331;
  t474 = t448 + t450;
  t509 = t11*t158;
  t517 = 0. + t509;
  t525 = Sin(var1[16]);
  t545 = t517*t525;
  t552 = Cos(var1[16]);
  t556 = -1.*t442;
  t604 = 0. + t556;
  t611 = t604*t355;
  t612 = t409*t474;
  t624 = 0. + t611 + t612;
  t641 = t552*t624;
  t669 = 0. + t545 + t641;
  t424 = 0. + t409;
  t726 = t323*t158;
  t743 = t259*t310*t331;
  t750 = t726 + t743;
  t850 = -1.*t158*t259;
  t857 = t323*t310*t331;
  t859 = t850 + t857;
  t682 = Cos(var1[17]);
  t688 = 0. + t682;
  t871 = t11*t331;
  t874 = 0. + t871;
  t876 = t525*t874;
  t887 = t409*t859;
  t888 = t604*t750;
  t898 = 0. + t887 + t888;
  t900 = t552*t898;
  t904 = 0. + t876 + t900;
  t690 = Sin(var1[17]);
  t1013 = t409*t323*t11;
  t1019 = t11*t604*t259;
  t1025 = 0. + t1013 + t1019;
  t1043 = -1.*t310;
  t1045 = 0. + t1043;
  t1058 = t552*t1025;
  t1063 = t525*t1045;
  t1067 = 0. + t1058 + t1063;
  p_output1[0]=-0.21935*t11*t158 + 0.0875*t355 + 0.037*(0. + t355*t424 + t442*t474) - 0.25*t669 - 0.27*(t669*t688 + (0. + t517*t552 - 1.*t525*t624)*t690) + var1[0];
  p_output1[1]=-0.21935*t11*t331 + 0.0875*t750 + 0.037*(0. + t424*t750 + t442*t859) - 0.25*t904 - 0.27*(t690*(0. + t552*t874 - 1.*t525*t898) + t688*t904) + var1[1];
  p_output1[2]=-0.25*t1067 + 0.0875*t11*t259 + 0.21935*t310 + 0.037*(0. + t11*t259*t424 + t11*t323*t442) - 0.27*(t1067*t688 + (0. - 1.*t1025*t525 + t1045*t552)*t690) + var1[2];
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

#include "SF_4_func.hh"

namespace SymFunction
{

void SF_4_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
