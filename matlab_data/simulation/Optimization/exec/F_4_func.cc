/*
 * Automatically Generated from Mathematica.
 * Mon 29 Jul 2019 15:07:50 GMT-04:00
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
  double t215;
  double t130;
  double t420;
  double t416;
  double t326;
  double t426;
  double t418;
  double t470;
  double t570;
  double t515;
  double t576;
  double t622;
  double t637;
  double t727;
  double t697;
  double t686;
  double t733;
  double t734;
  double t735;
  double t745;
  double t750;
  double t710;
  double t753;
  double t764;
  double t787;
  double t794;
  double t800;
  double t843;
  double t860;
  double t810;
  double t539;
  double t964;
  double t965;
  double t1013;
  double t1022;
  double t1044;
  double t1093;
  double t1107;
  double t1127;
  double t1131;
  double t832;
  double t833;
  double t1105;
  double t1133;
  double t1141;
  double t1146;
  double t1154;
  double t1162;
  double t924;
  double t1317;
  double t1319;
  double t1321;
  double t1322;
  double t1323;
  double t1320;
  double t1334;
  double t1362;
  double t1367;
  double t1371;
  double t1392;
  double t489;
  double t512;
  double t1514;
  double t1531;
  double t1554;
  double t1555;
  double t1557;
  double t1560;
  double t1564;
  double t1612;
  double t1631;
  double t1633;
  double t1634;
  double t1565;
  double t1613;
  double t1621;
  double t1657;
  double t1663;
  double t1667;
  double t984;
  double t999;
  double t1519;
  double t1807;
  double t1814;
  double t1881;
  double t1927;
  double t1935;
  double t1942;
  double t1893;
  double t1902;
  double t1905;
  double t1678;
  double t1689;
  double t1741;
  double t1277;
  double t2050;
  double t2058;
  double t2061;
  double t2085;
  double t2116;
  double t2140;
  double t2072;
  double t2073;
  double t2077;
  double t1485;
  double t2235;
  double t2229;
  double t2253;
  double t2248;
  double t2256;
  double t2262;
  double t2264;
  double t2266;
  double t2250;
  double t2268;
  double t2273;
  double t2280;
  double t2281;
  double t2287;
  double t2376;
  double t2378;
  double t2322;
  double t1785;
  double t2230;
  double t2470;
  double t2472;
  double t2475;
  double t2328;
  double t2365;
  double t2468;
  double t2477;
  double t2479;
  double t2489;
  double t2490;
  double t2491;
  double t2425;
  double t2001;
  double t2558;
  double t2561;
  double t2568;
  double t2557;
  double t2570;
  double t2578;
  double t2590;
  double t2593;
  double t2595;
  t215 = Cos(var1[5]);
  t130 = Cos(var1[4]);
  t420 = Sin(var1[3]);
  t416 = Sin(var1[4]);
  t326 = Cos(var1[3]);
  t426 = Sin(var1[5]);
  t418 = t326*t215*t416;
  t470 = t420*t426;
  t570 = Sin(var1[9]);
  t515 = Cos(var1[9]);
  t576 = t215*t420*t416;
  t622 = -1.*t326*t426;
  t637 = t576 + t622;
  t727 = Cos(var1[10]);
  t697 = 0. + t418 + t470;
  t686 = Sin(var1[10]);
  t733 = -1.*t570;
  t734 = 0. + t733;
  t735 = t130*t215*t734;
  t745 = t515*t637;
  t750 = 0. + t735 + t745;
  t710 = t686*t697;
  t753 = t727*t750;
  t764 = 0. + t710 + t753;
  t787 = t727*t697;
  t794 = -1.*t686*t750;
  t800 = 0. + t787 + t794;
  t843 = Cos(var1[11]);
  t860 = 0. + t843;
  t810 = Sin(var1[11]);
  t539 = 0. + t515;
  t964 = -1.*t215*t420;
  t965 = t326*t416*t426;
  t1013 = t326*t215;
  t1022 = t420*t416*t426;
  t1044 = t1013 + t1022;
  t1093 = 0. + t964 + t965;
  t1107 = t130*t734*t426;
  t1127 = t515*t1044;
  t1131 = 0. + t1107 + t1127;
  t832 = -1.*t810;
  t833 = 0. + t832;
  t1105 = t686*t1093;
  t1133 = t727*t1131;
  t1141 = 0. + t1105 + t1133;
  t1146 = t727*t1093;
  t1154 = -1.*t686*t1131;
  t1162 = 0. + t1146 + t1154;
  t924 = 0. + t810;
  t1317 = t326*t130;
  t1319 = 0. + t1317;
  t1321 = t515*t130*t420;
  t1322 = -1.*t734*t416;
  t1323 = 0. + t1321 + t1322;
  t1320 = t1319*t686;
  t1334 = t727*t1323;
  t1362 = 0. + t1320 + t1334;
  t1367 = t727*t1319;
  t1371 = -1.*t686*t1323;
  t1392 = 0. + t1367 + t1371;
  t489 = t418 + t470;
  t512 = 0.2429*t489;
  t1514 = Cos(var1[6]);
  t1531 = Sin(var1[6]);
  t1554 = Cos(var1[7]);
  t1555 = t1514*t637;
  t1557 = 0. + t1531;
  t1560 = t130*t215*t1557;
  t1564 = 0. + t1555 + t1560;
  t1612 = Sin(var1[7]);
  t1631 = t1554*t697;
  t1633 = -1.*t1564*t1612;
  t1634 = 0. + t1631 + t1633;
  t1565 = t1554*t1564;
  t1613 = t697*t1612;
  t1621 = 0. + t1565 + t1613;
  t1657 = Cos(var1[8]);
  t1663 = 0. + t1657;
  t1667 = Sin(var1[8]);
  t984 = t964 + t965;
  t999 = 0.2429*t984;
  t1519 = 0. + t1514;
  t1807 = t1514*t1044;
  t1814 = t130*t426*t1557;
  t1881 = 0. + t1807 + t1814;
  t1927 = t1554*t1093;
  t1935 = -1.*t1881*t1612;
  t1942 = 0. + t1927 + t1935;
  t1893 = t1554*t1881;
  t1902 = t1093*t1612;
  t1905 = 0. + t1893 + t1902;
  t1678 = -1.*t1667;
  t1689 = 0. + t1678;
  t1741 = 0. + t1667;
  t1277 = 0.2429*t326*t130;
  t2050 = t130*t1514*t420;
  t2058 = -1.*t416*t1557;
  t2061 = 0. + t2050 + t2058;
  t2085 = t1319*t1554;
  t2116 = -1.*t2061*t1612;
  t2140 = 0. + t2085 + t2116;
  t2072 = t1554*t2061;
  t2073 = t1319*t1612;
  t2077 = 0. + t2072 + t2073;
  t1485 = -0.0817*t130*t215;
  t2235 = Sin(var1[12]);
  t2229 = Cos(var1[12]);
  t2253 = Cos(var1[13]);
  t2248 = Sin(var1[13]);
  t2256 = 0. + t2235;
  t2262 = t130*t215*t2256;
  t2264 = t2229*t637;
  t2266 = 0. + t2262 + t2264;
  t2250 = t2248*t697;
  t2268 = t2253*t2266;
  t2273 = 0. + t2250 + t2268;
  t2280 = t2253*t697;
  t2281 = -1.*t2248*t2266;
  t2287 = 0. + t2280 + t2281;
  t2376 = Cos(var1[14]);
  t2378 = 0. + t2376;
  t2322 = Sin(var1[14]);
  t1785 = -0.0817*t130*t426;
  t2230 = 0. + t2229;
  t2470 = t130*t2256*t426;
  t2472 = t2229*t1044;
  t2475 = 0. + t2470 + t2472;
  t2328 = -1.*t2322;
  t2365 = 0. + t2328;
  t2468 = t2248*t1093;
  t2477 = t2253*t2475;
  t2479 = 0. + t2468 + t2477;
  t2489 = t2253*t1093;
  t2490 = -1.*t2248*t2475;
  t2491 = 0. + t2489 + t2490;
  t2425 = 0. + t2322;
  t2001 = 0.0817*t416;
  t2558 = t2229*t130*t420;
  t2561 = -1.*t2256*t416;
  t2568 = 0. + t2558 + t2561;
  t2557 = t1319*t2248;
  t2570 = t2253*t2568;
  t2578 = 0. + t2557 + t2570;
  t2590 = t2253*t1319;
  t2593 = -1.*t2248*t2568;
  t2595 = 0. + t2590 + t2593;
  p_output1[0]=0.0817*t130*t215 + t512 + 0.035199999999999995*(0. + t130*t215*t539 + t570*t637) - 0.2083*t764 - 0.1422*t800 - 0.02*(0. + t764*t833 + t800*t860) - 0.16*(0. + t764*t860 + t800*t924) + var1[0];
  p_output1[1]=-0.2083*t1141 - 0.1422*t1162 + 0.0817*t130*t426 + 0.035199999999999995*(0. + t130*t426*t539 + t1044*t570) - 0.02*(0. + t1141*t833 + t1162*t860) - 0.16*(0. + t1141*t860 + t1162*t924) + t999 + var1[1];
  p_output1[2]=t1277 - 0.2083*t1362 - 0.1422*t1392 - 0.0817*t416 + 0.035199999999999995*(0. - 1.*t416*t539 + t130*t420*t570) - 0.02*(0. + t1362*t833 + t1392*t860) - 0.16*(0. + t1362*t860 + t1392*t924) + var1[2];
  p_output1[3]=t1485 - 0.2083*t1621 - 0.1422*t1634 - 0.02*(0. + t1634*t1663 + t1621*t1689) - 0.16*(0. + t1621*t1663 + t1634*t1741) + t512 - 0.0329*(0. + t130*t1519*t215 - 1.*t1531*t637) + var1[0];
  p_output1[4]=t1785 - 0.2083*t1905 - 0.1422*t1942 - 0.02*(0. + t1689*t1905 + t1663*t1942) - 0.16*(0. + t1663*t1905 + t1741*t1942) - 0.0329*(0. - 1.*t1044*t1531 + t130*t1519*t426) + t999 + var1[1];
  p_output1[5]=t1277 + t2001 - 0.2083*t2077 - 0.1422*t2140 - 0.02*(0. + t1689*t2077 + t1663*t2140) - 0.16*(0. + t1663*t2077 + t1741*t2140) - 0.0329*(0. - 1.*t1519*t416 - 1.*t130*t1531*t420) + var1[2];
  p_output1[6]=t1485 - 0.2083*t2273 - 0.1422*t2287 - 0.02*(0. + t2273*t2365 + t2287*t2378) - 0.16*(0. + t2273*t2378 + t2287*t2425) - 0.1944*t489 - 0.0329*(0. + t130*t215*t2230 - 1.*t2235*t637) + var1[0];
  p_output1[7]=t1785 - 0.2083*t2479 - 0.1422*t2491 - 0.02*(0. + t2365*t2479 + t2378*t2491) - 0.16*(0. + t2378*t2479 + t2425*t2491) - 0.0329*(0. - 1.*t1044*t2235 + t130*t2230*t426) - 0.1944*t984 + var1[1];
  p_output1[8]=t2001 - 0.2083*t2578 - 0.1422*t2595 - 0.02*(0. + t2365*t2578 + t2378*t2595) - 0.16*(0. + t2378*t2578 + t2425*t2595) - 0.1944*t130*t326 - 0.0329*(0. - 1.*t2230*t416 - 1.*t130*t2235*t420) + var1[2];
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
