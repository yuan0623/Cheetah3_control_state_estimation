/*
 * Automatically Generated from Mathematica.
 * Fri 10 May 2019 20:22:34 GMT-04:00
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
  double t98;
  double t79;
  double t170;
  double t165;
  double t149;
  double t186;
  double t241;
  double t286;
  double t287;
  double t296;
  double t298;
  double t168;
  double t202;
  double t327;
  double t443;
  double t377;
  double t399;
  double t408;
  double t422;
  double t444;
  double t475;
  double t476;
  double t481;
  double t437;
  double t452;
  double t453;
  double t497;
  double t498;
  double t515;
  double t250;
  double t648;
  double t649;
  double t657;
  double t618;
  double t629;
  double t675;
  double t667;
  double t669;
  double t670;
  double t681;
  double t685;
  double t694;
  double t672;
  double t677;
  double t679;
  double t518;
  double t523;
  double t557;
  double t774;
  double t777;
  double t760;
  double t761;
  double t764;
  double t808;
  double t810;
  double t813;
  double t772;
  double t789;
  double t797;
  double t830;
  double t834;
  double t842;
  double t857;
  double t864;
  double t867;
  double t253;
  double t306;
  double t310;
  double t645;
  double t659;
  double t660;
  double t214;
  double t946;
  double t939;
  double t975;
  double t962;
  double t979;
  double t981;
  double t999;
  double t1020;
  double t1023;
  double t969;
  double t1024;
  double t1033;
  double t1036;
  double t1042;
  double t1048;
  double t1073;
  double t1076;
  double t1051;
  double t638;
  double t941;
  double t1158;
  double t1160;
  double t1164;
  double t1053;
  double t1056;
  double t1150;
  double t1178;
  double t1180;
  double t1184;
  double t1188;
  double t1189;
  double t1095;
  double t1282;
  double t1285;
  double t1288;
  double t1278;
  double t1290;
  double t1291;
  double t1295;
  double t1304;
  double t1320;
  double t1328;
  double t1329;
  double t1344;
  double t1352;
  double t1356;
  double t1359;
  double t944;
  double t947;
  double t949;
  double t1129;
  double t1133;
  double t1144;
  t98 = Cos(var1[5]);
  t79 = Cos(var1[4]);
  t170 = Sin(var1[3]);
  t165 = Sin(var1[4]);
  t149 = Cos(var1[3]);
  t186 = Sin(var1[5]);
  t241 = Cos(var1[6]);
  t286 = t98*t170*t165;
  t287 = -1.*t149*t186;
  t296 = t286 + t287;
  t298 = Sin(var1[6]);
  t168 = t149*t98*t165;
  t202 = t170*t186;
  t327 = Cos(var1[7]);
  t443 = 0. + t168 + t202;
  t377 = t241*t296;
  t399 = 0. + t298;
  t408 = t79*t98*t399;
  t422 = 0. + t377 + t408;
  t444 = Sin(var1[7]);
  t475 = t327*t443;
  t476 = -1.*t422*t444;
  t481 = 0. + t475 + t476;
  t437 = t327*t422;
  t452 = t443*t444;
  t453 = 0. + t437 + t452;
  t497 = Cos(var1[8]);
  t498 = 0. + t497;
  t515 = Sin(var1[8]);
  t250 = 0. + t241;
  t648 = t149*t98;
  t649 = t170*t165*t186;
  t657 = t648 + t649;
  t618 = -1.*t98*t170;
  t629 = t149*t165*t186;
  t675 = 0. + t618 + t629;
  t667 = t241*t657;
  t669 = t79*t186*t399;
  t670 = 0. + t667 + t669;
  t681 = t327*t675;
  t685 = -1.*t670*t444;
  t694 = 0. + t681 + t685;
  t672 = t327*t670;
  t677 = t675*t444;
  t679 = 0. + t672 + t677;
  t518 = -1.*t515;
  t523 = 0. + t518;
  t557 = 0. + t515;
  t774 = t149*t79;
  t777 = 0. + t774;
  t760 = t79*t241*t170;
  t761 = -1.*t165*t399;
  t764 = 0. + t760 + t761;
  t808 = t777*t327;
  t810 = -1.*t764*t444;
  t813 = 0. + t808 + t810;
  t772 = t327*t764;
  t789 = t777*t444;
  t797 = 0. + t772 + t789;
  t830 = t498*t813;
  t834 = t797*t523;
  t842 = 0. + t830 + t834;
  t857 = t498*t797;
  t864 = t813*t557;
  t867 = 0. + t857 + t864;
  t253 = t79*t98*t250;
  t306 = -1.*t296*t298;
  t310 = 0. + t253 + t306;
  t645 = t79*t250*t186;
  t659 = -1.*t657*t298;
  t660 = 0. + t645 + t659;
  t214 = t168 + t202;
  t946 = Sin(var1[15]);
  t939 = Cos(var1[15]);
  t975 = Cos(var1[16]);
  t962 = Sin(var1[16]);
  t979 = -1.*t946;
  t981 = 0. + t979;
  t999 = t79*t98*t981;
  t1020 = t939*t296;
  t1023 = 0. + t999 + t1020;
  t969 = t962*t443;
  t1024 = t975*t1023;
  t1033 = 0. + t969 + t1024;
  t1036 = t975*t443;
  t1042 = -1.*t962*t1023;
  t1048 = 0. + t1036 + t1042;
  t1073 = Cos(var1[17]);
  t1076 = 0. + t1073;
  t1051 = Sin(var1[17]);
  t638 = t618 + t629;
  t941 = 0. + t939;
  t1158 = t79*t981*t186;
  t1160 = t939*t657;
  t1164 = 0. + t1158 + t1160;
  t1053 = -1.*t1051;
  t1056 = 0. + t1053;
  t1150 = t962*t675;
  t1178 = t975*t1164;
  t1180 = 0. + t1150 + t1178;
  t1184 = t975*t675;
  t1188 = -1.*t962*t1164;
  t1189 = 0. + t1184 + t1188;
  t1095 = 0. + t1051;
  t1282 = t939*t79*t170;
  t1285 = -1.*t981*t165;
  t1288 = 0. + t1282 + t1285;
  t1278 = t777*t962;
  t1290 = t975*t1288;
  t1291 = 0. + t1278 + t1290;
  t1295 = t975*t777;
  t1304 = -1.*t962*t1288;
  t1320 = 0. + t1295 + t1304;
  t1328 = t1056*t1291;
  t1329 = t1076*t1320;
  t1344 = 0. + t1328 + t1329;
  t1352 = t1076*t1291;
  t1356 = t1095*t1320;
  t1359 = 0. + t1352 + t1356;
  t944 = t941*t79*t98;
  t947 = t946*t296;
  t949 = 0. + t944 + t947;
  t1129 = t941*t79*t186;
  t1133 = t946*t657;
  t1144 = 0. + t1129 + t1133;
  p_output1[0]=0.2429*t214 - 0.0329*t310 - 0.2083*t453 - 0.1422*t481 - 0.02*(0. + t481*t498 + t453*t523) - 0.16*(0. + t453*t498 + t481*t557) - 0.0817*t79*t98 + var1[0];
  p_output1[1]=0.2429*t638 - 0.0329*t660 - 0.2083*t679 - 0.1422*t694 - 0.02*(0. + t523*t679 + t498*t694) - 0.16*(0. + t498*t679 + t557*t694) - 0.0817*t186*t79 + var1[1];
  p_output1[2]=0.0817*t165 + 0.2429*t149*t79 - 0.0329*(0. - 1.*t165*t250 - 1.*t170*t298*t79) - 0.2083*t797 - 0.1422*t813 - 0.02*t842 - 0.16*t867 + var1[2];
  p_output1[3]=ArcTan(t842,t867);
  p_output1[4]=ArcTan(Sqrt(Power(t842,2) + Power(t867,2)),0. + t165*t250 + t170*t298*t79);
  p_output1[5]=ArcTan(t310,t660);
  p_output1[6]=-0.2083*t1033 - 0.1422*t1048 - 0.02*(0. + t1033*t1056 + t1048*t1076) - 0.16*(0. + t1033*t1076 + t1048*t1095) - 0.1944*t214 + 0.0329*t949 + 0.0817*t79*t98 + var1[0];
  p_output1[7]=0.0329*t1144 - 0.2083*t1180 - 0.1422*t1189 - 0.02*(0. + t1056*t1180 + t1076*t1189) - 0.16*(0. + t1076*t1180 + t1095*t1189) - 0.1944*t638 + 0.0817*t186*t79 + var1[1];
  p_output1[8]=-0.2083*t1291 - 0.1422*t1320 - 0.02*t1344 - 0.16*t1359 - 0.0817*t165 - 0.1944*t149*t79 + 0.0329*(0. - 1.*t165*t941 + t170*t79*t946) + var1[2];
  p_output1[9]=ArcTan(t1344,t1359);
  p_output1[10]=ArcTan(Sqrt(Power(t1344,2) + Power(t1359,2)),0. + t165*t941 - 1.*t170*t79*t946);
  p_output1[11]=ArcTan(t949,t1144);
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

#include "F_2_func_fully.hh"

namespace SymFunction
{

void F_2_func_fully_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
