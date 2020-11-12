/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 12:59:51 GMT-05:00
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
  double t60;
  double t143;
  double t155;
  double t164;
  double t166;
  double t172;
  double t184;
  double t204;
  double t215;
  double t295;
  double t300;
  double t319;
  double t337;
  double t46;
  double t362;
  double t368;
  double t376;
  double t380;
  double t384;
  double t385;
  double t387;
  double t389;
  double t392;
  double t421;
  double t425;
  double t437;
  double t283;
  double t511;
  double t512;
  double t515;
  double t521;
  double t552;
  double t555;
  double t444;
  double t449;
  double t580;
  double t590;
  double t602;
  double t604;
  double t606;
  double t610;
  double t617;
  double t631;
  double t471;
  double t723;
  double t725;
  double t728;
  double t734;
  double t756;
  double t760;
  double t793;
  double t794;
  double t908;
  double t885;
  double t919;
  double t946;
  double t953;
  double t970;
  double t972;
  double t986;
  double t988;
  double t989;
  double t990;
  double t1000;
  double t889;
  double t1007;
  double t1009;
  double t1112;
  double t1116;
  double t1122;
  double t1124;
  double t1133;
  double t1134;
  double t1014;
  double t1195;
  double t1196;
  double t1207;
  double t1246;
  double t1257;
  double t1258;
  double t854;
  double t208;
  double t1322;
  double t1288;
  double t1332;
  double t1337;
  double t1338;
  double t1343;
  double t1353;
  double t1360;
  double t1363;
  double t1370;
  double t1374;
  double t1376;
  double t1069;
  double t518;
  double t1304;
  double t1390;
  double t1401;
  double t1474;
  double t1476;
  double t1479;
  double t1480;
  double t1491;
  double t1495;
  double t1419;
  double t679;
  double t1541;
  double t1550;
  double t1552;
  double t1599;
  double t1600;
  double t1602;
  double t1278;
  t60 = Cos(var1[5]);
  t143 = Sin(var1[3]);
  t155 = Sin(var1[4]);
  t164 = t60*t143*t155;
  t166 = Cos(var1[3]);
  t172 = Sin(var1[5]);
  t184 = -1.*t166*t172;
  t204 = t164 + t184;
  t215 = Cos(var1[6]);
  t295 = t166*t60*t155;
  t300 = t143*t172;
  t319 = t295 + t300;
  t337 = Sin(var1[6]);
  t46 = Cos(var1[4]);
  t362 = Cos(var1[7]);
  t368 = t215*t319;
  t376 = -1.*t337;
  t380 = 0. + t376;
  t384 = t204*t380;
  t385 = 0. + t368 + t384;
  t387 = t362*t385;
  t389 = t46*t60;
  t392 = 0. + t389;
  t421 = Sin(var1[7]);
  t425 = t392*t421;
  t437 = 0. + t387 + t425;
  t283 = 0. + t215;
  t511 = t166*t60;
  t512 = t143*t155*t172;
  t515 = t511 + t512;
  t521 = -1.*t60*t143;
  t552 = t166*t155*t172;
  t555 = t521 + t552;
  t444 = Cos(var1[8]);
  t449 = 0. + t444;
  t580 = t215*t555;
  t590 = t515*t380;
  t602 = 0. + t580 + t590;
  t604 = t362*t602;
  t606 = t46*t172;
  t610 = 0. + t606;
  t617 = t610*t421;
  t631 = 0. + t604 + t617;
  t471 = Sin(var1[8]);
  t723 = t166*t46*t215;
  t725 = t46*t143*t380;
  t728 = 0. + t723 + t725;
  t734 = t362*t728;
  t756 = -1.*t155;
  t760 = 0. + t756;
  t793 = t760*t421;
  t794 = 0. + t734 + t793;
  t908 = Sin(var1[15]);
  t885 = Cos(var1[15]);
  t919 = Sin(var1[16]);
  t946 = t392*t919;
  t953 = Cos(var1[16]);
  t970 = -1.*t908;
  t972 = 0. + t970;
  t986 = t972*t204;
  t988 = t885*t319;
  t989 = 0. + t986 + t988;
  t990 = t953*t989;
  t1000 = 0. + t946 + t990;
  t889 = 0. + t885;
  t1007 = Cos(var1[17]);
  t1009 = 0. + t1007;
  t1112 = t919*t610;
  t1116 = t885*t555;
  t1122 = t972*t515;
  t1124 = 0. + t1116 + t1122;
  t1133 = t953*t1124;
  t1134 = 0. + t1112 + t1133;
  t1014 = Sin(var1[17]);
  t1195 = t885*t166*t46;
  t1196 = t46*t972*t143;
  t1207 = 0. + t1195 + t1196;
  t1246 = t953*t1207;
  t1257 = t919*t760;
  t1258 = 0. + t1246 + t1257;
  t854 = -0.21935*t46*t60;
  t208 = -0.0875*t204;
  t1322 = Sin(var1[12]);
  t1288 = Cos(var1[12]);
  t1332 = Sin(var1[13]);
  t1337 = t392*t1332;
  t1338 = Cos(var1[13]);
  t1343 = -1.*t1322;
  t1353 = 0. + t1343;
  t1360 = t1353*t204;
  t1363 = t1288*t319;
  t1370 = 0. + t1360 + t1363;
  t1374 = t1338*t1370;
  t1376 = 0. + t1337 + t1374;
  t1069 = -0.21935*t46*t172;
  t518 = -0.0875*t515;
  t1304 = 0. + t1288;
  t1390 = Cos(var1[14]);
  t1401 = 0. + t1390;
  t1474 = t1332*t610;
  t1476 = t1288*t555;
  t1479 = t1353*t515;
  t1480 = 0. + t1476 + t1479;
  t1491 = t1338*t1480;
  t1495 = 0. + t1474 + t1491;
  t1419 = Sin(var1[14]);
  t679 = -0.0875*t46*t143;
  t1541 = t1288*t166*t46;
  t1550 = t46*t1353*t143;
  t1552 = 0. + t1541 + t1550;
  t1599 = t1338*t1552;
  t1600 = t1332*t760;
  t1602 = 0. + t1599 + t1600;
  t1278 = 0.21935*t155;
  p_output1[0]=t208 - 0.037*(0. + t204*t283 + t319*t337) - 0.25*t437 - 0.27*(t437*t449 + (0. + t362*t392 - 1.*t385*t421)*t471) + 0.21935*t46*t60 + var1[0];
  p_output1[1]=0.21935*t172*t46 + t518 - 0.037*(0. + t283*t515 + t337*t555) - 0.25*t631 - 0.27*(t471*(0. - 1.*t421*t602 + t362*t610) + t449*t631) + var1[1];
  p_output1[2]=-0.21935*t155 - 0.037*(0. + t143*t283*t46 + t166*t337*t46) + t679 - 0.25*t794 - 0.27*(t471*(0. - 1.*t421*t728 + t362*t760) + t449*t794) + var1[2];
  p_output1[3]=-0.25*t1000 + 0.0875*t204 + t854 + 0.037*(0. + t204*t889 + t319*t908) - 0.27*(t1000*t1009 + t1014*(0. + t392*t953 - 1.*t919*t989)) + var1[0];
  p_output1[4]=t1069 - 0.25*t1134 + 0.0875*t515 + 0.037*(0. + t515*t889 + t555*t908) - 0.27*(t1009*t1134 + t1014*(0. - 1.*t1124*t919 + t610*t953)) + var1[1];
  p_output1[5]=-0.25*t1258 + t1278 + 0.0875*t143*t46 + 0.037*(0. + t143*t46*t889 + t166*t46*t908) - 0.27*(t1009*t1258 + t1014*(0. - 1.*t1207*t919 + t760*t953)) + var1[2];
  p_output1[6]=-0.25*t1376 + t208 - 0.037*(0. + t1304*t204 + t1322*t319) - 0.27*(t1376*t1401 + t1419*(0. - 1.*t1332*t1370 + t1338*t392)) + t854 + var1[0];
  p_output1[7]=t1069 - 0.25*t1495 + t518 - 0.037*(0. + t1304*t515 + t1322*t555) - 0.27*(t1401*t1495 + t1419*(0. - 1.*t1332*t1480 + t1338*t610)) + var1[1];
  p_output1[8]=t1278 - 0.25*t1602 - 0.037*(0. + t1304*t143*t46 + t1322*t166*t46) + t679 - 0.27*(t1401*t1602 + t1419*(0. - 1.*t1332*t1552 + t1338*t760)) + var1[2];
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

#include "F_1_func.hh"

namespace SymFunction
{

void F_1_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
