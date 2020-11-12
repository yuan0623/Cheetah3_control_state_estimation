/*
 * Automatically Generated from Mathematica.
 * Mon 29 Jul 2019 15:08:23 GMT-04:00
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
  double t241;
  double t199;
  double t353;
  double t310;
  double t301;
  double t382;
  double t467;
  double t497;
  double t501;
  double t505;
  double t513;
  double t314;
  double t438;
  double t559;
  double t588;
  double t565;
  double t568;
  double t569;
  double t577;
  double t592;
  double t604;
  double t605;
  double t620;
  double t583;
  double t598;
  double t601;
  double t643;
  double t658;
  double t681;
  double t486;
  double t837;
  double t854;
  double t873;
  double t779;
  double t795;
  double t901;
  double t885;
  double t894;
  double t896;
  double t916;
  double t937;
  double t942;
  double t898;
  double t904;
  double t906;
  double t691;
  double t704;
  double t751;
  double t1075;
  double t1079;
  double t1053;
  double t1054;
  double t1057;
  double t1135;
  double t1136;
  double t1147;
  double t1070;
  double t1086;
  double t1120;
  double t1161;
  double t1165;
  double t1167;
  double t1183;
  double t1184;
  double t1189;
  double t493;
  double t516;
  double t528;
  double t835;
  double t876;
  double t880;
  t241 = Cos(var1[5]);
  t199 = Cos(var1[4]);
  t353 = Sin(var1[3]);
  t310 = Sin(var1[4]);
  t301 = Cos(var1[3]);
  t382 = Sin(var1[5]);
  t467 = Cos(var1[6]);
  t497 = t241*t353*t310;
  t501 = -1.*t301*t382;
  t505 = t497 + t501;
  t513 = Sin(var1[6]);
  t314 = t301*t241*t310;
  t438 = t353*t382;
  t559 = Cos(var1[7]);
  t588 = 0. + t314 + t438;
  t565 = t467*t505;
  t568 = 0. + t513;
  t569 = t199*t241*t568;
  t577 = 0. + t565 + t569;
  t592 = Sin(var1[7]);
  t604 = t559*t588;
  t605 = -1.*t577*t592;
  t620 = 0. + t604 + t605;
  t583 = t559*t577;
  t598 = t588*t592;
  t601 = 0. + t583 + t598;
  t643 = Cos(var1[8]);
  t658 = 0. + t643;
  t681 = Sin(var1[8]);
  t486 = 0. + t467;
  t837 = t301*t241;
  t854 = t353*t310*t382;
  t873 = t837 + t854;
  t779 = -1.*t241*t353;
  t795 = t301*t310*t382;
  t901 = 0. + t779 + t795;
  t885 = t467*t873;
  t894 = t199*t382*t568;
  t896 = 0. + t885 + t894;
  t916 = t559*t901;
  t937 = -1.*t896*t592;
  t942 = 0. + t916 + t937;
  t898 = t559*t896;
  t904 = t901*t592;
  t906 = 0. + t898 + t904;
  t691 = -1.*t681;
  t704 = 0. + t691;
  t751 = 0. + t681;
  t1075 = t301*t199;
  t1079 = 0. + t1075;
  t1053 = t199*t467*t353;
  t1054 = -1.*t310*t568;
  t1057 = 0. + t1053 + t1054;
  t1135 = t1079*t559;
  t1136 = -1.*t1057*t592;
  t1147 = 0. + t1135 + t1136;
  t1070 = t559*t1057;
  t1086 = t1079*t592;
  t1120 = 0. + t1070 + t1086;
  t1161 = t658*t1147;
  t1165 = t1120*t704;
  t1167 = 0. + t1161 + t1165;
  t1183 = t658*t1120;
  t1184 = t1147*t751;
  t1189 = 0. + t1183 + t1184;
  t493 = t199*t241*t486;
  t516 = -1.*t505*t513;
  t528 = 0. + t493 + t516;
  t835 = t199*t486*t382;
  t876 = -1.*t873*t513;
  t880 = 0. + t835 + t876;
  p_output1[0]=-0.0817*t199*t241 + 0.2429*(t314 + t438) - 0.0329*t528 - 0.2083*t601 - 0.1422*t620 - 0.02*(0. + t620*t658 + t601*t704) - 0.16*(0. + t601*t658 + t620*t751) + var1[0];
  p_output1[1]=-0.0817*t199*t382 + 0.2429*(t779 + t795) - 0.0329*t880 - 0.2083*t906 - 0.1422*t942 - 0.02*(0. + t704*t906 + t658*t942) - 0.16*(0. + t658*t906 + t751*t942) + var1[1];
  p_output1[2]=-0.2083*t1120 - 0.1422*t1147 - 0.02*t1167 - 0.16*t1189 + 0.2429*t199*t301 + 0.0817*t310 - 0.0329*(0. - 1.*t310*t486 - 1.*t199*t353*t513) + var1[2];
  p_output1[3]=ArcTan(t1167,t1189);
  p_output1[4]=ArcTan(Sqrt(Power(t1167,2) + Power(t1189,2)),0. + t310*t486 + t199*t353*t513);
  p_output1[5]=ArcTan(t528,t880);
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
