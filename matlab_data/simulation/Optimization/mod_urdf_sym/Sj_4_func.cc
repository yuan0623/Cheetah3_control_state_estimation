/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 13:00:32 GMT-05:00
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
  double t318;
  double t429;
  double t348;
  double t112;
  double t474;
  double t428;
  double t491;
  double t567;
  double t805;
  double t700;
  double t743;
  double t747;
  double t665;
  double t874;
  double t904;
  double t917;
  double t921;
  double t950;
  double t957;
  double t1063;
  double t1087;
  double t1091;
  double t851;
  double t1162;
  double t1180;
  double t1208;
  double t991;
  double t993;
  double t1156;
  double t1217;
  double t1221;
  double t1020;
  double t1045;
  double t1299;
  double t1306;
  double t1307;
  double t1324;
  double t1449;
  double t1453;
  double t1478;
  double t1486;
  double t1492;
  double t1524;
  double t1613;
  double t1621;
  double t1663;
  double t1681;
  double t1690;
  double t1698;
  double t1815;
  double t1822;
  double t1824;
  double t1871;
  double t1878;
  double t1881;
  double t1942;
  double t1964;
  double t1966;
  double t2031;
  double t2033;
  double t2037;
  double t2039;
  double t2040;
  double t2051;
  double t2098;
  double t2129;
  double t2130;
  double t2138;
  double t2162;
  double t2166;
  double t2168;
  double t2169;
  double t2171;
  double t2251;
  double t2253;
  double t2258;
  double t2313;
  double t2314;
  double t2317;
  double t2312;
  double t2325;
  double t2333;
  double t1359;
  double t2392;
  double t2399;
  double t2459;
  double t2461;
  double t2470;
  double t2468;
  double t2476;
  double t2482;
  double t2346;
  double t2557;
  double t2558;
  double t2563;
  double t2577;
  double t2562;
  double t2578;
  double t2584;
  double t2414;
  double t2646;
  double t2652;
  double t2668;
  double t2678;
  double t2662;
  double t2682;
  double t2690;
  t318 = Cos(var1[5]);
  t429 = Sin(var1[3]);
  t348 = Sin(var1[4]);
  t112 = Cos(var1[3]);
  t474 = Sin(var1[5]);
  t428 = t112*t318*t348;
  t491 = t429*t474;
  t567 = t428 + t491;
  t805 = Cos(var1[15]);
  t700 = -1.*t318*t429*t348;
  t743 = t112*t474;
  t747 = t700 + t743;
  t665 = Sin(var1[15]);
  t874 = Cos(var1[16]);
  t904 = t805*t747;
  t917 = -1.*t665;
  t921 = 0. + t917;
  t950 = t921*t567;
  t957 = t904 + t950;
  t1063 = -1.*t318*t429;
  t1087 = t112*t348*t474;
  t1091 = t1063 + t1087;
  t851 = 0. + t805;
  t1162 = -1.*t112*t318;
  t1180 = -1.*t429*t348*t474;
  t1208 = t1162 + t1180;
  t991 = Cos(var1[17]);
  t993 = 0. + t991;
  t1156 = t921*t1091;
  t1217 = t805*t1208;
  t1221 = t1156 + t1217;
  t1020 = Sin(var1[16]);
  t1045 = Sin(var1[17]);
  t1299 = Cos(var1[4]);
  t1306 = t112*t1299*t921;
  t1307 = -1.*t805*t1299*t429;
  t1324 = t1306 + t1307;
  t1449 = t805*t112*t1299*t318;
  t1453 = t1299*t318*t921*t429;
  t1478 = t1449 + t1453;
  t1486 = t874*t1478;
  t1492 = -1.*t318*t1020*t348;
  t1524 = t1486 + t1492;
  t1613 = -1.*t1020*t348*t474;
  t1621 = t805*t112*t1299*t474;
  t1663 = t1299*t921*t429*t474;
  t1681 = t1621 + t1663;
  t1690 = t874*t1681;
  t1698 = t1613 + t1690;
  t1815 = -1.*t1299*t1020;
  t1822 = -1.*t805*t112*t348;
  t1824 = -1.*t921*t429*t348;
  t1871 = t1822 + t1824;
  t1878 = t874*t1871;
  t1881 = t1815 + t1878;
  t1942 = t318*t429;
  t1964 = -1.*t112*t348*t474;
  t1966 = t1942 + t1964;
  t2031 = -1.*t1299*t1020*t474;
  t2033 = t805*t1966;
  t2037 = t921*t1208;
  t2039 = t2033 + t2037;
  t2040 = t874*t2039;
  t2051 = t2031 + t2040;
  t2098 = t318*t429*t348;
  t2129 = -1.*t112*t474;
  t2130 = t2098 + t2129;
  t2138 = t1299*t318*t1020;
  t2162 = t921*t2130;
  t2166 = t805*t567;
  t2168 = t2162 + t2166;
  t2169 = t874*t2168;
  t2171 = t2138 + t2169;
  t2251 = -1.*t805*t2130;
  t2253 = -1.*t665*t567;
  t2258 = t2251 + t2253;
  t2313 = t112*t318;
  t2314 = t429*t348*t474;
  t2317 = t2313 + t2314;
  t2312 = -1.*t665*t1091;
  t2325 = -1.*t805*t2317;
  t2333 = t2312 + t2325;
  t1359 = -1.*t1299*t665*t429;
  t2392 = -1.*t112*t1299*t665;
  t2399 = t2392 + t1307;
  t2459 = t1299*t318;
  t2461 = 0. + t2459;
  t2470 = 0. + t2162 + t2166;
  t2468 = t874*t2461;
  t2476 = -1.*t1020*t2470;
  t2482 = t2468 + t2476;
  t2346 = t805*t1091;
  t2557 = t1299*t474;
  t2558 = 0. + t2557;
  t2563 = t921*t2317;
  t2577 = 0. + t2346 + t2563;
  t2562 = t874*t2558;
  t2578 = -1.*t1020*t2577;
  t2584 = t2562 + t2578;
  t2414 = t805*t112*t1299;
  t2646 = t1299*t921*t429;
  t2652 = 0. + t2414 + t2646;
  t2668 = -1.*t348;
  t2678 = 0. + t2668;
  t2662 = -1.*t1020*t2652;
  t2682 = t874*t2678;
  t2690 = t2662 + t2682;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0.0875*t567 + 0.037*(t665*t747 + t567*t851) - 0.25*t874*t957 - 0.27*(-1.*t1020*t1045*t957 + t874*t957*t993);
  p_output1[10]=0.0875*t1091 + 0.037*(t1208*t665 + t1091*t851) - 0.25*t1221*t874 - 0.27*(-1.*t1020*t1045*t1221 + t1221*t874*t993);
  p_output1[11]=0.0875*t112*t1299 + 0.037*(t1359 + t112*t1299*t851) - 0.25*t1324*t874 - 0.27*(-1.*t1020*t1045*t1324 + t1324*t874*t993);
  p_output1[12]=-0.25*t1524 + 0.21935*t318*t348 + 0.0875*t1299*t318*t429 + 0.037*(t112*t1299*t318*t665 + t1299*t318*t429*t851) - 0.27*(t1045*(-1.*t1020*t1478 - 1.*t318*t348*t874) + t1524*t993);
  p_output1[13]=-0.25*t1698 + 0.21935*t348*t474 + 0.0875*t1299*t429*t474 + 0.037*(t112*t1299*t474*t665 + t1299*t429*t474*t851) - 0.27*(t1045*(-1.*t1020*t1681 - 1.*t348*t474*t874) + t1698*t993);
  p_output1[14]=0.21935*t1299 - 0.25*t1881 - 0.0875*t348*t429 + 0.037*(-1.*t112*t348*t665 - 1.*t348*t429*t851) - 0.27*(t1045*(-1.*t1020*t1871 - 1.*t1299*t874) + t1881*t993);
  p_output1[15]=0.0875*t1208 - 0.25*t2051 + 0.21935*t1299*t474 + 0.037*(t1966*t665 + t1208*t851) - 0.27*(t1045*(-1.*t1020*t2039 - 1.*t1299*t474*t874) + t2051*t993);
  p_output1[16]=0.0875*t2130 - 0.25*t2171 - 0.21935*t1299*t318 + 0.037*(t567*t665 + t2130*t851) - 0.27*(t1045*(-1.*t1020*t2168 + t1299*t318*t874) + t2171*t993);
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
  p_output1[45]=0.037*(t2166 - 1.*t2130*t665) - 0.25*t2258*t874 - 0.27*(-1.*t1020*t1045*t2258 + t2258*t874*t993);
  p_output1[46]=0.037*(t2346 - 1.*t2317*t665) - 0.25*t2333*t874 - 0.27*(-1.*t1020*t1045*t2333 + t2333*t874*t993);
  p_output1[47]=0.037*(t1359 + t2414) - 0.25*t2399*t874 - 0.27*(-1.*t1020*t1045*t2399 + t2399*t874*t993);
  p_output1[48]=-0.25*t2482 - 0.27*(t1045*(-1.*t1020*t2461 - 1.*t2470*t874) + t2482*t993);
  p_output1[49]=-0.25*t2584 - 0.27*(t1045*(-1.*t1020*t2558 - 1.*t2577*t874) + t2584*t993);
  p_output1[50]=-0.25*t2690 - 0.27*(t1045*(-1.*t1020*t2678 - 1.*t2652*t874) + t2690*t993);
  p_output1[51]=-0.27*(-1.*t1045*(0. + t1020*t2461 + t2470*t874) + (0. + t2468 + t2476)*t991);
  p_output1[52]=-0.27*(-1.*t1045*(0. + t1020*t2558 + t2577*t874) + (0. + t2562 + t2578)*t991);
  p_output1[53]=-0.27*(-1.*t1045*(0. + t1020*t2678 + t2652*t874) + (0. + t2662 + t2682)*t991);
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
