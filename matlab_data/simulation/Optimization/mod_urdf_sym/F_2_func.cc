/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 12:59:53 GMT-05:00
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
  double t59;
  double t123;
  double t155;
  double t164;
  double t204;
  double t208;
  double t215;
  double t283;
  double t46;
  double t342;
  double t295;
  double t346;
  double t348;
  double t362;
  double t387;
  double t389;
  double t392;
  double t425;
  double t437;
  double t438;
  double t444;
  double t449;
  double t457;
  double t461;
  double t464;
  double t465;
  double t300;
  double t569;
  double t572;
  double t574;
  double t590;
  double t604;
  double t606;
  double t478;
  double t484;
  double t636;
  double t643;
  double t644;
  double t645;
  double t650;
  double t656;
  double t663;
  double t674;
  double t497;
  double t795;
  double t801;
  double t804;
  double t820;
  double t821;
  double t854;
  double t860;
  double t885;
  double t113;
  double t972;
  double t990;
  double t1009;
  double t1011;
  double t1014;
  double t1031;
  double t1041;
  double t1044;
  double t1046;
  double t1052;
  double t1059;
  double t1060;
  double t555;
  double t986;
  double t1094;
  double t1097;
  double t1152;
  double t1153;
  double t1157;
  double t1158;
  double t1163;
  double t1171;
  double t1116;
  double t913;
  double t1276;
  double t1278;
  double t1287;
  double t1288;
  double t1304;
  double t1311;
  double t291;
  double t1411;
  double t1379;
  double t1445;
  double t1446;
  double t1451;
  double t1456;
  double t1458;
  double t1460;
  double t1466;
  double t1467;
  double t1470;
  double t1474;
  double t580;
  double t1390;
  double t1479;
  double t1491;
  double t1541;
  double t1550;
  double t1554;
  double t1578;
  double t1583;
  double t1591;
  double t1498;
  double t734;
  double t1673;
  double t1676;
  double t1683;
  double t1697;
  double t1703;
  double t1705;
  t59 = Cos(var1[5]);
  t123 = Sin(var1[3]);
  t155 = Sin(var1[4]);
  t164 = t59*t123*t155;
  t204 = Cos(var1[3]);
  t208 = Sin(var1[5]);
  t215 = -1.*t204*t208;
  t283 = t164 + t215;
  t46 = Cos(var1[4]);
  t342 = Sin(var1[9]);
  t295 = Cos(var1[9]);
  t346 = t204*t59*t155;
  t348 = t123*t208;
  t362 = t346 + t348;
  t387 = t46*t59;
  t389 = 0. + t387;
  t392 = Sin(var1[10]);
  t425 = t389*t392;
  t437 = Cos(var1[10]);
  t438 = -1.*t342;
  t444 = 0. + t438;
  t449 = t444*t283;
  t457 = t295*t362;
  t461 = 0. + t449 + t457;
  t464 = t437*t461;
  t465 = 0. + t425 + t464;
  t300 = 0. + t295;
  t569 = t204*t59;
  t572 = t123*t155*t208;
  t574 = t569 + t572;
  t590 = -1.*t59*t123;
  t604 = t204*t155*t208;
  t606 = t590 + t604;
  t478 = Cos(var1[11]);
  t484 = 0. + t478;
  t636 = t46*t208;
  t643 = 0. + t636;
  t644 = t392*t643;
  t645 = t295*t606;
  t650 = t444*t574;
  t656 = 0. + t645 + t650;
  t663 = t437*t656;
  t674 = 0. + t644 + t663;
  t497 = Sin(var1[11]);
  t795 = t295*t204*t46;
  t801 = t46*t444*t123;
  t804 = 0. + t795 + t801;
  t820 = -1.*t155;
  t821 = 0. + t820;
  t854 = t437*t804;
  t860 = t392*t821;
  t885 = 0. + t854 + t860;
  t113 = 0.21935*t46*t59;
  t972 = Cos(var1[6]);
  t990 = Sin(var1[6]);
  t1009 = Cos(var1[7]);
  t1011 = t972*t362;
  t1014 = -1.*t990;
  t1031 = 0. + t1014;
  t1041 = t283*t1031;
  t1044 = 0. + t1011 + t1041;
  t1046 = t1009*t1044;
  t1052 = Sin(var1[7]);
  t1059 = t389*t1052;
  t1060 = 0. + t1046 + t1059;
  t555 = 0.21935*t46*t208;
  t986 = 0. + t972;
  t1094 = Cos(var1[8]);
  t1097 = 0. + t1094;
  t1152 = t972*t606;
  t1153 = t574*t1031;
  t1157 = 0. + t1152 + t1153;
  t1158 = t1009*t1157;
  t1163 = t643*t1052;
  t1171 = 0. + t1158 + t1163;
  t1116 = Sin(var1[8]);
  t913 = -0.21935*t155;
  t1276 = t204*t46*t972;
  t1278 = t46*t123*t1031;
  t1287 = 0. + t1276 + t1278;
  t1288 = t1009*t1287;
  t1304 = t821*t1052;
  t1311 = 0. + t1288 + t1304;
  t291 = 0.0875*t283;
  t1411 = Sin(var1[15]);
  t1379 = Cos(var1[15]);
  t1445 = Sin(var1[16]);
  t1446 = t389*t1445;
  t1451 = Cos(var1[16]);
  t1456 = -1.*t1411;
  t1458 = 0. + t1456;
  t1460 = t1458*t283;
  t1466 = t1379*t362;
  t1467 = 0. + t1460 + t1466;
  t1470 = t1451*t1467;
  t1474 = 0. + t1446 + t1470;
  t580 = 0.0875*t574;
  t1390 = 0. + t1379;
  t1479 = Cos(var1[17]);
  t1491 = 0. + t1479;
  t1541 = t1445*t643;
  t1550 = t1379*t606;
  t1554 = t1458*t574;
  t1578 = 0. + t1550 + t1554;
  t1583 = t1451*t1578;
  t1591 = 0. + t1541 + t1583;
  t1498 = Sin(var1[17]);
  t734 = 0.0875*t46*t123;
  t1673 = t1379*t204*t46;
  t1676 = t46*t1458*t123;
  t1683 = 0. + t1673 + t1676;
  t1697 = t1451*t1683;
  t1703 = t1445*t821;
  t1705 = 0. + t1697 + t1703;
  p_output1[0]=t113 + t291 + 0.037*(0. + t283*t300 + t342*t362) - 0.25*t465 - 0.27*(t465*t484 + (0. + t389*t437 - 1.*t392*t461)*t497) + var1[0];
  p_output1[1]=t555 + t580 + 0.037*(0. + t300*t574 + t342*t606) - 0.25*t674 - 0.27*(t497*(0. + t437*t643 - 1.*t392*t656) + t484*t674) + var1[1];
  p_output1[2]=0.037*(0. + t123*t300*t46 + t204*t342*t46) + t734 - 0.25*t885 - 0.27*(t497*(0. - 1.*t392*t804 + t437*t821) + t484*t885) + t913 + var1[2];
  p_output1[3]=-0.25*t1060 + t113 - 0.0875*t283 - 0.27*(t1060*t1097 + t1116*(0. - 1.*t1044*t1052 + t1009*t389)) - 0.037*(0. + t283*t986 + t362*t990) + var1[0];
  p_output1[4]=-0.25*t1171 + t555 - 0.0875*t574 - 0.27*(t1097*t1171 + t1116*(0. - 1.*t1052*t1157 + t1009*t643)) - 0.037*(0. + t574*t986 + t606*t990) + var1[1];
  p_output1[5]=-0.25*t1311 - 0.0875*t123*t46 - 0.27*(t1097*t1311 + t1116*(0. - 1.*t1052*t1287 + t1009*t821)) + t913 - 0.037*(0. + t123*t46*t986 + t204*t46*t990) + var1[2];
  p_output1[6]=-0.25*t1474 + t291 + 0.037*(0. + t1390*t283 + t1411*t362) - 0.27*(t1474*t1491 + t1498*(0. - 1.*t1445*t1467 + t1451*t389)) - 0.21935*t46*t59 + var1[0];
  p_output1[7]=-0.25*t1591 - 0.21935*t208*t46 + t580 + 0.037*(0. + t1390*t574 + t1411*t606) - 0.27*(t1491*t1591 + t1498*(0. - 1.*t1445*t1578 + t1451*t643)) + var1[1];
  p_output1[8]=0.21935*t155 - 0.25*t1705 + 0.037*(0. + t123*t1390*t46 + t1411*t204*t46) + t734 - 0.27*(t1491*t1705 + t1498*(0. - 1.*t1445*t1683 + t1451*t821)) + var1[2];
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

#include "F_2_func.hh"

namespace SymFunction
{

void F_2_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
