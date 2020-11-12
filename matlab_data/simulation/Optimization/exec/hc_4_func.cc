/*
 * Automatically Generated from Mathematica.
 * Mon 29 Jul 2019 15:08:46 GMT-04:00
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
  double t885;
  double t553;
  double t1038;
  double t977;
  double t914;
  double t1078;
  double t1015;
  double t1086;
  double t1321;
  double t1215;
  double t1332;
  double t1358;
  double t1381;
  double t1455;
  double t1436;
  double t1429;
  double t1515;
  double t1535;
  double t1580;
  double t1601;
  double t1628;
  double t1446;
  double t1642;
  double t1643;
  double t1654;
  double t1659;
  double t1684;
  double t1761;
  double t1809;
  double t1728;
  double t1228;
  double t1921;
  double t1924;
  double t1949;
  double t1953;
  double t1961;
  double t2009;
  double t2029;
  double t2037;
  double t2040;
  double t1731;
  double t1750;
  double t2012;
  double t2041;
  double t2060;
  double t2071;
  double t2076;
  double t2079;
  double t1852;
  double t2201;
  double t2203;
  double t2213;
  double t2218;
  double t2220;
  double t2208;
  double t2230;
  double t2231;
  double t2237;
  double t2242;
  double t2244;
  double t2252;
  double t2254;
  double t2261;
  double t2279;
  double t2283;
  double t2284;
  double t1250;
  double t1389;
  double t1390;
  double t1948;
  double t1968;
  double t1969;
  t885 = Cos(var1[5]);
  t553 = Cos(var1[4]);
  t1038 = Sin(var1[3]);
  t977 = Sin(var1[4]);
  t914 = Cos(var1[3]);
  t1078 = Sin(var1[5]);
  t1015 = t914*t885*t977;
  t1086 = t1038*t1078;
  t1321 = Sin(var1[15]);
  t1215 = Cos(var1[15]);
  t1332 = t885*t1038*t977;
  t1358 = -1.*t914*t1078;
  t1381 = t1332 + t1358;
  t1455 = Cos(var1[16]);
  t1436 = 0. + t1015 + t1086;
  t1429 = Sin(var1[16]);
  t1515 = -1.*t1321;
  t1535 = 0. + t1515;
  t1580 = t553*t885*t1535;
  t1601 = t1215*t1381;
  t1628 = 0. + t1580 + t1601;
  t1446 = t1429*t1436;
  t1642 = t1455*t1628;
  t1643 = 0. + t1446 + t1642;
  t1654 = t1455*t1436;
  t1659 = -1.*t1429*t1628;
  t1684 = 0. + t1654 + t1659;
  t1761 = Cos(var1[17]);
  t1809 = 0. + t1761;
  t1728 = Sin(var1[17]);
  t1228 = 0. + t1215;
  t1921 = -1.*t885*t1038;
  t1924 = t914*t977*t1078;
  t1949 = t914*t885;
  t1953 = t1038*t977*t1078;
  t1961 = t1949 + t1953;
  t2009 = 0. + t1921 + t1924;
  t2029 = t553*t1535*t1078;
  t2037 = t1215*t1961;
  t2040 = 0. + t2029 + t2037;
  t1731 = -1.*t1728;
  t1750 = 0. + t1731;
  t2012 = t1429*t2009;
  t2041 = t1455*t2040;
  t2060 = 0. + t2012 + t2041;
  t2071 = t1455*t2009;
  t2076 = -1.*t1429*t2040;
  t2079 = 0. + t2071 + t2076;
  t1852 = 0. + t1728;
  t2201 = t914*t553;
  t2203 = 0. + t2201;
  t2213 = t1215*t553*t1038;
  t2218 = -1.*t1535*t977;
  t2220 = 0. + t2213 + t2218;
  t2208 = t2203*t1429;
  t2230 = t1455*t2220;
  t2231 = 0. + t2208 + t2230;
  t2237 = t1455*t2203;
  t2242 = -1.*t1429*t2220;
  t2244 = 0. + t2237 + t2242;
  t2252 = t1750*t2231;
  t2254 = t1809*t2244;
  t2261 = 0. + t2252 + t2254;
  t2279 = t1809*t2231;
  t2283 = t1852*t2244;
  t2284 = 0. + t2279 + t2283;
  t1250 = t1228*t553*t885;
  t1389 = t1321*t1381;
  t1390 = 0. + t1250 + t1389;
  t1948 = t1228*t553*t1078;
  t1968 = t1321*t1961;
  t1969 = 0. + t1948 + t1968;
  p_output1[0]=var1[0];
  p_output1[1]=var1[1];
  p_output1[2]=var1[2];
  p_output1[3]=-0.1944*(t1015 + t1086) + 0.0329*t1390 - 0.2083*t1643 - 0.1422*t1684 - 0.02*(0. + t1643*t1750 + t1684*t1809) - 0.16*(0. + t1643*t1809 + t1684*t1852) + 0.0817*t553*t885 + var1[0];
  p_output1[4]=-0.1944*(t1921 + t1924) + 0.0329*t1969 - 0.2083*t2060 - 0.1422*t2079 - 0.02*(0. + t1750*t2060 + t1809*t2079) - 0.16*(0. + t1809*t2060 + t1852*t2079) + 0.0817*t1078*t553 + var1[1];
  p_output1[5]=-0.2083*t2231 - 0.1422*t2244 - 0.02*t2261 - 0.16*t2284 - 0.1944*t553*t914 - 0.0817*t977 + 0.0329*(0. + t1038*t1321*t553 - 1.*t1228*t977) + var1[2];
  p_output1[6]=ArcTan(t2261,t2284);
  p_output1[7]=ArcTan(Sqrt(Power(t2261,2) + Power(t2284,2)),0. - 1.*t1038*t1321*t553 + t1228*t977);
  p_output1[8]=ArcTan(t1390,t1969);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "hc_4_func.hh"

namespace SymFunction
{

void hc_4_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
