/*
 * Automatically Generated from Mathematica.
 * Fri 10 May 2019 20:22:34 GMT-04:00
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
  double t46;
  double t9;
  double t107;
  double t93;
  double t85;
  double t143;
  double t98;
  double t144;
  double t185;
  double t168;
  double t186;
  double t189;
  double t195;
  double t253;
  double t241;
  double t229;
  double t254;
  double t255;
  double t286;
  double t287;
  double t295;
  double t250;
  double t296;
  double t298;
  double t310;
  double t322;
  double t325;
  double t408;
  double t422;
  double t358;
  double t169;
  double t491;
  double t497;
  double t518;
  double t523;
  double t525;
  double t552;
  double t560;
  double t572;
  double t579;
  double t374;
  double t377;
  double t557;
  double t588;
  double t608;
  double t618;
  double t622;
  double t629;
  double t453;
  double t680;
  double t681;
  double t694;
  double t695;
  double t697;
  double t685;
  double t700;
  double t704;
  double t712;
  double t715;
  double t724;
  double t726;
  double t730;
  double t736;
  double t743;
  double t746;
  double t747;
  double t170;
  double t202;
  double t214;
  double t515;
  double t530;
  double t544;
  double t149;
  double t816;
  double t813;
  double t848;
  double t840;
  double t849;
  double t857;
  double t864;
  double t866;
  double t842;
  double t867;
  double t872;
  double t877;
  double t890;
  double t891;
  double t913;
  double t917;
  double t898;
  double t498;
  double t814;
  double t979;
  double t981;
  double t987;
  double t903;
  double t906;
  double t975;
  double t999;
  double t1020;
  double t1024;
  double t1028;
  double t1033;
  double t938;
  double t1098;
  double t1105;
  double t1107;
  double t1096;
  double t1109;
  double t1112;
  double t1119;
  double t1128;
  double t1129;
  double t1144;
  double t1146;
  double t1150;
  double t1160;
  double t1164;
  double t1178;
  double t815;
  double t829;
  double t830;
  double t960;
  double t961;
  double t962;
  t46 = Cos(var1[5]);
  t9 = Cos(var1[4]);
  t107 = Sin(var1[3]);
  t93 = Sin(var1[4]);
  t85 = Cos(var1[3]);
  t143 = Sin(var1[5]);
  t98 = t85*t46*t93;
  t144 = t107*t143;
  t185 = Sin(var1[9]);
  t168 = Cos(var1[9]);
  t186 = t46*t107*t93;
  t189 = -1.*t85*t143;
  t195 = t186 + t189;
  t253 = Cos(var1[10]);
  t241 = 0. + t98 + t144;
  t229 = Sin(var1[10]);
  t254 = -1.*t185;
  t255 = 0. + t254;
  t286 = t9*t46*t255;
  t287 = t168*t195;
  t295 = 0. + t286 + t287;
  t250 = t229*t241;
  t296 = t253*t295;
  t298 = 0. + t250 + t296;
  t310 = t253*t241;
  t322 = -1.*t229*t295;
  t325 = 0. + t310 + t322;
  t408 = Cos(var1[11]);
  t422 = 0. + t408;
  t358 = Sin(var1[11]);
  t169 = 0. + t168;
  t491 = -1.*t46*t107;
  t497 = t85*t93*t143;
  t518 = t85*t46;
  t523 = t107*t93*t143;
  t525 = t518 + t523;
  t552 = 0. + t491 + t497;
  t560 = t9*t255*t143;
  t572 = t168*t525;
  t579 = 0. + t560 + t572;
  t374 = -1.*t358;
  t377 = 0. + t374;
  t557 = t229*t552;
  t588 = t253*t579;
  t608 = 0. + t557 + t588;
  t618 = t253*t552;
  t622 = -1.*t229*t579;
  t629 = 0. + t618 + t622;
  t453 = 0. + t358;
  t680 = t85*t9;
  t681 = 0. + t680;
  t694 = t168*t9*t107;
  t695 = -1.*t255*t93;
  t697 = 0. + t694 + t695;
  t685 = t681*t229;
  t700 = t253*t697;
  t704 = 0. + t685 + t700;
  t712 = t253*t681;
  t715 = -1.*t229*t697;
  t724 = 0. + t712 + t715;
  t726 = t377*t704;
  t730 = t422*t724;
  t736 = 0. + t726 + t730;
  t743 = t422*t704;
  t746 = t453*t724;
  t747 = 0. + t743 + t746;
  t170 = t169*t9*t46;
  t202 = t185*t195;
  t214 = 0. + t170 + t202;
  t515 = t169*t9*t143;
  t530 = t185*t525;
  t544 = 0. + t515 + t530;
  t149 = t98 + t144;
  t816 = Sin(var1[12]);
  t813 = Cos(var1[12]);
  t848 = Cos(var1[13]);
  t840 = Sin(var1[13]);
  t849 = 0. + t816;
  t857 = t9*t46*t849;
  t864 = t813*t195;
  t866 = 0. + t857 + t864;
  t842 = t840*t241;
  t867 = t848*t866;
  t872 = 0. + t842 + t867;
  t877 = t848*t241;
  t890 = -1.*t840*t866;
  t891 = 0. + t877 + t890;
  t913 = Cos(var1[14]);
  t917 = 0. + t913;
  t898 = Sin(var1[14]);
  t498 = t491 + t497;
  t814 = 0. + t813;
  t979 = t9*t849*t143;
  t981 = t813*t525;
  t987 = 0. + t979 + t981;
  t903 = -1.*t898;
  t906 = 0. + t903;
  t975 = t840*t552;
  t999 = t848*t987;
  t1020 = 0. + t975 + t999;
  t1024 = t848*t552;
  t1028 = -1.*t840*t987;
  t1033 = 0. + t1024 + t1028;
  t938 = 0. + t898;
  t1098 = t813*t9*t107;
  t1105 = -1.*t849*t93;
  t1107 = 0. + t1098 + t1105;
  t1096 = t681*t840;
  t1109 = t848*t1107;
  t1112 = 0. + t1096 + t1109;
  t1119 = t848*t681;
  t1128 = -1.*t840*t1107;
  t1129 = 0. + t1119 + t1128;
  t1144 = t906*t1112;
  t1146 = t917*t1129;
  t1150 = 0. + t1144 + t1146;
  t1160 = t917*t1112;
  t1164 = t938*t1129;
  t1178 = 0. + t1160 + t1164;
  t815 = t814*t9*t46;
  t829 = -1.*t816*t195;
  t830 = 0. + t815 + t829;
  t960 = t814*t9*t143;
  t961 = -1.*t816*t525;
  t962 = 0. + t960 + t961;
  p_output1[0]=0.2429*t149 + 0.0329*t214 - 0.2083*t298 - 0.1422*t325 - 0.02*(0. + t298*t377 + t325*t422) - 0.16*(0. + t298*t422 + t325*t453) + 0.0817*t46*t9 + var1[0];
  p_output1[1]=0.2429*t498 + 0.0329*t544 - 0.2083*t608 - 0.1422*t629 - 0.02*(0. + t377*t608 + t422*t629) - 0.16*(0. + t422*t608 + t453*t629) + 0.0817*t143*t9 + var1[1];
  p_output1[2]=-0.2083*t704 - 0.1422*t724 - 0.02*t736 - 0.16*t747 + 0.2429*t85*t9 - 0.0817*t93 + 0.0329*(0. + t107*t185*t9 - 1.*t169*t93) + var1[2];
  p_output1[3]=ArcTan(t736,t747);
  p_output1[4]=ArcTan(Sqrt(Power(t736,2) + Power(t747,2)),0. - 1.*t107*t185*t9 + t169*t93);
  p_output1[5]=ArcTan(t214,t544);
  p_output1[6]=-0.1944*t149 - 0.0329*t830 - 0.2083*t872 - 0.1422*t891 - 0.0817*t46*t9 - 0.02*(0. + t872*t906 + t891*t917) - 0.16*(0. + t872*t917 + t891*t938) + var1[0];
  p_output1[7]=-0.2083*t1020 - 0.1422*t1033 - 0.1944*t498 - 0.0817*t143*t9 - 0.02*(0. + t1020*t906 + t1033*t917) - 0.16*(0. + t1020*t917 + t1033*t938) - 0.0329*t962 + var1[1];
  p_output1[8]=-0.2083*t1112 - 0.1422*t1129 - 0.02*t1150 - 0.16*t1178 - 0.1944*t85*t9 + 0.0817*t93 - 0.0329*(0. - 1.*t107*t816*t9 - 1.*t814*t93) + var1[2];
  p_output1[9]=ArcTan(t1150,t1178);
  p_output1[10]=ArcTan(Sqrt(Power(t1150,2) + Power(t1178,2)),0. + t107*t816*t9 + t814*t93);
  p_output1[11]=ArcTan(t830,t962);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 12, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "F_1_func_fully.hh"

namespace SymFunction
{

void F_1_func_fully_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
