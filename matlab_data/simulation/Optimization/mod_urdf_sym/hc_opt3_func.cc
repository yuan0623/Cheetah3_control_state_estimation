/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 13:01:20 GMT-05:00
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
  double t219;
  double t468;
  double t532;
  double t642;
  double t728;
  double t729;
  double t730;
  double t768;
  double t790;
  double t882;
  double t1018;
  double t1062;
  double t1065;
  double t140;
  double t1180;
  double t1196;
  double t1269;
  double t1270;
  double t1283;
  double t1320;
  double t1343;
  double t1366;
  double t1378;
  double t1473;
  double t1513;
  double t1515;
  double t798;
  double t1644;
  double t1679;
  double t1700;
  double t1742;
  double t1770;
  double t1776;
  double t1523;
  double t1537;
  double t1801;
  double t1839;
  double t1843;
  double t1856;
  double t1880;
  double t1887;
  double t1897;
  double t1962;
  double t1587;
  double t2302;
  double t2303;
  double t2324;
  double t2332;
  double t2339;
  double t2343;
  double t2347;
  double t2365;
  double t455;
  double t2533;
  double t2494;
  double t2583;
  double t2615;
  double t2632;
  double t2659;
  double t2661;
  double t2681;
  double t2693;
  double t2694;
  double t2720;
  double t2721;
  double t1622;
  double t2506;
  double t2757;
  double t2774;
  double t3031;
  double t3039;
  double t3044;
  double t3047;
  double t3048;
  double t3073;
  double t2819;
  double t3273;
  double t3274;
  double t3291;
  double t3374;
  double t3375;
  double t3393;
  double t2243;
  double t2447;
  double t3490;
  double t3458;
  double t3559;
  double t3565;
  double t3575;
  double t3589;
  double t3602;
  double t3614;
  double t3616;
  double t3617;
  double t3625;
  double t3651;
  double t2963;
  double t3465;
  double t3655;
  double t3693;
  double t3819;
  double t3826;
  double t3840;
  double t3853;
  double t3854;
  double t3866;
  double t3728;
  double t3174;
  double t3946;
  double t3947;
  double t3950;
  double t3998;
  double t3999;
  double t4004;
  double t3448;
  double t781;
  double t4118;
  double t4057;
  double t4144;
  double t4145;
  double t4148;
  double t4149;
  double t4156;
  double t4165;
  double t4174;
  double t4178;
  double t4179;
  double t4183;
  double t3769;
  double t1715;
  double t4072;
  double t4205;
  double t4208;
  double t4336;
  double t4343;
  double t4358;
  double t4361;
  double t4362;
  double t4363;
  double t4213;
  double t2231;
  double t4482;
  double t4486;
  double t4493;
  double t4606;
  double t4609;
  double t4611;
  double t4039;
  t219 = Cos(var1[5]);
  t468 = Sin(var1[3]);
  t532 = Sin(var1[4]);
  t642 = t219*t468*t532;
  t728 = Cos(var1[3]);
  t729 = Sin(var1[5]);
  t730 = -1.*t728*t729;
  t768 = t642 + t730;
  t790 = Cos(var1[6]);
  t882 = t728*t219*t532;
  t1018 = t468*t729;
  t1062 = t882 + t1018;
  t1065 = Sin(var1[6]);
  t140 = Cos(var1[4]);
  t1180 = Cos(var1[7]);
  t1196 = t790*t1062;
  t1269 = -1.*t1065;
  t1270 = 0. + t1269;
  t1283 = t768*t1270;
  t1320 = 0. + t1196 + t1283;
  t1343 = t1180*t1320;
  t1366 = t140*t219;
  t1378 = 0. + t1366;
  t1473 = Sin(var1[7]);
  t1513 = t1378*t1473;
  t1515 = 0. + t1343 + t1513;
  t798 = 0. + t790;
  t1644 = t728*t219;
  t1679 = t468*t532*t729;
  t1700 = t1644 + t1679;
  t1742 = -1.*t219*t468;
  t1770 = t728*t532*t729;
  t1776 = t1742 + t1770;
  t1523 = Cos(var1[8]);
  t1537 = 0. + t1523;
  t1801 = t790*t1776;
  t1839 = t1700*t1270;
  t1843 = 0. + t1801 + t1839;
  t1856 = t1180*t1843;
  t1880 = t140*t729;
  t1887 = 0. + t1880;
  t1897 = t1887*t1473;
  t1962 = 0. + t1856 + t1897;
  t1587 = Sin(var1[8]);
  t2302 = t728*t140*t790;
  t2303 = t140*t468*t1270;
  t2324 = 0. + t2302 + t2303;
  t2332 = t1180*t2324;
  t2339 = -1.*t532;
  t2343 = 0. + t2339;
  t2347 = t2343*t1473;
  t2365 = 0. + t2332 + t2347;
  t455 = 0.21935*t140*t219;
  t2533 = Sin(var1[9]);
  t2494 = Cos(var1[9]);
  t2583 = Sin(var1[10]);
  t2615 = t1378*t2583;
  t2632 = Cos(var1[10]);
  t2659 = -1.*t2533;
  t2661 = 0. + t2659;
  t2681 = t2661*t768;
  t2693 = t2494*t1062;
  t2694 = 0. + t2681 + t2693;
  t2720 = t2632*t2694;
  t2721 = 0. + t2615 + t2720;
  t1622 = 0.21935*t140*t729;
  t2506 = 0. + t2494;
  t2757 = Cos(var1[11]);
  t2774 = 0. + t2757;
  t3031 = t2583*t1887;
  t3039 = t2494*t1776;
  t3044 = t2661*t1700;
  t3047 = 0. + t3039 + t3044;
  t3048 = t2632*t3047;
  t3073 = 0. + t3031 + t3048;
  t2819 = Sin(var1[11]);
  t3273 = t2494*t728*t140;
  t3274 = t140*t2661*t468;
  t3291 = 0. + t3273 + t3274;
  t3374 = t2632*t3291;
  t3375 = t2583*t2343;
  t3393 = 0. + t3374 + t3375;
  t2243 = -0.21935*t532;
  t2447 = 0.0875*t768;
  t3490 = Sin(var1[15]);
  t3458 = Cos(var1[15]);
  t3559 = Sin(var1[16]);
  t3565 = t1378*t3559;
  t3575 = Cos(var1[16]);
  t3589 = -1.*t3490;
  t3602 = 0. + t3589;
  t3614 = t3602*t768;
  t3616 = t3458*t1062;
  t3617 = 0. + t3614 + t3616;
  t3625 = t3575*t3617;
  t3651 = 0. + t3565 + t3625;
  t2963 = 0.0875*t1700;
  t3465 = 0. + t3458;
  t3655 = Cos(var1[17]);
  t3693 = 0. + t3655;
  t3819 = t3559*t1887;
  t3826 = t3458*t1776;
  t3840 = t3602*t1700;
  t3853 = 0. + t3826 + t3840;
  t3854 = t3575*t3853;
  t3866 = 0. + t3819 + t3854;
  t3728 = Sin(var1[17]);
  t3174 = 0.0875*t140*t468;
  t3946 = t3458*t728*t140;
  t3947 = t140*t3602*t468;
  t3950 = 0. + t3946 + t3947;
  t3998 = t3575*t3950;
  t3999 = t3559*t2343;
  t4004 = 0. + t3998 + t3999;
  t3448 = -0.21935*t140*t219;
  t781 = -0.0875*t768;
  t4118 = Sin(var1[12]);
  t4057 = Cos(var1[12]);
  t4144 = Sin(var1[13]);
  t4145 = t1378*t4144;
  t4148 = Cos(var1[13]);
  t4149 = -1.*t4118;
  t4156 = 0. + t4149;
  t4165 = t4156*t768;
  t4174 = t4057*t1062;
  t4178 = 0. + t4165 + t4174;
  t4179 = t4148*t4178;
  t4183 = 0. + t4145 + t4179;
  t3769 = -0.21935*t140*t729;
  t1715 = -0.0875*t1700;
  t4072 = 0. + t4057;
  t4205 = Cos(var1[14]);
  t4208 = 0. + t4205;
  t4336 = t4144*t1887;
  t4343 = t4057*t1776;
  t4358 = t4156*t1700;
  t4361 = 0. + t4343 + t4358;
  t4362 = t4148*t4361;
  t4363 = 0. + t4336 + t4362;
  t4213 = Sin(var1[14]);
  t2231 = -0.0875*t140*t468;
  t4482 = t4057*t728*t140;
  t4486 = t140*t4156*t468;
  t4493 = 0. + t4482 + t4486;
  t4606 = t4148*t4493;
  t4609 = t4144*t2343;
  t4611 = 0. + t4606 + t4609;
  t4039 = 0.21935*t532;
  p_output1[0]=var1[0];
  p_output1[1]=var1[1];
  p_output1[2]=var1[2];
  p_output1[3]=var1[3];
  p_output1[4]=var1[4];
  p_output1[5]=var1[5];
  p_output1[6]=-0.25*t1515 - 0.27*(t1515*t1537 + (0. + t1180*t1378 - 1.*t1320*t1473)*t1587) + t455 + t781 - 0.037*(0. + t1062*t1065 + t768*t798) + var1[0];
  p_output1[7]=t1622 + t1715 - 0.25*t1962 - 0.27*(t1587*(0. - 1.*t1473*t1843 + t1180*t1887) + t1537*t1962) - 0.037*(0. + t1065*t1776 + t1700*t798) + var1[1];
  p_output1[8]=t2231 + t2243 - 0.25*t2365 - 0.27*(t1587*(0. - 1.*t1473*t2324 + t1180*t2343) + t1537*t2365) - 0.037*(0. + t1065*t140*t728 + t140*t468*t798) + var1[2];
  p_output1[9]=t2447 - 0.25*t2721 - 0.27*(t2721*t2774 + (0. + t1378*t2632 - 1.*t2583*t2694)*t2819) + t455 + 0.037*(0. + t1062*t2533 + t2506*t768) + var1[0];
  p_output1[10]=t1622 + 0.037*(0. + t1700*t2506 + t1776*t2533) + t2963 - 0.25*t3073 - 0.27*(t2819*(0. + t1887*t2632 - 1.*t2583*t3047) + t2774*t3073) + var1[1];
  p_output1[11]=t2243 + t3174 - 0.25*t3393 - 0.27*(t2819*(0. + t2343*t2632 - 1.*t2583*t3291) + t2774*t3393) + 0.037*(0. + t140*t2506*t468 + t140*t2533*t728) + var1[2];
  p_output1[12]=t2447 + t3448 - 0.25*t3651 - 0.27*(t3651*t3693 + (0. + t1378*t3575 - 1.*t3559*t3617)*t3728) + 0.037*(0. + t1062*t3490 + t3465*t768) + var1[0];
  p_output1[13]=t2963 + 0.037*(0. + t1700*t3465 + t1776*t3490) + t3769 - 0.25*t3866 - 0.27*(t3728*(0. + t1887*t3575 - 1.*t3559*t3853) + t3693*t3866) + var1[1];
  p_output1[14]=t3174 - 0.25*t4004 - 0.27*(t3728*(0. + t2343*t3575 - 1.*t3559*t3950) + t3693*t4004) + t4039 + 0.037*(0. + t140*t3465*t468 + t140*t3490*t728) + var1[2];
  p_output1[15]=t3448 - 0.25*t4183 - 0.27*(t4183*t4208 + (0. + t1378*t4148 - 1.*t4144*t4178)*t4213) - 0.037*(0. + t1062*t4118 + t4072*t768) + t781 + var1[0];
  p_output1[16]=t1715 + t3769 - 0.037*(0. + t1700*t4072 + t1776*t4118) - 0.25*t4363 - 0.27*(t4213*(0. + t1887*t4148 - 1.*t4144*t4361) + t4208*t4363) + var1[1];
  p_output1[17]=t2231 + t4039 - 0.25*t4611 - 0.27*(t4213*(0. + t2343*t4148 - 1.*t4144*t4493) + t4208*t4611) - 0.037*(0. + t140*t4072*t468 + t140*t4118*t728) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "hc_opt3_func.hh"

namespace SymFunction
{

void hc_opt3_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
