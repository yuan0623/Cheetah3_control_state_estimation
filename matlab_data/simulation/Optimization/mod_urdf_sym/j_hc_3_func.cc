/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 13:00:46 GMT-05:00
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
  double t571;
  double t906;
  double t629;
  double t443;
  double t930;
  double t772;
  double t963;
  double t977;
  double t1286;
  double t1297;
  double t1303;
  double t1380;
  double t1438;
  double t1204;
  double t1418;
  double t1484;
  double t1571;
  double t1575;
  double t1576;
  double t1916;
  double t1920;
  double t1922;
  double t1675;
  double t1929;
  double t1941;
  double t1942;
  double t1726;
  double t1727;
  double t1966;
  double t1992;
  double t1995;
  double t1743;
  double t1813;
  double t2092;
  double t2131;
  double t2132;
  double t2134;
  double t2283;
  double t2284;
  double t2288;
  double t2301;
  double t2304;
  double t2306;
  double t2453;
  double t2459;
  double t2468;
  double t2479;
  double t2485;
  double t2491;
  double t2646;
  double t2660;
  double t2682;
  double t2724;
  double t2726;
  double t2728;
  double t2837;
  double t2841;
  double t2872;
  double t2888;
  double t2894;
  double t2900;
  double t2940;
  double t2949;
  double t2964;
  double t3013;
  double t3063;
  double t3066;
  double t3084;
  double t3110;
  double t3114;
  double t3115;
  double t3116;
  double t3120;
  double t3156;
  double t3158;
  double t3170;
  double t3206;
  double t3208;
  double t3209;
  double t3210;
  double t3216;
  double t3222;
  double t2138;
  double t3278;
  double t3283;
  double t3327;
  double t3330;
  double t3334;
  double t3335;
  double t3338;
  double t3339;
  double t3242;
  double t3351;
  double t3356;
  double t3362;
  double t3363;
  double t3367;
  double t3370;
  double t3371;
  double t3296;
  double t3397;
  double t3399;
  double t3401;
  double t3406;
  double t3410;
  double t3413;
  double t3415;
  t571 = Cos(var1[5]);
  t906 = Sin(var1[3]);
  t629 = Sin(var1[4]);
  t443 = Cos(var1[3]);
  t930 = Sin(var1[5]);
  t772 = t443*t571*t629;
  t963 = t906*t930;
  t977 = t772 + t963;
  t1286 = Cos(var1[6]);
  t1297 = -1.*t571*t906*t629;
  t1303 = t443*t930;
  t1380 = t1297 + t1303;
  t1438 = Sin(var1[6]);
  t1204 = Cos(var1[7]);
  t1418 = t1286*t1380;
  t1484 = -1.*t1438;
  t1571 = 0. + t1484;
  t1575 = t977*t1571;
  t1576 = t1418 + t1575;
  t1916 = -1.*t571*t906;
  t1920 = t443*t629*t930;
  t1922 = t1916 + t1920;
  t1675 = 0. + t1286;
  t1929 = -1.*t443*t571;
  t1941 = -1.*t906*t629*t930;
  t1942 = t1929 + t1941;
  t1726 = Cos(var1[8]);
  t1727 = 0. + t1726;
  t1966 = t1286*t1942;
  t1992 = t1922*t1571;
  t1995 = t1966 + t1992;
  t1743 = Sin(var1[7]);
  t1813 = Sin(var1[8]);
  t2092 = Cos(var1[4]);
  t2131 = -1.*t2092*t1286*t906;
  t2132 = t443*t2092*t1571;
  t2134 = t2131 + t2132;
  t2283 = t443*t2092*t571*t1286;
  t2284 = t2092*t571*t906*t1571;
  t2288 = t2283 + t2284;
  t2301 = t1204*t2288;
  t2304 = -1.*t571*t629*t1743;
  t2306 = t2301 + t2304;
  t2453 = t443*t2092*t1286*t930;
  t2459 = t2092*t906*t930*t1571;
  t2468 = t2453 + t2459;
  t2479 = t1204*t2468;
  t2485 = -1.*t629*t930*t1743;
  t2491 = t2479 + t2485;
  t2646 = -1.*t443*t1286*t629;
  t2660 = -1.*t906*t629*t1571;
  t2682 = t2646 + t2660;
  t2724 = t1204*t2682;
  t2726 = -1.*t2092*t1743;
  t2728 = t2724 + t2726;
  t2837 = t571*t906;
  t2841 = -1.*t443*t629*t930;
  t2872 = t2837 + t2841;
  t2888 = t1286*t2872;
  t2894 = t1942*t1571;
  t2900 = t2888 + t2894;
  t2940 = t1204*t2900;
  t2949 = -1.*t2092*t930*t1743;
  t2964 = t2940 + t2949;
  t3013 = t571*t906*t629;
  t3063 = -1.*t443*t930;
  t3066 = t3013 + t3063;
  t3084 = t1286*t977;
  t3110 = t3066*t1571;
  t3114 = t3084 + t3110;
  t3115 = t1204*t3114;
  t3116 = t2092*t571*t1743;
  t3120 = t3115 + t3116;
  t3156 = -1.*t1286*t3066;
  t3158 = -1.*t977*t1438;
  t3170 = t3156 + t3158;
  t3206 = t443*t571;
  t3208 = t906*t629*t930;
  t3209 = t3206 + t3208;
  t3210 = -1.*t1286*t3209;
  t3216 = -1.*t1922*t1438;
  t3222 = t3210 + t3216;
  t2138 = -1.*t2092*t906*t1438;
  t3278 = -1.*t443*t2092*t1438;
  t3283 = t2131 + t3278;
  t3327 = t2092*t571;
  t3330 = 0. + t3327;
  t3334 = t3330*t1204;
  t3335 = 0. + t3084 + t3110;
  t3338 = -1.*t3335*t1743;
  t3339 = t3334 + t3338;
  t3242 = t1286*t1922;
  t3351 = t2092*t930;
  t3356 = 0. + t3351;
  t3362 = t1204*t3356;
  t3363 = t3209*t1571;
  t3367 = 0. + t3242 + t3363;
  t3370 = -1.*t3367*t1743;
  t3371 = t3362 + t3370;
  t3296 = t443*t2092*t1286;
  t3397 = -1.*t629;
  t3399 = 0. + t3397;
  t3401 = t1204*t3399;
  t3406 = t2092*t906*t1571;
  t3410 = 0. + t3296 + t3406;
  t3413 = -1.*t3410*t1743;
  t3415 = t3401 + t3413;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=1.;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=1.;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=1.;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=1.;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=1.;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=1.;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=-0.25*t1204*t1576 - 0.27*(t1204*t1576*t1727 - 1.*t1576*t1743*t1813) - 0.0875*t977 - 0.037*(t1380*t1438 + t1675*t977);
  p_output1[34]=-0.0875*t1922 - 0.037*(t1675*t1922 + t1438*t1942) - 0.25*t1204*t1995 - 0.27*(t1204*t1727*t1995 - 1.*t1743*t1813*t1995);
  p_output1[35]=-0.25*t1204*t2134 - 0.27*(t1204*t1727*t2134 - 1.*t1743*t1813*t2134) - 0.0875*t2092*t443 - 0.037*(t2138 + t1675*t2092*t443);
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=1.;
  p_output1[41]=0;
  p_output1[42]=-0.25*t2306 - 0.21935*t571*t629 - 0.27*(t1727*t2306 + t1813*(-1.*t1743*t2288 - 1.*t1204*t571*t629)) - 0.0875*t2092*t571*t906 - 0.037*(t1438*t2092*t443*t571 + t1675*t2092*t571*t906);
  p_output1[43]=-0.25*t2491 - 0.21935*t629*t930 - 0.0875*t2092*t906*t930 - 0.037*(t1438*t2092*t443*t930 + t1675*t2092*t906*t930) - 0.27*(t1727*t2491 + t1813*(-1.*t1743*t2468 - 1.*t1204*t629*t930));
  p_output1[44]=-0.21935*t2092 - 0.25*t2728 - 0.27*(t1813*(-1.*t1204*t2092 - 1.*t1743*t2682) + t1727*t2728) + 0.0875*t629*t906 - 0.037*(-1.*t1438*t443*t629 - 1.*t1675*t629*t906);
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=1.;
  p_output1[51]=-0.0875*t1942 - 0.037*(t1675*t1942 + t1438*t2872) - 0.25*t2964 - 0.21935*t2092*t930 - 0.27*(t1727*t2964 + t1813*(-1.*t1743*t2900 - 1.*t1204*t2092*t930));
  p_output1[52]=-0.0875*t3066 - 0.25*t3120 + 0.21935*t2092*t571 - 0.27*(t1727*t3120 + t1813*(-1.*t1743*t3114 + t1204*t2092*t571)) - 0.037*(t1675*t3066 + t1438*t977);
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=-0.037*(-1.*t1438*t3066 + t3084) - 0.25*t1204*t3170 - 0.27*(t1204*t1727*t3170 - 1.*t1743*t1813*t3170);
  p_output1[61]=-0.25*t1204*t3222 - 0.27*(t1204*t1727*t3222 - 1.*t1743*t1813*t3222) - 0.037*(-1.*t1438*t3209 + t3242);
  p_output1[62]=-0.25*t1204*t3283 - 0.27*(t1204*t1727*t3283 - 1.*t1743*t1813*t3283) - 0.037*(t2138 + t3296);
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=-0.25*t3339 - 0.27*(t1813*(-1.*t1743*t3330 - 1.*t1204*t3335) + t1727*t3339);
  p_output1[70]=-0.25*t3371 - 0.27*(t1813*(-1.*t1743*t3356 - 1.*t1204*t3367) + t1727*t3371);
  p_output1[71]=-0.25*t3415 - 0.27*(t1813*(-1.*t1743*t3399 - 1.*t1204*t3410) + t1727*t3415);
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=-0.27*(-1.*t1813*(0. + t1743*t3330 + t1204*t3335) + t1726*(0. + t3334 + t3338));
  p_output1[79]=-0.27*(-1.*t1813*(0. + t1743*t3356 + t1204*t3367) + t1726*(0. + t3362 + t3370));
  p_output1[80]=-0.27*(-1.*t1813*(0. + t1743*t3399 + t1204*t3410) + t1726*(0. + t3401 + t3413));
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=0;
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
  p_output1[102]=0;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=0;
  p_output1[106]=0;
  p_output1[107]=0;
  p_output1[108]=0;
  p_output1[109]=0;
  p_output1[110]=0;
  p_output1[111]=0;
  p_output1[112]=0;
  p_output1[113]=0;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
  p_output1[120]=0;
  p_output1[121]=0;
  p_output1[122]=0;
  p_output1[123]=0;
  p_output1[124]=0;
  p_output1[125]=0;
  p_output1[126]=0;
  p_output1[127]=0;
  p_output1[128]=0;
  p_output1[129]=0;
  p_output1[130]=0;
  p_output1[131]=0;
  p_output1[132]=0;
  p_output1[133]=0;
  p_output1[134]=0;
  p_output1[135]=0;
  p_output1[136]=0;
  p_output1[137]=0;
  p_output1[138]=0;
  p_output1[139]=0;
  p_output1[140]=0;
  p_output1[141]=0;
  p_output1[142]=0;
  p_output1[143]=0;
  p_output1[144]=0;
  p_output1[145]=0;
  p_output1[146]=0;
  p_output1[147]=0;
  p_output1[148]=0;
  p_output1[149]=0;
  p_output1[150]=0;
  p_output1[151]=0;
  p_output1[152]=0;
  p_output1[153]=0;
  p_output1[154]=0;
  p_output1[155]=0;
  p_output1[156]=0;
  p_output1[157]=0;
  p_output1[158]=0;
  p_output1[159]=0;
  p_output1[160]=0;
  p_output1[161]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "j_hc_3_func.hh"

namespace SymFunction
{

void j_hc_3_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
