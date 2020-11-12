/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 13:00:25 GMT-05:00
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
  double t244;
  double t355;
  double t310;
  double t11;
  double t366;
  double t317;
  double t409;
  double t424;
  double t502;
  double t450;
  double t474;
  double t482;
  double t448;
  double t604;
  double t611;
  double t612;
  double t641;
  double t669;
  double t676;
  double t713;
  double t717;
  double t726;
  double t509;
  double t822;
  double t857;
  double t859;
  double t688;
  double t689;
  double t750;
  double t861;
  double t868;
  double t692;
  double t695;
  double t907;
  double t921;
  double t924;
  double t927;
  double t1058;
  double t1063;
  double t1067;
  double t1087;
  double t1088;
  double t1125;
  double t1239;
  double t1240;
  double t1244;
  double t1250;
  double t1251;
  double t1255;
  double t1345;
  double t1346;
  double t1352;
  double t1356;
  double t1358;
  double t1359;
  double t1453;
  double t1454;
  double t1486;
  double t1519;
  double t1520;
  double t1524;
  double t1525;
  double t1532;
  double t1545;
  double t1613;
  double t1619;
  double t1625;
  double t1681;
  double t1692;
  double t1693;
  double t1694;
  double t1698;
  double t1701;
  double t1773;
  double t1787;
  double t1802;
  double t1837;
  double t1844;
  double t1857;
  double t1828;
  double t1868;
  double t1869;
  double t954;
  double t1917;
  double t1918;
  double t1944;
  double t1945;
  double t1955;
  double t1949;
  double t1958;
  double t1960;
  double t1872;
  double t2003;
  double t2007;
  double t2011;
  double t2017;
  double t2008;
  double t2024;
  double t2030;
  double t1920;
  double t2056;
  double t2059;
  double t2064;
  double t2065;
  double t2060;
  double t2067;
  double t2072;
  t244 = Cos(var1[5]);
  t355 = Sin(var1[3]);
  t310 = Sin(var1[4]);
  t11 = Cos(var1[3]);
  t366 = Sin(var1[5]);
  t317 = t11*t244*t310;
  t409 = t355*t366;
  t424 = t317 + t409;
  t502 = Cos(var1[9]);
  t450 = -1.*t244*t355*t310;
  t474 = t11*t366;
  t482 = t450 + t474;
  t448 = Sin(var1[9]);
  t604 = Cos(var1[10]);
  t611 = t502*t482;
  t612 = -1.*t448;
  t641 = 0. + t612;
  t669 = t641*t424;
  t676 = t611 + t669;
  t713 = -1.*t244*t355;
  t717 = t11*t310*t366;
  t726 = t713 + t717;
  t509 = 0. + t502;
  t822 = -1.*t11*t244;
  t857 = -1.*t355*t310*t366;
  t859 = t822 + t857;
  t688 = Cos(var1[11]);
  t689 = 0. + t688;
  t750 = t641*t726;
  t861 = t502*t859;
  t868 = t750 + t861;
  t692 = Sin(var1[10]);
  t695 = Sin(var1[11]);
  t907 = Cos(var1[4]);
  t921 = t11*t907*t641;
  t924 = -1.*t502*t907*t355;
  t927 = t921 + t924;
  t1058 = t502*t11*t907*t244;
  t1063 = t907*t244*t641*t355;
  t1067 = t1058 + t1063;
  t1087 = t604*t1067;
  t1088 = -1.*t244*t692*t310;
  t1125 = t1087 + t1088;
  t1239 = -1.*t692*t310*t366;
  t1240 = t502*t11*t907*t366;
  t1244 = t907*t641*t355*t366;
  t1250 = t1240 + t1244;
  t1251 = t604*t1250;
  t1255 = t1239 + t1251;
  t1345 = -1.*t907*t692;
  t1346 = -1.*t502*t11*t310;
  t1352 = -1.*t641*t355*t310;
  t1356 = t1346 + t1352;
  t1358 = t604*t1356;
  t1359 = t1345 + t1358;
  t1453 = t244*t355;
  t1454 = -1.*t11*t310*t366;
  t1486 = t1453 + t1454;
  t1519 = -1.*t907*t692*t366;
  t1520 = t502*t1486;
  t1524 = t641*t859;
  t1525 = t1520 + t1524;
  t1532 = t604*t1525;
  t1545 = t1519 + t1532;
  t1613 = t244*t355*t310;
  t1619 = -1.*t11*t366;
  t1625 = t1613 + t1619;
  t1681 = t907*t244*t692;
  t1692 = t641*t1625;
  t1693 = t502*t424;
  t1694 = t1692 + t1693;
  t1698 = t604*t1694;
  t1701 = t1681 + t1698;
  t1773 = -1.*t502*t1625;
  t1787 = -1.*t448*t424;
  t1802 = t1773 + t1787;
  t1837 = t11*t244;
  t1844 = t355*t310*t366;
  t1857 = t1837 + t1844;
  t1828 = -1.*t448*t726;
  t1868 = -1.*t502*t1857;
  t1869 = t1828 + t1868;
  t954 = -1.*t907*t448*t355;
  t1917 = -1.*t11*t907*t448;
  t1918 = t1917 + t924;
  t1944 = t907*t244;
  t1945 = 0. + t1944;
  t1955 = 0. + t1692 + t1693;
  t1949 = t604*t1945;
  t1958 = -1.*t692*t1955;
  t1960 = t1949 + t1958;
  t1872 = t502*t726;
  t2003 = t907*t366;
  t2007 = 0. + t2003;
  t2011 = t641*t1857;
  t2017 = 0. + t1872 + t2011;
  t2008 = t604*t2007;
  t2024 = -1.*t692*t2017;
  t2030 = t2008 + t2024;
  t1920 = t502*t11*t907;
  t2056 = t907*t641*t355;
  t2059 = 0. + t1920 + t2056;
  t2064 = -1.*t310;
  t2065 = 0. + t2064;
  t2060 = -1.*t692*t2059;
  t2067 = t604*t2065;
  t2072 = t2060 + t2067;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0.0875*t424 + 0.037*(t448*t482 + t424*t509) - 0.25*t604*t676 - 0.27*(t604*t676*t689 - 1.*t676*t692*t695);
  p_output1[10]=0.0875*t726 + 0.037*(t509*t726 + t448*t859) - 0.25*t604*t868 - 0.27*(t604*t689*t868 - 1.*t692*t695*t868);
  p_output1[11]=0.0875*t11*t907 - 0.25*t604*t927 - 0.27*(t604*t689*t927 - 1.*t692*t695*t927) + 0.037*(t11*t509*t907 + t954);
  p_output1[12]=-0.25*t1125 - 0.21935*t244*t310 - 0.27*(t1125*t689 + (-1.*t244*t310*t604 - 1.*t1067*t692)*t695) + 0.0875*t244*t355*t907 + 0.037*(t11*t244*t448*t907 + t244*t355*t509*t907);
  p_output1[13]=-0.25*t1255 - 0.21935*t310*t366 - 0.27*(t1255*t689 + (-1.*t310*t366*t604 - 1.*t1250*t692)*t695) + 0.0875*t355*t366*t907 + 0.037*(t11*t366*t448*t907 + t355*t366*t509*t907);
  p_output1[14]=-0.25*t1359 - 0.0875*t310*t355 + 0.037*(-1.*t11*t310*t448 - 1.*t310*t355*t509) - 0.21935*t907 - 0.27*(t1359*t689 + t695*(-1.*t1356*t692 - 1.*t604*t907));
  p_output1[15]=-0.25*t1545 + 0.0875*t859 + 0.037*(t1486*t448 + t509*t859) - 0.21935*t366*t907 - 0.27*(t1545*t689 + t695*(-1.*t1525*t692 - 1.*t366*t604*t907));
  p_output1[16]=0.0875*t1625 - 0.25*t1701 + 0.037*(t424*t448 + t1625*t509) + 0.21935*t244*t907 - 0.27*(t1701*t689 + t695*(-1.*t1694*t692 + t244*t604*t907));
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
  p_output1[27]=0.037*(t1693 - 1.*t1625*t448) - 0.25*t1802*t604 - 0.27*(t1802*t604*t689 - 1.*t1802*t692*t695);
  p_output1[28]=0.037*(t1872 - 1.*t1857*t448) - 0.25*t1869*t604 - 0.27*(t1869*t604*t689 - 1.*t1869*t692*t695);
  p_output1[29]=-0.25*t1918*t604 - 0.27*(t1918*t604*t689 - 1.*t1918*t692*t695) + 0.037*(t1920 + t954);
  p_output1[30]=-0.25*t1960 - 0.27*(t1960*t689 + (-1.*t1955*t604 - 1.*t1945*t692)*t695);
  p_output1[31]=-0.25*t2030 - 0.27*(t2030*t689 + (-1.*t2017*t604 - 1.*t2007*t692)*t695);
  p_output1[32]=-0.25*t2072 - 0.27*(t2072*t689 + (-1.*t2059*t604 - 1.*t2065*t692)*t695);
  p_output1[33]=-0.27*((0. + t1949 + t1958)*t688 - 1.*(0. + t1955*t604 + t1945*t692)*t695);
  p_output1[34]=-0.27*((0. + t2008 + t2024)*t688 - 1.*(0. + t2017*t604 + t2007*t692)*t695);
  p_output1[35]=-0.27*((0. + t2060 + t2067)*t688 - 1.*(0. + t2059*t604 + t2065*t692)*t695);
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
