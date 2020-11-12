/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 13:00:48 GMT-05:00
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
  double t231;
  double t963;
  double t649;
  double t78;
  double t1005;
  double t772;
  double t1303;
  double t1380;
  double t1686;
  double t1544;
  double t1553;
  double t1575;
  double t1534;
  double t1732;
  double t1751;
  double t1823;
  double t1891;
  double t1897;
  double t1903;
  double t2055;
  double t2056;
  double t2067;
  double t1704;
  double t2084;
  double t2086;
  double t2090;
  double t1920;
  double t1927;
  double t2082;
  double t2098;
  double t2126;
  double t1942;
  double t1966;
  double t2229;
  double t2239;
  double t2242;
  double t2244;
  double t2411;
  double t2414;
  double t2421;
  double t2435;
  double t2436;
  double t2437;
  double t2611;
  double t2617;
  double t2631;
  double t2636;
  double t2637;
  double t2638;
  double t2833;
  double t2834;
  double t2837;
  double t2872;
  double t2878;
  double t2880;
  double t2996;
  double t3000;
  double t3003;
  double t3077;
  double t3078;
  double t3083;
  double t3110;
  double t3115;
  double t3116;
  double t3146;
  double t3148;
  double t3150;
  double t3194;
  double t3204;
  double t3206;
  double t3208;
  double t3238;
  double t3241;
  double t3306;
  double t3307;
  double t3312;
  double t3343;
  double t3344;
  double t3345;
  double t3342;
  double t3347;
  double t3348;
  double t2267;
  double t3390;
  double t3391;
  double t3432;
  double t3441;
  double t3455;
  double t3451;
  double t3459;
  double t3460;
  double t3351;
  double t3512;
  double t3514;
  double t3517;
  double t3524;
  double t3515;
  double t3525;
  double t3527;
  double t3397;
  double t3578;
  double t3580;
  double t3586;
  double t3595;
  double t3585;
  double t3599;
  double t3600;
  t231 = Cos(var1[5]);
  t963 = Sin(var1[3]);
  t649 = Sin(var1[4]);
  t78 = Cos(var1[3]);
  t1005 = Sin(var1[5]);
  t772 = t78*t231*t649;
  t1303 = t963*t1005;
  t1380 = t772 + t1303;
  t1686 = Cos(var1[15]);
  t1544 = -1.*t231*t963*t649;
  t1553 = t78*t1005;
  t1575 = t1544 + t1553;
  t1534 = Sin(var1[15]);
  t1732 = Cos(var1[16]);
  t1751 = t1686*t1575;
  t1823 = -1.*t1534;
  t1891 = 0. + t1823;
  t1897 = t1891*t1380;
  t1903 = t1751 + t1897;
  t2055 = -1.*t231*t963;
  t2056 = t78*t649*t1005;
  t2067 = t2055 + t2056;
  t1704 = 0. + t1686;
  t2084 = -1.*t78*t231;
  t2086 = -1.*t963*t649*t1005;
  t2090 = t2084 + t2086;
  t1920 = Cos(var1[17]);
  t1927 = 0. + t1920;
  t2082 = t1891*t2067;
  t2098 = t1686*t2090;
  t2126 = t2082 + t2098;
  t1942 = Sin(var1[16]);
  t1966 = Sin(var1[17]);
  t2229 = Cos(var1[4]);
  t2239 = t78*t2229*t1891;
  t2242 = -1.*t1686*t2229*t963;
  t2244 = t2239 + t2242;
  t2411 = t1686*t78*t2229*t231;
  t2414 = t2229*t231*t1891*t963;
  t2421 = t2411 + t2414;
  t2435 = t1732*t2421;
  t2436 = -1.*t231*t1942*t649;
  t2437 = t2435 + t2436;
  t2611 = -1.*t1942*t649*t1005;
  t2617 = t1686*t78*t2229*t1005;
  t2631 = t2229*t1891*t963*t1005;
  t2636 = t2617 + t2631;
  t2637 = t1732*t2636;
  t2638 = t2611 + t2637;
  t2833 = -1.*t2229*t1942;
  t2834 = -1.*t1686*t78*t649;
  t2837 = -1.*t1891*t963*t649;
  t2872 = t2834 + t2837;
  t2878 = t1732*t2872;
  t2880 = t2833 + t2878;
  t2996 = t231*t963;
  t3000 = -1.*t78*t649*t1005;
  t3003 = t2996 + t3000;
  t3077 = -1.*t2229*t1942*t1005;
  t3078 = t1686*t3003;
  t3083 = t1891*t2090;
  t3110 = t3078 + t3083;
  t3115 = t1732*t3110;
  t3116 = t3077 + t3115;
  t3146 = t231*t963*t649;
  t3148 = -1.*t78*t1005;
  t3150 = t3146 + t3148;
  t3194 = t2229*t231*t1942;
  t3204 = t1891*t3150;
  t3206 = t1686*t1380;
  t3208 = t3204 + t3206;
  t3238 = t1732*t3208;
  t3241 = t3194 + t3238;
  t3306 = -1.*t1686*t3150;
  t3307 = -1.*t1534*t1380;
  t3312 = t3306 + t3307;
  t3343 = t78*t231;
  t3344 = t963*t649*t1005;
  t3345 = t3343 + t3344;
  t3342 = -1.*t1534*t2067;
  t3347 = -1.*t1686*t3345;
  t3348 = t3342 + t3347;
  t2267 = -1.*t2229*t1534*t963;
  t3390 = -1.*t78*t2229*t1534;
  t3391 = t3390 + t2242;
  t3432 = t2229*t231;
  t3441 = 0. + t3432;
  t3455 = 0. + t3204 + t3206;
  t3451 = t1732*t3441;
  t3459 = -1.*t1942*t3455;
  t3460 = t3451 + t3459;
  t3351 = t1686*t2067;
  t3512 = t2229*t1005;
  t3514 = 0. + t3512;
  t3517 = t1891*t3345;
  t3524 = 0. + t3351 + t3517;
  t3515 = t1732*t3514;
  t3525 = -1.*t1942*t3524;
  t3527 = t3515 + t3525;
  t3397 = t1686*t78*t2229;
  t3578 = t2229*t1891*t963;
  t3580 = 0. + t3397 + t3578;
  t3586 = -1.*t649;
  t3595 = 0. + t3586;
  t3585 = -1.*t1942*t3580;
  t3599 = t1732*t3595;
  t3600 = t3585 + t3599;
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
  p_output1[33]=0.0875*t1380 + 0.037*(t1534*t1575 + t1380*t1704) - 0.25*t1732*t1903 - 0.27*(t1732*t1903*t1927 - 1.*t1903*t1942*t1966);
  p_output1[34]=0.0875*t2067 + 0.037*(t1704*t2067 + t1534*t2090) - 0.25*t1732*t2126 - 0.27*(t1732*t1927*t2126 - 1.*t1942*t1966*t2126);
  p_output1[35]=-0.25*t1732*t2244 - 0.27*(t1732*t1927*t2244 - 1.*t1942*t1966*t2244) + 0.0875*t2229*t78 + 0.037*(t2267 + t1704*t2229*t78);
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=1.;
  p_output1[41]=0;
  p_output1[42]=-0.25*t2437 + 0.21935*t231*t649 - 0.27*(t1927*t2437 + t1966*(-1.*t1942*t2421 - 1.*t1732*t231*t649)) + 0.0875*t2229*t231*t963 + 0.037*(t1534*t2229*t231*t78 + t1704*t2229*t231*t963);
  p_output1[43]=-0.25*t2638 + 0.21935*t1005*t649 - 0.27*(t1927*t2638 + t1966*(-1.*t1942*t2636 - 1.*t1005*t1732*t649)) + 0.0875*t1005*t2229*t963 + 0.037*(t1005*t1534*t2229*t78 + t1005*t1704*t2229*t963);
  p_output1[44]=0.21935*t2229 - 0.25*t2880 - 0.27*(t1966*(-1.*t1732*t2229 - 1.*t1942*t2872) + t1927*t2880) - 0.0875*t649*t963 + 0.037*(-1.*t1534*t649*t78 - 1.*t1704*t649*t963);
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=1.;
  p_output1[51]=0.0875*t2090 + 0.21935*t1005*t2229 + 0.037*(t1704*t2090 + t1534*t3003) - 0.25*t3116 - 0.27*(t1966*(-1.*t1005*t1732*t2229 - 1.*t1942*t3110) + t1927*t3116);
  p_output1[52]=-0.21935*t2229*t231 + 0.0875*t3150 + 0.037*(t1380*t1534 + t1704*t3150) - 0.25*t3241 - 0.27*(t1966*(t1732*t2229*t231 - 1.*t1942*t3208) + t1927*t3241);
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
  p_output1[141]=0.037*(-1.*t1534*t3150 + t3206) - 0.25*t1732*t3312 - 0.27*(t1732*t1927*t3312 - 1.*t1942*t1966*t3312);
  p_output1[142]=-0.25*t1732*t3348 - 0.27*(t1732*t1927*t3348 - 1.*t1942*t1966*t3348) + 0.037*(-1.*t1534*t3345 + t3351);
  p_output1[143]=-0.25*t1732*t3391 - 0.27*(t1732*t1927*t3391 - 1.*t1942*t1966*t3391) + 0.037*(t2267 + t3397);
  p_output1[144]=0;
  p_output1[145]=0;
  p_output1[146]=0;
  p_output1[147]=0;
  p_output1[148]=0;
  p_output1[149]=0;
  p_output1[150]=-0.25*t3460 - 0.27*(t1966*(-1.*t1942*t3441 - 1.*t1732*t3455) + t1927*t3460);
  p_output1[151]=-0.25*t3527 - 0.27*(t1966*(-1.*t1942*t3514 - 1.*t1732*t3524) + t1927*t3527);
  p_output1[152]=-0.25*t3600 - 0.27*(t1966*(-1.*t1732*t3580 - 1.*t1942*t3595) + t1927*t3600);
  p_output1[153]=0;
  p_output1[154]=0;
  p_output1[155]=0;
  p_output1[156]=0;
  p_output1[157]=0;
  p_output1[158]=0;
  p_output1[159]=-0.27*(-1.*t1966*(0. + t1942*t3441 + t1732*t3455) + t1920*(0. + t3451 + t3459));
  p_output1[160]=-0.27*(-1.*t1966*(0. + t1942*t3514 + t1732*t3524) + t1920*(0. + t3515 + t3525));
  p_output1[161]=-0.27*(-1.*t1966*(0. + t1732*t3580 + t1942*t3595) + t1920*(0. + t3585 + t3599));
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

#include "j_hc_4_func.hh"

namespace SymFunction
{

void j_hc_4_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
