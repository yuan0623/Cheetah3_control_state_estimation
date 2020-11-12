/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 13:01:01 GMT-05:00
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
  double t277;
  double t315;
  double t423;
  double t432;
  double t445;
  double t452;
  double t457;
  double t481;
  double t135;
  double t633;
  double t597;
  double t651;
  double t715;
  double t744;
  double t890;
  double t932;
  double t941;
  double t949;
  double t958;
  double t964;
  double t978;
  double t992;
  double t1018;
  double t1033;
  double t1059;
  double t1089;
  double t613;
  double t1432;
  double t1489;
  double t1494;
  double t1538;
  double t1539;
  double t1541;
  double t1114;
  double t1132;
  double t1651;
  double t1662;
  double t1664;
  double t1674;
  double t1696;
  double t1772;
  double t1780;
  double t1798;
  double t1242;
  double t2001;
  double t2004;
  double t2028;
  double t2083;
  double t2087;
  double t2144;
  double t2160;
  double t2202;
  double t492;
  double t2374;
  double t2311;
  double t2462;
  double t2477;
  double t2492;
  double t2493;
  double t2505;
  double t2528;
  double t2535;
  double t2537;
  double t2552;
  double t2560;
  double t1513;
  double t2314;
  double t2569;
  double t2581;
  double t2798;
  double t2807;
  double t2809;
  double t2885;
  double t2920;
  double t2965;
  double t2655;
  double t1951;
  double t3125;
  double t3131;
  double t3181;
  double t3266;
  double t3324;
  double t3325;
  double t2305;
  double t3423;
  double t3418;
  double t3555;
  double t3563;
  double t3568;
  double t3599;
  double t3608;
  double t3617;
  double t3620;
  double t3624;
  double t3629;
  double t3672;
  double t2764;
  double t3420;
  double t3693;
  double t3697;
  double t3752;
  double t3753;
  double t3755;
  double t3758;
  double t3764;
  double t3789;
  double t3711;
  double t3859;
  double t3866;
  double t3868;
  double t3894;
  double t3896;
  double t3900;
  double t3393;
  t277 = Cos(var1[5]);
  t315 = Sin(var1[3]);
  t423 = Sin(var1[4]);
  t432 = t277*t315*t423;
  t445 = Cos(var1[3]);
  t452 = Sin(var1[5]);
  t457 = -1.*t445*t452;
  t481 = t432 + t457;
  t135 = Cos(var1[4]);
  t633 = Sin(var1[9]);
  t597 = Cos(var1[9]);
  t651 = t445*t277*t423;
  t715 = t315*t452;
  t744 = t651 + t715;
  t890 = t135*t277;
  t932 = 0. + t890;
  t941 = Sin(var1[10]);
  t949 = t932*t941;
  t958 = Cos(var1[10]);
  t964 = -1.*t633;
  t978 = 0. + t964;
  t992 = t978*t481;
  t1018 = t597*t744;
  t1033 = 0. + t992 + t1018;
  t1059 = t958*t1033;
  t1089 = 0. + t949 + t1059;
  t613 = 0. + t597;
  t1432 = t445*t277;
  t1489 = t315*t423*t452;
  t1494 = t1432 + t1489;
  t1538 = -1.*t277*t315;
  t1539 = t445*t423*t452;
  t1541 = t1538 + t1539;
  t1114 = Cos(var1[11]);
  t1132 = 0. + t1114;
  t1651 = t135*t452;
  t1662 = 0. + t1651;
  t1664 = t941*t1662;
  t1674 = t597*t1541;
  t1696 = t978*t1494;
  t1772 = 0. + t1674 + t1696;
  t1780 = t958*t1772;
  t1798 = 0. + t1664 + t1780;
  t1242 = Sin(var1[11]);
  t2001 = t597*t445*t135;
  t2004 = t135*t978*t315;
  t2028 = 0. + t2001 + t2004;
  t2083 = -1.*t423;
  t2087 = 0. + t2083;
  t2144 = t958*t2028;
  t2160 = t941*t2087;
  t2202 = 0. + t2144 + t2160;
  t492 = 0.0875*t481;
  t2374 = Sin(var1[15]);
  t2311 = Cos(var1[15]);
  t2462 = Sin(var1[16]);
  t2477 = t932*t2462;
  t2492 = Cos(var1[16]);
  t2493 = -1.*t2374;
  t2505 = 0. + t2493;
  t2528 = t2505*t481;
  t2535 = t2311*t744;
  t2537 = 0. + t2528 + t2535;
  t2552 = t2492*t2537;
  t2560 = 0. + t2477 + t2552;
  t1513 = 0.0875*t1494;
  t2314 = 0. + t2311;
  t2569 = Cos(var1[17]);
  t2581 = 0. + t2569;
  t2798 = t2462*t1662;
  t2807 = t2311*t1541;
  t2809 = t2505*t1494;
  t2885 = 0. + t2807 + t2809;
  t2920 = t2492*t2885;
  t2965 = 0. + t2798 + t2920;
  t2655 = Sin(var1[17]);
  t1951 = 0.0875*t135*t315;
  t3125 = t2311*t445*t135;
  t3131 = t135*t2505*t315;
  t3181 = 0. + t3125 + t3131;
  t3266 = t2492*t3181;
  t3324 = t2462*t2087;
  t3325 = 0. + t3266 + t3324;
  t2305 = -0.21935*t135*t277;
  t3423 = Sin(var1[12]);
  t3418 = Cos(var1[12]);
  t3555 = Sin(var1[13]);
  t3563 = t932*t3555;
  t3568 = Cos(var1[13]);
  t3599 = -1.*t3423;
  t3608 = 0. + t3599;
  t3617 = t3608*t481;
  t3620 = t3418*t744;
  t3624 = 0. + t3617 + t3620;
  t3629 = t3568*t3624;
  t3672 = 0. + t3563 + t3629;
  t2764 = -0.21935*t135*t452;
  t3420 = 0. + t3418;
  t3693 = Cos(var1[14]);
  t3697 = 0. + t3693;
  t3752 = t3555*t1662;
  t3753 = t3418*t1541;
  t3755 = t3608*t1494;
  t3758 = 0. + t3753 + t3755;
  t3764 = t3568*t3758;
  t3789 = 0. + t3752 + t3764;
  t3711 = Sin(var1[14]);
  t3859 = t3418*t445*t135;
  t3866 = t135*t3608*t315;
  t3868 = 0. + t3859 + t3866;
  t3894 = t3568*t3868;
  t3896 = t3555*t2087;
  t3900 = 0. + t3894 + t3896;
  t3393 = 0.21935*t423;
  p_output1[0]=-0.25*t1089 + 0.21935*t135*t277 + t492 + 0.037*(0. + t481*t613 + t633*t744) - 0.27*(t1089*t1132 + t1242*(0. - 1.*t1033*t941 + t932*t958)) + var1[0];
  p_output1[1]=t1513 - 0.25*t1798 + 0.21935*t135*t452 + 0.037*(0. + t1494*t613 + t1541*t633) - 0.27*(t1132*t1798 + t1242*(0. - 1.*t1772*t941 + t1662*t958)) + var1[1];
  p_output1[2]=t1951 - 0.25*t2202 - 0.21935*t423 + 0.037*(0. + t135*t315*t613 + t135*t445*t633) - 0.27*(t1132*t2202 + t1242*(0. - 1.*t2028*t941 + t2087*t958)) + var1[2];
  p_output1[3]=t2305 - 0.25*t2560 + t492 + 0.037*(0. + t2314*t481 + t2374*t744) - 0.27*(t2560*t2581 + t2655*(0. - 1.*t2462*t2537 + t2492*t932)) + var1[0];
  p_output1[4]=t1513 + 0.037*(0. + t1494*t2314 + t1541*t2374) + t2764 - 0.25*t2965 - 0.27*(t2655*(0. + t1662*t2492 - 1.*t2462*t2885) + t2581*t2965) + var1[1];
  p_output1[5]=t1951 - 0.25*t3325 - 0.27*(t2655*(0. + t2087*t2492 - 1.*t2462*t3181) + t2581*t3325) + t3393 + 0.037*(0. + t135*t2314*t315 + t135*t2374*t445) + var1[2];
  p_output1[6]=t2305 - 0.25*t3672 - 0.0875*t481 - 0.037*(0. + t3420*t481 + t3423*t744) - 0.27*(t3672*t3697 + t3711*(0. - 1.*t3555*t3624 + t3568*t932)) + var1[0];
  p_output1[7]=-0.0875*t1494 + t2764 - 0.037*(0. + t1494*t3420 + t1541*t3423) - 0.25*t3789 - 0.27*(t3711*(0. + t1662*t3568 - 1.*t3555*t3758) + t3697*t3789) + var1[1];
  p_output1[8]=-0.0875*t135*t315 + t3393 - 0.25*t3900 - 0.27*(t3711*(0. + t2087*t3568 - 1.*t3555*t3868) + t3697*t3900) - 0.037*(0. + t135*t315*t3420 + t135*t3423*t445) + var1[2];
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

#include "Reset_F_2_func.hh"

namespace SymFunction
{

void Reset_F_2_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
