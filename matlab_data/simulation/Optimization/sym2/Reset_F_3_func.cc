/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 21:23:23 GMT-05:00
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
  double t392;
  double t336;
  double t708;
  double t689;
  double t649;
  double t811;
  double t696;
  double t879;
  double t1261;
  double t1034;
  double t1292;
  double t1311;
  double t1336;
  double t1738;
  double t1532;
  double t1490;
  double t1768;
  double t1769;
  double t1788;
  double t1816;
  double t1876;
  double t1551;
  double t1882;
  double t1904;
  double t2039;
  double t2044;
  double t2112;
  double t2340;
  double t2357;
  double t2178;
  double t1103;
  double t2751;
  double t2774;
  double t2800;
  double t2802;
  double t2806;
  double t2841;
  double t2913;
  double t2927;
  double t2929;
  double t2264;
  double t2265;
  double t2873;
  double t2931;
  double t2935;
  double t2984;
  double t2995;
  double t3017;
  double t2685;
  double t3329;
  double t3332;
  double t3397;
  double t3398;
  double t3401;
  double t3336;
  double t3451;
  double t3494;
  double t3511;
  double t3613;
  double t3615;
  double t951;
  double t963;
  double t3728;
  double t3756;
  double t3787;
  double t3799;
  double t3828;
  double t3829;
  double t3831;
  double t3839;
  double t3928;
  double t3936;
  double t3939;
  double t3837;
  double t3868;
  double t3872;
  double t3952;
  double t3953;
  double t3970;
  double t2790;
  double t2794;
  double t3737;
  double t4102;
  double t4106;
  double t4110;
  double t4136;
  double t4138;
  double t4145;
  double t4115;
  double t4123;
  double t4127;
  double t3975;
  double t3981;
  double t4016;
  double t3280;
  double t4244;
  double t4278;
  double t4279;
  double t4320;
  double t4321;
  double t4322;
  double t4294;
  double t4296;
  double t4298;
  double t3725;
  double t4405;
  double t4392;
  double t4422;
  double t4420;
  double t4424;
  double t4426;
  double t4428;
  double t4430;
  double t4421;
  double t4432;
  double t4434;
  double t4446;
  double t4447;
  double t4448;
  double t4490;
  double t4496;
  double t4455;
  double t4037;
  double t4398;
  double t4579;
  double t4598;
  double t4605;
  double t4465;
  double t4468;
  double t4572;
  double t4613;
  double t4619;
  double t4622;
  double t4623;
  double t4624;
  double t4528;
  double t4220;
  double t4683;
  double t4685;
  double t4699;
  double t4678;
  double t4710;
  double t4715;
  double t4725;
  double t4726;
  double t4731;
  t392 = Cos(var1[5]);
  t336 = Cos(var1[4]);
  t708 = Sin(var1[3]);
  t689 = Sin(var1[4]);
  t649 = Cos(var1[3]);
  t811 = Sin(var1[5]);
  t696 = t649*t392*t689;
  t879 = t708*t811;
  t1261 = Sin(var1[9]);
  t1034 = Cos(var1[9]);
  t1292 = t392*t708*t689;
  t1311 = -1.*t649*t811;
  t1336 = t1292 + t1311;
  t1738 = Cos(var1[10]);
  t1532 = 0. + t696 + t879;
  t1490 = Sin(var1[10]);
  t1768 = -1.*t1261;
  t1769 = 0. + t1768;
  t1788 = t336*t392*t1769;
  t1816 = t1034*t1336;
  t1876 = 0. + t1788 + t1816;
  t1551 = t1490*t1532;
  t1882 = t1738*t1876;
  t1904 = 0. + t1551 + t1882;
  t2039 = t1738*t1532;
  t2044 = -1.*t1490*t1876;
  t2112 = 0. + t2039 + t2044;
  t2340 = Cos(var1[11]);
  t2357 = 0. + t2340;
  t2178 = Sin(var1[11]);
  t1103 = 0. + t1034;
  t2751 = -1.*t392*t708;
  t2774 = t649*t689*t811;
  t2800 = t649*t392;
  t2802 = t708*t689*t811;
  t2806 = t2800 + t2802;
  t2841 = 0. + t2751 + t2774;
  t2913 = t336*t1769*t811;
  t2927 = t1034*t2806;
  t2929 = 0. + t2913 + t2927;
  t2264 = -1.*t2178;
  t2265 = 0. + t2264;
  t2873 = t1490*t2841;
  t2931 = t1738*t2929;
  t2935 = 0. + t2873 + t2931;
  t2984 = t1738*t2841;
  t2995 = -1.*t1490*t2929;
  t3017 = 0. + t2984 + t2995;
  t2685 = 0. + t2178;
  t3329 = t649*t336;
  t3332 = 0. + t3329;
  t3397 = t1034*t336*t708;
  t3398 = -1.*t1769*t689;
  t3401 = 0. + t3397 + t3398;
  t3336 = t3332*t1490;
  t3451 = t1738*t3401;
  t3494 = 0. + t3336 + t3451;
  t3511 = t1738*t3332;
  t3613 = -1.*t1490*t3401;
  t3615 = 0. + t3511 + t3613;
  t951 = t696 + t879;
  t963 = 0.2429*t951;
  t3728 = Cos(var1[6]);
  t3756 = Sin(var1[6]);
  t3787 = Cos(var1[7]);
  t3799 = t3728*t1336;
  t3828 = 0. + t3756;
  t3829 = t336*t392*t3828;
  t3831 = 0. + t3799 + t3829;
  t3839 = Sin(var1[7]);
  t3928 = t3787*t1532;
  t3936 = -1.*t3831*t3839;
  t3939 = 0. + t3928 + t3936;
  t3837 = t3787*t3831;
  t3868 = t1532*t3839;
  t3872 = 0. + t3837 + t3868;
  t3952 = Cos(var1[8]);
  t3953 = 0. + t3952;
  t3970 = Sin(var1[8]);
  t2790 = t2751 + t2774;
  t2794 = 0.2429*t2790;
  t3737 = 0. + t3728;
  t4102 = t3728*t2806;
  t4106 = t336*t811*t3828;
  t4110 = 0. + t4102 + t4106;
  t4136 = t3787*t2841;
  t4138 = -1.*t4110*t3839;
  t4145 = 0. + t4136 + t4138;
  t4115 = t3787*t4110;
  t4123 = t2841*t3839;
  t4127 = 0. + t4115 + t4123;
  t3975 = -1.*t3970;
  t3981 = 0. + t3975;
  t4016 = 0. + t3970;
  t3280 = 0.2429*t649*t336;
  t4244 = t336*t3728*t708;
  t4278 = -1.*t689*t3828;
  t4279 = 0. + t4244 + t4278;
  t4320 = t3332*t3787;
  t4321 = -1.*t4279*t3839;
  t4322 = 0. + t4320 + t4321;
  t4294 = t3787*t4279;
  t4296 = t3332*t3839;
  t4298 = 0. + t4294 + t4296;
  t3725 = -0.0817*t336*t392;
  t4405 = Sin(var1[12]);
  t4392 = Cos(var1[12]);
  t4422 = Cos(var1[13]);
  t4420 = Sin(var1[13]);
  t4424 = 0. + t4405;
  t4426 = t336*t392*t4424;
  t4428 = t4392*t1336;
  t4430 = 0. + t4426 + t4428;
  t4421 = t4420*t1532;
  t4432 = t4422*t4430;
  t4434 = 0. + t4421 + t4432;
  t4446 = t4422*t1532;
  t4447 = -1.*t4420*t4430;
  t4448 = 0. + t4446 + t4447;
  t4490 = Cos(var1[14]);
  t4496 = 0. + t4490;
  t4455 = Sin(var1[14]);
  t4037 = -0.0817*t336*t811;
  t4398 = 0. + t4392;
  t4579 = t336*t4424*t811;
  t4598 = t4392*t2806;
  t4605 = 0. + t4579 + t4598;
  t4465 = -1.*t4455;
  t4468 = 0. + t4465;
  t4572 = t4420*t2841;
  t4613 = t4422*t4605;
  t4619 = 0. + t4572 + t4613;
  t4622 = t4422*t2841;
  t4623 = -1.*t4420*t4605;
  t4624 = 0. + t4622 + t4623;
  t4528 = 0. + t4455;
  t4220 = 0.0817*t689;
  t4683 = t4392*t336*t708;
  t4685 = -1.*t4424*t689;
  t4699 = 0. + t4683 + t4685;
  t4678 = t3332*t4420;
  t4710 = t4422*t4699;
  t4715 = 0. + t4678 + t4710;
  t4725 = t4422*t3332;
  t4726 = -1.*t4420*t4699;
  t4731 = 0. + t4725 + t4726;
  p_output1[0]=-0.2083*t1904 - 0.1422*t2112 - 0.02*(0. + t1904*t2265 + t2112*t2357) - 0.16*(0. + t1904*t2357 + t2112*t2685) + 0.0817*t336*t392 + 0.035199999999999995*(0. + t1261*t1336 + t1103*t336*t392) + t963 + var1[0];
  p_output1[1]=t2794 - 0.2083*t2935 - 0.1422*t3017 - 0.02*(0. + t2265*t2935 + t2357*t3017) - 0.16*(0. + t2357*t2935 + t2685*t3017) + 0.0817*t336*t811 + 0.035199999999999995*(0. + t1261*t2806 + t1103*t336*t811) + var1[1];
  p_output1[2]=t3280 - 0.2083*t3494 - 0.1422*t3615 - 0.02*(0. + t2265*t3494 + t2357*t3615) - 0.16*(0. + t2357*t3494 + t2685*t3615) - 0.0817*t689 + 0.035199999999999995*(0. - 1.*t1103*t689 + t1261*t336*t708) + var1[2];
  p_output1[3]=t3725 - 0.2083*t3872 - 0.0329*(0. - 1.*t1336*t3756 + t336*t3737*t392) - 0.1422*t3939 - 0.02*(0. + t3939*t3953 + t3872*t3981) - 0.16*(0. + t3872*t3953 + t3939*t4016) + t963 + var1[0];
  p_output1[4]=t2794 + t4037 - 0.2083*t4127 - 0.1422*t4145 - 0.02*(0. + t3981*t4127 + t3953*t4145) - 0.16*(0. + t3953*t4127 + t4016*t4145) - 0.0329*(0. - 1.*t2806*t3756 + t336*t3737*t811) + var1[1];
  p_output1[5]=t3280 + t4220 - 0.2083*t4298 - 0.1422*t4322 - 0.02*(0. + t3981*t4298 + t3953*t4322) - 0.16*(0. + t3953*t4298 + t4016*t4322) - 0.0329*(0. - 1.*t3737*t689 - 1.*t336*t3756*t708) + var1[2];
  p_output1[6]=t3725 - 0.0329*(0. + t336*t392*t4398 - 1.*t1336*t4405) - 0.2083*t4434 - 0.1422*t4448 - 0.02*(0. + t4434*t4468 + t4448*t4496) - 0.16*(0. + t4434*t4496 + t4448*t4528) - 0.1944*t951 + var1[0];
  p_output1[7]=-0.1944*t2790 + t4037 - 0.2083*t4619 - 0.1422*t4624 - 0.02*(0. + t4468*t4619 + t4496*t4624) - 0.16*(0. + t4496*t4619 + t4528*t4624) - 0.0329*(0. - 1.*t2806*t4405 + t336*t4398*t811) + var1[1];
  p_output1[8]=t4220 - 0.2083*t4715 - 0.1422*t4731 - 0.02*(0. + t4468*t4715 + t4496*t4731) - 0.16*(0. + t4496*t4715 + t4528*t4731) - 0.1944*t336*t649 - 0.0329*(0. - 1.*t4398*t689 - 1.*t336*t4405*t708) + var1[2];
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
