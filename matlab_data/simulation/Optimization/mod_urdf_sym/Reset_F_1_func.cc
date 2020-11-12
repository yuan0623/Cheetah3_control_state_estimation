/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 13:00:59 GMT-05:00
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
  double t205;
  double t282;
  double t301;
  double t315;
  double t352;
  double t418;
  double t420;
  double t423;
  double t135;
  double t469;
  double t445;
  double t481;
  double t492;
  double t597;
  double t651;
  double t827;
  double t845;
  double t875;
  double t878;
  double t884;
  double t932;
  double t941;
  double t949;
  double t955;
  double t958;
  double t964;
  double t452;
  double t1326;
  double t1357;
  double t1367;
  double t1384;
  double t1395;
  double t1432;
  double t992;
  double t1018;
  double t1541;
  double t1549;
  double t1567;
  double t1570;
  double t1616;
  double t1631;
  double t1651;
  double t1662;
  double t1059;
  double t1951;
  double t1952;
  double t1959;
  double t1974;
  double t1982;
  double t2029;
  double t2083;
  double t2087;
  double t277;
  double t2221;
  double t2262;
  double t2311;
  double t2314;
  double t2364;
  double t2369;
  double t2374;
  double t2387;
  double t2388;
  double t2429;
  double t2435;
  double t2445;
  double t1295;
  double t2243;
  double t2477;
  double t2492;
  double t2681;
  double t2702;
  double t2722;
  double t2723;
  double t2726;
  double t2728;
  double t2537;
  double t2160;
  double t3039;
  double t3044;
  double t3057;
  double t3059;
  double t3088;
  double t3093;
  double t432;
  double t3275;
  double t3238;
  double t3353;
  double t3368;
  double t3380;
  double t3387;
  double t3388;
  double t3393;
  double t3394;
  double t3397;
  double t3405;
  double t3418;
  double t1371;
  double t3262;
  double t3421;
  double t3423;
  double t3693;
  double t3697;
  double t3700;
  double t3706;
  double t3711;
  double t3713;
  double t3458;
  double t1900;
  double t3755;
  double t3758;
  double t3759;
  double t3811;
  double t3812;
  double t3819;
  t205 = Cos(var1[5]);
  t282 = Sin(var1[3]);
  t301 = Sin(var1[4]);
  t315 = t205*t282*t301;
  t352 = Cos(var1[3]);
  t418 = Sin(var1[5]);
  t420 = -1.*t352*t418;
  t423 = t315 + t420;
  t135 = Cos(var1[4]);
  t469 = Sin(var1[9]);
  t445 = Cos(var1[9]);
  t481 = t352*t205*t301;
  t492 = t282*t418;
  t597 = t481 + t492;
  t651 = t135*t205;
  t827 = 0. + t651;
  t845 = Sin(var1[10]);
  t875 = t827*t845;
  t878 = Cos(var1[10]);
  t884 = -1.*t469;
  t932 = 0. + t884;
  t941 = t932*t423;
  t949 = t445*t597;
  t955 = 0. + t941 + t949;
  t958 = t878*t955;
  t964 = 0. + t875 + t958;
  t452 = 0. + t445;
  t1326 = t352*t205;
  t1357 = t282*t301*t418;
  t1367 = t1326 + t1357;
  t1384 = -1.*t205*t282;
  t1395 = t352*t301*t418;
  t1432 = t1384 + t1395;
  t992 = Cos(var1[11]);
  t1018 = 0. + t992;
  t1541 = t135*t418;
  t1549 = 0. + t1541;
  t1567 = t845*t1549;
  t1570 = t445*t1432;
  t1616 = t932*t1367;
  t1631 = 0. + t1570 + t1616;
  t1651 = t878*t1631;
  t1662 = 0. + t1567 + t1651;
  t1059 = Sin(var1[11]);
  t1951 = t445*t352*t135;
  t1952 = t135*t932*t282;
  t1959 = 0. + t1951 + t1952;
  t1974 = -1.*t301;
  t1982 = 0. + t1974;
  t2029 = t878*t1959;
  t2083 = t845*t1982;
  t2087 = 0. + t2029 + t2083;
  t277 = 0.21935*t135*t205;
  t2221 = Cos(var1[6]);
  t2262 = Sin(var1[6]);
  t2311 = Cos(var1[7]);
  t2314 = t2221*t597;
  t2364 = -1.*t2262;
  t2369 = 0. + t2364;
  t2374 = t423*t2369;
  t2387 = 0. + t2314 + t2374;
  t2388 = t2311*t2387;
  t2429 = Sin(var1[7]);
  t2435 = t827*t2429;
  t2445 = 0. + t2388 + t2435;
  t1295 = 0.21935*t135*t418;
  t2243 = 0. + t2221;
  t2477 = Cos(var1[8]);
  t2492 = 0. + t2477;
  t2681 = t2221*t1432;
  t2702 = t1367*t2369;
  t2722 = 0. + t2681 + t2702;
  t2723 = t2311*t2722;
  t2726 = t1549*t2429;
  t2728 = 0. + t2723 + t2726;
  t2537 = Sin(var1[8]);
  t2160 = -0.21935*t301;
  t3039 = t352*t135*t2221;
  t3044 = t135*t282*t2369;
  t3057 = 0. + t3039 + t3044;
  t3059 = t2311*t3057;
  t3088 = t1982*t2429;
  t3093 = 0. + t3059 + t3088;
  t432 = 0.0875*t423;
  t3275 = Sin(var1[15]);
  t3238 = Cos(var1[15]);
  t3353 = Sin(var1[16]);
  t3368 = t827*t3353;
  t3380 = Cos(var1[16]);
  t3387 = -1.*t3275;
  t3388 = 0. + t3387;
  t3393 = t3388*t423;
  t3394 = t3238*t597;
  t3397 = 0. + t3393 + t3394;
  t3405 = t3380*t3397;
  t3418 = 0. + t3368 + t3405;
  t1371 = 0.0875*t1367;
  t3262 = 0. + t3238;
  t3421 = Cos(var1[17]);
  t3423 = 0. + t3421;
  t3693 = t3353*t1549;
  t3697 = t3238*t1432;
  t3700 = t3388*t1367;
  t3706 = 0. + t3697 + t3700;
  t3711 = t3380*t3706;
  t3713 = 0. + t3693 + t3711;
  t3458 = Sin(var1[17]);
  t1900 = 0.0875*t135*t282;
  t3755 = t3238*t352*t135;
  t3758 = t135*t3388*t282;
  t3759 = 0. + t3755 + t3758;
  t3811 = t3380*t3759;
  t3812 = t3353*t1982;
  t3819 = 0. + t3811 + t3812;
  p_output1[0]=t277 + t432 + 0.037*(0. + t423*t452 + t469*t597) - 0.25*t964 - 0.27*(t1059*(0. + t827*t878 - 1.*t845*t955) + t1018*t964) + var1[0];
  p_output1[1]=t1295 + t1371 - 0.25*t1662 + 0.037*(0. + t1367*t452 + t1432*t469) - 0.27*(t1018*t1662 + t1059*(0. - 1.*t1631*t845 + t1549*t878)) + var1[1];
  p_output1[2]=t1900 - 0.25*t2087 + t2160 + 0.037*(0. + t135*t282*t452 + t135*t352*t469) - 0.27*(t1018*t2087 + t1059*(0. - 1.*t1959*t845 + t1982*t878)) + var1[2];
  p_output1[3]=-0.25*t2445 + t277 - 0.0875*t423 - 0.037*(0. + t2243*t423 + t2262*t597) - 0.27*(t2445*t2492 + t2537*(0. - 1.*t2387*t2429 + t2311*t827)) + var1[0];
  p_output1[4]=t1295 - 0.0875*t1367 - 0.037*(0. + t1367*t2243 + t1432*t2262) - 0.25*t2728 - 0.27*(t2537*(0. + t1549*t2311 - 1.*t2429*t2722) + t2492*t2728) + var1[1];
  p_output1[5]=t2160 - 0.0875*t135*t282 - 0.25*t3093 - 0.27*(t2537*(0. + t1982*t2311 - 1.*t2429*t3057) + t2492*t3093) - 0.037*(0. + t135*t2243*t282 + t135*t2262*t352) + var1[2];
  p_output1[6]=-0.21935*t135*t205 - 0.25*t3418 + t432 + 0.037*(0. + t3262*t423 + t3275*t597) - 0.27*(t3418*t3423 + t3458*(0. - 1.*t3353*t3397 + t3380*t827)) + var1[0];
  p_output1[7]=t1371 + 0.037*(0. + t1367*t3262 + t1432*t3275) - 0.25*t3713 - 0.27*(t3458*(0. + t1549*t3380 - 1.*t3353*t3706) + t3423*t3713) - 0.21935*t135*t418 + var1[1];
  p_output1[8]=t1900 + 0.21935*t301 + 0.037*(0. + t135*t282*t3262 + t135*t3275*t352) - 0.25*t3819 - 0.27*(t3458*(0. + t1982*t3380 - 1.*t3353*t3759) + t3423*t3819) + var1[2];
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

#include "Reset_F_1_func.hh"

namespace SymFunction
{

void Reset_F_1_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
