/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 13:00:36 GMT-05:00
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
  double t577;
  double t743;
  double t861;
  double t872;
  double t904;
  double t950;
  double t967;
  double t1019;
  double t428;
  double t1060;
  double t1051;
  double t1077;
  double t1087;
  double t1156;
  double t1240;
  double t1251;
  double t1261;
  double t1262;
  double t1286;
  double t1291;
  double t1297;
  double t1303;
  double t1306;
  double t1318;
  double t1342;
  double t1345;
  double t1057;
  double t1453;
  double t1484;
  double t1486;
  double t1548;
  double t1557;
  double t1568;
  double t1377;
  double t1380;
  double t1581;
  double t1582;
  double t1589;
  double t1597;
  double t1598;
  double t1611;
  double t1621;
  double t1624;
  double t1388;
  double t1797;
  double t1806;
  double t1812;
  double t1815;
  double t1823;
  double t1903;
  double t1913;
  double t1914;
  t577 = Cos(var1[5]);
  t743 = Sin(var1[3]);
  t861 = Sin(var1[4]);
  t872 = t577*t743*t861;
  t904 = Cos(var1[3]);
  t950 = Sin(var1[5]);
  t967 = -1.*t904*t950;
  t1019 = t872 + t967;
  t428 = Cos(var1[4]);
  t1060 = Sin(var1[12]);
  t1051 = Cos(var1[12]);
  t1077 = t904*t577*t861;
  t1087 = t743*t950;
  t1156 = t1077 + t1087;
  t1240 = t428*t577;
  t1251 = 0. + t1240;
  t1261 = Sin(var1[13]);
  t1262 = t1251*t1261;
  t1286 = Cos(var1[13]);
  t1291 = -1.*t1060;
  t1297 = 0. + t1291;
  t1303 = t1297*t1019;
  t1306 = t1051*t1156;
  t1318 = 0. + t1303 + t1306;
  t1342 = t1286*t1318;
  t1345 = 0. + t1262 + t1342;
  t1057 = 0. + t1051;
  t1453 = t904*t577;
  t1484 = t743*t861*t950;
  t1486 = t1453 + t1484;
  t1548 = -1.*t577*t743;
  t1557 = t904*t861*t950;
  t1568 = t1548 + t1557;
  t1377 = Cos(var1[14]);
  t1380 = 0. + t1377;
  t1581 = t428*t950;
  t1582 = 0. + t1581;
  t1589 = t1261*t1582;
  t1597 = t1051*t1568;
  t1598 = t1297*t1486;
  t1611 = 0. + t1597 + t1598;
  t1621 = t1286*t1611;
  t1624 = 0. + t1589 + t1621;
  t1388 = Sin(var1[14]);
  t1797 = t1051*t904*t428;
  t1806 = t428*t1297*t743;
  t1812 = 0. + t1797 + t1806;
  t1815 = -1.*t861;
  t1823 = 0. + t1815;
  t1903 = t1286*t1812;
  t1913 = t1261*t1823;
  t1914 = 0. + t1903 + t1913;
  p_output1[0]=var1[0];
  p_output1[1]=var1[1];
  p_output1[2]=var1[2];
  p_output1[3]=var1[3];
  p_output1[4]=var1[4];
  p_output1[5]=var1[5];
  p_output1[6]=-0.0875*t1019 - 0.037*(0. + t1019*t1057 + t1060*t1156) - 0.25*t1345 - 0.27*(t1345*t1380 + (0. + t1251*t1286 - 1.*t1261*t1318)*t1388) - 0.21935*t428*t577 + var1[0];
  p_output1[7]=-0.0875*t1486 - 0.037*(0. + t1057*t1486 + t1060*t1568) - 0.25*t1624 - 0.27*(t1388*(0. + t1286*t1582 - 1.*t1261*t1611) + t1380*t1624) - 0.21935*t428*t950 + var1[1];
  p_output1[8]=-0.25*t1914 - 0.27*(t1388*(0. - 1.*t1261*t1812 + t1286*t1823) + t1380*t1914) - 0.0875*t428*t743 + 0.21935*t861 - 0.037*(0. + t1057*t428*t743 + t1060*t428*t904) + var1[2];
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
