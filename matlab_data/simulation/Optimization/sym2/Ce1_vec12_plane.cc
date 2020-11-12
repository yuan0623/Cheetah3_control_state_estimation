/*
 * Automatically Generated from Mathematica.
 * Sun 28 Jul 2019 02:50:11 GMT-04:00
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
  double t604;
  double t720;
  double t753;
  double t1306;
  double t1362;
  double t1517;
  double t1701;
  double t92;
  double t205;
  double t420;
  double t2306;
  double t2709;
  double t2713;
  double t2876;
  double t2504;
  double t1777;
  double t2505;
  double t2513;
  double t2645;
  double t3323;
  double t3329;
  double t3513;
  double t3722;
  double t3911;
  double t4488;
  double t4510;
  double t4583;
  double t4703;
  double t6946;
  double t7027;
  double t7143;
  double t6708;
  double t6740;
  double t6874;
  double t6882;
  double t6916;
  double t7414;
  double t7465;
  double t7518;
  double t7576;
  double t7736;
  double t7802;
  double t7915;
  double t7994;
  double t5207;
  double t5656;
  double t6025;
  double t6072;
  double t6074;
  double t6230;
  double t8742;
  double t8743;
  double t8768;
  double t8773;
  double t8774;
  double t8776;
  double t8789;
  double t8793;
  double t8801;
  double t8807;
  double t4421;
  double t4745;
  double t4876;
  double t6055;
  double t6332;
  double t6447;
  double t8908;
  double t8910;
  double t8911;
  double t9256;
  double t9309;
  double t9310;
  double t9345;
  double t9361;
  double t9367;
  double t9376;
  double t9377;
  double t9388;
  double t9391;
  double t9400;
  double t9416;
  double t9422;
  double t9428;
  double t9429;
  double t8033;
  double t8043;
  double t8103;
  double t8225;
  double t8325;
  double t8328;
  double t9694;
  double t9695;
  double t9699;
  double t9700;
  double t9705;
  double t9706;
  double t9727;
  double t9729;
  double t9731;
  double t8942;
  double t8943;
  double t8998;
  double t9780;
  double t9783;
  double t9787;
  double t9789;
  double t9791;
  double t9799;
  double t9822;
  double t9888;
  double t9890;
  double t10083;
  double t10089;
  double t10080;
  double t10101;
  double t10106;
  double t10155;
  double t10156;
  double t10159;
  double t10163;
  double t10175;
  double t10176;
  double t10245;
  double t10251;
  double t10289;
  double t10363;
  double t10364;
  double t10367;
  double t10077;
  double t10327;
  double t10329;
  double t10421;
  double t10424;
  double t10447;
  double t10450;
  double t10451;
  double t10452;
  double t10504;
  double t10526;
  double t10587;
  double t10590;
  double t10597;
  double t10490;
  double t10501;
  double t10502;
  double t10617;
  double t10621;
  double t10622;
  double t10626;
  double t10631;
  double t10639;
  double t10640;
  double t10643;
  double t10650;
  double t10667;
  double t10668;
  double t10671;
  double t10034;
  double t10048;
  double t10052;
  double t10503;
  double t10598;
  double t10599;
  double t10651;
  double t10675;
  double t10684;
  double t10695;
  double t10699;
  double t10700;
  double t10361;
  double t10390;
  double t10391;
  double t10413;
  double t10485;
  double t10794;
  double t10795;
  double t10796;
  double t10910;
  double t10912;
  double t10913;
  double t10610;
  double t10694;
  double t10701;
  double t10730;
  double t10732;
  double t10740;
  double t10741;
  double t10744;
  double t10749;
  double t10753;
  double t10763;
  double t10782;
  double t10783;
  double t10788;
  double t10789;
  double t10790;
  double t10801;
  double t10803;
  double t10805;
  double t10814;
  double t10815;
  double t10818;
  double t10821;
  double t10824;
  double t10833;
  double t10848;
  double t10851;
  double t10868;
  double t10869;
  double t10874;
  double t10877;
  double t10879;
  double t10999;
  double t11000;
  double t11004;
  double t11093;
  double t11094;
  double t11102;
  double t11103;
  double t11212;
  double t11223;
  double t11226;
  double t11104;
  double t11105;
  double t11124;
  double t11150;
  double t11227;
  double t11235;
  double t11240;
  double t11241;
  double t11242;
  double t11090;
  double t11377;
  double t11386;
  double t11395;
  double t11397;
  double t11400;
  double t11412;
  double t11414;
  double t11415;
  double t11435;
  double t11447;
  double t11455;
  double t11459;
  double t11462;
  double t11465;
  double t11252;
  double t11421;
  double t11423;
  double t11431;
  double t11257;
  double t11260;
  double t11458;
  double t11470;
  double t11477;
  double t11479;
  double t11482;
  double t11483;
  double t11286;
  double t11325;
  double t11338;
  double t11348;
  double t10411;
  double t10751;
  double t10797;
  double t10834;
  double t11567;
  double t11568;
  double t11571;
  double t11572;
  double t10903;
  double t11598;
  double t11599;
  double t11601;
  double t11602;
  double t10925;
  double t11609;
  double t11624;
  double t11625;
  double t11626;
  double t11627;
  double t10946;
  double t11633;
  double t11634;
  double t11638;
  double t11640;
  double t10985;
  double t11643;
  double t11127;
  double t11253;
  double t11287;
  double t11324;
  double t11730;
  double t11432;
  double t11746;
  double t11749;
  double t11497;
  double t11760;
  double t11517;
  double t11765;
  double t11541;
  double t11769;
  double t11831;
  double t11833;
  double t11834;
  double t11839;
  double t11841;
  double t11842;
  double t11847;
  double t11848;
  double t11849;
  double t11923;
  double t11924;
  double t11925;
  double t11928;
  double t11929;
  double t11930;
  t604 = Cos(var1[11]);
  t720 = Sin(var1[10]);
  t753 = -1.*t604*t720;
  t1306 = Cos(var1[10]);
  t1362 = Sin(var1[11]);
  t1517 = -1.*t1306*t1362;
  t1701 = t753 + t1517;
  t92 = Cos(var1[4]);
  t205 = Cos(var1[9]);
  t420 = Cos(var1[5]);
  t2306 = Sin(var1[9]);
  t2709 = t1306*t604;
  t2713 = -1.*t720*t1362;
  t2876 = t2709 + t2713;
  t2504 = Sin(var1[5]);
  t1777 = -1.*t205*t420*t1701;
  t2505 = t2306*t1701*t2504;
  t2513 = t1777 + t2505;
  t2645 = -0.03856*t92*t2513;
  t3323 = -1.*t205*t420*t2876;
  t3329 = t2306*t2876*t2504;
  t3513 = t3323 + t3329;
  t3722 = 0.00482*t92*t3513;
  t3911 = t2645 + t3722;
  t4488 = Sin(var1[4]);
  t4510 = -1.*t420*t2306*t1701;
  t4583 = -1.*t205*t1701*t2504;
  t4703 = t4510 + t4583;
  t6946 = -1.*t1306*t604;
  t7027 = t720*t1362;
  t7143 = t6946 + t7027;
  t6708 = t2876*t4488;
  t6740 = t92*t4703;
  t6874 = t6708 + t6740;
  t6882 = 0.00482*t6874;
  t6916 = t1701*t4488;
  t7414 = -1.*t420*t2306*t7143;
  t7465 = -1.*t205*t7143*t2504;
  t7518 = t7414 + t7465;
  t7576 = t92*t7518;
  t7736 = t6916 + t7576;
  t7802 = -0.03856*t7736;
  t7915 = t6882 + t7802;
  t7994 = Sin(var1[3]);
  t5207 = t604*t720;
  t5656 = t1306*t1362;
  t6025 = t5207 + t5656;
  t6072 = -1.*t420*t2306*t2876;
  t6074 = -1.*t205*t2876*t2504;
  t6230 = t6072 + t6074;
  t8742 = Cos(var1[3]);
  t8743 = t8742*t4703;
  t8768 = t7994*t4488*t2513;
  t8773 = t8743 + t8768;
  t8774 = -0.03856*t8773;
  t8776 = t8742*t6230;
  t8789 = t7994*t4488*t3513;
  t8793 = t8776 + t8789;
  t8801 = 0.00482*t8793;
  t8807 = t8774 + t8801;
  t4421 = t92*t2876;
  t4745 = -1.*t4488*t4703;
  t4876 = t4421 + t4745;
  t6055 = t92*t6025;
  t6332 = -1.*t4488*t6230;
  t6447 = t6055 + t6332;
  t8908 = t205*t420*t1701;
  t8910 = -1.*t2306*t1701*t2504;
  t8911 = t8908 + t8910;
  t9256 = t8742*t8911;
  t9309 = -1.*t7994*t4876;
  t9310 = t9256 + t9309;
  t9345 = 0.00482*t9310;
  t9361 = t205*t420*t7143;
  t9367 = -1.*t2306*t7143*t2504;
  t9376 = t9361 + t9367;
  t9377 = t8742*t9376;
  t9388 = t92*t1701;
  t9391 = -1.*t4488*t7518;
  t9400 = t9388 + t9391;
  t9416 = -1.*t7994*t9400;
  t9422 = t9377 + t9416;
  t9428 = -0.03856*t9422;
  t9429 = t9345 + t9428;
  t8033 = -1.*t2876*t4488;
  t8043 = -1.*t92*t4703;
  t8103 = t8033 + t8043;
  t8225 = -1.*t6025*t4488;
  t8325 = -1.*t92*t6230;
  t8328 = t8225 + t8325;
  t9694 = t7994*t4703;
  t9695 = -1.*t8742*t4488*t2513;
  t9699 = t9694 + t9695;
  t9700 = -0.03856*t9699;
  t9705 = t7994*t6230;
  t9706 = -1.*t8742*t4488*t3513;
  t9727 = t9705 + t9706;
  t9729 = 0.00482*t9727;
  t9731 = t9700 + t9729;
  t8942 = t205*t420*t2876;
  t8943 = -1.*t2306*t2876*t2504;
  t8998 = t8942 + t8943;
  t9780 = t7994*t8911;
  t9783 = t8742*t4876;
  t9787 = t9780 + t9783;
  t9789 = 0.00482*t9787;
  t9791 = t7994*t9376;
  t9799 = t8742*t9400;
  t9822 = t9791 + t9799;
  t9888 = -0.03856*t9822;
  t9890 = t9789 + t9888;
  t10083 = -1.*t604;
  t10089 = 1. + t10083;
  t10080 = 0.242889*t720;
  t10101 = 0.100689*t10089;
  t10106 = 0.080689*t604;
  t10155 = -0.16*t1362;
  t10156 = t10101 + t10106 + t10155;
  t10159 = -1.*t720*t10156;
  t10163 = -0.20833*t10089;
  t10175 = -0.36833*t604;
  t10176 = 0.02*t1362;
  t10245 = t10163 + t10175 + t10176;
  t10251 = t1306*t10245;
  t10289 = t10080 + t10159 + t10251;
  t10363 = -0.035165*t2306;
  t10364 = -1.*t205*t10289;
  t10367 = t10363 + t10364;
  t10077 = 0.035165*t205;
  t10327 = -1.*t2306*t10289;
  t10329 = t10077 + t10327;
  t10421 = t205*t420;
  t10424 = -1.*t2306*t2504;
  t10447 = t10421 + t10424;
  t10450 = t420*t10367;
  t10451 = -1.*t10329*t2504;
  t10452 = t10450 + t10451;
  t10504 = -1.*t205;
  t10526 = 1. + t10504;
  t10587 = 0.081715*t10526;
  t10590 = 0.11688*t205;
  t10597 = t10587 + t10590 + t10327;
  t10490 = 0.035165*t2306;
  t10501 = t205*t10289;
  t10502 = t10490 + t10501;
  t10617 = -1.*t420*t2306;
  t10621 = -1.*t205*t2504;
  t10622 = t10617 + t10621;
  t10626 = -1.*t1306;
  t10631 = 1. + t10626;
  t10639 = 0.242889*t10631;
  t10640 = t1306*t10156;
  t10643 = t720*t10245;
  t10650 = t10639 + t10640 + t10643;
  t10667 = t420*t10597;
  t10668 = -1.*t10502*t2504;
  t10671 = t10667 + t10668;
  t10034 = t420*t2306;
  t10048 = t205*t2504;
  t10052 = t10034 + t10048;
  t10503 = t420*t10502;
  t10598 = t10597*t2504;
  t10599 = t10503 + t10598;
  t10651 = t10650*t4488;
  t10675 = t92*t10671;
  t10684 = t10651 + t10675;
  t10695 = t92*t10650;
  t10699 = -1.*t4488*t10671;
  t10700 = t10695 + t10699;
  t10361 = t420*t10329;
  t10390 = t10367*t2504;
  t10391 = t10361 + t10390;
  t10413 = Power(t92,2);
  t10485 = Power(t4488,2);
  t10794 = t6025*t4488;
  t10795 = t92*t6230;
  t10796 = t10794 + t10795;
  t10910 = -1.*t420*t10502;
  t10912 = -1.*t10597*t2504;
  t10913 = t10910 + t10912;
  t10610 = t10447*t10599;
  t10694 = t92*t10622*t10684;
  t10701 = -1.*t4488*t10622*t10700;
  t10730 = t10052*t10599;
  t10732 = t92*t10447*t10684;
  t10740 = -1.*t4488*t10447*t10700;
  t10741 = t10730 + t10732 + t10740;
  t10744 = t92*t2513*t10741;
  t10749 = -1.*t10599*t4703;
  t10753 = -1.*t92*t2513*t10684;
  t10763 = t4488*t2513*t10700;
  t10782 = -1.*t10599*t8911;
  t10783 = -1.*t10684*t6874;
  t10788 = -1.*t10700*t4876;
  t10789 = t10782 + t10783 + t10788;
  t10790 = t92*t10622*t10789;
  t10801 = -1.*t10447*t10599;
  t10803 = -1.*t92*t10622*t10684;
  t10805 = t4488*t10622*t10700;
  t10814 = -1.*t10052*t10599;
  t10815 = -1.*t92*t10447*t10684;
  t10818 = t4488*t10447*t10700;
  t10821 = t10814 + t10815 + t10818;
  t10824 = t92*t3513*t10821;
  t10833 = t10599*t6230;
  t10848 = t92*t3513*t10684;
  t10851 = -1.*t4488*t3513*t10700;
  t10868 = t10599*t8998;
  t10869 = t10684*t10796;
  t10874 = t10700*t6447;
  t10877 = t10868 + t10869 + t10874;
  t10879 = t92*t10622*t10877;
  t10999 = -1.*t10650*t4488;
  t11000 = -1.*t92*t10671;
  t11004 = t10999 + t11000;
  t11093 = 0.242889*t1306;
  t11094 = -1.*t1306*t10156;
  t11102 = -1.*t720*t10245;
  t11103 = t11093 + t11094 + t11102;
  t11212 = -1.*t420*t2306*t11103;
  t11223 = -1.*t205*t11103*t2504;
  t11226 = t11212 + t11223;
  t11104 = t205*t420*t11103;
  t11105 = -1.*t2306*t11103*t2504;
  t11124 = t11104 + t11105;
  t11150 = t10289*t4488;
  t11227 = t92*t11226;
  t11235 = t11150 + t11227;
  t11240 = t92*t10289;
  t11241 = -1.*t4488*t11226;
  t11242 = t11240 + t11241;
  t11090 = t6874*t10821;
  t11377 = -0.16*t604;
  t11386 = t11377 + t10176;
  t11395 = -1.*t720*t11386;
  t11397 = 0.02*t604;
  t11400 = 0.16*t1362;
  t11412 = t11397 + t11400;
  t11414 = t1306*t11412;
  t11415 = t11395 + t11414;
  t11435 = t1306*t11386;
  t11447 = t720*t11412;
  t11455 = t11435 + t11447;
  t11459 = -1.*t420*t2306*t11415;
  t11462 = -1.*t205*t11415*t2504;
  t11465 = t11459 + t11462;
  t11252 = t10599*t8911;
  t11421 = t205*t420*t11415;
  t11423 = -1.*t2306*t11415*t2504;
  t11431 = t11421 + t11423;
  t11257 = t10684*t6874;
  t11260 = t10700*t4876;
  t11458 = t11455*t4488;
  t11470 = t92*t11465;
  t11477 = t11458 + t11470;
  t11479 = t92*t11455;
  t11482 = -1.*t4488*t11465;
  t11483 = t11479 + t11482;
  t11286 = t7736*t10741;
  t11325 = -1.*t10599*t9376;
  t11338 = -1.*t10684*t7736;
  t11348 = -1.*t10700*t9400;
  t10411 = t10052*t10391;
  t10751 = -1.*t10391*t8911;
  t10797 = -1.*t10052*t10391;
  t10834 = t10391*t8998;
  t11567 = t10447*t10671;
  t11568 = t11567 + t10730;
  t11571 = t4703*t11568;
  t11572 = t10622*t10671;
  t10903 = t10052*t10671;
  t11598 = -1.*t10650*t2876;
  t11599 = -1.*t10671*t4703;
  t11601 = t11598 + t11599 + t10782;
  t11602 = t10447*t11601;
  t10925 = -1.*t10671*t8911;
  t11609 = -1.*t10671*t2513;
  t11624 = -1.*t10447*t10671;
  t11625 = t11624 + t10814;
  t11626 = t6230*t11625;
  t11627 = -1.*t10622*t10671;
  t10946 = -1.*t10052*t10671;
  t11633 = t10650*t6025;
  t11634 = t10671*t6230;
  t11638 = t11633 + t11634 + t10868;
  t11640 = t10447*t11638;
  t10985 = t10671*t8998;
  t11643 = t10671*t3513;
  t11127 = -1.*t10052*t11124;
  t11253 = t11124*t8998;
  t11287 = t10052*t11124;
  t11324 = -1.*t11124*t8911;
  t11730 = t8911*t11625;
  t11432 = -1.*t10052*t11431;
  t11746 = t10650*t2876;
  t11749 = t10671*t4703;
  t11497 = t11431*t8998;
  t11760 = t9376*t11568;
  t11517 = t10052*t11431;
  t11765 = -1.*t10650*t1701;
  t11541 = -1.*t11431*t8911;
  t11769 = -1.*t10671*t7518;
  t11831 = t2306*t10502;
  t11833 = t205*t10597;
  t11834 = t11831 + t11833;
  t11839 = 0.00482*t11834*t1701;
  t11841 = -1.*t2306*t10502;
  t11842 = -1.*t205*t10597;
  t11847 = t11841 + t11842;
  t11848 = -0.03856*t11847*t2876;
  t11849 = t11839 + t11848;
  t11923 = 0.0001694953*t1701;
  t11924 = -0.11688*t2876;
  t11925 = -0.081715*t7143;
  t11928 = t11924 + t11925;
  t11929 = -0.03856*t11928;
  t11930 = t11923 + t11929;
  p_output1[0]=var2[11]*(-0.5*(-0.03856*t4876 + 0.00482*t6447)*var2[4] - 0.5*t3911*var2[5] - 0.5*t3911*var2[9] - 0.5*t7915*var2[10] - 0.5*t7915*var2[11]);
  p_output1[1]=var2[11]*(-0.5*(-0.03856*(-1.*t4876*t8742 - 1.*t7994*t8911) + 0.00482*(-1.*t6447*t8742 - 1.*t7994*t8998))*var2[3] - 0.5*(0.03856*t7994*t8103 - 0.00482*t7994*t8328)*var2[4] - 0.5*t8807*var2[5] - 0.5*t8807*var2[9] - 0.5*t9429*var2[10] - 0.5*t9429*var2[11]);
  p_output1[2]=var2[11]*(-0.5*(0.00482*(-1.*t6447*t7994 + t8742*t8998) - 0.03856*t9310)*var2[3] - 0.5*(-0.03856*t8103*t8742 + 0.00482*t8328*t8742)*var2[4] - 0.5*t9731*var2[5] - 0.5*t9731*var2[9] - 0.5*t9890*var2[10] - 0.5*t9890*var2[11]);
  p_output1[3]=var2[11]*(-0.5*(0.00482*(-1.*t10447*t10789*t4488 + t10741*t4876 + (-1.*t10447*t10684*t4488 - 1.*t10447*t11004*t4488)*t6874 + t10447*(-1.*t10684*t4876 - 1.*t11004*t4876 - 1.*t10700*t6874 - 1.*t10700*t8103)*t92) - 0.03856*(-1.*t10447*t10877*t4488 + t10796*(t10447*t10684*t4488 + t10447*t11004*t4488) + t10821*t6447 + t10447*(t10700*t10796 + t10684*t6447 + t11004*t6447 + t10700*t8328)*t92))*var2[4] - 0.5*(-0.03856*(t10824 + t10879 + t10796*(t10801 + t10803 + t10805 - 1.*t10413*t10447*t10913 - 1.*t10447*t10485*t10913 + t10946) + t10447*t92*(t10833 + t10848 + t10851 + t10985 - 1.*t10913*t4488*t6447 + t10796*t10913*t92)) + 0.00482*(t10744 + t10790 + (t10610 + t10694 + t10701 + t10903 + t10413*t10447*t10913 + t10447*t10485*t10913)*t6874 + t10447*t92*(t10749 + t10753 + t10763 + t10925 + t10913*t4488*t4876 - 1.*t10913*t6874*t92)))*var2[5] - 0.5*(-0.03856*(t10796*(-1.*t10413*t10447*t10452 - 1.*t10447*t10452*t10485 + t10797 + t10801 + t10803 + t10805) + t10824 + t10879 + t10447*t92*(t10833 + t10834 + t10848 + t10851 - 1.*t10452*t4488*t6447 + t10452*t10796*t92)) + 0.00482*(t10744 + t10790 + (t10411 + t10413*t10447*t10452 + t10447*t10452*t10485 + t10610 + t10694 + t10701)*t6874 + t10447*t92*(t10749 + t10751 + t10753 + t10763 + t10452*t4488*t4876 - 1.*t10452*t6874*t92)))*var2[9] - 0.5*(-0.03856*(t11090 + t10447*(t10796*t11235 + t11252 + t11253 + t11257 + t11260 + t11242*t6447)*t92 + t10796*(t11127 + t10447*t11242*t4488 - 1.*t10447*t11235*t92)) + 0.00482*(t11286 + t10447*(t11324 + t11325 + t11338 + t11348 - 1.*t11242*t4876 - 1.*t11235*t6874)*t92 + t6874*(t11287 - 1.*t10447*t11242*t4488 + t10447*t11235*t92)))*var2[10] - 0.5*(-0.03856*(t11090 + t10447*(t11252 + t11257 + t11260 + t10796*t11477 + t11497 + t11483*t6447)*t92 + t10796*(t11432 + t10447*t11483*t4488 - 1.*t10447*t11477*t92)) + 0.00482*(t11286 + t10447*(t11325 + t11338 + t11348 + t11541 - 1.*t11483*t4876 - 1.*t11477*t6874)*t92 + t6874*(t11517 - 1.*t10447*t11483*t4488 + t10447*t11477*t92)))*var2[11]);
  p_output1[4]=var2[11]*(-0.5*(0.00482*(t11571 + t11602 + t10052*(t10749 + t10925 + t11609 - 1.*t10913*t4703) + (t10610 + t10903 + t10447*t10913 + t11572)*t8911) - 0.03856*(t11626 + t11640 + t10052*(t10833 + t10985 + t11643 + t10913*t6230) + (t10801 - 1.*t10447*t10913 + t10946 + t11627)*t8998))*var2[5] - 0.5*(0.00482*(t11571 + t11602 + t10052*(t10749 + t10751 + t11609 - 1.*t10452*t4703) + (t10411 + t10447*t10452 + t10610 + t11572)*t8911) - 0.03856*(t11626 + t11640 + t10052*(t10833 + t10834 + t11643 + t10452*t6230) + (-1.*t10447*t10452 + t10797 + t10801 + t11627)*t8998))*var2[9] - 0.5*(0.00482*(t11760 + t10052*(t11324 + t11325 + t11765 + t11769 - 1.*t10289*t2876 - 1.*t11226*t4703) + (t10447*t11226 + t11287)*t8911) - 0.03856*(t11730 + t10052*(t11252 + t11253 + t11746 + t11749 + t10289*t6025 + t11226*t6230) + (t11127 - 1.*t10447*t11226)*t8998))*var2[10] - 0.5*(0.00482*(t11760 + t10052*(t11325 + t11541 + t11765 + t11769 - 1.*t11455*t2876 - 1.*t11465*t4703) + (t10447*t11465 + t11517)*t8911) - 0.03856*(t11730 + t10052*(t11252 + t11497 + t11746 + t11749 + t11455*t6025 + t11465*t6230) + (t11432 - 1.*t10447*t11465)*t8998))*var2[11]);
  p_output1[5]=var2[11]*(-0.5*(0.00482*(t10367*t205 + t10502*t205 + t10329*t2306 - 1.*t10597*t2306)*t2876 - 0.03856*(-1.*t10367*t205 - 1.*t10502*t205 - 1.*t10329*t2306 + t10597*t2306)*t6025)*var2[9] - 0.5*t11849*var2[10] - 0.5*t11849*var2[11]);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=var2[11]*(-0.5*t11930*var2[10] - 0.5*t11930*var2[11]);
  p_output1[10]=-0.5*(0.00482*(-0.242889*t1362 + t10156*t1362 + t11412*t1362 + t10245*t604 - 1.*t11386*t604) - 0.03856*(-1.*t10245*t1362 + t11386*t1362 - 0.242889*t604 + t10156*t604 + t11412*t604))*Power(var2[11],2);
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

#include "Ce1_vec12_plane.hh"

namespace SymFunction
{

void Ce1_vec12_plane_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
