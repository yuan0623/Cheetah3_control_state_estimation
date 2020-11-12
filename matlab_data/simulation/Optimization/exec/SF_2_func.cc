/*
 * Automatically Generated from Mathematica.
 * Mon 29 Jul 2019 15:08:20 GMT-04:00
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
  double t191;
  double t81;
  double t283;
  double t225;
  double t218;
  double t290;
  double t241;
  double t294;
  double t365;
  double t314;
  double t382;
  double t394;
  double t429;
  double t486;
  double t461;
  double t453;
  double t487;
  double t493;
  double t497;
  double t500;
  double t467;
  double t501;
  double t505;
  double t516;
  double t518;
  double t528;
  double t568;
  double t569;
  double t536;
  double t345;
  double t635;
  double t642;
  double t681;
  double t691;
  double t696;
  double t741;
  double t749;
  double t751;
  double t752;
  double t556;
  double t559;
  double t747;
  double t758;
  double t761;
  double t771;
  double t777;
  double t778;
  double t598;
  double t904;
  double t906;
  double t916;
  double t928;
  double t929;
  double t909;
  double t937;
  double t942;
  double t956;
  double t968;
  double t974;
  double t978;
  double t980;
  double t982;
  double t1000;
  double t1005;
  double t1008;
  double t353;
  double t431;
  double t438;
  double t675;
  double t701;
  double t704;
  t191 = Cos(var1[5]);
  t81 = Cos(var1[4]);
  t283 = Sin(var1[3]);
  t225 = Sin(var1[4]);
  t218 = Cos(var1[3]);
  t290 = Sin(var1[5]);
  t241 = t218*t191*t225;
  t294 = t283*t290;
  t365 = Sin(var1[12]);
  t314 = Cos(var1[12]);
  t382 = t191*t283*t225;
  t394 = -1.*t218*t290;
  t429 = t382 + t394;
  t486 = Cos(var1[13]);
  t461 = 0. + t241 + t294;
  t453 = Sin(var1[13]);
  t487 = 0. + t365;
  t493 = t81*t191*t487;
  t497 = t314*t429;
  t500 = 0. + t493 + t497;
  t467 = t453*t461;
  t501 = t486*t500;
  t505 = 0. + t467 + t501;
  t516 = t486*t461;
  t518 = -1.*t453*t500;
  t528 = 0. + t516 + t518;
  t568 = Cos(var1[14]);
  t569 = 0. + t568;
  t536 = Sin(var1[14]);
  t345 = 0. + t314;
  t635 = -1.*t191*t283;
  t642 = t218*t225*t290;
  t681 = t218*t191;
  t691 = t283*t225*t290;
  t696 = t681 + t691;
  t741 = 0. + t635 + t642;
  t749 = t81*t487*t290;
  t751 = t314*t696;
  t752 = 0. + t749 + t751;
  t556 = -1.*t536;
  t559 = 0. + t556;
  t747 = t453*t741;
  t758 = t486*t752;
  t761 = 0. + t747 + t758;
  t771 = t486*t741;
  t777 = -1.*t453*t752;
  t778 = 0. + t771 + t777;
  t598 = 0. + t536;
  t904 = t218*t81;
  t906 = 0. + t904;
  t916 = t314*t81*t283;
  t928 = -1.*t487*t225;
  t929 = 0. + t916 + t928;
  t909 = t906*t453;
  t937 = t486*t929;
  t942 = 0. + t909 + t937;
  t956 = t486*t906;
  t968 = -1.*t453*t929;
  t974 = 0. + t956 + t968;
  t978 = t559*t942;
  t980 = t569*t974;
  t982 = 0. + t978 + t980;
  t1000 = t569*t942;
  t1005 = t598*t974;
  t1008 = 0. + t1000 + t1005;
  t353 = t345*t81*t191;
  t431 = -1.*t365*t429;
  t438 = 0. + t353 + t431;
  t675 = t345*t81*t290;
  t701 = -1.*t365*t696;
  t704 = 0. + t675 + t701;
  p_output1[0]=-0.1944*(t241 + t294) - 0.0329*t438 - 0.2083*t505 - 0.1422*t528 - 0.02*(0. + t505*t559 + t528*t569) - 0.16*(0. + t505*t569 + t528*t598) - 0.0817*t191*t81 + var1[0];
  p_output1[1]=-0.1944*(t635 + t642) - 0.0329*t704 - 0.2083*t761 - 0.1422*t778 - 0.02*(0. + t559*t761 + t569*t778) - 0.16*(0. + t569*t761 + t598*t778) - 0.0817*t290*t81 + var1[1];
  p_output1[2]=-0.16*t1008 + 0.0817*t225 - 0.1944*t218*t81 - 0.0329*(0. - 1.*t225*t345 - 1.*t283*t365*t81) - 0.2083*t942 - 0.1422*t974 - 0.02*t982 + var1[2];
  p_output1[3]=ArcTan(t982,t1008);
  p_output1[4]=ArcTan(Sqrt(Power(t1008,2) + Power(t982,2)),0. + t225*t345 + t283*t365*t81);
  p_output1[5]=ArcTan(t438,t704);
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
