/*
 * Automatically Generated from Mathematica.
 * Mon 29 Jul 2019 15:07:48 GMT-04:00
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
  double t231;
  double t132;
  double t363;
  double t324;
  double t308;
  double t376;
  double t326;
  double t416;
  double t484;
  double t426;
  double t489;
  double t492;
  double t507;
  double t576;
  double t557;
  double t552;
  double t600;
  double t603;
  double t622;
  double t637;
  double t659;
  double t570;
  double t663;
  double t666;
  double t686;
  double t695;
  double t697;
  double t734;
  double t735;
  double t719;
  double t434;
  double t815;
  double t832;
  double t860;
  double t867;
  double t886;
  double t924;
  double t939;
  double t941;
  double t944;
  double t722;
  double t727;
  double t935;
  double t957;
  double t959;
  double t984;
  double t996;
  double t999;
  double t784;
  double t1162;
  double t1174;
  double t1189;
  double t1203;
  double t1210;
  double t1179;
  double t1212;
  double t1214;
  double t1239;
  double t1248;
  double t1275;
  double t288;
  double t418;
  double t1363;
  double t1334;
  double t1402;
  double t1373;
  double t1406;
  double t1434;
  double t1447;
  double t1456;
  double t1459;
  double t1392;
  double t1467;
  double t1470;
  double t1475;
  double t1479;
  double t1483;
  double t1525;
  double t1531;
  double t1490;
  double t810;
  double t833;
  double t1336;
  double t1634;
  double t1640;
  double t1649;
  double t1505;
  double t1514;
  double t1633;
  double t1657;
  double t1663;
  double t1667;
  double t1674;
  double t1678;
  double t1555;
  double t1131;
  double t1814;
  double t1834;
  double t1891;
  double t1807;
  double t1893;
  double t1902;
  double t1906;
  double t1913;
  double t1927;
  double t1323;
  double t2014;
  double t1973;
  double t2050;
  double t2044;
  double t2053;
  double t2058;
  double t2061;
  double t2068;
  double t2048;
  double t2072;
  double t2073;
  double t2079;
  double t2080;
  double t2085;
  double t2147;
  double t2154;
  double t2124;
  double t1612;
  double t1979;
  double t2248;
  double t2250;
  double t2251;
  double t2125;
  double t2140;
  double t2247;
  double t2253;
  double t2256;
  double t2264;
  double t2265;
  double t2266;
  double t2209;
  double t1785;
  double t2413;
  double t2420;
  double t2421;
  double t2392;
  double t2425;
  double t2427;
  double t2434;
  double t2439;
  double t2440;
  t231 = Cos(var1[5]);
  t132 = Cos(var1[4]);
  t363 = Sin(var1[3]);
  t324 = Sin(var1[4]);
  t308 = Cos(var1[3]);
  t376 = Sin(var1[5]);
  t326 = t308*t231*t324;
  t416 = t363*t376;
  t484 = Sin(var1[9]);
  t426 = Cos(var1[9]);
  t489 = t231*t363*t324;
  t492 = -1.*t308*t376;
  t507 = t489 + t492;
  t576 = Cos(var1[10]);
  t557 = 0. + t326 + t416;
  t552 = Sin(var1[10]);
  t600 = -1.*t484;
  t603 = 0. + t600;
  t622 = t132*t231*t603;
  t637 = t426*t507;
  t659 = 0. + t622 + t637;
  t570 = t552*t557;
  t663 = t576*t659;
  t666 = 0. + t570 + t663;
  t686 = t576*t557;
  t695 = -1.*t552*t659;
  t697 = 0. + t686 + t695;
  t734 = Cos(var1[11]);
  t735 = 0. + t734;
  t719 = Sin(var1[11]);
  t434 = 0. + t426;
  t815 = -1.*t231*t363;
  t832 = t308*t324*t376;
  t860 = t308*t231;
  t867 = t363*t324*t376;
  t886 = t860 + t867;
  t924 = 0. + t815 + t832;
  t939 = t132*t603*t376;
  t941 = t426*t886;
  t944 = 0. + t939 + t941;
  t722 = -1.*t719;
  t727 = 0. + t722;
  t935 = t552*t924;
  t957 = t576*t944;
  t959 = 0. + t935 + t957;
  t984 = t576*t924;
  t996 = -1.*t552*t944;
  t999 = 0. + t984 + t996;
  t784 = 0. + t719;
  t1162 = t308*t132;
  t1174 = 0. + t1162;
  t1189 = t426*t132*t363;
  t1203 = -1.*t603*t324;
  t1210 = 0. + t1189 + t1203;
  t1179 = t1174*t552;
  t1212 = t576*t1210;
  t1214 = 0. + t1179 + t1212;
  t1239 = t576*t1174;
  t1248 = -1.*t552*t1210;
  t1275 = 0. + t1239 + t1248;
  t288 = 0.0817*t132*t231;
  t418 = t326 + t416;
  t1363 = Sin(var1[15]);
  t1334 = Cos(var1[15]);
  t1402 = Cos(var1[16]);
  t1373 = Sin(var1[16]);
  t1406 = -1.*t1363;
  t1434 = 0. + t1406;
  t1447 = t132*t231*t1434;
  t1456 = t1334*t507;
  t1459 = 0. + t1447 + t1456;
  t1392 = t1373*t557;
  t1467 = t1402*t1459;
  t1470 = 0. + t1392 + t1467;
  t1475 = t1402*t557;
  t1479 = -1.*t1373*t1459;
  t1483 = 0. + t1475 + t1479;
  t1525 = Cos(var1[17]);
  t1531 = 0. + t1525;
  t1490 = Sin(var1[17]);
  t810 = 0.0817*t132*t376;
  t833 = t815 + t832;
  t1336 = 0. + t1334;
  t1634 = t132*t1434*t376;
  t1640 = t1334*t886;
  t1649 = 0. + t1634 + t1640;
  t1505 = -1.*t1490;
  t1514 = 0. + t1505;
  t1633 = t1373*t924;
  t1657 = t1402*t1649;
  t1663 = 0. + t1633 + t1657;
  t1667 = t1402*t924;
  t1674 = -1.*t1373*t1649;
  t1678 = 0. + t1667 + t1674;
  t1555 = 0. + t1490;
  t1131 = -0.0817*t324;
  t1814 = t1334*t132*t363;
  t1834 = -1.*t1434*t324;
  t1891 = 0. + t1814 + t1834;
  t1807 = t1174*t1373;
  t1893 = t1402*t1891;
  t1902 = 0. + t1807 + t1893;
  t1906 = t1402*t1174;
  t1913 = -1.*t1373*t1891;
  t1927 = 0. + t1906 + t1913;
  t1323 = -0.1944*t418;
  t2014 = Sin(var1[12]);
  t1973 = Cos(var1[12]);
  t2050 = Cos(var1[13]);
  t2044 = Sin(var1[13]);
  t2053 = 0. + t2014;
  t2058 = t132*t231*t2053;
  t2061 = t1973*t507;
  t2068 = 0. + t2058 + t2061;
  t2048 = t2044*t557;
  t2072 = t2050*t2068;
  t2073 = 0. + t2048 + t2072;
  t2079 = t2050*t557;
  t2080 = -1.*t2044*t2068;
  t2085 = 0. + t2079 + t2080;
  t2147 = Cos(var1[14]);
  t2154 = 0. + t2147;
  t2124 = Sin(var1[14]);
  t1612 = -0.1944*t833;
  t1979 = 0. + t1973;
  t2248 = t132*t2053*t376;
  t2250 = t1973*t886;
  t2251 = 0. + t2248 + t2250;
  t2125 = -1.*t2124;
  t2140 = 0. + t2125;
  t2247 = t2044*t924;
  t2253 = t2050*t2251;
  t2256 = 0. + t2247 + t2253;
  t2264 = t2050*t924;
  t2265 = -1.*t2044*t2251;
  t2266 = 0. + t2264 + t2265;
  t2209 = 0. + t2124;
  t1785 = -0.1944*t308*t132;
  t2413 = t1973*t132*t363;
  t2420 = -1.*t2053*t324;
  t2421 = 0. + t2413 + t2420;
  t2392 = t1174*t2044;
  t2425 = t2050*t2421;
  t2427 = 0. + t2392 + t2425;
  t2434 = t2050*t1174;
  t2439 = -1.*t2044*t2421;
  t2440 = 0. + t2434 + t2439;
  p_output1[0]=t288 + 0.2429*t418 + 0.035199999999999995*(0. + t132*t231*t434 + t484*t507) - 0.2083*t666 - 0.1422*t697 - 0.02*(0. + t666*t727 + t697*t735) - 0.16*(0. + t666*t735 + t697*t784) + var1[0];
  p_output1[1]=t810 + 0.2429*t833 + 0.035199999999999995*(0. + t132*t376*t434 + t484*t886) - 0.2083*t959 - 0.1422*t999 - 0.02*(0. + t727*t959 + t735*t999) - 0.16*(0. + t735*t959 + t784*t999) + var1[1];
  p_output1[2]=t1131 - 0.2083*t1214 - 0.1422*t1275 + 0.2429*t132*t308 + 0.035199999999999995*(0. - 1.*t324*t434 + t132*t363*t484) - 0.02*(0. + t1214*t727 + t1275*t735) - 0.16*(0. + t1214*t735 + t1275*t784) + var1[2];
  p_output1[3]=t1323 - 0.2083*t1470 - 0.1422*t1483 - 0.02*(0. + t1470*t1514 + t1483*t1531) - 0.16*(0. + t1470*t1531 + t1483*t1555) + t288 + 0.0329*(0. + t132*t1336*t231 + t1363*t507) + var1[0];
  p_output1[4]=t1612 - 0.2083*t1663 - 0.1422*t1678 - 0.02*(0. + t1514*t1663 + t1531*t1678) - 0.16*(0. + t1531*t1663 + t1555*t1678) + t810 + 0.0329*(0. + t132*t1336*t376 + t1363*t886) + var1[1];
  p_output1[5]=t1131 + t1785 - 0.2083*t1902 - 0.1422*t1927 - 0.02*(0. + t1514*t1902 + t1531*t1927) - 0.16*(0. + t1531*t1902 + t1555*t1927) + 0.0329*(0. - 1.*t1336*t324 + t132*t1363*t363) + var1[2];
  p_output1[6]=t1323 - 0.2083*t2073 - 0.1422*t2085 - 0.02*(0. + t2073*t2140 + t2085*t2154) - 0.16*(0. + t2073*t2154 + t2085*t2209) - 0.0817*t132*t231 - 0.0329*(0. + t132*t1979*t231 - 1.*t2014*t507) + var1[0];
  p_output1[7]=t1612 - 0.2083*t2256 - 0.1422*t2266 - 0.02*(0. + t2140*t2256 + t2154*t2266) - 0.16*(0. + t2154*t2256 + t2209*t2266) - 0.0817*t132*t376 - 0.0329*(0. + t132*t1979*t376 - 1.*t2014*t886) + var1[1];
  p_output1[8]=t1785 - 0.2083*t2427 - 0.1422*t2440 - 0.02*(0. + t2140*t2427 + t2154*t2440) - 0.16*(0. + t2154*t2427 + t2209*t2440) + 0.0817*t324 - 0.0329*(0. - 1.*t1979*t324 - 1.*t132*t2014*t363) + var1[2];
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

#include "F_3_func.hh"

namespace SymFunction
{

void F_3_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
