/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 13:00:19 GMT-05:00
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
  double t34;
  double t124;
  double t158;
  double t185;
  double t200;
  double t230;
  double t236;
  double t244;
  double t11;
  double t306;
  double t264;
  double t310;
  double t317;
  double t323;
  double t366;
  double t409;
  double t410;
  double t412;
  double t424;
  double t436;
  double t438;
  double t442;
  double t448;
  double t449;
  double t450;
  double t472;
  double t273;
  double t611;
  double t612;
  double t624;
  double t646;
  double t669;
  double t676;
  double t482;
  double t489;
  double t692;
  double t695;
  double t699;
  double t700;
  double t702;
  double t703;
  double t704;
  double t711;
  double t502;
  double t874;
  double t876;
  double t886;
  double t888;
  double t898;
  double t907;
  double t917;
  double t921;
  t34 = Cos(var1[5]);
  t124 = Sin(var1[3]);
  t158 = Sin(var1[4]);
  t185 = t34*t124*t158;
  t200 = Cos(var1[3]);
  t230 = Sin(var1[5]);
  t236 = -1.*t200*t230;
  t244 = t185 + t236;
  t11 = Cos(var1[4]);
  t306 = Sin(var1[12]);
  t264 = Cos(var1[12]);
  t310 = t200*t34*t158;
  t317 = t124*t230;
  t323 = t310 + t317;
  t366 = t11*t34;
  t409 = 0. + t366;
  t410 = Sin(var1[13]);
  t412 = t409*t410;
  t424 = Cos(var1[13]);
  t436 = -1.*t306;
  t438 = 0. + t436;
  t442 = t438*t244;
  t448 = t264*t323;
  t449 = 0. + t442 + t448;
  t450 = t424*t449;
  t472 = 0. + t412 + t450;
  t273 = 0. + t264;
  t611 = t200*t34;
  t612 = t124*t158*t230;
  t624 = t611 + t612;
  t646 = -1.*t34*t124;
  t669 = t200*t158*t230;
  t676 = t646 + t669;
  t482 = Cos(var1[14]);
  t489 = 0. + t482;
  t692 = t11*t230;
  t695 = 0. + t692;
  t699 = t410*t695;
  t700 = t264*t676;
  t702 = t438*t624;
  t703 = 0. + t700 + t702;
  t704 = t424*t703;
  t711 = 0. + t699 + t704;
  t502 = Sin(var1[14]);
  t874 = t264*t200*t11;
  t876 = t11*t438*t124;
  t886 = 0. + t874 + t876;
  t888 = -1.*t158;
  t898 = 0. + t888;
  t907 = t424*t886;
  t917 = t410*t898;
  t921 = 0. + t907 + t917;
  p_output1[0]=-0.0875*t244 - 0.037*(0. + t244*t273 + t306*t323) - 0.21935*t11*t34 - 0.25*t472 - 0.27*(t472*t489 + (0. + t409*t424 - 1.*t410*t449)*t502) + var1[0];
  p_output1[1]=-0.21935*t11*t230 - 0.0875*t624 - 0.037*(0. + t273*t624 + t306*t676) - 0.25*t711 - 0.27*(t502*(0. + t424*t695 - 1.*t410*t703) + t489*t711) + var1[1];
  p_output1[2]=-0.0875*t11*t124 + 0.21935*t158 - 0.037*(0. + t11*t124*t273 + t11*t200*t306) - 0.25*t921 - 0.27*(t502*(0. - 1.*t410*t886 + t424*t898) + t489*t921) + var1[2];
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

#include "SF_2_func.hh"

namespace SymFunction
{

void SF_2_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
