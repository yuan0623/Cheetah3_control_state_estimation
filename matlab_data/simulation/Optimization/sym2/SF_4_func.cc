/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 21:22:40 GMT-05:00
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
  double t706;
  double t674;
  double t840;
  double t813;
  double t812;
  double t859;
  double t819;
  double t910;
  double t966;
  double t933;
  double t975;
  double t984;
  double t989;
  double t1039;
  double t1032;
  double t1018;
  double t1072;
  double t1088;
  double t1090;
  double t1093;
  double t1098;
  double t1035;
  double t1099;
  double t1111;
  double t1126;
  double t1141;
  double t1142;
  double t1199;
  double t1207;
  double t1155;
  double t936;
  double t1278;
  double t1303;
  double t1327;
  double t1328;
  double t1329;
  double t1362;
  double t1394;
  double t1406;
  double t1410;
  double t1158;
  double t1165;
  double t1391;
  double t1412;
  double t1415;
  double t1429;
  double t1441;
  double t1442;
  double t1248;
  double t1539;
  double t1540;
  double t1563;
  double t1569;
  double t1570;
  double t1561;
  double t1576;
  double t1577;
  double t1581;
  double t1582;
  double t1583;
  t706 = Cos(var1[5]);
  t674 = Cos(var1[4]);
  t840 = Sin(var1[3]);
  t813 = Sin(var1[4]);
  t812 = Cos(var1[3]);
  t859 = Sin(var1[5]);
  t819 = t812*t706*t813;
  t910 = t840*t859;
  t966 = Sin(var1[15]);
  t933 = Cos(var1[15]);
  t975 = t706*t840*t813;
  t984 = -1.*t812*t859;
  t989 = t975 + t984;
  t1039 = Cos(var1[16]);
  t1032 = 0. + t819 + t910;
  t1018 = Sin(var1[16]);
  t1072 = -1.*t966;
  t1088 = 0. + t1072;
  t1090 = t674*t706*t1088;
  t1093 = t933*t989;
  t1098 = 0. + t1090 + t1093;
  t1035 = t1018*t1032;
  t1099 = t1039*t1098;
  t1111 = 0. + t1035 + t1099;
  t1126 = t1039*t1032;
  t1141 = -1.*t1018*t1098;
  t1142 = 0. + t1126 + t1141;
  t1199 = Cos(var1[17]);
  t1207 = 0. + t1199;
  t1155 = Sin(var1[17]);
  t936 = 0. + t933;
  t1278 = -1.*t706*t840;
  t1303 = t812*t813*t859;
  t1327 = t812*t706;
  t1328 = t840*t813*t859;
  t1329 = t1327 + t1328;
  t1362 = 0. + t1278 + t1303;
  t1394 = t674*t1088*t859;
  t1406 = t933*t1329;
  t1410 = 0. + t1394 + t1406;
  t1158 = -1.*t1155;
  t1165 = 0. + t1158;
  t1391 = t1018*t1362;
  t1412 = t1039*t1410;
  t1415 = 0. + t1391 + t1412;
  t1429 = t1039*t1362;
  t1441 = -1.*t1018*t1410;
  t1442 = 0. + t1429 + t1441;
  t1248 = 0. + t1155;
  t1539 = t812*t674;
  t1540 = 0. + t1539;
  t1563 = t933*t674*t840;
  t1569 = -1.*t1088*t813;
  t1570 = 0. + t1563 + t1569;
  t1561 = t1540*t1018;
  t1576 = t1039*t1570;
  t1577 = 0. + t1561 + t1576;
  t1581 = t1039*t1540;
  t1582 = -1.*t1018*t1570;
  t1583 = 0. + t1581 + t1582;
  p_output1[0]=-0.2083*t1111 - 0.1422*t1142 - 0.02*(0. + t1111*t1165 + t1142*t1207) - 0.16*(0. + t1111*t1207 + t1142*t1248) + 0.0817*t674*t706 - 0.1944*(t819 + t910) + 0.035199999999999995*(0. + t674*t706*t936 + t966*t989) + var1[0];
  p_output1[1]=-0.1944*(t1278 + t1303) - 0.2083*t1415 - 0.1422*t1442 - 0.02*(0. + t1165*t1415 + t1207*t1442) - 0.16*(0. + t1207*t1415 + t1248*t1442) + 0.0817*t674*t859 + 0.035199999999999995*(0. + t674*t859*t936 + t1329*t966) + var1[1];
  p_output1[2]=-0.2083*t1577 - 0.1422*t1583 - 0.02*(0. + t1165*t1577 + t1207*t1583) - 0.16*(0. + t1207*t1577 + t1248*t1583) - 0.1944*t674*t812 - 0.0817*t813 + 0.035199999999999995*(0. - 1.*t813*t936 + t674*t840*t966) + var1[2];
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

#include "SF_4_func.hh"

namespace SymFunction
{

void SF_4_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
