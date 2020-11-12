/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 13:00:42 GMT-05:00
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
  double t903;
  double t1077;
  double t1019;
  double t428;
  double t1202;
  double t1047;
  double t1204;
  double t1208;
  double t1342;
  double t1262;
  double t1286;
  double t1297;
  double t1232;
  double t1392;
  double t1418;
  double t1430;
  double t1434;
  double t1438;
  double t1449;
  double t1581;
  double t1582;
  double t1597;
  double t1345;
  double t1624;
  double t1663;
  double t1686;
  double t1484;
  double t1486;
  double t1621;
  double t1704;
  double t1710;
  double t1557;
  double t1568;
  double t1815;
  double t1878;
  double t1881;
  double t1883;
  double t2040;
  double t2056;
  double t2064;
  double t2067;
  double t2069;
  double t2074;
  double t2177;
  double t2178;
  double t2181;
  double t2188;
  double t2200;
  double t2219;
  double t2314;
  double t2344;
  double t2363;
  double t2371;
  double t2372;
  double t2374;
  double t2453;
  double t2456;
  double t2459;
  double t2506;
  double t2508;
  double t2519;
  double t2523;
  double t2535;
  double t2542;
  double t2638;
  double t2641;
  double t2645;
  double t2728;
  double t2733;
  double t2744;
  double t2749;
  double t2750;
  double t2759;
  double t2845;
  double t2857;
  double t2864;
  double t2888;
  double t2900;
  double t2919;
  double t2882;
  double t2921;
  double t2928;
  double t1914;
  double t2977;
  double t2981;
  double t3020;
  double t3025;
  double t3045;
  double t3032;
  double t3060;
  double t3062;
  double t2944;
  double t3089;
  double t3091;
  double t3098;
  double t3102;
  double t3095;
  double t3104;
  double t3109;
  double t2988;
  double t3127;
  double t3128;
  double t3130;
  double t3132;
  double t3129;
  double t3133;
  double t3134;
  t903 = Cos(var1[5]);
  t1077 = Sin(var1[3]);
  t1019 = Sin(var1[4]);
  t428 = Cos(var1[3]);
  t1202 = Sin(var1[5]);
  t1047 = t428*t903*t1019;
  t1204 = t1077*t1202;
  t1208 = t1047 + t1204;
  t1342 = Cos(var1[9]);
  t1262 = -1.*t903*t1077*t1019;
  t1286 = t428*t1202;
  t1297 = t1262 + t1286;
  t1232 = Sin(var1[9]);
  t1392 = Cos(var1[10]);
  t1418 = t1342*t1297;
  t1430 = -1.*t1232;
  t1434 = 0. + t1430;
  t1438 = t1434*t1208;
  t1449 = t1418 + t1438;
  t1581 = -1.*t903*t1077;
  t1582 = t428*t1019*t1202;
  t1597 = t1581 + t1582;
  t1345 = 0. + t1342;
  t1624 = -1.*t428*t903;
  t1663 = -1.*t1077*t1019*t1202;
  t1686 = t1624 + t1663;
  t1484 = Cos(var1[11]);
  t1486 = 0. + t1484;
  t1621 = t1434*t1597;
  t1704 = t1342*t1686;
  t1710 = t1621 + t1704;
  t1557 = Sin(var1[10]);
  t1568 = Sin(var1[11]);
  t1815 = Cos(var1[4]);
  t1878 = t428*t1815*t1434;
  t1881 = -1.*t1342*t1815*t1077;
  t1883 = t1878 + t1881;
  t2040 = t1342*t428*t1815*t903;
  t2056 = t1815*t903*t1434*t1077;
  t2064 = t2040 + t2056;
  t2067 = t1392*t2064;
  t2069 = -1.*t903*t1557*t1019;
  t2074 = t2067 + t2069;
  t2177 = -1.*t1557*t1019*t1202;
  t2178 = t1342*t428*t1815*t1202;
  t2181 = t1815*t1434*t1077*t1202;
  t2188 = t2178 + t2181;
  t2200 = t1392*t2188;
  t2219 = t2177 + t2200;
  t2314 = -1.*t1815*t1557;
  t2344 = -1.*t1342*t428*t1019;
  t2363 = -1.*t1434*t1077*t1019;
  t2371 = t2344 + t2363;
  t2372 = t1392*t2371;
  t2374 = t2314 + t2372;
  t2453 = t903*t1077;
  t2456 = -1.*t428*t1019*t1202;
  t2459 = t2453 + t2456;
  t2506 = -1.*t1815*t1557*t1202;
  t2508 = t1342*t2459;
  t2519 = t1434*t1686;
  t2523 = t2508 + t2519;
  t2535 = t1392*t2523;
  t2542 = t2506 + t2535;
  t2638 = t903*t1077*t1019;
  t2641 = -1.*t428*t1202;
  t2645 = t2638 + t2641;
  t2728 = t1815*t903*t1557;
  t2733 = t1434*t2645;
  t2744 = t1342*t1208;
  t2749 = t2733 + t2744;
  t2750 = t1392*t2749;
  t2759 = t2728 + t2750;
  t2845 = -1.*t1342*t2645;
  t2857 = -1.*t1232*t1208;
  t2864 = t2845 + t2857;
  t2888 = t428*t903;
  t2900 = t1077*t1019*t1202;
  t2919 = t2888 + t2900;
  t2882 = -1.*t1232*t1597;
  t2921 = -1.*t1342*t2919;
  t2928 = t2882 + t2921;
  t1914 = -1.*t1815*t1232*t1077;
  t2977 = -1.*t428*t1815*t1232;
  t2981 = t2977 + t1881;
  t3020 = t1815*t903;
  t3025 = 0. + t3020;
  t3045 = 0. + t2733 + t2744;
  t3032 = t1392*t3025;
  t3060 = -1.*t1557*t3045;
  t3062 = t3032 + t3060;
  t2944 = t1342*t1597;
  t3089 = t1815*t1202;
  t3091 = 0. + t3089;
  t3098 = t1434*t2919;
  t3102 = 0. + t2944 + t3098;
  t3095 = t1392*t3091;
  t3104 = -1.*t1557*t3102;
  t3109 = t3095 + t3104;
  t2988 = t1342*t428*t1815;
  t3127 = t1815*t1434*t1077;
  t3128 = 0. + t2988 + t3127;
  t3130 = -1.*t1019;
  t3132 = 0. + t3130;
  t3129 = -1.*t1557*t3128;
  t3133 = t1392*t3132;
  t3134 = t3129 + t3133;
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
  p_output1[33]=0.0875*t1208 + 0.037*(t1232*t1297 + t1208*t1345) - 0.25*t1392*t1449 - 0.27*(t1392*t1449*t1486 - 1.*t1449*t1557*t1568);
  p_output1[34]=0.0875*t1597 + 0.037*(t1345*t1597 + t1232*t1686) - 0.25*t1392*t1710 - 0.27*(t1392*t1486*t1710 - 1.*t1557*t1568*t1710);
  p_output1[35]=-0.25*t1392*t1883 - 0.27*(t1392*t1486*t1883 - 1.*t1557*t1568*t1883) + 0.0875*t1815*t428 + 0.037*(t1914 + t1345*t1815*t428);
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=1.;
  p_output1[41]=0;
  p_output1[42]=-0.25*t2074 - 0.21935*t1019*t903 + 0.0875*t1077*t1815*t903 + 0.037*(t1077*t1345*t1815*t903 + t1232*t1815*t428*t903) - 0.27*(t1486*t2074 + t1568*(-1.*t1557*t2064 - 1.*t1019*t1392*t903));
  p_output1[43]=-0.21935*t1019*t1202 + 0.0875*t1077*t1202*t1815 - 0.25*t2219 - 0.27*(t1568*(-1.*t1019*t1202*t1392 - 1.*t1557*t2188) + t1486*t2219) + 0.037*(t1077*t1202*t1345*t1815 + t1202*t1232*t1815*t428);
  p_output1[44]=-0.0875*t1019*t1077 - 0.21935*t1815 - 0.25*t2374 - 0.27*(t1568*(-1.*t1392*t1815 - 1.*t1557*t2371) + t1486*t2374) + 0.037*(-1.*t1019*t1077*t1345 - 1.*t1019*t1232*t428);
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=1.;
  p_output1[51]=0.0875*t1686 - 0.21935*t1202*t1815 + 0.037*(t1345*t1686 + t1232*t2459) - 0.25*t2542 - 0.27*(t1568*(-1.*t1202*t1392*t1815 - 1.*t1557*t2523) + t1486*t2542);
  p_output1[52]=0.0875*t2645 + 0.037*(t1208*t1232 + t1345*t2645) - 0.25*t2759 + 0.21935*t1815*t903 - 0.27*(t1486*t2759 + t1568*(-1.*t1557*t2749 + t1392*t1815*t903));
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
  p_output1[87]=0.037*(-1.*t1232*t2645 + t2744) - 0.25*t1392*t2864 - 0.27*(t1392*t1486*t2864 - 1.*t1557*t1568*t2864);
  p_output1[88]=-0.25*t1392*t2928 - 0.27*(t1392*t1486*t2928 - 1.*t1557*t1568*t2928) + 0.037*(-1.*t1232*t2919 + t2944);
  p_output1[89]=-0.25*t1392*t2981 - 0.27*(t1392*t1486*t2981 - 1.*t1557*t1568*t2981) + 0.037*(t1914 + t2988);
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=0;
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=-0.25*t3062 - 0.27*(t1568*(-1.*t1557*t3025 - 1.*t1392*t3045) + t1486*t3062);
  p_output1[97]=-0.25*t3109 - 0.27*(t1568*(-1.*t1557*t3091 - 1.*t1392*t3102) + t1486*t3109);
  p_output1[98]=-0.25*t3134 - 0.27*(t1568*(-1.*t1392*t3128 - 1.*t1557*t3132) + t1486*t3134);
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
  p_output1[102]=0;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=-0.27*(-1.*t1568*(0. + t1557*t3025 + t1392*t3045) + t1484*(0. + t3032 + t3060));
  p_output1[106]=-0.27*(-1.*t1568*(0. + t1557*t3091 + t1392*t3102) + t1484*(0. + t3095 + t3104));
  p_output1[107]=-0.27*(-1.*t1568*(0. + t1392*t3128 + t1557*t3132) + t1484*(0. + t3129 + t3133));
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

#include "j_hc_1_func.hh"

namespace SymFunction
{

void j_hc_1_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
