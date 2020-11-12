/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 21:22:44 GMT-05:00
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
  double t933;
  double t80;
  double t669;
  double t533;
  double t939;
  double t929;
  double t959;
  double t989;
  double t1035;
  double t1093;
  double t1099;
  double t1207;
  double t1153;
  double t1117;
  double t1142;
  double t1220;
  double t1222;
  double t1251;
  double t1260;
  double t1265;
  double t1362;
  double t1391;
  double t1303;
  double t1017;
  double t1473;
  double t1476;
  double t1477;
  double t1482;
  double t1491;
  double t1492;
  double t1420;
  double t1533;
  double t1535;
  double t1539;
  double t1561;
  double t1563;
  double t1576;
  double t1309;
  double t1327;
  double t1604;
  double t1614;
  double t1650;
  double t1651;
  double t1661;
  double t1663;
  double t1664;
  double t1725;
  double t1726;
  double t1727;
  double t1730;
  double t1724;
  double t1741;
  double t1743;
  double t1749;
  double t1750;
  double t1751;
  double t1714;
  double t1804;
  double t1805;
  double t1806;
  double t1803;
  double t1807;
  double t1808;
  double t1817;
  double t1827;
  double t1830;
  double t1896;
  double t1897;
  double t1898;
  double t1881;
  double t1910;
  double t1911;
  double t1925;
  double t1926;
  double t1937;
  double t1986;
  double t1991;
  double t1992;
  double t2003;
  double t2004;
  double t2005;
  double t2001;
  double t2006;
  double t2017;
  double t2021;
  double t2024;
  double t2026;
  double t2059;
  double t2060;
  double t2062;
  double t2072;
  double t2088;
  double t2091;
  double t2071;
  double t2094;
  double t2095;
  double t2099;
  double t2101;
  double t2102;
  double t2065;
  double t2134;
  double t2135;
  double t2189;
  double t2192;
  double t2193;
  double t2204;
  double t2205;
  double t2210;
  double t2269;
  double t2270;
  double t2271;
  double t2308;
  double t2317;
  double t2314;
  double t2318;
  double t2319;
  double t2321;
  double t2322;
  double t2325;
  double t2373;
  double t2379;
  double t2380;
  double t2382;
  double t2378;
  double t2383;
  double t2384;
  double t2396;
  double t2398;
  double t2400;
  double t2421;
  double t2423;
  double t2425;
  double t2428;
  double t2429;
  double t2424;
  double t2430;
  double t2434;
  double t2436;
  double t2437;
  double t2438;
  double t2460;
  double t2469;
  double t2472;
  double t2481;
  double t2512;
  double t2513;
  double t2515;
  double t2517;
  double t2553;
  double t2557;
  double t2559;
  double t2568;
  t933 = Cos(var1[3]);
  t80 = Cos(var1[5]);
  t669 = Sin(var1[4]);
  t533 = Sin(var1[3]);
  t939 = Sin(var1[5]);
  t929 = -1.*t80*t533*t669;
  t959 = t933*t939;
  t989 = t929 + t959;
  t1035 = t933*t80*t669;
  t1093 = t533*t939;
  t1099 = t1035 + t1093;
  t1207 = Cos(var1[13]);
  t1153 = Cos(var1[12]);
  t1117 = Sin(var1[13]);
  t1142 = t1117*t989;
  t1220 = t1153*t1207*t1099;
  t1222 = t1142 + t1220;
  t1251 = t1207*t989;
  t1260 = -1.*t1153*t1117*t1099;
  t1265 = t1251 + t1260;
  t1362 = Cos(var1[14]);
  t1391 = 0. + t1362;
  t1303 = Sin(var1[14]);
  t1017 = Sin(var1[12]);
  t1473 = -1.*t80*t533;
  t1476 = t933*t669*t939;
  t1477 = t1473 + t1476;
  t1482 = -1.*t933*t80;
  t1491 = -1.*t533*t669*t939;
  t1492 = t1482 + t1491;
  t1420 = 0. + t1303;
  t1533 = -1.*t1153*t1117*t1477;
  t1535 = t1207*t1492;
  t1539 = t1533 + t1535;
  t1561 = t1153*t1207*t1477;
  t1563 = t1117*t1492;
  t1576 = t1561 + t1563;
  t1309 = -1.*t1303;
  t1327 = 0. + t1309;
  t1604 = Cos(var1[4]);
  t1614 = -1.*t1153*t933*t1604*t1117;
  t1650 = -1.*t1207*t1604*t533;
  t1651 = t1614 + t1650;
  t1661 = t1153*t1207*t933*t1604;
  t1663 = -1.*t1604*t1117*t533;
  t1664 = t1661 + t1663;
  t1725 = t1153*t1604*t80*t533;
  t1726 = 0. + t1017;
  t1727 = -1.*t80*t1726*t669;
  t1730 = t1725 + t1727;
  t1724 = t933*t1604*t80*t1117;
  t1741 = t1207*t1730;
  t1743 = t1724 + t1741;
  t1749 = t1207*t933*t1604*t80;
  t1750 = -1.*t1117*t1730;
  t1751 = t1749 + t1750;
  t1714 = 0. + t1153;
  t1804 = t1153*t1604*t533*t939;
  t1805 = -1.*t1726*t669*t939;
  t1806 = t1804 + t1805;
  t1803 = t933*t1604*t1117*t939;
  t1807 = t1207*t1806;
  t1808 = t1803 + t1807;
  t1817 = t1207*t933*t1604*t939;
  t1827 = -1.*t1117*t1806;
  t1830 = t1817 + t1827;
  t1896 = -1.*t1604*t1726;
  t1897 = -1.*t1153*t533*t669;
  t1898 = t1896 + t1897;
  t1881 = -1.*t933*t1117*t669;
  t1910 = t1207*t1898;
  t1911 = t1881 + t1910;
  t1925 = -1.*t1207*t933*t669;
  t1926 = -1.*t1117*t1898;
  t1937 = t1925 + t1926;
  t1986 = t80*t533;
  t1991 = -1.*t933*t669*t939;
  t1992 = t1986 + t1991;
  t2003 = -1.*t1604*t1726*t939;
  t2004 = t1153*t1492;
  t2005 = t2003 + t2004;
  t2001 = t1117*t1992;
  t2006 = t1207*t2005;
  t2017 = t2001 + t2006;
  t2021 = t1207*t1992;
  t2024 = -1.*t1117*t2005;
  t2026 = t2021 + t2024;
  t2059 = t80*t533*t669;
  t2060 = -1.*t933*t939;
  t2062 = t2059 + t2060;
  t2072 = t1604*t80*t1726;
  t2088 = t1153*t2062;
  t2091 = t2072 + t2088;
  t2071 = t1117*t1099;
  t2094 = t1207*t2091;
  t2095 = t2071 + t2094;
  t2099 = t1207*t1099;
  t2101 = -1.*t1117*t2091;
  t2102 = t2099 + t2101;
  t2065 = -1.*t1017*t2062;
  t2134 = t1153*t1604*t80;
  t2135 = t2134 + t2065;
  t2189 = t933*t80;
  t2192 = t533*t669*t939;
  t2193 = t2189 + t2192;
  t2204 = t1153*t1604*t939;
  t2205 = -1.*t1017*t2193;
  t2210 = t2204 + t2205;
  t2269 = -1.*t1604*t1017*t533;
  t2270 = -1.*t1153*t669;
  t2271 = t2269 + t2270;
  t2308 = 0. + t1035 + t1093;
  t2317 = 0. + t2072 + t2088;
  t2314 = -1.*t1117*t2308;
  t2318 = -1.*t1207*t2317;
  t2319 = t2314 + t2318;
  t2321 = t1207*t2308;
  t2322 = -1.*t1117*t2317;
  t2325 = t2321 + t2322;
  t2373 = 0. + t1473 + t1476;
  t2379 = t1604*t1726*t939;
  t2380 = t1153*t2193;
  t2382 = 0. + t2379 + t2380;
  t2378 = -1.*t1117*t2373;
  t2383 = -1.*t1207*t2382;
  t2384 = t2378 + t2383;
  t2396 = t1207*t2373;
  t2398 = -1.*t1117*t2382;
  t2400 = t2396 + t2398;
  t2421 = t933*t1604;
  t2423 = 0. + t2421;
  t2425 = t1153*t1604*t533;
  t2428 = -1.*t1726*t669;
  t2429 = 0. + t2425 + t2428;
  t2424 = -1.*t2423*t1117;
  t2430 = -1.*t1207*t2429;
  t2434 = t2424 + t2430;
  t2436 = t1207*t2423;
  t2437 = -1.*t1117*t2429;
  t2438 = t2436 + t2437;
  t2460 = t1117*t2308;
  t2469 = t1207*t2317;
  t2472 = 0. + t2460 + t2469;
  t2481 = 0. + t2321 + t2322;
  t2512 = t1117*t2373;
  t2513 = t1207*t2382;
  t2515 = 0. + t2512 + t2513;
  t2517 = 0. + t2396 + t2398;
  t2553 = t2423*t1117;
  t2557 = t1207*t2429;
  t2559 = 0. + t2553 + t2557;
  t2568 = 0. + t2436 + t2437;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0.0329*t1017*t1099 - 0.2083*t1222 - 0.1422*t1265 - 0.02*(t1222*t1327 + t1265*t1391) - 0.16*(t1222*t1391 + t1265*t1420) - 0.1944*t989;
  p_output1[10]=0.0329*t1017*t1477 - 0.1944*t1492 - 0.1422*t1539 - 0.2083*t1576 - 0.02*(t1391*t1539 + t1327*t1576) - 0.16*(t1420*t1539 + t1391*t1576);
  p_output1[11]=-0.1422*t1651 - 0.2083*t1664 - 0.02*(t1391*t1651 + t1327*t1664) - 0.16*(t1420*t1651 + t1391*t1664) + 0.1944*t1604*t533 + 0.0329*t1017*t1604*t933;
  p_output1[12]=-0.2083*t1743 - 0.1422*t1751 - 0.02*(t1327*t1743 + t1391*t1751) - 0.16*(t1391*t1743 + t1420*t1751) + 0.0817*t669*t80 - 0.0329*(-1.*t1017*t1604*t533*t80 - 1.*t1714*t669*t80) - 0.1944*t1604*t80*t933;
  p_output1[13]=-0.2083*t1808 - 0.1422*t1830 - 0.02*(t1327*t1808 + t1391*t1830) - 0.16*(t1391*t1808 + t1420*t1830) + 0.0817*t669*t939 - 0.1944*t1604*t933*t939 - 0.0329*(-1.*t1017*t1604*t533*t939 - 1.*t1714*t669*t939);
  p_output1[14]=0.0817*t1604 - 0.2083*t1911 - 0.1422*t1937 - 0.02*(t1327*t1911 + t1391*t1937) - 0.16*(t1391*t1911 + t1420*t1937) - 0.0329*(-1.*t1604*t1714 + t1017*t533*t669) + 0.1944*t669*t933;
  p_output1[15]=-0.1944*t1992 - 0.2083*t2017 - 0.1422*t2026 - 0.02*(t1327*t2017 + t1391*t2026) - 0.16*(t1391*t2017 + t1420*t2026) + 0.0817*t1604*t939 - 0.0329*(-1.*t1017*t1492 - 1.*t1604*t1714*t939);
  p_output1[16]=-0.1944*t1099 - 0.2083*t2095 - 0.1422*t2102 - 0.02*(t1327*t2095 + t1391*t2102) - 0.16*(t1391*t2095 + t1420*t2102) - 0.0817*t1604*t80 - 0.0329*(t2065 + t1604*t1714*t80);
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0.1422*t1117*t2135 - 0.2083*t1207*t2135 - 0.02*(t1207*t1327*t2135 - 1.*t1117*t1391*t2135) - 0.16*(t1207*t1391*t2135 - 1.*t1117*t1420*t2135) - 0.0329*(-1.*t1153*t2062 - 1.*t1017*t1604*t80);
  p_output1[37]=0.1422*t1117*t2210 - 0.2083*t1207*t2210 - 0.02*(t1207*t1327*t2210 - 1.*t1117*t1391*t2210) - 0.16*(t1207*t1391*t2210 - 1.*t1117*t1420*t2210) - 0.0329*(-1.*t1153*t2193 - 1.*t1017*t1604*t939);
  p_output1[38]=0.1422*t1117*t2271 - 0.2083*t1207*t2271 - 0.02*(t1207*t1327*t2271 - 1.*t1117*t1391*t2271) - 0.16*(t1207*t1391*t2271 - 1.*t1117*t1420*t2271) - 0.0329*(-1.*t1153*t1604*t533 + t1017*t669);
  p_output1[39]=-0.1422*t2319 - 0.2083*t2325 - 0.02*(t1391*t2319 + t1327*t2325) - 0.16*(t1420*t2319 + t1391*t2325);
  p_output1[40]=-0.1422*t2384 - 0.2083*t2400 - 0.02*(t1391*t2384 + t1327*t2400) - 0.16*(t1420*t2384 + t1391*t2400);
  p_output1[41]=-0.1422*t2434 - 0.2083*t2438 - 0.02*(t1391*t2434 + t1327*t2438) - 0.16*(t1420*t2434 + t1391*t2438);
  p_output1[42]=-0.02*(-1.*t1362*t2472 - 1.*t1303*t2481) - 0.16*(-1.*t1303*t2472 + t1362*t2481);
  p_output1[43]=-0.02*(-1.*t1362*t2515 - 1.*t1303*t2517) - 0.16*(-1.*t1303*t2515 + t1362*t2517);
  p_output1[44]=-0.02*(-1.*t1362*t2559 - 1.*t1303*t2568) - 0.16*(-1.*t1303*t2559 + t1362*t2568);
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

#include "Sj_2_func.hh"

namespace SymFunction
{

void Sj_2_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
