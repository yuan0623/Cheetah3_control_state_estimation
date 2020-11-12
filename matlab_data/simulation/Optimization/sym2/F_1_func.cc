/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 21:22:04 GMT-05:00
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
  double t8;
  double t5;
  double t16;
  double t13;
  double t12;
  double t17;
  double t24;
  double t29;
  double t30;
  double t32;
  double t33;
  double t14;
  double t21;
  double t38;
  double t46;
  double t39;
  double t40;
  double t41;
  double t44;
  double t47;
  double t51;
  double t52;
  double t53;
  double t45;
  double t48;
  double t49;
  double t56;
  double t57;
  double t59;
  double t25;
  double t80;
  double t81;
  double t82;
  double t74;
  double t76;
  double t90;
  double t86;
  double t87;
  double t88;
  double t96;
  double t97;
  double t98;
  double t89;
  double t91;
  double t92;
  double t60;
  double t61;
  double t67;
  double t122;
  double t123;
  double t116;
  double t117;
  double t119;
  double t130;
  double t132;
  double t133;
  double t121;
  double t125;
  double t126;
  double t22;
  double t152;
  double t149;
  double t158;
  double t156;
  double t159;
  double t160;
  double t161;
  double t162;
  double t164;
  double t157;
  double t165;
  double t166;
  double t169;
  double t170;
  double t171;
  double t177;
  double t178;
  double t173;
  double t77;
  double t150;
  double t198;
  double t199;
  double t200;
  double t174;
  double t175;
  double t197;
  double t201;
  double t202;
  double t204;
  double t205;
  double t206;
  double t183;
  double t232;
  double t233;
  double t234;
  double t231;
  double t235;
  double t236;
  double t238;
  double t239;
  double t240;
  double t11;
  double t148;
  double t256;
  double t252;
  double t262;
  double t260;
  double t263;
  double t264;
  double t265;
  double t266;
  double t261;
  double t267;
  double t268;
  double t270;
  double t271;
  double t274;
  double t281;
  double t282;
  double t276;
  double t73;
  double t191;
  double t253;
  double t297;
  double t298;
  double t299;
  double t277;
  double t279;
  double t296;
  double t300;
  double t301;
  double t303;
  double t304;
  double t305;
  double t287;
  double t222;
  double t111;
  double t321;
  double t322;
  double t323;
  double t320;
  double t324;
  double t325;
  double t327;
  double t328;
  double t329;
  t8 = Cos(var1[5]);
  t5 = Cos(var1[4]);
  t16 = Sin(var1[3]);
  t13 = Sin(var1[4]);
  t12 = Cos(var1[3]);
  t17 = Sin(var1[5]);
  t24 = Cos(var1[6]);
  t29 = t8*t16*t13;
  t30 = -1.*t12*t17;
  t32 = t29 + t30;
  t33 = Sin(var1[6]);
  t14 = t12*t8*t13;
  t21 = t16*t17;
  t38 = Cos(var1[7]);
  t46 = 0. + t14 + t21;
  t39 = t24*t32;
  t40 = 0. + t33;
  t41 = t5*t8*t40;
  t44 = 0. + t39 + t41;
  t47 = Sin(var1[7]);
  t51 = t38*t46;
  t52 = -1.*t44*t47;
  t53 = 0. + t51 + t52;
  t45 = t38*t44;
  t48 = t46*t47;
  t49 = 0. + t45 + t48;
  t56 = Cos(var1[8]);
  t57 = 0. + t56;
  t59 = Sin(var1[8]);
  t25 = 0. + t24;
  t80 = t12*t8;
  t81 = t16*t13*t17;
  t82 = t80 + t81;
  t74 = -1.*t8*t16;
  t76 = t12*t13*t17;
  t90 = 0. + t74 + t76;
  t86 = t24*t82;
  t87 = t5*t17*t40;
  t88 = 0. + t86 + t87;
  t96 = t38*t90;
  t97 = -1.*t88*t47;
  t98 = 0. + t96 + t97;
  t89 = t38*t88;
  t91 = t90*t47;
  t92 = 0. + t89 + t91;
  t60 = -1.*t59;
  t61 = 0. + t60;
  t67 = 0. + t59;
  t122 = t12*t5;
  t123 = 0. + t122;
  t116 = t5*t24*t16;
  t117 = -1.*t13*t40;
  t119 = 0. + t116 + t117;
  t130 = t123*t38;
  t132 = -1.*t119*t47;
  t133 = 0. + t130 + t132;
  t121 = t38*t119;
  t125 = t123*t47;
  t126 = 0. + t121 + t125;
  t22 = t14 + t21;
  t152 = Sin(var1[15]);
  t149 = Cos(var1[15]);
  t158 = Cos(var1[16]);
  t156 = Sin(var1[16]);
  t159 = -1.*t152;
  t160 = 0. + t159;
  t161 = t5*t8*t160;
  t162 = t149*t32;
  t164 = 0. + t161 + t162;
  t157 = t156*t46;
  t165 = t158*t164;
  t166 = 0. + t157 + t165;
  t169 = t158*t46;
  t170 = -1.*t156*t164;
  t171 = 0. + t169 + t170;
  t177 = Cos(var1[17]);
  t178 = 0. + t177;
  t173 = Sin(var1[17]);
  t77 = t74 + t76;
  t150 = 0. + t149;
  t198 = t5*t160*t17;
  t199 = t149*t82;
  t200 = 0. + t198 + t199;
  t174 = -1.*t173;
  t175 = 0. + t174;
  t197 = t156*t90;
  t201 = t158*t200;
  t202 = 0. + t197 + t201;
  t204 = t158*t90;
  t205 = -1.*t156*t200;
  t206 = 0. + t204 + t205;
  t183 = 0. + t173;
  t232 = t149*t5*t16;
  t233 = -1.*t160*t13;
  t234 = 0. + t232 + t233;
  t231 = t123*t156;
  t235 = t158*t234;
  t236 = 0. + t231 + t235;
  t238 = t158*t123;
  t239 = -1.*t156*t234;
  t240 = 0. + t238 + t239;
  t11 = -0.0817*t5*t8;
  t148 = -0.1944*t22;
  t256 = Sin(var1[12]);
  t252 = Cos(var1[12]);
  t262 = Cos(var1[13]);
  t260 = Sin(var1[13]);
  t263 = 0. + t256;
  t264 = t5*t8*t263;
  t265 = t252*t32;
  t266 = 0. + t264 + t265;
  t261 = t260*t46;
  t267 = t262*t266;
  t268 = 0. + t261 + t267;
  t270 = t262*t46;
  t271 = -1.*t260*t266;
  t274 = 0. + t270 + t271;
  t281 = Cos(var1[14]);
  t282 = 0. + t281;
  t276 = Sin(var1[14]);
  t73 = -0.0817*t5*t17;
  t191 = -0.1944*t77;
  t253 = 0. + t252;
  t297 = t5*t263*t17;
  t298 = t252*t82;
  t299 = 0. + t297 + t298;
  t277 = -1.*t276;
  t279 = 0. + t277;
  t296 = t260*t90;
  t300 = t262*t299;
  t301 = 0. + t296 + t300;
  t303 = t262*t90;
  t304 = -1.*t260*t299;
  t305 = 0. + t303 + t304;
  t287 = 0. + t276;
  t222 = -0.1944*t12*t5;
  t111 = 0.0817*t13;
  t321 = t252*t5*t16;
  t322 = -1.*t263*t13;
  t323 = 0. + t321 + t322;
  t320 = t123*t260;
  t324 = t262*t323;
  t325 = 0. + t320 + t324;
  t327 = t262*t123;
  t328 = -1.*t260*t323;
  t329 = 0. + t327 + t328;
  p_output1[0]=t11 + 0.2429*t22 - 0.2083*t49 - 0.1422*t53 - 0.02*(0. + t53*t57 + t49*t61) - 0.16*(0. + t49*t57 + t53*t67) - 0.0329*(0. - 1.*t32*t33 + t25*t5*t8) + var1[0];
  p_output1[1]=t73 + 0.2429*t77 - 0.0329*(0. + t17*t25*t5 - 1.*t33*t82) - 0.2083*t92 - 0.1422*t98 - 0.02*(0. + t61*t92 + t57*t98) - 0.16*(0. + t57*t92 + t67*t98) + var1[1];
  p_output1[2]=t111 - 0.2083*t126 - 0.1422*t133 + 0.2429*t12*t5 - 0.0329*(0. - 1.*t13*t25 - 1.*t16*t33*t5) - 0.02*(0. + t133*t57 + t126*t61) - 0.16*(0. + t126*t57 + t133*t67) + var1[2];
  p_output1[3]=t148 - 0.2083*t166 - 0.1422*t171 - 0.02*(0. + t166*t175 + t171*t178) - 0.16*(0. + t166*t178 + t171*t183) + 0.0817*t5*t8 + 0.035199999999999995*(0. + t152*t32 + t150*t5*t8) + var1[0];
  p_output1[4]=t191 - 0.2083*t202 - 0.1422*t206 - 0.02*(0. + t175*t202 + t178*t206) - 0.16*(0. + t178*t202 + t183*t206) + 0.0817*t17*t5 + 0.035199999999999995*(0. + t150*t17*t5 + t152*t82) + var1[1];
  p_output1[5]=-0.0817*t13 + t222 - 0.2083*t236 - 0.1422*t240 - 0.02*(0. + t175*t236 + t178*t240) - 0.16*(0. + t178*t236 + t183*t240) + 0.035199999999999995*(0. - 1.*t13*t150 + t152*t16*t5) + var1[2];
  p_output1[6]=t11 + t148 - 0.2083*t268 - 0.1422*t274 - 0.02*(0. + t268*t279 + t274*t282) - 0.16*(0. + t268*t282 + t274*t287) - 0.0329*(0. - 1.*t256*t32 + t253*t5*t8) + var1[0];
  p_output1[7]=t191 - 0.2083*t301 - 0.1422*t305 - 0.02*(0. + t279*t301 + t282*t305) - 0.16*(0. + t282*t301 + t287*t305) + t73 - 0.0329*(0. + t17*t253*t5 - 1.*t256*t82) + var1[1];
  p_output1[8]=t111 + t222 - 0.2083*t325 - 0.1422*t329 - 0.02*(0. + t279*t325 + t282*t329) - 0.16*(0. + t282*t325 + t287*t329) - 0.0329*(0. - 1.*t13*t253 - 1.*t16*t256*t5) + var1[2];
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

#include "F_1_func.hh"

namespace SymFunction
{

void F_1_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
