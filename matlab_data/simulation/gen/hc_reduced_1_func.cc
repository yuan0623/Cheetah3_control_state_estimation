/*
 * Automatically Generated from Mathematica.
 * Sun 26 May 2019 16:50:07 GMT-04:00
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
  double t4;
  double t3;
  double t9;
  double t7;
  double t6;
  double t10;
  double t14;
  double t17;
  double t18;
  double t19;
  double t20;
  double t8;
  double t11;
  double t24;
  double t30;
  double t25;
  double t26;
  double t27;
  double t28;
  double t31;
  double t35;
  double t36;
  double t37;
  double t29;
  double t32;
  double t33;
  double t39;
  double t40;
  double t42;
  double t15;
  double t60;
  double t61;
  double t62;
  double t55;
  double t56;
  double t70;
  double t66;
  double t67;
  double t68;
  double t74;
  double t75;
  double t76;
  double t69;
  double t71;
  double t72;
  double t43;
  double t44;
  double t49;
  double t97;
  double t98;
  double t93;
  double t94;
  double t95;
  double t102;
  double t103;
  double t104;
  double t96;
  double t99;
  double t100;
  double t12;
  double t120;
  double t117;
  double t126;
  double t124;
  double t127;
  double t128;
  double t129;
  double t130;
  double t131;
  double t125;
  double t132;
  double t133;
  double t135;
  double t136;
  double t137;
  double t143;
  double t144;
  double t139;
  double t57;
  double t118;
  double t161;
  double t162;
  double t163;
  double t140;
  double t141;
  double t160;
  double t164;
  double t165;
  double t167;
  double t168;
  double t169;
  double t149;
  double t187;
  double t188;
  double t189;
  double t186;
  double t190;
  double t191;
  double t193;
  double t194;
  double t195;
  t4 = Cos(var1[5]);
  t3 = Cos(var1[4]);
  t9 = Sin(var1[3]);
  t7 = Sin(var1[4]);
  t6 = Cos(var1[3]);
  t10 = Sin(var1[5]);
  t14 = Cos(var1[6]);
  t17 = t4*t9*t7;
  t18 = -1.*t6*t10;
  t19 = t17 + t18;
  t20 = Sin(var1[6]);
  t8 = t6*t4*t7;
  t11 = t9*t10;
  t24 = Cos(var1[7]);
  t30 = 0. + t8 + t11;
  t25 = t14*t19;
  t26 = 0. + t20;
  t27 = t3*t4*t26;
  t28 = 0. + t25 + t27;
  t31 = Sin(var1[7]);
  t35 = t24*t30;
  t36 = -1.*t28*t31;
  t37 = 0. + t35 + t36;
  t29 = t24*t28;
  t32 = t30*t31;
  t33 = 0. + t29 + t32;
  t39 = Cos(var1[8]);
  t40 = 0. + t39;
  t42 = Sin(var1[8]);
  t15 = 0. + t14;
  t60 = t6*t4;
  t61 = t9*t7*t10;
  t62 = t60 + t61;
  t55 = -1.*t4*t9;
  t56 = t6*t7*t10;
  t70 = 0. + t55 + t56;
  t66 = t14*t62;
  t67 = t3*t10*t26;
  t68 = 0. + t66 + t67;
  t74 = t24*t70;
  t75 = -1.*t68*t31;
  t76 = 0. + t74 + t75;
  t69 = t24*t68;
  t71 = t70*t31;
  t72 = 0. + t69 + t71;
  t43 = -1.*t42;
  t44 = 0. + t43;
  t49 = 0. + t42;
  t97 = t6*t3;
  t98 = 0. + t97;
  t93 = t3*t14*t9;
  t94 = -1.*t7*t26;
  t95 = 0. + t93 + t94;
  t102 = t98*t24;
  t103 = -1.*t95*t31;
  t104 = 0. + t102 + t103;
  t96 = t24*t95;
  t99 = t98*t31;
  t100 = 0. + t96 + t99;
  t12 = t8 + t11;
  t120 = Sin(var1[15]);
  t117 = Cos(var1[15]);
  t126 = Cos(var1[16]);
  t124 = Sin(var1[16]);
  t127 = -1.*t120;
  t128 = 0. + t127;
  t129 = t3*t4*t128;
  t130 = t117*t19;
  t131 = 0. + t129 + t130;
  t125 = t124*t30;
  t132 = t126*t131;
  t133 = 0. + t125 + t132;
  t135 = t126*t30;
  t136 = -1.*t124*t131;
  t137 = 0. + t135 + t136;
  t143 = Cos(var1[17]);
  t144 = 0. + t143;
  t139 = Sin(var1[17]);
  t57 = t55 + t56;
  t118 = 0. + t117;
  t161 = t3*t128*t10;
  t162 = t117*t62;
  t163 = 0. + t161 + t162;
  t140 = -1.*t139;
  t141 = 0. + t140;
  t160 = t124*t70;
  t164 = t126*t163;
  t165 = 0. + t160 + t164;
  t167 = t126*t70;
  t168 = -1.*t124*t163;
  t169 = 0. + t167 + t168;
  t149 = 0. + t139;
  t187 = t117*t3*t9;
  t188 = -1.*t128*t7;
  t189 = 0. + t187 + t188;
  t186 = t98*t124;
  t190 = t126*t189;
  t191 = 0. + t186 + t190;
  t193 = t126*t98;
  t194 = -1.*t124*t189;
  t195 = 0. + t193 + t194;
  p_output1[0]=var1[0];
  p_output1[1]=var1[1];
  p_output1[2]=var1[2];
  p_output1[3]=var1[3];
  p_output1[4]=var1[4];
  p_output1[5]=0.2429*t12 - 0.2083*t33 - 0.1422*t37 - 0.0817*t3*t4 - 0.0329*(0. - 1.*t19*t20 + t15*t3*t4) - 0.02*(0. + t37*t40 + t33*t44) - 0.16*(0. + t33*t40 + t37*t49) + var1[0];
  p_output1[6]=-0.0817*t10*t3 + 0.2429*t57 - 0.0329*(0. + t10*t15*t3 - 1.*t20*t62) - 0.2083*t72 - 0.1422*t76 - 0.02*(0. + t44*t72 + t40*t76) - 0.16*(0. + t40*t72 + t49*t76) + var1[1];
  p_output1[7]=-0.2083*t100 - 0.1422*t104 - 0.02*(0. + t104*t40 + t100*t44) - 0.16*(0. + t100*t40 + t104*t49) + 0.2429*t3*t6 + 0.0817*t7 - 0.0329*(0. - 1.*t15*t7 - 1.*t20*t3*t9) + var1[2];
  p_output1[8]=-0.1944*t12 - 0.2083*t133 - 0.1422*t137 - 0.02*(0. + t133*t141 + t137*t144) - 0.16*(0. + t133*t144 + t137*t149) + 0.0817*t3*t4 + 0.0329*(0. + t120*t19 + t118*t3*t4) + var1[0];
  p_output1[9]=-0.2083*t165 - 0.1422*t169 - 0.02*(0. + t141*t165 + t144*t169) - 0.16*(0. + t144*t165 + t149*t169) + 0.0817*t10*t3 - 0.1944*t57 + 0.0329*(0. + t10*t118*t3 + t120*t62) + var1[1];
  p_output1[10]=-0.2083*t191 - 0.1422*t195 - 0.02*(0. + t141*t191 + t144*t195) - 0.16*(0. + t144*t191 + t149*t195) - 0.1944*t3*t6 - 0.0817*t7 + 0.0329*(0. - 1.*t118*t7 + t120*t3*t9) + var1[2];
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

#include "hc_reduced_1_func.hh"

namespace SymFunction
{

void hc_reduced_1_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
