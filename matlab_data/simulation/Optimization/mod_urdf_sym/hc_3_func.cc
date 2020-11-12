/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 13:00:38 GMT-05:00
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
  double t716;
  double t872;
  double t1019;
  double t1047;
  double t1051;
  double t1057;
  double t1058;
  double t1077;
  double t1156;
  double t1208;
  double t1224;
  double t1232;
  double t1240;
  double t428;
  double t1297;
  double t1303;
  double t1306;
  double t1342;
  double t1345;
  double t1360;
  double t1377;
  double t1380;
  double t1387;
  double t1388;
  double t1392;
  double t1418;
  double t1169;
  double t1573;
  double t1575;
  double t1576;
  double t1589;
  double t1597;
  double t1598;
  double t1430;
  double t1434;
  double t1686;
  double t1690;
  double t1703;
  double t1704;
  double t1710;
  double t1716;
  double t1720;
  double t1725;
  double t1484;
  double t1914;
  double t1916;
  double t1919;
  double t1920;
  double t1922;
  double t1927;
  double t1929;
  double t1941;
  t716 = Cos(var1[5]);
  t872 = Sin(var1[3]);
  t1019 = Sin(var1[4]);
  t1047 = t716*t872*t1019;
  t1051 = Cos(var1[3]);
  t1057 = Sin(var1[5]);
  t1058 = -1.*t1051*t1057;
  t1077 = t1047 + t1058;
  t1156 = Cos(var1[6]);
  t1208 = t1051*t716*t1019;
  t1224 = t872*t1057;
  t1232 = t1208 + t1224;
  t1240 = Sin(var1[6]);
  t428 = Cos(var1[4]);
  t1297 = Cos(var1[7]);
  t1303 = t1156*t1232;
  t1306 = -1.*t1240;
  t1342 = 0. + t1306;
  t1345 = t1077*t1342;
  t1360 = 0. + t1303 + t1345;
  t1377 = t1297*t1360;
  t1380 = t428*t716;
  t1387 = 0. + t1380;
  t1388 = Sin(var1[7]);
  t1392 = t1387*t1388;
  t1418 = 0. + t1377 + t1392;
  t1169 = 0. + t1156;
  t1573 = t1051*t716;
  t1575 = t872*t1019*t1057;
  t1576 = t1573 + t1575;
  t1589 = -1.*t716*t872;
  t1597 = t1051*t1019*t1057;
  t1598 = t1589 + t1597;
  t1430 = Cos(var1[8]);
  t1434 = 0. + t1430;
  t1686 = t1156*t1598;
  t1690 = t1576*t1342;
  t1703 = 0. + t1686 + t1690;
  t1704 = t1297*t1703;
  t1710 = t428*t1057;
  t1716 = 0. + t1710;
  t1720 = t1716*t1388;
  t1725 = 0. + t1704 + t1720;
  t1484 = Sin(var1[8]);
  t1914 = t1051*t428*t1156;
  t1916 = t428*t872*t1342;
  t1919 = 0. + t1914 + t1916;
  t1920 = t1297*t1919;
  t1922 = -1.*t1019;
  t1927 = 0. + t1922;
  t1929 = t1927*t1388;
  t1941 = 0. + t1920 + t1929;
  p_output1[0]=var1[0];
  p_output1[1]=var1[1];
  p_output1[2]=var1[2];
  p_output1[3]=var1[3];
  p_output1[4]=var1[4];
  p_output1[5]=var1[5];
  p_output1[6]=-0.0875*t1077 - 0.037*(0. + t1077*t1169 + t1232*t1240) - 0.25*t1418 - 0.27*(t1418*t1434 + (0. + t1297*t1387 - 1.*t1360*t1388)*t1484) + 0.21935*t428*t716 + var1[0];
  p_output1[7]=-0.0875*t1576 - 0.037*(0. + t1169*t1576 + t1240*t1598) - 0.25*t1725 - 0.27*(t1484*(0. - 1.*t1388*t1703 + t1297*t1716) + t1434*t1725) + 0.21935*t1057*t428 + var1[1];
  p_output1[8]=-0.21935*t1019 - 0.25*t1941 - 0.27*(t1484*(0. - 1.*t1388*t1919 + t1297*t1927) + t1434*t1941) - 0.0875*t428*t872 - 0.037*(0. + t1051*t1240*t428 + t1169*t428*t872) + var1[2];
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
