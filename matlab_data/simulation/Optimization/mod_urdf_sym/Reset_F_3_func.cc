/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 13:01:03 GMT-05:00
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
  double t301;
  double t423;
  double t432;
  double t481;
  double t492;
  double t597;
  double t613;
  double t615;
  double t135;
  double t875;
  double t715;
  double t878;
  double t890;
  double t932;
  double t992;
  double t1018;
  double t1040;
  double t1059;
  double t1089;
  double t1099;
  double t1114;
  double t1132;
  double t1148;
  double t1242;
  double t1271;
  double t1277;
  double t744;
  double t1549;
  double t1567;
  double t1570;
  double t1651;
  double t1662;
  double t1664;
  double t1308;
  double t1326;
  double t1814;
  double t1886;
  double t1894;
  double t1897;
  double t1900;
  double t1920;
  double t1924;
  double t1934;
  double t1367;
  double t2144;
  double t2160;
  double t2202;
  double t2221;
  double t2243;
  double t2305;
  double t2311;
  double t2314;
  double t349;
  double t2528;
  double t2560;
  double t2593;
  double t2655;
  double t2674;
  double t2675;
  double t2681;
  double t2702;
  double t2723;
  double t2726;
  double t2728;
  double t2764;
  double t1541;
  double t2535;
  double t2774;
  double t2788;
  double t3088;
  double t3093;
  double t3119;
  double t3121;
  double t3122;
  double t3123;
  double t2850;
  double t2477;
  double t3393;
  double t3394;
  double t3405;
  double t3418;
  double t3420;
  double t3421;
  double t2505;
  double t3700;
  double t3687;
  double t3720;
  double t3721;
  double t3722;
  double t3725;
  double t3727;
  double t3728;
  double t3730;
  double t3741;
  double t3743;
  double t3744;
  double t2982;
  double t3693;
  double t3752;
  double t3753;
  double t3848;
  double t3849;
  double t3853;
  double t3859;
  double t3866;
  double t3874;
  double t3764;
  double t3325;
  double t3926;
  double t3929;
  double t3935;
  double t3951;
  double t3966;
  double t3969;
  t301 = Cos(var1[5]);
  t423 = Sin(var1[3]);
  t432 = Sin(var1[4]);
  t481 = t301*t423*t432;
  t492 = Cos(var1[3]);
  t597 = Sin(var1[5]);
  t613 = -1.*t492*t597;
  t615 = t481 + t613;
  t135 = Cos(var1[4]);
  t875 = Sin(var1[9]);
  t715 = Cos(var1[9]);
  t878 = t492*t301*t432;
  t890 = t423*t597;
  t932 = t878 + t890;
  t992 = t135*t301;
  t1018 = 0. + t992;
  t1040 = Sin(var1[10]);
  t1059 = t1018*t1040;
  t1089 = Cos(var1[10]);
  t1099 = -1.*t875;
  t1114 = 0. + t1099;
  t1132 = t1114*t615;
  t1148 = t715*t932;
  t1242 = 0. + t1132 + t1148;
  t1271 = t1089*t1242;
  t1277 = 0. + t1059 + t1271;
  t744 = 0. + t715;
  t1549 = t492*t301;
  t1567 = t423*t432*t597;
  t1570 = t1549 + t1567;
  t1651 = -1.*t301*t423;
  t1662 = t492*t432*t597;
  t1664 = t1651 + t1662;
  t1308 = Cos(var1[11]);
  t1326 = 0. + t1308;
  t1814 = t135*t597;
  t1886 = 0. + t1814;
  t1894 = t1040*t1886;
  t1897 = t715*t1664;
  t1900 = t1114*t1570;
  t1920 = 0. + t1897 + t1900;
  t1924 = t1089*t1920;
  t1934 = 0. + t1894 + t1924;
  t1367 = Sin(var1[11]);
  t2144 = t715*t492*t135;
  t2160 = t135*t1114*t423;
  t2202 = 0. + t2144 + t2160;
  t2221 = -1.*t432;
  t2243 = 0. + t2221;
  t2305 = t1089*t2202;
  t2311 = t1040*t2243;
  t2314 = 0. + t2305 + t2311;
  t349 = 0.21935*t135*t301;
  t2528 = Cos(var1[6]);
  t2560 = Sin(var1[6]);
  t2593 = Cos(var1[7]);
  t2655 = t2528*t932;
  t2674 = -1.*t2560;
  t2675 = 0. + t2674;
  t2681 = t615*t2675;
  t2702 = 0. + t2655 + t2681;
  t2723 = t2593*t2702;
  t2726 = Sin(var1[7]);
  t2728 = t1018*t2726;
  t2764 = 0. + t2723 + t2728;
  t1541 = 0.21935*t135*t597;
  t2535 = 0. + t2528;
  t2774 = Cos(var1[8]);
  t2788 = 0. + t2774;
  t3088 = t2528*t1664;
  t3093 = t1570*t2675;
  t3119 = 0. + t3088 + t3093;
  t3121 = t2593*t3119;
  t3122 = t1886*t2726;
  t3123 = 0. + t3121 + t3122;
  t2850 = Sin(var1[8]);
  t2477 = -0.21935*t432;
  t3393 = t492*t135*t2528;
  t3394 = t135*t423*t2675;
  t3405 = 0. + t3393 + t3394;
  t3418 = t2593*t3405;
  t3420 = t2243*t2726;
  t3421 = 0. + t3418 + t3420;
  t2505 = -0.0875*t615;
  t3700 = Sin(var1[12]);
  t3687 = Cos(var1[12]);
  t3720 = Sin(var1[13]);
  t3721 = t1018*t3720;
  t3722 = Cos(var1[13]);
  t3725 = -1.*t3700;
  t3727 = 0. + t3725;
  t3728 = t3727*t615;
  t3730 = t3687*t932;
  t3741 = 0. + t3728 + t3730;
  t3743 = t3722*t3741;
  t3744 = 0. + t3721 + t3743;
  t2982 = -0.0875*t1570;
  t3693 = 0. + t3687;
  t3752 = Cos(var1[14]);
  t3753 = 0. + t3752;
  t3848 = t3720*t1886;
  t3849 = t3687*t1664;
  t3853 = t3727*t1570;
  t3859 = 0. + t3849 + t3853;
  t3866 = t3722*t3859;
  t3874 = 0. + t3848 + t3866;
  t3764 = Sin(var1[14]);
  t3325 = -0.0875*t135*t423;
  t3926 = t3687*t492*t135;
  t3929 = t135*t3727*t423;
  t3935 = 0. + t3926 + t3929;
  t3951 = t3722*t3935;
  t3966 = t3720*t2243;
  t3969 = 0. + t3951 + t3966;
  p_output1[0]=-0.25*t1277 - 0.27*(t1277*t1326 + (0. + t1018*t1089 - 1.*t1040*t1242)*t1367) + t349 + 0.0875*t615 + 0.037*(0. + t615*t744 + t875*t932) + var1[0];
  p_output1[1]=t1541 + 0.0875*t1570 - 0.25*t1934 - 0.27*(t1367*(0. + t1089*t1886 - 1.*t1040*t1920) + t1326*t1934) + 0.037*(0. + t1570*t744 + t1664*t875) + var1[1];
  p_output1[2]=-0.25*t2314 - 0.27*(t1367*(0. - 1.*t1040*t2202 + t1089*t2243) + t1326*t2314) + t2477 + 0.0875*t135*t423 + 0.037*(0. + t135*t423*t744 + t135*t492*t875) + var1[2];
  p_output1[3]=t2505 - 0.25*t2764 - 0.27*(t2764*t2788 + (0. + t1018*t2593 - 1.*t2702*t2726)*t2850) + t349 - 0.037*(0. + t2535*t615 + t2560*t932) + var1[0];
  p_output1[4]=t1541 - 0.037*(0. + t1570*t2535 + t1664*t2560) + t2982 - 0.25*t3123 - 0.27*(t2850*(0. + t1886*t2593 - 1.*t2726*t3119) + t2788*t3123) + var1[1];
  p_output1[5]=t2477 + t3325 - 0.25*t3421 - 0.27*(t2850*(0. + t2243*t2593 - 1.*t2726*t3405) + t2788*t3421) - 0.037*(0. + t135*t2535*t423 + t135*t2560*t492) + var1[2];
  p_output1[6]=t2505 - 0.21935*t135*t301 - 0.25*t3744 - 0.27*(t3744*t3753 + (0. + t1018*t3722 - 1.*t3720*t3741)*t3764) - 0.037*(0. + t3693*t615 + t3700*t932) + var1[0];
  p_output1[7]=t2982 - 0.037*(0. + t1570*t3693 + t1664*t3700) - 0.25*t3874 - 0.27*(t3764*(0. + t1886*t3722 - 1.*t3720*t3859) + t3753*t3874) - 0.21935*t135*t597 + var1[1];
  p_output1[8]=t3325 - 0.25*t3969 - 0.27*(t3764*(0. + t2243*t3722 - 1.*t3720*t3935) + t3753*t3969) + 0.21935*t432 - 0.037*(0. + t135*t3693*t423 + t135*t3700*t492) + var1[2];
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

#include "Reset_F_3_func.hh"

namespace SymFunction
{

void Reset_F_3_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
