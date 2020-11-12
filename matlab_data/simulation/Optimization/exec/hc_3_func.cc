/*
 * Automatically Generated from Mathematica.
 * Mon 29 Jul 2019 15:08:43 GMT-04:00
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
  double t483;
  double t53;
  double t886;
  double t636;
  double t620;
  double t898;
  double t1038;
  double t1086;
  double t1097;
  double t1155;
  double t1158;
  double t885;
  double t900;
  double t1215;
  double t1332;
  double t1228;
  double t1245;
  double t1250;
  double t1287;
  double t1352;
  double t1390;
  double t1404;
  double t1407;
  double t1321;
  double t1358;
  double t1381;
  double t1436;
  double t1446;
  double t1496;
  double t1064;
  double t1760;
  double t1761;
  double t1805;
  double t1706;
  double t1709;
  double t1852;
  double t1828;
  double t1830;
  double t1844;
  double t1881;
  double t1915;
  double t1920;
  double t1850;
  double t1869;
  double t1870;
  double t1511;
  double t1515;
  double t1642;
  double t2069;
  double t2071;
  double t2041;
  double t2045;
  double t2052;
  double t2099;
  double t2101;
  double t2102;
  double t2060;
  double t2076;
  double t2079;
  double t2111;
  double t2115;
  double t2118;
  double t2157;
  double t2158;
  double t2174;
  double t1078;
  double t1191;
  double t1198;
  double t1750;
  double t1808;
  double t1809;
  t483 = Cos(var1[5]);
  t53 = Cos(var1[4]);
  t886 = Sin(var1[3]);
  t636 = Sin(var1[4]);
  t620 = Cos(var1[3]);
  t898 = Sin(var1[5]);
  t1038 = Cos(var1[6]);
  t1086 = t483*t886*t636;
  t1097 = -1.*t620*t898;
  t1155 = t1086 + t1097;
  t1158 = Sin(var1[6]);
  t885 = t620*t483*t636;
  t900 = t886*t898;
  t1215 = Cos(var1[7]);
  t1332 = 0. + t885 + t900;
  t1228 = t1038*t1155;
  t1245 = 0. + t1158;
  t1250 = t53*t483*t1245;
  t1287 = 0. + t1228 + t1250;
  t1352 = Sin(var1[7]);
  t1390 = t1215*t1332;
  t1404 = -1.*t1287*t1352;
  t1407 = 0. + t1390 + t1404;
  t1321 = t1215*t1287;
  t1358 = t1332*t1352;
  t1381 = 0. + t1321 + t1358;
  t1436 = Cos(var1[8]);
  t1446 = 0. + t1436;
  t1496 = Sin(var1[8]);
  t1064 = 0. + t1038;
  t1760 = t620*t483;
  t1761 = t886*t636*t898;
  t1805 = t1760 + t1761;
  t1706 = -1.*t483*t886;
  t1709 = t620*t636*t898;
  t1852 = 0. + t1706 + t1709;
  t1828 = t1038*t1805;
  t1830 = t53*t898*t1245;
  t1844 = 0. + t1828 + t1830;
  t1881 = t1215*t1852;
  t1915 = -1.*t1844*t1352;
  t1920 = 0. + t1881 + t1915;
  t1850 = t1215*t1844;
  t1869 = t1852*t1352;
  t1870 = 0. + t1850 + t1869;
  t1511 = -1.*t1496;
  t1515 = 0. + t1511;
  t1642 = 0. + t1496;
  t2069 = t620*t53;
  t2071 = 0. + t2069;
  t2041 = t53*t1038*t886;
  t2045 = -1.*t636*t1245;
  t2052 = 0. + t2041 + t2045;
  t2099 = t2071*t1215;
  t2101 = -1.*t2052*t1352;
  t2102 = 0. + t2099 + t2101;
  t2060 = t1215*t2052;
  t2076 = t2071*t1352;
  t2079 = 0. + t2060 + t2076;
  t2111 = t1446*t2102;
  t2115 = t2079*t1515;
  t2118 = 0. + t2111 + t2115;
  t2157 = t1446*t2079;
  t2158 = t2102*t1642;
  t2174 = 0. + t2157 + t2158;
  t1078 = t53*t483*t1064;
  t1191 = -1.*t1155*t1158;
  t1198 = 0. + t1078 + t1191;
  t1750 = t53*t1064*t898;
  t1808 = -1.*t1805*t1158;
  t1809 = 0. + t1750 + t1808;
  p_output1[0]=var1[0];
  p_output1[1]=var1[1];
  p_output1[2]=var1[2];
  p_output1[3]=-0.0329*t1198 - 0.2083*t1381 - 0.1422*t1407 - 0.02*(0. + t1407*t1446 + t1381*t1515) - 0.16*(0. + t1381*t1446 + t1407*t1642) - 0.0817*t483*t53 + 0.2429*(t885 + t900) + var1[0];
  p_output1[4]=0.2429*(t1706 + t1709) - 0.0329*t1809 - 0.2083*t1870 - 0.1422*t1920 - 0.02*(0. + t1515*t1870 + t1446*t1920) - 0.16*(0. + t1446*t1870 + t1642*t1920) - 0.0817*t53*t898 + var1[1];
  p_output1[5]=-0.2083*t2079 - 0.1422*t2102 - 0.02*t2118 - 0.16*t2174 + 0.2429*t53*t620 + 0.0817*t636 - 0.0329*(0. - 1.*t1064*t636 - 1.*t1158*t53*t886) + var1[2];
  p_output1[6]=ArcTan(t2118,t2174);
  p_output1[7]=ArcTan(Sqrt(Power(t2118,2) + Power(t2174,2)),0. + t1064*t636 + t1158*t53*t886);
  p_output1[8]=ArcTan(t1198,t1809);
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

#include "hc_3_func.hh"

namespace SymFunction
{

void hc_3_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
