/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 21:22:49 GMT-05:00
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
  double t778;
  double t57;
  double t367;
  double t239;
  double t842;
  double t773;
  double t961;
  double t1020;
  double t1111;
  double t1142;
  double t1220;
  double t1394;
  double t1364;
  double t1265;
  double t1306;
  double t1412;
  double t1415;
  double t1442;
  double t1459;
  double t1476;
  double t1583;
  double t1589;
  double t1563;
  double t1108;
  double t1677;
  double t1678;
  double t1680;
  double t1686;
  double t1699;
  double t1700;
  double t1661;
  double t1711;
  double t1715;
  double t1716;
  double t1725;
  double t1741;
  double t1749;
  double t1576;
  double t1577;
  double t1785;
  double t1797;
  double t1798;
  double t1803;
  double t1807;
  double t1808;
  double t1814;
  double t1937;
  double t1939;
  double t1954;
  double t1955;
  double t1957;
  double t1918;
  double t1966;
  double t1969;
  double t1972;
  double t1978;
  double t1992;
  double t1878;
  double t2051;
  double t2053;
  double t2059;
  double t2041;
  double t2066;
  double t2068;
  double t2072;
  double t2088;
  double t2094;
  double t2137;
  double t2140;
  double t2142;
  double t2136;
  double t2143;
  double t2144;
  double t2176;
  double t2177;
  double t2179;
  double t2263;
  double t2267;
  double t2268;
  double t2295;
  double t2296;
  double t2297;
  double t2294;
  double t2299;
  double t2300;
  double t2302;
  double t2306;
  double t2319;
  double t2380;
  double t2384;
  double t2389;
  double t2404;
  double t2413;
  double t2414;
  double t2403;
  double t2417;
  double t2419;
  double t2425;
  double t2434;
  double t2435;
  double t2484;
  double t2485;
  double t2486;
  double t2560;
  double t2569;
  double t2570;
  double t2609;
  double t2610;
  double t2612;
  double t2646;
  double t2659;
  double t2663;
  double t2697;
  double t2703;
  double t2699;
  double t2704;
  double t2707;
  double t2709;
  double t2712;
  double t2715;
  double t2578;
  double t2764;
  double t2775;
  double t2782;
  double t2766;
  double t2784;
  double t2785;
  double t2787;
  double t2788;
  double t2789;
  double t2669;
  double t2807;
  double t2812;
  double t2814;
  double t2818;
  double t2813;
  double t2819;
  double t2820;
  double t2822;
  double t2823;
  double t2826;
  double t2851;
  double t2852;
  double t2853;
  double t2857;
  double t2876;
  double t2877;
  double t2880;
  double t2903;
  double t2925;
  double t2928;
  double t2932;
  double t2937;
  t778 = Cos(var1[3]);
  t57 = Cos(var1[5]);
  t367 = Sin(var1[4]);
  t239 = Sin(var1[3]);
  t842 = Sin(var1[5]);
  t773 = -1.*t57*t239*t367;
  t961 = t778*t842;
  t1020 = t773 + t961;
  t1111 = t778*t57*t367;
  t1142 = t239*t842;
  t1220 = t1111 + t1142;
  t1394 = Cos(var1[16]);
  t1364 = Cos(var1[15]);
  t1265 = Sin(var1[16]);
  t1306 = t1265*t1020;
  t1412 = t1364*t1394*t1220;
  t1415 = t1306 + t1412;
  t1442 = t1394*t1020;
  t1459 = -1.*t1364*t1265*t1220;
  t1476 = t1442 + t1459;
  t1583 = Cos(var1[17]);
  t1589 = 0. + t1583;
  t1563 = Sin(var1[17]);
  t1108 = Sin(var1[15]);
  t1677 = -1.*t57*t239;
  t1678 = t778*t367*t842;
  t1680 = t1677 + t1678;
  t1686 = -1.*t778*t57;
  t1699 = -1.*t239*t367*t842;
  t1700 = t1686 + t1699;
  t1661 = 0. + t1563;
  t1711 = -1.*t1364*t1265*t1680;
  t1715 = t1394*t1700;
  t1716 = t1711 + t1715;
  t1725 = t1364*t1394*t1680;
  t1741 = t1265*t1700;
  t1749 = t1725 + t1741;
  t1576 = -1.*t1563;
  t1577 = 0. + t1576;
  t1785 = Cos(var1[4]);
  t1797 = -1.*t1364*t778*t1785*t1265;
  t1798 = -1.*t1394*t1785*t239;
  t1803 = t1797 + t1798;
  t1807 = t1364*t1394*t778*t1785;
  t1808 = -1.*t1785*t1265*t239;
  t1814 = t1807 + t1808;
  t1937 = t1364*t1785*t57*t239;
  t1939 = -1.*t1108;
  t1954 = 0. + t1939;
  t1955 = -1.*t57*t1954*t367;
  t1957 = t1937 + t1955;
  t1918 = t778*t1785*t57*t1265;
  t1966 = t1394*t1957;
  t1969 = t1918 + t1966;
  t1972 = t1394*t778*t1785*t57;
  t1978 = -1.*t1265*t1957;
  t1992 = t1972 + t1978;
  t1878 = 0. + t1364;
  t2051 = t1364*t1785*t239*t842;
  t2053 = -1.*t1954*t367*t842;
  t2059 = t2051 + t2053;
  t2041 = t778*t1785*t1265*t842;
  t2066 = t1394*t2059;
  t2068 = t2041 + t2066;
  t2072 = t1394*t778*t1785*t842;
  t2088 = -1.*t1265*t2059;
  t2094 = t2072 + t2088;
  t2137 = -1.*t1785*t1954;
  t2140 = -1.*t1364*t239*t367;
  t2142 = t2137 + t2140;
  t2136 = -1.*t778*t1265*t367;
  t2143 = t1394*t2142;
  t2144 = t2136 + t2143;
  t2176 = -1.*t1394*t778*t367;
  t2177 = -1.*t1265*t2142;
  t2179 = t2176 + t2177;
  t2263 = t57*t239;
  t2267 = -1.*t778*t367*t842;
  t2268 = t2263 + t2267;
  t2295 = -1.*t1785*t1954*t842;
  t2296 = t1364*t1700;
  t2297 = t2295 + t2296;
  t2294 = t1265*t2268;
  t2299 = t1394*t2297;
  t2300 = t2294 + t2299;
  t2302 = t1394*t2268;
  t2306 = -1.*t1265*t2297;
  t2319 = t2302 + t2306;
  t2380 = t57*t239*t367;
  t2384 = -1.*t778*t842;
  t2389 = t2380 + t2384;
  t2404 = t1785*t57*t1954;
  t2413 = t1364*t2389;
  t2414 = t2404 + t2413;
  t2403 = t1265*t1220;
  t2417 = t1394*t2414;
  t2419 = t2403 + t2417;
  t2425 = t1394*t1220;
  t2434 = -1.*t1265*t2414;
  t2435 = t2425 + t2434;
  t2484 = -1.*t1364*t1785*t57;
  t2485 = -1.*t1108*t2389;
  t2486 = t2484 + t2485;
  t2560 = t778*t57;
  t2569 = t239*t367*t842;
  t2570 = t2560 + t2569;
  t2609 = -1.*t1364*t1785*t842;
  t2610 = -1.*t1108*t2570;
  t2612 = t2609 + t2610;
  t2646 = -1.*t1785*t1108*t239;
  t2659 = t1364*t367;
  t2663 = t2646 + t2659;
  t2697 = 0. + t1111 + t1142;
  t2703 = 0. + t2404 + t2413;
  t2699 = -1.*t1265*t2697;
  t2704 = -1.*t1394*t2703;
  t2707 = t2699 + t2704;
  t2709 = t1394*t2697;
  t2712 = -1.*t1265*t2703;
  t2715 = t2709 + t2712;
  t2578 = t1364*t2570;
  t2764 = 0. + t1677 + t1678;
  t2775 = t1785*t1954*t842;
  t2782 = 0. + t2775 + t2578;
  t2766 = -1.*t1265*t2764;
  t2784 = -1.*t1394*t2782;
  t2785 = t2766 + t2784;
  t2787 = t1394*t2764;
  t2788 = -1.*t1265*t2782;
  t2789 = t2787 + t2788;
  t2669 = t1364*t1785*t239;
  t2807 = t778*t1785;
  t2812 = 0. + t2807;
  t2814 = -1.*t1954*t367;
  t2818 = 0. + t2669 + t2814;
  t2813 = -1.*t2812*t1265;
  t2819 = -1.*t1394*t2818;
  t2820 = t2813 + t2819;
  t2822 = t1394*t2812;
  t2823 = -1.*t1265*t2818;
  t2826 = t2822 + t2823;
  t2851 = t1265*t2697;
  t2852 = t1394*t2703;
  t2853 = 0. + t2851 + t2852;
  t2857 = 0. + t2709 + t2712;
  t2876 = t1265*t2764;
  t2877 = t1394*t2782;
  t2880 = 0. + t2876 + t2877;
  t2903 = 0. + t2787 + t2788;
  t2925 = t2812*t1265;
  t2928 = t1394*t2818;
  t2932 = 0. + t2925 + t2928;
  t2937 = 0. + t2822 + t2823;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-0.1944*t1020 + 0.035199999999999995*t1108*t1220 - 0.2083*t1415 - 0.1422*t1476 - 0.02*(t1415*t1577 + t1476*t1589) - 0.16*(t1415*t1589 + t1476*t1661);
  p_output1[10]=0.035199999999999995*t1108*t1680 - 0.1944*t1700 - 0.1422*t1716 - 0.2083*t1749 - 0.02*(t1589*t1716 + t1577*t1749) - 0.16*(t1661*t1716 + t1589*t1749);
  p_output1[11]=-0.1422*t1803 - 0.2083*t1814 - 0.02*(t1589*t1803 + t1577*t1814) - 0.16*(t1661*t1803 + t1589*t1814) + 0.1944*t1785*t239 + 0.035199999999999995*t1108*t1785*t778;
  p_output1[12]=-0.2083*t1969 - 0.1422*t1992 - 0.02*(t1577*t1969 + t1589*t1992) - 0.16*(t1589*t1969 + t1661*t1992) - 0.0817*t367*t57 + 0.035199999999999995*(t1108*t1785*t239*t57 - 1.*t1878*t367*t57) - 0.1944*t1785*t57*t778;
  p_output1[13]=-0.2083*t2068 - 0.1422*t2094 - 0.02*(t1577*t2068 + t1589*t2094) - 0.16*(t1589*t2068 + t1661*t2094) - 0.0817*t367*t842 - 0.1944*t1785*t778*t842 + 0.035199999999999995*(t1108*t1785*t239*t842 - 1.*t1878*t367*t842);
  p_output1[14]=-0.0817*t1785 - 0.2083*t2144 - 0.1422*t2179 - 0.02*(t1577*t2144 + t1589*t2179) - 0.16*(t1589*t2144 + t1661*t2179) + 0.035199999999999995*(-1.*t1785*t1878 - 1.*t1108*t239*t367) + 0.1944*t367*t778;
  p_output1[15]=-0.1944*t2268 - 0.2083*t2300 - 0.1422*t2319 - 0.02*(t1577*t2300 + t1589*t2319) - 0.16*(t1589*t2300 + t1661*t2319) - 0.0817*t1785*t842 + 0.035199999999999995*(t1108*t1700 - 1.*t1785*t1878*t842);
  p_output1[16]=-0.1944*t1220 - 0.2083*t2419 - 0.1422*t2435 - 0.02*(t1577*t2419 + t1589*t2435) - 0.16*(t1589*t2419 + t1661*t2435) + 0.0817*t1785*t57 + 0.035199999999999995*(t1108*t2389 + t1785*t1878*t57);
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
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0.1422*t1265*t2486 - 0.2083*t1394*t2486 - 0.02*(t1394*t1577*t2486 - 1.*t1265*t1589*t2486) - 0.16*(t1394*t1589*t2486 - 1.*t1265*t1661*t2486) + 0.035199999999999995*(t2413 - 1.*t1108*t1785*t57);
  p_output1[46]=0.1422*t1265*t2612 - 0.2083*t1394*t2612 - 0.02*(t1394*t1577*t2612 - 1.*t1265*t1589*t2612) - 0.16*(t1394*t1589*t2612 - 1.*t1265*t1661*t2612) + 0.035199999999999995*(t2578 - 1.*t1108*t1785*t842);
  p_output1[47]=0.1422*t1265*t2663 - 0.2083*t1394*t2663 - 0.02*(t1394*t1577*t2663 - 1.*t1265*t1589*t2663) - 0.16*(t1394*t1589*t2663 - 1.*t1265*t1661*t2663) + 0.035199999999999995*(t2669 + t1108*t367);
  p_output1[48]=-0.1422*t2707 - 0.2083*t2715 - 0.02*(t1589*t2707 + t1577*t2715) - 0.16*(t1661*t2707 + t1589*t2715);
  p_output1[49]=-0.1422*t2785 - 0.2083*t2789 - 0.02*(t1589*t2785 + t1577*t2789) - 0.16*(t1661*t2785 + t1589*t2789);
  p_output1[50]=-0.1422*t2820 - 0.2083*t2826 - 0.02*(t1589*t2820 + t1577*t2826) - 0.16*(t1661*t2820 + t1589*t2826);
  p_output1[51]=-0.02*(-1.*t1583*t2853 - 1.*t1563*t2857) - 0.16*(-1.*t1563*t2853 + t1583*t2857);
  p_output1[52]=-0.02*(-1.*t1583*t2880 - 1.*t1563*t2903) - 0.16*(-1.*t1563*t2880 + t1583*t2903);
  p_output1[53]=-0.02*(-1.*t1583*t2932 - 1.*t1563*t2937) - 0.16*(-1.*t1563*t2932 + t1583*t2937);
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

#include "Sj_4_func.hh"

namespace SymFunction
{

void Sj_4_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
