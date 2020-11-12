/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 21:22:38 GMT-05:00
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
  double t579;
  double t171;
  double t735;
  double t705;
  double t698;
  double t770;
  double t819;
  double t859;
  double t867;
  double t875;
  double t909;
  double t706;
  double t808;
  double t933;
  double t975;
  double t936;
  double t953;
  double t959;
  double t964;
  double t976;
  double t1004;
  double t1005;
  double t1017;
  double t966;
  double t984;
  double t989;
  double t1032;
  double t1035;
  double t1040;
  double t824;
  double t1180;
  double t1199;
  double t1202;
  double t1145;
  double t1153;
  double t1251;
  double t1220;
  double t1222;
  double t1227;
  double t1276;
  double t1277;
  double t1278;
  double t1248;
  double t1253;
  double t1260;
  double t1068;
  double t1072;
  double t1099;
  double t1429;
  double t1441;
  double t1415;
  double t1416;
  double t1419;
  double t1473;
  double t1474;
  double t1476;
  double t1420;
  double t1442;
  double t1449;
  t579 = Cos(var1[5]);
  t171 = Cos(var1[4]);
  t735 = Sin(var1[3]);
  t705 = Sin(var1[4]);
  t698 = Cos(var1[3]);
  t770 = Sin(var1[5]);
  t819 = Cos(var1[6]);
  t859 = t579*t735*t705;
  t867 = -1.*t698*t770;
  t875 = t859 + t867;
  t909 = Sin(var1[6]);
  t706 = t698*t579*t705;
  t808 = t735*t770;
  t933 = Cos(var1[7]);
  t975 = 0. + t706 + t808;
  t936 = t819*t875;
  t953 = 0. + t909;
  t959 = t171*t579*t953;
  t964 = 0. + t936 + t959;
  t976 = Sin(var1[7]);
  t1004 = t933*t975;
  t1005 = -1.*t964*t976;
  t1017 = 0. + t1004 + t1005;
  t966 = t933*t964;
  t984 = t975*t976;
  t989 = 0. + t966 + t984;
  t1032 = Cos(var1[8]);
  t1035 = 0. + t1032;
  t1040 = Sin(var1[8]);
  t824 = 0. + t819;
  t1180 = t698*t579;
  t1199 = t735*t705*t770;
  t1202 = t1180 + t1199;
  t1145 = -1.*t579*t735;
  t1153 = t698*t705*t770;
  t1251 = 0. + t1145 + t1153;
  t1220 = t819*t1202;
  t1222 = t171*t770*t953;
  t1227 = 0. + t1220 + t1222;
  t1276 = t933*t1251;
  t1277 = -1.*t1227*t976;
  t1278 = 0. + t1276 + t1277;
  t1248 = t933*t1227;
  t1253 = t1251*t976;
  t1260 = 0. + t1248 + t1253;
  t1068 = -1.*t1040;
  t1072 = 0. + t1068;
  t1099 = 0. + t1040;
  t1429 = t698*t171;
  t1441 = 0. + t1429;
  t1415 = t171*t819*t735;
  t1416 = -1.*t705*t953;
  t1419 = 0. + t1415 + t1416;
  t1473 = t1441*t933;
  t1474 = -1.*t1419*t976;
  t1476 = 0. + t1473 + t1474;
  t1420 = t933*t1419;
  t1442 = t1441*t976;
  t1449 = 0. + t1420 + t1442;
  p_output1[0]=-0.1422*t1017 - 0.0817*t171*t579 + 0.2429*(t706 + t808) - 0.0329*(0. + t171*t579*t824 - 1.*t875*t909) - 0.2083*t989 - 0.16*(0. + t1017*t1099 + t1035*t989) - 0.02*(0. + t1017*t1035 + t1072*t989) + var1[0];
  p_output1[1]=0.2429*(t1145 + t1153) - 0.2083*t1260 - 0.1422*t1278 - 0.02*(0. + t1072*t1260 + t1035*t1278) - 0.16*(0. + t1035*t1260 + t1099*t1278) - 0.0817*t171*t770 - 0.0329*(0. + t171*t770*t824 - 1.*t1202*t909) + var1[1];
  p_output1[2]=-0.2083*t1449 - 0.1422*t1476 - 0.02*(0. + t1072*t1449 + t1035*t1476) - 0.16*(0. + t1035*t1449 + t1099*t1476) + 0.2429*t171*t698 + 0.0817*t705 - 0.0329*(0. - 1.*t705*t824 - 1.*t171*t735*t909) + var1[2];
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
