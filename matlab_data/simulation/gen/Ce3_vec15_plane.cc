/*
 * Automatically Generated from Mathematica.
 * Fri 21 Dec 2018 15:12:05 GMT-05:00
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
  double t615;
  double t676;
  double t680;
  double t700;
  double t732;
  double t798;
  double t990;
  double t303;
  double t1627;
  double t1713;
  double t2088;
  double t417;
  double t1037;
  double t1109;
  double t2379;
  double t302;
  double t2624;
  double t2665;
  double t2762;
  double t2570;
  double t2571;
  double t2810;
  double t3948;
  double t3964;
  double t3401;
  double t3610;
  double t1144;
  double t2467;
  double t2539;
  double t2797;
  double t2911;
  double t2939;
  double t2971;
  double t2994;
  double t3117;
  double t3651;
  double t3967;
  double t4000;
  double t4049;
  double t4236;
  double t4254;
  double t4275;
  double t4302;
  double t4309;
  double t4315;
  double t4319;
  double t4345;
  double t5737;
  double t5778;
  double t5937;
  double t6022;
  double t6047;
  double t6069;
  double t8335;
  double t8343;
  double t8383;
  double t8449;
  double t8453;
  double t8455;
  double t8497;
  double t8539;
  double t8542;
  double t8557;
  double t8610;
  double t8632;
  double t8643;
  double t8647;
  double t8001;
  double t8040;
  double t8045;
  double t8060;
  double t8131;
  double t8133;
  double t8198;
  double t8301;
  double t8305;
  double t8484;
  double t8575;
  double t8576;
  double t8583;
  double t8590;
  double t8591;
  double t8595;
  double t8662;
  double t8671;
  double t8683;
  double t8684;
  double t8685;
  double t8686;
  double t8699;
  double t8750;
  double t9218;
  double t9227;
  double t7588;
  double t9149;
  double t9170;
  double t8888;
  double t8899;
  double t8907;
  double t8173;
  double t8182;
  double t9252;
  double t9236;
  double t7811;
  double t7880;
  double t7911;
  double t8579;
  double t8753;
  double t8812;
  double t9293;
  double t9297;
  double t9299;
  double t7627;
  double t9286;
  double t9287;
  double t9288;
  double t9664;
  double t9679;
  double t9682;
  double t9803;
  double t9820;
  double t9827;
  double t9832;
  double t9838;
  double t9842;
  double t9878;
  double t9913;
  double t9300;
  double t10096;
  double t10105;
  double t10127;
  double t10039;
  double t10144;
  double t9634;
  double t9699;
  double t10049;
  double t10057;
  double t10063;
  double t9749;
  double t10043;
  double t10158;
  double t9301;
  double t9310;
  double t9316;
  double t10203;
  double t10233;
  double t9642;
  double t9646;
  double t9648;
  double t10355;
  double t10360;
  double t9701;
  double t9702;
  double t9704;
  double t10373;
  double t10391;
  double t9750;
  double t9760;
  double t9768;
  double t10630;
  double t10662;
  double t10679;
  double t10779;
  double t10787;
  double t10798;
  double t10826;
  double t10834;
  double t10848;
  double t10869;
  double t10871;
  double t10896;
  double t10989;
  double t10990;
  double t11002;
  double t10007;
  double t10034;
  double t11124;
  double t11125;
  double t11117;
  double t11118;
  double t11122;
  double t11129;
  double t11132;
  double t11135;
  double t10300;
  double t10307;
  double t10319;
  double t10342;
  double t10347;
  double t11092;
  double t11105;
  double t11108;
  double t10405;
  double t10411;
  double t10423;
  double t11123;
  double t11137;
  double t11149;
  double t11156;
  double t11198;
  double t11203;
  double t11209;
  double t11217;
  double t11344;
  double t11346;
  double t11353;
  double t11354;
  double t11416;
  double t11388;
  double t11487;
  double t11488;
  double t11491;
  double t11515;
  double t11520;
  double t11521;
  double t11531;
  double t11532;
  double t11533;
  double t11550;
  double t11555;
  double t11556;
  double t11562;
  double t11567;
  double t11571;
  double t11584;
  double t11585;
  double t11600;
  double t11620;
  double t11624;
  double t11639;
  double t11736;
  double t11738;
  double t11742;
  double t11756;
  double t11759;
  double t11777;
  double t11834;
  double t11530;
  double t11538;
  double t11542;
  double t11779;
  double t11842;
  double t11845;
  double t12004;
  double t12005;
  double t12009;
  double t12011;
  double t12020;
  double t12023;
  double t11507;
  double t11524;
  double t11525;
  double t11926;
  double t11964;
  double t11970;
  double t12140;
  double t12141;
  double t12125;
  double t12127;
  double t12130;
  double t12169;
  double t12171;
  double t12172;
  double t11378;
  double t11381;
  double t11386;
  double t11391;
  double t11399;
  double t11403;
  double t11405;
  double t11418;
  double t11473;
  double t11480;
  double t11492;
  double t11497;
  double t11501;
  double t11502;
  double t11504;
  double t11529;
  double t11543;
  double t11546;
  double t11547;
  double t11558;
  double t11575;
  double t11578;
  double t11583;
  double t11601;
  double t11649;
  double t11670;
  double t11671;
  double t11676;
  double t11680;
  double t11682;
  double t11695;
  double t11703;
  double t11709;
  double t11710;
  double t11712;
  double t11716;
  double t11729;
  double t11730;
  double t11731;
  double t11734;
  double t11829;
  double t11838;
  double t12231;
  double t12236;
  double t12240;
  double t12252;
  double t12254;
  double t12255;
  double t11897;
  double t12271;
  double t12273;
  double t12274;
  double t11954;
  double t11958;
  double t11992;
  double t12257;
  double t12282;
  double t12037;
  double t12038;
  double t12339;
  double t12340;
  double t12344;
  double t12351;
  double t12354;
  double t12360;
  double t12057;
  double t12301;
  double t12309;
  double t12079;
  double t12082;
  t615 = Cos(var1[14]);
  t676 = Sin(var1[13]);
  t680 = -1.*t615*t676;
  t700 = Cos(var1[13]);
  t732 = Sin(var1[14]);
  t798 = -1.*t700*t732;
  t990 = 0. + t680 + t798;
  t303 = Cos(var1[5]);
  t1627 = Sin(var1[12]);
  t1713 = t1627*t990;
  t2088 = 0. + t1713;
  t417 = Cos(var1[12]);
  t1037 = t417*t990;
  t1109 = 0. + t1037;
  t2379 = Sin(var1[5]);
  t302 = Sin(var1[3]);
  t2624 = t700*t615;
  t2665 = -1.*t676*t732;
  t2762 = 0. + t2624 + t2665;
  t2570 = Cos(var1[3]);
  t2571 = Cos(var1[4]);
  t2810 = Sin(var1[4]);
  t3948 = t1627*t2762;
  t3964 = 0. + t3948;
  t3401 = t417*t2762;
  t3610 = 0. + t3401;
  t1144 = t303*t1109;
  t2467 = t2088*t2379;
  t2539 = 0. + t1144 + t2467;
  t2797 = t2571*t2762;
  t2911 = t303*t2088;
  t2939 = -1.*t1109*t2379;
  t2971 = 0. + t2911 + t2939;
  t2994 = -1.*t2810*t2971;
  t3117 = 0. + t2797 + t2994;
  t3651 = t303*t3610;
  t3967 = t3964*t2379;
  t4000 = 0. + t3651 + t3967;
  t4049 = t615*t676;
  t4236 = t700*t732;
  t4254 = 0. + t4049 + t4236;
  t4275 = t2571*t4254;
  t4302 = t303*t3964;
  t4309 = -1.*t3610*t2379;
  t4315 = 0. + t4302 + t4309;
  t4319 = -1.*t2810*t4315;
  t4345 = 0. + t4275 + t4319;
  t5737 = -1.*t2762*t2810;
  t5778 = -1.*t2571*t2971;
  t5937 = t5737 + t5778;
  t6022 = -1.*t4254*t2810;
  t6047 = -1.*t2571*t4315;
  t6069 = t6022 + t6047;
  t8335 = -1.*t615;
  t8343 = 1. + t8335;
  t8383 = -0.336601*t8343;
  t8449 = -0.356601*t615;
  t8453 = -0.16*t732;
  t8455 = 0. + t8383 + t8449 + t8453;
  t8497 = -0.20833*t8343;
  t8539 = -0.36833*t615;
  t8542 = 0.020000000000000018*t732;
  t8557 = 0. + t8497 + t8539 + t8542;
  t8610 = -0.194401*t676;
  t8632 = -1.*t676*t8455;
  t8643 = t700*t8557;
  t8647 = 0. + t8610 + t8632 + t8643;
  t8001 = 0. + t417;
  t8040 = t8001*t303;
  t8045 = -1.*t1627;
  t8060 = 0. + t8045;
  t8131 = -1.*t8060*t2379;
  t8133 = 0. + t8040 + t8131;
  t8198 = -1.*t700;
  t8301 = 1. + t8198;
  t8305 = -0.194401*t8301;
  t8484 = t700*t8455;
  t8575 = t676*t8557;
  t8576 = 0. + t8305 + t8484 + t8575;
  t8583 = -1.*t417;
  t8590 = 1. + t8583;
  t8591 = -0.081715*t8590;
  t8595 = -0.11459*t417;
  t8662 = t1627*t8647;
  t8671 = t8591 + t8595 + t8662;
  t8683 = t303*t8671;
  t8684 = 0.032875*t1627;
  t8685 = t417*t8647;
  t8686 = t8684 + t8685;
  t8699 = -1.*t8686*t2379;
  t8750 = 0. + t8683 + t8699;
  t9218 = t2571*t8576;
  t9227 = -1.*t2810*t8750;
  t7588 = t2797 + t2994;
  t9149 = t2571*t8133;
  t9170 = 0. + t9149;
  t8888 = t8576*t2810;
  t8899 = t2571*t8750;
  t8907 = 0. + t8888 + t8899;
  t8173 = -1.*t2810*t8133;
  t8182 = 0. + t8173;
  t9252 = 0. + t9218 + t9227;
  t9236 = t9218 + t9227;
  t7811 = t2762*t2810;
  t7880 = t2571*t2971;
  t7911 = 0. + t7811 + t7880;
  t8579 = -1.*t8576*t2810;
  t8753 = -1.*t2571*t8750;
  t8812 = t8579 + t8753;
  t9293 = t303*t8686;
  t9297 = t8671*t2379;
  t9299 = 0. + t9293 + t9297;
  t7627 = t4275 + t4319;
  t9286 = t303*t8060;
  t9287 = t8001*t2379;
  t9288 = 0. + t9286 + t9287;
  t9664 = t4254*t2810;
  t9679 = t2571*t4315;
  t9682 = 0. + t9664 + t9679;
  t9803 = -1.*t303*t1109;
  t9820 = -1.*t2088*t2379;
  t9827 = t9803 + t9820;
  t9832 = -1.*t303*t3610;
  t9838 = -1.*t3964*t2379;
  t9842 = t9832 + t9838;
  t9878 = t2911 + t2939;
  t9913 = t4302 + t4309;
  t9300 = t9288*t9299;
  t10096 = -1.*t303*t8686;
  t10105 = -1.*t8671*t2379;
  t10127 = t10096 + t10105;
  t10039 = t8683 + t8699;
  t10144 = t8040 + t8131;
  t9634 = -1.*t9299*t2539;
  t9699 = -1.*t9288*t9299;
  t10049 = -1.*t303*t8060;
  t10057 = -1.*t8001*t2379;
  t10063 = t10049 + t10057;
  t9749 = t9299*t4000;
  t10043 = t9288*t10039;
  t10158 = t10144*t9299;
  t9301 = t9170*t8907;
  t9310 = t8182*t9252;
  t9316 = t9300 + t9301 + t9310;
  t10203 = -1.*t9299*t9878;
  t10233 = -1.*t10039*t2539;
  t9642 = -1.*t8907*t7911;
  t9646 = -1.*t9252*t3117;
  t9648 = t9634 + t9642 + t9646;
  t10355 = -1.*t9288*t10039;
  t10360 = -1.*t10144*t9299;
  t9701 = -1.*t9170*t8907;
  t9702 = -1.*t8182*t9252;
  t9704 = t9699 + t9701 + t9702;
  t10373 = t9299*t9913;
  t10391 = t10039*t4000;
  t9750 = t8907*t9682;
  t9760 = t9252*t4345;
  t9768 = t9749 + t9750 + t9760;
  t10630 = 0.032875*t417;
  t10662 = -1.*t1627*t8647;
  t10679 = t10630 + t10662;
  t10779 = t417*t303*t990;
  t10787 = t1627*t990*t2379;
  t10798 = t10779 + t10787;
  t10826 = t417*t303*t2762;
  t10834 = t1627*t2762*t2379;
  t10848 = t10826 + t10834;
  t10869 = -1.*t303*t1627*t990;
  t10871 = t417*t990*t2379;
  t10896 = t10869 + t10871;
  t10989 = -1.*t303*t1627*t2762;
  t10990 = t417*t2762*t2379;
  t11002 = t10989 + t10990;
  t10007 = t8133*t8750;
  t10034 = 0. + t10007 + t9300;
  t11124 = -1.*t10679*t2379;
  t11125 = t9293 + t11124;
  t11117 = t303*t10679;
  t11118 = t8686*t2379;
  t11122 = t11117 + t11118;
  t11129 = -1.*t417*t303;
  t11132 = -1.*t1627*t2379;
  t11135 = t11129 + t11132;
  t10300 = -1.*t8576*t2762;
  t10307 = -1.*t8750*t2971;
  t10319 = t10300 + t10307 + t9634;
  t10342 = -1.*t8133*t8750;
  t10347 = 0. + t10342 + t9699;
  t11092 = -1.*t303*t1627;
  t11105 = t417*t2379;
  t11108 = t11092 + t11105;
  t10405 = t8576*t4254;
  t10411 = t8750*t4315;
  t10423 = t10405 + t10411 + t9749;
  t11123 = t9288*t11122;
  t11137 = t11135*t9299;
  t11149 = -1.*t9299*t10896;
  t11156 = -1.*t11122*t2539;
  t11198 = -1.*t9288*t11122;
  t11203 = -1.*t11135*t9299;
  t11209 = t9299*t11002;
  t11217 = t11122*t4000;
  t11344 = -0.194401*t700;
  t11346 = -1.*t700*t8455;
  t11353 = -1.*t676*t8557;
  t11354 = t11344 + t11346 + t11353;
  t11416 = t680 + t798;
  t11388 = t2624 + t2665;
  t11487 = -1.*t700*t615;
  t11488 = t676*t732;
  t11491 = t11487 + t11488;
  t11515 = t303*t1627*t11416;
  t11520 = -1.*t417*t11416*t2379;
  t11521 = t11515 + t11520;
  t11531 = t303*t1627*t11491;
  t11532 = -1.*t417*t11491*t2379;
  t11533 = t11531 + t11532;
  t11550 = t417*t303*t11416;
  t11555 = t1627*t11416*t2379;
  t11556 = t11550 + t11555;
  t11562 = t2571*t11388;
  t11567 = -1.*t2810*t11521;
  t11571 = t11562 + t11567;
  t11584 = t417*t303*t11491;
  t11585 = t1627*t11491*t2379;
  t11600 = t11584 + t11585;
  t11620 = t2571*t11416;
  t11624 = -1.*t2810*t11533;
  t11639 = t11620 + t11624;
  t11736 = t303*t1627*t11354;
  t11738 = -1.*t417*t11354*t2379;
  t11742 = t11736 + t11738;
  t11756 = t417*t303*t11354;
  t11759 = t1627*t11354*t2379;
  t11777 = t11756 + t11759;
  t11834 = t8610 + t8632 + t8643;
  t11530 = t11416*t2810;
  t11538 = t2571*t11533;
  t11542 = t11530 + t11538;
  t11779 = t9288*t11777;
  t11842 = -1.*t9299*t11600;
  t11845 = -1.*t11777*t2539;
  t12004 = t11834*t2810;
  t12005 = t2571*t11742;
  t12009 = t12004 + t12005;
  t12011 = t2571*t11834;
  t12020 = -1.*t2810*t11742;
  t12023 = t12011 + t12020;
  t11507 = t11388*t2810;
  t11524 = t2571*t11521;
  t11525 = t11507 + t11524;
  t11926 = -1.*t9288*t11777;
  t11964 = t9299*t11556;
  t11970 = t11777*t4000;
  t12140 = -0.16*t615;
  t12141 = t12140 + t8542;
  t12125 = 0.020000000000000018*t615;
  t12127 = 0.16*t732;
  t12130 = t12125 + t12127;
  t12169 = -1.*t676*t12141;
  t12171 = t700*t12130;
  t12172 = t12169 + t12171;
  t11378 = -1.*t8060*t8686;
  t11381 = -1.*t8001*t8671;
  t11386 = 0. + t11378 + t11381;
  t11391 = t11386*t11388;
  t11399 = t8060*t8686;
  t11403 = t8001*t8671;
  t11405 = 0. + t11399 + t11403;
  t11418 = t11405*t11416;
  t11473 = -0.00015845750000000015*t11416;
  t11480 = -0.11459*t11388;
  t11492 = -0.081715*t11491;
  t11497 = t11480 + t11492;
  t11501 = 0.03856*t11497;
  t11502 = t11473 + t11501;
  t11504 = -0.5*var2[12]*t11502;
  t11529 = -0.004820000000000004*t11525;
  t11543 = 0.03856*t11542;
  t11546 = t11529 + t11543;
  t11547 = -0.5*var2[0]*t11546;
  t11558 = t302*t11556;
  t11575 = t2570*t11571;
  t11578 = t11558 + t11575;
  t11583 = -0.004820000000000004*t11578;
  t11601 = t302*t11600;
  t11649 = t2570*t11639;
  t11670 = t11601 + t11649;
  t11671 = 0.03856*t11670;
  t11676 = t11583 + t11671;
  t11680 = -0.5*var2[2]*t11676;
  t11682 = t2570*t11556;
  t11695 = -1.*t302*t11571;
  t11703 = t11682 + t11695;
  t11709 = -0.004820000000000004*t11703;
  t11710 = t2570*t11600;
  t11712 = -1.*t302*t11639;
  t11716 = t11710 + t11712;
  t11729 = 0.03856*t11716;
  t11730 = t11709 + t11729;
  t11731 = -0.5*var2[1]*t11730;
  t11734 = t11600*t10034;
  t11829 = -1.*t8576*t11416;
  t11838 = -1.*t8750*t11533;
  t12231 = t303*t1627*t12172;
  t12236 = -1.*t417*t12172*t2379;
  t12240 = t12231 + t12236;
  t12252 = t417*t303*t12172;
  t12254 = t1627*t12172*t2379;
  t12255 = t12252 + t12254;
  t11897 = t11556*t10347;
  t12271 = t700*t12141;
  t12273 = t676*t12130;
  t12274 = t12271 + t12273;
  t11954 = t8576*t11388;
  t11958 = t8750*t11521;
  t11992 = t11542*t9316;
  t12257 = t9288*t12255;
  t12282 = -1.*t12255*t2539;
  t12037 = -1.*t8907*t11542;
  t12038 = -1.*t9252*t11639;
  t12339 = t12274*t2810;
  t12340 = t2571*t12240;
  t12344 = t12339 + t12340;
  t12351 = t2571*t12274;
  t12354 = -1.*t2810*t12240;
  t12360 = t12351 + t12354;
  t12057 = t11525*t9704;
  t12301 = -1.*t9288*t12255;
  t12309 = t12255*t4000;
  t12079 = t8907*t11525;
  t12082 = t9252*t11571;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=(-0.5*(0.03856*(-1.*t2539*t302 - 1.*t2570*t3117) - 0.004820000000000004*(-1.*t302*t4000 - 1.*t2570*t4345))*var2[1] - 0.5*(0.03856*(t2539*t2570 - 1.*t302*t3117) - 0.004820000000000004*(t2570*t4000 - 1.*t302*t4345))*var2[2])*var2[14];
  p_output1[4]=(-0.5*(0.03856*t7588 - 0.004820000000000004*t7627)*var2[0] - 0.5*(-0.03856*t302*t5937 + 0.004820000000000004*t302*t6069)*var2[1] - 0.5*(0.03856*t2570*t5937 - 0.004820000000000004*t2570*t6069)*var2[2] - 0.5*(-0.004820000000000004*(t9170*(-1.*t3117*t8812 - 1.*t7588*t8907 - 1.*t7911*t9236 - 1.*t5937*t9252) + t7911*(t8182*t8812 - 1.*t2810*t8133*t8907 + t9170*t9236 - 1.*t2571*t8133*t9252) + t7588*t9316 - 1.*t2810*t8133*t9648) + 0.03856*((-1.*t8182*t8812 + t2810*t8133*t8907 - 1.*t9170*t9236 + t2571*t8133*t9252)*t9682 + t9170*(t4345*t8812 + t7627*t8907 + t6069*t9252 + t9236*t9682) + t7627*t9704 - 1.*t2810*t8133*t9768))*var2[3])*var2[14];
  p_output1[5]=(-0.5*(0.03856*t2571*t9827 - 0.004820000000000004*t2571*t9842)*var2[0] - 0.5*(0.03856*(t2810*t302*t9827 + t2570*t9878) - 0.004820000000000004*(t2810*t302*t9842 + t2570*t9913))*var2[1] - 0.5*(0.03856*(-1.*t2570*t2810*t9827 + t302*t9878) - 0.004820000000000004*(-1.*t2570*t2810*t9842 + t302*t9913))*var2[2] - 0.5*(-0.004820000000000004*(t7911*(t10043 + t10158 - 1.*t10127*t2810*t8182 + t10063*t2571*t8907 + t10127*t2571*t9170 - 1.*t10063*t2810*t9252) + t10063*t2571*t9648 + t2571*t9316*t9827 + t9170*(t10203 + t10233 + t10127*t2810*t3117 - 1.*t10127*t2571*t7911 - 1.*t2571*t8907*t9827 + t2810*t9252*t9827)) + 0.03856*((t10355 + t10360 + t10127*t2810*t8182 - 1.*t10063*t2571*t8907 - 1.*t10127*t2571*t9170 + t10063*t2810*t9252)*t9682 + t10063*t2571*t9768 + t2571*t9704*t9842 + t9170*(t10373 + t10391 - 1.*t10127*t2810*t4345 + t10127*t2571*t9682 + t2571*t8907*t9842 - 1.*t2810*t9252*t9842)))*var2[3] - 0.5*(-0.004820000000000004*(t10144*t10319 + t2539*(t10043 + t10158 + t10127*t8133 + t10063*t8750) + t9288*(t10203 + t10233 - 1.*t10127*t2971 - 1.*t8750*t9827) + t10034*t9878) + 0.03856*(t10144*t10423 + t4000*(t10355 + t10360 - 1.*t10127*t8133 - 1.*t10063*t8750) + t9288*(t10373 + t10391 + t10127*t4315 + t8750*t9842) + t10347*t9913))*var2[4])*var2[14];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.5*(0.03856*t10798*t2571 - 0.004820000000000004*t10848*t2571)*var2[0] - 0.5*(0.03856*(t10896*t2570 + t10798*t2810*t302) - 0.004820000000000004*(t11002*t2570 + t10848*t2810*t302))*var2[1] - 0.5*(0.03856*(-1.*t10798*t2570*t2810 + t10896*t302) - 0.004820000000000004*(-1.*t10848*t2570*t2810 + t11002*t302))*var2[2] - 0.5*(-0.004820000000000004*(t9170*(t11149 + t11156 + t11125*t2810*t3117 - 1.*t11125*t2571*t7911 - 1.*t10798*t2571*t8907 + t10798*t2810*t9252) + t7911*(t11123 + t11137 - 1.*t11125*t2810*t8182 + t11108*t2571*t8907 + t11125*t2571*t9170 - 1.*t11108*t2810*t9252) + t10798*t2571*t9316 + t11108*t2571*t9648) + 0.03856*((t11198 + t11203 + t11125*t2810*t8182 - 1.*t11108*t2571*t8907 - 1.*t11125*t2571*t9170 + t11108*t2810*t9252)*t9682 + t9170*(t11209 + t11217 - 1.*t11125*t2810*t4345 + t10848*t2571*t8907 - 1.*t10848*t2810*t9252 + t11125*t2571*t9682) + t10848*t2571*t9704 + t11108*t2571*t9768))*var2[3] - 0.5*(-0.004820000000000004*(t10034*t10896 + t10319*t11135 + t2539*(t11123 + t11137 + t11125*t8133 + t11108*t8750) + (t11149 + t11156 - 1.*t11125*t2971 - 1.*t10798*t8750)*t9288) + 0.03856*(t10347*t11002 + t10423*t11135 + t4000*(t11198 + t11203 - 1.*t11125*t8133 - 1.*t11108*t8750) + (t11209 + t11217 + t11125*t4315 + t10848*t8750)*t9288))*var2[4] - 0.5*(0.03856*t4254*(-1.*t10679*t8060 + t1627*t8671 + t417*t8686 - 1.*t8001*t8686) - 0.004820000000000004*t2762*(t10679*t8060 - 1.*t1627*t8671 - 1.*t417*t8686 + t8001*t8686))*var2[5])*var2[14];
  p_output1[13]=(t11504 + t11547 + t11680 + t11731 - 0.5*(-0.004820000000000004*(t11992 + (t11842 + t11845 + t12037 + t12038 - 1.*t12023*t3117 - 1.*t12009*t7911)*t9170 + t7911*(t11779 + t12023*t8182 + t12009*t9170)) + 0.03856*(t12057 + (t11926 - 1.*t12023*t8182 - 1.*t12009*t9170)*t9682 + t9170*(t11964 + t11970 + t12079 + t12082 + t12023*t4345 + t12009*t9682)))*var2[3] - 0.5*(-0.004820000000000004*(t11734 + t2539*(t11779 + t11742*t8133) + (t11829 + t11838 + t11842 + t11845 - 1.*t11834*t2762 - 1.*t11742*t2971)*t9288) + 0.03856*(t11897 + t4000*(t11926 - 1.*t11742*t8133) + (t11954 + t11958 + t11964 + t11970 + t11834*t4254 + t11742*t4315)*t9288))*var2[4] - 0.5*(0.03856*(t11391 + t4254*(-1.*t11354*t1627*t8001 - 1.*t11354*t417*t8060)) - 0.004820000000000004*(t11418 + t2762*(t11354*t1627*t8001 + t11354*t417*t8060)))*var2[5])*var2[14];
  p_output1[14]=(t11504 + t11547 + t11680 + t11731 - 0.5*(-0.004820000000000004*(t11992 + (t11842 + t12037 + t12038 + t12282 - 1.*t12360*t3117 - 1.*t12344*t7911)*t9170 + t7911*(t12257 + t12360*t8182 + t12344*t9170)) + 0.03856*(t12057 + (t12301 - 1.*t12360*t8182 - 1.*t12344*t9170)*t9682 + t9170*(t11964 + t12079 + t12082 + t12309 + t12360*t4345 + t12344*t9682)))*var2[3] - 0.5*(-0.004820000000000004*(t11734 + t2539*(t12257 + t12240*t8133) + (t11829 + t11838 + t11842 + t12282 - 1.*t12274*t2762 - 1.*t12240*t2971)*t9288) + 0.03856*(t11897 + t4000*(t12301 - 1.*t12240*t8133) + (t11954 + t11958 + t11964 + t12309 + t12274*t4254 + t12240*t4315)*t9288))*var2[4] - 0.5*(0.03856*(t11391 + t4254*(-1.*t12172*t1627*t8001 - 1.*t12172*t417*t8060)) - 0.004820000000000004*(t11418 + t2762*(t12172*t1627*t8001 + t12172*t417*t8060)))*var2[5] - 0.5*(-0.004820000000000004*(-1.*t12141*t615 + 0.194401*t732 + t12130*t732 + t732*t8455 + t615*t8557) + 0.03856*(0.194401*t615 + t12130*t615 + t12141*t732 + t615*t8455 - 1.*t732*t8557))*var2[13])*var2[14];
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
