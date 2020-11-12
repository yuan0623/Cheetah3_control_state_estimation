/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 21:22:42 GMT-05:00
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
  double t910;
  double t539;
  double t808;
  double t674;
  double t912;
  double t819;
  double t929;
  double t933;
  double t989;
  double t997;
  double t1004;
  double t1090;
  double t1039;
  double t1032;
  double t1035;
  double t1093;
  double t1099;
  double t1117;
  double t1126;
  double t1142;
  double t1214;
  double t1216;
  double t1165;
  double t975;
  double t1304;
  double t1309;
  double t1322;
  double t1328;
  double t1329;
  double t1330;
  double t1253;
  double t1355;
  double t1362;
  double t1391;
  double t1406;
  double t1412;
  double t1415;
  double t1180;
  double t1199;
  double t1483;
  double t1503;
  double t1507;
  double t1516;
  double t1535;
  double t1538;
  double t1539;
  double t1614;
  double t1624;
  double t1638;
  double t1640;
  double t1646;
  double t1608;
  double t1650;
  double t1651;
  double t1661;
  double t1662;
  double t1663;
  double t1602;
  double t1718;
  double t1720;
  double t1722;
  double t1716;
  double t1724;
  double t1725;
  double t1727;
  double t1728;
  double t1730;
  double t1779;
  double t1781;
  double t1782;
  double t1777;
  double t1785;
  double t1786;
  double t1790;
  double t1793;
  double t1797;
  double t1830;
  double t1837;
  double t1838;
  double t1854;
  double t1855;
  double t1859;
  double t1852;
  double t1867;
  double t1869;
  double t1871;
  double t1873;
  double t1874;
  double t1939;
  double t1943;
  double t1953;
  double t1959;
  double t1963;
  double t1964;
  double t1958;
  double t1966;
  double t1969;
  double t1972;
  double t1977;
  double t1978;
  double t2007;
  double t2009;
  double t2011;
  double t2041;
  double t2042;
  double t2046;
  double t2054;
  double t2055;
  double t2056;
  double t2090;
  double t2091;
  double t2093;
  double t2120;
  double t2124;
  double t2123;
  double t2126;
  double t2127;
  double t2130;
  double t2131;
  double t2132;
  double t2049;
  double t2145;
  double t2158;
  double t2162;
  double t2146;
  double t2168;
  double t2176;
  double t2179;
  double t2180;
  double t2183;
  double t2097;
  double t2215;
  double t2224;
  double t2232;
  double t2233;
  double t2231;
  double t2236;
  double t2243;
  double t2250;
  double t2251;
  double t2256;
  double t2277;
  double t2278;
  double t2279;
  double t2289;
  double t2302;
  double t2306;
  double t2307;
  double t2311;
  double t2326;
  double t2331;
  double t2332;
  double t2334;
  t910 = Cos(var1[3]);
  t539 = Cos(var1[5]);
  t808 = Sin(var1[4]);
  t674 = Sin(var1[3]);
  t912 = Sin(var1[5]);
  t819 = -1.*t539*t674*t808;
  t929 = t910*t912;
  t933 = t819 + t929;
  t989 = t910*t539*t808;
  t997 = t674*t912;
  t1004 = t989 + t997;
  t1090 = Cos(var1[10]);
  t1039 = Cos(var1[9]);
  t1032 = Sin(var1[10]);
  t1035 = t1032*t933;
  t1093 = t1039*t1090*t1004;
  t1099 = t1035 + t1093;
  t1117 = t1090*t933;
  t1126 = -1.*t1039*t1032*t1004;
  t1142 = t1117 + t1126;
  t1214 = Cos(var1[11]);
  t1216 = 0. + t1214;
  t1165 = Sin(var1[11]);
  t975 = Sin(var1[9]);
  t1304 = -1.*t539*t674;
  t1309 = t910*t808*t912;
  t1322 = t1304 + t1309;
  t1328 = -1.*t910*t539;
  t1329 = -1.*t674*t808*t912;
  t1330 = t1328 + t1329;
  t1253 = 0. + t1165;
  t1355 = -1.*t1039*t1032*t1322;
  t1362 = t1090*t1330;
  t1391 = t1355 + t1362;
  t1406 = t1039*t1090*t1322;
  t1412 = t1032*t1330;
  t1415 = t1406 + t1412;
  t1180 = -1.*t1165;
  t1199 = 0. + t1180;
  t1483 = Cos(var1[4]);
  t1503 = -1.*t1039*t910*t1483*t1032;
  t1507 = -1.*t1090*t1483*t674;
  t1516 = t1503 + t1507;
  t1535 = t1039*t1090*t910*t1483;
  t1538 = -1.*t1483*t1032*t674;
  t1539 = t1535 + t1538;
  t1614 = t1039*t1483*t539*t674;
  t1624 = -1.*t975;
  t1638 = 0. + t1624;
  t1640 = -1.*t539*t1638*t808;
  t1646 = t1614 + t1640;
  t1608 = t910*t1483*t539*t1032;
  t1650 = t1090*t1646;
  t1651 = t1608 + t1650;
  t1661 = t1090*t910*t1483*t539;
  t1662 = -1.*t1032*t1646;
  t1663 = t1661 + t1662;
  t1602 = 0. + t1039;
  t1718 = t1039*t1483*t674*t912;
  t1720 = -1.*t1638*t808*t912;
  t1722 = t1718 + t1720;
  t1716 = t910*t1483*t1032*t912;
  t1724 = t1090*t1722;
  t1725 = t1716 + t1724;
  t1727 = t1090*t910*t1483*t912;
  t1728 = -1.*t1032*t1722;
  t1730 = t1727 + t1728;
  t1779 = -1.*t1483*t1638;
  t1781 = -1.*t1039*t674*t808;
  t1782 = t1779 + t1781;
  t1777 = -1.*t910*t1032*t808;
  t1785 = t1090*t1782;
  t1786 = t1777 + t1785;
  t1790 = -1.*t1090*t910*t808;
  t1793 = -1.*t1032*t1782;
  t1797 = t1790 + t1793;
  t1830 = t539*t674;
  t1837 = -1.*t910*t808*t912;
  t1838 = t1830 + t1837;
  t1854 = -1.*t1483*t1638*t912;
  t1855 = t1039*t1330;
  t1859 = t1854 + t1855;
  t1852 = t1032*t1838;
  t1867 = t1090*t1859;
  t1869 = t1852 + t1867;
  t1871 = t1090*t1838;
  t1873 = -1.*t1032*t1859;
  t1874 = t1871 + t1873;
  t1939 = t539*t674*t808;
  t1943 = -1.*t910*t912;
  t1953 = t1939 + t1943;
  t1959 = t1483*t539*t1638;
  t1963 = t1039*t1953;
  t1964 = t1959 + t1963;
  t1958 = t1032*t1004;
  t1966 = t1090*t1964;
  t1969 = t1958 + t1966;
  t1972 = t1090*t1004;
  t1977 = -1.*t1032*t1964;
  t1978 = t1972 + t1977;
  t2007 = -1.*t1039*t1483*t539;
  t2009 = -1.*t975*t1953;
  t2011 = t2007 + t2009;
  t2041 = t910*t539;
  t2042 = t674*t808*t912;
  t2046 = t2041 + t2042;
  t2054 = -1.*t1039*t1483*t912;
  t2055 = -1.*t975*t2046;
  t2056 = t2054 + t2055;
  t2090 = -1.*t1483*t975*t674;
  t2091 = t1039*t808;
  t2093 = t2090 + t2091;
  t2120 = 0. + t989 + t997;
  t2124 = 0. + t1959 + t1963;
  t2123 = -1.*t1032*t2120;
  t2126 = -1.*t1090*t2124;
  t2127 = t2123 + t2126;
  t2130 = t1090*t2120;
  t2131 = -1.*t1032*t2124;
  t2132 = t2130 + t2131;
  t2049 = t1039*t2046;
  t2145 = 0. + t1304 + t1309;
  t2158 = t1483*t1638*t912;
  t2162 = 0. + t2158 + t2049;
  t2146 = -1.*t1032*t2145;
  t2168 = -1.*t1090*t2162;
  t2176 = t2146 + t2168;
  t2179 = t1090*t2145;
  t2180 = -1.*t1032*t2162;
  t2183 = t2179 + t2180;
  t2097 = t1039*t1483*t674;
  t2215 = t910*t1483;
  t2224 = 0. + t2215;
  t2232 = -1.*t1638*t808;
  t2233 = 0. + t2097 + t2232;
  t2231 = -1.*t2224*t1032;
  t2236 = -1.*t1090*t2233;
  t2243 = t2231 + t2236;
  t2250 = t1090*t2224;
  t2251 = -1.*t1032*t2233;
  t2256 = t2250 + t2251;
  t2277 = t1032*t2120;
  t2278 = t1090*t2124;
  t2279 = 0. + t2277 + t2278;
  t2289 = 0. + t2130 + t2131;
  t2302 = t1032*t2145;
  t2306 = t1090*t2162;
  t2307 = 0. + t2302 + t2306;
  t2311 = 0. + t2179 + t2180;
  t2326 = t2224*t1032;
  t2331 = t1090*t2233;
  t2332 = 0. + t2326 + t2331;
  t2334 = 0. + t2250 + t2251;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-0.2083*t1099 - 0.1422*t1142 - 0.02*(t1099*t1199 + t1142*t1216) - 0.16*(t1099*t1216 + t1142*t1253) + 0.2429*t933 + 0.035199999999999995*t1004*t975;
  p_output1[10]=0.2429*t1330 - 0.1422*t1391 - 0.2083*t1415 - 0.02*(t1216*t1391 + t1199*t1415) - 0.16*(t1253*t1391 + t1216*t1415) + 0.035199999999999995*t1322*t975;
  p_output1[11]=-0.1422*t1516 - 0.2083*t1539 - 0.02*(t1216*t1516 + t1199*t1539) - 0.16*(t1253*t1516 + t1216*t1539) - 0.2429*t1483*t674 + 0.035199999999999995*t1483*t910*t975;
  p_output1[12]=-0.2083*t1651 - 0.1422*t1663 - 0.02*(t1199*t1651 + t1216*t1663) - 0.16*(t1216*t1651 + t1253*t1663) - 0.0817*t539*t808 + 0.2429*t1483*t539*t910 + 0.035199999999999995*(-1.*t1602*t539*t808 + t1483*t539*t674*t975);
  p_output1[13]=-0.2083*t1725 - 0.1422*t1730 - 0.02*(t1199*t1725 + t1216*t1730) - 0.16*(t1216*t1725 + t1253*t1730) - 0.0817*t808*t912 + 0.2429*t1483*t910*t912 + 0.035199999999999995*(-1.*t1602*t808*t912 + t1483*t674*t912*t975);
  p_output1[14]=-0.0817*t1483 - 0.2083*t1786 - 0.1422*t1797 - 0.02*(t1199*t1786 + t1216*t1797) - 0.16*(t1216*t1786 + t1253*t1797) - 0.2429*t808*t910 + 0.035199999999999995*(-1.*t1483*t1602 - 1.*t674*t808*t975);
  p_output1[15]=0.2429*t1838 - 0.2083*t1869 - 0.1422*t1874 - 0.02*(t1199*t1869 + t1216*t1874) - 0.16*(t1216*t1869 + t1253*t1874) - 0.0817*t1483*t912 + 0.035199999999999995*(-1.*t1483*t1602*t912 + t1330*t975);
  p_output1[16]=0.2429*t1004 - 0.2083*t1969 - 0.1422*t1978 - 0.02*(t1199*t1969 + t1216*t1978) - 0.16*(t1216*t1969 + t1253*t1978) + 0.0817*t1483*t539 + 0.035199999999999995*(t1483*t1602*t539 + t1953*t975);
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
  p_output1[27]=0.1422*t1032*t2011 - 0.2083*t1090*t2011 - 0.02*(t1090*t1199*t2011 - 1.*t1032*t1216*t2011) - 0.16*(t1090*t1216*t2011 - 1.*t1032*t1253*t2011) + 0.035199999999999995*(t1963 - 1.*t1483*t539*t975);
  p_output1[28]=0.1422*t1032*t2056 - 0.2083*t1090*t2056 - 0.02*(t1090*t1199*t2056 - 1.*t1032*t1216*t2056) - 0.16*(t1090*t1216*t2056 - 1.*t1032*t1253*t2056) + 0.035199999999999995*(t2049 - 1.*t1483*t912*t975);
  p_output1[29]=0.1422*t1032*t2093 - 0.2083*t1090*t2093 - 0.02*(t1090*t1199*t2093 - 1.*t1032*t1216*t2093) - 0.16*(t1090*t1216*t2093 - 1.*t1032*t1253*t2093) + 0.035199999999999995*(t2097 + t808*t975);
  p_output1[30]=-0.1422*t2127 - 0.2083*t2132 - 0.02*(t1216*t2127 + t1199*t2132) - 0.16*(t1253*t2127 + t1216*t2132);
  p_output1[31]=-0.1422*t2176 - 0.2083*t2183 - 0.02*(t1216*t2176 + t1199*t2183) - 0.16*(t1253*t2176 + t1216*t2183);
  p_output1[32]=-0.1422*t2243 - 0.2083*t2256 - 0.02*(t1216*t2243 + t1199*t2256) - 0.16*(t1253*t2243 + t1216*t2256);
  p_output1[33]=-0.02*(-1.*t1214*t2279 - 1.*t1165*t2289) - 0.16*(-1.*t1165*t2279 + t1214*t2289);
  p_output1[34]=-0.02*(-1.*t1214*t2307 - 1.*t1165*t2311) - 0.16*(-1.*t1165*t2307 + t1214*t2311);
  p_output1[35]=-0.02*(-1.*t1214*t2332 - 1.*t1165*t2334) - 0.16*(-1.*t1165*t2332 + t1214*t2334);
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

#include "Sj_1_func.hh"

namespace SymFunction
{

void Sj_1_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
