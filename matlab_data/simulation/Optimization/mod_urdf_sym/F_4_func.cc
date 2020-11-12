/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 12:59:58 GMT-05:00
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
  double t148;
  double t177;
  double t283;
  double t291;
  double t319;
  double t346;
  double t348;
  double t362;
  double t46;
  double t425;
  double t384;
  double t437;
  double t444;
  double t449;
  double t484;
  double t486;
  double t497;
  double t511;
  double t512;
  double t515;
  double t518;
  double t519;
  double t552;
  double t555;
  double t569;
  double t572;
  double t387;
  double t674;
  double t677;
  double t679;
  double t684;
  double t685;
  double t697;
  double t580;
  double t604;
  double t760;
  double t793;
  double t794;
  double t795;
  double t801;
  double t813;
  double t820;
  double t821;
  double t610;
  double t972;
  double t986;
  double t988;
  double t1002;
  double t1007;
  double t1038;
  double t1041;
  double t1046;
  double t155;
  double t1122;
  double t1140;
  double t1149;
  double t1152;
  double t1153;
  double t1158;
  double t1163;
  double t1171;
  double t1191;
  double t1192;
  double t1195;
  double t1196;
  double t663;
  double t1133;
  double t1215;
  double t1216;
  double t1337;
  double t1338;
  double t1353;
  double t1360;
  double t1363;
  double t1374;
  double t1259;
  double t1099;
  double t1476;
  double t1479;
  double t1491;
  double t1495;
  double t1498;
  double t1499;
  double t1112;
  double t1600;
  double t1583;
  double t1641;
  double t1647;
  double t1650;
  double t1661;
  double t1665;
  double t1668;
  double t1669;
  double t1671;
  double t1673;
  double t1676;
  double t1304;
  double t1591;
  double t1688;
  double t1689;
  double t1786;
  double t1789;
  double t1790;
  double t1802;
  double t1807;
  double t1810;
  double t1703;
  double t1460;
  double t1890;
  double t1947;
  double t1957;
  double t1990;
  double t1997;
  double t2031;
  t148 = Cos(var1[5]);
  t177 = Sin(var1[3]);
  t283 = Sin(var1[4]);
  t291 = t148*t177*t283;
  t319 = Cos(var1[3]);
  t346 = Sin(var1[5]);
  t348 = -1.*t319*t346;
  t362 = t291 + t348;
  t46 = Cos(var1[4]);
  t425 = Sin(var1[9]);
  t384 = Cos(var1[9]);
  t437 = t319*t148*t283;
  t444 = t177*t346;
  t449 = t437 + t444;
  t484 = t46*t148;
  t486 = 0. + t484;
  t497 = Sin(var1[10]);
  t511 = t486*t497;
  t512 = Cos(var1[10]);
  t515 = -1.*t425;
  t518 = 0. + t515;
  t519 = t518*t362;
  t552 = t384*t449;
  t555 = 0. + t519 + t552;
  t569 = t512*t555;
  t572 = 0. + t511 + t569;
  t387 = 0. + t384;
  t674 = t319*t148;
  t677 = t177*t283*t346;
  t679 = t674 + t677;
  t684 = -1.*t148*t177;
  t685 = t319*t283*t346;
  t697 = t684 + t685;
  t580 = Cos(var1[11]);
  t604 = 0. + t580;
  t760 = t46*t346;
  t793 = 0. + t760;
  t794 = t497*t793;
  t795 = t384*t697;
  t801 = t518*t679;
  t813 = 0. + t795 + t801;
  t820 = t512*t813;
  t821 = 0. + t794 + t820;
  t610 = Sin(var1[11]);
  t972 = t384*t319*t46;
  t986 = t46*t518*t177;
  t988 = 0. + t972 + t986;
  t1002 = -1.*t283;
  t1007 = 0. + t1002;
  t1038 = t512*t988;
  t1041 = t497*t1007;
  t1046 = 0. + t1038 + t1041;
  t155 = 0.21935*t46*t148;
  t1122 = Cos(var1[6]);
  t1140 = Sin(var1[6]);
  t1149 = Cos(var1[7]);
  t1152 = t1122*t449;
  t1153 = -1.*t1140;
  t1158 = 0. + t1153;
  t1163 = t362*t1158;
  t1171 = 0. + t1152 + t1163;
  t1191 = t1149*t1171;
  t1192 = Sin(var1[7]);
  t1195 = t486*t1192;
  t1196 = 0. + t1191 + t1195;
  t663 = 0.21935*t46*t346;
  t1133 = 0. + t1122;
  t1215 = Cos(var1[8]);
  t1216 = 0. + t1215;
  t1337 = t1122*t697;
  t1338 = t679*t1158;
  t1353 = 0. + t1337 + t1338;
  t1360 = t1149*t1353;
  t1363 = t793*t1192;
  t1374 = 0. + t1360 + t1363;
  t1259 = Sin(var1[8]);
  t1099 = -0.21935*t283;
  t1476 = t319*t46*t1122;
  t1479 = t46*t177*t1158;
  t1491 = 0. + t1476 + t1479;
  t1495 = t1149*t1491;
  t1498 = t1007*t1192;
  t1499 = 0. + t1495 + t1498;
  t1112 = -0.0875*t362;
  t1600 = Sin(var1[12]);
  t1583 = Cos(var1[12]);
  t1641 = Sin(var1[13]);
  t1647 = t486*t1641;
  t1650 = Cos(var1[13]);
  t1661 = -1.*t1600;
  t1665 = 0. + t1661;
  t1668 = t1665*t362;
  t1669 = t1583*t449;
  t1671 = 0. + t1668 + t1669;
  t1673 = t1650*t1671;
  t1676 = 0. + t1647 + t1673;
  t1304 = -0.0875*t679;
  t1591 = 0. + t1583;
  t1688 = Cos(var1[14]);
  t1689 = 0. + t1688;
  t1786 = t1641*t793;
  t1789 = t1583*t697;
  t1790 = t1665*t679;
  t1802 = 0. + t1789 + t1790;
  t1807 = t1650*t1802;
  t1810 = 0. + t1786 + t1807;
  t1703 = Sin(var1[14]);
  t1460 = -0.0875*t46*t177;
  t1890 = t1583*t319*t46;
  t1947 = t46*t1665*t177;
  t1957 = 0. + t1890 + t1947;
  t1990 = t1650*t1957;
  t1997 = t1641*t1007;
  t2031 = 0. + t1990 + t1997;
  p_output1[0]=t155 + 0.0875*t362 + 0.037*(0. + t362*t387 + t425*t449) - 0.25*t572 - 0.27*(t572*t604 + (0. + t486*t512 - 1.*t497*t555)*t610) + var1[0];
  p_output1[1]=t663 + 0.0875*t679 + 0.037*(0. + t387*t679 + t425*t697) - 0.25*t821 - 0.27*(t610*(0. + t512*t793 - 1.*t497*t813) + t604*t821) + var1[1];
  p_output1[2]=-0.25*t1046 + t1099 + 0.0875*t177*t46 + 0.037*(0. + t177*t387*t46 + t319*t425*t46) - 0.27*(t1046*t604 + t610*(0. + t1007*t512 - 1.*t497*t988)) + var1[2];
  p_output1[3]=t1112 - 0.25*t1196 + t155 - 0.037*(0. + t1133*t362 + t1140*t449) - 0.27*(t1196*t1216 + t1259*(0. - 1.*t1171*t1192 + t1149*t486)) + var1[0];
  p_output1[4]=t1304 - 0.25*t1374 + t663 - 0.037*(0. + t1133*t679 + t1140*t697) - 0.27*(t1216*t1374 + t1259*(0. - 1.*t1192*t1353 + t1149*t793)) + var1[1];
  p_output1[5]=t1099 + t1460 - 0.25*t1499 - 0.27*(t1259*(0. + t1007*t1149 - 1.*t1192*t1491) + t1216*t1499) - 0.037*(0. + t1133*t177*t46 + t1140*t319*t46) + var1[2];
  p_output1[6]=t1112 - 0.25*t1676 - 0.037*(0. + t1591*t362 + t1600*t449) - 0.21935*t148*t46 - 0.27*(t1676*t1689 + t1703*(0. - 1.*t1641*t1671 + t1650*t486)) + var1[0];
  p_output1[7]=t1304 - 0.25*t1810 - 0.21935*t346*t46 - 0.037*(0. + t1591*t679 + t1600*t697) - 0.27*(t1689*t1810 + t1703*(0. - 1.*t1641*t1802 + t1650*t793)) + var1[1];
  p_output1[8]=t1460 - 0.25*t2031 - 0.27*(t1703*(0. + t1007*t1650 - 1.*t1641*t1957) + t1689*t2031) + 0.21935*t283 - 0.037*(0. + t1591*t177*t46 + t1600*t319*t46) + var1[2];
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

#include "F_4_func.hh"

namespace SymFunction
{

void F_4_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
