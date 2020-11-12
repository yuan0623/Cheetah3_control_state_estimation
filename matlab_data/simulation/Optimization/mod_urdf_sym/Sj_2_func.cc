/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 13:00:28 GMT-05:00
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
  double t183;
  double t319;
  double t293;
  double t145;
  double t346;
  double t317;
  double t348;
  double t351;
  double t517;
  double t438;
  double t474;
  double t482;
  double t434;
  double t611;
  double t665;
  double t669;
  double t682;
  double t688;
  double t690;
  double t869;
  double t870;
  double t871;
  double t545;
  double t887;
  double t888;
  double t900;
  double t700;
  double t704;
  double t876;
  double t904;
  double t905;
  double t717;
  double t740;
  double t1013;
  double t1030;
  double t1034;
  double t1043;
  double t1221;
  double t1224;
  double t1228;
  double t1232;
  double t1233;
  double t1238;
  double t1334;
  double t1336;
  double t1342;
  double t1344;
  double t1345;
  double t1358;
  double t1486;
  double t1487;
  double t1509;
  double t1512;
  double t1514;
  double t1520;
  double t1598;
  double t1603;
  double t1611;
  double t1656;
  double t1663;
  double t1681;
  double t1692;
  double t1698;
  double t1702;
  double t1747;
  double t1768;
  double t1771;
  double t1822;
  double t1824;
  double t1837;
  double t1844;
  double t1871;
  double t1877;
  double t1936;
  double t1939;
  double t1940;
  double t1971;
  double t1972;
  double t1980;
  double t1969;
  double t1988;
  double t1991;
  double t1056;
  double t2043;
  double t2046;
  double t2099;
  double t2101;
  double t2115;
  double t2111;
  double t2120;
  double t2123;
  double t2003;
  double t2142;
  double t2146;
  double t2153;
  double t2154;
  double t2148;
  double t2157;
  double t2159;
  double t2056;
  double t2181;
  double t2182;
  double t2188;
  double t2195;
  double t2184;
  double t2196;
  double t2206;
  t183 = Cos(var1[5]);
  t319 = Sin(var1[3]);
  t293 = Sin(var1[4]);
  t145 = Cos(var1[3]);
  t346 = Sin(var1[5]);
  t317 = t145*t183*t293;
  t348 = t319*t346;
  t351 = t317 + t348;
  t517 = Cos(var1[12]);
  t438 = -1.*t183*t319*t293;
  t474 = t145*t346;
  t482 = t438 + t474;
  t434 = Sin(var1[12]);
  t611 = Cos(var1[13]);
  t665 = t517*t482;
  t669 = -1.*t434;
  t682 = 0. + t669;
  t688 = t682*t351;
  t690 = t665 + t688;
  t869 = -1.*t183*t319;
  t870 = t145*t293*t346;
  t871 = t869 + t870;
  t545 = 0. + t517;
  t887 = -1.*t145*t183;
  t888 = -1.*t319*t293*t346;
  t900 = t887 + t888;
  t700 = Cos(var1[14]);
  t704 = 0. + t700;
  t876 = t682*t871;
  t904 = t517*t900;
  t905 = t876 + t904;
  t717 = Sin(var1[13]);
  t740 = Sin(var1[14]);
  t1013 = Cos(var1[4]);
  t1030 = t145*t1013*t682;
  t1034 = -1.*t517*t1013*t319;
  t1043 = t1030 + t1034;
  t1221 = t517*t145*t1013*t183;
  t1224 = t1013*t183*t682*t319;
  t1228 = t1221 + t1224;
  t1232 = t611*t1228;
  t1233 = -1.*t183*t717*t293;
  t1238 = t1232 + t1233;
  t1334 = -1.*t717*t293*t346;
  t1336 = t517*t145*t1013*t346;
  t1342 = t1013*t682*t319*t346;
  t1344 = t1336 + t1342;
  t1345 = t611*t1344;
  t1358 = t1334 + t1345;
  t1486 = -1.*t1013*t717;
  t1487 = -1.*t517*t145*t293;
  t1509 = -1.*t682*t319*t293;
  t1512 = t1487 + t1509;
  t1514 = t611*t1512;
  t1520 = t1486 + t1514;
  t1598 = t183*t319;
  t1603 = -1.*t145*t293*t346;
  t1611 = t1598 + t1603;
  t1656 = -1.*t1013*t717*t346;
  t1663 = t517*t1611;
  t1681 = t682*t900;
  t1692 = t1663 + t1681;
  t1698 = t611*t1692;
  t1702 = t1656 + t1698;
  t1747 = t183*t319*t293;
  t1768 = -1.*t145*t346;
  t1771 = t1747 + t1768;
  t1822 = t1013*t183*t717;
  t1824 = t682*t1771;
  t1837 = t517*t351;
  t1844 = t1824 + t1837;
  t1871 = t611*t1844;
  t1877 = t1822 + t1871;
  t1936 = -1.*t517*t1771;
  t1939 = -1.*t434*t351;
  t1940 = t1936 + t1939;
  t1971 = t145*t183;
  t1972 = t319*t293*t346;
  t1980 = t1971 + t1972;
  t1969 = -1.*t434*t871;
  t1988 = -1.*t517*t1980;
  t1991 = t1969 + t1988;
  t1056 = -1.*t1013*t434*t319;
  t2043 = -1.*t145*t1013*t434;
  t2046 = t2043 + t1034;
  t2099 = t1013*t183;
  t2101 = 0. + t2099;
  t2115 = 0. + t1824 + t1837;
  t2111 = t611*t2101;
  t2120 = -1.*t717*t2115;
  t2123 = t2111 + t2120;
  t2003 = t517*t871;
  t2142 = t1013*t346;
  t2146 = 0. + t2142;
  t2153 = t682*t1980;
  t2154 = 0. + t2003 + t2153;
  t2148 = t611*t2146;
  t2157 = -1.*t717*t2154;
  t2159 = t2148 + t2157;
  t2056 = t517*t145*t1013;
  t2181 = t1013*t682*t319;
  t2182 = 0. + t2056 + t2181;
  t2188 = -1.*t293;
  t2195 = 0. + t2188;
  t2184 = -1.*t717*t2182;
  t2196 = t611*t2195;
  t2206 = t2184 + t2196;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-0.0875*t351 - 0.037*(t434*t482 + t351*t545) - 0.25*t611*t690 - 0.27*(t611*t690*t704 - 1.*t690*t717*t740);
  p_output1[10]=-0.0875*t871 - 0.037*(t545*t871 + t434*t900) - 0.25*t611*t905 - 0.27*(t611*t704*t905 - 1.*t717*t740*t905);
  p_output1[11]=-0.0875*t1013*t145 - 0.037*(t1056 + t1013*t145*t545) - 0.25*t1043*t611 - 0.27*(t1043*t611*t704 - 1.*t1043*t717*t740);
  p_output1[12]=-0.25*t1238 + 0.21935*t183*t293 - 0.0875*t1013*t183*t319 - 0.037*(t1013*t145*t183*t434 + t1013*t183*t319*t545) - 0.27*(t1238*t704 + (-1.*t183*t293*t611 - 1.*t1228*t717)*t740);
  p_output1[13]=-0.25*t1358 + 0.21935*t293*t346 - 0.0875*t1013*t319*t346 - 0.037*(t1013*t145*t346*t434 + t1013*t319*t346*t545) - 0.27*(t1358*t704 + (-1.*t293*t346*t611 - 1.*t1344*t717)*t740);
  p_output1[14]=0.21935*t1013 - 0.25*t1520 + 0.0875*t293*t319 - 0.037*(-1.*t145*t293*t434 - 1.*t293*t319*t545) - 0.27*(t1520*t704 + (-1.*t1013*t611 - 1.*t1512*t717)*t740);
  p_output1[15]=-0.25*t1702 + 0.21935*t1013*t346 - 0.27*(t1702*t704 + (-1.*t1013*t346*t611 - 1.*t1692*t717)*t740) - 0.0875*t900 - 0.037*(t1611*t434 + t545*t900);
  p_output1[16]=-0.0875*t1771 - 0.21935*t1013*t183 - 0.25*t1877 - 0.037*(t351*t434 + t1771*t545) - 0.27*(t1877*t704 + (t1013*t183*t611 - 1.*t1844*t717)*t740);
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
  p_output1[36]=-0.037*(t1837 - 1.*t1771*t434) - 0.25*t1940*t611 - 0.27*(t1940*t611*t704 - 1.*t1940*t717*t740);
  p_output1[37]=-0.037*(t2003 - 1.*t1980*t434) - 0.25*t1991*t611 - 0.27*(t1991*t611*t704 - 1.*t1991*t717*t740);
  p_output1[38]=-0.037*(t1056 + t2056) - 0.25*t2046*t611 - 0.27*(t2046*t611*t704 - 1.*t2046*t717*t740);
  p_output1[39]=-0.25*t2123 - 0.27*(t2123*t704 + (-1.*t2115*t611 - 1.*t2101*t717)*t740);
  p_output1[40]=-0.25*t2159 - 0.27*(t2159*t704 + (-1.*t2154*t611 - 1.*t2146*t717)*t740);
  p_output1[41]=-0.25*t2206 - 0.27*(t2206*t704 + (-1.*t2182*t611 - 1.*t2195*t717)*t740);
  p_output1[42]=-0.27*((0. + t2111 + t2120)*t700 - 1.*(0. + t2115*t611 + t2101*t717)*t740);
  p_output1[43]=-0.27*((0. + t2148 + t2157)*t700 - 1.*(0. + t2154*t611 + t2146*t717)*t740);
  p_output1[44]=-0.27*((0. + t2184 + t2196)*t700 - 1.*(0. + t2182*t611 + t2195*t717)*t740);
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
