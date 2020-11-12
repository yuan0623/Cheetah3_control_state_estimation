/*
 * Automatically Generated from Mathematica.
 * Fri 21 Dec 2018 15:11:46 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
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


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t354;
  double t377;
  double t537;
  double t768;
  double t803;
  double t916;
  double t996;
  double t36;
  double t270;
  double t324;
  double t1111;
  double t1707;
  double t1891;
  double t2042;
  double t1132;
  double t4617;
  double t4610;
  double t5034;
  double t5095;
  double t5139;
  double t4550;
  double t4616;
  double t4767;
  double t4790;
  double t4861;
  double t4948;
  double t4953;
  double t4982;
  double t5010;
  double t5271;
  double t5273;
  double t5286;
  double t5292;
  double t5381;
  double t5513;
  double t5583;
  double t2916;
  double t2952;
  double t2736;
  double t2747;
  double t4288;
  double t4369;
  double t4096;
  double t4133;
  double t1057;
  double t1251;
  double t1631;
  double t6493;
  double t7020;
  double t2057;
  double t2153;
  double t2237;
  double t5717;
  double t5727;
  double t5784;
  double t5927;
  double t6044;
  double t6045;
  double t6113;
  double t6154;
  double t6159;
  double t2890;
  double t3030;
  double t3122;
  double t4286;
  double t4386;
  double t4399;
  double t9235;
  double t9316;
  double t9320;
  double t9326;
  double t9351;
  double t9404;
  double t9419;
  double t9490;
  double t9513;
  double t9614;
  double t9663;
  double t9700;
  double t9725;
  double t9738;
  double t9780;
  double t9801;
  double t9871;
  double t9991;
  double t10003;
  double t10018;
  double t10026;
  double t5715;
  double t5785;
  double t6090;
  double t6222;
  double t6503;
  double t6760;
  double t6858;
  double t7448;
  double t7454;
  double t7567;
  double t7990;
  double t7991;
  double t8032;
  double t8134;
  double t8172;
  double t8298;
  double t8698;
  double t8929;
  double t10501;
  double t10518;
  double t10528;
  double t10530;
  double t10531;
  double t10536;
  double t10549;
  double t10550;
  double t10552;
  double t10073;
  double t10076;
  double t10089;
  double t10125;
  double t10218;
  double t10219;
  double t10220;
  double t10282;
  double t10605;
  double t10607;
  double t10599;
  double t10612;
  double t10613;
  double t10615;
  double t10617;
  double t10619;
  double t10623;
  double t10624;
  double t10625;
  double t10626;
  double t10628;
  double t10630;
  double t10637;
  double t10638;
  double t10640;
  double t10673;
  double t10598;
  double t10633;
  double t10634;
  double t10594;
  double t10589;
  double t10590;
  double t10741;
  double t10745;
  double t10748;
  double t10749;
  double t10752;
  double t10674;
  double t10675;
  double t10680;
  double t10682;
  double t10694;
  double t10695;
  double t10768;
  double t10769;
  double t10772;
  double t10773;
  double t10775;
  double t10783;
  double t10786;
  double t10787;
  double t10788;
  double t10790;
  double t10794;
  double t10795;
  double t10592;
  double t10595;
  double t10596;
  double t10702;
  double t10708;
  double t10756;
  double t10760;
  double t10789;
  double t10797;
  double t10808;
  double t10765;
  double t10766;
  double t10818;
  double t10820;
  double t10821;
  double t10636;
  double t10641;
  double t10646;
  double t10586;
  double t10587;
  double t10588;
  double t10653;
  double t10660;
  double t10663;
  double t10878;
  double t10885;
  double t10889;
  double t11201;
  double t11203;
  double t11206;
  double t11244;
  double t11251;
  double t11257;
  double t10839;
  double t10845;
  double t10846;
  double t10847;
  double t11188;
  double t10866;
  double t10867;
  double t10872;
  double t10874;
  double t11198;
  double t10968;
  double t11012;
  double t11019;
  double t11045;
  double t11119;
  double t11134;
  double t11135;
  double t11148;
  double t5831;
  double t11546;
  double t11516;
  double t11520;
  double t11524;
  double t6300;
  double t11680;
  double t11681;
  double t11682;
  double t11683;
  double t11705;
  double t11710;
  double t11711;
  double t11716;
  double t11692;
  double t11699;
  double t11700;
  double t11709;
  double t11722;
  double t11739;
  double t11746;
  double t11747;
  double t11752;
  double t11677;
  double t11851;
  double t11854;
  double t11855;
  double t11861;
  double t11862;
  double t11869;
  double t11870;
  double t11871;
  double t11887;
  double t11888;
  double t11889;
  double t11893;
  double t11896;
  double t11897;
  double t11762;
  double t11873;
  double t11874;
  double t11878;
  double t11765;
  double t11767;
  double t11892;
  double t11898;
  double t11899;
  double t11901;
  double t11920;
  double t11921;
  double t11784;
  double t11795;
  double t11812;
  double t11821;
  double t11197;
  double t11199;
  double t11312;
  double t11314;
  double t11362;
  double t11371;
  double t11419;
  double t11434;
  double t11989;
  double t11993;
  double t10648;
  double t10709;
  double t10849;
  double t10850;
  double t12021;
  double t12022;
  double t12023;
  double t12028;
  double t12029;
  double t10902;
  double t10913;
  double t11050;
  double t11052;
  double t12041;
  double t12042;
  double t12044;
  double t11703;
  double t11764;
  double t11787;
  double t11810;
  double t12136;
  double t11881;
  double t12141;
  double t12150;
  double t11926;
  double t12183;
  double t11946;
  double t12207;
  double t12209;
  double t11953;
  double t12423;
  double t12445;
  double t12446;
  double t12447;
  double t12464;
  double t12466;
  double t12472;
  double t12475;
  double t12606;
  double t12616;
  double t12617;
  double t12619;
  double t12625;
  double t12626;
  t354 = Cos(var1[14]);
  t377 = Sin(var1[13]);
  t537 = -1.*t354*t377;
  t768 = Cos(var1[13]);
  t803 = Sin(var1[14]);
  t916 = -1.*t768*t803;
  t996 = 0. + t537 + t916;
  t36 = Cos(var1[4]);
  t270 = Cos(var1[12]);
  t324 = Cos(var1[5]);
  t1111 = Sin(var1[12]);
  t1707 = t768*t354;
  t1891 = -1.*t377*t803;
  t2042 = 0. + t1707 + t1891;
  t1132 = Sin(var1[5]);
  t4617 = t537 + t916;
  t4610 = Sin(var1[4]);
  t5034 = -1.*t768*t354;
  t5095 = t377*t803;
  t5139 = t5034 + t5095;
  t4550 = t1707 + t1891;
  t4616 = t4550*t4610;
  t4767 = t324*t1111*t4617;
  t4790 = -1.*t270*t4617*t1132;
  t4861 = t4767 + t4790;
  t4948 = t36*t4861;
  t4953 = t4616 + t4948;
  t4982 = 0.004820000000000004*t4953;
  t5010 = t4617*t4610;
  t5271 = t324*t1111*t5139;
  t5273 = -1.*t270*t5139*t1132;
  t5286 = t5271 + t5273;
  t5292 = t36*t5286;
  t5381 = t5010 + t5292;
  t5513 = -0.03856*t5381;
  t5583 = t4982 + t5513;
  t2916 = t1111*t996;
  t2952 = 0. + t2916;
  t2736 = t270*t996;
  t2747 = 0. + t2736;
  t4288 = t1111*t2042;
  t4369 = 0. + t4288;
  t4096 = t270*t2042;
  t4133 = 0. + t4096;
  t1057 = t270*t324*t996;
  t1251 = t1111*t996*t1132;
  t1631 = t1057 + t1251;
  t6493 = Cos(var1[3]);
  t7020 = Sin(var1[3]);
  t2057 = t270*t324*t2042;
  t2153 = t1111*t2042*t1132;
  t2237 = t2057 + t2153;
  t5717 = t324*t2952;
  t5727 = -1.*t2747*t1132;
  t5784 = 0. + t5717 + t5727;
  t5927 = t354*t377;
  t6044 = t768*t803;
  t6045 = 0. + t5927 + t6044;
  t6113 = t324*t4369;
  t6154 = -1.*t4133*t1132;
  t6159 = 0. + t6113 + t6154;
  t2890 = -1.*t324*t2747;
  t3030 = -1.*t2952*t1132;
  t3122 = t2890 + t3030;
  t4286 = -1.*t324*t4133;
  t4386 = -1.*t4369*t1132;
  t4399 = t4286 + t4386;
  t9235 = t270*t324*t4617;
  t9316 = t1111*t4617*t1132;
  t9320 = t9235 + t9316;
  t9326 = t6493*t9320;
  t9351 = t36*t4550;
  t9404 = -1.*t4610*t4861;
  t9419 = t9351 + t9404;
  t9490 = -1.*t7020*t9419;
  t9513 = t9326 + t9490;
  t9614 = 0.004820000000000004*t9513;
  t9663 = t270*t324*t5139;
  t9700 = t1111*t5139*t1132;
  t9725 = t9663 + t9700;
  t9738 = t6493*t9725;
  t9780 = t36*t4617;
  t9801 = -1.*t4610*t5286;
  t9871 = t9780 + t9801;
  t9991 = -1.*t7020*t9871;
  t10003 = t9738 + t9991;
  t10018 = -0.03856*t10003;
  t10026 = t9614 + t10018;
  t5715 = t36*t2042;
  t5785 = -1.*t4610*t5784;
  t6090 = t36*t6045;
  t6222 = -1.*t4610*t6159;
  t6503 = -1.*t324*t1111*t996;
  t6760 = t270*t996*t1132;
  t6858 = t6503 + t6760;
  t7448 = -1.*t324*t1111*t2042;
  t7454 = t270*t2042*t1132;
  t7567 = t7448 + t7454;
  t7990 = -1.*t2042*t4610;
  t7991 = -1.*t36*t5784;
  t8032 = t7990 + t7991;
  t8134 = -1.*t6045*t4610;
  t8172 = -1.*t36*t6159;
  t8298 = t8134 + t8172;
  t8698 = t5717 + t5727;
  t8929 = t6113 + t6154;
  t10501 = t7020*t9320;
  t10518 = t6493*t9419;
  t10528 = t10501 + t10518;
  t10530 = 0.004820000000000004*t10528;
  t10531 = t7020*t9725;
  t10536 = t6493*t9871;
  t10549 = t10531 + t10536;
  t10550 = -0.03856*t10549;
  t10552 = t10530 + t10550;
  t10073 = t324*t2747;
  t10076 = t2952*t1132;
  t10089 = 0. + t10073 + t10076;
  t10125 = 0. + t5715 + t5785;
  t10218 = t324*t4133;
  t10219 = t4369*t1132;
  t10220 = 0. + t10218 + t10219;
  t10282 = 0. + t6090 + t6222;
  t10605 = -1.*t354;
  t10607 = 1. + t10605;
  t10599 = -0.194401*t377;
  t10612 = -0.336601*t10607;
  t10613 = -0.356601*t354;
  t10615 = -0.16*t803;
  t10617 = 0. + t10612 + t10613 + t10615;
  t10619 = -1.*t377*t10617;
  t10623 = -0.20833*t10607;
  t10624 = -0.36833*t354;
  t10625 = 0.020000000000000018*t803;
  t10626 = 0. + t10623 + t10624 + t10625;
  t10628 = t768*t10626;
  t10630 = 0. + t10599 + t10619 + t10628;
  t10637 = 0.032875*t1111;
  t10638 = t270*t10630;
  t10640 = t10637 + t10638;
  t10673 = t324*t10640;
  t10598 = 0.032875*t270;
  t10633 = -1.*t1111*t10630;
  t10634 = t10598 + t10633;
  t10594 = 0. + t270;
  t10589 = -1.*t1111;
  t10590 = 0. + t10589;
  t10741 = -1.*t10634*t1132;
  t10745 = t10673 + t10741;
  t10748 = t10594*t324;
  t10749 = -1.*t10590*t1132;
  t10752 = 0. + t10748 + t10749;
  t10674 = -1.*t270;
  t10675 = 1. + t10674;
  t10680 = -0.081715*t10675;
  t10682 = -0.11459*t270;
  t10694 = t1111*t10630;
  t10695 = t10680 + t10682 + t10694;
  t10768 = -1.*t324*t1111;
  t10769 = t270*t1132;
  t10772 = t10768 + t10769;
  t10773 = -1.*t768;
  t10775 = 1. + t10773;
  t10783 = -0.194401*t10775;
  t10786 = t768*t10617;
  t10787 = t377*t10626;
  t10788 = 0. + t10783 + t10786 + t10787;
  t10790 = t324*t10695;
  t10794 = -1.*t10640*t1132;
  t10795 = 0. + t10790 + t10794;
  t10592 = t324*t10590;
  t10595 = t10594*t1132;
  t10596 = 0. + t10592 + t10595;
  t10702 = t10695*t1132;
  t10708 = 0. + t10673 + t10702;
  t10756 = t36*t10752;
  t10760 = 0. + t10756;
  t10789 = t10788*t4610;
  t10797 = t36*t10795;
  t10808 = 0. + t10789 + t10797;
  t10765 = -1.*t4610*t10752;
  t10766 = 0. + t10765;
  t10818 = t36*t10788;
  t10820 = -1.*t4610*t10795;
  t10821 = 0. + t10818 + t10820;
  t10636 = t324*t10634;
  t10641 = t10640*t1132;
  t10646 = t10636 + t10641;
  t10586 = t2042*t4610;
  t10587 = t36*t5784;
  t10588 = 0. + t10586 + t10587;
  t10653 = -1.*t270*t324;
  t10660 = -1.*t1111*t1132;
  t10663 = t10653 + t10660;
  t10878 = t6045*t4610;
  t10885 = t36*t6159;
  t10889 = 0. + t10878 + t10885;
  t11201 = -1.*t324*t10640;
  t11203 = -1.*t10695*t1132;
  t11206 = t11201 + t11203;
  t11244 = -1.*t324*t10590;
  t11251 = -1.*t10594*t1132;
  t11257 = t11244 + t11251;
  t10839 = t10596*t10708;
  t10845 = t10760*t10808;
  t10846 = t10766*t10821;
  t10847 = t10839 + t10845 + t10846;
  t11188 = t10790 + t10794;
  t10866 = -1.*t10708*t10089;
  t10867 = -1.*t10808*t10588;
  t10872 = -1.*t10821*t10125;
  t10874 = t10866 + t10867 + t10872;
  t11198 = t10748 + t10749;
  t10968 = -1.*t10596*t10708;
  t11012 = -1.*t10760*t10808;
  t11019 = -1.*t10766*t10821;
  t11045 = t10968 + t11012 + t11019;
  t11119 = t10708*t10220;
  t11134 = t10808*t10889;
  t11135 = t10821*t10282;
  t11148 = t11119 + t11134 + t11135;
  t5831 = t5715 + t5785;
  t11546 = t10818 + t10820;
  t11516 = -1.*t10788*t4610;
  t11520 = -1.*t36*t10795;
  t11524 = t11516 + t11520;
  t6300 = t6090 + t6222;
  t11680 = -0.194401*t768;
  t11681 = -1.*t768*t10617;
  t11682 = -1.*t377*t10626;
  t11683 = t11680 + t11681 + t11682;
  t11705 = t10599 + t10619 + t10628;
  t11710 = t324*t1111*t11683;
  t11711 = -1.*t270*t11683*t1132;
  t11716 = t11710 + t11711;
  t11692 = t270*t324*t11683;
  t11699 = t1111*t11683*t1132;
  t11700 = t11692 + t11699;
  t11709 = t11705*t4610;
  t11722 = t36*t11716;
  t11739 = t11709 + t11722;
  t11746 = t36*t11705;
  t11747 = -1.*t4610*t11716;
  t11752 = t11746 + t11747;
  t11677 = t5381*t10847;
  t11851 = -0.16*t354;
  t11854 = t11851 + t10625;
  t11855 = -1.*t377*t11854;
  t11861 = 0.020000000000000018*t354;
  t11862 = 0.16*t803;
  t11869 = t11861 + t11862;
  t11870 = t768*t11869;
  t11871 = t11855 + t11870;
  t11887 = t768*t11854;
  t11888 = t377*t11869;
  t11889 = t11887 + t11888;
  t11893 = t324*t1111*t11871;
  t11896 = -1.*t270*t11871*t1132;
  t11897 = t11893 + t11896;
  t11762 = -1.*t10708*t9725;
  t11873 = t270*t324*t11871;
  t11874 = t1111*t11871*t1132;
  t11878 = t11873 + t11874;
  t11765 = -1.*t10808*t5381;
  t11767 = -1.*t10821*t9871;
  t11892 = t11889*t4610;
  t11898 = t36*t11897;
  t11899 = t11892 + t11898;
  t11901 = t36*t11889;
  t11920 = -1.*t4610*t11897;
  t11921 = t11901 + t11920;
  t11784 = t4953*t11045;
  t11795 = t10708*t9320;
  t11812 = t10808*t4953;
  t11821 = t10821*t9419;
  t11197 = t10596*t11188;
  t11199 = t11198*t10708;
  t11312 = -1.*t10708*t8698;
  t11314 = -1.*t11188*t10089;
  t11362 = -1.*t10596*t11188;
  t11371 = -1.*t11198*t10708;
  t11419 = t10708*t8929;
  t11434 = t11188*t10220;
  t11989 = t10752*t10795;
  t11993 = 0. + t11989 + t10839;
  t10648 = t10596*t10646;
  t10709 = t10663*t10708;
  t10849 = -1.*t10708*t6858;
  t10850 = -1.*t10646*t10089;
  t12021 = -1.*t10788*t2042;
  t12022 = -1.*t10795*t5784;
  t12023 = t12021 + t12022 + t10866;
  t12028 = -1.*t10752*t10795;
  t12029 = 0. + t12028 + t10968;
  t10902 = -1.*t10596*t10646;
  t10913 = -1.*t10663*t10708;
  t11050 = t10708*t7567;
  t11052 = t10646*t10220;
  t12041 = t10788*t6045;
  t12042 = t10795*t6159;
  t12044 = t12041 + t12042 + t11119;
  t11703 = t10596*t11700;
  t11764 = -1.*t11700*t10089;
  t11787 = -1.*t10596*t11700;
  t11810 = t11700*t10220;
  t12136 = t9725*t11993;
  t11881 = t10596*t11878;
  t12141 = -1.*t10788*t4617;
  t12150 = -1.*t10795*t5286;
  t11926 = -1.*t11878*t10089;
  t12183 = t9320*t12029;
  t11946 = -1.*t10596*t11878;
  t12207 = t10788*t4550;
  t12209 = t10795*t4861;
  t11953 = t11878*t10220;
  t12423 = -1.*t10590*t10640;
  t12445 = -1.*t10594*t10695;
  t12446 = 0. + t12423 + t12445;
  t12447 = t12446*t4550;
  t12464 = t10590*t10640;
  t12466 = t10594*t10695;
  t12472 = 0. + t12464 + t12466;
  t12475 = t12472*t4617;
  t12606 = 0.00015845750000000012*t4617;
  t12616 = -0.11459*t4550;
  t12617 = -0.081715*t5139;
  t12619 = t12616 + t12617;
  t12625 = -0.03856*t12619;
  t12626 = t12606 + t12625;
  p_output1[0]=var2[14]*(-0.5*(-0.03856*t5831 + 0.004820000000000004*t6300)*var2[4] - 0.5*(-0.03856*t3122*t36 + 0.004820000000000004*t36*t4399)*var2[5] - 0.5*(-0.03856*t1631*t36 + 0.004820000000000004*t2237*t36)*var2[12] - 0.5*t5583*var2[13] - 0.5*t5583*var2[14]);
  p_output1[1]=var2[14]*(-0.5*(-0.03856*(-1.*t10125*t6493 - 1.*t10089*t7020) + 0.004820000000000004*(-1.*t10282*t6493 - 1.*t10220*t7020))*var2[3] - 0.5*(0.03856*t7020*t8032 - 0.004820000000000004*t7020*t8298)*var2[4] - 0.5*(-0.03856*(t3122*t4610*t7020 + t6493*t8698) + 0.004820000000000004*(t4399*t4610*t7020 + t6493*t8929))*var2[5] - 0.5*(-0.03856*(t6493*t6858 + t1631*t4610*t7020) + 0.004820000000000004*(t2237*t4610*t7020 + t6493*t7567))*var2[12] - 0.5*t10026*var2[13] - 0.5*t10026*var2[14]);
  p_output1[2]=var2[14]*(-0.5*(-0.03856*(t10089*t6493 - 1.*t10125*t7020) + 0.004820000000000004*(t10220*t6493 - 1.*t10282*t7020))*var2[3] - 0.5*(-0.03856*t6493*t8032 + 0.004820000000000004*t6493*t8298)*var2[4] - 0.5*(-0.03856*(-1.*t3122*t4610*t6493 + t7020*t8698) + 0.004820000000000004*(-1.*t4399*t4610*t6493 + t7020*t8929))*var2[5] - 0.5*(-0.03856*(-1.*t1631*t4610*t6493 + t6858*t7020) + 0.004820000000000004*(-1.*t2237*t4610*t6493 + t7020*t7567))*var2[12] - 0.5*t10552*var2[13] - 0.5*t10552*var2[14]);
  p_output1[3]=var2[14]*(-0.5*(0.004820000000000004*(-1.*t10752*t10874*t4610 + t10588*(t10766*t11524 + t10760*t11546 - 1.*t10752*t10821*t36 - 1.*t10752*t10808*t4610) + t10847*t5831 + t10760*(-1.*t10125*t11524 - 1.*t10588*t11546 - 1.*t10808*t5831 - 1.*t10821*t8032)) - 0.03856*(-1.*t10752*t11148*t4610 + t10889*(-1.*t10766*t11524 - 1.*t10760*t11546 + t10752*t10821*t36 + t10752*t10808*t4610) + t11045*t6300 + t10760*(t10282*t11524 + t10889*t11546 + t10808*t6300 + t10821*t8298)))*var2[4] - 0.5*(0.004820000000000004*(t10874*t11257*t36 + t10847*t3122*t36 + t10588*(t11197 + t11199 + t10760*t11206*t36 + t10808*t11257*t36 - 1.*t10766*t11206*t4610 - 1.*t10821*t11257*t4610) + t10760*(t11312 + t11314 - 1.*t10588*t11206*t36 - 1.*t10808*t3122*t36 + t10125*t11206*t4610 + t10821*t3122*t4610)) - 0.03856*(t11148*t11257*t36 + t11045*t36*t4399 + t10889*(t11362 + t11371 - 1.*t10760*t11206*t36 - 1.*t10808*t11257*t36 + t10766*t11206*t4610 + t10821*t11257*t4610) + t10760*(t11419 + t11434 + t10889*t11206*t36 + t10808*t36*t4399 - 1.*t10282*t11206*t4610 - 1.*t10821*t4399*t4610)))*var2[5] - 0.5*(0.004820000000000004*(t10772*t10874*t36 + t10847*t1631*t36 + t10588*(t10648 + t10709 + t10745*t10760*t36 + t10772*t10808*t36 - 1.*t10745*t10766*t4610 - 1.*t10772*t10821*t4610) + t10760*(t10849 + t10850 - 1.*t10588*t10745*t36 - 1.*t10808*t1631*t36 + t10125*t10745*t4610 + t10821*t1631*t4610)) - 0.03856*(t10772*t11148*t36 + t11045*t2237*t36 + t10889*(t10902 + t10913 - 1.*t10745*t10760*t36 - 1.*t10772*t10808*t36 + t10745*t10766*t4610 + t10772*t10821*t4610) + t10760*(t11050 + t11052 + t10745*t10889*t36 + t10808*t2237*t36 - 1.*t10282*t10745*t4610 - 1.*t10821*t2237*t4610)))*var2[12] - 0.5*(0.004820000000000004*(t11677 + t10588*(t11703 + t10760*t11739 + t10766*t11752) + t10760*(-1.*t10588*t11739 - 1.*t10125*t11752 + t11762 + t11764 + t11765 + t11767)) - 0.03856*(t11784 + t10889*(-1.*t10760*t11739 - 1.*t10766*t11752 + t11787) + t10760*(t10889*t11739 + t10282*t11752 + t11795 + t11810 + t11812 + t11821)))*var2[13] - 0.5*(0.004820000000000004*(t11677 + t10588*(t11881 + t10760*t11899 + t10766*t11921) + t10760*(t11762 + t11765 + t11767 - 1.*t10588*t11899 - 1.*t10125*t11921 + t11926)) - 0.03856*(t11784 + t10889*(-1.*t10760*t11899 - 1.*t10766*t11921 + t11946) + t10760*(t11795 + t11812 + t11821 + t10889*t11899 + t10282*t11921 + t11953)))*var2[14]);
  p_output1[4]=var2[14]*(-0.5*(0.004820000000000004*(t10089*(t11197 + t11199 + t10752*t11206 + t10795*t11257) + t11198*t12023 + t10596*(t11312 + t11314 - 1.*t10795*t3122 - 1.*t11206*t5784) + t11993*t8698) - 0.03856*(t10220*(-1.*t10752*t11206 - 1.*t10795*t11257 + t11362 + t11371) + t11198*t12044 + t10596*(t11419 + t11434 + t10795*t4399 + t11206*t6159) + t12029*t8929))*var2[5] - 0.5*(0.004820000000000004*(t10089*(t10648 + t10709 + t10745*t10752 + t10772*t10795) + t10663*t12023 + t10596*(t10849 + t10850 - 1.*t10795*t1631 - 1.*t10745*t5784) + t11993*t6858) - 0.03856*(t10220*(-1.*t10745*t10752 - 1.*t10772*t10795 + t10902 + t10913) + t10663*t12044 + t10596*(t11050 + t11052 + t10795*t2237 + t10745*t6159) + t12029*t7567))*var2[12] - 0.5*(0.004820000000000004*(t10089*(t11703 + t10752*t11716) + t12136 + t10596*(t11762 + t11764 + t12141 + t12150 - 1.*t11705*t2042 - 1.*t11716*t5784)) - 0.03856*(t10220*(-1.*t10752*t11716 + t11787) + t12183 + t10596*(t11795 + t11810 + t12207 + t12209 + t11705*t6045 + t11716*t6159)))*var2[13] - 0.5*(0.004820000000000004*(t10089*(t11881 + t10752*t11897) + t12136 + t10596*(t11762 + t11926 + t12141 + t12150 - 1.*t11889*t2042 - 1.*t11897*t5784)) - 0.03856*(t10220*(-1.*t10752*t11897 + t11946) + t12183 + t10596*(t11795 + t11953 + t12207 + t12209 + t11889*t6045 + t11897*t6159)))*var2[14]);
  p_output1[5]=var2[14]*(-0.5*(0.004820000000000004*t2042*(t10590*t10634 + t10594*t10640 - 1.*t10695*t1111 - 1.*t10640*t270) - 0.03856*(-1.*t10590*t10634 - 1.*t10594*t10640 + t10695*t1111 + t10640*t270)*t6045)*var2[12] - 0.5*(0.004820000000000004*(t12475 + t2042*(t10594*t1111*t11683 + t10590*t11683*t270)) - 0.03856*(t12447 + (-1.*t10594*t1111*t11683 - 1.*t10590*t11683*t270)*t6045))*var2[13] - 0.5*(0.004820000000000004*(t12475 + t2042*(t10594*t1111*t11871 + t10590*t11871*t270)) - 0.03856*(t12447 + (-1.*t10594*t1111*t11871 - 1.*t10590*t11871*t270)*t6045))*var2[14]);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=var2[14]*(-0.5*t12626*var2[13] - 0.5*t12626*var2[14]);
  p_output1[13]=-0.5*(-0.03856*(0.194401*t354 + t10617*t354 + t11869*t354 - 1.*t10626*t803 + t11854*t803) + 0.004820000000000004*(t10626*t354 - 1.*t11854*t354 + 0.194401*t803 + t10617*t803 + t11869*t803))*Power(var2[14],2);
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

#include "Ce1_vec15_plane.hh"

namespace SymFunction
{

void Ce1_vec15_plane_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
