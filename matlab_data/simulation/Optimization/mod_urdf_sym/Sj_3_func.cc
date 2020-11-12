/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 13:00:30 GMT-05:00
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
  double t169;
  double t409;
  double t317;
  double t20;
  double t435;
  double t348;
  double t474;
  double t482;
  double t562;
  double t564;
  double t567;
  double t577;
  double t673;
  double t552;
  double t665;
  double t688;
  double t699;
  double t700;
  double t711;
  double t952;
  double t957;
  double t965;
  double t750;
  double t981;
  double t989;
  double t991;
  double t861;
  double t870;
  double t993;
  double t1019;
  double t1030;
  double t876;
  double t900;
  double t1159;
  double t1170;
  double t1180;
  double t1200;
  double t1306;
  double t1307;
  double t1314;
  double t1324;
  double t1333;
  double t1336;
  double t1449;
  double t1453;
  double t1471;
  double t1486;
  double t1514;
  double t1520;
  double t1642;
  double t1643;
  double t1654;
  double t1663;
  double t1681;
  double t1690;
  double t1806;
  double t1809;
  double t1812;
  double t1824;
  double t1871;
  double t1874;
  double t1878;
  double t1882;
  double t1885;
  double t1942;
  double t1944;
  double t1949;
  double t2008;
  double t2011;
  double t2027;
  double t2031;
  double t2033;
  double t2036;
  double t2099;
  double t2111;
  double t2125;
  double t2136;
  double t2138;
  double t2142;
  double t2148;
  double t2153;
  double t2161;
  double t1220;
  double t2196;
  double t2214;
  double t2258;
  double t2265;
  double t2267;
  double t2276;
  double t2294;
  double t2299;
  double t2164;
  double t2333;
  double t2342;
  double t2344;
  double t2346;
  double t2348;
  double t2352;
  double t2361;
  double t2221;
  double t2399;
  double t2409;
  double t2411;
  double t2414;
  double t2427;
  double t2430;
  double t2433;
  t169 = Cos(var1[5]);
  t409 = Sin(var1[3]);
  t317 = Sin(var1[4]);
  t20 = Cos(var1[3]);
  t435 = Sin(var1[5]);
  t348 = t20*t169*t317;
  t474 = t409*t435;
  t482 = t348 + t474;
  t562 = Cos(var1[6]);
  t564 = -1.*t169*t409*t317;
  t567 = t20*t435;
  t577 = t564 + t567;
  t673 = Sin(var1[6]);
  t552 = Cos(var1[7]);
  t665 = t562*t577;
  t688 = -1.*t673;
  t699 = 0. + t688;
  t700 = t482*t699;
  t711 = t665 + t700;
  t952 = -1.*t169*t409;
  t957 = t20*t317*t435;
  t965 = t952 + t957;
  t750 = 0. + t562;
  t981 = -1.*t20*t169;
  t989 = -1.*t409*t317*t435;
  t991 = t981 + t989;
  t861 = Cos(var1[8]);
  t870 = 0. + t861;
  t993 = t562*t991;
  t1019 = t965*t699;
  t1030 = t993 + t1019;
  t876 = Sin(var1[7]);
  t900 = Sin(var1[8]);
  t1159 = Cos(var1[4]);
  t1170 = -1.*t1159*t562*t409;
  t1180 = t20*t1159*t699;
  t1200 = t1170 + t1180;
  t1306 = t20*t1159*t169*t562;
  t1307 = t1159*t169*t409*t699;
  t1314 = t1306 + t1307;
  t1324 = t552*t1314;
  t1333 = -1.*t169*t317*t876;
  t1336 = t1324 + t1333;
  t1449 = t20*t1159*t562*t435;
  t1453 = t1159*t409*t435*t699;
  t1471 = t1449 + t1453;
  t1486 = t552*t1471;
  t1514 = -1.*t317*t435*t876;
  t1520 = t1486 + t1514;
  t1642 = -1.*t20*t562*t317;
  t1643 = -1.*t409*t317*t699;
  t1654 = t1642 + t1643;
  t1663 = t552*t1654;
  t1681 = -1.*t1159*t876;
  t1690 = t1663 + t1681;
  t1806 = t169*t409;
  t1809 = -1.*t20*t317*t435;
  t1812 = t1806 + t1809;
  t1824 = t562*t1812;
  t1871 = t991*t699;
  t1874 = t1824 + t1871;
  t1878 = t552*t1874;
  t1882 = -1.*t1159*t435*t876;
  t1885 = t1878 + t1882;
  t1942 = t169*t409*t317;
  t1944 = -1.*t20*t435;
  t1949 = t1942 + t1944;
  t2008 = t562*t482;
  t2011 = t1949*t699;
  t2027 = t2008 + t2011;
  t2031 = t552*t2027;
  t2033 = t1159*t169*t876;
  t2036 = t2031 + t2033;
  t2099 = -1.*t562*t1949;
  t2111 = -1.*t482*t673;
  t2125 = t2099 + t2111;
  t2136 = t20*t169;
  t2138 = t409*t317*t435;
  t2142 = t2136 + t2138;
  t2148 = -1.*t562*t2142;
  t2153 = -1.*t965*t673;
  t2161 = t2148 + t2153;
  t1220 = -1.*t1159*t409*t673;
  t2196 = -1.*t20*t1159*t673;
  t2214 = t1170 + t2196;
  t2258 = t1159*t169;
  t2265 = 0. + t2258;
  t2267 = t2265*t552;
  t2276 = 0. + t2008 + t2011;
  t2294 = -1.*t2276*t876;
  t2299 = t2267 + t2294;
  t2164 = t562*t965;
  t2333 = t1159*t435;
  t2342 = 0. + t2333;
  t2344 = t552*t2342;
  t2346 = t2142*t699;
  t2348 = 0. + t2164 + t2346;
  t2352 = -1.*t2348*t876;
  t2361 = t2344 + t2352;
  t2221 = t20*t1159*t562;
  t2399 = -1.*t317;
  t2409 = 0. + t2399;
  t2411 = t552*t2409;
  t2414 = t1159*t409*t699;
  t2427 = 0. + t2221 + t2414;
  t2430 = -1.*t2427*t876;
  t2433 = t2411 + t2430;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-0.0875*t482 - 0.25*t552*t711 - 0.037*(t577*t673 + t482*t750) - 0.27*(t552*t711*t870 - 1.*t711*t876*t900);
  p_output1[10]=-0.25*t1030*t552 - 0.27*(t1030*t552*t870 - 1.*t1030*t876*t900) - 0.0875*t965 - 0.037*(t750*t965 + t673*t991);
  p_output1[11]=-0.0875*t1159*t20 - 0.25*t1200*t552 - 0.037*(t1220 + t1159*t20*t750) - 0.27*(t1200*t552*t870 - 1.*t1200*t876*t900);
  p_output1[12]=-0.25*t1336 - 0.21935*t169*t317 - 0.0875*t1159*t169*t409 - 0.037*(t1159*t169*t20*t673 + t1159*t169*t409*t750) - 0.27*(t1336*t870 + (-1.*t169*t317*t552 - 1.*t1314*t876)*t900);
  p_output1[13]=-0.25*t1520 - 0.21935*t317*t435 - 0.0875*t1159*t409*t435 - 0.037*(t1159*t20*t435*t673 + t1159*t409*t435*t750) - 0.27*(t1520*t870 + (-1.*t317*t435*t552 - 1.*t1471*t876)*t900);
  p_output1[14]=-0.21935*t1159 - 0.25*t1690 + 0.0875*t317*t409 - 0.037*(-1.*t20*t317*t673 - 1.*t317*t409*t750) - 0.27*(t1690*t870 + (-1.*t1159*t552 - 1.*t1654*t876)*t900);
  p_output1[15]=-0.25*t1885 - 0.21935*t1159*t435 - 0.27*(t1885*t870 + (-1.*t1159*t435*t552 - 1.*t1874*t876)*t900) - 0.0875*t991 - 0.037*(t1812*t673 + t750*t991);
  p_output1[16]=0.21935*t1159*t169 - 0.0875*t1949 - 0.25*t2036 - 0.037*(t482*t673 + t1949*t750) - 0.27*(t2036*t870 + (t1159*t169*t552 - 1.*t2027*t876)*t900);
  p_output1[17]=0;
  p_output1[18]=-0.25*t2125*t552 - 0.037*(t2008 - 1.*t1949*t673) - 0.27*(t2125*t552*t870 - 1.*t2125*t876*t900);
  p_output1[19]=-0.25*t2161*t552 - 0.037*(t2164 - 1.*t2142*t673) - 0.27*(t2161*t552*t870 - 1.*t2161*t876*t900);
  p_output1[20]=-0.037*(t1220 + t2221) - 0.25*t2214*t552 - 0.27*(t2214*t552*t870 - 1.*t2214*t876*t900);
  p_output1[21]=-0.25*t2299 - 0.27*(t2299*t870 + (-1.*t2276*t552 - 1.*t2265*t876)*t900);
  p_output1[22]=-0.25*t2361 - 0.27*(t2361*t870 + (-1.*t2348*t552 - 1.*t2342*t876)*t900);
  p_output1[23]=-0.25*t2433 - 0.27*(t2433*t870 + (-1.*t2427*t552 - 1.*t2409*t876)*t900);
  p_output1[24]=-0.27*((0. + t2267 + t2294)*t861 - 1.*(0. + t2276*t552 + t2265*t876)*t900);
  p_output1[25]=-0.27*((0. + t2344 + t2352)*t861 - 1.*(0. + t2348*t552 + t2342*t876)*t900);
  p_output1[26]=-0.27*((0. + t2411 + t2430)*t861 - 1.*(0. + t2427*t552 + t2409*t876)*t900);
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
