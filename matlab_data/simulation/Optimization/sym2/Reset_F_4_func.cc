/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 21:23:26 GMT-05:00
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
  double t333;
  double t314;
  double t718;
  double t608;
  double t506;
  double t879;
  double t979;
  double t1250;
  double t1292;
  double t1447;
  double t1452;
  double t696;
  double t946;
  double t1551;
  double t1904;
  double t1624;
  double t1738;
  double t1788;
  double t1816;
  double t1929;
  double t2265;
  double t2283;
  double t2340;
  double t1882;
  double t2039;
  double t2112;
  double t2491;
  double t2502;
  double t2653;
  double t1034;
  double t2913;
  double t2927;
  double t2931;
  double t2820;
  double t2821;
  double t3117;
  double t3017;
  double t3020;
  double t3037;
  double t3179;
  double t3213;
  double t3275;
  double t3043;
  double t3125;
  double t3127;
  double t2685;
  double t2709;
  double t2774;
  double t3677;
  double t3678;
  double t3625;
  double t3632;
  double t3651;
  double t3724;
  double t3725;
  double t3728;
  double t3661;
  double t3680;
  double t3696;
  double t951;
  double t3952;
  double t3928;
  double t4009;
  double t3993;
  double t4014;
  double t4016;
  double t4019;
  double t4025;
  double t4027;
  double t3997;
  double t4034;
  double t4037;
  double t4060;
  double t4066;
  double t4087;
  double t4128;
  double t4136;
  double t4106;
  double t2831;
  double t3939;
  double t4244;
  double t4294;
  double t4296;
  double t4115;
  double t4123;
  double t4241;
  double t4298;
  double t4312;
  double t4322;
  double t4324;
  double t4327;
  double t4195;
  double t4428;
  double t4432;
  double t4434;
  double t4426;
  double t4435;
  double t4446;
  double t4454;
  double t4468;
  double t4480;
  double t338;
  double t3893;
  double t4569;
  double t4564;
  double t4613;
  double t4579;
  double t4619;
  double t4621;
  double t4622;
  double t4624;
  double t4598;
  double t4633;
  double t4637;
  double t4646;
  double t4648;
  double t4650;
  double t4662;
  double t4665;
  double t4655;
  double t2802;
  double t4218;
  double t4567;
  double t4755;
  double t4759;
  double t4763;
  double t4656;
  double t4657;
  double t4754;
  double t4765;
  double t4766;
  double t4776;
  double t4778;
  double t4794;
  double t4710;
  double t4404;
  double t3451;
  double t4937;
  double t4940;
  double t4944;
  double t4934;
  double t4947;
  double t4948;
  double t4950;
  double t4953;
  double t4955;
  t333 = Cos(var1[5]);
  t314 = Cos(var1[4]);
  t718 = Sin(var1[3]);
  t608 = Sin(var1[4]);
  t506 = Cos(var1[3]);
  t879 = Sin(var1[5]);
  t979 = Cos(var1[6]);
  t1250 = t333*t718*t608;
  t1292 = -1.*t506*t879;
  t1447 = t1250 + t1292;
  t1452 = Sin(var1[6]);
  t696 = t506*t333*t608;
  t946 = t718*t879;
  t1551 = Cos(var1[7]);
  t1904 = 0. + t696 + t946;
  t1624 = t979*t1447;
  t1738 = 0. + t1452;
  t1788 = t314*t333*t1738;
  t1816 = 0. + t1624 + t1788;
  t1929 = Sin(var1[7]);
  t2265 = t1551*t1904;
  t2283 = -1.*t1816*t1929;
  t2340 = 0. + t2265 + t2283;
  t1882 = t1551*t1816;
  t2039 = t1904*t1929;
  t2112 = 0. + t1882 + t2039;
  t2491 = Cos(var1[8]);
  t2502 = 0. + t2491;
  t2653 = Sin(var1[8]);
  t1034 = 0. + t979;
  t2913 = t506*t333;
  t2927 = t718*t608*t879;
  t2931 = t2913 + t2927;
  t2820 = -1.*t333*t718;
  t2821 = t506*t608*t879;
  t3117 = 0. + t2820 + t2821;
  t3017 = t979*t2931;
  t3020 = t314*t879*t1738;
  t3037 = 0. + t3017 + t3020;
  t3179 = t1551*t3117;
  t3213 = -1.*t3037*t1929;
  t3275 = 0. + t3179 + t3213;
  t3043 = t1551*t3037;
  t3125 = t3117*t1929;
  t3127 = 0. + t3043 + t3125;
  t2685 = -1.*t2653;
  t2709 = 0. + t2685;
  t2774 = 0. + t2653;
  t3677 = t506*t314;
  t3678 = 0. + t3677;
  t3625 = t314*t979*t718;
  t3632 = -1.*t608*t1738;
  t3651 = 0. + t3625 + t3632;
  t3724 = t3678*t1551;
  t3725 = -1.*t3651*t1929;
  t3728 = 0. + t3724 + t3725;
  t3661 = t1551*t3651;
  t3680 = t3678*t1929;
  t3696 = 0. + t3661 + t3680;
  t951 = t696 + t946;
  t3952 = Sin(var1[15]);
  t3928 = Cos(var1[15]);
  t4009 = Cos(var1[16]);
  t3993 = Sin(var1[16]);
  t4014 = -1.*t3952;
  t4016 = 0. + t4014;
  t4019 = t314*t333*t4016;
  t4025 = t3928*t1447;
  t4027 = 0. + t4019 + t4025;
  t3997 = t3993*t1904;
  t4034 = t4009*t4027;
  t4037 = 0. + t3997 + t4034;
  t4060 = t4009*t1904;
  t4066 = -1.*t3993*t4027;
  t4087 = 0. + t4060 + t4066;
  t4128 = Cos(var1[17]);
  t4136 = 0. + t4128;
  t4106 = Sin(var1[17]);
  t2831 = t2820 + t2821;
  t3939 = 0. + t3928;
  t4244 = t314*t4016*t879;
  t4294 = t3928*t2931;
  t4296 = 0. + t4244 + t4294;
  t4115 = -1.*t4106;
  t4123 = 0. + t4115;
  t4241 = t3993*t3117;
  t4298 = t4009*t4296;
  t4312 = 0. + t4241 + t4298;
  t4322 = t4009*t3117;
  t4324 = -1.*t3993*t4296;
  t4327 = 0. + t4322 + t4324;
  t4195 = 0. + t4106;
  t4428 = t3928*t314*t718;
  t4432 = -1.*t4016*t608;
  t4434 = 0. + t4428 + t4432;
  t4426 = t3678*t3993;
  t4435 = t4009*t4434;
  t4446 = 0. + t4426 + t4435;
  t4454 = t4009*t3678;
  t4468 = -1.*t3993*t4434;
  t4480 = 0. + t4454 + t4468;
  t338 = -0.0817*t314*t333;
  t3893 = -0.1944*t951;
  t4569 = Sin(var1[12]);
  t4564 = Cos(var1[12]);
  t4613 = Cos(var1[13]);
  t4579 = Sin(var1[13]);
  t4619 = 0. + t4569;
  t4621 = t314*t333*t4619;
  t4622 = t4564*t1447;
  t4624 = 0. + t4621 + t4622;
  t4598 = t4579*t1904;
  t4633 = t4613*t4624;
  t4637 = 0. + t4598 + t4633;
  t4646 = t4613*t1904;
  t4648 = -1.*t4579*t4624;
  t4650 = 0. + t4646 + t4648;
  t4662 = Cos(var1[14]);
  t4665 = 0. + t4662;
  t4655 = Sin(var1[14]);
  t2802 = -0.0817*t314*t879;
  t4218 = -0.1944*t2831;
  t4567 = 0. + t4564;
  t4755 = t314*t4619*t879;
  t4759 = t4564*t2931;
  t4763 = 0. + t4755 + t4759;
  t4656 = -1.*t4655;
  t4657 = 0. + t4656;
  t4754 = t4579*t3117;
  t4765 = t4613*t4763;
  t4766 = 0. + t4754 + t4765;
  t4776 = t4613*t3117;
  t4778 = -1.*t4579*t4763;
  t4794 = 0. + t4776 + t4778;
  t4710 = 0. + t4655;
  t4404 = -0.1944*t506*t314;
  t3451 = 0.0817*t608;
  t4937 = t4564*t314*t718;
  t4940 = -1.*t4619*t608;
  t4944 = 0. + t4937 + t4940;
  t4934 = t3678*t4579;
  t4947 = t4613*t4944;
  t4948 = 0. + t4934 + t4947;
  t4950 = t4613*t3678;
  t4953 = -1.*t4579*t4944;
  t4955 = 0. + t4950 + t4953;
  p_output1[0]=-0.2083*t2112 - 0.1422*t2340 - 0.02*(0. + t2340*t2502 + t2112*t2709) - 0.16*(0. + t2112*t2502 + t2340*t2774) - 0.0329*(0. - 1.*t1447*t1452 + t1034*t314*t333) + t338 + 0.2429*t951 + var1[0];
  p_output1[1]=t2802 + 0.2429*t2831 - 0.2083*t3127 - 0.1422*t3275 - 0.02*(0. + t2709*t3127 + t2502*t3275) - 0.16*(0. + t2502*t3127 + t2774*t3275) - 0.0329*(0. - 1.*t1452*t2931 + t1034*t314*t879) + var1[1];
  p_output1[2]=t3451 - 0.2083*t3696 - 0.1422*t3728 - 0.02*(0. + t2709*t3696 + t2502*t3728) - 0.16*(0. + t2502*t3696 + t2774*t3728) + 0.2429*t314*t506 - 0.0329*(0. - 1.*t1034*t608 - 1.*t1452*t314*t718) + var1[2];
  p_output1[3]=0.0817*t314*t333 + t3893 + 0.035199999999999995*(0. + t314*t333*t3939 + t1447*t3952) - 0.2083*t4037 - 0.1422*t4087 - 0.02*(0. + t4037*t4123 + t4087*t4136) - 0.16*(0. + t4037*t4136 + t4087*t4195) + var1[0];
  p_output1[4]=t4218 - 0.2083*t4312 - 0.1422*t4327 - 0.02*(0. + t4123*t4312 + t4136*t4327) - 0.16*(0. + t4136*t4312 + t4195*t4327) + 0.0817*t314*t879 + 0.035199999999999995*(0. + t2931*t3952 + t314*t3939*t879) + var1[1];
  p_output1[5]=t4404 - 0.2083*t4446 - 0.1422*t4480 - 0.02*(0. + t4123*t4446 + t4136*t4480) - 0.16*(0. + t4136*t4446 + t4195*t4480) - 0.0817*t608 + 0.035199999999999995*(0. - 1.*t3939*t608 + t314*t3952*t718) + var1[2];
  p_output1[6]=t338 + t3893 - 0.0329*(0. + t314*t333*t4567 - 1.*t1447*t4569) - 0.2083*t4637 - 0.1422*t4650 - 0.02*(0. + t4637*t4657 + t4650*t4665) - 0.16*(0. + t4637*t4665 + t4650*t4710) + var1[0];
  p_output1[7]=t2802 + t4218 - 0.2083*t4766 - 0.1422*t4794 - 0.02*(0. + t4657*t4766 + t4665*t4794) - 0.16*(0. + t4665*t4766 + t4710*t4794) - 0.0329*(0. - 1.*t2931*t4569 + t314*t4567*t879) + var1[1];
  p_output1[8]=t3451 + t4404 - 0.2083*t4948 - 0.1422*t4955 - 0.02*(0. + t4657*t4948 + t4665*t4955) - 0.16*(0. + t4665*t4948 + t4710*t4955) - 0.0329*(0. - 1.*t4567*t608 - 1.*t314*t4569*t718) + var1[2];
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
