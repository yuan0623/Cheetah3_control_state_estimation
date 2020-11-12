/*
 * Automatically Generated from Mathematica.
 * Mon 29 Jul 2019 15:08:17 GMT-04:00
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
  double t47;
  double t32;
  double t192;
  double t170;
  double t133;
  double t195;
  double t191;
  double t199;
  double t287;
  double t241;
  double t290;
  double t291;
  double t294;
  double t365;
  double t345;
  double t327;
  double t366;
  double t374;
  double t382;
  double t394;
  double t428;
  double t353;
  double t429;
  double t431;
  double t441;
  double t442;
  double t453;
  double t487;
  double t493;
  double t462;
  double t268;
  double t554;
  double t556;
  double t569;
  double t577;
  double t583;
  double t601;
  double t604;
  double t605;
  double t607;
  double t464;
  double t467;
  double t603;
  double t620;
  double t635;
  double t643;
  double t645;
  double t658;
  double t513;
  double t777;
  double t778;
  double t795;
  double t801;
  double t806;
  double t779;
  double t808;
  double t816;
  double t837;
  double t840;
  double t854;
  double t876;
  double t880;
  double t883;
  double t894;
  double t896;
  double t898;
  double t283;
  double t301;
  double t310;
  double t568;
  double t588;
  double t592;
  t47 = Cos(var1[5]);
  t32 = Cos(var1[4]);
  t192 = Sin(var1[3]);
  t170 = Sin(var1[4]);
  t133 = Cos(var1[3]);
  t195 = Sin(var1[5]);
  t191 = t133*t47*t170;
  t199 = t192*t195;
  t287 = Sin(var1[9]);
  t241 = Cos(var1[9]);
  t290 = t47*t192*t170;
  t291 = -1.*t133*t195;
  t294 = t290 + t291;
  t365 = Cos(var1[10]);
  t345 = 0. + t191 + t199;
  t327 = Sin(var1[10]);
  t366 = -1.*t287;
  t374 = 0. + t366;
  t382 = t32*t47*t374;
  t394 = t241*t294;
  t428 = 0. + t382 + t394;
  t353 = t327*t345;
  t429 = t365*t428;
  t431 = 0. + t353 + t429;
  t441 = t365*t345;
  t442 = -1.*t327*t428;
  t453 = 0. + t441 + t442;
  t487 = Cos(var1[11]);
  t493 = 0. + t487;
  t462 = Sin(var1[11]);
  t268 = 0. + t241;
  t554 = -1.*t47*t192;
  t556 = t133*t170*t195;
  t569 = t133*t47;
  t577 = t192*t170*t195;
  t583 = t569 + t577;
  t601 = 0. + t554 + t556;
  t604 = t32*t374*t195;
  t605 = t241*t583;
  t607 = 0. + t604 + t605;
  t464 = -1.*t462;
  t467 = 0. + t464;
  t603 = t327*t601;
  t620 = t365*t607;
  t635 = 0. + t603 + t620;
  t643 = t365*t601;
  t645 = -1.*t327*t607;
  t658 = 0. + t643 + t645;
  t513 = 0. + t462;
  t777 = t133*t32;
  t778 = 0. + t777;
  t795 = t241*t32*t192;
  t801 = -1.*t374*t170;
  t806 = 0. + t795 + t801;
  t779 = t778*t327;
  t808 = t365*t806;
  t816 = 0. + t779 + t808;
  t837 = t365*t778;
  t840 = -1.*t327*t806;
  t854 = 0. + t837 + t840;
  t876 = t467*t816;
  t880 = t493*t854;
  t883 = 0. + t876 + t880;
  t894 = t493*t816;
  t896 = t513*t854;
  t898 = 0. + t894 + t896;
  t283 = t268*t32*t47;
  t301 = t287*t294;
  t310 = 0. + t283 + t301;
  t568 = t268*t32*t195;
  t588 = t287*t583;
  t592 = 0. + t568 + t588;
  p_output1[0]=0.2429*(t191 + t199) + 0.035199999999999995*t310 - 0.2083*t431 - 0.1422*t453 + 0.0817*t32*t47 - 0.02*(0. + t431*t467 + t453*t493) - 0.16*(0. + t431*t493 + t453*t513) + var1[0];
  p_output1[1]=0.0817*t195*t32 + 0.2429*(t554 + t556) + 0.035199999999999995*t592 - 0.2083*t635 - 0.1422*t658 - 0.02*(0. + t467*t635 + t493*t658) - 0.16*(0. + t493*t635 + t513*t658) + var1[1];
  p_output1[2]=-0.0817*t170 + 0.2429*t133*t32 + 0.035199999999999995*(0. - 1.*t170*t268 + t192*t287*t32) - 0.2083*t816 - 0.1422*t854 - 0.02*t883 - 0.16*t898 + var1[2];
  p_output1[3]=ArcTan(t883,t898);
  p_output1[4]=ArcTan(Sqrt(Power(t883,2) + Power(t898,2)),0. + t170*t268 - 1.*t192*t287*t32);
  p_output1[5]=ArcTan(t310,t592);
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
