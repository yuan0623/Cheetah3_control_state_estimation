/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 13:01:22 GMT-05:00
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
  double t455;
  double t642;
  double t768;
  double t781;
  double t790;
  double t798;
  double t865;
  double t882;
  double t140;
  double t1165;
  double t1062;
  double t1180;
  double t1196;
  double t1270;
  double t1378;
  double t1513;
  double t1515;
  double t1521;
  double t1523;
  double t1537;
  double t1565;
  double t1570;
  double t1579;
  double t1586;
  double t1587;
  double t1594;
  double t1076;
  double t1780;
  double t1781;
  double t1801;
  double t1846;
  double t1856;
  double t1880;
  double t1617;
  double t1618;
  double t2026;
  double t2087;
  double t2089;
  double t2100;
  double t2109;
  double t2172;
  double t2198;
  double t2221;
  double t1644;
  double t2375;
  double t2382;
  double t2390;
  double t2410;
  double t2412;
  double t2447;
  double t2494;
  double t2506;
  double t1018;
  double t2721;
  double t2681;
  double t2779;
  double t2819;
  double t2830;
  double t2858;
  double t2867;
  double t2886;
  double t2890;
  double t2923;
  double t2929;
  double t2961;
  double t1839;
  double t2693;
  double t2972;
  double t2973;
  double t3123;
  double t3131;
  double t3174;
  double t3179;
  double t3182;
  double t3238;
  double t2999;
  double t2332;
  double t3434;
  double t3440;
  double t3448;
  double t3500;
  double t3508;
  double t3565;
  double t2661;
  double t3655;
  double t3728;
  double t3753;
  double t3755;
  double t3757;
  double t3762;
  double t3769;
  double t3788;
  double t3789;
  double t3796;
  double t3801;
  double t3819;
  double t3092;
  double t3693;
  double t3840;
  double t3854;
  double t3946;
  double t3947;
  double t3954;
  double t3990;
  double t3991;
  double t3997;
  double t3880;
  double t3625;
  double t4143;
  double t4145;
  double t4148;
  double t4156;
  double t4165;
  double t4174;
  double t532;
  double t3654;
  double t4300;
  double t4254;
  double t4326;
  double t4332;
  double t4335;
  double t4336;
  double t4343;
  double t4358;
  double t4362;
  double t4363;
  double t4377;
  double t4381;
  double t1779;
  double t3916;
  double t4287;
  double t4424;
  double t4436;
  double t4586;
  double t4606;
  double t4609;
  double t4611;
  double t4639;
  double t4651;
  double t4441;
  double t4057;
  double t4734;
  double t4751;
  double t4784;
  double t4849;
  double t4852;
  double t4861;
  double t2615;
  t455 = Cos(var1[5]);
  t642 = Sin(var1[3]);
  t768 = Sin(var1[4]);
  t781 = t455*t642*t768;
  t790 = Cos(var1[3]);
  t798 = Sin(var1[5]);
  t865 = -1.*t790*t798;
  t882 = t781 + t865;
  t140 = Cos(var1[4]);
  t1165 = Sin(var1[15]);
  t1062 = Cos(var1[15]);
  t1180 = t790*t455*t768;
  t1196 = t642*t798;
  t1270 = t1180 + t1196;
  t1378 = t140*t455;
  t1513 = 0. + t1378;
  t1515 = Sin(var1[16]);
  t1521 = t1513*t1515;
  t1523 = Cos(var1[16]);
  t1537 = -1.*t1165;
  t1565 = 0. + t1537;
  t1570 = t1565*t882;
  t1579 = t1062*t1270;
  t1586 = 0. + t1570 + t1579;
  t1587 = t1523*t1586;
  t1594 = 0. + t1521 + t1587;
  t1076 = 0. + t1062;
  t1780 = t790*t455;
  t1781 = t642*t768*t798;
  t1801 = t1780 + t1781;
  t1846 = -1.*t455*t642;
  t1856 = t790*t768*t798;
  t1880 = t1846 + t1856;
  t1617 = Cos(var1[17]);
  t1618 = 0. + t1617;
  t2026 = t140*t798;
  t2087 = 0. + t2026;
  t2089 = t1515*t2087;
  t2100 = t1062*t1880;
  t2109 = t1565*t1801;
  t2172 = 0. + t2100 + t2109;
  t2198 = t1523*t2172;
  t2221 = 0. + t2089 + t2198;
  t1644 = Sin(var1[17]);
  t2375 = t1062*t790*t140;
  t2382 = t140*t1565*t642;
  t2390 = 0. + t2375 + t2382;
  t2410 = -1.*t768;
  t2412 = 0. + t2410;
  t2447 = t1523*t2390;
  t2494 = t1515*t2412;
  t2506 = 0. + t2447 + t2494;
  t1018 = 0.0875*t882;
  t2721 = Sin(var1[9]);
  t2681 = Cos(var1[9]);
  t2779 = Sin(var1[10]);
  t2819 = t1513*t2779;
  t2830 = Cos(var1[10]);
  t2858 = -1.*t2721;
  t2867 = 0. + t2858;
  t2886 = t2867*t882;
  t2890 = t2681*t1270;
  t2923 = 0. + t2886 + t2890;
  t2929 = t2830*t2923;
  t2961 = 0. + t2819 + t2929;
  t1839 = 0.0875*t1801;
  t2693 = 0. + t2681;
  t2972 = Cos(var1[11]);
  t2973 = 0. + t2972;
  t3123 = t2779*t2087;
  t3131 = t2681*t1880;
  t3174 = t2867*t1801;
  t3179 = 0. + t3131 + t3174;
  t3182 = t2830*t3179;
  t3238 = 0. + t3123 + t3182;
  t2999 = Sin(var1[11]);
  t2332 = 0.0875*t140*t642;
  t3434 = t2681*t790*t140;
  t3440 = t140*t2867*t642;
  t3448 = 0. + t3434 + t3440;
  t3500 = t2830*t3448;
  t3508 = t2779*t2412;
  t3565 = 0. + t3500 + t3508;
  t2661 = 0.21935*t140*t455;
  t3655 = Cos(var1[6]);
  t3728 = Sin(var1[6]);
  t3753 = Cos(var1[7]);
  t3755 = t3655*t1270;
  t3757 = -1.*t3728;
  t3762 = 0. + t3757;
  t3769 = t882*t3762;
  t3788 = 0. + t3755 + t3769;
  t3789 = t3753*t3788;
  t3796 = Sin(var1[7]);
  t3801 = t1513*t3796;
  t3819 = 0. + t3789 + t3801;
  t3092 = 0.21935*t140*t798;
  t3693 = 0. + t3655;
  t3840 = Cos(var1[8]);
  t3854 = 0. + t3840;
  t3946 = t3655*t1880;
  t3947 = t1801*t3762;
  t3954 = 0. + t3946 + t3947;
  t3990 = t3753*t3954;
  t3991 = t2087*t3796;
  t3997 = 0. + t3990 + t3991;
  t3880 = Sin(var1[8]);
  t3625 = -0.21935*t768;
  t4143 = t790*t140*t3655;
  t4145 = t140*t642*t3762;
  t4148 = 0. + t4143 + t4145;
  t4156 = t3753*t4148;
  t4165 = t2412*t3796;
  t4174 = 0. + t4156 + t4165;
  t532 = -0.21935*t140*t455;
  t3654 = -0.0875*t882;
  t4300 = Sin(var1[12]);
  t4254 = Cos(var1[12]);
  t4326 = Sin(var1[13]);
  t4332 = t1513*t4326;
  t4335 = Cos(var1[13]);
  t4336 = -1.*t4300;
  t4343 = 0. + t4336;
  t4358 = t4343*t882;
  t4362 = t4254*t1270;
  t4363 = 0. + t4358 + t4362;
  t4377 = t4335*t4363;
  t4381 = 0. + t4332 + t4377;
  t1779 = -0.21935*t140*t798;
  t3916 = -0.0875*t1801;
  t4287 = 0. + t4254;
  t4424 = Cos(var1[14]);
  t4436 = 0. + t4424;
  t4586 = t4326*t2087;
  t4606 = t4254*t1880;
  t4609 = t4343*t1801;
  t4611 = 0. + t4606 + t4609;
  t4639 = t4335*t4611;
  t4651 = 0. + t4586 + t4639;
  t4441 = Sin(var1[14]);
  t4057 = -0.0875*t140*t642;
  t4734 = t4254*t790*t140;
  t4751 = t140*t4343*t642;
  t4784 = 0. + t4734 + t4751;
  t4849 = t4335*t4784;
  t4852 = t4326*t2412;
  t4861 = 0. + t4849 + t4852;
  t2615 = 0.21935*t768;
  p_output1[0]=var1[0];
  p_output1[1]=var1[1];
  p_output1[2]=var1[2];
  p_output1[3]=var1[3];
  p_output1[4]=var1[4];
  p_output1[5]=var1[5];
  p_output1[6]=t1018 - 0.25*t1594 - 0.27*(t1594*t1618 + (0. + t1513*t1523 - 1.*t1515*t1586)*t1644) + t532 + 0.037*(0. + t1165*t1270 + t1076*t882) + var1[0];
  p_output1[7]=t1779 + t1839 + 0.037*(0. + t1076*t1801 + t1165*t1880) - 0.25*t2221 - 0.27*(t1644*(0. + t1523*t2087 - 1.*t1515*t2172) + t1618*t2221) + var1[1];
  p_output1[8]=t2332 - 0.25*t2506 - 0.27*(t1644*(0. - 1.*t1515*t2390 + t1523*t2412) + t1618*t2506) + t2615 + 0.037*(0. + t1076*t140*t642 + t1165*t140*t790) + var1[2];
  p_output1[9]=t1018 + t2661 - 0.25*t2961 - 0.27*(t2961*t2973 + (0. + t1513*t2830 - 1.*t2779*t2923)*t2999) + 0.037*(0. + t1270*t2721 + t2693*t882) + var1[0];
  p_output1[10]=t1839 + 0.037*(0. + t1801*t2693 + t1880*t2721) + t3092 - 0.25*t3238 - 0.27*(t2999*(0. + t2087*t2830 - 1.*t2779*t3179) + t2973*t3238) + var1[1];
  p_output1[11]=t2332 - 0.25*t3565 - 0.27*(t2999*(0. + t2412*t2830 - 1.*t2779*t3448) + t2973*t3565) + t3625 + 0.037*(0. + t140*t2693*t642 + t140*t2721*t790) + var1[2];
  p_output1[12]=t2661 + t3654 - 0.25*t3819 - 0.27*(t3819*t3854 + (0. + t1513*t3753 - 1.*t3788*t3796)*t3880) - 0.037*(0. + t1270*t3728 + t3693*t882) + var1[0];
  p_output1[13]=t3092 - 0.037*(0. + t1801*t3693 + t1880*t3728) + t3916 - 0.25*t3997 - 0.27*(t3880*(0. + t2087*t3753 - 1.*t3796*t3954) + t3854*t3997) + var1[1];
  p_output1[14]=t3625 + t4057 - 0.25*t4174 - 0.27*(t3880*(0. + t2412*t3753 - 1.*t3796*t4148) + t3854*t4174) - 0.037*(0. + t140*t3693*t642 + t140*t3728*t790) + var1[2];
  p_output1[15]=t3654 - 0.25*t4381 - 0.27*(t4381*t4436 + (0. + t1513*t4335 - 1.*t4326*t4363)*t4441) + t532 - 0.037*(0. + t1270*t4300 + t4287*t882) + var1[0];
  p_output1[16]=t1779 + t3916 - 0.037*(0. + t1801*t4287 + t1880*t4300) - 0.25*t4651 - 0.27*(t4441*(0. + t2087*t4335 - 1.*t4326*t4611) + t4436*t4651) + var1[1];
  p_output1[17]=t2615 + t4057 - 0.25*t4861 - 0.27*(t4441*(0. + t2412*t4335 - 1.*t4326*t4784) + t4436*t4861) - 0.037*(0. + t140*t4287*t642 + t140*t4300*t790) + var1[2];
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
