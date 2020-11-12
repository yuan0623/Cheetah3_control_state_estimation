/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 13:01:05 GMT-05:00
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
  double t123;
  double t349;
  double t432;
  double t481;
  double t590;
  double t615;
  double t651;
  double t715;
  double t827;
  double t932;
  double t949;
  double t958;
  double t978;
  double t59;
  double t1089;
  double t1114;
  double t1132;
  double t1148;
  double t1271;
  double t1277;
  double t1295;
  double t1308;
  double t1326;
  double t1357;
  double t1367;
  double t1371;
  double t878;
  double t1674;
  double t1696;
  double t1780;
  double t1886;
  double t1894;
  double t1897;
  double t1432;
  double t1489;
  double t1937;
  double t1951;
  double t1952;
  double t1962;
  double t1974;
  double t1982;
  double t2001;
  double t2004;
  double t1549;
  double t2305;
  double t2311;
  double t2314;
  double t2369;
  double t2388;
  double t2435;
  double t2445;
  double t2477;
  double t2764;
  double t2681;
  double t2793;
  double t2798;
  double t2807;
  double t2809;
  double t2850;
  double t2858;
  double t2920;
  double t2942;
  double t2965;
  double t2973;
  double t2723;
  double t2999;
  double t3031;
  double t3266;
  double t3324;
  double t3325;
  double t3344;
  double t3368;
  double t3380;
  double t3044;
  double t3629;
  double t3672;
  double t3687;
  double t3715;
  double t3721;
  double t3722;
  double t2655;
  double t744;
  double t3764;
  double t3752;
  double t3811;
  double t3812;
  double t3819;
  double t3820;
  double t3823;
  double t3832;
  double t3841;
  double t3842;
  double t3845;
  double t3848;
  double t3125;
  double t1798;
  double t3753;
  double t3853;
  double t3866;
  double t3922;
  double t3926;
  double t3929;
  double t3936;
  double t3939;
  double t3941;
  double t3875;
  double t2221;
  double t4024;
  double t4042;
  double t4049;
  double t4081;
  double t4082;
  double t4087;
  double t3744;
  t123 = Cos(var1[5]);
  t349 = Sin(var1[3]);
  t432 = Sin(var1[4]);
  t481 = t123*t349*t432;
  t590 = Cos(var1[3]);
  t615 = Sin(var1[5]);
  t651 = -1.*t590*t615;
  t715 = t481 + t651;
  t827 = Cos(var1[6]);
  t932 = t590*t123*t432;
  t949 = t349*t615;
  t958 = t932 + t949;
  t978 = Sin(var1[6]);
  t59 = Cos(var1[4]);
  t1089 = Cos(var1[7]);
  t1114 = t827*t958;
  t1132 = -1.*t978;
  t1148 = 0. + t1132;
  t1271 = t715*t1148;
  t1277 = 0. + t1114 + t1271;
  t1295 = t1089*t1277;
  t1308 = t59*t123;
  t1326 = 0. + t1308;
  t1357 = Sin(var1[7]);
  t1367 = t1326*t1357;
  t1371 = 0. + t1295 + t1367;
  t878 = 0. + t827;
  t1674 = t590*t123;
  t1696 = t349*t432*t615;
  t1780 = t1674 + t1696;
  t1886 = -1.*t123*t349;
  t1894 = t590*t432*t615;
  t1897 = t1886 + t1894;
  t1432 = Cos(var1[8]);
  t1489 = 0. + t1432;
  t1937 = t827*t1897;
  t1951 = t1780*t1148;
  t1952 = 0. + t1937 + t1951;
  t1962 = t1089*t1952;
  t1974 = t59*t615;
  t1982 = 0. + t1974;
  t2001 = t1982*t1357;
  t2004 = 0. + t1962 + t2001;
  t1549 = Sin(var1[8]);
  t2305 = t590*t59*t827;
  t2311 = t59*t349*t1148;
  t2314 = 0. + t2305 + t2311;
  t2369 = t1089*t2314;
  t2388 = -1.*t432;
  t2435 = 0. + t2388;
  t2445 = t2435*t1357;
  t2477 = 0. + t2369 + t2445;
  t2764 = Sin(var1[15]);
  t2681 = Cos(var1[15]);
  t2793 = Sin(var1[16]);
  t2798 = t1326*t2793;
  t2807 = Cos(var1[16]);
  t2809 = -1.*t2764;
  t2850 = 0. + t2809;
  t2858 = t2850*t715;
  t2920 = t2681*t958;
  t2942 = 0. + t2858 + t2920;
  t2965 = t2807*t2942;
  t2973 = 0. + t2798 + t2965;
  t2723 = 0. + t2681;
  t2999 = Cos(var1[17]);
  t3031 = 0. + t2999;
  t3266 = t2793*t1982;
  t3324 = t2681*t1897;
  t3325 = t2850*t1780;
  t3344 = 0. + t3324 + t3325;
  t3368 = t2807*t3344;
  t3380 = 0. + t3266 + t3368;
  t3044 = Sin(var1[17]);
  t3629 = t2681*t590*t59;
  t3672 = t59*t2850*t349;
  t3687 = 0. + t3629 + t3672;
  t3715 = t2807*t3687;
  t3721 = t2793*t2435;
  t3722 = 0. + t3715 + t3721;
  t2655 = -0.21935*t59*t123;
  t744 = -0.0875*t715;
  t3764 = Sin(var1[12]);
  t3752 = Cos(var1[12]);
  t3811 = Sin(var1[13]);
  t3812 = t1326*t3811;
  t3819 = Cos(var1[13]);
  t3820 = -1.*t3764;
  t3823 = 0. + t3820;
  t3832 = t3823*t715;
  t3841 = t3752*t958;
  t3842 = 0. + t3832 + t3841;
  t3845 = t3819*t3842;
  t3848 = 0. + t3812 + t3845;
  t3125 = -0.21935*t59*t615;
  t1798 = -0.0875*t1780;
  t3753 = 0. + t3752;
  t3853 = Cos(var1[14]);
  t3866 = 0. + t3853;
  t3922 = t3811*t1982;
  t3926 = t3752*t1897;
  t3929 = t3823*t1780;
  t3936 = 0. + t3926 + t3929;
  t3939 = t3819*t3936;
  t3941 = 0. + t3922 + t3939;
  t3875 = Sin(var1[14]);
  t2221 = -0.0875*t59*t349;
  t4024 = t3752*t590*t59;
  t4042 = t59*t3823*t349;
  t4049 = 0. + t4024 + t4042;
  t4081 = t3819*t4049;
  t4082 = t3811*t2435;
  t4087 = 0. + t4081 + t4082;
  t3744 = 0.21935*t432;
  p_output1[0]=-0.25*t1371 - 0.27*(t1371*t1489 + (0. + t1089*t1326 - 1.*t1277*t1357)*t1549) + 0.21935*t123*t59 + t744 - 0.037*(0. + t715*t878 + t958*t978) + var1[0];
  p_output1[1]=t1798 - 0.25*t2004 - 0.27*(t1549*(0. - 1.*t1357*t1952 + t1089*t1982) + t1489*t2004) + 0.21935*t59*t615 - 0.037*(0. + t1780*t878 + t1897*t978) + var1[1];
  p_output1[2]=t2221 - 0.25*t2477 - 0.27*(t1549*(0. - 1.*t1357*t2314 + t1089*t2435) + t1489*t2477) - 0.21935*t432 - 0.037*(0. + t349*t59*t878 + t59*t590*t978) + var1[2];
  p_output1[3]=t2655 - 0.25*t2973 - 0.27*(t2973*t3031 + (0. + t1326*t2807 - 1.*t2793*t2942)*t3044) + 0.0875*t715 + 0.037*(0. + t2723*t715 + t2764*t958) + var1[0];
  p_output1[4]=0.0875*t1780 + 0.037*(0. + t1780*t2723 + t1897*t2764) + t3125 - 0.25*t3380 - 0.27*(t3044*(0. + t1982*t2807 - 1.*t2793*t3344) + t3031*t3380) + var1[1];
  p_output1[5]=-0.25*t3722 - 0.27*(t3044*(0. + t2435*t2807 - 1.*t2793*t3687) + t3031*t3722) + t3744 + 0.0875*t349*t59 + 0.037*(0. + t2723*t349*t59 + t2764*t59*t590) + var1[2];
  p_output1[6]=t2655 - 0.25*t3848 - 0.27*(t3848*t3866 + (0. + t1326*t3819 - 1.*t3811*t3842)*t3875) + t744 - 0.037*(0. + t3753*t715 + t3764*t958) + var1[0];
  p_output1[7]=t1798 + t3125 - 0.037*(0. + t1780*t3753 + t1897*t3764) - 0.25*t3941 - 0.27*(t3875*(0. + t1982*t3819 - 1.*t3811*t3936) + t3866*t3941) + var1[1];
  p_output1[8]=t2221 + t3744 - 0.25*t4087 - 0.27*(t3875*(0. + t2435*t3819 - 1.*t3811*t4049) + t3866*t4087) - 0.037*(0. + t349*t3753*t59 + t3764*t59*t590) + var1[2];
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

#include "Reset_F_4_func.hh"

namespace SymFunction
{

void Reset_F_4_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
