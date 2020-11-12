/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 21:23:07 GMT-05:00
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
  double t603;
  double t185;
  double t291;
  double t234;
  double t606;
  double t381;
  double t728;
  double t801;
  double t1356;
  double t1439;
  double t1448;
  double t1840;
  double t1787;
  double t1626;
  double t1753;
  double t1877;
  double t1999;
  double t2071;
  double t2107;
  double t2114;
  double t2302;
  double t2319;
  double t2143;
  double t1046;
  double t2440;
  double t2450;
  double t2451;
  double t2456;
  double t2489;
  double t2507;
  double t2379;
  double t2528;
  double t2543;
  double t2544;
  double t2549;
  double t2552;
  double t2557;
  double t2249;
  double t2299;
  double t2670;
  double t2680;
  double t2681;
  double t2682;
  double t2687;
  double t2688;
  double t2693;
  double t2821;
  double t2822;
  double t2826;
  double t2827;
  double t2829;
  double t2820;
  double t2831;
  double t2848;
  double t2852;
  double t2871;
  double t2872;
  double t2801;
  double t2953;
  double t2969;
  double t2974;
  double t2949;
  double t2986;
  double t3002;
  double t3017;
  double t3032;
  double t3033;
  double t3119;
  double t3122;
  double t3123;
  double t3118;
  double t3124;
  double t3125;
  double t3138;
  double t3141;
  double t3143;
  double t3183;
  double t3211;
  double t3213;
  double t3248;
  double t3251;
  double t3252;
  double t3247;
  double t3273;
  double t3280;
  double t3282;
  double t3287;
  double t3288;
  double t3339;
  double t3343;
  double t3344;
  double t3351;
  double t3354;
  double t3361;
  double t3350;
  double t3370;
  double t3387;
  double t3394;
  double t3402;
  double t3403;
  double t3462;
  double t3464;
  double t3483;
  double t3558;
  double t3564;
  double t3566;
  double t3581;
  double t3583;
  double t3584;
  double t3633;
  double t3641;
  double t3644;
  double t3689;
  double t3691;
  double t3690;
  double t3694;
  double t3695;
  double t3703;
  double t3705;
  double t3707;
  double t3570;
  double t3732;
  double t3737;
  double t3741;
  double t3736;
  double t3743;
  double t3744;
  double t3756;
  double t3757;
  double t3759;
  double t3649;
  double t3787;
  double t3788;
  double t3793;
  double t3794;
  double t3789;
  double t3798;
  double t3799;
  double t3806;
  double t3813;
  double t3818;
  double t3840;
  double t3842;
  double t3843;
  double t3855;
  double t3880;
  double t3881;
  double t3882;
  double t3884;
  double t3908;
  double t3910;
  double t3915;
  double t3923;
  t603 = Cos(var1[3]);
  t185 = Cos(var1[5]);
  t291 = Sin(var1[4]);
  t234 = Sin(var1[3]);
  t606 = Sin(var1[5]);
  t381 = -1.*t185*t234*t291;
  t728 = t603*t606;
  t801 = t381 + t728;
  t1356 = t603*t185*t291;
  t1439 = t234*t606;
  t1448 = t1356 + t1439;
  t1840 = Cos(var1[16]);
  t1787 = Cos(var1[15]);
  t1626 = Sin(var1[16]);
  t1753 = t1626*t801;
  t1877 = t1787*t1840*t1448;
  t1999 = t1753 + t1877;
  t2071 = t1840*t801;
  t2107 = -1.*t1787*t1626*t1448;
  t2114 = t2071 + t2107;
  t2302 = Cos(var1[17]);
  t2319 = 0. + t2302;
  t2143 = Sin(var1[17]);
  t1046 = Sin(var1[15]);
  t2440 = -1.*t185*t234;
  t2450 = t603*t291*t606;
  t2451 = t2440 + t2450;
  t2456 = -1.*t603*t185;
  t2489 = -1.*t234*t291*t606;
  t2507 = t2456 + t2489;
  t2379 = 0. + t2143;
  t2528 = -1.*t1787*t1626*t2451;
  t2543 = t1840*t2507;
  t2544 = t2528 + t2543;
  t2549 = t1787*t1840*t2451;
  t2552 = t1626*t2507;
  t2557 = t2549 + t2552;
  t2249 = -1.*t2143;
  t2299 = 0. + t2249;
  t2670 = Cos(var1[4]);
  t2680 = -1.*t1787*t603*t2670*t1626;
  t2681 = -1.*t1840*t2670*t234;
  t2682 = t2680 + t2681;
  t2687 = t1787*t1840*t603*t2670;
  t2688 = -1.*t2670*t1626*t234;
  t2693 = t2687 + t2688;
  t2821 = t1787*t2670*t185*t234;
  t2822 = -1.*t1046;
  t2826 = 0. + t2822;
  t2827 = -1.*t185*t2826*t291;
  t2829 = t2821 + t2827;
  t2820 = t603*t2670*t185*t1626;
  t2831 = t1840*t2829;
  t2848 = t2820 + t2831;
  t2852 = t1840*t603*t2670*t185;
  t2871 = -1.*t1626*t2829;
  t2872 = t2852 + t2871;
  t2801 = 0. + t1787;
  t2953 = t1787*t2670*t234*t606;
  t2969 = -1.*t2826*t291*t606;
  t2974 = t2953 + t2969;
  t2949 = t603*t2670*t1626*t606;
  t2986 = t1840*t2974;
  t3002 = t2949 + t2986;
  t3017 = t1840*t603*t2670*t606;
  t3032 = -1.*t1626*t2974;
  t3033 = t3017 + t3032;
  t3119 = -1.*t2670*t2826;
  t3122 = -1.*t1787*t234*t291;
  t3123 = t3119 + t3122;
  t3118 = -1.*t603*t1626*t291;
  t3124 = t1840*t3123;
  t3125 = t3118 + t3124;
  t3138 = -1.*t1840*t603*t291;
  t3141 = -1.*t1626*t3123;
  t3143 = t3138 + t3141;
  t3183 = t185*t234;
  t3211 = -1.*t603*t291*t606;
  t3213 = t3183 + t3211;
  t3248 = -1.*t2670*t2826*t606;
  t3251 = t1787*t2507;
  t3252 = t3248 + t3251;
  t3247 = t1626*t3213;
  t3273 = t1840*t3252;
  t3280 = t3247 + t3273;
  t3282 = t1840*t3213;
  t3287 = -1.*t1626*t3252;
  t3288 = t3282 + t3287;
  t3339 = t185*t234*t291;
  t3343 = -1.*t603*t606;
  t3344 = t3339 + t3343;
  t3351 = t2670*t185*t2826;
  t3354 = t1787*t3344;
  t3361 = t3351 + t3354;
  t3350 = t1626*t1448;
  t3370 = t1840*t3361;
  t3387 = t3350 + t3370;
  t3394 = t1840*t1448;
  t3402 = -1.*t1626*t3361;
  t3403 = t3394 + t3402;
  t3462 = -1.*t1787*t2670*t185;
  t3464 = -1.*t1046*t3344;
  t3483 = t3462 + t3464;
  t3558 = t603*t185;
  t3564 = t234*t291*t606;
  t3566 = t3558 + t3564;
  t3581 = -1.*t1787*t2670*t606;
  t3583 = -1.*t1046*t3566;
  t3584 = t3581 + t3583;
  t3633 = -1.*t2670*t1046*t234;
  t3641 = t1787*t291;
  t3644 = t3633 + t3641;
  t3689 = 0. + t1356 + t1439;
  t3691 = 0. + t3351 + t3354;
  t3690 = -1.*t1626*t3689;
  t3694 = -1.*t1840*t3691;
  t3695 = t3690 + t3694;
  t3703 = t1840*t3689;
  t3705 = -1.*t1626*t3691;
  t3707 = t3703 + t3705;
  t3570 = t1787*t3566;
  t3732 = 0. + t2440 + t2450;
  t3737 = t2670*t2826*t606;
  t3741 = 0. + t3737 + t3570;
  t3736 = -1.*t1626*t3732;
  t3743 = -1.*t1840*t3741;
  t3744 = t3736 + t3743;
  t3756 = t1840*t3732;
  t3757 = -1.*t1626*t3741;
  t3759 = t3756 + t3757;
  t3649 = t1787*t2670*t234;
  t3787 = t603*t2670;
  t3788 = 0. + t3787;
  t3793 = -1.*t2826*t291;
  t3794 = 0. + t3649 + t3793;
  t3789 = -1.*t3788*t1626;
  t3798 = -1.*t1840*t3794;
  t3799 = t3789 + t3798;
  t3806 = t1840*t3788;
  t3813 = -1.*t1626*t3794;
  t3818 = t3806 + t3813;
  t3840 = t1626*t3689;
  t3842 = t1840*t3691;
  t3843 = 0. + t3840 + t3842;
  t3855 = 0. + t3703 + t3705;
  t3880 = t1626*t3732;
  t3881 = t1840*t3741;
  t3882 = 0. + t3880 + t3881;
  t3884 = 0. + t3756 + t3757;
  t3908 = t3788*t1626;
  t3910 = t1840*t3794;
  t3915 = 0. + t3908 + t3910;
  t3923 = 0. + t3806 + t3813;
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
  p_output1[33]=0.035199999999999995*t1046*t1448 - 0.2083*t1999 - 0.1422*t2114 - 0.02*(t1999*t2299 + t2114*t2319) - 0.16*(t1999*t2319 + t2114*t2379) - 0.1944*t801;
  p_output1[34]=0.035199999999999995*t1046*t2451 - 0.1944*t2507 - 0.1422*t2544 - 0.2083*t2557 - 0.02*(t2319*t2544 + t2299*t2557) - 0.16*(t2379*t2544 + t2319*t2557);
  p_output1[35]=0.1944*t234*t2670 - 0.1422*t2682 - 0.2083*t2693 - 0.02*(t2319*t2682 + t2299*t2693) - 0.16*(t2379*t2682 + t2319*t2693) + 0.035199999999999995*t1046*t2670*t603;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=1.;
  p_output1[41]=0;
  p_output1[42]=-0.2083*t2848 - 0.1422*t2872 - 0.02*(t2299*t2848 + t2319*t2872) - 0.16*(t2319*t2848 + t2379*t2872) - 0.0817*t185*t291 + 0.035199999999999995*(t1046*t185*t234*t2670 - 1.*t185*t2801*t291) - 0.1944*t185*t2670*t603;
  p_output1[43]=-0.2083*t3002 - 0.1422*t3033 - 0.02*(t2299*t3002 + t2319*t3033) - 0.16*(t2319*t3002 + t2379*t3033) - 0.0817*t291*t606 - 0.1944*t2670*t603*t606 + 0.035199999999999995*(t1046*t234*t2670*t606 - 1.*t2801*t291*t606);
  p_output1[44]=-0.0817*t2670 + 0.035199999999999995*(-1.*t2670*t2801 - 1.*t1046*t234*t291) - 0.2083*t3125 - 0.1422*t3143 - 0.02*(t2299*t3125 + t2319*t3143) - 0.16*(t2319*t3125 + t2379*t3143) + 0.1944*t291*t603;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=1.;
  p_output1[51]=-0.1944*t3213 - 0.2083*t3280 - 0.1422*t3288 - 0.02*(t2299*t3280 + t2319*t3288) - 0.16*(t2319*t3280 + t2379*t3288) - 0.0817*t2670*t606 + 0.035199999999999995*(t1046*t2507 - 1.*t2670*t2801*t606);
  p_output1[52]=-0.1944*t1448 + 0.0817*t185*t2670 + 0.035199999999999995*(t185*t2670*t2801 + t1046*t3344) - 0.2083*t3387 - 0.1422*t3403 - 0.02*(t2299*t3387 + t2319*t3403) - 0.16*(t2319*t3387 + t2379*t3403);
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
  p_output1[141]=0.035199999999999995*(-1.*t1046*t185*t2670 + t3354) + 0.1422*t1626*t3483 - 0.2083*t1840*t3483 - 0.02*(t1840*t2299*t3483 - 1.*t1626*t2319*t3483) - 0.16*(t1840*t2319*t3483 - 1.*t1626*t2379*t3483);
  p_output1[142]=0.1422*t1626*t3584 - 0.2083*t1840*t3584 - 0.02*(t1840*t2299*t3584 - 1.*t1626*t2319*t3584) - 0.16*(t1840*t2319*t3584 - 1.*t1626*t2379*t3584) + 0.035199999999999995*(t3570 - 1.*t1046*t2670*t606);
  p_output1[143]=0.1422*t1626*t3644 - 0.2083*t1840*t3644 - 0.02*(t1840*t2299*t3644 - 1.*t1626*t2319*t3644) - 0.16*(t1840*t2319*t3644 - 1.*t1626*t2379*t3644) + 0.035199999999999995*(t1046*t291 + t3649);
  p_output1[144]=0;
  p_output1[145]=0;
  p_output1[146]=0;
  p_output1[147]=0;
  p_output1[148]=0;
  p_output1[149]=0;
  p_output1[150]=-0.1422*t3695 - 0.2083*t3707 - 0.02*(t2319*t3695 + t2299*t3707) - 0.16*(t2379*t3695 + t2319*t3707);
  p_output1[151]=-0.1422*t3744 - 0.2083*t3759 - 0.02*(t2319*t3744 + t2299*t3759) - 0.16*(t2379*t3744 + t2319*t3759);
  p_output1[152]=-0.1422*t3799 - 0.2083*t3818 - 0.02*(t2319*t3799 + t2299*t3818) - 0.16*(t2379*t3799 + t2319*t3818);
  p_output1[153]=0;
  p_output1[154]=0;
  p_output1[155]=0;
  p_output1[156]=0;
  p_output1[157]=0;
  p_output1[158]=0;
  p_output1[159]=-0.02*(-1.*t2302*t3843 - 1.*t2143*t3855) - 0.16*(-1.*t2143*t3843 + t2302*t3855);
  p_output1[160]=-0.02*(-1.*t2302*t3882 - 1.*t2143*t3884) - 0.16*(-1.*t2143*t3882 + t2302*t3884);
  p_output1[161]=-0.02*(-1.*t2302*t3915 - 1.*t2143*t3923) - 0.16*(-1.*t2143*t3915 + t2302*t3923);
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
