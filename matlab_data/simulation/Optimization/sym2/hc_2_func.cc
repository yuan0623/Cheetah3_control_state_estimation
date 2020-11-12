/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 21:22:53 GMT-05:00
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
  double t449;
  double t240;
  double t1412;
  double t1222;
  double t1093;
  double t1415;
  double t1306;
  double t1442;
  double t1669;
  double t1597;
  double t1671;
  double t1676;
  double t1701;
  double t1759;
  double t1749;
  double t1741;
  double t1763;
  double t1770;
  double t1771;
  double t1772;
  double t1753;
  double t1776;
  double t1786;
  double t1803;
  double t1804;
  double t1807;
  double t1852;
  double t1855;
  double t1838;
  double t1606;
  double t1937;
  double t1969;
  double t1995;
  double t1996;
  double t1998;
  double t2006;
  double t2018;
  double t2021;
  double t2026;
  double t1839;
  double t1846;
  double t2017;
  double t2028;
  double t2030;
  double t2033;
  double t2041;
  double t2051;
  double t1874;
  double t2133;
  double t2134;
  double t2144;
  double t2158;
  double t2179;
  double t2143;
  double t2183;
  double t2189;
  double t2194;
  double t2198;
  double t2200;
  t449 = Cos(var1[5]);
  t240 = Cos(var1[4]);
  t1412 = Sin(var1[3]);
  t1222 = Sin(var1[4]);
  t1093 = Cos(var1[3]);
  t1415 = Sin(var1[5]);
  t1306 = t1093*t449*t1222;
  t1442 = t1412*t1415;
  t1669 = Sin(var1[12]);
  t1597 = Cos(var1[12]);
  t1671 = t449*t1412*t1222;
  t1676 = -1.*t1093*t1415;
  t1701 = t1671 + t1676;
  t1759 = Cos(var1[13]);
  t1749 = 0. + t1306 + t1442;
  t1741 = Sin(var1[13]);
  t1763 = 0. + t1669;
  t1770 = t240*t449*t1763;
  t1771 = t1597*t1701;
  t1772 = 0. + t1770 + t1771;
  t1753 = t1741*t1749;
  t1776 = t1759*t1772;
  t1786 = 0. + t1753 + t1776;
  t1803 = t1759*t1749;
  t1804 = -1.*t1741*t1772;
  t1807 = 0. + t1803 + t1804;
  t1852 = Cos(var1[14]);
  t1855 = 0. + t1852;
  t1838 = Sin(var1[14]);
  t1606 = 0. + t1597;
  t1937 = -1.*t449*t1412;
  t1969 = t1093*t1222*t1415;
  t1995 = t1093*t449;
  t1996 = t1412*t1222*t1415;
  t1998 = t1995 + t1996;
  t2006 = 0. + t1937 + t1969;
  t2018 = t240*t1763*t1415;
  t2021 = t1597*t1998;
  t2026 = 0. + t2018 + t2021;
  t1839 = -1.*t1838;
  t1846 = 0. + t1839;
  t2017 = t1741*t2006;
  t2028 = t1759*t2026;
  t2030 = 0. + t2017 + t2028;
  t2033 = t1759*t2006;
  t2041 = -1.*t1741*t2026;
  t2051 = 0. + t2033 + t2041;
  t1874 = 0. + t1838;
  t2133 = t1093*t240;
  t2134 = 0. + t2133;
  t2144 = t1597*t240*t1412;
  t2158 = -1.*t1763*t1222;
  t2179 = 0. + t2144 + t2158;
  t2143 = t2134*t1741;
  t2183 = t1759*t2179;
  t2189 = 0. + t2143 + t2183;
  t2194 = t1759*t2134;
  t2198 = -1.*t1741*t2179;
  t2200 = 0. + t2194 + t2198;
  p_output1[0]=var1[0];
  p_output1[1]=var1[1];
  p_output1[2]=var1[2];
  p_output1[3]=var1[3];
  p_output1[4]=var1[4];
  p_output1[5]=var1[5];
  p_output1[6]=-0.1944*(t1306 + t1442) - 0.2083*t1786 - 0.1422*t1807 - 0.02*(0. + t1786*t1846 + t1807*t1855) - 0.16*(0. + t1786*t1855 + t1807*t1874) - 0.0817*t240*t449 - 0.0329*(0. - 1.*t1669*t1701 + t1606*t240*t449) + var1[0];
  p_output1[7]=-0.1944*(t1937 + t1969) - 0.2083*t2030 - 0.1422*t2051 - 0.02*(0. + t1846*t2030 + t1855*t2051) - 0.16*(0. + t1855*t2030 + t1874*t2051) - 0.0817*t1415*t240 - 0.0329*(0. - 1.*t1669*t1998 + t1415*t1606*t240) + var1[1];
  p_output1[8]=0.0817*t1222 - 0.2083*t2189 - 0.1422*t2200 - 0.02*(0. + t1846*t2189 + t1855*t2200) - 0.16*(0. + t1855*t2189 + t1874*t2200) - 0.1944*t1093*t240 - 0.0329*(0. - 1.*t1222*t1606 - 1.*t1412*t1669*t240) + var1[2];
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

#include "hc_2_func.hh"

namespace SymFunction
{

void hc_2_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
