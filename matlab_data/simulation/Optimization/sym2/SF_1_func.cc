/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 21:22:33 GMT-05:00
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
  double t55;
  double t4;
  double t279;
  double t154;
  double t136;
  double t282;
  double t171;
  double t529;
  double t660;
  double t598;
  double t674;
  double t678;
  double t698;
  double t770;
  double t735;
  double t729;
  double t771;
  double t781;
  double t786;
  double t793;
  double t795;
  double t737;
  double t808;
  double t812;
  double t815;
  double t817;
  double t819;
  double t867;
  double t874;
  double t825;
  double t601;
  double t946;
  double t953;
  double t975;
  double t976;
  double t984;
  double t1005;
  double t1018;
  double t1025;
  double t1030;
  double t828;
  double t845;
  double t1017;
  double t1032;
  double t1035;
  double t1040;
  double t1050;
  double t1068;
  double t926;
  double t1155;
  double t1158;
  double t1180;
  double t1190;
  double t1191;
  double t1165;
  double t1199;
  double t1202;
  double t1214;
  double t1215;
  double t1216;
  t55 = Cos(var1[5]);
  t4 = Cos(var1[4]);
  t279 = Sin(var1[3]);
  t154 = Sin(var1[4]);
  t136 = Cos(var1[3]);
  t282 = Sin(var1[5]);
  t171 = t136*t55*t154;
  t529 = t279*t282;
  t660 = Sin(var1[9]);
  t598 = Cos(var1[9]);
  t674 = t55*t279*t154;
  t678 = -1.*t136*t282;
  t698 = t674 + t678;
  t770 = Cos(var1[10]);
  t735 = 0. + t171 + t529;
  t729 = Sin(var1[10]);
  t771 = -1.*t660;
  t781 = 0. + t771;
  t786 = t4*t55*t781;
  t793 = t598*t698;
  t795 = 0. + t786 + t793;
  t737 = t729*t735;
  t808 = t770*t795;
  t812 = 0. + t737 + t808;
  t815 = t770*t735;
  t817 = -1.*t729*t795;
  t819 = 0. + t815 + t817;
  t867 = Cos(var1[11]);
  t874 = 0. + t867;
  t825 = Sin(var1[11]);
  t601 = 0. + t598;
  t946 = -1.*t55*t279;
  t953 = t136*t154*t282;
  t975 = t136*t55;
  t976 = t279*t154*t282;
  t984 = t975 + t976;
  t1005 = 0. + t946 + t953;
  t1018 = t4*t781*t282;
  t1025 = t598*t984;
  t1030 = 0. + t1018 + t1025;
  t828 = -1.*t825;
  t845 = 0. + t828;
  t1017 = t729*t1005;
  t1032 = t770*t1030;
  t1035 = 0. + t1017 + t1032;
  t1040 = t770*t1005;
  t1050 = -1.*t729*t1030;
  t1068 = 0. + t1040 + t1050;
  t926 = 0. + t825;
  t1155 = t136*t4;
  t1158 = 0. + t1155;
  t1180 = t598*t4*t279;
  t1190 = -1.*t781*t154;
  t1191 = 0. + t1180 + t1190;
  t1165 = t1158*t729;
  t1199 = t770*t1191;
  t1202 = 0. + t1165 + t1199;
  t1214 = t770*t1158;
  t1215 = -1.*t729*t1191;
  t1216 = 0. + t1214 + t1215;
  p_output1[0]=0.2429*(t171 + t529) + 0.0817*t4*t55 + 0.035199999999999995*(0. + t4*t55*t601 + t660*t698) - 0.2083*t812 - 0.1422*t819 - 0.02*(0. + t812*t845 + t819*t874) - 0.16*(0. + t812*t874 + t819*t926) + var1[0];
  p_output1[1]=-0.2083*t1035 - 0.1422*t1068 + 0.0817*t282*t4 - 0.02*(0. + t1035*t845 + t1068*t874) - 0.16*(0. + t1035*t874 + t1068*t926) + 0.2429*(t946 + t953) + 0.035199999999999995*(0. + t282*t4*t601 + t660*t984) + var1[1];
  p_output1[2]=-0.2083*t1202 - 0.1422*t1216 - 0.0817*t154 + 0.2429*t136*t4 + 0.035199999999999995*(0. - 1.*t154*t601 + t279*t4*t660) - 0.02*(0. + t1202*t845 + t1216*t874) - 0.16*(0. + t1202*t874 + t1216*t926) + var1[2];
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
