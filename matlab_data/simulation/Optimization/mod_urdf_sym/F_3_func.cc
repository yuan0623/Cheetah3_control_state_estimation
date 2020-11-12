/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 12:59:55 GMT-05:00
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
  double t113;
  double t164;
  double t283;
  double t291;
  double t295;
  double t296;
  double t300;
  double t319;
  double t46;
  double t380;
  double t348;
  double t384;
  double t387;
  double t389;
  double t449;
  double t457;
  double t464;
  double t465;
  double t471;
  double t478;
  double t484;
  double t486;
  double t497;
  double t510;
  double t511;
  double t512;
  double t362;
  double t631;
  double t635;
  double t636;
  double t644;
  double t645;
  double t650;
  double t518;
  double t519;
  double t682;
  double t684;
  double t685;
  double t697;
  double t701;
  double t723;
  double t725;
  double t734;
  double t555;
  double t885;
  double t889;
  double t897;
  double t911;
  double t913;
  double t986;
  double t988;
  double t1000;
  double t346;
  double t1069;
  double t1046;
  double t1100;
  double t1104;
  double t1112;
  double t1116;
  double t1122;
  double t1133;
  double t1134;
  double t1138;
  double t1140;
  double t1141;
  double t643;
  double t1059;
  double t1147;
  double t1149;
  double t1257;
  double t1258;
  double t1259;
  double t1272;
  double t1274;
  double t1276;
  double t1153;
  double t823;
  double t1376;
  double t1379;
  double t1390;
  double t1446;
  double t1451;
  double t1458;
  double t1041;
  double t1500;
  double t1495;
  double t1511;
  double t1516;
  double t1529;
  double t1533;
  double t1535;
  double t1536;
  double t1540;
  double t1541;
  double t1550;
  double t1554;
  double t1213;
  double t1498;
  double t1591;
  double t1599;
  double t1684;
  double t1688;
  double t1689;
  double t1692;
  double t1697;
  double t1703;
  double t1602;
  double t1790;
  double t1802;
  double t1805;
  double t1819;
  double t1821;
  double t1825;
  double t1476;
  t113 = Cos(var1[5]);
  t164 = Sin(var1[3]);
  t283 = Sin(var1[4]);
  t291 = t113*t164*t283;
  t295 = Cos(var1[3]);
  t296 = Sin(var1[5]);
  t300 = -1.*t295*t296;
  t319 = t291 + t300;
  t46 = Cos(var1[4]);
  t380 = Sin(var1[9]);
  t348 = Cos(var1[9]);
  t384 = t295*t113*t283;
  t387 = t164*t296;
  t389 = t384 + t387;
  t449 = t46*t113;
  t457 = 0. + t449;
  t464 = Sin(var1[10]);
  t465 = t457*t464;
  t471 = Cos(var1[10]);
  t478 = -1.*t380;
  t484 = 0. + t478;
  t486 = t484*t319;
  t497 = t348*t389;
  t510 = 0. + t486 + t497;
  t511 = t471*t510;
  t512 = 0. + t465 + t511;
  t362 = 0. + t348;
  t631 = t295*t113;
  t635 = t164*t283*t296;
  t636 = t631 + t635;
  t644 = -1.*t113*t164;
  t645 = t295*t283*t296;
  t650 = t644 + t645;
  t518 = Cos(var1[11]);
  t519 = 0. + t518;
  t682 = t46*t296;
  t684 = 0. + t682;
  t685 = t464*t684;
  t697 = t348*t650;
  t701 = t484*t636;
  t723 = 0. + t697 + t701;
  t725 = t471*t723;
  t734 = 0. + t685 + t725;
  t555 = Sin(var1[11]);
  t885 = t348*t295*t46;
  t889 = t46*t484*t164;
  t897 = 0. + t885 + t889;
  t911 = -1.*t283;
  t913 = 0. + t911;
  t986 = t471*t897;
  t988 = t464*t913;
  t1000 = 0. + t986 + t988;
  t346 = 0.0875*t319;
  t1069 = Sin(var1[15]);
  t1046 = Cos(var1[15]);
  t1100 = Sin(var1[16]);
  t1104 = t457*t1100;
  t1112 = Cos(var1[16]);
  t1116 = -1.*t1069;
  t1122 = 0. + t1116;
  t1133 = t1122*t319;
  t1134 = t1046*t389;
  t1138 = 0. + t1133 + t1134;
  t1140 = t1112*t1138;
  t1141 = 0. + t1104 + t1140;
  t643 = 0.0875*t636;
  t1059 = 0. + t1046;
  t1147 = Cos(var1[17]);
  t1149 = 0. + t1147;
  t1257 = t1100*t684;
  t1258 = t1046*t650;
  t1259 = t1122*t636;
  t1272 = 0. + t1258 + t1259;
  t1274 = t1112*t1272;
  t1276 = 0. + t1257 + t1274;
  t1153 = Sin(var1[17]);
  t823 = 0.0875*t46*t164;
  t1376 = t1046*t295*t46;
  t1379 = t46*t1122*t164;
  t1390 = 0. + t1376 + t1379;
  t1446 = t1112*t1390;
  t1451 = t1100*t913;
  t1458 = 0. + t1446 + t1451;
  t1041 = -0.21935*t46*t113;
  t1500 = Sin(var1[12]);
  t1495 = Cos(var1[12]);
  t1511 = Sin(var1[13]);
  t1516 = t457*t1511;
  t1529 = Cos(var1[13]);
  t1533 = -1.*t1500;
  t1535 = 0. + t1533;
  t1536 = t1535*t319;
  t1540 = t1495*t389;
  t1541 = 0. + t1536 + t1540;
  t1550 = t1529*t1541;
  t1554 = 0. + t1516 + t1550;
  t1213 = -0.21935*t46*t296;
  t1498 = 0. + t1495;
  t1591 = Cos(var1[14]);
  t1599 = 0. + t1591;
  t1684 = t1511*t684;
  t1688 = t1495*t650;
  t1689 = t1535*t636;
  t1692 = 0. + t1688 + t1689;
  t1697 = t1529*t1692;
  t1703 = 0. + t1684 + t1697;
  t1602 = Sin(var1[14]);
  t1790 = t1495*t295*t46;
  t1802 = t46*t1535*t164;
  t1805 = 0. + t1790 + t1802;
  t1819 = t1529*t1805;
  t1821 = t1511*t913;
  t1825 = 0. + t1819 + t1821;
  t1476 = 0.21935*t283;
  p_output1[0]=t346 + 0.037*(0. + t319*t362 + t380*t389) + 0.21935*t113*t46 - 0.25*t512 - 0.27*(t512*t519 + (0. + t457*t471 - 1.*t464*t510)*t555) + var1[0];
  p_output1[1]=0.21935*t296*t46 + t643 + 0.037*(0. + t362*t636 + t380*t650) - 0.25*t734 - 0.27*(t555*(0. + t471*t684 - 1.*t464*t723) + t519*t734) + var1[1];
  p_output1[2]=-0.25*t1000 - 0.21935*t283 + 0.037*(0. + t164*t362*t46 + t295*t380*t46) + t823 - 0.27*(t1000*t519 + t555*(0. - 1.*t464*t897 + t471*t913)) + var1[2];
  p_output1[3]=t1041 - 0.25*t1141 + t346 + 0.037*(0. + t1059*t319 + t1069*t389) - 0.27*(t1141*t1149 + t1153*(0. - 1.*t1100*t1138 + t1112*t457)) + var1[0];
  p_output1[4]=t1213 - 0.25*t1276 + t643 + 0.037*(0. + t1059*t636 + t1069*t650) - 0.27*(t1149*t1276 + t1153*(0. - 1.*t1100*t1272 + t1112*t684)) + var1[1];
  p_output1[5]=-0.25*t1458 + t1476 + 0.037*(0. + t1059*t164*t46 + t1069*t295*t46) + t823 - 0.27*(t1149*t1458 + t1153*(0. - 1.*t1100*t1390 + t1112*t913)) + var1[2];
  p_output1[6]=t1041 - 0.25*t1554 - 0.0875*t319 - 0.037*(0. + t1498*t319 + t1500*t389) - 0.27*(t1554*t1599 + t1602*(0. - 1.*t1511*t1541 + t1529*t457)) + var1[0];
  p_output1[7]=t1213 - 0.25*t1703 - 0.0875*t636 - 0.037*(0. + t1498*t636 + t1500*t650) - 0.27*(t1599*t1703 + t1602*(0. - 1.*t1511*t1692 + t1529*t684)) + var1[1];
  p_output1[8]=t1476 - 0.25*t1825 - 0.0875*t164*t46 - 0.037*(0. + t1498*t164*t46 + t1500*t295*t46) - 0.27*(t1599*t1825 + t1602*(0. - 1.*t1511*t1805 + t1529*t913)) + var1[2];
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

#include "F_3_func.hh"

namespace SymFunction
{

void F_3_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
