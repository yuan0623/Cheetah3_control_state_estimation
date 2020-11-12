/*
 * Automatically Generated from Mathematica.
 * Sun 26 May 2019 16:50:08 GMT-04:00
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
  double t14;
  double t21;
  double t29;
  double t24;
  double t30;
  double t32;
  double t33;
  double t41;
  double t39;
  double t38;
  double t44;
  double t45;
  double t46;
  double t47;
  double t48;
  double t40;
  double t49;
  double t50;
  double t52;
  double t53;
  double t54;
  double t61;
  double t63;
  double t57;
  double t25;
  double t76;
  double t77;
  double t81;
  double t82;
  double t83;
  double t87;
  double t89;
  double t90;
  double t91;
  double t58;
  double t59;
  double t88;
  double t92;
  double t93;
  double t97;
  double t98;
  double t99;
  double t69;
  double t117;
  double t119;
  double t122;
  double t123;
  double t125;
  double t121;
  double t126;
  double t129;
  double t132;
  double t133;
  double t134;
  double t22;
  double t153;
  double t150;
  double t159;
  double t157;
  double t160;
  double t161;
  double t162;
  double t164;
  double t158;
  double t165;
  double t166;
  double t169;
  double t170;
  double t171;
  double t177;
  double t178;
  double t173;
  double t78;
  double t151;
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
  double t224;
  double t225;
  double t226;
  double t223;
  double t227;
  double t228;
  double t230;
  double t231;
  double t232;
  t8 = Cos(var1[5]);
  t5 = Cos(var1[4]);
  t16 = Sin(var1[3]);
  t13 = Sin(var1[4]);
  t12 = Cos(var1[3]);
  t17 = Sin(var1[5]);
  t14 = t12*t8*t13;
  t21 = t16*t17;
  t29 = Sin(var1[9]);
  t24 = Cos(var1[9]);
  t30 = t8*t16*t13;
  t32 = -1.*t12*t17;
  t33 = t30 + t32;
  t41 = Cos(var1[10]);
  t39 = 0. + t14 + t21;
  t38 = Sin(var1[10]);
  t44 = -1.*t29;
  t45 = 0. + t44;
  t46 = t5*t8*t45;
  t47 = t24*t33;
  t48 = 0. + t46 + t47;
  t40 = t38*t39;
  t49 = t41*t48;
  t50 = 0. + t40 + t49;
  t52 = t41*t39;
  t53 = -1.*t38*t48;
  t54 = 0. + t52 + t53;
  t61 = Cos(var1[11]);
  t63 = 0. + t61;
  t57 = Sin(var1[11]);
  t25 = 0. + t24;
  t76 = -1.*t8*t16;
  t77 = t12*t13*t17;
  t81 = t12*t8;
  t82 = t16*t13*t17;
  t83 = t81 + t82;
  t87 = 0. + t76 + t77;
  t89 = t5*t45*t17;
  t90 = t24*t83;
  t91 = 0. + t89 + t90;
  t58 = -1.*t57;
  t59 = 0. + t58;
  t88 = t38*t87;
  t92 = t41*t91;
  t93 = 0. + t88 + t92;
  t97 = t41*t87;
  t98 = -1.*t38*t91;
  t99 = 0. + t97 + t98;
  t69 = 0. + t57;
  t117 = t12*t5;
  t119 = 0. + t117;
  t122 = t24*t5*t16;
  t123 = -1.*t45*t13;
  t125 = 0. + t122 + t123;
  t121 = t119*t38;
  t126 = t41*t125;
  t129 = 0. + t121 + t126;
  t132 = t41*t119;
  t133 = -1.*t38*t125;
  t134 = 0. + t132 + t133;
  t22 = t14 + t21;
  t153 = Sin(var1[12]);
  t150 = Cos(var1[12]);
  t159 = Cos(var1[13]);
  t157 = Sin(var1[13]);
  t160 = 0. + t153;
  t161 = t5*t8*t160;
  t162 = t150*t33;
  t164 = 0. + t161 + t162;
  t158 = t157*t39;
  t165 = t159*t164;
  t166 = 0. + t158 + t165;
  t169 = t159*t39;
  t170 = -1.*t157*t164;
  t171 = 0. + t169 + t170;
  t177 = Cos(var1[14]);
  t178 = 0. + t177;
  t173 = Sin(var1[14]);
  t78 = t76 + t77;
  t151 = 0. + t150;
  t198 = t5*t160*t17;
  t199 = t150*t83;
  t200 = 0. + t198 + t199;
  t174 = -1.*t173;
  t175 = 0. + t174;
  t197 = t157*t87;
  t201 = t159*t200;
  t202 = 0. + t197 + t201;
  t204 = t159*t87;
  t205 = -1.*t157*t200;
  t206 = 0. + t204 + t205;
  t183 = 0. + t173;
  t224 = t150*t5*t16;
  t225 = -1.*t160*t13;
  t226 = 0. + t224 + t225;
  t223 = t119*t157;
  t227 = t159*t226;
  t228 = 0. + t223 + t227;
  t230 = t159*t119;
  t231 = -1.*t157*t226;
  t232 = 0. + t230 + t231;
  p_output1[0]=var1[0];
  p_output1[1]=var1[1];
  p_output1[2]=var1[2];
  p_output1[3]=var1[3];
  p_output1[4]=var1[4];
  p_output1[5]=0.2429*t22 - 0.2083*t50 - 0.1422*t54 - 0.02*(0. + t50*t59 + t54*t63) - 0.16*(0. + t50*t63 + t54*t69) + 0.0817*t5*t8 + 0.035199999999999995*(0. + t29*t33 + t25*t5*t8) + var1[0];
  p_output1[6]=0.0817*t17*t5 + 0.2429*t78 + 0.035199999999999995*(0. + t17*t25*t5 + t29*t83) - 0.2083*t93 - 0.1422*t99 - 0.02*(0. + t59*t93 + t63*t99) - 0.16*(0. + t63*t93 + t69*t99) + var1[1];
  p_output1[7]=-0.2083*t129 - 0.0817*t13 - 0.1422*t134 + 0.2429*t12*t5 + 0.035199999999999995*(0. - 1.*t13*t25 + t16*t29*t5) - 0.02*(0. + t129*t59 + t134*t63) - 0.16*(0. + t129*t63 + t134*t69) + var1[2];
  p_output1[8]=-0.2083*t166 - 0.1422*t171 - 0.02*(0. + t166*t175 + t171*t178) - 0.16*(0. + t166*t178 + t171*t183) - 0.1944*t22 - 0.0817*t5*t8 - 0.0329*(0. - 1.*t153*t33 + t151*t5*t8) + var1[0];
  p_output1[9]=-0.2083*t202 - 0.1422*t206 - 0.02*(0. + t175*t202 + t178*t206) - 0.16*(0. + t178*t202 + t183*t206) - 0.0817*t17*t5 - 0.1944*t78 - 0.0329*(0. + t151*t17*t5 - 1.*t153*t83) + var1[1];
  p_output1[10]=0.0817*t13 - 0.2083*t228 - 0.1422*t232 - 0.02*(0. + t175*t228 + t178*t232) - 0.16*(0. + t178*t228 + t183*t232) - 0.1944*t12*t5 - 0.0329*(0. - 1.*t13*t151 - 1.*t153*t16*t5) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 11, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "hc_reduced_2_func.hh"

namespace SymFunction
{

void hc_reduced_2_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
