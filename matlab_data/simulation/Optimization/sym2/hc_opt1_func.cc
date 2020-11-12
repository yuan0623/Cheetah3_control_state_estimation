/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 21:23:37 GMT-05:00
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
  double t26;
  double t25;
  double t87;
  double t63;
  double t61;
  double t93;
  double t76;
  double t94;
  double t206;
  double t155;
  double t238;
  double t266;
  double t305;
  double t510;
  double t438;
  double t413;
  double t513;
  double t520;
  double t588;
  double t593;
  double t652;
  double t474;
  double t666;
  double t702;
  double t741;
  double t746;
  double t752;
  double t838;
  double t844;
  double t767;
  double t176;
  double t977;
  double t993;
  double t1023;
  double t1024;
  double t1029;
  double t1080;
  double t1092;
  double t1127;
  double t1139;
  double t774;
  double t777;
  double t1081;
  double t1178;
  double t1208;
  double t1249;
  double t1287;
  double t1299;
  double t898;
  double t1549;
  double t1550;
  double t1559;
  double t1565;
  double t1587;
  double t1554;
  double t1618;
  double t1619;
  double t1637;
  double t1639;
  double t1650;
  double t127;
  double t139;
  double t1908;
  double t2128;
  double t2212;
  double t2217;
  double t2241;
  double t2249;
  double t2258;
  double t2288;
  double t2360;
  double t2372;
  double t2455;
  double t2281;
  double t2340;
  double t2347;
  double t2496;
  double t2499;
  double t2575;
  double t1002;
  double t1016;
  double t1946;
  double t2745;
  double t2768;
  double t2828;
  double t2961;
  double t2968;
  double t2970;
  double t2905;
  double t2906;
  double t2913;
  double t2576;
  double t2583;
  double t2601;
  double t1522;
  double t3203;
  double t3211;
  double t3275;
  double t3363;
  double t3365;
  double t3407;
  double t3308;
  double t3329;
  double t3332;
  double t45;
  double t3742;
  double t3711;
  double t3815;
  double t3781;
  double t3825;
  double t3829;
  double t3834;
  double t3837;
  double t3845;
  double t3790;
  double t3846;
  double t3870;
  double t3876;
  double t3920;
  double t3921;
  double t4034;
  double t4053;
  double t3946;
  double t973;
  double t3716;
  double t4231;
  double t4238;
  double t4239;
  double t3955;
  double t3997;
  double t4228;
  double t4241;
  double t4332;
  double t4340;
  double t4348;
  double t4352;
  double t4123;
  double t1523;
  double t4559;
  double t4564;
  double t4568;
  double t4558;
  double t4570;
  double t4571;
  double t4597;
  double t4598;
  double t4602;
  double t1897;
  double t3696;
  double t4731;
  double t4710;
  double t4749;
  double t4741;
  double t4775;
  double t4794;
  double t4803;
  double t4811;
  double t4745;
  double t4819;
  double t4827;
  double t4846;
  double t4847;
  double t4866;
  double t4937;
  double t4948;
  double t4908;
  double t2672;
  double t4177;
  double t4721;
  double t5054;
  double t5055;
  double t5062;
  double t4933;
  double t4934;
  double t5045;
  double t5063;
  double t5072;
  double t5078;
  double t5089;
  double t5090;
  double t4957;
  double t4508;
  double t3167;
  double t5197;
  double t5215;
  double t5217;
  double t5193;
  double t5221;
  double t5234;
  double t5252;
  double t5253;
  double t5255;
  t26 = Cos(var1[5]);
  t25 = Cos(var1[4]);
  t87 = Sin(var1[3]);
  t63 = Sin(var1[4]);
  t61 = Cos(var1[3]);
  t93 = Sin(var1[5]);
  t76 = t61*t26*t63;
  t94 = t87*t93;
  t206 = Sin(var1[9]);
  t155 = Cos(var1[9]);
  t238 = t26*t87*t63;
  t266 = -1.*t61*t93;
  t305 = t238 + t266;
  t510 = Cos(var1[10]);
  t438 = 0. + t76 + t94;
  t413 = Sin(var1[10]);
  t513 = -1.*t206;
  t520 = 0. + t513;
  t588 = t25*t26*t520;
  t593 = t155*t305;
  t652 = 0. + t588 + t593;
  t474 = t413*t438;
  t666 = t510*t652;
  t702 = 0. + t474 + t666;
  t741 = t510*t438;
  t746 = -1.*t413*t652;
  t752 = 0. + t741 + t746;
  t838 = Cos(var1[11]);
  t844 = 0. + t838;
  t767 = Sin(var1[11]);
  t176 = 0. + t155;
  t977 = -1.*t26*t87;
  t993 = t61*t63*t93;
  t1023 = t61*t26;
  t1024 = t87*t63*t93;
  t1029 = t1023 + t1024;
  t1080 = 0. + t977 + t993;
  t1092 = t25*t520*t93;
  t1127 = t155*t1029;
  t1139 = 0. + t1092 + t1127;
  t774 = -1.*t767;
  t777 = 0. + t774;
  t1081 = t413*t1080;
  t1178 = t510*t1139;
  t1208 = 0. + t1081 + t1178;
  t1249 = t510*t1080;
  t1287 = -1.*t413*t1139;
  t1299 = 0. + t1249 + t1287;
  t898 = 0. + t767;
  t1549 = t61*t25;
  t1550 = 0. + t1549;
  t1559 = t155*t25*t87;
  t1565 = -1.*t520*t63;
  t1587 = 0. + t1559 + t1565;
  t1554 = t1550*t413;
  t1618 = t510*t1587;
  t1619 = 0. + t1554 + t1618;
  t1637 = t510*t1550;
  t1639 = -1.*t413*t1587;
  t1650 = 0. + t1637 + t1639;
  t127 = t76 + t94;
  t139 = 0.2429*t127;
  t1908 = Cos(var1[6]);
  t2128 = Sin(var1[6]);
  t2212 = Cos(var1[7]);
  t2217 = t1908*t305;
  t2241 = 0. + t2128;
  t2249 = t25*t26*t2241;
  t2258 = 0. + t2217 + t2249;
  t2288 = Sin(var1[7]);
  t2360 = t2212*t438;
  t2372 = -1.*t2258*t2288;
  t2455 = 0. + t2360 + t2372;
  t2281 = t2212*t2258;
  t2340 = t438*t2288;
  t2347 = 0. + t2281 + t2340;
  t2496 = Cos(var1[8]);
  t2499 = 0. + t2496;
  t2575 = Sin(var1[8]);
  t1002 = t977 + t993;
  t1016 = 0.2429*t1002;
  t1946 = 0. + t1908;
  t2745 = t1908*t1029;
  t2768 = t25*t93*t2241;
  t2828 = 0. + t2745 + t2768;
  t2961 = t2212*t1080;
  t2968 = -1.*t2828*t2288;
  t2970 = 0. + t2961 + t2968;
  t2905 = t2212*t2828;
  t2906 = t1080*t2288;
  t2913 = 0. + t2905 + t2906;
  t2576 = -1.*t2575;
  t2583 = 0. + t2576;
  t2601 = 0. + t2575;
  t1522 = 0.2429*t61*t25;
  t3203 = t25*t1908*t87;
  t3211 = -1.*t63*t2241;
  t3275 = 0. + t3203 + t3211;
  t3363 = t1550*t2212;
  t3365 = -1.*t3275*t2288;
  t3407 = 0. + t3363 + t3365;
  t3308 = t2212*t3275;
  t3329 = t1550*t2288;
  t3332 = 0. + t3308 + t3329;
  t45 = 0.0817*t25*t26;
  t3742 = Sin(var1[15]);
  t3711 = Cos(var1[15]);
  t3815 = Cos(var1[16]);
  t3781 = Sin(var1[16]);
  t3825 = -1.*t3742;
  t3829 = 0. + t3825;
  t3834 = t25*t26*t3829;
  t3837 = t3711*t305;
  t3845 = 0. + t3834 + t3837;
  t3790 = t3781*t438;
  t3846 = t3815*t3845;
  t3870 = 0. + t3790 + t3846;
  t3876 = t3815*t438;
  t3920 = -1.*t3781*t3845;
  t3921 = 0. + t3876 + t3920;
  t4034 = Cos(var1[17]);
  t4053 = 0. + t4034;
  t3946 = Sin(var1[17]);
  t973 = 0.0817*t25*t93;
  t3716 = 0. + t3711;
  t4231 = t25*t3829*t93;
  t4238 = t3711*t1029;
  t4239 = 0. + t4231 + t4238;
  t3955 = -1.*t3946;
  t3997 = 0. + t3955;
  t4228 = t3781*t1080;
  t4241 = t3815*t4239;
  t4332 = 0. + t4228 + t4241;
  t4340 = t3815*t1080;
  t4348 = -1.*t3781*t4239;
  t4352 = 0. + t4340 + t4348;
  t4123 = 0. + t3946;
  t1523 = -0.0817*t63;
  t4559 = t3711*t25*t87;
  t4564 = -1.*t3829*t63;
  t4568 = 0. + t4559 + t4564;
  t4558 = t1550*t3781;
  t4570 = t3815*t4568;
  t4571 = 0. + t4558 + t4570;
  t4597 = t3815*t1550;
  t4598 = -1.*t3781*t4568;
  t4602 = 0. + t4597 + t4598;
  t1897 = -0.0817*t25*t26;
  t3696 = -0.1944*t127;
  t4731 = Sin(var1[12]);
  t4710 = Cos(var1[12]);
  t4749 = Cos(var1[13]);
  t4741 = Sin(var1[13]);
  t4775 = 0. + t4731;
  t4794 = t25*t26*t4775;
  t4803 = t4710*t305;
  t4811 = 0. + t4794 + t4803;
  t4745 = t4741*t438;
  t4819 = t4749*t4811;
  t4827 = 0. + t4745 + t4819;
  t4846 = t4749*t438;
  t4847 = -1.*t4741*t4811;
  t4866 = 0. + t4846 + t4847;
  t4937 = Cos(var1[14]);
  t4948 = 0. + t4937;
  t4908 = Sin(var1[14]);
  t2672 = -0.0817*t25*t93;
  t4177 = -0.1944*t1002;
  t4721 = 0. + t4710;
  t5054 = t25*t4775*t93;
  t5055 = t4710*t1029;
  t5062 = 0. + t5054 + t5055;
  t4933 = -1.*t4908;
  t4934 = 0. + t4933;
  t5045 = t4741*t1080;
  t5063 = t4749*t5062;
  t5072 = 0. + t5045 + t5063;
  t5078 = t4749*t1080;
  t5089 = -1.*t4741*t5062;
  t5090 = 0. + t5078 + t5089;
  t4957 = 0. + t4908;
  t4508 = -0.1944*t61*t25;
  t3167 = 0.0817*t63;
  t5197 = t4710*t25*t87;
  t5215 = -1.*t4775*t63;
  t5217 = 0. + t5197 + t5215;
  t5193 = t1550*t4741;
  t5221 = t4749*t5217;
  t5234 = 0. + t5193 + t5221;
  t5252 = t4749*t1550;
  t5253 = -1.*t4741*t5217;
  t5255 = 0. + t5252 + t5253;
  p_output1[0]=var1[0];
  p_output1[1]=var1[1];
  p_output1[2]=var1[2];
  p_output1[3]=var1[3];
  p_output1[4]=var1[4];
  p_output1[5]=var1[5];
  p_output1[6]=t139 + 0.035199999999999995*(0. + t176*t25*t26 + t206*t305) + t45 - 0.2083*t702 - 0.1422*t752 - 0.02*(0. + t702*t777 + t752*t844) - 0.16*(0. + t702*t844 + t752*t898) + var1[0];
  p_output1[7]=t1016 - 0.2083*t1208 - 0.1422*t1299 - 0.02*(0. + t1208*t777 + t1299*t844) - 0.16*(0. + t1208*t844 + t1299*t898) + 0.035199999999999995*(0. + t1029*t206 + t176*t25*t93) + t973 + var1[1];
  p_output1[8]=t1522 + t1523 - 0.2083*t1619 - 0.1422*t1650 - 0.02*(0. + t1619*t777 + t1650*t844) + 0.035199999999999995*(0. - 1.*t176*t63 + t206*t25*t87) - 0.16*(0. + t1619*t844 + t1650*t898) + var1[2];
  p_output1[9]=t139 + t1897 - 0.2083*t2347 - 0.1422*t2455 - 0.02*(0. + t2455*t2499 + t2347*t2583) - 0.16*(0. + t2347*t2499 + t2455*t2601) - 0.0329*(0. + t1946*t25*t26 - 1.*t2128*t305) + var1[0];
  p_output1[10]=t1016 + t2672 - 0.2083*t2913 - 0.1422*t2970 - 0.02*(0. + t2583*t2913 + t2499*t2970) - 0.16*(0. + t2499*t2913 + t2601*t2970) - 0.0329*(0. - 1.*t1029*t2128 + t1946*t25*t93) + var1[1];
  p_output1[11]=t1522 + t3167 - 0.2083*t3332 - 0.1422*t3407 - 0.02*(0. + t2583*t3332 + t2499*t3407) - 0.16*(0. + t2499*t3332 + t2601*t3407) - 0.0329*(0. - 1.*t1946*t63 - 1.*t2128*t25*t87) + var1[2];
  p_output1[12]=t3696 + 0.035199999999999995*(0. + t25*t26*t3716 + t305*t3742) - 0.2083*t3870 - 0.1422*t3921 - 0.02*(0. + t3870*t3997 + t3921*t4053) - 0.16*(0. + t3870*t4053 + t3921*t4123) + t45 + var1[0];
  p_output1[13]=t4177 - 0.2083*t4332 - 0.1422*t4352 - 0.02*(0. + t3997*t4332 + t4053*t4352) - 0.16*(0. + t4053*t4332 + t4123*t4352) + 0.035199999999999995*(0. + t1029*t3742 + t25*t3716*t93) + t973 + var1[1];
  p_output1[14]=t1523 + t4508 - 0.2083*t4571 - 0.1422*t4602 - 0.02*(0. + t3997*t4571 + t4053*t4602) - 0.16*(0. + t4053*t4571 + t4123*t4602) + 0.035199999999999995*(0. - 1.*t3716*t63 + t25*t3742*t87) + var1[2];
  p_output1[15]=t1897 + t3696 - 0.0329*(0. + t25*t26*t4721 - 1.*t305*t4731) - 0.2083*t4827 - 0.1422*t4866 - 0.02*(0. + t4827*t4934 + t4866*t4948) - 0.16*(0. + t4827*t4948 + t4866*t4957) + var1[0];
  p_output1[16]=t2672 + t4177 - 0.2083*t5072 - 0.1422*t5090 - 0.02*(0. + t4934*t5072 + t4948*t5090) - 0.16*(0. + t4948*t5072 + t4957*t5090) - 0.0329*(0. - 1.*t1029*t4731 + t25*t4721*t93) + var1[1];
  p_output1[17]=t3167 + t4508 - 0.2083*t5234 - 0.1422*t5255 - 0.02*(0. + t4934*t5234 + t4948*t5255) - 0.16*(0. + t4948*t5234 + t4957*t5255) - 0.0329*(0. - 1.*t4721*t63 - 1.*t25*t4731*t87) + var1[2];
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
