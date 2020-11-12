/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 21:22:35 GMT-05:00
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
  double t131;
  double t4;
  double t598;
  double t544;
  double t529;
  double t604;
  double t579;
  double t674;
  double t737;
  double t706;
  double t770;
  double t786;
  double t793;
  double t840;
  double t819;
  double t815;
  double t845;
  double t859;
  double t867;
  double t874;
  double t824;
  double t875;
  double t909;
  double t912;
  double t926;
  double t929;
  double t959;
  double t964;
  double t934;
  double t707;
  double t1025;
  double t1032;
  double t1068;
  double t1072;
  double t1073;
  double t1098;
  double t1111;
  double t1117;
  double t1125;
  double t935;
  double t936;
  double t1099;
  double t1126;
  double t1141;
  double t1145;
  double t1152;
  double t1153;
  double t989;
  double t1265;
  double t1276;
  double t1278;
  double t1280;
  double t1290;
  double t1277;
  double t1303;
  double t1304;
  double t1322;
  double t1324;
  double t1327;
  t131 = Cos(var1[5]);
  t4 = Cos(var1[4]);
  t598 = Sin(var1[3]);
  t544 = Sin(var1[4]);
  t529 = Cos(var1[3]);
  t604 = Sin(var1[5]);
  t579 = t529*t131*t544;
  t674 = t598*t604;
  t737 = Sin(var1[12]);
  t706 = Cos(var1[12]);
  t770 = t131*t598*t544;
  t786 = -1.*t529*t604;
  t793 = t770 + t786;
  t840 = Cos(var1[13]);
  t819 = 0. + t579 + t674;
  t815 = Sin(var1[13]);
  t845 = 0. + t737;
  t859 = t4*t131*t845;
  t867 = t706*t793;
  t874 = 0. + t859 + t867;
  t824 = t815*t819;
  t875 = t840*t874;
  t909 = 0. + t824 + t875;
  t912 = t840*t819;
  t926 = -1.*t815*t874;
  t929 = 0. + t912 + t926;
  t959 = Cos(var1[14]);
  t964 = 0. + t959;
  t934 = Sin(var1[14]);
  t707 = 0. + t706;
  t1025 = -1.*t131*t598;
  t1032 = t529*t544*t604;
  t1068 = t529*t131;
  t1072 = t598*t544*t604;
  t1073 = t1068 + t1072;
  t1098 = 0. + t1025 + t1032;
  t1111 = t4*t845*t604;
  t1117 = t706*t1073;
  t1125 = 0. + t1111 + t1117;
  t935 = -1.*t934;
  t936 = 0. + t935;
  t1099 = t815*t1098;
  t1126 = t840*t1125;
  t1141 = 0. + t1099 + t1126;
  t1145 = t840*t1098;
  t1152 = -1.*t815*t1125;
  t1153 = 0. + t1145 + t1152;
  t989 = 0. + t934;
  t1265 = t529*t4;
  t1276 = 0. + t1265;
  t1278 = t706*t4*t598;
  t1280 = -1.*t845*t544;
  t1290 = 0. + t1278 + t1280;
  t1277 = t1276*t815;
  t1303 = t840*t1290;
  t1304 = 0. + t1277 + t1303;
  t1322 = t840*t1276;
  t1324 = -1.*t815*t1290;
  t1327 = 0. + t1322 + t1324;
  p_output1[0]=-0.0817*t131*t4 - 0.1944*(t579 + t674) - 0.0329*(0. + t131*t4*t707 - 1.*t737*t793) - 0.2083*t909 - 0.1422*t929 - 0.02*(0. + t909*t936 + t929*t964) - 0.16*(0. + t909*t964 + t929*t989) + var1[0];
  p_output1[1]=-0.1944*(t1025 + t1032) - 0.2083*t1141 - 0.1422*t1153 - 0.0817*t4*t604 - 0.0329*(0. + t4*t604*t707 - 1.*t1073*t737) - 0.02*(0. + t1141*t936 + t1153*t964) - 0.16*(0. + t1141*t964 + t1153*t989) + var1[1];
  p_output1[2]=-0.2083*t1304 - 0.1422*t1327 - 0.1944*t4*t529 + 0.0817*t544 - 0.0329*(0. - 1.*t544*t707 - 1.*t4*t598*t737) - 0.02*(0. + t1304*t936 + t1327*t964) - 0.16*(0. + t1304*t964 + t1327*t989) + var1[2];
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
