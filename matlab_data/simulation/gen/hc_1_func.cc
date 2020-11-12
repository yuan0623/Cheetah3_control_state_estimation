/*
 * Automatically Generated from Mathematica.
 * Fri 10 May 2019 14:10:17 GMT-04:00
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
  double t59;
  double t40;
  double t167;
  double t96;
  double t78;
  double t197;
  double t281;
  double t392;
  double t395;
  double t410;
  double t427;
  double t110;
  double t205;
  double t452;
  double t505;
  double t455;
  double t459;
  double t467;
  double t476;
  double t524;
  double t548;
  double t555;
  double t559;
  double t491;
  double t528;
  double t533;
  double t567;
  double t576;
  double t582;
  double t286;
  double t735;
  double t746;
  double t763;
  double t697;
  double t706;
  double t815;
  double t776;
  double t778;
  double t787;
  double t847;
  double t855;
  double t858;
  double t813;
  double t834;
  double t841;
  double t583;
  double t620;
  double t656;
  double t971;
  double t972;
  double t931;
  double t934;
  double t941;
  double t1010;
  double t1015;
  double t1032;
  double t957;
  double t973;
  double t998;
  double t207;
  double t1165;
  double t1130;
  double t1209;
  double t1204;
  double t1221;
  double t1239;
  double t1247;
  double t1250;
  double t1260;
  double t1205;
  double t1262;
  double t1266;
  double t1294;
  double t1295;
  double t1302;
  double t1352;
  double t1356;
  double t1321;
  double t711;
  double t1157;
  double t1515;
  double t1523;
  double t1527;
  double t1324;
  double t1336;
  double t1509;
  double t1530;
  double t1531;
  double t1536;
  double t1541;
  double t1562;
  double t1406;
  double t1676;
  double t1677;
  double t1684;
  double t1668;
  double t1689;
  double t1695;
  double t1705;
  double t1706;
  double t1707;
  t59 = Cos(var1[5]);
  t40 = Cos(var1[4]);
  t167 = Sin(var1[3]);
  t96 = Sin(var1[4]);
  t78 = Cos(var1[3]);
  t197 = Sin(var1[5]);
  t281 = Cos(var1[6]);
  t392 = t59*t167*t96;
  t395 = -1.*t78*t197;
  t410 = t392 + t395;
  t427 = Sin(var1[6]);
  t110 = t78*t59*t96;
  t205 = t167*t197;
  t452 = Cos(var1[7]);
  t505 = 0. + t110 + t205;
  t455 = t281*t410;
  t459 = 0. + t427;
  t467 = t40*t59*t459;
  t476 = 0. + t455 + t467;
  t524 = Sin(var1[7]);
  t548 = t452*t505;
  t555 = -1.*t476*t524;
  t559 = 0. + t548 + t555;
  t491 = t452*t476;
  t528 = t505*t524;
  t533 = 0. + t491 + t528;
  t567 = Cos(var1[8]);
  t576 = 0. + t567;
  t582 = Sin(var1[8]);
  t286 = 0. + t281;
  t735 = t78*t59;
  t746 = t167*t96*t197;
  t763 = t735 + t746;
  t697 = -1.*t59*t167;
  t706 = t78*t96*t197;
  t815 = 0. + t697 + t706;
  t776 = t281*t763;
  t778 = t40*t197*t459;
  t787 = 0. + t776 + t778;
  t847 = t452*t815;
  t855 = -1.*t787*t524;
  t858 = 0. + t847 + t855;
  t813 = t452*t787;
  t834 = t815*t524;
  t841 = 0. + t813 + t834;
  t583 = -1.*t582;
  t620 = 0. + t583;
  t656 = 0. + t582;
  t971 = t78*t40;
  t972 = 0. + t971;
  t931 = t40*t281*t167;
  t934 = -1.*t96*t459;
  t941 = 0. + t931 + t934;
  t1010 = t972*t452;
  t1015 = -1.*t941*t524;
  t1032 = 0. + t1010 + t1015;
  t957 = t452*t941;
  t973 = t972*t524;
  t998 = 0. + t957 + t973;
  t207 = t110 + t205;
  t1165 = Sin(var1[15]);
  t1130 = Cos(var1[15]);
  t1209 = Cos(var1[16]);
  t1204 = Sin(var1[16]);
  t1221 = -1.*t1165;
  t1239 = 0. + t1221;
  t1247 = t40*t59*t1239;
  t1250 = t1130*t410;
  t1260 = 0. + t1247 + t1250;
  t1205 = t1204*t505;
  t1262 = t1209*t1260;
  t1266 = 0. + t1205 + t1262;
  t1294 = t1209*t505;
  t1295 = -1.*t1204*t1260;
  t1302 = 0. + t1294 + t1295;
  t1352 = Cos(var1[17]);
  t1356 = 0. + t1352;
  t1321 = Sin(var1[17]);
  t711 = t697 + t706;
  t1157 = 0. + t1130;
  t1515 = t40*t1239*t197;
  t1523 = t1130*t763;
  t1527 = 0. + t1515 + t1523;
  t1324 = -1.*t1321;
  t1336 = 0. + t1324;
  t1509 = t1204*t815;
  t1530 = t1209*t1527;
  t1531 = 0. + t1509 + t1530;
  t1536 = t1209*t815;
  t1541 = -1.*t1204*t1527;
  t1562 = 0. + t1536 + t1541;
  t1406 = 0. + t1321;
  t1676 = t1130*t40*t167;
  t1677 = -1.*t1239*t96;
  t1684 = 0. + t1676 + t1677;
  t1668 = t972*t1204;
  t1689 = t1209*t1684;
  t1695 = 0. + t1668 + t1689;
  t1705 = t1209*t972;
  t1706 = -1.*t1204*t1684;
  t1707 = 0. + t1705 + t1706;
  p_output1[0]=var1[0];
  p_output1[1]=var1[1];
  p_output1[2]=var1[2];
  p_output1[3]=var1[3];
  p_output1[4]=var1[4];
  p_output1[5]=var1[5];
  p_output1[6]=0.2429*t207 - 0.2083*t533 - 0.1422*t559 - 0.0817*t40*t59 - 0.0329*(0. - 1.*t410*t427 + t286*t40*t59) - 0.02*(0. + t559*t576 + t533*t620) - 0.16*(0. + t533*t576 + t559*t656) + var1[0];
  p_output1[7]=-0.0817*t197*t40 + 0.2429*t711 - 0.0329*(0. + t197*t286*t40 - 1.*t427*t763) - 0.2083*t841 - 0.1422*t858 - 0.02*(0. + t620*t841 + t576*t858) - 0.16*(0. + t576*t841 + t656*t858) + var1[1];
  p_output1[8]=-0.1422*t1032 + 0.2429*t40*t78 + 0.0817*t96 - 0.0329*(0. - 1.*t167*t40*t427 - 1.*t286*t96) - 0.2083*t998 - 0.16*(0. + t1032*t656 + t576*t998) - 0.02*(0. + t1032*t576 + t620*t998) + var1[2];
  p_output1[9]=-0.2083*t1266 - 0.1422*t1302 - 0.02*(0. + t1266*t1336 + t1302*t1356) - 0.16*(0. + t1266*t1356 + t1302*t1406) - 0.1944*t207 + 0.0817*t40*t59 + 0.0329*(0. + t1165*t410 + t1157*t40*t59) + var1[0];
  p_output1[10]=-0.2083*t1531 - 0.1422*t1562 - 0.02*(0. + t1336*t1531 + t1356*t1562) - 0.16*(0. + t1356*t1531 + t1406*t1562) + 0.0817*t197*t40 - 0.1944*t711 + 0.0329*(0. + t1157*t197*t40 + t1165*t763) + var1[1];
  p_output1[11]=-0.2083*t1695 - 0.1422*t1707 - 0.02*(0. + t1336*t1695 + t1356*t1707) - 0.16*(0. + t1356*t1695 + t1406*t1707) - 0.1944*t40*t78 - 0.0817*t96 + 0.0329*(0. + t1165*t167*t40 - 1.*t1157*t96) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 12, (mwSize) 1, mxREAL);
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
