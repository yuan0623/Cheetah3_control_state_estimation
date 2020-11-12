/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 21:22:07 GMT-05:00
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
  double t14;
  double t11;
  double t27;
  double t23;
  double t22;
  double t29;
  double t24;
  double t34;
  double t45;
  double t38;
  double t46;
  double t48;
  double t49;
  double t58;
  double t56;
  double t54;
  double t61;
  double t63;
  double t64;
  double t65;
  double t66;
  double t57;
  double t67;
  double t69;
  double t71;
  double t72;
  double t73;
  double t81;
  double t83;
  double t77;
  double t39;
  double t98;
  double t99;
  double t104;
  double t105;
  double t106;
  double t110;
  double t112;
  double t113;
  double t114;
  double t78;
  double t79;
  double t111;
  double t115;
  double t116;
  double t122;
  double t123;
  double t125;
  double t89;
  double t149;
  double t151;
  double t154;
  double t155;
  double t157;
  double t153;
  double t158;
  double t161;
  double t165;
  double t166;
  double t167;
  double t35;
  double t37;
  double t183;
  double t186;
  double t192;
  double t193;
  double t195;
  double t196;
  double t197;
  double t199;
  double t204;
  double t206;
  double t208;
  double t198;
  double t201;
  double t202;
  double t211;
  double t212;
  double t215;
  double t100;
  double t101;
  double t184;
  double t240;
  double t241;
  double t242;
  double t247;
  double t248;
  double t250;
  double t243;
  double t244;
  double t245;
  double t217;
  double t218;
  double t225;
  double t143;
  double t275;
  double t279;
  double t280;
  double t285;
  double t286;
  double t287;
  double t281;
  double t282;
  double t283;
  double t21;
  double t303;
  double t300;
  double t310;
  double t308;
  double t311;
  double t312;
  double t313;
  double t314;
  double t315;
  double t309;
  double t316;
  double t317;
  double t319;
  double t320;
  double t321;
  double t330;
  double t331;
  double t325;
  double t96;
  double t301;
  double t347;
  double t348;
  double t349;
  double t326;
  double t327;
  double t346;
  double t350;
  double t351;
  double t353;
  double t354;
  double t355;
  double t336;
  double t144;
  double t372;
  double t373;
  double t374;
  double t371;
  double t375;
  double t376;
  double t378;
  double t379;
  double t380;
  t14 = Cos(var1[5]);
  t11 = Cos(var1[4]);
  t27 = Sin(var1[3]);
  t23 = Sin(var1[4]);
  t22 = Cos(var1[3]);
  t29 = Sin(var1[5]);
  t24 = t22*t14*t23;
  t34 = t27*t29;
  t45 = Sin(var1[9]);
  t38 = Cos(var1[9]);
  t46 = t14*t27*t23;
  t48 = -1.*t22*t29;
  t49 = t46 + t48;
  t58 = Cos(var1[10]);
  t56 = 0. + t24 + t34;
  t54 = Sin(var1[10]);
  t61 = -1.*t45;
  t63 = 0. + t61;
  t64 = t11*t14*t63;
  t65 = t38*t49;
  t66 = 0. + t64 + t65;
  t57 = t54*t56;
  t67 = t58*t66;
  t69 = 0. + t57 + t67;
  t71 = t58*t56;
  t72 = -1.*t54*t66;
  t73 = 0. + t71 + t72;
  t81 = Cos(var1[11]);
  t83 = 0. + t81;
  t77 = Sin(var1[11]);
  t39 = 0. + t38;
  t98 = -1.*t14*t27;
  t99 = t22*t23*t29;
  t104 = t22*t14;
  t105 = t27*t23*t29;
  t106 = t104 + t105;
  t110 = 0. + t98 + t99;
  t112 = t11*t63*t29;
  t113 = t38*t106;
  t114 = 0. + t112 + t113;
  t78 = -1.*t77;
  t79 = 0. + t78;
  t111 = t54*t110;
  t115 = t58*t114;
  t116 = 0. + t111 + t115;
  t122 = t58*t110;
  t123 = -1.*t54*t114;
  t125 = 0. + t122 + t123;
  t89 = 0. + t77;
  t149 = t22*t11;
  t151 = 0. + t149;
  t154 = t38*t11*t27;
  t155 = -1.*t63*t23;
  t157 = 0. + t154 + t155;
  t153 = t151*t54;
  t158 = t58*t157;
  t161 = 0. + t153 + t158;
  t165 = t58*t151;
  t166 = -1.*t54*t157;
  t167 = 0. + t165 + t166;
  t35 = t24 + t34;
  t37 = 0.2429*t35;
  t183 = Cos(var1[6]);
  t186 = Sin(var1[6]);
  t192 = Cos(var1[7]);
  t193 = t183*t49;
  t195 = 0. + t186;
  t196 = t11*t14*t195;
  t197 = 0. + t193 + t196;
  t199 = Sin(var1[7]);
  t204 = t192*t56;
  t206 = -1.*t197*t199;
  t208 = 0. + t204 + t206;
  t198 = t192*t197;
  t201 = t56*t199;
  t202 = 0. + t198 + t201;
  t211 = Cos(var1[8]);
  t212 = 0. + t211;
  t215 = Sin(var1[8]);
  t100 = t98 + t99;
  t101 = 0.2429*t100;
  t184 = 0. + t183;
  t240 = t183*t106;
  t241 = t11*t29*t195;
  t242 = 0. + t240 + t241;
  t247 = t192*t110;
  t248 = -1.*t242*t199;
  t250 = 0. + t247 + t248;
  t243 = t192*t242;
  t244 = t110*t199;
  t245 = 0. + t243 + t244;
  t217 = -1.*t215;
  t218 = 0. + t217;
  t225 = 0. + t215;
  t143 = 0.2429*t22*t11;
  t275 = t11*t183*t27;
  t279 = -1.*t23*t195;
  t280 = 0. + t275 + t279;
  t285 = t151*t192;
  t286 = -1.*t280*t199;
  t287 = 0. + t285 + t286;
  t281 = t192*t280;
  t282 = t151*t199;
  t283 = 0. + t281 + t282;
  t21 = 0.0817*t11*t14;
  t303 = Sin(var1[15]);
  t300 = Cos(var1[15]);
  t310 = Cos(var1[16]);
  t308 = Sin(var1[16]);
  t311 = -1.*t303;
  t312 = 0. + t311;
  t313 = t11*t14*t312;
  t314 = t300*t49;
  t315 = 0. + t313 + t314;
  t309 = t308*t56;
  t316 = t310*t315;
  t317 = 0. + t309 + t316;
  t319 = t310*t56;
  t320 = -1.*t308*t315;
  t321 = 0. + t319 + t320;
  t330 = Cos(var1[17]);
  t331 = 0. + t330;
  t325 = Sin(var1[17]);
  t96 = 0.0817*t11*t29;
  t301 = 0. + t300;
  t347 = t11*t312*t29;
  t348 = t300*t106;
  t349 = 0. + t347 + t348;
  t326 = -1.*t325;
  t327 = 0. + t326;
  t346 = t308*t110;
  t350 = t310*t349;
  t351 = 0. + t346 + t350;
  t353 = t310*t110;
  t354 = -1.*t308*t349;
  t355 = 0. + t353 + t354;
  t336 = 0. + t325;
  t144 = -0.0817*t23;
  t372 = t300*t11*t27;
  t373 = -1.*t312*t23;
  t374 = 0. + t372 + t373;
  t371 = t151*t308;
  t375 = t310*t374;
  t376 = 0. + t371 + t375;
  t378 = t310*t151;
  t379 = -1.*t308*t374;
  t380 = 0. + t378 + t379;
  p_output1[0]=t21 + t37 + 0.035199999999999995*(0. + t11*t14*t39 + t45*t49) - 0.2083*t69 - 0.1422*t73 - 0.02*(0. + t69*t79 + t73*t83) - 0.16*(0. + t69*t83 + t73*t89) + var1[0];
  p_output1[1]=t101 - 0.2083*t116 - 0.1422*t125 + 0.035199999999999995*(0. + t11*t29*t39 + t106*t45) - 0.02*(0. + t116*t79 + t125*t83) - 0.16*(0. + t116*t83 + t125*t89) + t96 + var1[1];
  p_output1[2]=t143 + t144 - 0.2083*t161 - 0.1422*t167 + 0.035199999999999995*(0. - 1.*t23*t39 + t11*t27*t45) - 0.02*(0. + t161*t79 + t167*t83) - 0.16*(0. + t161*t83 + t167*t89) + var1[2];
  p_output1[3]=-0.0817*t11*t14 - 0.2083*t202 - 0.1422*t208 - 0.02*(0. + t208*t212 + t202*t218) - 0.16*(0. + t202*t212 + t208*t225) + t37 - 0.0329*(0. + t11*t14*t184 - 1.*t186*t49) + var1[0];
  p_output1[4]=t101 - 0.2083*t245 - 0.1422*t250 - 0.02*(0. + t218*t245 + t212*t250) - 0.16*(0. + t212*t245 + t225*t250) - 0.0817*t11*t29 - 0.0329*(0. - 1.*t106*t186 + t11*t184*t29) + var1[1];
  p_output1[5]=t143 + 0.0817*t23 - 0.0329*(0. - 1.*t184*t23 - 1.*t11*t186*t27) - 0.2083*t283 - 0.1422*t287 - 0.02*(0. + t218*t283 + t212*t287) - 0.16*(0. + t212*t283 + t225*t287) + var1[2];
  p_output1[6]=t21 - 0.2083*t317 - 0.1422*t321 - 0.02*(0. + t317*t327 + t321*t331) - 0.16*(0. + t317*t331 + t321*t336) - 0.1944*t35 + 0.035199999999999995*(0. + t11*t14*t301 + t303*t49) + var1[0];
  p_output1[7]=-0.1944*t100 + 0.035199999999999995*(0. + t11*t29*t301 + t106*t303) - 0.2083*t351 - 0.1422*t355 - 0.02*(0. + t327*t351 + t331*t355) - 0.16*(0. + t331*t351 + t336*t355) + t96 + var1[1];
  p_output1[8]=t144 - 0.1944*t11*t22 + 0.035199999999999995*(0. - 1.*t23*t301 + t11*t27*t303) - 0.2083*t376 - 0.1422*t380 - 0.02*(0. + t327*t376 + t331*t380) - 0.16*(0. + t331*t376 + t336*t380) + var1[2];
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

#include "F_2_func.hh"

namespace SymFunction
{

void F_2_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
