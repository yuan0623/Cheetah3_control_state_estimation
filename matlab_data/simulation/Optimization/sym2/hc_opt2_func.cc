/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 21:23:39 GMT-05:00
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
  double t76;
  double t45;
  double t177;
  double t139;
  double t127;
  double t203;
  double t155;
  double t238;
  double t474;
  double t400;
  double t510;
  double t588;
  double t590;
  double t756;
  double t741;
  double t719;
  double t777;
  double t829;
  double t838;
  double t844;
  double t752;
  double t847;
  double t852;
  double t870;
  double t898;
  double t903;
  double t978;
  double t993;
  double t915;
  double t405;
  double t1081;
  double t1092;
  double t1208;
  double t1235;
  double t1242;
  double t1377;
  double t1396;
  double t1404;
  double t1409;
  double t924;
  double t956;
  double t1378;
  double t1434;
  double t1453;
  double t1489;
  double t1521;
  double t1522;
  double t1023;
  double t1667;
  double t1680;
  double t1702;
  double t1711;
  double t1821;
  double t1695;
  double t1835;
  double t1864;
  double t1897;
  double t1908;
  double t1967;
  double t312;
  double t2496;
  double t2360;
  double t2587;
  double t2583;
  double t2590;
  double t2599;
  double t2601;
  double t2602;
  double t2611;
  double t2586;
  double t2628;
  double t2666;
  double t2688;
  double t2700;
  double t2706;
  double t2913;
  double t2942;
  double t2745;
  double t1127;
  double t2455;
  double t3175;
  double t3177;
  double t3186;
  double t2768;
  double t2905;
  double t3167;
  double t3200;
  double t3203;
  double t3329;
  double t3332;
  double t3336;
  double t2981;
  double t3774;
  double t3775;
  double t3785;
  double t3751;
  double t3790;
  double t3798;
  double t3834;
  double t3837;
  double t3846;
  double t94;
  double t2357;
  double t4057;
  double t4123;
  double t4174;
  double t4177;
  double t4185;
  double t4203;
  double t4204;
  double t4228;
  double t4332;
  double t4335;
  double t4340;
  double t4218;
  double t4231;
  double t4238;
  double t4377;
  double t4383;
  double t4427;
  double t1080;
  double t3039;
  double t4060;
  double t4571;
  double t4593;
  double t4597;
  double t4633;
  double t4637;
  double t4667;
  double t4602;
  double t4613;
  double t4622;
  double t4435;
  double t4450;
  double t4507;
  double t3661;
  double t1619;
  double t4827;
  double t4834;
  double t4846;
  double t4937;
  double t4948;
  double t4949;
  double t4866;
  double t4881;
  double t4934;
  double t2347;
  double t382;
  double t5054;
  double t4987;
  double t5090;
  double t5074;
  double t5091;
  double t5106;
  double t5125;
  double t5126;
  double t5127;
  double t5078;
  double t5137;
  double t5138;
  double t5147;
  double t5149;
  double t5150;
  double t5221;
  double t5234;
  double t5180;
  double t3017;
  double t1176;
  double t5019;
  double t5311;
  double t5313;
  double t5334;
  double t5192;
  double t5193;
  double t5307;
  double t5337;
  double t5338;
  double t5386;
  double t5391;
  double t5393;
  double t5265;
  double t1618;
  double t3680;
  double t5486;
  double t5487;
  double t5490;
  double t5485;
  double t5498;
  double t5504;
  double t5512;
  double t5526;
  double t5528;
  t76 = Cos(var1[5]);
  t45 = Cos(var1[4]);
  t177 = Sin(var1[3]);
  t139 = Sin(var1[4]);
  t127 = Cos(var1[3]);
  t203 = Sin(var1[5]);
  t155 = t127*t76*t139;
  t238 = t177*t203;
  t474 = Sin(var1[12]);
  t400 = Cos(var1[12]);
  t510 = t76*t177*t139;
  t588 = -1.*t127*t203;
  t590 = t510 + t588;
  t756 = Cos(var1[13]);
  t741 = 0. + t155 + t238;
  t719 = Sin(var1[13]);
  t777 = 0. + t474;
  t829 = t45*t76*t777;
  t838 = t400*t590;
  t844 = 0. + t829 + t838;
  t752 = t719*t741;
  t847 = t756*t844;
  t852 = 0. + t752 + t847;
  t870 = t756*t741;
  t898 = -1.*t719*t844;
  t903 = 0. + t870 + t898;
  t978 = Cos(var1[14]);
  t993 = 0. + t978;
  t915 = Sin(var1[14]);
  t405 = 0. + t400;
  t1081 = -1.*t76*t177;
  t1092 = t127*t139*t203;
  t1208 = t127*t76;
  t1235 = t177*t139*t203;
  t1242 = t1208 + t1235;
  t1377 = 0. + t1081 + t1092;
  t1396 = t45*t777*t203;
  t1404 = t400*t1242;
  t1409 = 0. + t1396 + t1404;
  t924 = -1.*t915;
  t956 = 0. + t924;
  t1378 = t719*t1377;
  t1434 = t756*t1409;
  t1453 = 0. + t1378 + t1434;
  t1489 = t756*t1377;
  t1521 = -1.*t719*t1409;
  t1522 = 0. + t1489 + t1521;
  t1023 = 0. + t915;
  t1667 = t127*t45;
  t1680 = 0. + t1667;
  t1702 = t400*t45*t177;
  t1711 = -1.*t777*t139;
  t1821 = 0. + t1702 + t1711;
  t1695 = t1680*t719;
  t1835 = t756*t1821;
  t1864 = 0. + t1695 + t1835;
  t1897 = t756*t1680;
  t1908 = -1.*t719*t1821;
  t1967 = 0. + t1897 + t1908;
  t312 = t155 + t238;
  t2496 = Sin(var1[9]);
  t2360 = Cos(var1[9]);
  t2587 = Cos(var1[10]);
  t2583 = Sin(var1[10]);
  t2590 = -1.*t2496;
  t2599 = 0. + t2590;
  t2601 = t45*t76*t2599;
  t2602 = t2360*t590;
  t2611 = 0. + t2601 + t2602;
  t2586 = t2583*t741;
  t2628 = t2587*t2611;
  t2666 = 0. + t2586 + t2628;
  t2688 = t2587*t741;
  t2700 = -1.*t2583*t2611;
  t2706 = 0. + t2688 + t2700;
  t2913 = Cos(var1[11]);
  t2942 = 0. + t2913;
  t2745 = Sin(var1[11]);
  t1127 = t1081 + t1092;
  t2455 = 0. + t2360;
  t3175 = t45*t2599*t203;
  t3177 = t2360*t1242;
  t3186 = 0. + t3175 + t3177;
  t2768 = -1.*t2745;
  t2905 = 0. + t2768;
  t3167 = t2583*t1377;
  t3200 = t2587*t3186;
  t3203 = 0. + t3167 + t3200;
  t3329 = t2587*t1377;
  t3332 = -1.*t2583*t3186;
  t3336 = 0. + t3329 + t3332;
  t2981 = 0. + t2745;
  t3774 = t2360*t45*t177;
  t3775 = -1.*t2599*t139;
  t3785 = 0. + t3774 + t3775;
  t3751 = t1680*t2583;
  t3790 = t2587*t3785;
  t3798 = 0. + t3751 + t3790;
  t3834 = t2587*t1680;
  t3837 = -1.*t2583*t3785;
  t3846 = 0. + t3834 + t3837;
  t94 = -0.0817*t45*t76;
  t2357 = 0.2429*t312;
  t4057 = Cos(var1[6]);
  t4123 = Sin(var1[6]);
  t4174 = Cos(var1[7]);
  t4177 = t4057*t590;
  t4185 = 0. + t4123;
  t4203 = t45*t76*t4185;
  t4204 = 0. + t4177 + t4203;
  t4228 = Sin(var1[7]);
  t4332 = t4174*t741;
  t4335 = -1.*t4204*t4228;
  t4340 = 0. + t4332 + t4335;
  t4218 = t4174*t4204;
  t4231 = t741*t4228;
  t4238 = 0. + t4218 + t4231;
  t4377 = Cos(var1[8]);
  t4383 = 0. + t4377;
  t4427 = Sin(var1[8]);
  t1080 = -0.0817*t45*t203;
  t3039 = 0.2429*t1127;
  t4060 = 0. + t4057;
  t4571 = t4057*t1242;
  t4593 = t45*t203*t4185;
  t4597 = 0. + t4571 + t4593;
  t4633 = t4174*t1377;
  t4637 = -1.*t4597*t4228;
  t4667 = 0. + t4633 + t4637;
  t4602 = t4174*t4597;
  t4613 = t1377*t4228;
  t4622 = 0. + t4602 + t4613;
  t4435 = -1.*t4427;
  t4450 = 0. + t4435;
  t4507 = 0. + t4427;
  t3661 = 0.2429*t127*t45;
  t1619 = 0.0817*t139;
  t4827 = t45*t4057*t177;
  t4834 = -1.*t139*t4185;
  t4846 = 0. + t4827 + t4834;
  t4937 = t1680*t4174;
  t4948 = -1.*t4846*t4228;
  t4949 = 0. + t4937 + t4948;
  t4866 = t4174*t4846;
  t4881 = t1680*t4228;
  t4934 = 0. + t4866 + t4881;
  t2347 = 0.0817*t45*t76;
  t382 = -0.1944*t312;
  t5054 = Sin(var1[15]);
  t4987 = Cos(var1[15]);
  t5090 = Cos(var1[16]);
  t5074 = Sin(var1[16]);
  t5091 = -1.*t5054;
  t5106 = 0. + t5091;
  t5125 = t45*t76*t5106;
  t5126 = t4987*t590;
  t5127 = 0. + t5125 + t5126;
  t5078 = t5074*t741;
  t5137 = t5090*t5127;
  t5138 = 0. + t5078 + t5137;
  t5147 = t5090*t741;
  t5149 = -1.*t5074*t5127;
  t5150 = 0. + t5147 + t5149;
  t5221 = Cos(var1[17]);
  t5234 = 0. + t5221;
  t5180 = Sin(var1[17]);
  t3017 = 0.0817*t45*t203;
  t1176 = -0.1944*t1127;
  t5019 = 0. + t4987;
  t5311 = t45*t5106*t203;
  t5313 = t4987*t1242;
  t5334 = 0. + t5311 + t5313;
  t5192 = -1.*t5180;
  t5193 = 0. + t5192;
  t5307 = t5074*t1377;
  t5337 = t5090*t5334;
  t5338 = 0. + t5307 + t5337;
  t5386 = t5090*t1377;
  t5391 = -1.*t5074*t5334;
  t5393 = 0. + t5386 + t5391;
  t5265 = 0. + t5180;
  t1618 = -0.1944*t127*t45;
  t3680 = -0.0817*t139;
  t5486 = t4987*t45*t177;
  t5487 = -1.*t5106*t139;
  t5490 = 0. + t5486 + t5487;
  t5485 = t1680*t5074;
  t5498 = t5090*t5490;
  t5504 = 0. + t5485 + t5498;
  t5512 = t5090*t1680;
  t5526 = -1.*t5074*t5490;
  t5528 = 0. + t5512 + t5526;
  p_output1[0]=var1[0];
  p_output1[1]=var1[1];
  p_output1[2]=var1[2];
  p_output1[3]=var1[3];
  p_output1[4]=var1[4];
  p_output1[5]=var1[5];
  p_output1[6]=t382 - 0.0329*(0. - 1.*t474*t590 + t405*t45*t76) - 0.2083*t852 - 0.1422*t903 + t94 - 0.16*(0. + t1023*t903 + t852*t993) - 0.02*(0. + t852*t956 + t903*t993) + var1[0];
  p_output1[7]=t1080 + t1176 - 0.2083*t1453 - 0.1422*t1522 - 0.0329*(0. + t203*t405*t45 - 1.*t1242*t474) - 0.16*(0. + t1023*t1522 + t1453*t993) - 0.02*(0. + t1453*t956 + t1522*t993) + var1[1];
  p_output1[8]=t1618 + t1619 - 0.2083*t1864 - 0.1422*t1967 - 0.0329*(0. - 1.*t139*t405 - 1.*t177*t45*t474) - 0.16*(0. + t1023*t1967 + t1864*t993) - 0.02*(0. + t1864*t956 + t1967*t993) + var1[2];
  p_output1[9]=t2347 + t2357 - 0.2083*t2666 - 0.1422*t2706 - 0.02*(0. + t2666*t2905 + t2706*t2942) - 0.16*(0. + t2666*t2942 + t2706*t2981) + 0.035199999999999995*(0. + t2496*t590 + t2455*t45*t76) + var1[0];
  p_output1[10]=t3017 + t3039 - 0.2083*t3203 - 0.1422*t3336 - 0.02*(0. + t2905*t3203 + t2942*t3336) - 0.16*(0. + t2942*t3203 + t2981*t3336) + 0.035199999999999995*(0. + t1242*t2496 + t203*t2455*t45) + var1[1];
  p_output1[11]=t3661 + t3680 - 0.2083*t3798 - 0.1422*t3846 - 0.02*(0. + t2905*t3798 + t2942*t3846) - 0.16*(0. + t2942*t3798 + t2981*t3846) + 0.035199999999999995*(0. - 1.*t139*t2455 + t177*t2496*t45) + var1[2];
  p_output1[12]=t2357 - 0.2083*t4238 - 0.1422*t4340 - 0.02*(0. + t4340*t4383 + t4238*t4450) - 0.16*(0. + t4238*t4383 + t4340*t4507) - 0.0329*(0. - 1.*t4123*t590 + t4060*t45*t76) + t94 + var1[0];
  p_output1[13]=t1080 + t3039 - 0.0329*(0. - 1.*t1242*t4123 + t203*t4060*t45) - 0.2083*t4622 - 0.1422*t4667 - 0.02*(0. + t4450*t4622 + t4383*t4667) - 0.16*(0. + t4383*t4622 + t4507*t4667) + var1[1];
  p_output1[14]=t1619 + t3661 - 0.0329*(0. - 1.*t139*t4060 - 1.*t177*t4123*t45) - 0.2083*t4934 - 0.1422*t4949 - 0.02*(0. + t4450*t4934 + t4383*t4949) - 0.16*(0. + t4383*t4934 + t4507*t4949) + var1[2];
  p_output1[15]=t2347 + t382 - 0.2083*t5138 - 0.1422*t5150 - 0.02*(0. + t5138*t5193 + t5150*t5234) - 0.16*(0. + t5138*t5234 + t5150*t5265) + 0.035199999999999995*(0. + t5054*t590 + t45*t5019*t76) + var1[0];
  p_output1[16]=t1176 + t3017 + 0.035199999999999995*(0. + t203*t45*t5019 + t1242*t5054) - 0.2083*t5338 - 0.1422*t5393 - 0.02*(0. + t5193*t5338 + t5234*t5393) - 0.16*(0. + t5234*t5338 + t5265*t5393) + var1[1];
  p_output1[17]=t1618 + t3680 + 0.035199999999999995*(0. - 1.*t139*t5019 + t177*t45*t5054) - 0.2083*t5504 - 0.1422*t5528 - 0.02*(0. + t5193*t5504 + t5234*t5528) - 0.16*(0. + t5234*t5504 + t5265*t5528) + var1[2];
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
