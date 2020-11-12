/*
 * Automatically Generated from Mathematica.
 * Mon 29 Jul 2019 15:08:25 GMT-04:00
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
  double t314;
  double t294;
  double t493;
  double t461;
  double t441;
  double t497;
  double t467;
  double t528;
  double t588;
  double t565;
  double t598;
  double t601;
  double t603;
  double t704;
  double t658;
  double t643;
  double t731;
  double t741;
  double t747;
  double t749;
  double t751;
  double t675;
  double t758;
  double t761;
  double t771;
  double t778;
  double t795;
  double t880;
  double t883;
  double t816;
  double t569;
  double t956;
  double t974;
  double t982;
  double t986;
  double t1000;
  double t1027;
  double t1043;
  double t1052;
  double t1053;
  double t835;
  double t837;
  double t1042;
  double t1070;
  double t1075;
  double t1086;
  double t1120;
  double t1134;
  double t904;
  double t1209;
  double t1213;
  double t1224;
  double t1226;
  double t1227;
  double t1222;
  double t1232;
  double t1240;
  double t1245;
  double t1253;
  double t1254;
  double t1261;
  double t1262;
  double t1265;
  double t1277;
  double t1279;
  double t1281;
  double t583;
  double t604;
  double t620;
  double t980;
  double t1005;
  double t1008;
  t314 = Cos(var1[5]);
  t294 = Cos(var1[4]);
  t493 = Sin(var1[3]);
  t461 = Sin(var1[4]);
  t441 = Cos(var1[3]);
  t497 = Sin(var1[5]);
  t467 = t441*t314*t461;
  t528 = t493*t497;
  t588 = Sin(var1[15]);
  t565 = Cos(var1[15]);
  t598 = t314*t493*t461;
  t601 = -1.*t441*t497;
  t603 = t598 + t601;
  t704 = Cos(var1[16]);
  t658 = 0. + t467 + t528;
  t643 = Sin(var1[16]);
  t731 = -1.*t588;
  t741 = 0. + t731;
  t747 = t294*t314*t741;
  t749 = t565*t603;
  t751 = 0. + t747 + t749;
  t675 = t643*t658;
  t758 = t704*t751;
  t761 = 0. + t675 + t758;
  t771 = t704*t658;
  t778 = -1.*t643*t751;
  t795 = 0. + t771 + t778;
  t880 = Cos(var1[17]);
  t883 = 0. + t880;
  t816 = Sin(var1[17]);
  t569 = 0. + t565;
  t956 = -1.*t314*t493;
  t974 = t441*t461*t497;
  t982 = t441*t314;
  t986 = t493*t461*t497;
  t1000 = t982 + t986;
  t1027 = 0. + t956 + t974;
  t1043 = t294*t741*t497;
  t1052 = t565*t1000;
  t1053 = 0. + t1043 + t1052;
  t835 = -1.*t816;
  t837 = 0. + t835;
  t1042 = t643*t1027;
  t1070 = t704*t1053;
  t1075 = 0. + t1042 + t1070;
  t1086 = t704*t1027;
  t1120 = -1.*t643*t1053;
  t1134 = 0. + t1086 + t1120;
  t904 = 0. + t816;
  t1209 = t441*t294;
  t1213 = 0. + t1209;
  t1224 = t565*t294*t493;
  t1226 = -1.*t741*t461;
  t1227 = 0. + t1224 + t1226;
  t1222 = t1213*t643;
  t1232 = t704*t1227;
  t1240 = 0. + t1222 + t1232;
  t1245 = t704*t1213;
  t1253 = -1.*t643*t1227;
  t1254 = 0. + t1245 + t1253;
  t1261 = t837*t1240;
  t1262 = t883*t1254;
  t1265 = 0. + t1261 + t1262;
  t1277 = t883*t1240;
  t1279 = t904*t1254;
  t1281 = 0. + t1277 + t1279;
  t583 = t569*t294*t314;
  t604 = t588*t603;
  t620 = 0. + t583 + t604;
  t980 = t569*t294*t497;
  t1005 = t588*t1000;
  t1008 = 0. + t980 + t1005;
  p_output1[0]=0.0817*t294*t314 - 0.1944*(t467 + t528) + 0.0329*t620 - 0.2083*t761 - 0.1422*t795 - 0.02*(0. + t761*t837 + t795*t883) - 0.16*(0. + t761*t883 + t795*t904) + var1[0];
  p_output1[1]=0.0329*t1008 - 0.2083*t1075 - 0.1422*t1134 + 0.0817*t294*t497 - 0.02*(0. + t1075*t837 + t1134*t883) - 0.16*(0. + t1075*t883 + t1134*t904) - 0.1944*(t956 + t974) + var1[1];
  p_output1[2]=-0.2083*t1240 - 0.1422*t1254 - 0.02*t1265 - 0.16*t1281 - 0.1944*t294*t441 - 0.0817*t461 + 0.0329*(0. - 1.*t461*t569 + t294*t493*t588) + var1[2];
  p_output1[3]=ArcTan(t1265,t1281);
  p_output1[4]=ArcTan(Sqrt(Power(t1265,2) + Power(t1281,2)),0. + t461*t569 - 1.*t294*t493*t588);
  p_output1[5]=ArcTan(t620,t1008);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "SF_4_func.hh"

namespace SymFunction
{

void SF_4_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
