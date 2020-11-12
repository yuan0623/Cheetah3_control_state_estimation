/*
 * Automatically Generated from Mathematica.
 * Mon 29 Jul 2019 15:08:41 GMT-04:00
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
  double t361;
  double t205;
  double t658;
  double t609;
  double t598;
  double t804;
  double t620;
  double t885;
  double t919;
  double t900;
  double t977;
  double t990;
  double t1002;
  double t1097;
  double t1078;
  double t1065;
  double t1132;
  double t1155;
  double t1158;
  double t1184;
  double t1086;
  double t1191;
  double t1198;
  double t1215;
  double t1222;
  double t1245;
  double t1332;
  double t1352;
  double t1261;
  double t906;
  double t1480;
  double t1496;
  double t1580;
  double t1601;
  double t1619;
  double t1653;
  double t1659;
  double t1684;
  double t1686;
  double t1279;
  double t1287;
  double t1654;
  double t1706;
  double t1709;
  double t1731;
  double t1740;
  double t1750;
  double t1404;
  double t1920;
  double t1921;
  double t1934;
  double t1935;
  double t1940;
  double t1924;
  double t1945;
  double t1948;
  double t1953;
  double t1960;
  double t1961;
  double t1969;
  double t1978;
  double t2009;
  double t2029;
  double t2037;
  double t2040;
  double t914;
  double t1019;
  double t1038;
  double t1535;
  double t1627;
  double t1628;
  t361 = Cos(var1[5]);
  t205 = Cos(var1[4]);
  t658 = Sin(var1[3]);
  t609 = Sin(var1[4]);
  t598 = Cos(var1[3]);
  t804 = Sin(var1[5]);
  t620 = t598*t361*t609;
  t885 = t658*t804;
  t919 = Sin(var1[12]);
  t900 = Cos(var1[12]);
  t977 = t361*t658*t609;
  t990 = -1.*t598*t804;
  t1002 = t977 + t990;
  t1097 = Cos(var1[13]);
  t1078 = 0. + t620 + t885;
  t1065 = Sin(var1[13]);
  t1132 = 0. + t919;
  t1155 = t205*t361*t1132;
  t1158 = t900*t1002;
  t1184 = 0. + t1155 + t1158;
  t1086 = t1065*t1078;
  t1191 = t1097*t1184;
  t1198 = 0. + t1086 + t1191;
  t1215 = t1097*t1078;
  t1222 = -1.*t1065*t1184;
  t1245 = 0. + t1215 + t1222;
  t1332 = Cos(var1[14]);
  t1352 = 0. + t1332;
  t1261 = Sin(var1[14]);
  t906 = 0. + t900;
  t1480 = -1.*t361*t658;
  t1496 = t598*t609*t804;
  t1580 = t598*t361;
  t1601 = t658*t609*t804;
  t1619 = t1580 + t1601;
  t1653 = 0. + t1480 + t1496;
  t1659 = t205*t1132*t804;
  t1684 = t900*t1619;
  t1686 = 0. + t1659 + t1684;
  t1279 = -1.*t1261;
  t1287 = 0. + t1279;
  t1654 = t1065*t1653;
  t1706 = t1097*t1686;
  t1709 = 0. + t1654 + t1706;
  t1731 = t1097*t1653;
  t1740 = -1.*t1065*t1686;
  t1750 = 0. + t1731 + t1740;
  t1404 = 0. + t1261;
  t1920 = t598*t205;
  t1921 = 0. + t1920;
  t1934 = t900*t205*t658;
  t1935 = -1.*t1132*t609;
  t1940 = 0. + t1934 + t1935;
  t1924 = t1921*t1065;
  t1945 = t1097*t1940;
  t1948 = 0. + t1924 + t1945;
  t1953 = t1097*t1921;
  t1960 = -1.*t1065*t1940;
  t1961 = 0. + t1953 + t1960;
  t1969 = t1287*t1948;
  t1978 = t1352*t1961;
  t2009 = 0. + t1969 + t1978;
  t2029 = t1352*t1948;
  t2037 = t1404*t1961;
  t2040 = 0. + t2029 + t2037;
  t914 = t906*t205*t361;
  t1019 = -1.*t919*t1002;
  t1038 = 0. + t914 + t1019;
  t1535 = t906*t205*t804;
  t1627 = -1.*t919*t1619;
  t1628 = 0. + t1535 + t1627;
  p_output1[0]=var1[0];
  p_output1[1]=var1[1];
  p_output1[2]=var1[2];
  p_output1[3]=-0.0329*t1038 - 0.2083*t1198 - 0.1422*t1245 - 0.02*(0. + t1198*t1287 + t1245*t1352) - 0.16*(0. + t1198*t1352 + t1245*t1404) - 0.0817*t205*t361 - 0.1944*(t620 + t885) + var1[0];
  p_output1[4]=-0.1944*(t1480 + t1496) - 0.0329*t1628 - 0.2083*t1709 - 0.1422*t1750 - 0.02*(0. + t1287*t1709 + t1352*t1750) - 0.16*(0. + t1352*t1709 + t1404*t1750) - 0.0817*t205*t804 + var1[1];
  p_output1[5]=-0.2083*t1948 - 0.1422*t1961 - 0.02*t2009 - 0.16*t2040 - 0.1944*t205*t598 + 0.0817*t609 - 0.0329*(0. - 1.*t609*t906 - 1.*t205*t658*t919) + var1[2];
  p_output1[6]=ArcTan(t2009,t2040);
  p_output1[7]=ArcTan(Sqrt(Power(t2009,2) + Power(t2040,2)),0. + t609*t906 + t205*t658*t919);
  p_output1[8]=ArcTan(t1038,t1628);
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

#include "hc_2_func.hh"

namespace SymFunction
{

void hc_2_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
