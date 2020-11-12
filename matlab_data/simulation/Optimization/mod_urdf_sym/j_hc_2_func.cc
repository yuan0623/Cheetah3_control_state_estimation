/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 13:00:44 GMT-05:00
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
  double t837;
  double t982;
  double t889;
  double t222;
  double t988;
  double t963;
  double t1005;
  double t1047;
  double t1370;
  double t1272;
  double t1286;
  double t1297;
  double t1224;
  double t1453;
  double t1484;
  double t1532;
  double t1558;
  double t1571;
  double t1573;
  double t1725;
  double t1726;
  double t1731;
  double t1377;
  double t1747;
  double t1797;
  double t1813;
  double t1576;
  double t1578;
  double t1743;
  double t1823;
  double t1878;
  double t1598;
  double t1621;
  double t1971;
  double t1995;
  double t2011;
  double t2033;
  double t2138;
  double t2143;
  double t2162;
  double t2169;
  double t2178;
  double t2181;
  double t2313;
  double t2314;
  double t2356;
  double t2372;
  double t2374;
  double t2379;
  double t2505;
  double t2508;
  double t2514;
  double t2519;
  double t2535;
  double t2545;
  double t2646;
  double t2668;
  double t2682;
  double t2750;
  double t2767;
  double t2769;
  double t2772;
  double t2774;
  double t2778;
  double t2872;
  double t2876;
  double t2877;
  double t2900;
  double t2940;
  double t2945;
  double t2948;
  double t2949;
  double t2962;
  double t3016;
  double t3020;
  double t3032;
  double t3083;
  double t3084;
  double t3089;
  double t3080;
  double t3095;
  double t3098;
  double t2050;
  double t3127;
  double t3130;
  double t3158;
  double t3168;
  double t3172;
  double t3170;
  double t3175;
  double t3177;
  double t3111;
  double t3210;
  double t3213;
  double t3222;
  double t3223;
  double t3216;
  double t3228;
  double t3240;
  double t3135;
  double t3283;
  double t3287;
  double t3292;
  double t3295;
  double t3290;
  double t3296;
  double t3297;
  t837 = Cos(var1[5]);
  t982 = Sin(var1[3]);
  t889 = Sin(var1[4]);
  t222 = Cos(var1[3]);
  t988 = Sin(var1[5]);
  t963 = t222*t837*t889;
  t1005 = t982*t988;
  t1047 = t963 + t1005;
  t1370 = Cos(var1[12]);
  t1272 = -1.*t837*t982*t889;
  t1286 = t222*t988;
  t1297 = t1272 + t1286;
  t1224 = Sin(var1[12]);
  t1453 = Cos(var1[13]);
  t1484 = t1370*t1297;
  t1532 = -1.*t1224;
  t1558 = 0. + t1532;
  t1571 = t1558*t1047;
  t1573 = t1484 + t1571;
  t1725 = -1.*t837*t982;
  t1726 = t222*t889*t988;
  t1731 = t1725 + t1726;
  t1377 = 0. + t1370;
  t1747 = -1.*t222*t837;
  t1797 = -1.*t982*t889*t988;
  t1813 = t1747 + t1797;
  t1576 = Cos(var1[14]);
  t1578 = 0. + t1576;
  t1743 = t1558*t1731;
  t1823 = t1370*t1813;
  t1878 = t1743 + t1823;
  t1598 = Sin(var1[13]);
  t1621 = Sin(var1[14]);
  t1971 = Cos(var1[4]);
  t1995 = t222*t1971*t1558;
  t2011 = -1.*t1370*t1971*t982;
  t2033 = t1995 + t2011;
  t2138 = t1370*t222*t1971*t837;
  t2143 = t1971*t837*t1558*t982;
  t2162 = t2138 + t2143;
  t2169 = t1453*t2162;
  t2178 = -1.*t837*t1598*t889;
  t2181 = t2169 + t2178;
  t2313 = -1.*t1598*t889*t988;
  t2314 = t1370*t222*t1971*t988;
  t2356 = t1971*t1558*t982*t988;
  t2372 = t2314 + t2356;
  t2374 = t1453*t2372;
  t2379 = t2313 + t2374;
  t2505 = -1.*t1971*t1598;
  t2508 = -1.*t1370*t222*t889;
  t2514 = -1.*t1558*t982*t889;
  t2519 = t2508 + t2514;
  t2535 = t1453*t2519;
  t2545 = t2505 + t2535;
  t2646 = t837*t982;
  t2668 = -1.*t222*t889*t988;
  t2682 = t2646 + t2668;
  t2750 = -1.*t1971*t1598*t988;
  t2767 = t1370*t2682;
  t2769 = t1558*t1813;
  t2772 = t2767 + t2769;
  t2774 = t1453*t2772;
  t2778 = t2750 + t2774;
  t2872 = t837*t982*t889;
  t2876 = -1.*t222*t988;
  t2877 = t2872 + t2876;
  t2900 = t1971*t837*t1598;
  t2940 = t1558*t2877;
  t2945 = t1370*t1047;
  t2948 = t2940 + t2945;
  t2949 = t1453*t2948;
  t2962 = t2900 + t2949;
  t3016 = -1.*t1370*t2877;
  t3020 = -1.*t1224*t1047;
  t3032 = t3016 + t3020;
  t3083 = t222*t837;
  t3084 = t982*t889*t988;
  t3089 = t3083 + t3084;
  t3080 = -1.*t1224*t1731;
  t3095 = -1.*t1370*t3089;
  t3098 = t3080 + t3095;
  t2050 = -1.*t1971*t1224*t982;
  t3127 = -1.*t222*t1971*t1224;
  t3130 = t3127 + t2011;
  t3158 = t1971*t837;
  t3168 = 0. + t3158;
  t3172 = 0. + t2940 + t2945;
  t3170 = t1453*t3168;
  t3175 = -1.*t1598*t3172;
  t3177 = t3170 + t3175;
  t3111 = t1370*t1731;
  t3210 = t1971*t988;
  t3213 = 0. + t3210;
  t3222 = t1558*t3089;
  t3223 = 0. + t3111 + t3222;
  t3216 = t1453*t3213;
  t3228 = -1.*t1598*t3223;
  t3240 = t3216 + t3228;
  t3135 = t1370*t222*t1971;
  t3283 = t1971*t1558*t982;
  t3287 = 0. + t3135 + t3283;
  t3292 = -1.*t889;
  t3295 = 0. + t3292;
  t3290 = -1.*t1598*t3287;
  t3296 = t1453*t3295;
  t3297 = t3290 + t3296;
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
  p_output1[33]=-0.0875*t1047 - 0.037*(t1224*t1297 + t1047*t1377) - 0.25*t1453*t1573 - 0.27*(t1453*t1573*t1578 - 1.*t1573*t1598*t1621);
  p_output1[34]=-0.0875*t1731 - 0.037*(t1377*t1731 + t1224*t1813) - 0.25*t1453*t1878 - 0.27*(t1453*t1578*t1878 - 1.*t1598*t1621*t1878);
  p_output1[35]=-0.25*t1453*t2033 - 0.27*(t1453*t1578*t2033 - 1.*t1598*t1621*t2033) - 0.0875*t1971*t222 - 0.037*(t2050 + t1377*t1971*t222);
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=1.;
  p_output1[41]=0;
  p_output1[42]=-0.25*t2181 + 0.21935*t837*t889 - 0.27*(t1578*t2181 + t1621*(-1.*t1598*t2162 - 1.*t1453*t837*t889)) - 0.0875*t1971*t837*t982 - 0.037*(t1224*t1971*t222*t837 + t1377*t1971*t837*t982);
  p_output1[43]=-0.25*t2379 + 0.21935*t889*t988 - 0.0875*t1971*t982*t988 - 0.037*(t1224*t1971*t222*t988 + t1377*t1971*t982*t988) - 0.27*(t1578*t2379 + t1621*(-1.*t1598*t2372 - 1.*t1453*t889*t988));
  p_output1[44]=0.21935*t1971 - 0.25*t2545 - 0.27*(t1621*(-1.*t1453*t1971 - 1.*t1598*t2519) + t1578*t2545) + 0.0875*t889*t982 - 0.037*(-1.*t1224*t222*t889 - 1.*t1377*t889*t982);
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=1.;
  p_output1[51]=-0.0875*t1813 - 0.037*(t1377*t1813 + t1224*t2682) - 0.25*t2778 + 0.21935*t1971*t988 - 0.27*(t1578*t2778 + t1621*(-1.*t1598*t2772 - 1.*t1453*t1971*t988));
  p_output1[52]=-0.0875*t2877 - 0.037*(t1047*t1224 + t1377*t2877) - 0.25*t2962 - 0.21935*t1971*t837 - 0.27*(t1578*t2962 + t1621*(-1.*t1598*t2948 + t1453*t1971*t837));
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
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
  p_output1[114]=-0.037*(-1.*t1224*t2877 + t2945) - 0.25*t1453*t3032 - 0.27*(t1453*t1578*t3032 - 1.*t1598*t1621*t3032);
  p_output1[115]=-0.25*t1453*t3098 - 0.27*(t1453*t1578*t3098 - 1.*t1598*t1621*t3098) - 0.037*(-1.*t1224*t3089 + t3111);
  p_output1[116]=-0.25*t1453*t3130 - 0.27*(t1453*t1578*t3130 - 1.*t1598*t1621*t3130) - 0.037*(t2050 + t3135);
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
  p_output1[120]=0;
  p_output1[121]=0;
  p_output1[122]=0;
  p_output1[123]=-0.25*t3177 - 0.27*(t1621*(-1.*t1598*t3168 - 1.*t1453*t3172) + t1578*t3177);
  p_output1[124]=-0.25*t3240 - 0.27*(t1621*(-1.*t1598*t3213 - 1.*t1453*t3223) + t1578*t3240);
  p_output1[125]=-0.25*t3297 - 0.27*(t1621*(-1.*t1453*t3287 - 1.*t1598*t3295) + t1578*t3297);
  p_output1[126]=0;
  p_output1[127]=0;
  p_output1[128]=0;
  p_output1[129]=0;
  p_output1[130]=0;
  p_output1[131]=0;
  p_output1[132]=-0.27*(-1.*t1621*(0. + t1598*t3168 + t1453*t3172) + t1576*(0. + t3170 + t3175));
  p_output1[133]=-0.27*(-1.*t1621*(0. + t1598*t3213 + t1453*t3223) + t1576*(0. + t3216 + t3228));
  p_output1[134]=-0.27*(-1.*t1621*(0. + t1453*t3287 + t1598*t3295) + t1576*(0. + t3290 + t3296));
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

#include "j_hc_2_func.hh"

namespace SymFunction
{

void j_hc_2_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
