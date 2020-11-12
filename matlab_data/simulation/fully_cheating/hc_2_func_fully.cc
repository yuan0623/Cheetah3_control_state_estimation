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
  double t65;
  double t51;
  double t131;
  double t104;
  double t96;
  double t134;
  double t126;
  double t167;
  double t221;
  double t196;
  double t243;
  double t251;
  double t259;
  double t342;
  double t317;
  double t313;
  double t359;
  double t362;
  double t365;
  double t372;
  double t376;
  double t320;
  double t387;
  double t388;
  double t402;
  double t404;
  double t412;
  double t439;
  double t448;
  double t417;
  double t203;
  double t521;
  double t532;
  double t564;
  double t572;
  double t597;
  double t617;
  double t637;
  double t640;
  double t641;
  double t418;
  double t420;
  double t619;
  double t668;
  double t672;
  double t681;
  double t684;
  double t688;
  double t483;
  double t781;
  double t789;
  double t795;
  double t798;
  double t801;
  double t793;
  double t802;
  double t803;
  double t812;
  double t825;
  double t826;
  double t839;
  double t854;
  double t875;
  double t885;
  double t893;
  double t911;
  double t206;
  double t267;
  double t304;
  double t554;
  double t611;
  double t613;
  double t181;
  double t1021;
  double t1005;
  double t1061;
  double t1031;
  double t1067;
  double t1073;
  double t1079;
  double t1080;
  double t1048;
  double t1087;
  double t1099;
  double t1121;
  double t1125;
  double t1129;
  double t1158;
  double t1166;
  double t1141;
  double t534;
  double t1007;
  double t1271;
  double t1274;
  double t1275;
  double t1149;
  double t1151;
  double t1268;
  double t1287;
  double t1291;
  double t1296;
  double t1301;
  double t1306;
  double t1210;
  double t1365;
  double t1366;
  double t1370;
  double t1352;
  double t1375;
  double t1381;
  double t1390;
  double t1392;
  double t1395;
  double t1413;
  double t1418;
  double t1426;
  double t1430;
  double t1435;
  double t1439;
  double t1019;
  double t1024;
  double t1027;
  double t1253;
  double t1256;
  double t1257;
  t65 = Cos(var1[5]);
  t51 = Cos(var1[4]);
  t131 = Sin(var1[3]);
  t104 = Sin(var1[4]);
  t96 = Cos(var1[3]);
  t134 = Sin(var1[5]);
  t126 = t96*t65*t104;
  t167 = t131*t134;
  t221 = Sin(var1[9]);
  t196 = Cos(var1[9]);
  t243 = t65*t131*t104;
  t251 = -1.*t96*t134;
  t259 = t243 + t251;
  t342 = Cos(var1[10]);
  t317 = 0. + t126 + t167;
  t313 = Sin(var1[10]);
  t359 = -1.*t221;
  t362 = 0. + t359;
  t365 = t51*t65*t362;
  t372 = t196*t259;
  t376 = 0. + t365 + t372;
  t320 = t313*t317;
  t387 = t342*t376;
  t388 = 0. + t320 + t387;
  t402 = t342*t317;
  t404 = -1.*t313*t376;
  t412 = 0. + t402 + t404;
  t439 = Cos(var1[11]);
  t448 = 0. + t439;
  t417 = Sin(var1[11]);
  t203 = 0. + t196;
  t521 = -1.*t65*t131;
  t532 = t96*t104*t134;
  t564 = t96*t65;
  t572 = t131*t104*t134;
  t597 = t564 + t572;
  t617 = 0. + t521 + t532;
  t637 = t51*t362*t134;
  t640 = t196*t597;
  t641 = 0. + t637 + t640;
  t418 = -1.*t417;
  t420 = 0. + t418;
  t619 = t313*t617;
  t668 = t342*t641;
  t672 = 0. + t619 + t668;
  t681 = t342*t617;
  t684 = -1.*t313*t641;
  t688 = 0. + t681 + t684;
  t483 = 0. + t417;
  t781 = t96*t51;
  t789 = 0. + t781;
  t795 = t196*t51*t131;
  t798 = -1.*t362*t104;
  t801 = 0. + t795 + t798;
  t793 = t789*t313;
  t802 = t342*t801;
  t803 = 0. + t793 + t802;
  t812 = t342*t789;
  t825 = -1.*t313*t801;
  t826 = 0. + t812 + t825;
  t839 = t420*t803;
  t854 = t448*t826;
  t875 = 0. + t839 + t854;
  t885 = t448*t803;
  t893 = t483*t826;
  t911 = 0. + t885 + t893;
  t206 = t203*t51*t65;
  t267 = t221*t259;
  t304 = 0. + t206 + t267;
  t554 = t203*t51*t134;
  t611 = t221*t597;
  t613 = 0. + t554 + t611;
  t181 = t126 + t167;
  t1021 = Sin(var1[12]);
  t1005 = Cos(var1[12]);
  t1061 = Cos(var1[13]);
  t1031 = Sin(var1[13]);
  t1067 = 0. + t1021;
  t1073 = t51*t65*t1067;
  t1079 = t1005*t259;
  t1080 = 0. + t1073 + t1079;
  t1048 = t1031*t317;
  t1087 = t1061*t1080;
  t1099 = 0. + t1048 + t1087;
  t1121 = t1061*t317;
  t1125 = -1.*t1031*t1080;
  t1129 = 0. + t1121 + t1125;
  t1158 = Cos(var1[14]);
  t1166 = 0. + t1158;
  t1141 = Sin(var1[14]);
  t534 = t521 + t532;
  t1007 = 0. + t1005;
  t1271 = t51*t1067*t134;
  t1274 = t1005*t597;
  t1275 = 0. + t1271 + t1274;
  t1149 = -1.*t1141;
  t1151 = 0. + t1149;
  t1268 = t1031*t617;
  t1287 = t1061*t1275;
  t1291 = 0. + t1268 + t1287;
  t1296 = t1061*t617;
  t1301 = -1.*t1031*t1275;
  t1306 = 0. + t1296 + t1301;
  t1210 = 0. + t1141;
  t1365 = t1005*t51*t131;
  t1366 = -1.*t1067*t104;
  t1370 = 0. + t1365 + t1366;
  t1352 = t789*t1031;
  t1375 = t1061*t1370;
  t1381 = 0. + t1352 + t1375;
  t1390 = t1061*t789;
  t1392 = -1.*t1031*t1370;
  t1395 = 0. + t1390 + t1392;
  t1413 = t1151*t1381;
  t1418 = t1166*t1395;
  t1426 = 0. + t1413 + t1418;
  t1430 = t1166*t1381;
  t1435 = t1210*t1395;
  t1439 = 0. + t1430 + t1435;
  t1019 = t1007*t51*t65;
  t1024 = -1.*t1021*t259;
  t1027 = 0. + t1019 + t1024;
  t1253 = t1007*t51*t134;
  t1256 = -1.*t1021*t597;
  t1257 = 0. + t1253 + t1256;
  p_output1[0]=var1[0];
  p_output1[1]=var1[1];
  p_output1[2]=var1[2];
  p_output1[3]=var1[3];
  p_output1[4]=var1[4];
  p_output1[5]=var1[5];
  p_output1[6]=0.2429*t181 + 0.0329*t304 - 0.2083*t388 - 0.1422*t412 - 0.02*(0. + t388*t420 + t412*t448) - 0.16*(0. + t388*t448 + t412*t483) + 0.0817*t51*t65 + var1[0];
  p_output1[7]=0.0817*t134*t51 + 0.2429*t534 + 0.0329*t613 - 0.2083*t672 - 0.1422*t688 - 0.02*(0. + t420*t672 + t448*t688) - 0.16*(0. + t448*t672 + t483*t688) + var1[1];
  p_output1[8]=-0.0817*t104 + 0.0329*(0. - 1.*t104*t203 + t131*t221*t51) - 0.2083*t803 - 0.1422*t826 - 0.02*t875 - 0.16*t911 + 0.2429*t51*t96 + var1[2];
  p_output1[9]=ArcTan(t875,t911);
  p_output1[10]=ArcTan(Sqrt(Power(t875,2) + Power(t911,2)),0. + t104*t203 - 1.*t131*t221*t51);
  p_output1[11]=ArcTan(t304,t613);
  p_output1[12]=-0.0329*t1027 - 0.2083*t1099 - 0.1422*t1129 - 0.02*(0. + t1099*t1151 + t1129*t1166) - 0.16*(0. + t1099*t1166 + t1129*t1210) - 0.1944*t181 - 0.0817*t51*t65 + var1[0];
  p_output1[13]=-0.0329*t1257 - 0.2083*t1291 - 0.1422*t1306 - 0.02*(0. + t1151*t1291 + t1166*t1306) - 0.16*(0. + t1166*t1291 + t1210*t1306) - 0.0817*t134*t51 - 0.1944*t534 + var1[1];
  p_output1[14]=0.0817*t104 - 0.2083*t1381 - 0.1422*t1395 - 0.02*t1426 - 0.16*t1439 - 0.0329*(0. - 1.*t1007*t104 - 1.*t1021*t131*t51) - 0.1944*t51*t96 + var1[2];
  p_output1[15]=ArcTan(t1426,t1439);
  p_output1[16]=ArcTan(Sqrt(Power(t1426,2) + Power(t1439,2)),0. + t1007*t104 + t1021*t131*t51);
  p_output1[17]=ArcTan(t1027,t1257);
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

#include "hc_2_func_fully.hh"

namespace SymFunction
{

void hc_2_func_fully_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
