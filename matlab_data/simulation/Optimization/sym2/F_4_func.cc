/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 21:22:11 GMT-05:00
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
  double t38;
  double t34;
  double t58;
  double t53;
  double t51;
  double t65;
  double t56;
  double t70;
  double t85;
  double t79;
  double t86;
  double t89;
  double t90;
  double t105;
  double t102;
  double t99;
  double t107;
  double t108;
  double t109;
  double t110;
  double t111;
  double t104;
  double t112;
  double t113;
  double t116;
  double t121;
  double t122;
  double t135;
  double t138;
  double t129;
  double t80;
  double t158;
  double t161;
  double t169;
  double t171;
  double t172;
  double t178;
  double t180;
  double t181;
  double t182;
  double t130;
  double t133;
  double t179;
  double t183;
  double t185;
  double t190;
  double t191;
  double t196;
  double t145;
  double t230;
  double t232;
  double t236;
  double t238;
  double t240;
  double t235;
  double t244;
  double t245;
  double t250;
  double t251;
  double t252;
  double t71;
  double t73;
  double t281;
  double t284;
  double t289;
  double t290;
  double t291;
  double t292;
  double t293;
  double t296;
  double t305;
  double t306;
  double t307;
  double t295;
  double t297;
  double t298;
  double t310;
  double t313;
  double t316;
  double t162;
  double t165;
  double t282;
  double t342;
  double t343;
  double t344;
  double t350;
  double t351;
  double t352;
  double t345;
  double t346;
  double t347;
  double t317;
  double t318;
  double t329;
  double t220;
  double t380;
  double t381;
  double t382;
  double t387;
  double t388;
  double t389;
  double t383;
  double t384;
  double t385;
  double t275;
  double t406;
  double t402;
  double t412;
  double t410;
  double t413;
  double t414;
  double t415;
  double t416;
  double t411;
  double t417;
  double t418;
  double t420;
  double t421;
  double t422;
  double t431;
  double t432;
  double t426;
  double t336;
  double t403;
  double t448;
  double t449;
  double t450;
  double t427;
  double t428;
  double t447;
  double t451;
  double t452;
  double t454;
  double t455;
  double t456;
  double t437;
  double t369;
  double t473;
  double t474;
  double t475;
  double t472;
  double t476;
  double t477;
  double t479;
  double t480;
  double t481;
  t38 = Cos(var1[5]);
  t34 = Cos(var1[4]);
  t58 = Sin(var1[3]);
  t53 = Sin(var1[4]);
  t51 = Cos(var1[3]);
  t65 = Sin(var1[5]);
  t56 = t51*t38*t53;
  t70 = t58*t65;
  t85 = Sin(var1[9]);
  t79 = Cos(var1[9]);
  t86 = t38*t58*t53;
  t89 = -1.*t51*t65;
  t90 = t86 + t89;
  t105 = Cos(var1[10]);
  t102 = 0. + t56 + t70;
  t99 = Sin(var1[10]);
  t107 = -1.*t85;
  t108 = 0. + t107;
  t109 = t34*t38*t108;
  t110 = t79*t90;
  t111 = 0. + t109 + t110;
  t104 = t99*t102;
  t112 = t105*t111;
  t113 = 0. + t104 + t112;
  t116 = t105*t102;
  t121 = -1.*t99*t111;
  t122 = 0. + t116 + t121;
  t135 = Cos(var1[11]);
  t138 = 0. + t135;
  t129 = Sin(var1[11]);
  t80 = 0. + t79;
  t158 = -1.*t38*t58;
  t161 = t51*t53*t65;
  t169 = t51*t38;
  t171 = t58*t53*t65;
  t172 = t169 + t171;
  t178 = 0. + t158 + t161;
  t180 = t34*t108*t65;
  t181 = t79*t172;
  t182 = 0. + t180 + t181;
  t130 = -1.*t129;
  t133 = 0. + t130;
  t179 = t99*t178;
  t183 = t105*t182;
  t185 = 0. + t179 + t183;
  t190 = t105*t178;
  t191 = -1.*t99*t182;
  t196 = 0. + t190 + t191;
  t145 = 0. + t129;
  t230 = t51*t34;
  t232 = 0. + t230;
  t236 = t79*t34*t58;
  t238 = -1.*t108*t53;
  t240 = 0. + t236 + t238;
  t235 = t232*t99;
  t244 = t105*t240;
  t245 = 0. + t235 + t244;
  t250 = t105*t232;
  t251 = -1.*t99*t240;
  t252 = 0. + t250 + t251;
  t71 = t56 + t70;
  t73 = 0.2429*t71;
  t281 = Cos(var1[6]);
  t284 = Sin(var1[6]);
  t289 = Cos(var1[7]);
  t290 = t281*t90;
  t291 = 0. + t284;
  t292 = t34*t38*t291;
  t293 = 0. + t290 + t292;
  t296 = Sin(var1[7]);
  t305 = t289*t102;
  t306 = -1.*t293*t296;
  t307 = 0. + t305 + t306;
  t295 = t289*t293;
  t297 = t102*t296;
  t298 = 0. + t295 + t297;
  t310 = Cos(var1[8]);
  t313 = 0. + t310;
  t316 = Sin(var1[8]);
  t162 = t158 + t161;
  t165 = 0.2429*t162;
  t282 = 0. + t281;
  t342 = t281*t172;
  t343 = t34*t65*t291;
  t344 = 0. + t342 + t343;
  t350 = t289*t178;
  t351 = -1.*t344*t296;
  t352 = 0. + t350 + t351;
  t345 = t289*t344;
  t346 = t178*t296;
  t347 = 0. + t345 + t346;
  t317 = -1.*t316;
  t318 = 0. + t317;
  t329 = 0. + t316;
  t220 = 0.2429*t51*t34;
  t380 = t34*t281*t58;
  t381 = -1.*t53*t291;
  t382 = 0. + t380 + t381;
  t387 = t232*t289;
  t388 = -1.*t382*t296;
  t389 = 0. + t387 + t388;
  t383 = t289*t382;
  t384 = t232*t296;
  t385 = 0. + t383 + t384;
  t275 = -0.0817*t34*t38;
  t406 = Sin(var1[12]);
  t402 = Cos(var1[12]);
  t412 = Cos(var1[13]);
  t410 = Sin(var1[13]);
  t413 = 0. + t406;
  t414 = t34*t38*t413;
  t415 = t402*t90;
  t416 = 0. + t414 + t415;
  t411 = t410*t102;
  t417 = t412*t416;
  t418 = 0. + t411 + t417;
  t420 = t412*t102;
  t421 = -1.*t410*t416;
  t422 = 0. + t420 + t421;
  t431 = Cos(var1[14]);
  t432 = 0. + t431;
  t426 = Sin(var1[14]);
  t336 = -0.0817*t34*t65;
  t403 = 0. + t402;
  t448 = t34*t413*t65;
  t449 = t402*t172;
  t450 = 0. + t448 + t449;
  t427 = -1.*t426;
  t428 = 0. + t427;
  t447 = t410*t178;
  t451 = t412*t450;
  t452 = 0. + t447 + t451;
  t454 = t412*t178;
  t455 = -1.*t410*t450;
  t456 = 0. + t454 + t455;
  t437 = 0. + t426;
  t369 = 0.0817*t53;
  t473 = t402*t34*t58;
  t474 = -1.*t413*t53;
  t475 = 0. + t473 + t474;
  t472 = t232*t410;
  t476 = t412*t475;
  t477 = 0. + t472 + t476;
  t479 = t412*t232;
  t480 = -1.*t410*t475;
  t481 = 0. + t479 + t480;
  p_output1[0]=-0.2083*t113 - 0.1422*t122 - 0.02*(0. + t113*t133 + t122*t138) - 0.16*(0. + t113*t138 + t122*t145) + 0.0817*t34*t38 + t73 + 0.035199999999999995*(0. + t34*t38*t80 + t85*t90) + var1[0];
  p_output1[1]=t165 - 0.2083*t185 - 0.1422*t196 - 0.02*(0. + t133*t185 + t138*t196) - 0.16*(0. + t138*t185 + t145*t196) + 0.0817*t34*t65 + 0.035199999999999995*(0. + t34*t65*t80 + t172*t85) + var1[1];
  p_output1[2]=t220 - 0.2083*t245 - 0.1422*t252 - 0.02*(0. + t133*t245 + t138*t252) - 0.16*(0. + t138*t245 + t145*t252) - 0.0817*t53 + 0.035199999999999995*(0. - 1.*t53*t80 + t34*t58*t85) + var1[2];
  p_output1[3]=t275 - 0.2083*t298 - 0.1422*t307 - 0.02*(0. + t307*t313 + t298*t318) - 0.16*(0. + t298*t313 + t307*t329) + t73 - 0.0329*(0. + t282*t34*t38 - 1.*t284*t90) + var1[0];
  p_output1[4]=t165 + t336 - 0.2083*t347 - 0.1422*t352 - 0.02*(0. + t318*t347 + t313*t352) - 0.16*(0. + t313*t347 + t329*t352) - 0.0329*(0. - 1.*t172*t284 + t282*t34*t65) + var1[1];
  p_output1[5]=t220 + t369 - 0.2083*t385 - 0.1422*t389 - 0.02*(0. + t318*t385 + t313*t389) - 0.16*(0. + t313*t385 + t329*t389) - 0.0329*(0. - 1.*t282*t53 - 1.*t284*t34*t58) + var1[2];
  p_output1[6]=t275 - 0.2083*t418 - 0.1422*t422 - 0.02*(0. + t418*t428 + t422*t432) - 0.16*(0. + t418*t432 + t422*t437) - 0.1944*t71 - 0.0329*(0. + t34*t38*t403 - 1.*t406*t90) + var1[0];
  p_output1[7]=-0.1944*t162 + t336 - 0.2083*t452 - 0.1422*t456 - 0.02*(0. + t428*t452 + t432*t456) - 0.16*(0. + t432*t452 + t437*t456) - 0.0329*(0. - 1.*t172*t406 + t34*t403*t65) + var1[1];
  p_output1[8]=t369 - 0.2083*t477 - 0.1422*t481 - 0.02*(0. + t428*t477 + t432*t481) - 0.16*(0. + t432*t477 + t437*t481) - 0.1944*t34*t51 - 0.0329*(0. - 1.*t403*t53 - 1.*t34*t406*t58) + var1[2];
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

#include "F_4_func.hh"

namespace SymFunction
{

void F_4_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
