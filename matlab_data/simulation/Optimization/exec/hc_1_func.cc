/*
 * Automatically Generated from Mathematica.
 * Mon 29 Jul 2019 15:08:38 GMT-04:00
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
  double t173;
  double t75;
  double t430;
  double t354;
  double t239;
  double t476;
  double t361;
  double t483;
  double t749;
  double t620;
  double t804;
  double t874;
  double t885;
  double t919;
  double t906;
  double t903;
  double t955;
  double t964;
  double t977;
  double t990;
  double t1018;
  double t914;
  double t1038;
  double t1064;
  double t1078;
  double t1079;
  double t1086;
  double t1158;
  double t1184;
  double t1099;
  double t653;
  double t1296;
  double t1321;
  double t1381;
  double t1389;
  double t1390;
  double t1436;
  double t1455;
  double t1480;
  double t1491;
  double t1113;
  double t1132;
  double t1446;
  double t1496;
  double t1511;
  double t1535;
  double t1593;
  double t1601;
  double t1222;
  double t1761;
  double t1805;
  double t1809;
  double t1821;
  double t1824;
  double t1808;
  double t1825;
  double t1828;
  double t1844;
  double t1847;
  double t1850;
  double t1869;
  double t1870;
  double t1880;
  double t1915;
  double t1920;
  double t1921;
  double t658;
  double t886;
  double t898;
  double t1358;
  double t1404;
  double t1407;
  t173 = Cos(var1[5]);
  t75 = Cos(var1[4]);
  t430 = Sin(var1[3]);
  t354 = Sin(var1[4]);
  t239 = Cos(var1[3]);
  t476 = Sin(var1[5]);
  t361 = t239*t173*t354;
  t483 = t430*t476;
  t749 = Sin(var1[9]);
  t620 = Cos(var1[9]);
  t804 = t173*t430*t354;
  t874 = -1.*t239*t476;
  t885 = t804 + t874;
  t919 = Cos(var1[10]);
  t906 = 0. + t361 + t483;
  t903 = Sin(var1[10]);
  t955 = -1.*t749;
  t964 = 0. + t955;
  t977 = t75*t173*t964;
  t990 = t620*t885;
  t1018 = 0. + t977 + t990;
  t914 = t903*t906;
  t1038 = t919*t1018;
  t1064 = 0. + t914 + t1038;
  t1078 = t919*t906;
  t1079 = -1.*t903*t1018;
  t1086 = 0. + t1078 + t1079;
  t1158 = Cos(var1[11]);
  t1184 = 0. + t1158;
  t1099 = Sin(var1[11]);
  t653 = 0. + t620;
  t1296 = -1.*t173*t430;
  t1321 = t239*t354*t476;
  t1381 = t239*t173;
  t1389 = t430*t354*t476;
  t1390 = t1381 + t1389;
  t1436 = 0. + t1296 + t1321;
  t1455 = t75*t964*t476;
  t1480 = t620*t1390;
  t1491 = 0. + t1455 + t1480;
  t1113 = -1.*t1099;
  t1132 = 0. + t1113;
  t1446 = t903*t1436;
  t1496 = t919*t1491;
  t1511 = 0. + t1446 + t1496;
  t1535 = t919*t1436;
  t1593 = -1.*t903*t1491;
  t1601 = 0. + t1535 + t1593;
  t1222 = 0. + t1099;
  t1761 = t239*t75;
  t1805 = 0. + t1761;
  t1809 = t620*t75*t430;
  t1821 = -1.*t964*t354;
  t1824 = 0. + t1809 + t1821;
  t1808 = t1805*t903;
  t1825 = t919*t1824;
  t1828 = 0. + t1808 + t1825;
  t1844 = t919*t1805;
  t1847 = -1.*t903*t1824;
  t1850 = 0. + t1844 + t1847;
  t1869 = t1132*t1828;
  t1870 = t1184*t1850;
  t1880 = 0. + t1869 + t1870;
  t1915 = t1184*t1828;
  t1920 = t1222*t1850;
  t1921 = 0. + t1915 + t1920;
  t658 = t653*t75*t173;
  t886 = t749*t885;
  t898 = 0. + t658 + t886;
  t1358 = t653*t75*t476;
  t1404 = t749*t1390;
  t1407 = 0. + t1358 + t1404;
  p_output1[0]=var1[0];
  p_output1[1]=var1[1];
  p_output1[2]=var1[2];
  p_output1[3]=-0.2083*t1064 - 0.1422*t1086 - 0.02*(0. + t1064*t1132 + t1086*t1184) - 0.16*(0. + t1064*t1184 + t1086*t1222) + 0.2429*(t361 + t483) + 0.0817*t173*t75 + 0.035199999999999995*t898 + var1[0];
  p_output1[4]=0.2429*(t1296 + t1321) + 0.035199999999999995*t1407 - 0.2083*t1511 - 0.1422*t1601 - 0.02*(0. + t1132*t1511 + t1184*t1601) - 0.16*(0. + t1184*t1511 + t1222*t1601) + 0.0817*t476*t75 + var1[1];
  p_output1[5]=-0.2083*t1828 - 0.1422*t1850 - 0.02*t1880 - 0.16*t1921 - 0.0817*t354 + 0.2429*t239*t75 + 0.035199999999999995*(0. - 1.*t354*t653 + t430*t749*t75) + var1[2];
  p_output1[6]=ArcTan(t1880,t1921);
  p_output1[7]=ArcTan(Sqrt(Power(t1880,2) + Power(t1921,2)),0. + t354*t653 - 1.*t430*t749*t75);
  p_output1[8]=ArcTan(t898,t1407);
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

#include "hc_1_func.hh"

namespace SymFunction
{

void hc_1_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
