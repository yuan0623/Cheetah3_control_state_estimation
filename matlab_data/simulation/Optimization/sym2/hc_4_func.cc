/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 21:22:58 GMT-05:00
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
  double t10;
  double t6;
  double t1671;
  double t1306;
  double t612;
  double t1715;
  double t1596;
  double t1718;
  double t1803;
  double t1759;
  double t1807;
  double t1814;
  double t1850;
  double t1910;
  double t1874;
  double t1871;
  double t1911;
  double t1918;
  double t1934;
  double t1969;
  double t1992;
  double t1877;
  double t1995;
  double t1996;
  double t2001;
  double t2004;
  double t2006;
  double t2033;
  double t2051;
  double t2018;
  double t1786;
  double t2115;
  double t2119;
  double t2143;
  double t2144;
  double t2183;
  double t2200;
  double t2249;
  double t2250;
  double t2256;
  double t2021;
  double t2028;
  double t2204;
  double t2257;
  double t2263;
  double t2272;
  double t2273;
  double t2278;
  double t2099;
  double t2364;
  double t2371;
  double t2380;
  double t2400;
  double t2401;
  double t2379;
  double t2402;
  double t2403;
  double t2417;
  double t2419;
  double t2421;
  t10 = Cos(var1[5]);
  t6 = Cos(var1[4]);
  t1671 = Sin(var1[3]);
  t1306 = Sin(var1[4]);
  t612 = Cos(var1[3]);
  t1715 = Sin(var1[5]);
  t1596 = t612*t10*t1306;
  t1718 = t1671*t1715;
  t1803 = Sin(var1[15]);
  t1759 = Cos(var1[15]);
  t1807 = t10*t1671*t1306;
  t1814 = -1.*t612*t1715;
  t1850 = t1807 + t1814;
  t1910 = Cos(var1[16]);
  t1874 = 0. + t1596 + t1718;
  t1871 = Sin(var1[16]);
  t1911 = -1.*t1803;
  t1918 = 0. + t1911;
  t1934 = t6*t10*t1918;
  t1969 = t1759*t1850;
  t1992 = 0. + t1934 + t1969;
  t1877 = t1871*t1874;
  t1995 = t1910*t1992;
  t1996 = 0. + t1877 + t1995;
  t2001 = t1910*t1874;
  t2004 = -1.*t1871*t1992;
  t2006 = 0. + t2001 + t2004;
  t2033 = Cos(var1[17]);
  t2051 = 0. + t2033;
  t2018 = Sin(var1[17]);
  t1786 = 0. + t1759;
  t2115 = -1.*t10*t1671;
  t2119 = t612*t1306*t1715;
  t2143 = t612*t10;
  t2144 = t1671*t1306*t1715;
  t2183 = t2143 + t2144;
  t2200 = 0. + t2115 + t2119;
  t2249 = t6*t1918*t1715;
  t2250 = t1759*t2183;
  t2256 = 0. + t2249 + t2250;
  t2021 = -1.*t2018;
  t2028 = 0. + t2021;
  t2204 = t1871*t2200;
  t2257 = t1910*t2256;
  t2263 = 0. + t2204 + t2257;
  t2272 = t1910*t2200;
  t2273 = -1.*t1871*t2256;
  t2278 = 0. + t2272 + t2273;
  t2099 = 0. + t2018;
  t2364 = t612*t6;
  t2371 = 0. + t2364;
  t2380 = t1759*t6*t1671;
  t2400 = -1.*t1918*t1306;
  t2401 = 0. + t2380 + t2400;
  t2379 = t2371*t1871;
  t2402 = t1910*t2401;
  t2403 = 0. + t2379 + t2402;
  t2417 = t1910*t2371;
  t2419 = -1.*t1871*t2401;
  t2421 = 0. + t2417 + t2419;
  p_output1[0]=var1[0];
  p_output1[1]=var1[1];
  p_output1[2]=var1[2];
  p_output1[3]=var1[3];
  p_output1[4]=var1[4];
  p_output1[5]=var1[5];
  p_output1[6]=-0.1944*(t1596 + t1718) - 0.2083*t1996 - 0.1422*t2006 - 0.02*(0. + t1996*t2028 + t2006*t2051) - 0.16*(0. + t1996*t2051 + t2006*t2099) + 0.0817*t10*t6 + 0.035199999999999995*(0. + t1803*t1850 + t10*t1786*t6) + var1[0];
  p_output1[7]=-0.1944*(t2115 + t2119) - 0.2083*t2263 - 0.1422*t2278 - 0.02*(0. + t2028*t2263 + t2051*t2278) - 0.16*(0. + t2051*t2263 + t2099*t2278) + 0.0817*t1715*t6 + 0.035199999999999995*(0. + t1803*t2183 + t1715*t1786*t6) + var1[1];
  p_output1[8]=-0.0817*t1306 - 0.2083*t2403 - 0.1422*t2421 - 0.02*(0. + t2028*t2403 + t2051*t2421) - 0.16*(0. + t2051*t2403 + t2099*t2421) + 0.035199999999999995*(0. - 1.*t1306*t1786 + t1671*t1803*t6) - 0.1944*t6*t612 + var1[2];
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
