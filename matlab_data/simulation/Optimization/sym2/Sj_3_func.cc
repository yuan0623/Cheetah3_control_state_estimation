/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 21:22:47 GMT-05:00
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
  double t997;
  double t195;
  double t959;
  double t324;
  double t1035;
  double t1220;
  double t1222;
  double t1248;
  double t989;
  double t1093;
  double t1111;
  double t1333;
  double t1276;
  double t1406;
  double t1442;
  double t1449;
  double t1459;
  double t1394;
  double t1412;
  double t1415;
  double t1478;
  double t1516;
  double t1539;
  double t1251;
  double t1598;
  double t1599;
  double t1603;
  double t1608;
  double t1651;
  double t1658;
  double t1664;
  double t1668;
  double t1669;
  double t1676;
  double t1677;
  double t1678;
  double t1540;
  double t1561;
  double t1581;
  double t1724;
  double t1743;
  double t1744;
  double t1749;
  double t1753;
  double t1756;
  double t1759;
  double t1814;
  double t1817;
  double t1824;
  double t1830;
  double t1850;
  double t1851;
  double t1852;
  double t1838;
  double t1839;
  double t1846;
  double t1800;
  double t1957;
  double t1958;
  double t1959;
  double t1978;
  double t1986;
  double t1992;
  double t1966;
  double t1969;
  double t1970;
  double t2034;
  double t2036;
  double t2040;
  double t2057;
  double t2058;
  double t2059;
  double t2041;
  double t2042;
  double t2051;
  double t2105;
  double t2106;
  double t2107;
  double t2127;
  double t2128;
  double t2130;
  double t2137;
  double t2139;
  double t2140;
  double t2132;
  double t2133;
  double t2134;
  double t2204;
  double t2212;
  double t2215;
  double t2256;
  double t2257;
  double t2262;
  double t2273;
  double t2277;
  double t2278;
  double t2263;
  double t2267;
  double t2268;
  double t2243;
  double t2325;
  double t2326;
  double t2384;
  double t2389;
  double t2396;
  double t2404;
  double t2405;
  double t2408;
  double t2442;
  double t2445;
  double t2446;
  double t2512;
  double t2508;
  double t2511;
  double t2513;
  double t2516;
  double t2530;
  double t2531;
  double t2543;
  double t2598;
  double t2581;
  double t2584;
  double t2588;
  double t2589;
  double t2605;
  double t2609;
  double t2612;
  double t2613;
  double t2614;
  double t2659;
  double t2660;
  double t2646;
  double t2649;
  double t2656;
  double t2657;
  double t2661;
  double t2663;
  double t2665;
  double t2666;
  double t2669;
  double t2694;
  double t2697;
  double t2698;
  double t2692;
  double t2721;
  double t2738;
  double t2739;
  double t2717;
  double t2775;
  double t2782;
  double t2783;
  double t2765;
  t997 = Cos(var1[3]);
  t195 = Cos(var1[5]);
  t959 = Sin(var1[4]);
  t324 = Sin(var1[3]);
  t1035 = Sin(var1[5]);
  t1220 = t997*t195*t959;
  t1222 = t324*t1035;
  t1248 = t1220 + t1222;
  t989 = -1.*t195*t324*t959;
  t1093 = t997*t1035;
  t1111 = t989 + t1093;
  t1333 = Cos(var1[7]);
  t1276 = Cos(var1[6]);
  t1406 = Sin(var1[7]);
  t1442 = t1333*t1111;
  t1449 = -1.*t1276*t1248*t1406;
  t1459 = t1442 + t1449;
  t1394 = t1276*t1333*t1248;
  t1412 = t1111*t1406;
  t1415 = t1394 + t1412;
  t1478 = Cos(var1[8]);
  t1516 = 0. + t1478;
  t1539 = Sin(var1[8]);
  t1251 = Sin(var1[6]);
  t1598 = -1.*t997*t195;
  t1599 = -1.*t324*t959*t1035;
  t1603 = t1598 + t1599;
  t1608 = -1.*t195*t324;
  t1651 = t997*t959*t1035;
  t1658 = t1608 + t1651;
  t1664 = t1333*t1603;
  t1668 = -1.*t1276*t1658*t1406;
  t1669 = t1664 + t1668;
  t1676 = t1276*t1333*t1658;
  t1677 = t1603*t1406;
  t1678 = t1676 + t1677;
  t1540 = -1.*t1539;
  t1561 = 0. + t1540;
  t1581 = 0. + t1539;
  t1724 = Cos(var1[4]);
  t1743 = -1.*t1724*t1333*t324;
  t1744 = -1.*t997*t1724*t1276*t1406;
  t1749 = t1743 + t1744;
  t1753 = t997*t1724*t1276*t1333;
  t1756 = -1.*t1724*t324*t1406;
  t1759 = t1753 + t1756;
  t1814 = t1724*t195*t1276*t324;
  t1817 = 0. + t1251;
  t1824 = -1.*t195*t959*t1817;
  t1830 = t1814 + t1824;
  t1850 = t997*t1724*t195*t1333;
  t1851 = -1.*t1830*t1406;
  t1852 = t1850 + t1851;
  t1838 = t1333*t1830;
  t1839 = t997*t1724*t195*t1406;
  t1846 = t1838 + t1839;
  t1800 = 0. + t1276;
  t1957 = t1724*t1276*t324*t1035;
  t1958 = -1.*t959*t1035*t1817;
  t1959 = t1957 + t1958;
  t1978 = t997*t1724*t1333*t1035;
  t1986 = -1.*t1959*t1406;
  t1992 = t1978 + t1986;
  t1966 = t1333*t1959;
  t1969 = t997*t1724*t1035*t1406;
  t1970 = t1966 + t1969;
  t2034 = -1.*t1276*t324*t959;
  t2036 = -1.*t1724*t1817;
  t2040 = t2034 + t2036;
  t2057 = -1.*t997*t1333*t959;
  t2058 = -1.*t2040*t1406;
  t2059 = t2057 + t2058;
  t2041 = t1333*t2040;
  t2042 = -1.*t997*t959*t1406;
  t2051 = t2041 + t2042;
  t2105 = t195*t324;
  t2106 = -1.*t997*t959*t1035;
  t2107 = t2105 + t2106;
  t2127 = t1276*t1603;
  t2128 = -1.*t1724*t1035*t1817;
  t2130 = t2127 + t2128;
  t2137 = t1333*t2107;
  t2139 = -1.*t2130*t1406;
  t2140 = t2137 + t2139;
  t2132 = t1333*t2130;
  t2133 = t2107*t1406;
  t2134 = t2132 + t2133;
  t2204 = t195*t324*t959;
  t2212 = -1.*t997*t1035;
  t2215 = t2204 + t2212;
  t2256 = t1276*t2215;
  t2257 = t1724*t195*t1817;
  t2262 = t2256 + t2257;
  t2273 = t1333*t1248;
  t2277 = -1.*t2262*t1406;
  t2278 = t2273 + t2277;
  t2263 = t1333*t2262;
  t2267 = t1248*t1406;
  t2268 = t2263 + t2267;
  t2243 = -1.*t2215*t1251;
  t2325 = t1724*t195*t1276;
  t2326 = t2325 + t2243;
  t2384 = t997*t195;
  t2389 = t324*t959*t1035;
  t2396 = t2384 + t2389;
  t2404 = t1724*t1276*t1035;
  t2405 = -1.*t2396*t1251;
  t2408 = t2404 + t2405;
  t2442 = -1.*t1276*t959;
  t2445 = -1.*t1724*t324*t1251;
  t2446 = t2442 + t2445;
  t2512 = 0. + t1220 + t1222;
  t2508 = 0. + t2256 + t2257;
  t2511 = -1.*t1333*t2508;
  t2513 = -1.*t2512*t1406;
  t2516 = t2511 + t2513;
  t2530 = t1333*t2512;
  t2531 = -1.*t2508*t1406;
  t2543 = t2530 + t2531;
  t2598 = 0. + t1608 + t1651;
  t2581 = t1276*t2396;
  t2584 = t1724*t1035*t1817;
  t2588 = 0. + t2581 + t2584;
  t2589 = -1.*t1333*t2588;
  t2605 = -1.*t2598*t1406;
  t2609 = t2589 + t2605;
  t2612 = t1333*t2598;
  t2613 = -1.*t2588*t1406;
  t2614 = t2612 + t2613;
  t2659 = t997*t1724;
  t2660 = 0. + t2659;
  t2646 = t1724*t1276*t324;
  t2649 = -1.*t959*t1817;
  t2656 = 0. + t2646 + t2649;
  t2657 = -1.*t1333*t2656;
  t2661 = -1.*t2660*t1406;
  t2663 = t2657 + t2661;
  t2665 = t2660*t1333;
  t2666 = -1.*t2656*t1406;
  t2669 = t2665 + t2666;
  t2694 = t1333*t2508;
  t2697 = t2512*t1406;
  t2698 = 0. + t2694 + t2697;
  t2692 = 0. + t2530 + t2531;
  t2721 = t1333*t2588;
  t2738 = t2598*t1406;
  t2739 = 0. + t2721 + t2738;
  t2717 = 0. + t2612 + t2613;
  t2775 = t1333*t2656;
  t2782 = t2660*t1406;
  t2783 = 0. + t2775 + t2782;
  t2765 = 0. + t2665 + t2666;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0.2429*t1111 + 0.0329*t1248*t1251 - 0.2083*t1415 - 0.1422*t1459 - 0.02*(t1459*t1516 + t1415*t1561) - 0.16*(t1415*t1516 + t1459*t1581);
  p_output1[10]=0.2429*t1603 + 0.0329*t1251*t1658 - 0.1422*t1669 - 0.2083*t1678 - 0.16*(t1581*t1669 + t1516*t1678) - 0.02*(t1516*t1669 + t1561*t1678);
  p_output1[11]=-0.1422*t1749 - 0.2083*t1759 - 0.16*(t1581*t1749 + t1516*t1759) - 0.02*(t1516*t1749 + t1561*t1759) - 0.2429*t1724*t324 + 0.0329*t1251*t1724*t997;
  p_output1[12]=-0.2083*t1846 - 0.1422*t1852 - 0.02*(t1561*t1846 + t1516*t1852) - 0.16*(t1516*t1846 + t1581*t1852) + 0.0817*t195*t959 - 0.0329*(-1.*t1251*t1724*t195*t324 - 1.*t1800*t195*t959) + 0.2429*t1724*t195*t997;
  p_output1[13]=-0.2083*t1970 - 0.1422*t1992 - 0.02*(t1561*t1970 + t1516*t1992) - 0.16*(t1516*t1970 + t1581*t1992) + 0.0817*t1035*t959 - 0.0329*(-1.*t1035*t1251*t1724*t324 - 1.*t1035*t1800*t959) + 0.2429*t1035*t1724*t997;
  p_output1[14]=0.0817*t1724 - 0.2083*t2051 - 0.1422*t2059 - 0.02*(t1561*t2051 + t1516*t2059) - 0.16*(t1516*t2051 + t1581*t2059) - 0.0329*(-1.*t1724*t1800 + t1251*t324*t959) - 0.2429*t959*t997;
  p_output1[15]=0.0817*t1035*t1724 - 0.0329*(-1.*t1251*t1603 - 1.*t1035*t1724*t1800) + 0.2429*t2107 - 0.2083*t2134 - 0.1422*t2140 - 0.02*(t1561*t2134 + t1516*t2140) - 0.16*(t1516*t2134 + t1581*t2140);
  p_output1[16]=0.2429*t1248 - 0.0817*t1724*t195 - 0.0329*(t1724*t1800*t195 + t2243) - 0.2083*t2268 - 0.1422*t2278 - 0.02*(t1561*t2268 + t1516*t2278) - 0.16*(t1516*t2268 + t1581*t2278);
  p_output1[17]=0;
  p_output1[18]=-0.0329*(-1.*t1251*t1724*t195 - 1.*t1276*t2215) - 0.2083*t1333*t2326 + 0.1422*t1406*t2326 - 0.02*(-1.*t1406*t1516*t2326 + t1333*t1561*t2326) - 0.16*(t1333*t1516*t2326 - 1.*t1406*t1581*t2326);
  p_output1[19]=-0.0329*(-1.*t1035*t1251*t1724 - 1.*t1276*t2396) - 0.2083*t1333*t2408 + 0.1422*t1406*t2408 - 0.02*(-1.*t1406*t1516*t2408 + t1333*t1561*t2408) - 0.16*(t1333*t1516*t2408 - 1.*t1406*t1581*t2408);
  p_output1[20]=-0.2083*t1333*t2446 + 0.1422*t1406*t2446 - 0.02*(-1.*t1406*t1516*t2446 + t1333*t1561*t2446) - 0.16*(t1333*t1516*t2446 - 1.*t1406*t1581*t2446) - 0.0329*(-1.*t1276*t1724*t324 + t1251*t959);
  p_output1[21]=-0.1422*t2516 - 0.2083*t2543 - 0.16*(t1581*t2516 + t1516*t2543) - 0.02*(t1516*t2516 + t1561*t2543);
  p_output1[22]=-0.1422*t2609 - 0.2083*t2614 - 0.16*(t1581*t2609 + t1516*t2614) - 0.02*(t1516*t2609 + t1561*t2614);
  p_output1[23]=-0.1422*t2663 - 0.2083*t2669 - 0.16*(t1581*t2663 + t1516*t2669) - 0.02*(t1516*t2663 + t1561*t2669);
  p_output1[24]=-0.02*(-1.*t1539*t2692 - 1.*t1478*t2698) - 0.16*(t1478*t2692 - 1.*t1539*t2698);
  p_output1[25]=-0.02*(-1.*t1539*t2717 - 1.*t1478*t2739) - 0.16*(t1478*t2717 - 1.*t1539*t2739);
  p_output1[26]=-0.02*(-1.*t1539*t2765 - 1.*t1478*t2783) - 0.16*(t1478*t2765 - 1.*t1539*t2783);
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Sj_3_func.hh"

namespace SymFunction
{

void Sj_3_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
