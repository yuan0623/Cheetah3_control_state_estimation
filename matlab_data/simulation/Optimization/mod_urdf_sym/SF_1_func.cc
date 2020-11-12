/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 13:00:17 GMT-05:00
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
  double t33;
  double t55;
  double t104;
  double t124;
  double t125;
  double t149;
  double t156;
  double t158;
  double t11;
  double t240;
  double t200;
  double t244;
  double t259;
  double t264;
  double t310;
  double t317;
  double t322;
  double t323;
  double t331;
  double t333;
  double t342;
  double t355;
  double t366;
  double t403;
  double t409;
  double t410;
  double t230;
  double t502;
  double t509;
  double t516;
  double t522;
  double t525;
  double t545;
  double t424;
  double t436;
  double t612;
  double t624;
  double t641;
  double t646;
  double t669;
  double t670;
  double t676;
  double t682;
  double t442;
  double t750;
  double t822;
  double t833;
  double t850;
  double t857;
  double t869;
  double t870;
  double t871;
  t33 = Cos(var1[5]);
  t55 = Sin(var1[3]);
  t104 = Sin(var1[4]);
  t124 = t33*t55*t104;
  t125 = Cos(var1[3]);
  t149 = Sin(var1[5]);
  t156 = -1.*t125*t149;
  t158 = t124 + t156;
  t11 = Cos(var1[4]);
  t240 = Sin(var1[9]);
  t200 = Cos(var1[9]);
  t244 = t125*t33*t104;
  t259 = t55*t149;
  t264 = t244 + t259;
  t310 = t11*t33;
  t317 = 0. + t310;
  t322 = Sin(var1[10]);
  t323 = t317*t322;
  t331 = Cos(var1[10]);
  t333 = -1.*t240;
  t342 = 0. + t333;
  t355 = t342*t158;
  t366 = t200*t264;
  t403 = 0. + t355 + t366;
  t409 = t331*t403;
  t410 = 0. + t323 + t409;
  t230 = 0. + t200;
  t502 = t125*t33;
  t509 = t55*t104*t149;
  t516 = t502 + t509;
  t522 = -1.*t33*t55;
  t525 = t125*t104*t149;
  t545 = t522 + t525;
  t424 = Cos(var1[11]);
  t436 = 0. + t424;
  t612 = t11*t149;
  t624 = 0. + t612;
  t641 = t322*t624;
  t646 = t200*t545;
  t669 = t342*t516;
  t670 = 0. + t646 + t669;
  t676 = t331*t670;
  t682 = 0. + t641 + t676;
  t442 = Sin(var1[11]);
  t750 = t200*t125*t11;
  t822 = t11*t342*t55;
  t833 = 0. + t750 + t822;
  t850 = -1.*t104;
  t857 = 0. + t850;
  t869 = t331*t833;
  t870 = t322*t857;
  t871 = 0. + t869 + t870;
  p_output1[0]=0.0875*t158 + 0.037*(0. + t158*t230 + t240*t264) + 0.21935*t11*t33 - 0.25*t410 - 0.27*(t410*t436 + (0. + t317*t331 - 1.*t322*t403)*t442) + var1[0];
  p_output1[1]=0.21935*t11*t149 + 0.0875*t516 + 0.037*(0. + t230*t516 + t240*t545) - 0.25*t682 - 0.27*(t442*(0. + t331*t624 - 1.*t322*t670) + t436*t682) + var1[1];
  p_output1[2]=-0.21935*t104 + 0.0875*t11*t55 + 0.037*(0. + t11*t125*t240 + t11*t230*t55) - 0.25*t871 - 0.27*(t442*(0. - 1.*t322*t833 + t331*t857) + t436*t871) + var1[2];
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

#include "SF_1_func.hh"

namespace SymFunction
{

void SF_1_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
