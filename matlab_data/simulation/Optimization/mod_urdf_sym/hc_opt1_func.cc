/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 13:01:16 GMT-05:00
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
  double t151;
  double t194;
  double t219;
  double t241;
  double t265;
  double t407;
  double t461;
  double t468;
  double t140;
  double t718;
  double t569;
  double t728;
  double t729;
  double t730;
  double t790;
  double t798;
  double t800;
  double t865;
  double t882;
  double t958;
  double t1018;
  double t1076;
  double t1115;
  double t1116;
  double t1165;
  double t1178;
  double t573;
  double t1515;
  double t1521;
  double t1523;
  double t1551;
  double t1565;
  double t1570;
  double t1196;
  double t1225;
  double t1618;
  double t1622;
  double t1644;
  double t1661;
  double t1679;
  double t1687;
  double t1700;
  double t1715;
  double t1270;
  double t2023;
  double t2026;
  double t2038;
  double t2089;
  double t2100;
  double t2221;
  double t2231;
  double t2243;
  double t168;
  double t2339;
  double t2357;
  double t2390;
  double t2397;
  double t2400;
  double t2410;
  double t2412;
  double t2425;
  double t2428;
  double t2434;
  double t2438;
  double t2441;
  double t1513;
  double t2343;
  double t2489;
  double t2494;
  double t2693;
  double t2694;
  double t2717;
  double t2720;
  double t2729;
  double t2757;
  double t2555;
  double t2303;
  double t3031;
  double t3039;
  double t3041;
  double t3044;
  double t3047;
  double t3048;
  double t532;
  double t3247;
  double t3179;
  double t3289;
  double t3291;
  double t3294;
  double t3303;
  double t3305;
  double t3308;
  double t3336;
  double t3361;
  double t3374;
  double t3375;
  double t1537;
  double t3182;
  double t3394;
  double t3402;
  double t3563;
  double t3565;
  double t3575;
  double t3598;
  double t3602;
  double t3616;
  double t3434;
  double t1856;
  double t3757;
  double t3762;
  double t3768;
  double t3796;
  double t3801;
  double t3819;
  double t3174;
  double t2332;
  double t3888;
  double t3875;
  double t3904;
  double t3909;
  double t3916;
  double t3917;
  double t3919;
  double t3921;
  double t3922;
  double t3927;
  double t3941;
  double t3946;
  double t3492;
  double t2615;
  double t3878;
  double t3950;
  double t3954;
  double t4040;
  double t4054;
  double t4057;
  double t4058;
  double t4072;
  double t4082;
  double t3991;
  double t2972;
  double t4179;
  double t4183;
  double t4191;
  double t4237;
  double t4254;
  double t4256;
  double t3866;
  t151 = Cos(var1[5]);
  t194 = Sin(var1[3]);
  t219 = Sin(var1[4]);
  t241 = t151*t194*t219;
  t265 = Cos(var1[3]);
  t407 = Sin(var1[5]);
  t461 = -1.*t265*t407;
  t468 = t241 + t461;
  t140 = Cos(var1[4]);
  t718 = Sin(var1[9]);
  t569 = Cos(var1[9]);
  t728 = t265*t151*t219;
  t729 = t194*t407;
  t730 = t728 + t729;
  t790 = t140*t151;
  t798 = 0. + t790;
  t800 = Sin(var1[10]);
  t865 = t798*t800;
  t882 = Cos(var1[10]);
  t958 = -1.*t718;
  t1018 = 0. + t958;
  t1076 = t1018*t468;
  t1115 = t569*t730;
  t1116 = 0. + t1076 + t1115;
  t1165 = t882*t1116;
  t1178 = 0. + t865 + t1165;
  t573 = 0. + t569;
  t1515 = t265*t151;
  t1521 = t194*t219*t407;
  t1523 = t1515 + t1521;
  t1551 = -1.*t151*t194;
  t1565 = t265*t219*t407;
  t1570 = t1551 + t1565;
  t1196 = Cos(var1[11]);
  t1225 = 0. + t1196;
  t1618 = t140*t407;
  t1622 = 0. + t1618;
  t1644 = t800*t1622;
  t1661 = t569*t1570;
  t1679 = t1018*t1523;
  t1687 = 0. + t1661 + t1679;
  t1700 = t882*t1687;
  t1715 = 0. + t1644 + t1700;
  t1270 = Sin(var1[11]);
  t2023 = t569*t265*t140;
  t2026 = t140*t1018*t194;
  t2038 = 0. + t2023 + t2026;
  t2089 = -1.*t219;
  t2100 = 0. + t2089;
  t2221 = t882*t2038;
  t2231 = t800*t2100;
  t2243 = 0. + t2221 + t2231;
  t168 = 0.21935*t140*t151;
  t2339 = Cos(var1[6]);
  t2357 = Sin(var1[6]);
  t2390 = Cos(var1[7]);
  t2397 = t2339*t730;
  t2400 = -1.*t2357;
  t2410 = 0. + t2400;
  t2412 = t468*t2410;
  t2425 = 0. + t2397 + t2412;
  t2428 = t2390*t2425;
  t2434 = Sin(var1[7]);
  t2438 = t798*t2434;
  t2441 = 0. + t2428 + t2438;
  t1513 = 0.21935*t140*t407;
  t2343 = 0. + t2339;
  t2489 = Cos(var1[8]);
  t2494 = 0. + t2489;
  t2693 = t2339*t1570;
  t2694 = t1523*t2410;
  t2717 = 0. + t2693 + t2694;
  t2720 = t2390*t2717;
  t2729 = t1622*t2434;
  t2757 = 0. + t2720 + t2729;
  t2555 = Sin(var1[8]);
  t2303 = -0.21935*t219;
  t3031 = t265*t140*t2339;
  t3039 = t140*t194*t2410;
  t3041 = 0. + t3031 + t3039;
  t3044 = t2390*t3041;
  t3047 = t2100*t2434;
  t3048 = 0. + t3044 + t3047;
  t532 = 0.0875*t468;
  t3247 = Sin(var1[15]);
  t3179 = Cos(var1[15]);
  t3289 = Sin(var1[16]);
  t3291 = t798*t3289;
  t3294 = Cos(var1[16]);
  t3303 = -1.*t3247;
  t3305 = 0. + t3303;
  t3308 = t3305*t468;
  t3336 = t3179*t730;
  t3361 = 0. + t3308 + t3336;
  t3374 = t3294*t3361;
  t3375 = 0. + t3291 + t3374;
  t1537 = 0.0875*t1523;
  t3182 = 0. + t3179;
  t3394 = Cos(var1[17]);
  t3402 = 0. + t3394;
  t3563 = t3289*t1622;
  t3565 = t3179*t1570;
  t3575 = t3305*t1523;
  t3598 = 0. + t3565 + t3575;
  t3602 = t3294*t3598;
  t3616 = 0. + t3563 + t3602;
  t3434 = Sin(var1[17]);
  t1856 = 0.0875*t140*t194;
  t3757 = t3179*t265*t140;
  t3762 = t140*t3305*t194;
  t3768 = 0. + t3757 + t3762;
  t3796 = t3294*t3768;
  t3801 = t3289*t2100;
  t3819 = 0. + t3796 + t3801;
  t3174 = -0.21935*t140*t151;
  t2332 = -0.0875*t468;
  t3888 = Sin(var1[12]);
  t3875 = Cos(var1[12]);
  t3904 = Sin(var1[13]);
  t3909 = t798*t3904;
  t3916 = Cos(var1[13]);
  t3917 = -1.*t3888;
  t3919 = 0. + t3917;
  t3921 = t3919*t468;
  t3922 = t3875*t730;
  t3927 = 0. + t3921 + t3922;
  t3941 = t3916*t3927;
  t3946 = 0. + t3909 + t3941;
  t3492 = -0.21935*t140*t407;
  t2615 = -0.0875*t1523;
  t3878 = 0. + t3875;
  t3950 = Cos(var1[14]);
  t3954 = 0. + t3950;
  t4040 = t3904*t1622;
  t4054 = t3875*t1570;
  t4057 = t3919*t1523;
  t4058 = 0. + t4054 + t4057;
  t4072 = t3916*t4058;
  t4082 = 0. + t4040 + t4072;
  t3991 = Sin(var1[14]);
  t2972 = -0.0875*t140*t194;
  t4179 = t3875*t265*t140;
  t4183 = t140*t3919*t194;
  t4191 = 0. + t4179 + t4183;
  t4237 = t3916*t4191;
  t4254 = t3904*t2100;
  t4256 = 0. + t4237 + t4254;
  t3866 = 0.21935*t219;
  p_output1[0]=var1[0];
  p_output1[1]=var1[1];
  p_output1[2]=var1[2];
  p_output1[3]=var1[3];
  p_output1[4]=var1[4];
  p_output1[5]=var1[5];
  p_output1[6]=-0.25*t1178 + t168 + t532 + 0.037*(0. + t468*t573 + t718*t730) - 0.27*(t1178*t1225 + t1270*(0. - 1.*t1116*t800 + t798*t882)) + var1[0];
  p_output1[7]=t1513 + t1537 - 0.25*t1715 + 0.037*(0. + t1523*t573 + t1570*t718) - 0.27*(t1225*t1715 + t1270*(0. - 1.*t1687*t800 + t1622*t882)) + var1[1];
  p_output1[8]=t1856 - 0.25*t2243 + t2303 + 0.037*(0. + t140*t194*t573 + t140*t265*t718) - 0.27*(t1225*t2243 + t1270*(0. - 1.*t2038*t800 + t2100*t882)) + var1[2];
  p_output1[9]=t168 + t2332 - 0.25*t2441 - 0.037*(0. + t2343*t468 + t2357*t730) - 0.27*(t2441*t2494 + t2555*(0. - 1.*t2425*t2434 + t2390*t798)) + var1[0];
  p_output1[10]=t1513 - 0.037*(0. + t1523*t2343 + t1570*t2357) + t2615 - 0.25*t2757 - 0.27*(t2555*(0. + t1622*t2390 - 1.*t2434*t2717) + t2494*t2757) + var1[1];
  p_output1[11]=t2303 - 0.037*(0. + t140*t194*t2343 + t140*t2357*t265) + t2972 - 0.25*t3048 - 0.27*(t2555*(0. + t2100*t2390 - 1.*t2434*t3041) + t2494*t3048) + var1[2];
  p_output1[12]=t3174 - 0.25*t3375 + t532 + 0.037*(0. + t3182*t468 + t3247*t730) - 0.27*(t3375*t3402 + t3434*(0. - 1.*t3289*t3361 + t3294*t798)) + var1[0];
  p_output1[13]=t1537 + 0.037*(0. + t1523*t3182 + t1570*t3247) + t3492 - 0.25*t3616 - 0.27*(t3434*(0. + t1622*t3294 - 1.*t3289*t3598) + t3402*t3616) + var1[1];
  p_output1[14]=t1856 + 0.037*(0. + t140*t194*t3182 + t140*t265*t3247) - 0.25*t3819 - 0.27*(t3434*(0. + t2100*t3294 - 1.*t3289*t3768) + t3402*t3819) + t3866 + var1[2];
  p_output1[15]=t2332 + t3174 - 0.25*t3946 - 0.037*(0. + t3878*t468 + t3888*t730) - 0.27*(t3946*t3954 + t3991*(0. - 1.*t3904*t3927 + t3916*t798)) + var1[0];
  p_output1[16]=t2615 + t3492 - 0.037*(0. + t1523*t3878 + t1570*t3888) - 0.25*t4082 - 0.27*(t3991*(0. + t1622*t3916 - 1.*t3904*t4058) + t3954*t4082) + var1[1];
  p_output1[17]=t2972 + t3866 - 0.037*(0. + t140*t194*t3878 + t140*t265*t3888) - 0.25*t4256 - 0.27*(t3991*(0. + t2100*t3916 - 1.*t3904*t4191) + t3954*t4256) + var1[2];
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

#include "hc_opt1_func.hh"

namespace SymFunction
{

void hc_opt1_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
