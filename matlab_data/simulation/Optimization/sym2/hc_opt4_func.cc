/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 21:23:44 GMT-05:00
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
  double t232;
  double t33;
  double t593;
  double t400;
  double t326;
  double t617;
  double t583;
  double t666;
  double t852;
  double t739;
  double t862;
  double t870;
  double t895;
  double t1013;
  double t998;
  double t978;
  double t1016;
  double t1022;
  double t1023;
  double t1024;
  double t1030;
  double t1002;
  double t1031;
  double t1060;
  double t1176;
  double t1178;
  double t1208;
  double t1376;
  double t1377;
  double t1235;
  double t752;
  double t1524;
  double t1537;
  double t1554;
  double t1557;
  double t1559;
  double t1650;
  double t1666;
  double t1667;
  double t1680;
  double t1249;
  double t1299;
  double t1660;
  double t1695;
  double t1702;
  double t1864;
  double t1872;
  double t1897;
  double t1481;
  double t2357;
  double t2391;
  double t2499;
  double t2530;
  double t2555;
  double t2491;
  double t2586;
  double t2587;
  double t2602;
  double t2622;
  double t2628;
  double t238;
  double t702;
  double t2984;
  double t2976;
  double t3142;
  double t3043;
  double t3159;
  double t3167;
  double t3175;
  double t3177;
  double t3200;
  double t3082;
  double t3203;
  double t3308;
  double t3336;
  double t3363;
  double t3376;
  double t3489;
  double t3490;
  double t3421;
  double t1523;
  double t1541;
  double t2981;
  double t3871;
  double t3876;
  double t3917;
  double t3422;
  double t3473;
  double t3870;
  double t3921;
  double t3928;
  double t3997;
  double t4019;
  double t4034;
  double t3685;
  double t2217;
  double t4332;
  double t4340;
  double t4352;
  double t4256;
  double t4377;
  double t4383;
  double t4454;
  double t4459;
  double t4492;
  double t2950;
  double t4631;
  double t4702;
  double t4734;
  double t4736;
  double t4740;
  double t4745;
  double t4749;
  double t4803;
  double t4881;
  double t4894;
  double t4934;
  double t4794;
  double t4819;
  double t4827;
  double t4937;
  double t4949;
  double t4955;
  double t3790;
  double t4633;
  double t5126;
  double t5137;
  double t5138;
  double t5221;
  double t5234;
  double t5251;
  double t5143;
  double t5147;
  double t5150;
  double t4957;
  double t4958;
  double t4987;
  double t4238;
  double t5386;
  double t5395;
  double t5396;
  double t5431;
  double t5457;
  double t5470;
  double t5400;
  double t5401;
  double t5412;
  double t4625;
  double t725;
  double t5557;
  double t5547;
  double t5597;
  double t5566;
  double t5604;
  double t5610;
  double t5611;
  double t5614;
  double t5595;
  double t5616;
  double t5630;
  double t5638;
  double t5642;
  double t5650;
  double t5688;
  double t5694;
  double t5661;
  double t5072;
  double t1549;
  double t5548;
  double t5786;
  double t5789;
  double t5791;
  double t5668;
  double t5680;
  double t5785;
  double t5802;
  double t5803;
  double t5809;
  double t5810;
  double t5812;
  double t5731;
  double t2212;
  double t5304;
  double t5853;
  double t5855;
  double t5856;
  double t5852;
  double t5872;
  double t5874;
  double t5880;
  double t5892;
  double t5893;
  t232 = Cos(var1[5]);
  t33 = Cos(var1[4]);
  t593 = Sin(var1[3]);
  t400 = Sin(var1[4]);
  t326 = Cos(var1[3]);
  t617 = Sin(var1[5]);
  t583 = t326*t232*t400;
  t666 = t593*t617;
  t852 = Sin(var1[15]);
  t739 = Cos(var1[15]);
  t862 = t232*t593*t400;
  t870 = -1.*t326*t617;
  t895 = t862 + t870;
  t1013 = Cos(var1[16]);
  t998 = 0. + t583 + t666;
  t978 = Sin(var1[16]);
  t1016 = -1.*t852;
  t1022 = 0. + t1016;
  t1023 = t33*t232*t1022;
  t1024 = t739*t895;
  t1030 = 0. + t1023 + t1024;
  t1002 = t978*t998;
  t1031 = t1013*t1030;
  t1060 = 0. + t1002 + t1031;
  t1176 = t1013*t998;
  t1178 = -1.*t978*t1030;
  t1208 = 0. + t1176 + t1178;
  t1376 = Cos(var1[17]);
  t1377 = 0. + t1376;
  t1235 = Sin(var1[17]);
  t752 = 0. + t739;
  t1524 = -1.*t232*t593;
  t1537 = t326*t400*t617;
  t1554 = t326*t232;
  t1557 = t593*t400*t617;
  t1559 = t1554 + t1557;
  t1650 = 0. + t1524 + t1537;
  t1666 = t33*t1022*t617;
  t1667 = t739*t1559;
  t1680 = 0. + t1666 + t1667;
  t1249 = -1.*t1235;
  t1299 = 0. + t1249;
  t1660 = t978*t1650;
  t1695 = t1013*t1680;
  t1702 = 0. + t1660 + t1695;
  t1864 = t1013*t1650;
  t1872 = -1.*t978*t1680;
  t1897 = 0. + t1864 + t1872;
  t1481 = 0. + t1235;
  t2357 = t326*t33;
  t2391 = 0. + t2357;
  t2499 = t739*t33*t593;
  t2530 = -1.*t1022*t400;
  t2555 = 0. + t2499 + t2530;
  t2491 = t2391*t978;
  t2586 = t1013*t2555;
  t2587 = 0. + t2491 + t2586;
  t2602 = t1013*t2391;
  t2622 = -1.*t978*t2555;
  t2628 = 0. + t2602 + t2622;
  t238 = 0.0817*t33*t232;
  t702 = t583 + t666;
  t2984 = Sin(var1[9]);
  t2976 = Cos(var1[9]);
  t3142 = Cos(var1[10]);
  t3043 = Sin(var1[10]);
  t3159 = -1.*t2984;
  t3167 = 0. + t3159;
  t3175 = t33*t232*t3167;
  t3177 = t2976*t895;
  t3200 = 0. + t3175 + t3177;
  t3082 = t3043*t998;
  t3203 = t3142*t3200;
  t3308 = 0. + t3082 + t3203;
  t3336 = t3142*t998;
  t3363 = -1.*t3043*t3200;
  t3376 = 0. + t3336 + t3363;
  t3489 = Cos(var1[11]);
  t3490 = 0. + t3489;
  t3421 = Sin(var1[11]);
  t1523 = 0.0817*t33*t617;
  t1541 = t1524 + t1537;
  t2981 = 0. + t2976;
  t3871 = t33*t3167*t617;
  t3876 = t2976*t1559;
  t3917 = 0. + t3871 + t3876;
  t3422 = -1.*t3421;
  t3473 = 0. + t3422;
  t3870 = t3043*t1650;
  t3921 = t3142*t3917;
  t3928 = 0. + t3870 + t3921;
  t3997 = t3142*t1650;
  t4019 = -1.*t3043*t3917;
  t4034 = 0. + t3997 + t4019;
  t3685 = 0. + t3421;
  t2217 = -0.0817*t400;
  t4332 = t2976*t33*t593;
  t4340 = -1.*t3167*t400;
  t4352 = 0. + t4332 + t4340;
  t4256 = t2391*t3043;
  t4377 = t3142*t4352;
  t4383 = 0. + t4256 + t4377;
  t4454 = t3142*t2391;
  t4459 = -1.*t3043*t4352;
  t4492 = 0. + t4454 + t4459;
  t2950 = 0.2429*t702;
  t4631 = Cos(var1[6]);
  t4702 = Sin(var1[6]);
  t4734 = Cos(var1[7]);
  t4736 = t4631*t895;
  t4740 = 0. + t4702;
  t4745 = t33*t232*t4740;
  t4749 = 0. + t4736 + t4745;
  t4803 = Sin(var1[7]);
  t4881 = t4734*t998;
  t4894 = -1.*t4749*t4803;
  t4934 = 0. + t4881 + t4894;
  t4794 = t4734*t4749;
  t4819 = t998*t4803;
  t4827 = 0. + t4794 + t4819;
  t4937 = Cos(var1[8]);
  t4949 = 0. + t4937;
  t4955 = Sin(var1[8]);
  t3790 = 0.2429*t1541;
  t4633 = 0. + t4631;
  t5126 = t4631*t1559;
  t5137 = t33*t617*t4740;
  t5138 = 0. + t5126 + t5137;
  t5221 = t4734*t1650;
  t5234 = -1.*t5138*t4803;
  t5251 = 0. + t5221 + t5234;
  t5143 = t4734*t5138;
  t5147 = t1650*t4803;
  t5150 = 0. + t5143 + t5147;
  t4957 = -1.*t4955;
  t4958 = 0. + t4957;
  t4987 = 0. + t4955;
  t4238 = 0.2429*t326*t33;
  t5386 = t33*t4631*t593;
  t5395 = -1.*t400*t4740;
  t5396 = 0. + t5386 + t5395;
  t5431 = t2391*t4734;
  t5457 = -1.*t5396*t4803;
  t5470 = 0. + t5431 + t5457;
  t5400 = t4734*t5396;
  t5401 = t2391*t4803;
  t5412 = 0. + t5400 + t5401;
  t4625 = -0.0817*t33*t232;
  t725 = -0.1944*t702;
  t5557 = Sin(var1[12]);
  t5547 = Cos(var1[12]);
  t5597 = Cos(var1[13]);
  t5566 = Sin(var1[13]);
  t5604 = 0. + t5557;
  t5610 = t33*t232*t5604;
  t5611 = t5547*t895;
  t5614 = 0. + t5610 + t5611;
  t5595 = t5566*t998;
  t5616 = t5597*t5614;
  t5630 = 0. + t5595 + t5616;
  t5638 = t5597*t998;
  t5642 = -1.*t5566*t5614;
  t5650 = 0. + t5638 + t5642;
  t5688 = Cos(var1[14]);
  t5694 = 0. + t5688;
  t5661 = Sin(var1[14]);
  t5072 = -0.0817*t33*t617;
  t1549 = -0.1944*t1541;
  t5548 = 0. + t5547;
  t5786 = t33*t5604*t617;
  t5789 = t5547*t1559;
  t5791 = 0. + t5786 + t5789;
  t5668 = -1.*t5661;
  t5680 = 0. + t5668;
  t5785 = t5566*t1650;
  t5802 = t5597*t5791;
  t5803 = 0. + t5785 + t5802;
  t5809 = t5597*t1650;
  t5810 = -1.*t5566*t5791;
  t5812 = 0. + t5809 + t5810;
  t5731 = 0. + t5661;
  t2212 = -0.1944*t326*t33;
  t5304 = 0.0817*t400;
  t5853 = t5547*t33*t593;
  t5855 = -1.*t5604*t400;
  t5856 = 0. + t5853 + t5855;
  t5852 = t2391*t5566;
  t5872 = t5597*t5856;
  t5874 = 0. + t5852 + t5872;
  t5880 = t5597*t2391;
  t5892 = -1.*t5566*t5856;
  t5893 = 0. + t5880 + t5892;
  p_output1[0]=var1[0];
  p_output1[1]=var1[1];
  p_output1[2]=var1[2];
  p_output1[3]=var1[3];
  p_output1[4]=var1[4];
  p_output1[5]=var1[5];
  p_output1[6]=-0.2083*t1060 - 0.1422*t1208 - 0.02*(0. + t1060*t1299 + t1208*t1377) - 0.16*(0. + t1060*t1377 + t1208*t1481) + t238 + t725 + 0.035199999999999995*(0. + t232*t33*t752 + t852*t895) + var1[0];
  p_output1[7]=t1523 + t1549 - 0.2083*t1702 - 0.1422*t1897 - 0.02*(0. + t1299*t1702 + t1377*t1897) - 0.16*(0. + t1377*t1702 + t1481*t1897) + 0.035199999999999995*(0. + t33*t617*t752 + t1559*t852) + var1[1];
  p_output1[8]=t2212 + t2217 - 0.2083*t2587 - 0.1422*t2628 - 0.02*(0. + t1299*t2587 + t1377*t2628) - 0.16*(0. + t1377*t2587 + t1481*t2628) + 0.035199999999999995*(0. - 1.*t400*t752 + t33*t593*t852) + var1[2];
  p_output1[9]=t238 + t2950 - 0.2083*t3308 - 0.1422*t3376 - 0.02*(0. + t3308*t3473 + t3376*t3490) - 0.16*(0. + t3308*t3490 + t3376*t3685) + 0.035199999999999995*(0. + t232*t2981*t33 + t2984*t895) + var1[0];
  p_output1[10]=t1523 + t3790 - 0.2083*t3928 - 0.1422*t4034 - 0.02*(0. + t3473*t3928 + t3490*t4034) - 0.16*(0. + t3490*t3928 + t3685*t4034) + 0.035199999999999995*(0. + t1559*t2984 + t2981*t33*t617) + var1[1];
  p_output1[11]=t2217 + t4238 - 0.2083*t4383 - 0.1422*t4492 - 0.02*(0. + t3473*t4383 + t3490*t4492) - 0.16*(0. + t3490*t4383 + t3685*t4492) + 0.035199999999999995*(0. - 1.*t2981*t400 + t2984*t33*t593) + var1[2];
  p_output1[12]=t2950 + t4625 - 0.2083*t4827 - 0.1422*t4934 - 0.02*(0. + t4934*t4949 + t4827*t4958) - 0.16*(0. + t4827*t4949 + t4934*t4987) - 0.0329*(0. + t232*t33*t4633 - 1.*t4702*t895) + var1[0];
  p_output1[13]=t3790 + t5072 - 0.2083*t5150 - 0.1422*t5251 - 0.02*(0. + t4958*t5150 + t4949*t5251) - 0.16*(0. + t4949*t5150 + t4987*t5251) - 0.0329*(0. - 1.*t1559*t4702 + t33*t4633*t617) + var1[1];
  p_output1[14]=t4238 + t5304 - 0.2083*t5412 - 0.1422*t5470 - 0.02*(0. + t4958*t5412 + t4949*t5470) - 0.16*(0. + t4949*t5412 + t4987*t5470) - 0.0329*(0. - 1.*t400*t4633 - 1.*t33*t4702*t593) + var1[2];
  p_output1[15]=t4625 - 0.2083*t5630 - 0.1422*t5650 - 0.02*(0. + t5630*t5680 + t5650*t5694) - 0.16*(0. + t5630*t5694 + t5650*t5731) + t725 - 0.0329*(0. + t232*t33*t5548 - 1.*t5557*t895) + var1[0];
  p_output1[16]=t1549 + t5072 - 0.2083*t5803 - 0.1422*t5812 - 0.02*(0. + t5680*t5803 + t5694*t5812) - 0.16*(0. + t5694*t5803 + t5731*t5812) - 0.0329*(0. - 1.*t1559*t5557 + t33*t5548*t617) + var1[1];
  p_output1[17]=t2212 + t5304 - 0.2083*t5874 - 0.1422*t5893 - 0.02*(0. + t5680*t5874 + t5694*t5893) - 0.16*(0. + t5694*t5874 + t5731*t5893) - 0.0329*(0. - 1.*t400*t5548 - 1.*t33*t5557*t593) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "hc_opt4_func.hh"

namespace SymFunction
{

void hc_opt4_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
