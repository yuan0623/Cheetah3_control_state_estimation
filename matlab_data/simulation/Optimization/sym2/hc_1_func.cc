/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 21:22:51 GMT-05:00
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
  double t251;
  double t240;
  double t1111;
  double t1020;
  double t961;
  double t1142;
  double t1093;
  double t1222;
  double t1476;
  double t1415;
  double t1535;
  double t1580;
  double t1596;
  double t1676;
  double t1669;
  double t1664;
  double t1678;
  double t1681;
  double t1701;
  double t1715;
  double t1716;
  double t1671;
  double t1718;
  double t1725;
  double t1749;
  double t1751;
  double t1753;
  double t1771;
  double t1772;
  double t1760;
  double t1429;
  double t1849;
  double t1850;
  double t1869;
  double t1870;
  double t1871;
  double t1910;
  double t1918;
  double t1937;
  double t1966;
  double t1761;
  double t1763;
  double t1911;
  double t1969;
  double t1970;
  double t1992;
  double t1993;
  double t1995;
  double t1804;
  double t2066;
  double t2068;
  double t2072;
  double t2094;
  double t2095;
  double t2071;
  double t2097;
  double t2099;
  double t2103;
  double t2105;
  double t2107;
  t251 = Cos(var1[5]);
  t240 = Cos(var1[4]);
  t1111 = Sin(var1[3]);
  t1020 = Sin(var1[4]);
  t961 = Cos(var1[3]);
  t1142 = Sin(var1[5]);
  t1093 = t961*t251*t1020;
  t1222 = t1111*t1142;
  t1476 = Sin(var1[9]);
  t1415 = Cos(var1[9]);
  t1535 = t251*t1111*t1020;
  t1580 = -1.*t961*t1142;
  t1596 = t1535 + t1580;
  t1676 = Cos(var1[10]);
  t1669 = 0. + t1093 + t1222;
  t1664 = Sin(var1[10]);
  t1678 = -1.*t1476;
  t1681 = 0. + t1678;
  t1701 = t240*t251*t1681;
  t1715 = t1415*t1596;
  t1716 = 0. + t1701 + t1715;
  t1671 = t1664*t1669;
  t1718 = t1676*t1716;
  t1725 = 0. + t1671 + t1718;
  t1749 = t1676*t1669;
  t1751 = -1.*t1664*t1716;
  t1753 = 0. + t1749 + t1751;
  t1771 = Cos(var1[11]);
  t1772 = 0. + t1771;
  t1760 = Sin(var1[11]);
  t1429 = 0. + t1415;
  t1849 = -1.*t251*t1111;
  t1850 = t961*t1020*t1142;
  t1869 = t961*t251;
  t1870 = t1111*t1020*t1142;
  t1871 = t1869 + t1870;
  t1910 = 0. + t1849 + t1850;
  t1918 = t240*t1681*t1142;
  t1937 = t1415*t1871;
  t1966 = 0. + t1918 + t1937;
  t1761 = -1.*t1760;
  t1763 = 0. + t1761;
  t1911 = t1664*t1910;
  t1969 = t1676*t1966;
  t1970 = 0. + t1911 + t1969;
  t1992 = t1676*t1910;
  t1993 = -1.*t1664*t1966;
  t1995 = 0. + t1992 + t1993;
  t1804 = 0. + t1760;
  t2066 = t961*t240;
  t2068 = 0. + t2066;
  t2072 = t1415*t240*t1111;
  t2094 = -1.*t1681*t1020;
  t2095 = 0. + t2072 + t2094;
  t2071 = t2068*t1664;
  t2097 = t1676*t2095;
  t2099 = 0. + t2071 + t2097;
  t2103 = t1676*t2068;
  t2105 = -1.*t1664*t2095;
  t2107 = 0. + t2103 + t2105;
  p_output1[0]=var1[0];
  p_output1[1]=var1[1];
  p_output1[2]=var1[2];
  p_output1[3]=var1[3];
  p_output1[4]=var1[4];
  p_output1[5]=var1[5];
  p_output1[6]=0.2429*(t1093 + t1222) - 0.2083*t1725 - 0.1422*t1753 - 0.02*(0. + t1725*t1763 + t1753*t1772) - 0.16*(0. + t1725*t1772 + t1753*t1804) + 0.0817*t240*t251 + 0.035199999999999995*(0. + t1476*t1596 + t1429*t240*t251) + var1[0];
  p_output1[7]=0.2429*(t1849 + t1850) - 0.2083*t1970 - 0.1422*t1995 - 0.02*(0. + t1763*t1970 + t1772*t1995) - 0.16*(0. + t1772*t1970 + t1804*t1995) + 0.0817*t1142*t240 + 0.035199999999999995*(0. + t1476*t1871 + t1142*t1429*t240) + var1[1];
  p_output1[8]=-0.0817*t1020 - 0.2083*t2099 - 0.1422*t2107 - 0.02*(0. + t1763*t2099 + t1772*t2107) - 0.16*(0. + t1772*t2099 + t1804*t2107) + 0.035199999999999995*(0. - 1.*t1020*t1429 + t1111*t1476*t240) + 0.2429*t240*t961 + var1[2];
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

#include "hc_1_func.hh"

namespace SymFunction
{

void hc_1_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
