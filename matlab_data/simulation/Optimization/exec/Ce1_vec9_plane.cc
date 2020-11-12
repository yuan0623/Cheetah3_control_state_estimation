/*
 * Automatically Generated from Mathematica.
 * Sun 28 Jul 2019 02:50:01 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t495;
  double t569;
  double t596;
  double t621;
  double t645;
  double t646;
  double t676;
  double t146;
  double t335;
  double t419;
  double t875;
  double t879;
  double t1050;
  double t1053;
  double t1057;
  double t2105;
  double t2124;
  double t2166;
  double t2189;
  double t2492;
  double t2494;
  double t2503;
  double t2480;
  double t2483;
  double t2485;
  double t2488;
  double t2489;
  double t2506;
  double t2518;
  double t2519;
  double t2526;
  double t2532;
  double t2533;
  double t2536;
  double t2562;
  double t2301;
  double t2343;
  double t2367;
  double t2387;
  double t2388;
  double t2389;
  double t689;
  double t890;
  double t930;
  double t2642;
  double t1077;
  double t1100;
  double t1152;
  double t1347;
  double t1350;
  double t1388;
  double t1661;
  double t1832;
  double t1873;
  double t2082;
  double t2196;
  double t2208;
  double t2374;
  double t2413;
  double t2446;
  double t3019;
  double t3021;
  double t3033;
  double t3034;
  double t3037;
  double t3038;
  double t3051;
  double t3060;
  double t3065;
  double t3072;
  double t3077;
  double t3078;
  double t3079;
  double t3082;
  double t3091;
  double t2565;
  double t2573;
  double t2574;
  double t2608;
  double t2609;
  double t2611;
  double t2712;
  double t2714;
  double t2719;
  double t2729;
  double t2747;
  double t2749;
  double t3281;
  double t3306;
  double t3307;
  double t3313;
  double t3314;
  double t3320;
  double t3335;
  double t3346;
  double t3349;
  double t3451;
  double t3472;
  double t3417;
  double t3479;
  double t3492;
  double t3585;
  double t3662;
  double t3663;
  double t3664;
  double t3678;
  double t3719;
  double t3727;
  double t3731;
  double t3740;
  double t3408;
  double t3751;
  double t3758;
  double t3769;
  double t3841;
  double t3909;
  double t3989;
  double t4173;
  double t4270;
  double t4454;
  double t4456;
  double t4482;
  double t4504;
  double t4528;
  double t4547;
  double t4610;
  double t4631;
  double t4685;
  double t4699;
  double t4702;
  double t4706;
  double t3372;
  double t3373;
  double t3401;
  double t3761;
  double t4875;
  double t4877;
  double t4880;
  double t4973;
  double t4983;
  double t4396;
  double t4423;
  double t4563;
  double t4735;
  double t4741;
  double t4783;
  double t4785;
  double t4800;
  double t4860;
  double t4929;
  double t4933;
  double t4958;
  double t5139;
  double t5397;
  double t5399;
  double t5402;
  double t5875;
  double t5890;
  double t5892;
  double t4451;
  double t4767;
  double t4801;
  double t4820;
  double t6105;
  double t6132;
  double t6168;
  double t6209;
  double t6225;
  double t6240;
  double t5564;
  double t5636;
  double t5664;
  double t5669;
  double t5729;
  double t5764;
  double t5766;
  double t5767;
  double t6026;
  double t6027;
  double t6031;
  double t6035;
  double t6488;
  double t6490;
  double t6496;
  double t6653;
  double t6654;
  double t6664;
  double t6671;
  double t6689;
  double t6695;
  double t6696;
  double t6733;
  double t6742;
  double t6743;
  double t6724;
  double t6726;
  double t6728;
  double t6701;
  double t6709;
  double t6712;
  double t6650;
  double t6942;
  double t6949;
  double t6953;
  double t6954;
  double t6961;
  double t6963;
  double t6967;
  double t6968;
  double t7008;
  double t7021;
  double t7057;
  double t7083;
  double t7091;
  double t7095;
  double t6748;
  double t6978;
  double t6989;
  double t6990;
  double t6764;
  double t6769;
  double t7249;
  double t7256;
  double t7262;
  double t7079;
  double t7120;
  double t7124;
  double t6832;
  double t6834;
  double t6902;
  double t6914;
  double t4943;
  double t6100;
  double t5425;
  double t5487;
  double t5488;
  double t6295;
  double t5790;
  double t6357;
  double t5846;
  double t5931;
  double t5942;
  double t6439;
  double t7545;
  double t7562;
  double t6208;
  double t6280;
  double t7851;
  double t7857;
  double t7893;
  double t7934;
  double t7935;
  double t6403;
  double t6421;
  double t7977;
  double t7988;
  double t7991;
  double t6744;
  double t6752;
  double t6814;
  double t6833;
  double t8222;
  double t6998;
  double t8270;
  double t8282;
  double t7295;
  double t7317;
  double t8332;
  double t8337;
  double t7459;
  double t8352;
  double t8572;
  double t8584;
  double t8589;
  double t8591;
  double t8592;
  double t8599;
  double t8605;
  double t8617;
  double t8618;
  double t8712;
  double t8716;
  double t8720;
  double t8722;
  double t8726;
  double t8727;
  t495 = Cos(var1[8]);
  t569 = Sin(var1[7]);
  t596 = -1.*t495*t569;
  t621 = Cos(var1[7]);
  t645 = Sin(var1[8]);
  t646 = -1.*t621*t645;
  t676 = t596 + t646;
  t146 = Cos(var1[4]);
  t335 = Cos(var1[5]);
  t419 = Cos(var1[6]);
  t875 = Sin(var1[5]);
  t879 = Sin(var1[6]);
  t1050 = t621*t495;
  t1053 = -1.*t569*t645;
  t1057 = t1050 + t1053;
  t2105 = Sin(var1[4]);
  t2124 = -1.*t419*t875*t676;
  t2166 = t335*t879*t676;
  t2189 = t2124 + t2166;
  t2492 = -1.*t621*t495;
  t2494 = t569*t645;
  t2503 = t2492 + t2494;
  t2480 = t2105*t1057;
  t2483 = t146*t2189;
  t2485 = t2480 + t2483;
  t2488 = 0.00482*t2485;
  t2489 = t2105*t676;
  t2506 = -1.*t419*t875*t2503;
  t2518 = t335*t879*t2503;
  t2519 = t2506 + t2518;
  t2526 = t146*t2519;
  t2532 = t2489 + t2526;
  t2533 = -0.03856*t2532;
  t2536 = t2488 + t2533;
  t2562 = Sin(var1[3]);
  t2301 = t495*t569;
  t2343 = t621*t645;
  t2367 = t2301 + t2343;
  t2387 = -1.*t419*t875*t1057;
  t2388 = t335*t879*t1057;
  t2389 = t2387 + t2388;
  t689 = -1.*t335*t419*t676;
  t890 = -1.*t875*t879*t676;
  t930 = t689 + t890;
  t2642 = Cos(var1[3]);
  t1077 = -1.*t335*t419*t1057;
  t1100 = -1.*t875*t879*t1057;
  t1152 = t1077 + t1100;
  t1347 = t335*t419*t676;
  t1350 = t875*t879*t676;
  t1388 = t1347 + t1350;
  t1661 = t335*t419*t1057;
  t1832 = t875*t879*t1057;
  t1873 = t1661 + t1832;
  t2082 = t146*t1057;
  t2196 = -1.*t2105*t2189;
  t2208 = t2082 + t2196;
  t2374 = t146*t2367;
  t2413 = -1.*t2105*t2389;
  t2446 = t2374 + t2413;
  t3019 = t2642*t1388;
  t3021 = -1.*t2562*t2208;
  t3033 = t3019 + t3021;
  t3034 = 0.00482*t3033;
  t3037 = t335*t419*t2503;
  t3038 = t875*t879*t2503;
  t3051 = t3037 + t3038;
  t3060 = t2642*t3051;
  t3065 = t146*t676;
  t3072 = -1.*t2105*t2519;
  t3077 = t3065 + t3072;
  t3078 = -1.*t2562*t3077;
  t3079 = t3060 + t3078;
  t3082 = -0.03856*t3079;
  t3091 = t3034 + t3082;
  t2565 = -1.*t2105*t1057;
  t2573 = -1.*t146*t2189;
  t2574 = t2565 + t2573;
  t2608 = -1.*t2105*t2367;
  t2609 = -1.*t146*t2389;
  t2611 = t2608 + t2609;
  t2712 = t419*t875*t676;
  t2714 = -1.*t335*t879*t676;
  t2719 = t2712 + t2714;
  t2729 = t419*t875*t1057;
  t2747 = -1.*t335*t879*t1057;
  t2749 = t2729 + t2747;
  t3281 = t2562*t1388;
  t3306 = t2642*t2208;
  t3307 = t3281 + t3306;
  t3313 = 0.00482*t3307;
  t3314 = t2562*t3051;
  t3320 = t2642*t3077;
  t3335 = t3314 + t3320;
  t3346 = -0.03856*t3335;
  t3349 = t3313 + t3346;
  t3451 = -1.*t495;
  t3472 = 1. + t3451;
  t3417 = 0.242889*t569;
  t3479 = 0.100689*t3472;
  t3492 = 0.080689*t495;
  t3585 = -0.16*t645;
  t3662 = t3479 + t3492 + t3585;
  t3663 = -1.*t569*t3662;
  t3664 = -0.20833*t3472;
  t3678 = -0.36833*t495;
  t3719 = 0.02*t645;
  t3727 = t3664 + t3678 + t3719;
  t3731 = t621*t3727;
  t3740 = t3417 + t3663 + t3731;
  t3408 = 0.032875*t879;
  t3751 = t419*t3740;
  t3758 = t3408 + t3751;
  t3769 = -1.*t419;
  t3841 = 1. + t3769;
  t3909 = -0.081715*t3841;
  t3989 = -0.11459*t419;
  t4173 = t879*t3740;
  t4270 = t3909 + t3989 + t4173;
  t4454 = t335*t419;
  t4456 = t875*t879;
  t4482 = t4454 + t4456;
  t4504 = -1.*t875*t3758;
  t4528 = t335*t4270;
  t4547 = t4504 + t4528;
  t4610 = -1.*t621;
  t4631 = 1. + t4610;
  t4685 = 0.242889*t4631;
  t4699 = t621*t3662;
  t4702 = t569*t3727;
  t4706 = t4685 + t4699 + t4702;
  t3372 = t419*t875;
  t3373 = -1.*t335*t879;
  t3401 = t3372 + t3373;
  t3761 = t335*t3758;
  t4875 = 0.032875*t419;
  t4877 = -1.*t879*t3740;
  t4880 = t4875 + t4877;
  t4973 = -1.*t875*t4880;
  t4983 = t3761 + t4973;
  t4396 = t875*t4270;
  t4423 = t3761 + t4396;
  t4563 = -1.*t2105*t4547;
  t4735 = t146*t4706;
  t4741 = t4563 + t4735;
  t4783 = t146*t4547;
  t4785 = t2105*t4706;
  t4800 = t4783 + t4785;
  t4860 = t875*t3758;
  t4929 = t335*t4880;
  t4933 = t4860 + t4929;
  t4958 = Power(t146,2);
  t5139 = Power(t2105,2);
  t5397 = -1.*t335*t419;
  t5399 = -1.*t875*t879;
  t5402 = t5397 + t5399;
  t5875 = t2105*t2367;
  t5890 = t146*t2389;
  t5892 = t5875 + t5890;
  t4451 = t3401*t4423;
  t4767 = -1.*t2105*t4482*t4741;
  t4801 = t146*t4482*t4800;
  t4820 = t4451 + t4767 + t4801;
  t6105 = -1.*t335*t3758;
  t6132 = -1.*t875*t4270;
  t6168 = t6105 + t6132;
  t6209 = -1.*t419*t875;
  t6225 = t335*t879;
  t6240 = t6209 + t6225;
  t5564 = -1.*t4423*t1388;
  t5636 = -1.*t4800*t2485;
  t5664 = -1.*t4741*t2208;
  t5669 = t5564 + t5636 + t5664;
  t5729 = -1.*t3401*t4423;
  t5764 = t2105*t4482*t4741;
  t5766 = -1.*t146*t4482*t4800;
  t5767 = t5729 + t5764 + t5766;
  t6026 = t4423*t1873;
  t6027 = t4800*t5892;
  t6031 = t4741*t2446;
  t6035 = t6026 + t6027 + t6031;
  t6488 = -1.*t146*t4547;
  t6490 = -1.*t2105*t4706;
  t6496 = t6488 + t6490;
  t6653 = 0.242889*t621;
  t6654 = -1.*t621*t3662;
  t6664 = -1.*t569*t3727;
  t6671 = t6653 + t6654 + t6664;
  t6689 = -1.*t419*t875*t6671;
  t6695 = t335*t879*t6671;
  t6696 = t6689 + t6695;
  t6733 = t335*t419*t6671;
  t6742 = t875*t879*t6671;
  t6743 = t6733 + t6742;
  t6724 = t146*t6696;
  t6726 = t2105*t3740;
  t6728 = t6724 + t6726;
  t6701 = -1.*t2105*t6696;
  t6709 = t146*t3740;
  t6712 = t6701 + t6709;
  t6650 = t5767*t2485;
  t6942 = -0.16*t495;
  t6949 = t6942 + t3719;
  t6953 = -1.*t569*t6949;
  t6954 = 0.02*t495;
  t6961 = 0.16*t645;
  t6963 = t6954 + t6961;
  t6967 = t621*t6963;
  t6968 = t6953 + t6967;
  t7008 = -1.*t419*t875*t6968;
  t7021 = t335*t879*t6968;
  t7057 = t7008 + t7021;
  t7083 = t621*t6949;
  t7091 = t569*t6963;
  t7095 = t7083 + t7091;
  t6748 = t4423*t1388;
  t6978 = t335*t419*t6968;
  t6989 = t875*t879*t6968;
  t6990 = t6978 + t6989;
  t6764 = t4800*t2485;
  t6769 = t4741*t2208;
  t7249 = t146*t7057;
  t7256 = t2105*t7095;
  t7262 = t7249 + t7256;
  t7079 = -1.*t2105*t7057;
  t7120 = t146*t7095;
  t7124 = t7079 + t7120;
  t6832 = t4820*t2532;
  t6834 = -1.*t4423*t3051;
  t6902 = -1.*t4800*t2532;
  t6914 = -1.*t4741*t3077;
  t4943 = t3401*t4933;
  t6100 = t3401*t4547;
  t5425 = t5402*t4423;
  t5487 = -1.*t4423*t2719;
  t5488 = -1.*t4933*t1388;
  t6295 = -1.*t4547*t1388;
  t5790 = -1.*t3401*t4933;
  t6357 = -1.*t3401*t4547;
  t5846 = -1.*t5402*t4423;
  t5931 = t4423*t2749;
  t5942 = t4933*t1873;
  t6439 = t4547*t1873;
  t7545 = t4482*t4547;
  t7562 = t7545 + t4451;
  t6208 = t4482*t4423;
  t6280 = -1.*t4423*t2189;
  t7851 = -1.*t4706*t1057;
  t7857 = -1.*t4547*t2189;
  t7893 = t7851 + t7857 + t5564;
  t7934 = -1.*t4482*t4547;
  t7935 = t7934 + t5729;
  t6403 = -1.*t4482*t4423;
  t6421 = t4423*t2389;
  t7977 = t4706*t2367;
  t7988 = t4547*t2389;
  t7991 = t7977 + t7988 + t6026;
  t6744 = -1.*t3401*t6743;
  t6752 = t6743*t1873;
  t6814 = t3401*t6743;
  t6833 = -1.*t6743*t1388;
  t8222 = t7935*t1388;
  t6998 = -1.*t3401*t6990;
  t8270 = t4706*t1057;
  t8282 = t4547*t2189;
  t7295 = t6990*t1873;
  t7317 = t3401*t6990;
  t8332 = t7562*t3051;
  t8337 = -1.*t4706*t676;
  t7459 = -1.*t6990*t1388;
  t8352 = -1.*t4547*t2519;
  t8572 = -1.*t879*t3758;
  t8584 = t419*t4270;
  t8589 = t8572 + t8584;
  t8591 = 0.00482*t8589*t676;
  t8592 = t879*t3758;
  t8599 = -1.*t419*t4270;
  t8605 = t8592 + t8599;
  t8617 = -0.03856*t8605*t1057;
  t8618 = t8591 + t8617;
  t8712 = 0.0001584575*t676;
  t8716 = -0.11459*t1057;
  t8720 = -0.081715*t2503;
  t8722 = t8716 + t8720;
  t8726 = -0.03856*t8722;
  t8727 = t8712 + t8726;
  p_output1[0]=var2[8]*(-0.5*(-0.03856*t2208 + 0.00482*t2446)*var2[4] - 0.5*(0.00482*t1152*t146 - 0.03856*t146*t930)*var2[5] - 0.5*(-0.03856*t1388*t146 + 0.00482*t146*t1873)*var2[6] - 0.5*t2536*var2[7] - 0.5*t2536*var2[8]);
  p_output1[1]=var2[8]*(-0.5*(-0.03856*(-1.*t1388*t2562 - 1.*t2208*t2642) + 0.00482*(-1.*t1873*t2562 - 1.*t2446*t2642))*var2[3] - 0.5*(0.03856*t2562*t2574 - 0.00482*t2562*t2611)*var2[4] - 0.5*(0.00482*(t1152*t2105*t2562 + t2389*t2642) - 0.03856*(t2189*t2642 + t2105*t2562*t930))*var2[5] - 0.5*(-0.03856*(t1388*t2105*t2562 + t2642*t2719) + 0.00482*(t1873*t2105*t2562 + t2642*t2749))*var2[6] - 0.5*t3091*var2[7] - 0.5*t3091*var2[8]);
  p_output1[2]=var2[8]*(-0.5*(0.00482*(-1.*t2446*t2562 + t1873*t2642) - 0.03856*t3033)*var2[3] - 0.5*(-0.03856*t2574*t2642 + 0.00482*t2611*t2642)*var2[4] - 0.5*(0.00482*(t2389*t2562 - 1.*t1152*t2105*t2642) - 0.03856*(t2189*t2562 - 1.*t2105*t2642*t930))*var2[5] - 0.5*(-0.03856*(-1.*t1388*t2105*t2642 + t2562*t2719) + 0.00482*(-1.*t1873*t2105*t2642 + t2562*t2749))*var2[6] - 0.5*t3349*var2[7] - 0.5*t3349*var2[8]);
  p_output1[3]=var2[8]*(-0.5*(0.00482*(t2208*t4820 - 1.*t2105*t4482*t5669 + t146*t4482*(-1.*t2485*t4741 - 1.*t2574*t4741 - 1.*t2208*t4800 - 1.*t2208*t6496) + t2485*(-1.*t2105*t4482*t4800 - 1.*t2105*t4482*t6496)) - 0.03856*(t2446*t5767 - 1.*t2105*t4482*t6035 + t146*t4482*(t2611*t4741 + t2446*t4800 + t4741*t5892 + t2446*t6496) + t5892*(t2105*t4482*t4800 + t2105*t4482*t6496)))*var2[4] - 0.5*(-0.03856*(t1152*t146*t5767 + t146*t6035*t6240 + t5892*(-1.*t4482*t4958*t6168 - 1.*t4482*t5139*t6168 + t2105*t4741*t6240 - 1.*t146*t4800*t6240 + t6357 + t6403) + t146*t4482*(-1.*t1152*t2105*t4741 + t1152*t146*t4800 - 1.*t2105*t2446*t6168 + t146*t5892*t6168 + t6421 + t6439)) + 0.00482*(t146*t5669*t6240 + t2485*(t6100 + t4482*t4958*t6168 + t4482*t5139*t6168 + t6208 - 1.*t2105*t4741*t6240 + t146*t4800*t6240) + t146*t4820*t930 + t146*t4482*(t2105*t2208*t6168 - 1.*t146*t2485*t6168 + t6280 + t6295 + t2105*t4741*t930 - 1.*t146*t4800*t930)))*var2[5] - 0.5*(0.00482*(t1388*t146*t4820 + t2485*(-1.*t2105*t3401*t4741 + t146*t3401*t4800 + t4943 + t4482*t4958*t4983 + t4482*t4983*t5139 + t5425) + t146*t4482*(t1388*t2105*t4741 - 1.*t1388*t146*t4800 + t2105*t2208*t4983 - 1.*t146*t2485*t4983 + t5487 + t5488) + t146*t3401*t5669) - 0.03856*(t146*t1873*t5767 + (t2105*t3401*t4741 - 1.*t146*t3401*t4800 - 1.*t4482*t4958*t4983 - 1.*t4482*t4983*t5139 + t5790 + t5846)*t5892 + t146*t4482*(-1.*t1873*t2105*t4741 + t146*t1873*t4800 - 1.*t2105*t2446*t4983 + t146*t4983*t5892 + t5931 + t5942) + t146*t3401*t6035))*var2[6] - 0.5*(-0.03856*(t6650 + t5892*(t2105*t4482*t6712 - 1.*t146*t4482*t6728 + t6744) + t146*t4482*(t2446*t6712 + t5892*t6728 + t6748 + t6752 + t6764 + t6769)) + 0.00482*(t2485*(-1.*t2105*t4482*t6712 + t146*t4482*t6728 + t6814) + t6832 + t146*t4482*(-1.*t2208*t6712 - 1.*t2485*t6728 + t6833 + t6834 + t6902 + t6914)))*var2[7] - 0.5*(-0.03856*(t6650 + t5892*(t6998 + t2105*t4482*t7124 - 1.*t146*t4482*t7262) + t146*t4482*(t6748 + t6764 + t6769 + t2446*t7124 + t5892*t7262 + t7295)) + 0.00482*(t6832 + t2485*(-1.*t2105*t4482*t7124 + t146*t4482*t7262 + t7317) + t146*t4482*(t6834 + t6902 + t6914 - 1.*t2208*t7124 - 1.*t2485*t7262 + t7459)))*var2[8]);
  p_output1[4]=var2[8]*(-0.5*(-0.03856*(t1873*(-1.*t4482*t6168 - 1.*t4547*t6240 + t6357 + t6403) + t3401*(t1152*t4547 + t2389*t6168 + t6421 + t6439) + t2389*t7935 + t4482*t7991) + 0.00482*(t1388*(t6100 + t4482*t6168 + t6208 + t4547*t6240) + t2189*t7562 + t4482*t7893 + t3401*(-1.*t2189*t6168 + t6280 + t6295 - 1.*t4547*t930)))*var2[5] - 0.5*(0.00482*(t1388*(t4943 + t4482*t4983 + t5425 + t6100) + t3401*(-1.*t2189*t4983 + t5487 + t5488 + t6295) + t2719*t7562 + t5402*t7893) - 0.03856*(t1873*(-1.*t4482*t4983 + t5790 + t5846 + t6357) + t3401*(t2389*t4983 + t5931 + t5942 + t6439) + t2749*t7935 + t5402*t7991))*var2[6] - 0.5*(-0.03856*(t1873*(-1.*t4482*t6696 + t6744) + t8222 + t3401*(t2367*t3740 + t2389*t6696 + t6748 + t6752 + t8270 + t8282)) + 0.00482*(t1388*(t4482*t6696 + t6814) + t8332 + t3401*(-1.*t1057*t3740 - 1.*t2189*t6696 + t6833 + t6834 + t8337 + t8352)))*var2[7] - 0.5*(-0.03856*(t1873*(t6998 - 1.*t4482*t7057) + t8222 + t3401*(t6748 + t2389*t7057 + t2367*t7095 + t7295 + t8270 + t8282)) + 0.00482*(t1388*(t4482*t7057 + t7317) + t8332 + t3401*(t6834 - 1.*t2189*t7057 - 1.*t1057*t7095 + t7459 + t8337 + t8352)))*var2[8]);
  p_output1[5]=var2[8]*(-0.5*(0.00482*t1057*(-1.*t4270*t879 - 1.*t4880*t879) - 0.03856*t2367*(t4270*t879 + t4880*t879))*var2[6] - 0.5*t8618*var2[7] - 0.5*t8618*var2[8]);
  p_output1[6]=var2[8]*(-0.5*t8727*var2[7] - 0.5*t8727*var2[8]);
  p_output1[7]=-0.5*(-0.03856*(-0.242889*t495 + t3662*t495 - 1.*t3727*t645 + t645*t6949 + t495*t6963) + 0.00482*(t3727*t495 - 0.242889*t645 + t3662*t645 - 1.*t495*t6949 + t645*t6963))*Power(var2[8],2);
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce1_vec9_plane.hh"

namespace SymFunction
{

void Ce1_vec9_plane_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
