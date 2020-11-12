/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 21:22:55 GMT-05:00
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
  double t642;
  double t496;
  double t1597;
  double t1535;
  double t1442;
  double t1651;
  double t1725;
  double t1759;
  double t1770;
  double t1771;
  double t1776;
  double t1596;
  double t1671;
  double t1807;
  double t1867;
  double t1814;
  double t1846;
  double t1850;
  double t1852;
  double t1869;
  double t1877;
  double t1879;
  double t1910;
  double t1855;
  double t1870;
  double t1871;
  double t1918;
  double t1934;
  double t1970;
  double t1749;
  double t2068;
  double t2071;
  double t2072;
  double t2030;
  double t2031;
  double t2114;
  double t2103;
  double t2107;
  double t2108;
  double t2132;
  double t2133;
  double t2134;
  double t2110;
  double t2115;
  double t2119;
  double t1972;
  double t1992;
  double t2004;
  double t2296;
  double t2299;
  double t2278;
  double t2280;
  double t2291;
  double t2319;
  double t2320;
  double t2321;
  double t2294;
  double t2300;
  double t2301;
  t642 = Cos(var1[5]);
  t496 = Cos(var1[4]);
  t1597 = Sin(var1[3]);
  t1535 = Sin(var1[4]);
  t1442 = Cos(var1[3]);
  t1651 = Sin(var1[5]);
  t1725 = Cos(var1[6]);
  t1759 = t642*t1597*t1535;
  t1770 = -1.*t1442*t1651;
  t1771 = t1759 + t1770;
  t1776 = Sin(var1[6]);
  t1596 = t1442*t642*t1535;
  t1671 = t1597*t1651;
  t1807 = Cos(var1[7]);
  t1867 = 0. + t1596 + t1671;
  t1814 = t1725*t1771;
  t1846 = 0. + t1776;
  t1850 = t496*t642*t1846;
  t1852 = 0. + t1814 + t1850;
  t1869 = Sin(var1[7]);
  t1877 = t1807*t1867;
  t1879 = -1.*t1852*t1869;
  t1910 = 0. + t1877 + t1879;
  t1855 = t1807*t1852;
  t1870 = t1867*t1869;
  t1871 = 0. + t1855 + t1870;
  t1918 = Cos(var1[8]);
  t1934 = 0. + t1918;
  t1970 = Sin(var1[8]);
  t1749 = 0. + t1725;
  t2068 = t1442*t642;
  t2071 = t1597*t1535*t1651;
  t2072 = t2068 + t2071;
  t2030 = -1.*t642*t1597;
  t2031 = t1442*t1535*t1651;
  t2114 = 0. + t2030 + t2031;
  t2103 = t1725*t2072;
  t2107 = t496*t1651*t1846;
  t2108 = 0. + t2103 + t2107;
  t2132 = t1807*t2114;
  t2133 = -1.*t2108*t1869;
  t2134 = 0. + t2132 + t2133;
  t2110 = t1807*t2108;
  t2115 = t2114*t1869;
  t2119 = 0. + t2110 + t2115;
  t1972 = -1.*t1970;
  t1992 = 0. + t1972;
  t2004 = 0. + t1970;
  t2296 = t1442*t496;
  t2299 = 0. + t2296;
  t2278 = t496*t1725*t1597;
  t2280 = -1.*t1535*t1846;
  t2291 = 0. + t2278 + t2280;
  t2319 = t2299*t1807;
  t2320 = -1.*t2291*t1869;
  t2321 = 0. + t2319 + t2320;
  t2294 = t1807*t2291;
  t2300 = t2299*t1869;
  t2301 = 0. + t2294 + t2300;
  p_output1[0]=var1[0];
  p_output1[1]=var1[1];
  p_output1[2]=var1[2];
  p_output1[3]=var1[3];
  p_output1[4]=var1[4];
  p_output1[5]=var1[5];
  p_output1[6]=0.2429*(t1596 + t1671) - 0.2083*t1871 - 0.1422*t1910 - 0.02*(0. + t1910*t1934 + t1871*t1992) - 0.16*(0. + t1871*t1934 + t1910*t2004) - 0.0817*t496*t642 - 0.0329*(0. - 1.*t1771*t1776 + t1749*t496*t642) + var1[0];
  p_output1[7]=0.2429*(t2030 + t2031) - 0.2083*t2119 - 0.1422*t2134 - 0.02*(0. + t1992*t2119 + t1934*t2134) - 0.16*(0. + t1934*t2119 + t2004*t2134) - 0.0817*t1651*t496 - 0.0329*(0. - 1.*t1776*t2072 + t1651*t1749*t496) + var1[1];
  p_output1[8]=0.0817*t1535 - 0.2083*t2301 - 0.1422*t2321 - 0.02*(0. + t1992*t2301 + t1934*t2321) - 0.16*(0. + t1934*t2301 + t2004*t2321) + 0.2429*t1442*t496 - 0.0329*(0. - 1.*t1535*t1749 - 1.*t1597*t1776*t496) + var1[2];
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

#include "hc_3_func.hh"

namespace SymFunction
{

void hc_3_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
