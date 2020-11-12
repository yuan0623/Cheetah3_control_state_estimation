/*
 * Automatically Generated from Mathematica.
 * Mon 29 Jul 2019 15:07:44 GMT-04:00
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
  double t128;
  double t109;
  double t264;
  double t223;
  double t217;
  double t270;
  double t326;
  double t376;
  double t386;
  double t405;
  double t410;
  double t231;
  double t288;
  double t426;
  double t489;
  double t434;
  double t437;
  double t470;
  double t471;
  double t491;
  double t515;
  double t522;
  double t539;
  double t484;
  double t492;
  double t507;
  double t557;
  double t570;
  double t586;
  double t333;
  double t734;
  double t735;
  double t736;
  double t718;
  double t719;
  double t794;
  double t764;
  double t784;
  double t786;
  double t815;
  double t830;
  double t832;
  double t787;
  double t800;
  double t805;
  double t589;
  double t600;
  double t663;
  double t996;
  double t999;
  double t964;
  double t969;
  double t970;
  double t1044;
  double t1049;
  double t1067;
  double t984;
  double t1005;
  double t1013;
  double t308;
  double t324;
  double t1178;
  double t1162;
  double t1214;
  double t1207;
  double t1216;
  double t1230;
  double t1233;
  double t1239;
  double t1243;
  double t1210;
  double t1248;
  double t1275;
  double t1277;
  double t1283;
  double t1295;
  double t1314;
  double t1320;
  double t1300;
  double t722;
  double t727;
  double t1171;
  double t1456;
  double t1459;
  double t1466;
  double t1301;
  double t1306;
  double t1447;
  double t1467;
  double t1470;
  double t1475;
  double t1478;
  double t1479;
  double t1362;
  double t935;
  double t1565;
  double t1590;
  double t1595;
  double t1564;
  double t1612;
  double t1613;
  double t1622;
  double t1623;
  double t1631;
  double t1146;
  double t1714;
  double t1694;
  double t1773;
  double t1753;
  double t1774;
  double t1777;
  double t1783;
  double t1785;
  double t1789;
  double t1772;
  double t1790;
  double t1797;
  double t1807;
  double t1813;
  double t1814;
  double t1902;
  double t1905;
  double t1882;
  double t1373;
  double t1703;
  double t1979;
  double t2001;
  double t2012;
  double t1890;
  double t1891;
  double t1973;
  double t2014;
  double t2023;
  double t2044;
  double t2045;
  double t2048;
  double t1942;
  double t1547;
  double t2147;
  double t2151;
  double t2152;
  double t2143;
  double t2154;
  double t2159;
  double t2175;
  double t2190;
  double t2193;
  t128 = Cos(var1[5]);
  t109 = Cos(var1[4]);
  t264 = Sin(var1[3]);
  t223 = Sin(var1[4]);
  t217 = Cos(var1[3]);
  t270 = Sin(var1[5]);
  t326 = Cos(var1[6]);
  t376 = t128*t264*t223;
  t386 = -1.*t217*t270;
  t405 = t376 + t386;
  t410 = Sin(var1[6]);
  t231 = t217*t128*t223;
  t288 = t264*t270;
  t426 = Cos(var1[7]);
  t489 = 0. + t231 + t288;
  t434 = t326*t405;
  t437 = 0. + t410;
  t470 = t109*t128*t437;
  t471 = 0. + t434 + t470;
  t491 = Sin(var1[7]);
  t515 = t426*t489;
  t522 = -1.*t471*t491;
  t539 = 0. + t515 + t522;
  t484 = t426*t471;
  t492 = t489*t491;
  t507 = 0. + t484 + t492;
  t557 = Cos(var1[8]);
  t570 = 0. + t557;
  t586 = Sin(var1[8]);
  t333 = 0. + t326;
  t734 = t217*t128;
  t735 = t264*t223*t270;
  t736 = t734 + t735;
  t718 = -1.*t128*t264;
  t719 = t217*t223*t270;
  t794 = 0. + t718 + t719;
  t764 = t326*t736;
  t784 = t109*t270*t437;
  t786 = 0. + t764 + t784;
  t815 = t426*t794;
  t830 = -1.*t786*t491;
  t832 = 0. + t815 + t830;
  t787 = t426*t786;
  t800 = t794*t491;
  t805 = 0. + t787 + t800;
  t589 = -1.*t586;
  t600 = 0. + t589;
  t663 = 0. + t586;
  t996 = t217*t109;
  t999 = 0. + t996;
  t964 = t109*t326*t264;
  t969 = -1.*t223*t437;
  t970 = 0. + t964 + t969;
  t1044 = t999*t426;
  t1049 = -1.*t970*t491;
  t1067 = 0. + t1044 + t1049;
  t984 = t426*t970;
  t1005 = t999*t491;
  t1013 = 0. + t984 + t1005;
  t308 = t231 + t288;
  t324 = 0.2429*t308;
  t1178 = Sin(var1[9]);
  t1162 = Cos(var1[9]);
  t1214 = Cos(var1[10]);
  t1207 = Sin(var1[10]);
  t1216 = -1.*t1178;
  t1230 = 0. + t1216;
  t1233 = t109*t128*t1230;
  t1239 = t1162*t405;
  t1243 = 0. + t1233 + t1239;
  t1210 = t1207*t489;
  t1248 = t1214*t1243;
  t1275 = 0. + t1210 + t1248;
  t1277 = t1214*t489;
  t1283 = -1.*t1207*t1243;
  t1295 = 0. + t1277 + t1283;
  t1314 = Cos(var1[11]);
  t1320 = 0. + t1314;
  t1300 = Sin(var1[11]);
  t722 = t718 + t719;
  t727 = 0.2429*t722;
  t1171 = 0. + t1162;
  t1456 = t109*t1230*t270;
  t1459 = t1162*t736;
  t1466 = 0. + t1456 + t1459;
  t1301 = -1.*t1300;
  t1306 = 0. + t1301;
  t1447 = t1207*t794;
  t1467 = t1214*t1466;
  t1470 = 0. + t1447 + t1467;
  t1475 = t1214*t794;
  t1478 = -1.*t1207*t1466;
  t1479 = 0. + t1475 + t1478;
  t1362 = 0. + t1300;
  t935 = 0.2429*t217*t109;
  t1565 = t1162*t109*t264;
  t1590 = -1.*t1230*t223;
  t1595 = 0. + t1565 + t1590;
  t1564 = t999*t1207;
  t1612 = t1214*t1595;
  t1613 = 0. + t1564 + t1612;
  t1622 = t1214*t999;
  t1623 = -1.*t1207*t1595;
  t1631 = 0. + t1622 + t1623;
  t1146 = 0.0817*t109*t128;
  t1714 = Sin(var1[15]);
  t1694 = Cos(var1[15]);
  t1773 = Cos(var1[16]);
  t1753 = Sin(var1[16]);
  t1774 = -1.*t1714;
  t1777 = 0. + t1774;
  t1783 = t109*t128*t1777;
  t1785 = t1694*t405;
  t1789 = 0. + t1783 + t1785;
  t1772 = t1753*t489;
  t1790 = t1773*t1789;
  t1797 = 0. + t1772 + t1790;
  t1807 = t1773*t489;
  t1813 = -1.*t1753*t1789;
  t1814 = 0. + t1807 + t1813;
  t1902 = Cos(var1[17]);
  t1905 = 0. + t1902;
  t1882 = Sin(var1[17]);
  t1373 = 0.0817*t109*t270;
  t1703 = 0. + t1694;
  t1979 = t109*t1777*t270;
  t2001 = t1694*t736;
  t2012 = 0. + t1979 + t2001;
  t1890 = -1.*t1882;
  t1891 = 0. + t1890;
  t1973 = t1753*t794;
  t2014 = t1773*t2012;
  t2023 = 0. + t1973 + t2014;
  t2044 = t1773*t794;
  t2045 = -1.*t1753*t2012;
  t2048 = 0. + t2044 + t2045;
  t1942 = 0. + t1882;
  t1547 = -0.0817*t223;
  t2147 = t1694*t109*t264;
  t2151 = -1.*t1777*t223;
  t2152 = 0. + t2147 + t2151;
  t2143 = t999*t1753;
  t2154 = t1773*t2152;
  t2159 = 0. + t2143 + t2154;
  t2175 = t1773*t999;
  t2190 = -1.*t1753*t2152;
  t2193 = 0. + t2175 + t2190;
  p_output1[0]=-0.0817*t109*t128 + t324 - 0.0329*(0. + t109*t128*t333 - 1.*t405*t410) - 0.2083*t507 - 0.1422*t539 - 0.02*(0. + t539*t570 + t507*t600) - 0.16*(0. + t507*t570 + t539*t663) + var1[0];
  p_output1[1]=-0.0817*t109*t270 + t727 - 0.0329*(0. + t109*t270*t333 - 1.*t410*t736) - 0.2083*t805 - 0.1422*t832 - 0.02*(0. + t600*t805 + t570*t832) - 0.16*(0. + t570*t805 + t663*t832) + var1[1];
  p_output1[2]=-0.2083*t1013 - 0.1422*t1067 + 0.0817*t223 - 0.0329*(0. - 1.*t223*t333 - 1.*t109*t264*t410) - 0.02*(0. + t1067*t570 + t1013*t600) - 0.16*(0. + t1013*t570 + t1067*t663) + t935 + var1[2];
  p_output1[3]=t1146 - 0.2083*t1275 - 0.1422*t1295 - 0.02*(0. + t1275*t1306 + t1295*t1320) - 0.16*(0. + t1275*t1320 + t1295*t1362) + t324 + 0.035199999999999995*(0. + t109*t1171*t128 + t1178*t405) + var1[0];
  p_output1[4]=t1373 - 0.2083*t1470 - 0.1422*t1479 - 0.02*(0. + t1306*t1470 + t1320*t1479) - 0.16*(0. + t1320*t1470 + t1362*t1479) + t727 + 0.035199999999999995*(0. + t109*t1171*t270 + t1178*t736) + var1[1];
  p_output1[5]=t1547 - 0.2083*t1613 - 0.1422*t1631 - 0.02*(0. + t1306*t1613 + t1320*t1631) - 0.16*(0. + t1320*t1613 + t1362*t1631) + 0.035199999999999995*(0. - 1.*t1171*t223 + t109*t1178*t264) + t935 + var1[2];
  p_output1[6]=t1146 - 0.2083*t1797 - 0.1422*t1814 - 0.02*(0. + t1797*t1891 + t1814*t1905) - 0.16*(0. + t1797*t1905 + t1814*t1942) - 0.1944*t308 + 0.0329*(0. + t109*t128*t1703 + t1714*t405) + var1[0];
  p_output1[7]=t1373 - 0.2083*t2023 - 0.1422*t2048 - 0.02*(0. + t1891*t2023 + t1905*t2048) - 0.16*(0. + t1905*t2023 + t1942*t2048) - 0.1944*t722 + 0.0329*(0. + t109*t1703*t270 + t1714*t736) + var1[1];
  p_output1[8]=t1547 - 0.2083*t2159 - 0.1944*t109*t217 - 0.1422*t2193 - 0.02*(0. + t1891*t2159 + t1905*t2193) - 0.16*(0. + t1905*t2159 + t1942*t2193) + 0.0329*(0. - 1.*t1703*t223 + t109*t1714*t264) + var1[2];
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

#include "F_2_func.hh"

namespace SymFunction
{

void F_2_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
