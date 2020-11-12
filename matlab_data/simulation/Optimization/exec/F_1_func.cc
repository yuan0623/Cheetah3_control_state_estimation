/*
 * Automatically Generated from Mathematica.
 * Mon 29 Jul 2019 15:07:37 GMT-04:00
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
  double t62;
  double t47;
  double t170;
  double t124;
  double t119;
  double t210;
  double t264;
  double t288;
  double t296;
  double t300;
  double t302;
  double t132;
  double t217;
  double t333;
  double t405;
  double t363;
  double t375;
  double t376;
  double t380;
  double t407;
  double t420;
  double t423;
  double t426;
  double t386;
  double t410;
  double t416;
  double t437;
  double t470;
  double t476;
  double t267;
  double t600;
  double t603;
  double t608;
  double t568;
  double t570;
  double t695;
  double t663;
  double t666;
  double t684;
  double t719;
  double t720;
  double t722;
  double t686;
  double t697;
  double t710;
  double t483;
  double t484;
  double t512;
  double t832;
  double t833;
  double t815;
  double t817;
  double t823;
  double t867;
  double t872;
  double t886;
  double t830;
  double t834;
  double t843;
  double t223;
  double t993;
  double t970;
  double t1022;
  double t1012;
  double t1023;
  double t1024;
  double t1044;
  double t1049;
  double t1055;
  double t1013;
  double t1067;
  double t1082;
  double t1093;
  double t1094;
  double t1105;
  double t1133;
  double t1141;
  double t1111;
  double t576;
  double t983;
  double t1243;
  double t1248;
  double t1274;
  double t1113;
  double t1127;
  double t1239;
  double t1275;
  double t1276;
  double t1283;
  double t1286;
  double t1295;
  double t1174;
  double t1392;
  double t1399;
  double t1401;
  double t1373;
  double t1402;
  double t1406;
  double t1447;
  double t1454;
  double t1456;
  double t109;
  double t969;
  double t1512;
  double t1490;
  double t1532;
  double t1530;
  double t1538;
  double t1544;
  double t1547;
  double t1550;
  double t1531;
  double t1554;
  double t1555;
  double t1560;
  double t1563;
  double t1564;
  double t1612;
  double t1613;
  double t1573;
  double t557;
  double t1210;
  double t1492;
  double t1690;
  double t1694;
  double t1702;
  double t1575;
  double t1590;
  double t1689;
  double t1703;
  double t1709;
  double t1726;
  double t1737;
  double t1741;
  double t1634;
  double t1336;
  double t787;
  double t1834;
  double t1853;
  double t1878;
  double t1814;
  double t1882;
  double t1890;
  double t1893;
  double t1896;
  double t1902;
  t62 = Cos(var1[5]);
  t47 = Cos(var1[4]);
  t170 = Sin(var1[3]);
  t124 = Sin(var1[4]);
  t119 = Cos(var1[3]);
  t210 = Sin(var1[5]);
  t264 = Cos(var1[6]);
  t288 = t62*t170*t124;
  t296 = -1.*t119*t210;
  t300 = t288 + t296;
  t302 = Sin(var1[6]);
  t132 = t119*t62*t124;
  t217 = t170*t210;
  t333 = Cos(var1[7]);
  t405 = 0. + t132 + t217;
  t363 = t264*t300;
  t375 = 0. + t302;
  t376 = t47*t62*t375;
  t380 = 0. + t363 + t376;
  t407 = Sin(var1[7]);
  t420 = t333*t405;
  t423 = -1.*t380*t407;
  t426 = 0. + t420 + t423;
  t386 = t333*t380;
  t410 = t405*t407;
  t416 = 0. + t386 + t410;
  t437 = Cos(var1[8]);
  t470 = 0. + t437;
  t476 = Sin(var1[8]);
  t267 = 0. + t264;
  t600 = t119*t62;
  t603 = t170*t124*t210;
  t608 = t600 + t603;
  t568 = -1.*t62*t170;
  t570 = t119*t124*t210;
  t695 = 0. + t568 + t570;
  t663 = t264*t608;
  t666 = t47*t210*t375;
  t684 = 0. + t663 + t666;
  t719 = t333*t695;
  t720 = -1.*t684*t407;
  t722 = 0. + t719 + t720;
  t686 = t333*t684;
  t697 = t695*t407;
  t710 = 0. + t686 + t697;
  t483 = -1.*t476;
  t484 = 0. + t483;
  t512 = 0. + t476;
  t832 = t119*t47;
  t833 = 0. + t832;
  t815 = t47*t264*t170;
  t817 = -1.*t124*t375;
  t823 = 0. + t815 + t817;
  t867 = t833*t333;
  t872 = -1.*t823*t407;
  t886 = 0. + t867 + t872;
  t830 = t333*t823;
  t834 = t833*t407;
  t843 = 0. + t830 + t834;
  t223 = t132 + t217;
  t993 = Sin(var1[15]);
  t970 = Cos(var1[15]);
  t1022 = Cos(var1[16]);
  t1012 = Sin(var1[16]);
  t1023 = -1.*t993;
  t1024 = 0. + t1023;
  t1044 = t47*t62*t1024;
  t1049 = t970*t300;
  t1055 = 0. + t1044 + t1049;
  t1013 = t1012*t405;
  t1067 = t1022*t1055;
  t1082 = 0. + t1013 + t1067;
  t1093 = t1022*t405;
  t1094 = -1.*t1012*t1055;
  t1105 = 0. + t1093 + t1094;
  t1133 = Cos(var1[17]);
  t1141 = 0. + t1133;
  t1111 = Sin(var1[17]);
  t576 = t568 + t570;
  t983 = 0. + t970;
  t1243 = t47*t1024*t210;
  t1248 = t970*t608;
  t1274 = 0. + t1243 + t1248;
  t1113 = -1.*t1111;
  t1127 = 0. + t1113;
  t1239 = t1012*t695;
  t1275 = t1022*t1274;
  t1276 = 0. + t1239 + t1275;
  t1283 = t1022*t695;
  t1286 = -1.*t1012*t1274;
  t1295 = 0. + t1283 + t1286;
  t1174 = 0. + t1111;
  t1392 = t970*t47*t170;
  t1399 = -1.*t1024*t124;
  t1401 = 0. + t1392 + t1399;
  t1373 = t833*t1012;
  t1402 = t1022*t1401;
  t1406 = 0. + t1373 + t1402;
  t1447 = t1022*t833;
  t1454 = -1.*t1012*t1401;
  t1456 = 0. + t1447 + t1454;
  t109 = -0.0817*t47*t62;
  t969 = -0.1944*t223;
  t1512 = Sin(var1[12]);
  t1490 = Cos(var1[12]);
  t1532 = Cos(var1[13]);
  t1530 = Sin(var1[13]);
  t1538 = 0. + t1512;
  t1544 = t47*t62*t1538;
  t1547 = t1490*t300;
  t1550 = 0. + t1544 + t1547;
  t1531 = t1530*t405;
  t1554 = t1532*t1550;
  t1555 = 0. + t1531 + t1554;
  t1560 = t1532*t405;
  t1563 = -1.*t1530*t1550;
  t1564 = 0. + t1560 + t1563;
  t1612 = Cos(var1[14]);
  t1613 = 0. + t1612;
  t1573 = Sin(var1[14]);
  t557 = -0.0817*t47*t210;
  t1210 = -0.1944*t576;
  t1492 = 0. + t1490;
  t1690 = t47*t1538*t210;
  t1694 = t1490*t608;
  t1702 = 0. + t1690 + t1694;
  t1575 = -1.*t1573;
  t1590 = 0. + t1575;
  t1689 = t1530*t695;
  t1703 = t1532*t1702;
  t1709 = 0. + t1689 + t1703;
  t1726 = t1532*t695;
  t1737 = -1.*t1530*t1702;
  t1741 = 0. + t1726 + t1737;
  t1634 = 0. + t1573;
  t1336 = -0.1944*t119*t47;
  t787 = 0.0817*t124;
  t1834 = t1490*t47*t170;
  t1853 = -1.*t1538*t124;
  t1878 = 0. + t1834 + t1853;
  t1814 = t833*t1530;
  t1882 = t1532*t1878;
  t1890 = 0. + t1814 + t1882;
  t1893 = t1532*t833;
  t1896 = -1.*t1530*t1878;
  t1902 = 0. + t1893 + t1896;
  p_output1[0]=t109 + 0.2429*t223 - 0.2083*t416 - 0.1422*t426 - 0.02*(0. + t426*t470 + t416*t484) - 0.16*(0. + t416*t470 + t426*t512) - 0.0329*(0. - 1.*t300*t302 + t267*t47*t62) + var1[0];
  p_output1[1]=t557 + 0.2429*t576 - 0.0329*(0. + t210*t267*t47 - 1.*t302*t608) - 0.2083*t710 - 0.1422*t722 - 0.02*(0. + t484*t710 + t470*t722) - 0.16*(0. + t470*t710 + t512*t722) + var1[1];
  p_output1[2]=0.2429*t119*t47 - 0.0329*(0. - 1.*t124*t267 - 1.*t170*t302*t47) + t787 - 0.2083*t843 - 0.1422*t886 - 0.02*(0. + t484*t843 + t470*t886) - 0.16*(0. + t470*t843 + t512*t886) + var1[2];
  p_output1[3]=-0.2083*t1082 - 0.1422*t1105 - 0.02*(0. + t1082*t1127 + t1105*t1141) - 0.16*(0. + t1082*t1141 + t1105*t1174) + 0.0817*t47*t62 + t969 + 0.0329*(0. + t47*t62*t983 + t300*t993) + var1[0];
  p_output1[4]=t1210 - 0.2083*t1276 - 0.1422*t1295 - 0.02*(0. + t1127*t1276 + t1141*t1295) - 0.16*(0. + t1141*t1276 + t1174*t1295) + 0.0817*t210*t47 + 0.0329*(0. + t210*t47*t983 + t608*t993) + var1[1];
  p_output1[5]=-0.0817*t124 + t1336 - 0.2083*t1406 - 0.1422*t1456 - 0.02*(0. + t1127*t1406 + t1141*t1456) - 0.16*(0. + t1141*t1406 + t1174*t1456) + 0.0329*(0. - 1.*t124*t983 + t170*t47*t993) + var1[2];
  p_output1[6]=t109 - 0.2083*t1555 - 0.1422*t1564 - 0.02*(0. + t1555*t1590 + t1564*t1613) - 0.16*(0. + t1555*t1613 + t1564*t1634) - 0.0329*(0. - 1.*t1512*t300 + t1492*t47*t62) + t969 + var1[0];
  p_output1[7]=t1210 - 0.2083*t1709 - 0.1422*t1741 - 0.02*(0. + t1590*t1709 + t1613*t1741) - 0.16*(0. + t1613*t1709 + t1634*t1741) + t557 - 0.0329*(0. + t1492*t210*t47 - 1.*t1512*t608) + var1[1];
  p_output1[8]=t1336 - 0.2083*t1890 - 0.1422*t1902 - 0.02*(0. + t1590*t1890 + t1613*t1902) - 0.16*(0. + t1613*t1890 + t1634*t1902) - 0.0329*(0. - 1.*t124*t1492 - 1.*t1512*t170*t47) + t787 + var1[2];
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
