/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 13:00:40 GMT-05:00
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
  double t861;
  double t1032;
  double t1047;
  double t1077;
  double t1087;
  double t1156;
  double t1169;
  double t1202;
  double t428;
  double t1251;
  double t1208;
  double t1262;
  double t1286;
  double t1297;
  double t1377;
  double t1380;
  double t1387;
  double t1392;
  double t1418;
  double t1420;
  double t1430;
  double t1434;
  double t1438;
  double t1447;
  double t1449;
  double t1453;
  double t1224;
  double t1621;
  double t1624;
  double t1663;
  double t1690;
  double t1704;
  double t1710;
  double t1486;
  double t1532;
  double t1731;
  double t1732;
  double t1743;
  double t1747;
  double t1797;
  double t1806;
  double t1813;
  double t1815;
  double t1568;
  double t1966;
  double t1971;
  double t1972;
  double t2011;
  double t2033;
  double t2064;
  double t2067;
  double t2069;
  t861 = Cos(var1[5]);
  t1032 = Sin(var1[3]);
  t1047 = Sin(var1[4]);
  t1077 = t861*t1032*t1047;
  t1087 = Cos(var1[3]);
  t1156 = Sin(var1[5]);
  t1169 = -1.*t1087*t1156;
  t1202 = t1077 + t1169;
  t428 = Cos(var1[4]);
  t1251 = Sin(var1[15]);
  t1208 = Cos(var1[15]);
  t1262 = t1087*t861*t1047;
  t1286 = t1032*t1156;
  t1297 = t1262 + t1286;
  t1377 = t428*t861;
  t1380 = 0. + t1377;
  t1387 = Sin(var1[16]);
  t1392 = t1380*t1387;
  t1418 = Cos(var1[16]);
  t1420 = -1.*t1251;
  t1430 = 0. + t1420;
  t1434 = t1430*t1202;
  t1438 = t1208*t1297;
  t1447 = 0. + t1434 + t1438;
  t1449 = t1418*t1447;
  t1453 = 0. + t1392 + t1449;
  t1224 = 0. + t1208;
  t1621 = t1087*t861;
  t1624 = t1032*t1047*t1156;
  t1663 = t1621 + t1624;
  t1690 = -1.*t861*t1032;
  t1704 = t1087*t1047*t1156;
  t1710 = t1690 + t1704;
  t1486 = Cos(var1[17]);
  t1532 = 0. + t1486;
  t1731 = t428*t1156;
  t1732 = 0. + t1731;
  t1743 = t1387*t1732;
  t1747 = t1208*t1710;
  t1797 = t1430*t1663;
  t1806 = 0. + t1747 + t1797;
  t1813 = t1418*t1806;
  t1815 = 0. + t1743 + t1813;
  t1568 = Sin(var1[17]);
  t1966 = t1208*t1087*t428;
  t1971 = t428*t1430*t1032;
  t1972 = 0. + t1966 + t1971;
  t2011 = -1.*t1047;
  t2033 = 0. + t2011;
  t2064 = t1418*t1972;
  t2067 = t1387*t2033;
  t2069 = 0. + t2064 + t2067;
  p_output1[0]=var1[0];
  p_output1[1]=var1[1];
  p_output1[2]=var1[2];
  p_output1[3]=var1[3];
  p_output1[4]=var1[4];
  p_output1[5]=var1[5];
  p_output1[6]=0.0875*t1202 + 0.037*(0. + t1202*t1224 + t1251*t1297) - 0.25*t1453 - 0.27*(t1453*t1532 + (0. + t1380*t1418 - 1.*t1387*t1447)*t1568) - 0.21935*t428*t861 + var1[0];
  p_output1[7]=0.0875*t1663 + 0.037*(0. + t1224*t1663 + t1251*t1710) - 0.25*t1815 - 0.27*(t1568*(0. + t1418*t1732 - 1.*t1387*t1806) + t1532*t1815) - 0.21935*t1156*t428 + var1[1];
  p_output1[8]=0.21935*t1047 - 0.25*t2069 - 0.27*(t1568*(0. - 1.*t1387*t1972 + t1418*t2033) + t1532*t2069) + 0.0875*t1032*t428 + 0.037*(0. + t1032*t1224*t428 + t1087*t1251*t428) + var1[2];
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
