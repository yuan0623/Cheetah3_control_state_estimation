/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 21:23:05 GMT-05:00
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
  double t1262;
  double t168;
  double t857;
  double t650;
  double t1510;
  double t1787;
  double t1840;
  double t1855;
  double t1209;
  double t1529;
  double t1626;
  double t1996;
  double t1995;
  double t2006;
  double t2114;
  double t2119;
  double t2132;
  double t1999;
  double t2051;
  double t2071;
  double t2200;
  double t2204;
  double t2250;
  double t1862;
  double t2359;
  double t2364;
  double t2371;
  double t2380;
  double t2402;
  double t2403;
  double t2417;
  double t2425;
  double t2435;
  double t2450;
  double t2451;
  double t2454;
  double t2263;
  double t2272;
  double t2325;
  double t2553;
  double t2581;
  double t2584;
  double t2614;
  double t2616;
  double t2636;
  double t2637;
  double t2709;
  double t2715;
  double t2718;
  double t2758;
  double t2790;
  double t2791;
  double t2794;
  double t2775;
  double t2785;
  double t2786;
  double t2691;
  double t2852;
  double t2854;
  double t2869;
  double t2875;
  double t2876;
  double t2877;
  double t2871;
  double t2872;
  double t2873;
  double t2979;
  double t2982;
  double t2983;
  double t3013;
  double t3016;
  double t3017;
  double t2986;
  double t2990;
  double t3002;
  double t3086;
  double t3087;
  double t3091;
  double t3119;
  double t3120;
  double t3121;
  double t3128;
  double t3129;
  double t3138;
  double t3122;
  double t3123;
  double t3124;
  double t3183;
  double t3184;
  double t3192;
  double t3223;
  double t3237;
  double t3238;
  double t3248;
  double t3249;
  double t3251;
  double t3240;
  double t3244;
  double t3245;
  double t3208;
  double t3311;
  double t3314;
  double t3350;
  double t3351;
  double t3352;
  double t3390;
  double t3391;
  double t3393;
  double t3438;
  double t3445;
  double t3450;
  double t3543;
  double t3526;
  double t3529;
  double t3544;
  double t3547;
  double t3550;
  double t3552;
  double t3555;
  double t3603;
  double t3585;
  double t3586;
  double t3589;
  double t3599;
  double t3604;
  double t3613;
  double t3615;
  double t3616;
  double t3617;
  double t3655;
  double t3656;
  double t3649;
  double t3650;
  double t3652;
  double t3653;
  double t3658;
  double t3660;
  double t3664;
  double t3665;
  double t3677;
  double t3695;
  double t3696;
  double t3698;
  double t3693;
  double t3723;
  double t3725;
  double t3726;
  double t3715;
  double t3756;
  double t3757;
  double t3758;
  double t3745;
  t1262 = Cos(var1[3]);
  t168 = Cos(var1[5]);
  t857 = Sin(var1[4]);
  t650 = Sin(var1[3]);
  t1510 = Sin(var1[5]);
  t1787 = t1262*t168*t857;
  t1840 = t650*t1510;
  t1855 = t1787 + t1840;
  t1209 = -1.*t168*t650*t857;
  t1529 = t1262*t1510;
  t1626 = t1209 + t1529;
  t1996 = Cos(var1[7]);
  t1995 = Cos(var1[6]);
  t2006 = Sin(var1[7]);
  t2114 = t1996*t1626;
  t2119 = -1.*t1995*t1855*t2006;
  t2132 = t2114 + t2119;
  t1999 = t1995*t1996*t1855;
  t2051 = t1626*t2006;
  t2071 = t1999 + t2051;
  t2200 = Cos(var1[8]);
  t2204 = 0. + t2200;
  t2250 = Sin(var1[8]);
  t1862 = Sin(var1[6]);
  t2359 = -1.*t1262*t168;
  t2364 = -1.*t650*t857*t1510;
  t2371 = t2359 + t2364;
  t2380 = -1.*t168*t650;
  t2402 = t1262*t857*t1510;
  t2403 = t2380 + t2402;
  t2417 = t1996*t2371;
  t2425 = -1.*t1995*t2403*t2006;
  t2435 = t2417 + t2425;
  t2450 = t1995*t1996*t2403;
  t2451 = t2371*t2006;
  t2454 = t2450 + t2451;
  t2263 = -1.*t2250;
  t2272 = 0. + t2263;
  t2325 = 0. + t2250;
  t2553 = Cos(var1[4]);
  t2581 = -1.*t2553*t1996*t650;
  t2584 = -1.*t1262*t2553*t1995*t2006;
  t2614 = t2581 + t2584;
  t2616 = t1262*t2553*t1995*t1996;
  t2636 = -1.*t2553*t650*t2006;
  t2637 = t2616 + t2636;
  t2709 = t2553*t168*t1995*t650;
  t2715 = 0. + t1862;
  t2718 = -1.*t168*t857*t2715;
  t2758 = t2709 + t2718;
  t2790 = t1262*t2553*t168*t1996;
  t2791 = -1.*t2758*t2006;
  t2794 = t2790 + t2791;
  t2775 = t1996*t2758;
  t2785 = t1262*t2553*t168*t2006;
  t2786 = t2775 + t2785;
  t2691 = 0. + t1995;
  t2852 = t2553*t1995*t650*t1510;
  t2854 = -1.*t857*t1510*t2715;
  t2869 = t2852 + t2854;
  t2875 = t1262*t2553*t1996*t1510;
  t2876 = -1.*t2869*t2006;
  t2877 = t2875 + t2876;
  t2871 = t1996*t2869;
  t2872 = t1262*t2553*t1510*t2006;
  t2873 = t2871 + t2872;
  t2979 = -1.*t1995*t650*t857;
  t2982 = -1.*t2553*t2715;
  t2983 = t2979 + t2982;
  t3013 = -1.*t1262*t1996*t857;
  t3016 = -1.*t2983*t2006;
  t3017 = t3013 + t3016;
  t2986 = t1996*t2983;
  t2990 = -1.*t1262*t857*t2006;
  t3002 = t2986 + t2990;
  t3086 = t168*t650;
  t3087 = -1.*t1262*t857*t1510;
  t3091 = t3086 + t3087;
  t3119 = t1995*t2371;
  t3120 = -1.*t2553*t1510*t2715;
  t3121 = t3119 + t3120;
  t3128 = t1996*t3091;
  t3129 = -1.*t3121*t2006;
  t3138 = t3128 + t3129;
  t3122 = t1996*t3121;
  t3123 = t3091*t2006;
  t3124 = t3122 + t3123;
  t3183 = t168*t650*t857;
  t3184 = -1.*t1262*t1510;
  t3192 = t3183 + t3184;
  t3223 = t1995*t3192;
  t3237 = t2553*t168*t2715;
  t3238 = t3223 + t3237;
  t3248 = t1996*t1855;
  t3249 = -1.*t3238*t2006;
  t3251 = t3248 + t3249;
  t3240 = t1996*t3238;
  t3244 = t1855*t2006;
  t3245 = t3240 + t3244;
  t3208 = -1.*t3192*t1862;
  t3311 = t2553*t168*t1995;
  t3314 = t3311 + t3208;
  t3350 = t1262*t168;
  t3351 = t650*t857*t1510;
  t3352 = t3350 + t3351;
  t3390 = t2553*t1995*t1510;
  t3391 = -1.*t3352*t1862;
  t3393 = t3390 + t3391;
  t3438 = -1.*t1995*t857;
  t3445 = -1.*t2553*t650*t1862;
  t3450 = t3438 + t3445;
  t3543 = 0. + t1787 + t1840;
  t3526 = 0. + t3223 + t3237;
  t3529 = -1.*t1996*t3526;
  t3544 = -1.*t3543*t2006;
  t3547 = t3529 + t3544;
  t3550 = t1996*t3543;
  t3552 = -1.*t3526*t2006;
  t3555 = t3550 + t3552;
  t3603 = 0. + t2380 + t2402;
  t3585 = t1995*t3352;
  t3586 = t2553*t1510*t2715;
  t3589 = 0. + t3585 + t3586;
  t3599 = -1.*t1996*t3589;
  t3604 = -1.*t3603*t2006;
  t3613 = t3599 + t3604;
  t3615 = t1996*t3603;
  t3616 = -1.*t3589*t2006;
  t3617 = t3615 + t3616;
  t3655 = t1262*t2553;
  t3656 = 0. + t3655;
  t3649 = t2553*t1995*t650;
  t3650 = -1.*t857*t2715;
  t3652 = 0. + t3649 + t3650;
  t3653 = -1.*t1996*t3652;
  t3658 = -1.*t3656*t2006;
  t3660 = t3653 + t3658;
  t3664 = t3656*t1996;
  t3665 = -1.*t3652*t2006;
  t3677 = t3664 + t3665;
  t3695 = t1996*t3526;
  t3696 = t3543*t2006;
  t3698 = 0. + t3695 + t3696;
  t3693 = 0. + t3550 + t3552;
  t3723 = t1996*t3589;
  t3725 = t3603*t2006;
  t3726 = 0. + t3723 + t3725;
  t3715 = 0. + t3615 + t3616;
  t3756 = t1996*t3652;
  t3757 = t3656*t2006;
  t3758 = 0. + t3756 + t3757;
  t3745 = 0. + t3664 + t3665;
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
  p_output1[33]=0.2429*t1626 + 0.0329*t1855*t1862 - 0.2083*t2071 - 0.1422*t2132 - 0.02*(t2132*t2204 + t2071*t2272) - 0.16*(t2071*t2204 + t2132*t2325);
  p_output1[34]=0.2429*t2371 + 0.0329*t1862*t2403 - 0.1422*t2435 - 0.2083*t2454 - 0.16*(t2325*t2435 + t2204*t2454) - 0.02*(t2204*t2435 + t2272*t2454);
  p_output1[35]=0.0329*t1262*t1862*t2553 - 0.1422*t2614 - 0.2083*t2637 - 0.16*(t2325*t2614 + t2204*t2637) - 0.02*(t2204*t2614 + t2272*t2637) - 0.2429*t2553*t650;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=1.;
  p_output1[41]=0;
  p_output1[42]=0.2429*t1262*t168*t2553 - 0.2083*t2786 - 0.1422*t2794 - 0.02*(t2272*t2786 + t2204*t2794) - 0.16*(t2204*t2786 + t2325*t2794) + 0.0817*t168*t857 - 0.0329*(-1.*t168*t1862*t2553*t650 - 1.*t168*t2691*t857);
  p_output1[43]=0.2429*t1262*t1510*t2553 - 0.2083*t2873 - 0.1422*t2877 - 0.02*(t2272*t2873 + t2204*t2877) - 0.16*(t2204*t2873 + t2325*t2877) + 0.0817*t1510*t857 - 0.0329*(-1.*t1510*t1862*t2553*t650 - 1.*t1510*t2691*t857);
  p_output1[44]=0.0817*t2553 - 0.2083*t3002 - 0.1422*t3017 - 0.02*(t2272*t3002 + t2204*t3017) - 0.16*(t2204*t3002 + t2325*t3017) - 0.2429*t1262*t857 - 0.0329*(-1.*t2553*t2691 + t1862*t650*t857);
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=1.;
  p_output1[51]=0.0817*t1510*t2553 - 0.0329*(-1.*t1862*t2371 - 1.*t1510*t2553*t2691) + 0.2429*t3091 - 0.2083*t3124 - 0.1422*t3138 - 0.02*(t2272*t3124 + t2204*t3138) - 0.16*(t2204*t3124 + t2325*t3138);
  p_output1[52]=0.2429*t1855 - 0.0817*t168*t2553 - 0.0329*(t168*t2553*t2691 + t3208) - 0.2083*t3245 - 0.1422*t3251 - 0.02*(t2272*t3245 + t2204*t3251) - 0.16*(t2204*t3245 + t2325*t3251);
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=-0.0329*(-1.*t168*t1862*t2553 - 1.*t1995*t3192) - 0.2083*t1996*t3314 + 0.1422*t2006*t3314 - 0.02*(-1.*t2006*t2204*t3314 + t1996*t2272*t3314) - 0.16*(t1996*t2204*t3314 - 1.*t2006*t2325*t3314);
  p_output1[61]=-0.0329*(-1.*t1510*t1862*t2553 - 1.*t1995*t3352) - 0.2083*t1996*t3393 + 0.1422*t2006*t3393 - 0.02*(-1.*t2006*t2204*t3393 + t1996*t2272*t3393) - 0.16*(t1996*t2204*t3393 - 1.*t2006*t2325*t3393);
  p_output1[62]=-0.2083*t1996*t3450 + 0.1422*t2006*t3450 - 0.02*(-1.*t2006*t2204*t3450 + t1996*t2272*t3450) - 0.16*(t1996*t2204*t3450 - 1.*t2006*t2325*t3450) - 0.0329*(-1.*t1995*t2553*t650 + t1862*t857);
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=-0.1422*t3547 - 0.2083*t3555 - 0.16*(t2325*t3547 + t2204*t3555) - 0.02*(t2204*t3547 + t2272*t3555);
  p_output1[70]=-0.1422*t3613 - 0.2083*t3617 - 0.16*(t2325*t3613 + t2204*t3617) - 0.02*(t2204*t3613 + t2272*t3617);
  p_output1[71]=-0.1422*t3660 - 0.2083*t3677 - 0.16*(t2325*t3660 + t2204*t3677) - 0.02*(t2204*t3660 + t2272*t3677);
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=-0.02*(-1.*t2250*t3693 - 1.*t2200*t3698) - 0.16*(t2200*t3693 - 1.*t2250*t3698);
  p_output1[79]=-0.02*(-1.*t2250*t3715 - 1.*t2200*t3726) - 0.16*(t2200*t3715 - 1.*t2250*t3726);
  p_output1[80]=-0.02*(-1.*t2250*t3745 - 1.*t2200*t3758) - 0.16*(t2200*t3745 - 1.*t2250*t3758);
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
