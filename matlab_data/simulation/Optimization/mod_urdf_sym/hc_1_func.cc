/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 13:00:34 GMT-05:00
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
  double t491;
  double t680;
  double t716;
  double t743;
  double t747;
  double t777;
  double t859;
  double t861;
  double t428;
  double t991;
  double t904;
  double t1019;
  double t1047;
  double t1051;
  double t1077;
  double t1087;
  double t1129;
  double t1156;
  double t1208;
  double t1217;
  double t1224;
  double t1232;
  double t1240;
  double t1244;
  double t1251;
  double t1261;
  double t950;
  double t1388;
  double t1392;
  double t1418;
  double t1426;
  double t1430;
  double t1434;
  double t1286;
  double t1291;
  double t1484;
  double t1486;
  double t1532;
  double t1548;
  double t1557;
  double t1563;
  double t1568;
  double t1571;
  double t1303;
  double t1703;
  double t1704;
  double t1705;
  double t1716;
  double t1720;
  double t1732;
  double t1743;
  double t1747;
  t491 = Cos(var1[5]);
  t680 = Sin(var1[3]);
  t716 = Sin(var1[4]);
  t743 = t491*t680*t716;
  t747 = Cos(var1[3]);
  t777 = Sin(var1[5]);
  t859 = -1.*t747*t777;
  t861 = t743 + t859;
  t428 = Cos(var1[4]);
  t991 = Sin(var1[9]);
  t904 = Cos(var1[9]);
  t1019 = t747*t491*t716;
  t1047 = t680*t777;
  t1051 = t1019 + t1047;
  t1077 = t428*t491;
  t1087 = 0. + t1077;
  t1129 = Sin(var1[10]);
  t1156 = t1087*t1129;
  t1208 = Cos(var1[10]);
  t1217 = -1.*t991;
  t1224 = 0. + t1217;
  t1232 = t1224*t861;
  t1240 = t904*t1051;
  t1244 = 0. + t1232 + t1240;
  t1251 = t1208*t1244;
  t1261 = 0. + t1156 + t1251;
  t950 = 0. + t904;
  t1388 = t747*t491;
  t1392 = t680*t716*t777;
  t1418 = t1388 + t1392;
  t1426 = -1.*t491*t680;
  t1430 = t747*t716*t777;
  t1434 = t1426 + t1430;
  t1286 = Cos(var1[11]);
  t1291 = 0. + t1286;
  t1484 = t428*t777;
  t1486 = 0. + t1484;
  t1532 = t1129*t1486;
  t1548 = t904*t1434;
  t1557 = t1224*t1418;
  t1563 = 0. + t1548 + t1557;
  t1568 = t1208*t1563;
  t1571 = 0. + t1532 + t1568;
  t1303 = Sin(var1[11]);
  t1703 = t904*t747*t428;
  t1704 = t428*t1224*t680;
  t1705 = 0. + t1703 + t1704;
  t1716 = -1.*t716;
  t1720 = 0. + t1716;
  t1732 = t1208*t1705;
  t1743 = t1129*t1720;
  t1747 = 0. + t1732 + t1743;
  p_output1[0]=var1[0];
  p_output1[1]=var1[1];
  p_output1[2]=var1[2];
  p_output1[3]=var1[3];
  p_output1[4]=var1[4];
  p_output1[5]=var1[5];
  p_output1[6]=-0.25*t1261 - 0.27*(t1261*t1291 + (0. + t1087*t1208 - 1.*t1129*t1244)*t1303) + 0.21935*t428*t491 + 0.0875*t861 + 0.037*(0. + t861*t950 + t1051*t991) + var1[0];
  p_output1[7]=0.0875*t1418 - 0.25*t1571 - 0.27*(t1303*(0. + t1208*t1486 - 1.*t1129*t1563) + t1291*t1571) + 0.21935*t428*t777 + 0.037*(0. + t1418*t950 + t1434*t991) + var1[1];
  p_output1[8]=-0.25*t1747 - 0.27*(t1303*(0. - 1.*t1129*t1705 + t1208*t1720) + t1291*t1747) + 0.0875*t428*t680 - 0.21935*t716 + 0.037*(0. + t428*t680*t950 + t428*t747*t991) + var1[2];
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
