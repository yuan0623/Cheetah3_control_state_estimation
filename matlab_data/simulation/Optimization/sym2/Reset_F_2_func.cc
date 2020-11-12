/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 21:23:21 GMT-05:00
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
  double t192;
  double t167;
  double t418;
  double t386;
  double t373;
  double t456;
  double t392;
  double t608;
  double t723;
  double t696;
  double t811;
  double t823;
  double t833;
  double t1292;
  double t1174;
  double t1110;
  double t1298;
  double t1305;
  double t1311;
  double t1336;
  double t1444;
  double t1261;
  double t1447;
  double t1452;
  double t1490;
  double t1520;
  double t1532;
  double t1769;
  double t1788;
  double t1622;
  double t703;
  double t2228;
  double t2264;
  double t2357;
  double t2502;
  double t2565;
  double t2709;
  double t2729;
  double t2733;
  double t2736;
  double t1673;
  double t1738;
  double t2724;
  double t2745;
  double t2751;
  double t2790;
  double t2793;
  double t2794;
  double t1929;
  double t3017;
  double t3020;
  double t3043;
  double t3093;
  double t3114;
  double t3037;
  double t3117;
  double t3125;
  double t3179;
  double t3197;
  double t3213;
  double t336;
  double t649;
  double t3461;
  double t3401;
  double t3615;
  double t3536;
  double t3617;
  double t3618;
  double t3625;
  double t3632;
  double t3641;
  double t3613;
  double t3651;
  double t3661;
  double t3678;
  double t3679;
  double t3680;
  double t3728;
  double t3737;
  double t3703;
  double t2178;
  double t2265;
  double t3410;
  double t3928;
  double t3936;
  double t3938;
  double t3708;
  double t3711;
  double t3893;
  double t3939;
  double t3946;
  double t3953;
  double t3954;
  double t3959;
  double t3784;
  double t2929;
  double t4087;
  double t4093;
  double t4095;
  double t4066;
  double t4102;
  double t4106;
  double t4115;
  double t4120;
  double t4123;
  double t3398;
  double t4210;
  double t4205;
  double t4239;
  double t4236;
  double t4240;
  double t4241;
  double t4244;
  double t4269;
  double t4238;
  double t4278;
  double t4279;
  double t4296;
  double t4297;
  double t4298;
  double t4322;
  double t4324;
  double t4314;
  double t3831;
  double t4206;
  double t4407;
  double t4409;
  double t4415;
  double t4316;
  double t4320;
  double t4406;
  double t4420;
  double t4421;
  double t4424;
  double t4425;
  double t4426;
  double t4361;
  double t4027;
  double t4507;
  double t4510;
  double t4516;
  double t4501;
  double t4523;
  double t4526;
  double t4537;
  double t4543;
  double t4558;
  t192 = Cos(var1[5]);
  t167 = Cos(var1[4]);
  t418 = Sin(var1[3]);
  t386 = Sin(var1[4]);
  t373 = Cos(var1[3]);
  t456 = Sin(var1[5]);
  t392 = t373*t192*t386;
  t608 = t418*t456;
  t723 = Sin(var1[9]);
  t696 = Cos(var1[9]);
  t811 = t192*t418*t386;
  t823 = -1.*t373*t456;
  t833 = t811 + t823;
  t1292 = Cos(var1[10]);
  t1174 = 0. + t392 + t608;
  t1110 = Sin(var1[10]);
  t1298 = -1.*t723;
  t1305 = 0. + t1298;
  t1311 = t167*t192*t1305;
  t1336 = t696*t833;
  t1444 = 0. + t1311 + t1336;
  t1261 = t1110*t1174;
  t1447 = t1292*t1444;
  t1452 = 0. + t1261 + t1447;
  t1490 = t1292*t1174;
  t1520 = -1.*t1110*t1444;
  t1532 = 0. + t1490 + t1520;
  t1769 = Cos(var1[11]);
  t1788 = 0. + t1769;
  t1622 = Sin(var1[11]);
  t703 = 0. + t696;
  t2228 = -1.*t192*t418;
  t2264 = t373*t386*t456;
  t2357 = t373*t192;
  t2502 = t418*t386*t456;
  t2565 = t2357 + t2502;
  t2709 = 0. + t2228 + t2264;
  t2729 = t167*t1305*t456;
  t2733 = t696*t2565;
  t2736 = 0. + t2729 + t2733;
  t1673 = -1.*t1622;
  t1738 = 0. + t1673;
  t2724 = t1110*t2709;
  t2745 = t1292*t2736;
  t2751 = 0. + t2724 + t2745;
  t2790 = t1292*t2709;
  t2793 = -1.*t1110*t2736;
  t2794 = 0. + t2790 + t2793;
  t1929 = 0. + t1622;
  t3017 = t373*t167;
  t3020 = 0. + t3017;
  t3043 = t696*t167*t418;
  t3093 = -1.*t1305*t386;
  t3114 = 0. + t3043 + t3093;
  t3037 = t3020*t1110;
  t3117 = t1292*t3114;
  t3125 = 0. + t3037 + t3117;
  t3179 = t1292*t3020;
  t3197 = -1.*t1110*t3114;
  t3213 = 0. + t3179 + t3197;
  t336 = 0.0817*t167*t192;
  t649 = t392 + t608;
  t3461 = Sin(var1[15]);
  t3401 = Cos(var1[15]);
  t3615 = Cos(var1[16]);
  t3536 = Sin(var1[16]);
  t3617 = -1.*t3461;
  t3618 = 0. + t3617;
  t3625 = t167*t192*t3618;
  t3632 = t3401*t833;
  t3641 = 0. + t3625 + t3632;
  t3613 = t3536*t1174;
  t3651 = t3615*t3641;
  t3661 = 0. + t3613 + t3651;
  t3678 = t3615*t1174;
  t3679 = -1.*t3536*t3641;
  t3680 = 0. + t3678 + t3679;
  t3728 = Cos(var1[17]);
  t3737 = 0. + t3728;
  t3703 = Sin(var1[17]);
  t2178 = 0.0817*t167*t456;
  t2265 = t2228 + t2264;
  t3410 = 0. + t3401;
  t3928 = t167*t3618*t456;
  t3936 = t3401*t2565;
  t3938 = 0. + t3928 + t3936;
  t3708 = -1.*t3703;
  t3711 = 0. + t3708;
  t3893 = t3536*t2709;
  t3939 = t3615*t3938;
  t3946 = 0. + t3893 + t3939;
  t3953 = t3615*t2709;
  t3954 = -1.*t3536*t3938;
  t3959 = 0. + t3953 + t3954;
  t3784 = 0. + t3703;
  t2929 = -0.0817*t386;
  t4087 = t3401*t167*t418;
  t4093 = -1.*t3618*t386;
  t4095 = 0. + t4087 + t4093;
  t4066 = t3020*t3536;
  t4102 = t3615*t4095;
  t4106 = 0. + t4066 + t4102;
  t4115 = t3615*t3020;
  t4120 = -1.*t3536*t4095;
  t4123 = 0. + t4115 + t4120;
  t3398 = -0.1944*t649;
  t4210 = Sin(var1[12]);
  t4205 = Cos(var1[12]);
  t4239 = Cos(var1[13]);
  t4236 = Sin(var1[13]);
  t4240 = 0. + t4210;
  t4241 = t167*t192*t4240;
  t4244 = t4205*t833;
  t4269 = 0. + t4241 + t4244;
  t4238 = t4236*t1174;
  t4278 = t4239*t4269;
  t4279 = 0. + t4238 + t4278;
  t4296 = t4239*t1174;
  t4297 = -1.*t4236*t4269;
  t4298 = 0. + t4296 + t4297;
  t4322 = Cos(var1[14]);
  t4324 = 0. + t4322;
  t4314 = Sin(var1[14]);
  t3831 = -0.1944*t2265;
  t4206 = 0. + t4205;
  t4407 = t167*t4240*t456;
  t4409 = t4205*t2565;
  t4415 = 0. + t4407 + t4409;
  t4316 = -1.*t4314;
  t4320 = 0. + t4316;
  t4406 = t4236*t2709;
  t4420 = t4239*t4415;
  t4421 = 0. + t4406 + t4420;
  t4424 = t4239*t2709;
  t4425 = -1.*t4236*t4415;
  t4426 = 0. + t4424 + t4425;
  t4361 = 0. + t4314;
  t4027 = -0.1944*t373*t167;
  t4507 = t4205*t167*t418;
  t4510 = -1.*t4240*t386;
  t4516 = 0. + t4507 + t4510;
  t4501 = t3020*t4236;
  t4523 = t4239*t4516;
  t4526 = 0. + t4501 + t4523;
  t4537 = t4239*t3020;
  t4543 = -1.*t4236*t4516;
  t4558 = 0. + t4537 + t4543;
  p_output1[0]=-0.2083*t1452 - 0.1422*t1532 - 0.02*(0. + t1452*t1738 + t1532*t1788) - 0.16*(0. + t1452*t1788 + t1532*t1929) + t336 + 0.2429*t649 + 0.035199999999999995*(0. + t167*t192*t703 + t723*t833) + var1[0];
  p_output1[1]=t2178 + 0.2429*t2265 - 0.2083*t2751 - 0.1422*t2794 - 0.02*(0. + t1738*t2751 + t1788*t2794) - 0.16*(0. + t1788*t2751 + t1929*t2794) + 0.035199999999999995*(0. + t167*t456*t703 + t2565*t723) + var1[1];
  p_output1[2]=t2929 - 0.2083*t3125 - 0.1422*t3213 - 0.02*(0. + t1738*t3125 + t1788*t3213) - 0.16*(0. + t1788*t3125 + t1929*t3213) + 0.2429*t167*t373 + 0.035199999999999995*(0. - 1.*t386*t703 + t167*t418*t723) + var1[2];
  p_output1[3]=t336 + t3398 - 0.2083*t3661 - 0.1422*t3680 - 0.02*(0. + t3661*t3711 + t3680*t3737) - 0.16*(0. + t3661*t3737 + t3680*t3784) + 0.035199999999999995*(0. + t167*t192*t3410 + t3461*t833) + var1[0];
  p_output1[4]=t2178 + t3831 - 0.2083*t3946 - 0.1422*t3959 - 0.02*(0. + t3711*t3946 + t3737*t3959) - 0.16*(0. + t3737*t3946 + t3784*t3959) + 0.035199999999999995*(0. + t2565*t3461 + t167*t3410*t456) + var1[1];
  p_output1[5]=t2929 + t4027 - 0.2083*t4106 - 0.1422*t4123 - 0.02*(0. + t3711*t4106 + t3737*t4123) - 0.16*(0. + t3737*t4106 + t3784*t4123) + 0.035199999999999995*(0. - 1.*t3410*t386 + t167*t3461*t418) + var1[2];
  p_output1[6]=-0.0817*t167*t192 + t3398 - 0.2083*t4279 - 0.1422*t4298 - 0.02*(0. + t4279*t4320 + t4298*t4324) - 0.16*(0. + t4279*t4324 + t4298*t4361) - 0.0329*(0. + t167*t192*t4206 - 1.*t4210*t833) + var1[0];
  p_output1[7]=t3831 - 0.2083*t4421 - 0.1422*t4426 - 0.02*(0. + t4320*t4421 + t4324*t4426) - 0.16*(0. + t4324*t4421 + t4361*t4426) - 0.0817*t167*t456 - 0.0329*(0. - 1.*t2565*t4210 + t167*t4206*t456) + var1[1];
  p_output1[8]=0.0817*t386 + t4027 - 0.0329*(0. - 1.*t386*t4206 - 1.*t167*t418*t4210) - 0.2083*t4526 - 0.1422*t4558 - 0.02*(0. + t4320*t4526 + t4324*t4558) - 0.16*(0. + t4324*t4526 + t4361*t4558) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Reset_F_2_func.hh"

namespace SymFunction
{

void Reset_F_2_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
