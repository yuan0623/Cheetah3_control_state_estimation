/*
 * Automatically Generated from Mathematica.
 * Fri 10 May 2019 20:22:37 GMT-04:00
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
  double t20;
  double t10;
  double t66;
  double t64;
  double t57;
  double t77;
  double t126;
  double t134;
  double t139;
  double t141;
  double t147;
  double t65;
  double t86;
  double t190;
  double t221;
  double t196;
  double t201;
  double t203;
  double t204;
  double t228;
  double t267;
  double t275;
  double t304;
  double t206;
  double t243;
  double t251;
  double t313;
  double t317;
  double t330;
  double t127;
  double t420;
  double t425;
  double t426;
  double t411;
  double t412;
  double t478;
  double t452;
  double t456;
  double t459;
  double t504;
  double t506;
  double t507;
  double t474;
  double t483;
  double t485;
  double t341;
  double t342;
  double t376;
  double t672;
  double t680;
  double t641;
  double t652;
  double t663;
  double t697;
  double t701;
  double t709;
  double t668;
  double t681;
  double t684;
  double t715;
  double t719;
  double t720;
  double t731;
  double t733;
  double t736;
  double t131;
  double t162;
  double t167;
  double t418;
  double t429;
  double t439;
  double t96;
  double t822;
  double t808;
  double t854;
  double t833;
  double t868;
  double t872;
  double t875;
  double t876;
  double t882;
  double t839;
  double t885;
  double t893;
  double t916;
  double t919;
  double t925;
  double t960;
  double t964;
  double t944;
  double t415;
  double t810;
  double t1061;
  double t1067;
  double t1068;
  double t947;
  double t957;
  double t1048;
  double t1073;
  double t1079;
  double t1087;
  double t1097;
  double t1099;
  double t995;
  double t1213;
  double t1221;
  double t1229;
  double t1212;
  double t1231;
  double t1243;
  double t1251;
  double t1252;
  double t1253;
  double t1257;
  double t1263;
  double t1268;
  double t1274;
  double t1275;
  double t1287;
  double t812;
  double t825;
  double t826;
  double t1024;
  double t1027;
  double t1029;
  t20 = Cos(var1[5]);
  t10 = Cos(var1[4]);
  t66 = Sin(var1[3]);
  t64 = Sin(var1[4]);
  t57 = Cos(var1[3]);
  t77 = Sin(var1[5]);
  t126 = Cos(var1[6]);
  t134 = t20*t66*t64;
  t139 = -1.*t57*t77;
  t141 = t134 + t139;
  t147 = Sin(var1[6]);
  t65 = t57*t20*t64;
  t86 = t66*t77;
  t190 = Cos(var1[7]);
  t221 = 0. + t65 + t86;
  t196 = t126*t141;
  t201 = 0. + t147;
  t203 = t10*t20*t201;
  t204 = 0. + t196 + t203;
  t228 = Sin(var1[7]);
  t267 = t190*t221;
  t275 = -1.*t204*t228;
  t304 = 0. + t267 + t275;
  t206 = t190*t204;
  t243 = t221*t228;
  t251 = 0. + t206 + t243;
  t313 = Cos(var1[8]);
  t317 = 0. + t313;
  t330 = Sin(var1[8]);
  t127 = 0. + t126;
  t420 = t57*t20;
  t425 = t66*t64*t77;
  t426 = t420 + t425;
  t411 = -1.*t20*t66;
  t412 = t57*t64*t77;
  t478 = 0. + t411 + t412;
  t452 = t126*t426;
  t456 = t10*t77*t201;
  t459 = 0. + t452 + t456;
  t504 = t190*t478;
  t506 = -1.*t459*t228;
  t507 = 0. + t504 + t506;
  t474 = t190*t459;
  t483 = t478*t228;
  t485 = 0. + t474 + t483;
  t341 = -1.*t330;
  t342 = 0. + t341;
  t376 = 0. + t330;
  t672 = t57*t10;
  t680 = 0. + t672;
  t641 = t10*t126*t66;
  t652 = -1.*t64*t201;
  t663 = 0. + t641 + t652;
  t697 = t680*t190;
  t701 = -1.*t663*t228;
  t709 = 0. + t697 + t701;
  t668 = t190*t663;
  t681 = t680*t228;
  t684 = 0. + t668 + t681;
  t715 = t317*t709;
  t719 = t684*t342;
  t720 = 0. + t715 + t719;
  t731 = t317*t684;
  t733 = t709*t376;
  t736 = 0. + t731 + t733;
  t131 = t10*t20*t127;
  t162 = -1.*t141*t147;
  t167 = 0. + t131 + t162;
  t418 = t10*t127*t77;
  t429 = -1.*t426*t147;
  t439 = 0. + t418 + t429;
  t96 = t65 + t86;
  t822 = Sin(var1[15]);
  t808 = Cos(var1[15]);
  t854 = Cos(var1[16]);
  t833 = Sin(var1[16]);
  t868 = -1.*t822;
  t872 = 0. + t868;
  t875 = t10*t20*t872;
  t876 = t808*t141;
  t882 = 0. + t875 + t876;
  t839 = t833*t221;
  t885 = t854*t882;
  t893 = 0. + t839 + t885;
  t916 = t854*t221;
  t919 = -1.*t833*t882;
  t925 = 0. + t916 + t919;
  t960 = Cos(var1[17]);
  t964 = 0. + t960;
  t944 = Sin(var1[17]);
  t415 = t411 + t412;
  t810 = 0. + t808;
  t1061 = t10*t872*t77;
  t1067 = t808*t426;
  t1068 = 0. + t1061 + t1067;
  t947 = -1.*t944;
  t957 = 0. + t947;
  t1048 = t833*t478;
  t1073 = t854*t1068;
  t1079 = 0. + t1048 + t1073;
  t1087 = t854*t478;
  t1097 = -1.*t833*t1068;
  t1099 = 0. + t1087 + t1097;
  t995 = 0. + t944;
  t1213 = t808*t10*t66;
  t1221 = -1.*t872*t64;
  t1229 = 0. + t1213 + t1221;
  t1212 = t680*t833;
  t1231 = t854*t1229;
  t1243 = 0. + t1212 + t1231;
  t1251 = t854*t680;
  t1252 = -1.*t833*t1229;
  t1253 = 0. + t1251 + t1252;
  t1257 = t957*t1243;
  t1263 = t964*t1253;
  t1268 = 0. + t1257 + t1263;
  t1274 = t964*t1243;
  t1275 = t995*t1253;
  t1287 = 0. + t1274 + t1275;
  t812 = t810*t10*t20;
  t825 = t822*t141;
  t826 = 0. + t812 + t825;
  t1024 = t810*t10*t77;
  t1027 = t822*t426;
  t1029 = 0. + t1024 + t1027;
  p_output1[0]=var1[0];
  p_output1[1]=var1[1];
  p_output1[2]=var1[2];
  p_output1[3]=var1[3];
  p_output1[4]=var1[4];
  p_output1[5]=var1[5];
  p_output1[6]=-0.0329*t167 - 0.0817*t10*t20 - 0.2083*t251 - 0.1422*t304 - 0.02*(0. + t304*t317 + t251*t342) - 0.16*(0. + t251*t317 + t304*t376) + 0.2429*t96 + var1[0];
  p_output1[7]=0.2429*t415 - 0.0329*t439 - 0.2083*t485 - 0.1422*t507 - 0.02*(0. + t342*t485 + t317*t507) - 0.16*(0. + t317*t485 + t376*t507) - 0.0817*t10*t77 + var1[1];
  p_output1[8]=0.2429*t10*t57 + 0.0817*t64 - 0.0329*(0. - 1.*t127*t64 - 1.*t10*t147*t66) - 0.2083*t684 - 0.1422*t709 - 0.02*t720 - 0.16*t736 + var1[2];
  p_output1[9]=ArcTan(t720,t736);
  p_output1[10]=ArcTan(Sqrt(Power(t720,2) + Power(t736,2)),0. + t127*t64 + t10*t147*t66);
  p_output1[11]=ArcTan(t167,t439);
  p_output1[12]=0.0817*t10*t20 + 0.0329*t826 - 0.2083*t893 - 0.1422*t925 - 0.1944*t96 - 0.02*(0. + t893*t957 + t925*t964) - 0.16*(0. + t893*t964 + t925*t995) + var1[0];
  p_output1[13]=0.0329*t1029 - 0.2083*t1079 - 0.1422*t1099 - 0.1944*t415 + 0.0817*t10*t77 - 0.02*(0. + t1079*t957 + t1099*t964) - 0.16*(0. + t1079*t964 + t1099*t995) + var1[1];
  p_output1[14]=-0.2083*t1243 - 0.1422*t1253 - 0.02*t1268 - 0.16*t1287 - 0.1944*t10*t57 - 0.0817*t64 + 0.0329*(0. - 1.*t64*t810 + t10*t66*t822) + var1[2];
  p_output1[15]=ArcTan(t1268,t1287);
  p_output1[16]=ArcTan(Sqrt(Power(t1268,2) + Power(t1287,2)),0. + t64*t810 - 1.*t10*t66*t822);
  p_output1[17]=ArcTan(t826,t1029);
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

#include "hc_1_func_fully.hh"

namespace SymFunction
{

void hc_1_func_fully_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
