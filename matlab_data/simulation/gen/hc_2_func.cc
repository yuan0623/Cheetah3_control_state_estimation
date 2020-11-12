/*
 * Automatically Generated from Mathematica.
 * Fri 10 May 2019 14:10:17 GMT-04:00
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
  double t110;
  double t77;
  double t293;
  double t263;
  double t207;
  double t392;
  double t281;
  double t432;
  double t491;
  double t452;
  double t505;
  double t528;
  double t533;
  double t577;
  double t567;
  double t562;
  double t620;
  double t626;
  double t628;
  double t631;
  double t645;
  double t576;
  double t656;
  double t661;
  double t678;
  double t692;
  double t693;
  double t746;
  double t765;
  double t711;
  double t455;
  double t858;
  double t861;
  double t876;
  double t881;
  double t887;
  double t909;
  double t915;
  double t916;
  double t925;
  double t724;
  double t729;
  double t913;
  double t929;
  double t931;
  double t971;
  double t972;
  double t973;
  double t813;
  double t1130;
  double t1154;
  double t1173;
  double t1183;
  double t1191;
  double t1160;
  double t1205;
  double t1209;
  double t1250;
  double t1262;
  double t1266;
  double t441;
  double t1439;
  double t1406;
  double t1490;
  double t1486;
  double t1491;
  double t1509;
  double t1515;
  double t1523;
  double t1487;
  double t1530;
  double t1531;
  double t1536;
  double t1562;
  double t1563;
  double t1598;
  double t1599;
  double t1567;
  double t863;
  double t1420;
  double t1723;
  double t1724;
  double t1725;
  double t1582;
  double t1583;
  double t1722;
  double t1728;
  double t1743;
  double t1755;
  double t1759;
  double t1766;
  double t1635;
  double t1863;
  double t1868;
  double t1872;
  double t1862;
  double t1876;
  double t1894;
  double t1897;
  double t1899;
  double t1939;
  t110 = Cos(var1[5]);
  t77 = Cos(var1[4]);
  t293 = Sin(var1[3]);
  t263 = Sin(var1[4]);
  t207 = Cos(var1[3]);
  t392 = Sin(var1[5]);
  t281 = t207*t110*t263;
  t432 = t293*t392;
  t491 = Sin(var1[9]);
  t452 = Cos(var1[9]);
  t505 = t110*t293*t263;
  t528 = -1.*t207*t392;
  t533 = t505 + t528;
  t577 = Cos(var1[10]);
  t567 = 0. + t281 + t432;
  t562 = Sin(var1[10]);
  t620 = -1.*t491;
  t626 = 0. + t620;
  t628 = t77*t110*t626;
  t631 = t452*t533;
  t645 = 0. + t628 + t631;
  t576 = t562*t567;
  t656 = t577*t645;
  t661 = 0. + t576 + t656;
  t678 = t577*t567;
  t692 = -1.*t562*t645;
  t693 = 0. + t678 + t692;
  t746 = Cos(var1[11]);
  t765 = 0. + t746;
  t711 = Sin(var1[11]);
  t455 = 0. + t452;
  t858 = -1.*t110*t293;
  t861 = t207*t263*t392;
  t876 = t207*t110;
  t881 = t293*t263*t392;
  t887 = t876 + t881;
  t909 = 0. + t858 + t861;
  t915 = t77*t626*t392;
  t916 = t452*t887;
  t925 = 0. + t915 + t916;
  t724 = -1.*t711;
  t729 = 0. + t724;
  t913 = t562*t909;
  t929 = t577*t925;
  t931 = 0. + t913 + t929;
  t971 = t577*t909;
  t972 = -1.*t562*t925;
  t973 = 0. + t971 + t972;
  t813 = 0. + t711;
  t1130 = t207*t77;
  t1154 = 0. + t1130;
  t1173 = t452*t77*t293;
  t1183 = -1.*t626*t263;
  t1191 = 0. + t1173 + t1183;
  t1160 = t1154*t562;
  t1205 = t577*t1191;
  t1209 = 0. + t1160 + t1205;
  t1250 = t577*t1154;
  t1262 = -1.*t562*t1191;
  t1266 = 0. + t1250 + t1262;
  t441 = t281 + t432;
  t1439 = Sin(var1[12]);
  t1406 = Cos(var1[12]);
  t1490 = Cos(var1[13]);
  t1486 = Sin(var1[13]);
  t1491 = 0. + t1439;
  t1509 = t77*t110*t1491;
  t1515 = t1406*t533;
  t1523 = 0. + t1509 + t1515;
  t1487 = t1486*t567;
  t1530 = t1490*t1523;
  t1531 = 0. + t1487 + t1530;
  t1536 = t1490*t567;
  t1562 = -1.*t1486*t1523;
  t1563 = 0. + t1536 + t1562;
  t1598 = Cos(var1[14]);
  t1599 = 0. + t1598;
  t1567 = Sin(var1[14]);
  t863 = t858 + t861;
  t1420 = 0. + t1406;
  t1723 = t77*t1491*t392;
  t1724 = t1406*t887;
  t1725 = 0. + t1723 + t1724;
  t1582 = -1.*t1567;
  t1583 = 0. + t1582;
  t1722 = t1486*t909;
  t1728 = t1490*t1725;
  t1743 = 0. + t1722 + t1728;
  t1755 = t1490*t909;
  t1759 = -1.*t1486*t1725;
  t1766 = 0. + t1755 + t1759;
  t1635 = 0. + t1567;
  t1863 = t1406*t77*t293;
  t1868 = -1.*t1491*t263;
  t1872 = 0. + t1863 + t1868;
  t1862 = t1154*t1486;
  t1876 = t1490*t1872;
  t1894 = 0. + t1862 + t1876;
  t1897 = t1490*t1154;
  t1899 = -1.*t1486*t1872;
  t1939 = 0. + t1897 + t1899;
  p_output1[0]=var1[0];
  p_output1[1]=var1[1];
  p_output1[2]=var1[2];
  p_output1[3]=var1[3];
  p_output1[4]=var1[4];
  p_output1[5]=var1[5];
  p_output1[6]=0.2429*t441 - 0.2083*t661 - 0.1422*t693 - 0.02*(0. + t661*t729 + t693*t765) + 0.0817*t110*t77 + 0.035199999999999995*(0. + t491*t533 + t110*t455*t77) - 0.16*(0. + t661*t765 + t693*t813) + var1[0];
  p_output1[7]=0.0817*t392*t77 + 0.2429*t863 + 0.035199999999999995*(0. + t392*t455*t77 + t491*t887) - 0.2083*t931 - 0.1422*t973 - 0.02*(0. + t729*t931 + t765*t973) - 0.16*(0. + t765*t931 + t813*t973) + var1[1];
  p_output1[8]=-0.2083*t1209 - 0.1422*t1266 - 0.0817*t263 - 0.02*(0. + t1209*t729 + t1266*t765) + 0.2429*t207*t77 + 0.035199999999999995*(0. - 1.*t263*t455 + t293*t491*t77) - 0.16*(0. + t1209*t765 + t1266*t813) + var1[2];
  p_output1[9]=-0.2083*t1531 - 0.1422*t1563 - 0.02*(0. + t1531*t1583 + t1563*t1599) - 0.16*(0. + t1531*t1599 + t1563*t1635) - 0.1944*t441 - 0.0817*t110*t77 - 0.0329*(0. - 1.*t1439*t533 + t110*t1420*t77) + var1[0];
  p_output1[10]=-0.2083*t1743 - 0.1422*t1766 - 0.02*(0. + t1583*t1743 + t1599*t1766) - 0.16*(0. + t1599*t1743 + t1635*t1766) - 0.0817*t392*t77 - 0.1944*t863 - 0.0329*(0. + t1420*t392*t77 - 1.*t1439*t887) + var1[1];
  p_output1[11]=-0.2083*t1894 - 0.1422*t1939 - 0.02*(0. + t1583*t1894 + t1599*t1939) - 0.16*(0. + t1599*t1894 + t1635*t1939) + 0.0817*t263 - 0.1944*t207*t77 - 0.0329*(0. - 1.*t1420*t263 - 1.*t1439*t293*t77) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 12, (mwSize) 1, mxREAL);
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
