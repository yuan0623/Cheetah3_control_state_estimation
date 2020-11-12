/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 21:23:42 GMT-05:00
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
  double t155;
  double t94;
  double t438;
  double t382;
  double t312;
  double t510;
  double t739;
  double t756;
  double t829;
  double t838;
  double t847;
  double t400;
  double t593;
  double t895;
  double t978;
  double t900;
  double t903;
  double t907;
  double t956;
  double t993;
  double t1016;
  double t1021;
  double t1023;
  double t973;
  double t998;
  double t1002;
  double t1030;
  double t1031;
  double t1080;
  double t741;
  double t1489;
  double t1512;
  double t1517;
  double t1396;
  double t1404;
  double t1550;
  double t1537;
  double t1541;
  double t1544;
  double t1618;
  double t1619;
  double t1621;
  double t1549;
  double t1554;
  double t1557;
  double t1092;
  double t1127;
  double t1249;
  double t2217;
  double t2249;
  double t2164;
  double t2196;
  double t2207;
  double t2357;
  double t2360;
  double t2491;
  double t2212;
  double t2281;
  double t2340;
  double t666;
  double t702;
  double t2781;
  double t2706;
  double t2950;
  double t2913;
  double t2961;
  double t2970;
  double t2976;
  double t2981;
  double t2983;
  double t2942;
  double t2984;
  double t2999;
  double t3017;
  double t3039;
  double t3043;
  double t3167;
  double t3175;
  double t3126;
  double t1434;
  double t1453;
  double t2729;
  double t3522;
  double t3523;
  double t3661;
  double t3127;
  double t3142;
  double t3490;
  double t3680;
  double t3685;
  double t3711;
  double t3728;
  double t3751;
  double t3329;
  double t1872;
  double t4055;
  double t4057;
  double t4094;
  double t4053;
  double t4127;
  double t4145;
  double t4174;
  double t4177;
  double t4203;
  double t2688;
  double t4457;
  double t4390;
  double t4523;
  double t4508;
  double t4524;
  double t4526;
  double t4558;
  double t4559;
  double t4570;
  double t4511;
  double t4571;
  double t4593;
  double t4613;
  double t4622;
  double t4631;
  double t4706;
  double t4710;
  double t4667;
  double t3421;
  double t4450;
  double t4949;
  double t4950;
  double t4954;
  double t4678;
  double t4683;
  double t4937;
  double t4955;
  double t4957;
  double t4960;
  double t4978;
  double t4979;
  double t4745;
  double t3921;
  double t5150;
  double t5168;
  double t5193;
  double t5147;
  double t5197;
  double t5221;
  double t5251;
  double t5252;
  double t5255;
  double t238;
  double t4383;
  double t5337;
  double t5307;
  double t5396;
  double t5393;
  double t5397;
  double t5400;
  double t5401;
  double t5404;
  double t5395;
  double t5412;
  double t5427;
  double t5457;
  double t5469;
  double t5470;
  double t5504;
  double t5509;
  double t5477;
  double t1378;
  double t4827;
  double t5311;
  double t5597;
  double t5604;
  double t5609;
  double t5485;
  double t5486;
  double t5595;
  double t5610;
  double t5611;
  double t5616;
  double t5619;
  double t5630;
  double t5544;
  double t5125;
  double t1897;
  double t5731;
  double t5743;
  double t5746;
  double t5730;
  double t5749;
  double t5756;
  double t5761;
  double t5762;
  double t5770;
  t155 = Cos(var1[5]);
  t94 = Cos(var1[4]);
  t438 = Sin(var1[3]);
  t382 = Sin(var1[4]);
  t312 = Cos(var1[3]);
  t510 = Sin(var1[5]);
  t739 = Cos(var1[6]);
  t756 = t155*t438*t382;
  t829 = -1.*t312*t510;
  t838 = t756 + t829;
  t847 = Sin(var1[6]);
  t400 = t312*t155*t382;
  t593 = t438*t510;
  t895 = Cos(var1[7]);
  t978 = 0. + t400 + t593;
  t900 = t739*t838;
  t903 = 0. + t847;
  t907 = t94*t155*t903;
  t956 = 0. + t900 + t907;
  t993 = Sin(var1[7]);
  t1016 = t895*t978;
  t1021 = -1.*t956*t993;
  t1023 = 0. + t1016 + t1021;
  t973 = t895*t956;
  t998 = t978*t993;
  t1002 = 0. + t973 + t998;
  t1030 = Cos(var1[8]);
  t1031 = 0. + t1030;
  t1080 = Sin(var1[8]);
  t741 = 0. + t739;
  t1489 = t312*t155;
  t1512 = t438*t382*t510;
  t1517 = t1489 + t1512;
  t1396 = -1.*t155*t438;
  t1404 = t312*t382*t510;
  t1550 = 0. + t1396 + t1404;
  t1537 = t739*t1517;
  t1541 = t94*t510*t903;
  t1544 = 0. + t1537 + t1541;
  t1618 = t895*t1550;
  t1619 = -1.*t1544*t993;
  t1621 = 0. + t1618 + t1619;
  t1549 = t895*t1544;
  t1554 = t1550*t993;
  t1557 = 0. + t1549 + t1554;
  t1092 = -1.*t1080;
  t1127 = 0. + t1092;
  t1249 = 0. + t1080;
  t2217 = t312*t94;
  t2249 = 0. + t2217;
  t2164 = t94*t739*t438;
  t2196 = -1.*t382*t903;
  t2207 = 0. + t2164 + t2196;
  t2357 = t2249*t895;
  t2360 = -1.*t2207*t993;
  t2491 = 0. + t2357 + t2360;
  t2212 = t895*t2207;
  t2281 = t2249*t993;
  t2340 = 0. + t2212 + t2281;
  t666 = t400 + t593;
  t702 = 0.2429*t666;
  t2781 = Sin(var1[9]);
  t2706 = Cos(var1[9]);
  t2950 = Cos(var1[10]);
  t2913 = Sin(var1[10]);
  t2961 = -1.*t2781;
  t2970 = 0. + t2961;
  t2976 = t94*t155*t2970;
  t2981 = t2706*t838;
  t2983 = 0. + t2976 + t2981;
  t2942 = t2913*t978;
  t2984 = t2950*t2983;
  t2999 = 0. + t2942 + t2984;
  t3017 = t2950*t978;
  t3039 = -1.*t2913*t2983;
  t3043 = 0. + t3017 + t3039;
  t3167 = Cos(var1[11]);
  t3175 = 0. + t3167;
  t3126 = Sin(var1[11]);
  t1434 = t1396 + t1404;
  t1453 = 0.2429*t1434;
  t2729 = 0. + t2706;
  t3522 = t94*t2970*t510;
  t3523 = t2706*t1517;
  t3661 = 0. + t3522 + t3523;
  t3127 = -1.*t3126;
  t3142 = 0. + t3127;
  t3490 = t2913*t1550;
  t3680 = t2950*t3661;
  t3685 = 0. + t3490 + t3680;
  t3711 = t2950*t1550;
  t3728 = -1.*t2913*t3661;
  t3751 = 0. + t3711 + t3728;
  t3329 = 0. + t3126;
  t1872 = 0.2429*t312*t94;
  t4055 = t2706*t94*t438;
  t4057 = -1.*t2970*t382;
  t4094 = 0. + t4055 + t4057;
  t4053 = t2249*t2913;
  t4127 = t2950*t4094;
  t4145 = 0. + t4053 + t4127;
  t4174 = t2950*t2249;
  t4177 = -1.*t2913*t4094;
  t4203 = 0. + t4174 + t4177;
  t2688 = 0.0817*t94*t155;
  t4457 = Sin(var1[15]);
  t4390 = Cos(var1[15]);
  t4523 = Cos(var1[16]);
  t4508 = Sin(var1[16]);
  t4524 = -1.*t4457;
  t4526 = 0. + t4524;
  t4558 = t94*t155*t4526;
  t4559 = t4390*t838;
  t4570 = 0. + t4558 + t4559;
  t4511 = t4508*t978;
  t4571 = t4523*t4570;
  t4593 = 0. + t4511 + t4571;
  t4613 = t4523*t978;
  t4622 = -1.*t4508*t4570;
  t4631 = 0. + t4613 + t4622;
  t4706 = Cos(var1[17]);
  t4710 = 0. + t4706;
  t4667 = Sin(var1[17]);
  t3421 = 0.0817*t94*t510;
  t4450 = 0. + t4390;
  t4949 = t94*t4526*t510;
  t4950 = t4390*t1517;
  t4954 = 0. + t4949 + t4950;
  t4678 = -1.*t4667;
  t4683 = 0. + t4678;
  t4937 = t4508*t1550;
  t4955 = t4523*t4954;
  t4957 = 0. + t4937 + t4955;
  t4960 = t4523*t1550;
  t4978 = -1.*t4508*t4954;
  t4979 = 0. + t4960 + t4978;
  t4745 = 0. + t4667;
  t3921 = -0.0817*t382;
  t5150 = t4390*t94*t438;
  t5168 = -1.*t4526*t382;
  t5193 = 0. + t5150 + t5168;
  t5147 = t2249*t4508;
  t5197 = t4523*t5193;
  t5221 = 0. + t5147 + t5197;
  t5251 = t4523*t2249;
  t5252 = -1.*t4508*t5193;
  t5255 = 0. + t5251 + t5252;
  t238 = -0.0817*t94*t155;
  t4383 = -0.1944*t666;
  t5337 = Sin(var1[12]);
  t5307 = Cos(var1[12]);
  t5396 = Cos(var1[13]);
  t5393 = Sin(var1[13]);
  t5397 = 0. + t5337;
  t5400 = t94*t155*t5397;
  t5401 = t5307*t838;
  t5404 = 0. + t5400 + t5401;
  t5395 = t5393*t978;
  t5412 = t5396*t5404;
  t5427 = 0. + t5395 + t5412;
  t5457 = t5396*t978;
  t5469 = -1.*t5393*t5404;
  t5470 = 0. + t5457 + t5469;
  t5504 = Cos(var1[14]);
  t5509 = 0. + t5504;
  t5477 = Sin(var1[14]);
  t1378 = -0.0817*t94*t510;
  t4827 = -0.1944*t1434;
  t5311 = 0. + t5307;
  t5597 = t94*t5397*t510;
  t5604 = t5307*t1517;
  t5609 = 0. + t5597 + t5604;
  t5485 = -1.*t5477;
  t5486 = 0. + t5485;
  t5595 = t5393*t1550;
  t5610 = t5396*t5609;
  t5611 = 0. + t5595 + t5610;
  t5616 = t5396*t1550;
  t5619 = -1.*t5393*t5609;
  t5630 = 0. + t5616 + t5619;
  t5544 = 0. + t5477;
  t5125 = -0.1944*t312*t94;
  t1897 = 0.0817*t382;
  t5731 = t5307*t94*t438;
  t5743 = -1.*t5397*t382;
  t5746 = 0. + t5731 + t5743;
  t5730 = t2249*t5393;
  t5749 = t5396*t5746;
  t5756 = 0. + t5730 + t5749;
  t5761 = t5396*t2249;
  t5762 = -1.*t5393*t5746;
  t5770 = 0. + t5761 + t5762;
  p_output1[0]=var1[0];
  p_output1[1]=var1[1];
  p_output1[2]=var1[2];
  p_output1[3]=var1[3];
  p_output1[4]=var1[4];
  p_output1[5]=var1[5];
  p_output1[6]=-0.2083*t1002 - 0.1422*t1023 - 0.02*(0. + t1023*t1031 + t1002*t1127) - 0.16*(0. + t1002*t1031 + t1023*t1249) + t238 + t702 - 0.0329*(0. - 1.*t838*t847 + t155*t741*t94) + var1[0];
  p_output1[7]=t1378 + t1453 - 0.2083*t1557 - 0.1422*t1621 - 0.02*(0. + t1127*t1557 + t1031*t1621) - 0.16*(0. + t1031*t1557 + t1249*t1621) - 0.0329*(0. - 1.*t1517*t847 + t510*t741*t94) + var1[1];
  p_output1[8]=t1872 + t1897 - 0.2083*t2340 - 0.1422*t2491 - 0.02*(0. + t1127*t2340 + t1031*t2491) - 0.16*(0. + t1031*t2340 + t1249*t2491) - 0.0329*(0. - 1.*t382*t741 - 1.*t438*t847*t94) + var1[2];
  p_output1[9]=t2688 - 0.2083*t2999 - 0.1422*t3043 - 0.02*(0. + t2999*t3142 + t3043*t3175) - 0.16*(0. + t2999*t3175 + t3043*t3329) + t702 + 0.035199999999999995*(0. + t2781*t838 + t155*t2729*t94) + var1[0];
  p_output1[10]=t1453 + t3421 - 0.2083*t3685 - 0.1422*t3751 - 0.02*(0. + t3142*t3685 + t3175*t3751) - 0.16*(0. + t3175*t3685 + t3329*t3751) + 0.035199999999999995*(0. + t1517*t2781 + t2729*t510*t94) + var1[1];
  p_output1[11]=t1872 + t3921 - 0.2083*t4145 - 0.1422*t4203 - 0.02*(0. + t3142*t4145 + t3175*t4203) - 0.16*(0. + t3175*t4145 + t3329*t4203) + 0.035199999999999995*(0. - 1.*t2729*t382 + t2781*t438*t94) + var1[2];
  p_output1[12]=t2688 + t4383 - 0.2083*t4593 - 0.1422*t4631 - 0.02*(0. + t4593*t4683 + t4631*t4710) - 0.16*(0. + t4593*t4710 + t4631*t4745) + 0.035199999999999995*(0. + t4457*t838 + t155*t4450*t94) + var1[0];
  p_output1[13]=t3421 + t4827 - 0.2083*t4957 - 0.1422*t4979 - 0.02*(0. + t4683*t4957 + t4710*t4979) - 0.16*(0. + t4710*t4957 + t4745*t4979) + 0.035199999999999995*(0. + t1517*t4457 + t4450*t510*t94) + var1[1];
  p_output1[14]=t3921 + t5125 - 0.2083*t5221 - 0.1422*t5255 - 0.02*(0. + t4683*t5221 + t4710*t5255) - 0.16*(0. + t4710*t5221 + t4745*t5255) + 0.035199999999999995*(0. - 1.*t382*t4450 + t438*t4457*t94) + var1[2];
  p_output1[15]=t238 + t4383 - 0.2083*t5427 - 0.1422*t5470 - 0.02*(0. + t5427*t5486 + t5470*t5509) - 0.16*(0. + t5427*t5509 + t5470*t5544) - 0.0329*(0. - 1.*t5337*t838 + t155*t5311*t94) + var1[0];
  p_output1[16]=t1378 + t4827 - 0.2083*t5611 - 0.1422*t5630 - 0.02*(0. + t5486*t5611 + t5509*t5630) - 0.16*(0. + t5509*t5611 + t5544*t5630) - 0.0329*(0. - 1.*t1517*t5337 + t510*t5311*t94) + var1[1];
  p_output1[17]=t1897 + t5125 - 0.2083*t5756 - 0.1422*t5770 - 0.02*(0. + t5486*t5756 + t5509*t5770) - 0.16*(0. + t5509*t5756 + t5544*t5770) - 0.0329*(0. - 1.*t382*t5311 - 1.*t438*t5337*t94) + var1[2];
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
