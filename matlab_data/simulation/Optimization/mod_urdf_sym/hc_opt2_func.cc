/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 13:01:18 GMT-05:00
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
  double t168;
  double t241;
  double t468;
  double t532;
  double t569;
  double t573;
  double t693;
  double t728;
  double t140;
  double t782;
  double t730;
  double t790;
  double t798;
  double t865;
  double t1115;
  double t1165;
  double t1178;
  double t1180;
  double t1196;
  double t1225;
  double t1269;
  double t1270;
  double t1283;
  double t1289;
  double t1320;
  double t1343;
  double t768;
  double t1600;
  double t1618;
  double t1622;
  double t1661;
  double t1679;
  double t1700;
  double t1378;
  double t1473;
  double t1776;
  double t1777;
  double t1779;
  double t1780;
  double t1801;
  double t1811;
  double t1839;
  double t1843;
  double t1515;
  double t2231;
  double t2243;
  double t2250;
  double t2277;
  double t2302;
  double t2339;
  double t2343;
  double t2347;
  double t2489;
  double t2438;
  double t2521;
  double t2533;
  double t2535;
  double t2555;
  double t2564;
  double t2581;
  double t2583;
  double t2609;
  double t2615;
  double t2632;
  double t2441;
  double t2661;
  double t2681;
  double t2973;
  double t2989;
  double t2999;
  double t3015;
  double t3031;
  double t3039;
  double t2694;
  double t3182;
  double t3238;
  double t3251;
  double t3294;
  double t3305;
  double t3308;
  double t2412;
  double t729;
  double t3404;
  double t3443;
  double t3483;
  double t3490;
  double t3492;
  double t3495;
  double t3500;
  double t3504;
  double t3508;
  double t3563;
  double t3565;
  double t3575;
  double t2867;
  double t1644;
  double t3434;
  double t3616;
  double t3617;
  double t3762;
  double t3769;
  double t3770;
  double t3788;
  double t3789;
  double t3796;
  double t3693;
  double t2100;
  double t3394;
  double t3900;
  double t3909;
  double t3916;
  double t3919;
  double t3921;
  double t3922;
  double t219;
  double t2428;
  double t4021;
  double t3999;
  double t4038;
  double t4039;
  double t4040;
  double t4054;
  double t4057;
  double t4072;
  double t4082;
  double t4091;
  double t4118;
  double t4121;
  double t1587;
  double t2890;
  double t4004;
  double t4143;
  double t4144;
  double t4213;
  double t4237;
  double t4254;
  double t4256;
  double t4287;
  double t4292;
  double t4148;
  double t3117;
  double t4377;
  double t4381;
  double t4396;
  double t4441;
  double t4443;
  double t4444;
  double t2397;
  t168 = Cos(var1[5]);
  t241 = Sin(var1[3]);
  t468 = Sin(var1[4]);
  t532 = t168*t241*t468;
  t569 = Cos(var1[3]);
  t573 = Sin(var1[5]);
  t693 = -1.*t569*t573;
  t728 = t532 + t693;
  t140 = Cos(var1[4]);
  t782 = Sin(var1[12]);
  t730 = Cos(var1[12]);
  t790 = t569*t168*t468;
  t798 = t241*t573;
  t865 = t790 + t798;
  t1115 = t140*t168;
  t1165 = 0. + t1115;
  t1178 = Sin(var1[13]);
  t1180 = t1165*t1178;
  t1196 = Cos(var1[13]);
  t1225 = -1.*t782;
  t1269 = 0. + t1225;
  t1270 = t1269*t728;
  t1283 = t730*t865;
  t1289 = 0. + t1270 + t1283;
  t1320 = t1196*t1289;
  t1343 = 0. + t1180 + t1320;
  t768 = 0. + t730;
  t1600 = t569*t168;
  t1618 = t241*t468*t573;
  t1622 = t1600 + t1618;
  t1661 = -1.*t168*t241;
  t1679 = t569*t468*t573;
  t1700 = t1661 + t1679;
  t1378 = Cos(var1[14]);
  t1473 = 0. + t1378;
  t1776 = t140*t573;
  t1777 = 0. + t1776;
  t1779 = t1178*t1777;
  t1780 = t730*t1700;
  t1801 = t1269*t1622;
  t1811 = 0. + t1780 + t1801;
  t1839 = t1196*t1811;
  t1843 = 0. + t1779 + t1839;
  t1515 = Sin(var1[14]);
  t2231 = t730*t569*t140;
  t2243 = t140*t1269*t241;
  t2250 = 0. + t2231 + t2243;
  t2277 = -1.*t468;
  t2302 = 0. + t2277;
  t2339 = t1196*t2250;
  t2343 = t1178*t2302;
  t2347 = 0. + t2339 + t2343;
  t2489 = Sin(var1[9]);
  t2438 = Cos(var1[9]);
  t2521 = Sin(var1[10]);
  t2533 = t1165*t2521;
  t2535 = Cos(var1[10]);
  t2555 = -1.*t2489;
  t2564 = 0. + t2555;
  t2581 = t2564*t728;
  t2583 = t2438*t865;
  t2609 = 0. + t2581 + t2583;
  t2615 = t2535*t2609;
  t2632 = 0. + t2533 + t2615;
  t2441 = 0. + t2438;
  t2661 = Cos(var1[11]);
  t2681 = 0. + t2661;
  t2973 = t2521*t1777;
  t2989 = t2438*t1700;
  t2999 = t2564*t1622;
  t3015 = 0. + t2989 + t2999;
  t3031 = t2535*t3015;
  t3039 = 0. + t2973 + t3031;
  t2694 = Sin(var1[11]);
  t3182 = t2438*t569*t140;
  t3238 = t140*t2564*t241;
  t3251 = 0. + t3182 + t3238;
  t3294 = t2535*t3251;
  t3305 = t2521*t2302;
  t3308 = 0. + t3294 + t3305;
  t2412 = 0.21935*t140*t168;
  t729 = -0.0875*t728;
  t3404 = Cos(var1[6]);
  t3443 = Sin(var1[6]);
  t3483 = Cos(var1[7]);
  t3490 = t3404*t865;
  t3492 = -1.*t3443;
  t3495 = 0. + t3492;
  t3500 = t728*t3495;
  t3504 = 0. + t3490 + t3500;
  t3508 = t3483*t3504;
  t3563 = Sin(var1[7]);
  t3565 = t1165*t3563;
  t3575 = 0. + t3508 + t3565;
  t2867 = 0.21935*t140*t573;
  t1644 = -0.0875*t1622;
  t3434 = 0. + t3404;
  t3616 = Cos(var1[8]);
  t3617 = 0. + t3616;
  t3762 = t3404*t1700;
  t3769 = t1622*t3495;
  t3770 = 0. + t3762 + t3769;
  t3788 = t3483*t3770;
  t3789 = t1777*t3563;
  t3796 = 0. + t3788 + t3789;
  t3693 = Sin(var1[8]);
  t2100 = -0.0875*t140*t241;
  t3394 = -0.21935*t468;
  t3900 = t569*t140*t3404;
  t3909 = t140*t241*t3495;
  t3916 = 0. + t3900 + t3909;
  t3919 = t3483*t3916;
  t3921 = t2302*t3563;
  t3922 = 0. + t3919 + t3921;
  t219 = -0.21935*t140*t168;
  t2428 = 0.0875*t728;
  t4021 = Sin(var1[15]);
  t3999 = Cos(var1[15]);
  t4038 = Sin(var1[16]);
  t4039 = t1165*t4038;
  t4040 = Cos(var1[16]);
  t4054 = -1.*t4021;
  t4057 = 0. + t4054;
  t4072 = t4057*t728;
  t4082 = t3999*t865;
  t4091 = 0. + t4072 + t4082;
  t4118 = t4040*t4091;
  t4121 = 0. + t4039 + t4118;
  t1587 = -0.21935*t140*t573;
  t2890 = 0.0875*t1622;
  t4004 = 0. + t3999;
  t4143 = Cos(var1[17]);
  t4144 = 0. + t4143;
  t4213 = t4038*t1777;
  t4237 = t3999*t1700;
  t4254 = t4057*t1622;
  t4256 = 0. + t4237 + t4254;
  t4287 = t4040*t4256;
  t4292 = 0. + t4213 + t4287;
  t4148 = Sin(var1[17]);
  t3117 = 0.0875*t140*t241;
  t4377 = t3999*t569*t140;
  t4381 = t140*t4057*t241;
  t4396 = 0. + t4377 + t4381;
  t4441 = t4040*t4396;
  t4443 = t4038*t2302;
  t4444 = 0. + t4441 + t4443;
  t2397 = 0.21935*t468;
  p_output1[0]=var1[0];
  p_output1[1]=var1[1];
  p_output1[2]=var1[2];
  p_output1[3]=var1[3];
  p_output1[4]=var1[4];
  p_output1[5]=var1[5];
  p_output1[6]=-0.25*t1343 - 0.27*(t1343*t1473 + (0. + t1165*t1196 - 1.*t1178*t1289)*t1515) + t219 + t729 - 0.037*(0. + t728*t768 + t782*t865) + var1[0];
  p_output1[7]=t1587 + t1644 - 0.25*t1843 - 0.27*(t1515*(0. + t1196*t1777 - 1.*t1178*t1811) + t1473*t1843) - 0.037*(0. + t1622*t768 + t1700*t782) + var1[1];
  p_output1[8]=t2100 - 0.25*t2347 - 0.27*(t1515*(0. - 1.*t1178*t2250 + t1196*t2302) + t1473*t2347) + t2397 - 0.037*(0. + t140*t241*t768 + t140*t569*t782) + var1[2];
  p_output1[9]=t2412 + t2428 - 0.25*t2632 - 0.27*(t2632*t2681 + (0. + t1165*t2535 - 1.*t2521*t2609)*t2694) + 0.037*(0. + t2441*t728 + t2489*t865) + var1[0];
  p_output1[10]=0.037*(0. + t1622*t2441 + t1700*t2489) + t2867 + t2890 - 0.25*t3039 - 0.27*(t2694*(0. + t1777*t2535 - 1.*t2521*t3015) + t2681*t3039) + var1[1];
  p_output1[11]=t3117 - 0.25*t3308 - 0.27*(t2694*(0. + t2302*t2535 - 1.*t2521*t3251) + t2681*t3308) + t3394 + 0.037*(0. + t140*t241*t2441 + t140*t2489*t569) + var1[2];
  p_output1[12]=t2412 - 0.25*t3575 - 0.27*(t3575*t3617 + (0. + t1165*t3483 - 1.*t3504*t3563)*t3693) + t729 - 0.037*(0. + t3434*t728 + t3443*t865) + var1[0];
  p_output1[13]=t1644 + t2867 - 0.037*(0. + t1622*t3434 + t1700*t3443) - 0.25*t3796 - 0.27*(t3693*(0. + t1777*t3483 - 1.*t3563*t3770) + t3617*t3796) + var1[1];
  p_output1[14]=t2100 + t3394 - 0.25*t3922 - 0.27*(t3693*(0. + t2302*t3483 - 1.*t3563*t3916) + t3617*t3922) - 0.037*(0. + t140*t241*t3434 + t140*t3443*t569) + var1[2];
  p_output1[15]=t219 + t2428 - 0.25*t4121 - 0.27*(t4121*t4144 + (0. + t1165*t4040 - 1.*t4038*t4091)*t4148) + 0.037*(0. + t4004*t728 + t4021*t865) + var1[0];
  p_output1[16]=t1587 + t2890 + 0.037*(0. + t1622*t4004 + t1700*t4021) - 0.25*t4292 - 0.27*(t4148*(0. + t1777*t4040 - 1.*t4038*t4256) + t4144*t4292) + var1[1];
  p_output1[17]=t2397 + t3117 - 0.25*t4444 - 0.27*(t4148*(0. + t2302*t4040 - 1.*t4038*t4396) + t4144*t4444) + 0.037*(0. + t140*t241*t4004 + t140*t4021*t569) + var1[2];
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

#include "hc_opt2_func.hh"

namespace SymFunction
{

void hc_opt2_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
