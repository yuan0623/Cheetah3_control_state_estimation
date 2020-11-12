/*
 * Automatically Generated from Mathematica.
 * Sun 28 Jul 2019 02:54:14 GMT-04:00
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
  double t806;
  double t905;
  double t937;
  double t1010;
  double t1046;
  double t1059;
  double t1085;
  double t718;
  double t1379;
  double t1444;
  double t1551;
  double t792;
  double t1086;
  double t1236;
  double t1649;
  double t486;
  double t2720;
  double t2769;
  double t2878;
  double t2195;
  double t2635;
  double t3043;
  double t4304;
  double t4386;
  double t4176;
  double t4215;
  double t1342;
  double t1863;
  double t1974;
  double t2964;
  double t3073;
  double t3349;
  double t3438;
  double t3440;
  double t3483;
  double t4273;
  double t4527;
  double t4575;
  double t4667;
  double t4707;
  double t4741;
  double t4746;
  double t4749;
  double t4757;
  double t4775;
  double t4790;
  double t4812;
  double t5681;
  double t5729;
  double t5800;
  double t5846;
  double t5861;
  double t5925;
  double t6875;
  double t6879;
  double t6892;
  double t6965;
  double t7009;
  double t7039;
  double t7090;
  double t7103;
  double t7109;
  double t7128;
  double t7450;
  double t7489;
  double t7509;
  double t7568;
  double t6497;
  double t6627;
  double t6716;
  double t6717;
  double t6731;
  double t6739;
  double t6779;
  double t6833;
  double t6872;
  double t7055;
  double t7149;
  double t7150;
  double t7247;
  double t7261;
  double t7361;
  double t7413;
  double t7579;
  double t7617;
  double t7640;
  double t7642;
  double t7643;
  double t7721;
  double t7727;
  double t7731;
  double t8083;
  double t8084;
  double t6140;
  double t8080;
  double t8081;
  double t7780;
  double t7839;
  double t7842;
  double t6766;
  double t6774;
  double t8106;
  double t8085;
  double t6263;
  double t6276;
  double t6301;
  double t7185;
  double t7748;
  double t7753;
  double t8370;
  double t8542;
  double t8571;
  double t6176;
  double t8306;
  double t8313;
  double t8363;
  double t9007;
  double t9010;
  double t9012;
  double t9842;
  double t9854;
  double t9858;
  double t9863;
  double t9867;
  double t9907;
  double t9939;
  double t10049;
  double t8585;
  double t10533;
  double t10534;
  double t10536;
  double t10486;
  double t10540;
  double t8799;
  double t9448;
  double t10515;
  double t10523;
  double t10526;
  double t9550;
  double t10492;
  double t10541;
  double t8595;
  double t8616;
  double t8672;
  double t10553;
  double t10565;
  double t8854;
  double t8862;
  double t8913;
  double t10651;
  double t10667;
  double t9467;
  double t9470;
  double t9472;
  double t10682;
  double t10691;
  double t9551;
  double t9593;
  double t9594;
  double t11020;
  double t11031;
  double t11036;
  double t11085;
  double t11092;
  double t11096;
  double t11110;
  double t11118;
  double t11126;
  double t11154;
  double t11160;
  double t11164;
  double t11195;
  double t11198;
  double t11199;
  double t10445;
  double t10463;
  double t11312;
  double t11314;
  double t11287;
  double t11299;
  double t11300;
  double t11322;
  double t11325;
  double t11332;
  double t10592;
  double t10594;
  double t10595;
  double t10609;
  double t10634;
  double t11273;
  double t11280;
  double t11281;
  double t10705;
  double t10707;
  double t10715;
  double t11310;
  double t11336;
  double t11342;
  double t11353;
  double t11369;
  double t11373;
  double t11381;
  double t11386;
  double t11522;
  double t11527;
  double t11529;
  double t11539;
  double t11586;
  double t11566;
  double t11619;
  double t11620;
  double t11623;
  double t11649;
  double t11652;
  double t11653;
  double t11675;
  double t11676;
  double t11679;
  double t11708;
  double t11709;
  double t11710;
  double t11717;
  double t11718;
  double t11719;
  double t11728;
  double t11729;
  double t11731;
  double t11733;
  double t11735;
  double t11736;
  double t11800;
  double t11804;
  double t11806;
  double t11814;
  double t11816;
  double t11817;
  double t11833;
  double t11670;
  double t11684;
  double t11686;
  double t11826;
  double t11842;
  double t11847;
  double t11922;
  double t11927;
  double t11930;
  double t11940;
  double t11942;
  double t11944;
  double t11644;
  double t11659;
  double t11662;
  double t11873;
  double t11886;
  double t11895;
  double t12057;
  double t12059;
  double t12037;
  double t12043;
  double t12044;
  double t12086;
  double t12087;
  double t12089;
  double t11561;
  double t11562;
  double t11565;
  double t11567;
  double t11578;
  double t11581;
  double t11583;
  double t11587;
  double t11610;
  double t11615;
  double t11625;
  double t11626;
  double t11631;
  double t11637;
  double t11639;
  double t11669;
  double t11687;
  double t11692;
  double t11697;
  double t11713;
  double t11720;
  double t11722;
  double t11723;
  double t11732;
  double t11739;
  double t11744;
  double t11745;
  double t11746;
  double t11747;
  double t11748;
  double t11754;
  double t11757;
  double t11760;
  double t11764;
  double t11778;
  double t11780;
  double t11784;
  double t11786;
  double t11796;
  double t11797;
  double t11830;
  double t11835;
  double t12126;
  double t12129;
  double t12130;
  double t12157;
  double t12165;
  double t12182;
  double t11864;
  double t12209;
  double t12210;
  double t12211;
  double t11884;
  double t11885;
  double t11916;
  double t12195;
  double t12223;
  double t11954;
  double t11956;
  double t12329;
  double t12332;
  double t12335;
  double t12347;
  double t12353;
  double t12360;
  double t11978;
  double t12251;
  double t12277;
  double t11992;
  double t11998;
  t806 = Cos(var1[14]);
  t905 = Sin(var1[13]);
  t937 = -1.*t806*t905;
  t1010 = Cos(var1[13]);
  t1046 = Sin(var1[14]);
  t1059 = -1.*t1010*t1046;
  t1085 = 0. + t937 + t1059;
  t718 = Cos(var1[5]);
  t1379 = Sin(var1[12]);
  t1444 = t1379*t1085;
  t1551 = 0. + t1444;
  t792 = Cos(var1[12]);
  t1086 = t792*t1085;
  t1236 = 0. + t1086;
  t1649 = Sin(var1[5]);
  t486 = Sin(var1[3]);
  t2720 = t1010*t806;
  t2769 = -1.*t905*t1046;
  t2878 = 0. + t2720 + t2769;
  t2195 = Cos(var1[3]);
  t2635 = Cos(var1[4]);
  t3043 = Sin(var1[4]);
  t4304 = t1379*t2878;
  t4386 = 0. + t4304;
  t4176 = t792*t2878;
  t4215 = 0. + t4176;
  t1342 = t718*t1236;
  t1863 = t1551*t1649;
  t1974 = 0. + t1342 + t1863;
  t2964 = t2635*t2878;
  t3073 = t718*t1551;
  t3349 = -1.*t1236*t1649;
  t3438 = 0. + t3073 + t3349;
  t3440 = -1.*t3043*t3438;
  t3483 = 0. + t2964 + t3440;
  t4273 = t718*t4215;
  t4527 = t4386*t1649;
  t4575 = 0. + t4273 + t4527;
  t4667 = t806*t905;
  t4707 = t1010*t1046;
  t4741 = 0. + t4667 + t4707;
  t4746 = t2635*t4741;
  t4749 = t718*t4386;
  t4757 = -1.*t4215*t1649;
  t4775 = 0. + t4749 + t4757;
  t4790 = -1.*t3043*t4775;
  t4812 = 0. + t4746 + t4790;
  t5681 = -1.*t2878*t3043;
  t5729 = -1.*t2635*t3438;
  t5800 = t5681 + t5729;
  t5846 = -1.*t4741*t3043;
  t5861 = -1.*t2635*t4775;
  t5925 = t5846 + t5861;
  t6875 = -1.*t806;
  t6879 = 1. + t6875;
  t6892 = -0.336601*t6879;
  t6965 = -0.356601*t806;
  t7009 = -0.16*t1046;
  t7039 = 0. + t6892 + t6965 + t7009;
  t7090 = -0.20833*t6879;
  t7103 = -0.36833*t806;
  t7109 = 0.020000000000000018*t1046;
  t7128 = 0. + t7090 + t7103 + t7109;
  t7450 = -0.194401*t905;
  t7489 = -1.*t905*t7039;
  t7509 = t1010*t7128;
  t7568 = 0. + t7450 + t7489 + t7509;
  t6497 = 0. + t792;
  t6627 = t6497*t718;
  t6716 = -1.*t1379;
  t6717 = 0. + t6716;
  t6731 = -1.*t6717*t1649;
  t6739 = 0. + t6627 + t6731;
  t6779 = -1.*t1010;
  t6833 = 1. + t6779;
  t6872 = -0.194401*t6833;
  t7055 = t1010*t7039;
  t7149 = t905*t7128;
  t7150 = 0. + t6872 + t7055 + t7149;
  t7247 = -1.*t792;
  t7261 = 1. + t7247;
  t7361 = -0.081715*t7261;
  t7413 = -0.11459*t792;
  t7579 = t1379*t7568;
  t7617 = t7361 + t7413 + t7579;
  t7640 = t718*t7617;
  t7642 = 0.032875*t1379;
  t7643 = t792*t7568;
  t7721 = t7642 + t7643;
  t7727 = -1.*t7721*t1649;
  t7731 = 0. + t7640 + t7727;
  t8083 = t2635*t7150;
  t8084 = -1.*t3043*t7731;
  t6140 = t2964 + t3440;
  t8080 = t2635*t6739;
  t8081 = 0. + t8080;
  t7780 = t7150*t3043;
  t7839 = t2635*t7731;
  t7842 = 0. + t7780 + t7839;
  t6766 = -1.*t3043*t6739;
  t6774 = 0. + t6766;
  t8106 = 0. + t8083 + t8084;
  t8085 = t8083 + t8084;
  t6263 = t2878*t3043;
  t6276 = t2635*t3438;
  t6301 = 0. + t6263 + t6276;
  t7185 = -1.*t7150*t3043;
  t7748 = -1.*t2635*t7731;
  t7753 = t7185 + t7748;
  t8370 = t718*t7721;
  t8542 = t7617*t1649;
  t8571 = 0. + t8370 + t8542;
  t6176 = t4746 + t4790;
  t8306 = t718*t6717;
  t8313 = t6497*t1649;
  t8363 = 0. + t8306 + t8313;
  t9007 = t4741*t3043;
  t9010 = t2635*t4775;
  t9012 = 0. + t9007 + t9010;
  t9842 = -1.*t718*t1236;
  t9854 = -1.*t1551*t1649;
  t9858 = t9842 + t9854;
  t9863 = -1.*t718*t4215;
  t9867 = -1.*t4386*t1649;
  t9907 = t9863 + t9867;
  t9939 = t3073 + t3349;
  t10049 = t4749 + t4757;
  t8585 = t8363*t8571;
  t10533 = -1.*t718*t7721;
  t10534 = -1.*t7617*t1649;
  t10536 = t10533 + t10534;
  t10486 = t7640 + t7727;
  t10540 = t6627 + t6731;
  t8799 = -1.*t8571*t1974;
  t9448 = -1.*t8363*t8571;
  t10515 = -1.*t718*t6717;
  t10523 = -1.*t6497*t1649;
  t10526 = t10515 + t10523;
  t9550 = t8571*t4575;
  t10492 = t8363*t10486;
  t10541 = t10540*t8571;
  t8595 = t8081*t7842;
  t8616 = t6774*t8106;
  t8672 = t8585 + t8595 + t8616;
  t10553 = -1.*t8571*t9939;
  t10565 = -1.*t10486*t1974;
  t8854 = -1.*t7842*t6301;
  t8862 = -1.*t8106*t3483;
  t8913 = t8799 + t8854 + t8862;
  t10651 = -1.*t8363*t10486;
  t10667 = -1.*t10540*t8571;
  t9467 = -1.*t8081*t7842;
  t9470 = -1.*t6774*t8106;
  t9472 = t9448 + t9467 + t9470;
  t10682 = t8571*t10049;
  t10691 = t10486*t4575;
  t9551 = t7842*t9012;
  t9593 = t8106*t4812;
  t9594 = t9550 + t9551 + t9593;
  t11020 = 0.032875*t792;
  t11031 = -1.*t1379*t7568;
  t11036 = t11020 + t11031;
  t11085 = t792*t718*t1085;
  t11092 = t1379*t1085*t1649;
  t11096 = t11085 + t11092;
  t11110 = t792*t718*t2878;
  t11118 = t1379*t2878*t1649;
  t11126 = t11110 + t11118;
  t11154 = -1.*t718*t1379*t1085;
  t11160 = t792*t1085*t1649;
  t11164 = t11154 + t11160;
  t11195 = -1.*t718*t1379*t2878;
  t11198 = t792*t2878*t1649;
  t11199 = t11195 + t11198;
  t10445 = t6739*t7731;
  t10463 = 0. + t10445 + t8585;
  t11312 = -1.*t11036*t1649;
  t11314 = t8370 + t11312;
  t11287 = t718*t11036;
  t11299 = t7721*t1649;
  t11300 = t11287 + t11299;
  t11322 = -1.*t792*t718;
  t11325 = -1.*t1379*t1649;
  t11332 = t11322 + t11325;
  t10592 = -1.*t7150*t2878;
  t10594 = -1.*t7731*t3438;
  t10595 = t10592 + t10594 + t8799;
  t10609 = -1.*t6739*t7731;
  t10634 = 0. + t10609 + t9448;
  t11273 = -1.*t718*t1379;
  t11280 = t792*t1649;
  t11281 = t11273 + t11280;
  t10705 = t7150*t4741;
  t10707 = t7731*t4775;
  t10715 = t10705 + t10707 + t9550;
  t11310 = t8363*t11300;
  t11336 = t11332*t8571;
  t11342 = -1.*t8571*t11164;
  t11353 = -1.*t11300*t1974;
  t11369 = -1.*t8363*t11300;
  t11373 = -1.*t11332*t8571;
  t11381 = t8571*t11199;
  t11386 = t11300*t4575;
  t11522 = -0.194401*t1010;
  t11527 = -1.*t1010*t7039;
  t11529 = -1.*t905*t7128;
  t11539 = t11522 + t11527 + t11529;
  t11586 = t937 + t1059;
  t11566 = t2720 + t2769;
  t11619 = -1.*t1010*t806;
  t11620 = t905*t1046;
  t11623 = t11619 + t11620;
  t11649 = t718*t1379*t11586;
  t11652 = -1.*t792*t11586*t1649;
  t11653 = t11649 + t11652;
  t11675 = t718*t1379*t11623;
  t11676 = -1.*t792*t11623*t1649;
  t11679 = t11675 + t11676;
  t11708 = t792*t718*t11586;
  t11709 = t1379*t11586*t1649;
  t11710 = t11708 + t11709;
  t11717 = t2635*t11566;
  t11718 = -1.*t3043*t11653;
  t11719 = t11717 + t11718;
  t11728 = t792*t718*t11623;
  t11729 = t1379*t11623*t1649;
  t11731 = t11728 + t11729;
  t11733 = t2635*t11586;
  t11735 = -1.*t3043*t11679;
  t11736 = t11733 + t11735;
  t11800 = t718*t1379*t11539;
  t11804 = -1.*t792*t11539*t1649;
  t11806 = t11800 + t11804;
  t11814 = t792*t718*t11539;
  t11816 = t1379*t11539*t1649;
  t11817 = t11814 + t11816;
  t11833 = t7450 + t7489 + t7509;
  t11670 = t11586*t3043;
  t11684 = t2635*t11679;
  t11686 = t11670 + t11684;
  t11826 = t8363*t11817;
  t11842 = -1.*t8571*t11731;
  t11847 = -1.*t11817*t1974;
  t11922 = t11833*t3043;
  t11927 = t2635*t11806;
  t11930 = t11922 + t11927;
  t11940 = t2635*t11833;
  t11942 = -1.*t3043*t11806;
  t11944 = t11940 + t11942;
  t11644 = t11566*t3043;
  t11659 = t2635*t11653;
  t11662 = t11644 + t11659;
  t11873 = -1.*t8363*t11817;
  t11886 = t8571*t11710;
  t11895 = t11817*t4575;
  t12057 = -0.16*t806;
  t12059 = t12057 + t7109;
  t12037 = 0.020000000000000018*t806;
  t12043 = 0.16*t1046;
  t12044 = t12037 + t12043;
  t12086 = -1.*t905*t12059;
  t12087 = t1010*t12044;
  t12089 = t12086 + t12087;
  t11561 = -1.*t6717*t7721;
  t11562 = -1.*t6497*t7617;
  t11565 = 0. + t11561 + t11562;
  t11567 = t11565*t11566;
  t11578 = t6717*t7721;
  t11581 = t6497*t7617;
  t11583 = 0. + t11578 + t11581;
  t11587 = t11583*t11586;
  t11610 = -0.00015845750000000015*t11586;
  t11615 = -0.11459*t11566;
  t11625 = -0.081715*t11623;
  t11626 = t11615 + t11625;
  t11631 = 0.03856*t11626;
  t11637 = t11610 + t11631;
  t11639 = -0.5*var2[12]*t11637;
  t11669 = -0.004820000000000004*t11662;
  t11687 = 0.03856*t11686;
  t11692 = t11669 + t11687;
  t11697 = -0.5*var2[0]*t11692;
  t11713 = t486*t11710;
  t11720 = t2195*t11719;
  t11722 = t11713 + t11720;
  t11723 = -0.004820000000000004*t11722;
  t11732 = t486*t11731;
  t11739 = t2195*t11736;
  t11744 = t11732 + t11739;
  t11745 = 0.03856*t11744;
  t11746 = t11723 + t11745;
  t11747 = -0.5*var2[2]*t11746;
  t11748 = t2195*t11710;
  t11754 = -1.*t486*t11719;
  t11757 = t11748 + t11754;
  t11760 = -0.004820000000000004*t11757;
  t11764 = t2195*t11731;
  t11778 = -1.*t486*t11736;
  t11780 = t11764 + t11778;
  t11784 = 0.03856*t11780;
  t11786 = t11760 + t11784;
  t11796 = -0.5*var2[1]*t11786;
  t11797 = t11731*t10463;
  t11830 = -1.*t7150*t11586;
  t11835 = -1.*t7731*t11679;
  t12126 = t718*t1379*t12089;
  t12129 = -1.*t792*t12089*t1649;
  t12130 = t12126 + t12129;
  t12157 = t792*t718*t12089;
  t12165 = t1379*t12089*t1649;
  t12182 = t12157 + t12165;
  t11864 = t11710*t10634;
  t12209 = t1010*t12059;
  t12210 = t905*t12044;
  t12211 = t12209 + t12210;
  t11884 = t7150*t11566;
  t11885 = t7731*t11653;
  t11916 = t11686*t8672;
  t12195 = t8363*t12182;
  t12223 = -1.*t12182*t1974;
  t11954 = -1.*t7842*t11686;
  t11956 = -1.*t8106*t11736;
  t12329 = t12211*t3043;
  t12332 = t2635*t12130;
  t12335 = t12329 + t12332;
  t12347 = t2635*t12211;
  t12353 = -1.*t3043*t12130;
  t12360 = t12347 + t12353;
  t11978 = t11662*t9472;
  t12251 = -1.*t8363*t12182;
  t12277 = t12182*t4575;
  t11992 = t7842*t11662;
  t11998 = t8106*t11719;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=(-0.5*(0.03856*(-1.*t2195*t3483 - 1.*t1974*t486) - 0.004820000000000004*(-1.*t2195*t4812 - 1.*t4575*t486))*var2[1] - 0.5*(0.03856*(t1974*t2195 - 1.*t3483*t486) - 0.004820000000000004*(t2195*t4575 - 1.*t4812*t486))*var2[2])*var2[14];
  p_output1[4]=(-0.5*(0.03856*t6140 - 0.004820000000000004*t6176)*var2[0] - 0.5*(-0.03856*t486*t5800 + 0.004820000000000004*t486*t5925)*var2[1] - 0.5*(0.03856*t2195*t5800 - 0.004820000000000004*t2195*t5925)*var2[2] - 0.5*(-0.004820000000000004*(t8081*(-1.*t3483*t7753 - 1.*t6140*t7842 - 1.*t6301*t8085 - 1.*t5800*t8106) + t6301*(t6774*t7753 - 1.*t3043*t6739*t7842 + t8081*t8085 - 1.*t2635*t6739*t8106) + t6140*t8672 - 1.*t3043*t6739*t8913) + 0.03856*((-1.*t6774*t7753 + t3043*t6739*t7842 - 1.*t8081*t8085 + t2635*t6739*t8106)*t9012 + t8081*(t4812*t7753 + t6176*t7842 + t5925*t8106 + t8085*t9012) + t6176*t9472 - 1.*t3043*t6739*t9594))*var2[3])*var2[14];
  p_output1[5]=(-0.5*(0.03856*t2635*t9858 - 0.004820000000000004*t2635*t9907)*var2[0] - 0.5*(-0.004820000000000004*(t10049*t2195 + t3043*t486*t9907) + 0.03856*(t3043*t486*t9858 + t2195*t9939))*var2[1] - 0.5*(-0.004820000000000004*(t10049*t486 - 1.*t2195*t3043*t9907) + 0.03856*(-1.*t2195*t3043*t9858 + t486*t9939))*var2[2] - 0.5*(-0.004820000000000004*(t6301*(t10492 + t10541 - 1.*t10536*t3043*t6774 + t10526*t2635*t7842 + t10536*t2635*t8081 - 1.*t10526*t3043*t8106) + t10526*t2635*t8913 + t2635*t8672*t9858 + t8081*(t10553 + t10565 + t10536*t3043*t3483 - 1.*t10536*t2635*t6301 - 1.*t2635*t7842*t9858 + t3043*t8106*t9858)) + 0.03856*((t10651 + t10667 + t10536*t3043*t6774 - 1.*t10526*t2635*t7842 - 1.*t10536*t2635*t8081 + t10526*t3043*t8106)*t9012 + t10526*t2635*t9594 + t2635*t9472*t9907 + t8081*(t10682 + t10691 - 1.*t10536*t3043*t4812 + t10536*t2635*t9012 + t2635*t7842*t9907 - 1.*t3043*t8106*t9907)))*var2[3] - 0.5*(0.03856*(t10049*t10634 + t10540*t10715 + t4575*(t10651 + t10667 - 1.*t10536*t6739 - 1.*t10526*t7731) + t8363*(t10682 + t10691 + t10536*t4775 + t7731*t9907)) - 0.004820000000000004*(t10540*t10595 + t1974*(t10492 + t10541 + t10536*t6739 + t10526*t7731) + t8363*(t10553 + t10565 - 1.*t10536*t3438 - 1.*t7731*t9858) + t10463*t9939))*var2[4])*var2[14];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.5*(0.03856*t11096*t2635 - 0.004820000000000004*t11126*t2635)*var2[0] - 0.5*(0.03856*(t11164*t2195 + t11096*t3043*t486) - 0.004820000000000004*(t11199*t2195 + t11126*t3043*t486))*var2[1] - 0.5*(0.03856*(-1.*t11096*t2195*t3043 + t11164*t486) - 0.004820000000000004*(-1.*t11126*t2195*t3043 + t11199*t486))*var2[2] - 0.5*(-0.004820000000000004*(t8081*(t11342 + t11353 + t11314*t3043*t3483 - 1.*t11314*t2635*t6301 - 1.*t11096*t2635*t7842 + t11096*t3043*t8106) + t6301*(t11310 + t11336 - 1.*t11314*t3043*t6774 + t11281*t2635*t7842 + t11314*t2635*t8081 - 1.*t11281*t3043*t8106) + t11096*t2635*t8672 + t11281*t2635*t8913) + 0.03856*((t11369 + t11373 + t11314*t3043*t6774 - 1.*t11281*t2635*t7842 - 1.*t11314*t2635*t8081 + t11281*t3043*t8106)*t9012 + t8081*(t11381 + t11386 - 1.*t11314*t3043*t4812 + t11126*t2635*t7842 - 1.*t11126*t3043*t8106 + t11314*t2635*t9012) + t11126*t2635*t9472 + t11281*t2635*t9594))*var2[3] - 0.5*(-0.004820000000000004*(t10463*t11164 + t10595*t11332 + t1974*(t11310 + t11336 + t11314*t6739 + t11281*t7731) + (t11342 + t11353 - 1.*t11314*t3438 - 1.*t11096*t7731)*t8363) + 0.03856*(t10634*t11199 + t10715*t11332 + t4575*(t11369 + t11373 - 1.*t11314*t6739 - 1.*t11281*t7731) + (t11381 + t11386 + t11314*t4775 + t11126*t7731)*t8363))*var2[4] - 0.5*(-0.004820000000000004*t2878*(t11036*t6717 - 1.*t1379*t7617 + t6497*t7721 - 1.*t7721*t792) + 0.03856*t4741*(-1.*t11036*t6717 + t1379*t7617 - 1.*t6497*t7721 + t7721*t792))*var2[5])*var2[14];
  p_output1[13]=(t11639 + t11697 + t11747 + t11796 - 0.5*(-0.004820000000000004*(t11916 + (t11842 + t11847 + t11954 + t11956 - 1.*t11944*t3483 - 1.*t11930*t6301)*t8081 + t6301*(t11826 + t11944*t6774 + t11930*t8081)) + 0.03856*(t11978 + (t11873 - 1.*t11944*t6774 - 1.*t11930*t8081)*t9012 + t8081*(t11886 + t11895 + t11992 + t11998 + t11944*t4812 + t11930*t9012)))*var2[3] - 0.5*(-0.004820000000000004*(t11797 + t1974*(t11826 + t11806*t6739) + (t11830 + t11835 + t11842 + t11847 - 1.*t11833*t2878 - 1.*t11806*t3438)*t8363) + 0.03856*(t11864 + t4575*(t11873 - 1.*t11806*t6739) + (t11884 + t11885 + t11886 + t11895 + t11833*t4741 + t11806*t4775)*t8363))*var2[4] - 0.5*(0.03856*(t11567 + t4741*(-1.*t11539*t1379*t6497 - 1.*t11539*t6717*t792)) - 0.004820000000000004*(t11587 + t2878*(t11539*t1379*t6497 + t11539*t6717*t792)))*var2[5])*var2[14];
  p_output1[14]=(t11639 + t11697 + t11747 + t11796 - 0.5*(-0.004820000000000004*(t11916 + (t11842 + t11954 + t11956 + t12223 - 1.*t12360*t3483 - 1.*t12335*t6301)*t8081 + t6301*(t12195 + t12360*t6774 + t12335*t8081)) + 0.03856*(t11978 + (t12251 - 1.*t12360*t6774 - 1.*t12335*t8081)*t9012 + t8081*(t11886 + t11992 + t11998 + t12277 + t12360*t4812 + t12335*t9012)))*var2[3] - 0.5*(-0.004820000000000004*(t11797 + t1974*(t12195 + t12130*t6739) + (t11830 + t11835 + t11842 + t12223 - 1.*t12211*t2878 - 1.*t12130*t3438)*t8363) + 0.03856*(t11864 + t4575*(t12251 - 1.*t12130*t6739) + (t11884 + t11885 + t11886 + t12277 + t12211*t4741 + t12130*t4775)*t8363))*var2[4] - 0.5*(0.03856*(t11567 + t4741*(-1.*t12089*t1379*t6497 - 1.*t12089*t6717*t792)) - 0.004820000000000004*(t11587 + t2878*(t12089*t1379*t6497 + t12089*t6717*t792)))*var2[5] - 0.5*(0.03856*(t1046*t12059 - 1.*t1046*t7128 + 0.194401*t806 + t12044*t806 + t7039*t806) - 0.004820000000000004*(0.194401*t1046 + t1046*t12044 + t1046*t7039 - 1.*t12059*t806 + t7128*t806))*var2[13])*var2[14];
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

#include "Ce3_vec15_plane.hh"

namespace SymFunction
{

void Ce3_vec15_plane_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
