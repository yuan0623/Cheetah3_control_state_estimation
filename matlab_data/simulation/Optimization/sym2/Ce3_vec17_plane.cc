/*
 * Automatically Generated from Mathematica.
 * Sun 28 Jul 2019 02:54:21 GMT-04:00
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
  double t296;
  double t308;
  double t381;
  double t239;
  double t604;
  double t158;
  double t1015;
  double t972;
  double t975;
  double t1059;
  double t1655;
  double t1826;
  double t1792;
  double t1794;
  double t2005;
  double t2071;
  double t2095;
  double t2293;
  double t2294;
  double t2223;
  double t2264;
  double t1887;
  double t1895;
  double t1896;
  double t1907;
  double t1804;
  double t1822;
  double t1827;
  double t1828;
  double t2333;
  double t2387;
  double t2388;
  double t2985;
  double t3007;
  double t2977;
  double t2981;
  double t312;
  double t610;
  double t901;
  double t1027;
  double t1079;
  double t1126;
  double t1141;
  double t1143;
  double t1158;
  double t1167;
  double t1199;
  double t1227;
  double t1346;
  double t1389;
  double t1431;
  double t1522;
  double t1538;
  double t1540;
  double t1853;
  double t1883;
  double t1968;
  double t1969;
  double t1992;
  double t1996;
  double t2291;
  double t2304;
  double t2323;
  double t2450;
  double t2504;
  double t2523;
  double t2547;
  double t2657;
  double t2681;
  double t2834;
  double t2846;
  double t2847;
  double t2912;
  double t2918;
  double t2976;
  double t2983;
  double t3008;
  double t3027;
  double t3127;
  double t3176;
  double t3180;
  double t3198;
  double t3200;
  double t3201;
  double t3202;
  double t3215;
  double t3217;
  double t4029;
  double t4030;
  double t4151;
  double t4176;
  double t4195;
  double t4219;
  double t4265;
  double t4268;
  double t4273;
  double t4299;
  double t4383;
  double t4488;
  double t5019;
  double t5020;
  double t5029;
  double t4790;
  double t4809;
  double t4814;
  double t4822;
  double t4839;
  double t4841;
  double t4842;
  double t4863;
  double t4929;
  double t4949;
  double t4956;
  double t4998;
  double t5006;
  double t5063;
  double t5090;
  double t5106;
  double t5116;
  double t5163;
  double t5166;
  double t5176;
  double t5203;
  double t5229;
  double t5298;
  double t5302;
  double t4939;
  double t5213;
  double t5214;
  double t5476;
  double t5504;
  double t5506;
  double t4746;
  double t4754;
  double t4773;
  double t5392;
  double t5400;
  double t5417;
  double t5365;
  double t5371;
  double t5379;
  double t6188;
  double t6203;
  double t6235;
  double t7149;
  double t7190;
  double t7274;
  double t7346;
  double t6968;
  double t7028;
  double t7029;
  double t7030;
  double t7035;
  double t7046;
  double t7047;
  double t7048;
  double t7049;
  double t7058;
  double t7090;
  double t7357;
  double t7383;
  double t7388;
  double t7390;
  double t7403;
  double t7413;
  double t7416;
  double t7427;
  double t7483;
  double t7484;
  double t4674;
  double t7453;
  double t7480;
  double t7440;
  double t7449;
  double t7450;
  double t7043;
  double t7044;
  double t7509;
  double t7491;
  double t6949;
  double t6958;
  double t6963;
  double t7055;
  double t7429;
  double t7431;
  double t7606;
  double t7612;
  double t7616;
  double t4707;
  double t7547;
  double t7582;
  double t7601;
  double t7825;
  double t7839;
  double t7843;
  double t8688;
  double t8745;
  double t8749;
  double t8768;
  double t8769;
  double t8773;
  double t8782;
  double t8789;
  double t8790;
  double t8831;
  double t8833;
  double t8874;
  double t9038;
  double t9092;
  double t5421;
  double t9626;
  double t9628;
  double t9629;
  double t6035;
  double t6391;
  double t9695;
  double t9698;
  double t9708;
  double t6870;
  double t7618;
  double t10069;
  double t10074;
  double t10099;
  double t10027;
  double t10132;
  double t7736;
  double t7938;
  double t10038;
  double t10044;
  double t10053;
  double t8228;
  double t9719;
  double t9735;
  double t5431;
  double t5507;
  double t5698;
  double t9624;
  double t9671;
  double t6062;
  double t6137;
  double t6138;
  double t9876;
  double t10598;
  double t10608;
  double t9891;
  double t6465;
  double t6496;
  double t6648;
  double t9915;
  double t9947;
  double t6889;
  double t6892;
  double t6893;
  double t10028;
  double t10139;
  double t7619;
  double t7622;
  double t7627;
  double t10182;
  double t10246;
  double t7751;
  double t7754;
  double t7763;
  double t10328;
  double t10391;
  double t8011;
  double t8058;
  double t8091;
  double t10445;
  double t10500;
  double t8229;
  double t8263;
  double t8301;
  double t11127;
  double t11140;
  double t11146;
  double t11180;
  double t11183;
  double t11245;
  double t11250;
  double t11251;
  double t11263;
  double t11268;
  double t8756;
  double t8775;
  double t8981;
  double t8982;
  double t8999;
  double t9010;
  double t9015;
  double t9017;
  double t9020;
  double t9023;
  double t11364;
  double t11366;
  double t11382;
  double t11387;
  double t11390;
  double t11399;
  double t9268;
  double t9287;
  double t9363;
  double t9466;
  double t9483;
  double t9506;
  double t9512;
  double t9524;
  double t11415;
  double t11416;
  double t11421;
  double t11441;
  double t11442;
  double t11447;
  double t9611;
  double t9620;
  double t9623;
  double t9625;
  double t11522;
  double t11530;
  double t11557;
  double t9717;
  double t11566;
  double t11574;
  double t11578;
  double t9753;
  double t9801;
  double t9810;
  double t9812;
  double t9821;
  double t9837;
  double t9873;
  double t9874;
  double t9928;
  double t9959;
  double t9970;
  double t9972;
  double t9983;
  double t10015;
  double t10023;
  double t11733;
  double t11739;
  double t11748;
  double t11713;
  double t11717;
  double t11720;
  double t10271;
  double t10280;
  double t10281;
  double t10321;
  double t10322;
  double t10515;
  double t10527;
  double t10538;
  double t11594;
  double t10615;
  double t10629;
  double t10649;
  double t11565;
  double t10707;
  double t10724;
  double t10749;
  double t11615;
  double t10820;
  double t10821;
  double t10847;
  double t11670;
  double t10848;
  double t10850;
  double t10871;
  double t11728;
  double t11764;
  double t11800;
  double t11852;
  double t11883;
  double t11904;
  double t11931;
  double t11952;
  double t12377;
  double t12394;
  double t12401;
  double t12424;
  double t12230;
  double t12282;
  double t12242;
  double t12256;
  double t12265;
  double t12538;
  double t12541;
  double t12545;
  double t12566;
  double t12568;
  double t12571;
  double t12598;
  double t12602;
  double t12603;
  double t12633;
  double t12644;
  double t12648;
  double t3663;
  double t3668;
  double t3714;
  double t12664;
  double t12665;
  double t12668;
  double t12675;
  double t12677;
  double t12678;
  double t12689;
  double t12693;
  double t12700;
  double t12709;
  double t12720;
  double t12721;
  double t12803;
  double t12807;
  double t12822;
  double t12823;
  double t12828;
  double t12848;
  double t12849;
  double t12859;
  double t12992;
  double t12993;
  double t13002;
  double t13014;
  double t13015;
  double t13023;
  double t13032;
  double t12865;
  double t12896;
  double t12905;
  double t13165;
  double t13169;
  double t13172;
  double t13179;
  double t13180;
  double t13182;
  double t12548;
  double t12551;
  double t12933;
  double t12949;
  double t12958;
  double t12589;
  double t12606;
  double t12610;
  double t13024;
  double t13048;
  double t13056;
  double t13282;
  double t13283;
  double t13289;
  double t13307;
  double t13310;
  double t13315;
  double t12565;
  double t12573;
  double t12578;
  double t13071;
  double t13100;
  double t13105;
  double t13463;
  double t13470;
  double t13445;
  double t13448;
  double t13449;
  double t13437;
  double t13440;
  double t13450;
  double t13457;
  double t13480;
  double t13498;
  double t13517;
  double t13519;
  double t13530;
  double t12241;
  double t12270;
  double t12275;
  double t12276;
  double t12293;
  double t12464;
  double t12470;
  double t12475;
  double t12486;
  double t12489;
  double t12502;
  double t13767;
  double t13770;
  double t13776;
  double t12476;
  double t12505;
  double t12586;
  double t12621;
  double t12670;
  double t12679;
  double t12682;
  double t12685;
  double t12708;
  double t12722;
  double t12723;
  double t12725;
  double t12760;
  double t12762;
  double t12764;
  double t12766;
  double t12767;
  double t12769;
  double t12777;
  double t12798;
  double t3785;
  double t3806;
  double t3895;
  double t3903;
  double t12986;
  double t13028;
  double t13047;
  double t13897;
  double t13905;
  double t13907;
  double t13916;
  double t13921;
  double t13924;
  double t13068;
  double t13933;
  double t13937;
  double t13942;
  double t13092;
  double t13093;
  double t13280;
  double t13927;
  double t13964;
  double t13336;
  double t13341;
  double t14138;
  double t14159;
  double t14164;
  double t14175;
  double t14178;
  double t14182;
  double t13359;
  double t14038;
  double t14078;
  double t13367;
  double t13368;
  t296 = Cos(var1[16]);
  t308 = Cos(var1[5]);
  t381 = Sin(var1[15]);
  t239 = Cos(var1[15]);
  t604 = Sin(var1[5]);
  t158 = Sin(var1[3]);
  t1015 = Sin(var1[16]);
  t972 = Cos(var1[3]);
  t975 = Cos(var1[4]);
  t1059 = Sin(var1[4]);
  t1655 = Cos(var1[17]);
  t1826 = Sin(var1[17]);
  t1792 = -1.*t1655;
  t1794 = 1. + t1792;
  t2005 = -1.*t1655*t1015;
  t2071 = -1.*t296*t1826;
  t2095 = 0. + t2005 + t2071;
  t2293 = -1.*t381*t2095;
  t2294 = 0. + t2293;
  t2223 = t239*t2095;
  t2264 = 0. + t2223;
  t1887 = -0.336601*t1794;
  t1895 = -0.356601*t1655;
  t1896 = -0.16*t1826;
  t1907 = 0. + t1887 + t1895 + t1896;
  t1804 = -0.20833*t1794;
  t1822 = -0.36833*t1655;
  t1827 = 0.020000000000000018*t1826;
  t1828 = 0. + t1804 + t1822 + t1827;
  t2333 = t296*t1655;
  t2387 = -1.*t1015*t1826;
  t2388 = 0. + t2333 + t2387;
  t2985 = -1.*t381*t2388;
  t3007 = 0. + t2985;
  t2977 = t239*t2388;
  t2981 = 0. + t2977;
  t312 = t239*t296*t308;
  t610 = -1.*t296*t381*t604;
  t901 = t312 + t610;
  t1027 = t975*t1015;
  t1079 = -1.*t296*t308*t381;
  t1126 = -1.*t239*t296*t604;
  t1141 = t1079 + t1126;
  t1143 = -1.*t1059*t1141;
  t1158 = t1027 + t1143;
  t1167 = -1.*t239*t308*t1015;
  t1199 = t381*t1015*t604;
  t1227 = t1167 + t1199;
  t1346 = t296*t975;
  t1389 = t308*t381*t1015;
  t1431 = t239*t1015*t604;
  t1522 = t1389 + t1431;
  t1538 = -1.*t1059*t1522;
  t1540 = t1346 + t1538;
  t1853 = t1655*t1828;
  t1883 = 0.194401*t1826;
  t1968 = t1907*t1826;
  t1969 = 0. + t1853 + t1883 + t1968;
  t1992 = 0.241*t1969;
  t1996 = 0. + t1992;
  t2291 = t308*t2264;
  t2304 = t2294*t604;
  t2323 = 0. + t2291 + t2304;
  t2450 = t975*t2388;
  t2504 = t308*t2294;
  t2523 = -1.*t2264*t604;
  t2547 = 0. + t2504 + t2523;
  t2657 = -1.*t1059*t2547;
  t2681 = 0. + t2450 + t2657;
  t2834 = -0.194401*t1655;
  t2846 = -1.*t1655*t1907;
  t2847 = t1828*t1826;
  t2912 = 0. + t2834 + t2846 + t2847;
  t2918 = 0.241*t2912;
  t2976 = 0. + t2918;
  t2983 = t308*t2981;
  t3008 = t3007*t604;
  t3027 = 0. + t2983 + t3008;
  t3127 = t1655*t1015;
  t3176 = t296*t1826;
  t3180 = 0. + t3127 + t3176;
  t3198 = t975*t3180;
  t3200 = t308*t3007;
  t3201 = -1.*t2981*t604;
  t3202 = 0. + t3200 + t3201;
  t3215 = -1.*t1059*t3202;
  t3217 = 0. + t3198 + t3215;
  t4029 = -1.*t1015*t1059;
  t4030 = -1.*t975*t1141;
  t4151 = t4029 + t4030;
  t4176 = -1.*t296*t1059;
  t4195 = -1.*t975*t1522;
  t4219 = t4176 + t4195;
  t4265 = -1.*t2388*t1059;
  t4268 = -1.*t975*t2547;
  t4273 = t4265 + t4268;
  t4299 = -1.*t3180*t1059;
  t4383 = -1.*t975*t3202;
  t4488 = t4299 + t4383;
  t5019 = -0.04*t296;
  t5020 = 0.04*t1015;
  t5029 = t5019 + t5020;
  t4790 = t239*t308;
  t4809 = -1.*t381*t604;
  t4814 = t4790 + t4809;
  t4822 = -1.*t296;
  t4839 = 1. + t4822;
  t4841 = -0.194401*t4839;
  t4842 = -0.234401*t296;
  t4863 = -0.04*t1015;
  t4929 = t4841 + t4842 + t4863;
  t4949 = -1.*t239;
  t4956 = 1. + t4949;
  t4998 = 0.081715*t4956;
  t5006 = 0.13757*t239;
  t5063 = -1.*t381*t5029;
  t5090 = t4998 + t5006 + t5063;
  t5106 = t308*t5090;
  t5116 = 0.055855*t381;
  t5163 = t239*t5029;
  t5166 = t5116 + t5163;
  t5176 = -1.*t5166*t604;
  t5203 = t5106 + t5176;
  t5229 = t4929*t1059;
  t5298 = t975*t5203;
  t5302 = t5229 + t5298;
  t4939 = -1.*t4929*t1059;
  t5213 = -1.*t975*t5203;
  t5214 = t4939 + t5213;
  t5476 = t975*t4929;
  t5504 = -1.*t1059*t5203;
  t5506 = t5476 + t5504;
  t4746 = t1015*t1059;
  t4754 = t975*t1141;
  t4773 = t4746 + t4754;
  t5392 = t308*t5166;
  t5400 = t5090*t604;
  t5417 = t5392 + t5400;
  t5365 = t308*t381;
  t5371 = t239*t604;
  t5379 = t5365 + t5371;
  t6188 = t296*t1059;
  t6203 = t975*t1522;
  t6235 = t6188 + t6203;
  t7149 = -0.194401*t1015;
  t7190 = -1.*t1015*t1907;
  t7274 = t296*t1828;
  t7346 = 0. + t7149 + t7190 + t7274;
  t6968 = 0. + t239;
  t7028 = t6968*t308;
  t7029 = 0. + t381;
  t7030 = -1.*t7029*t604;
  t7035 = 0. + t7028 + t7030;
  t7046 = -0.194401*t4839;
  t7047 = t296*t1907;
  t7048 = t1015*t1828;
  t7049 = 0. + t7046 + t7047 + t7048;
  t7058 = 0.081715*t4956;
  t7090 = 0.11688*t239;
  t7357 = -1.*t381*t7346;
  t7383 = t7058 + t7090 + t7357;
  t7388 = t308*t7383;
  t7390 = 0.035165*t381;
  t7403 = t239*t7346;
  t7413 = t7390 + t7403;
  t7416 = -1.*t7413*t604;
  t7427 = 0. + t7388 + t7416;
  t7483 = t975*t7049;
  t7484 = -1.*t1059*t7427;
  t4674 = t2450 + t2657;
  t7453 = t975*t7035;
  t7480 = 0. + t7453;
  t7440 = t7049*t1059;
  t7449 = t975*t7427;
  t7450 = 0. + t7440 + t7449;
  t7043 = -1.*t1059*t7035;
  t7044 = 0. + t7043;
  t7509 = 0. + t7483 + t7484;
  t7491 = t7483 + t7484;
  t6949 = t2388*t1059;
  t6958 = t975*t2547;
  t6963 = 0. + t6949 + t6958;
  t7055 = -1.*t7049*t1059;
  t7429 = -1.*t975*t7427;
  t7431 = t7055 + t7429;
  t7606 = t308*t7413;
  t7612 = t7383*t604;
  t7616 = 0. + t7606 + t7612;
  t4707 = t3198 + t3215;
  t7547 = t308*t7029;
  t7582 = t6968*t604;
  t7601 = 0. + t7547 + t7582;
  t7825 = t3180*t1059;
  t7839 = t975*t3202;
  t7843 = 0. + t7825 + t7839;
  t8688 = -1.*t239*t296*t308;
  t8745 = t296*t381*t604;
  t8749 = t8688 + t8745;
  t8768 = t239*t308*t1015;
  t8769 = -1.*t381*t1015*t604;
  t8773 = t8768 + t8769;
  t8782 = -1.*t308*t2264;
  t8789 = -1.*t2294*t604;
  t8790 = t8782 + t8789;
  t8831 = -1.*t308*t2981;
  t8833 = -1.*t3007*t604;
  t8874 = t8831 + t8833;
  t9038 = t2504 + t2523;
  t9092 = t3200 + t3201;
  t5421 = -1.*t5379*t5417;
  t9626 = -1.*t308*t5166;
  t9628 = -1.*t5090*t604;
  t9629 = t9626 + t9628;
  t6035 = t901*t5417;
  t6391 = t5379*t5417;
  t9695 = -1.*t308*t381;
  t9698 = -1.*t239*t604;
  t9708 = t9695 + t9698;
  t6870 = -1.*t5417*t1227;
  t7618 = t7601*t7616;
  t10069 = -1.*t308*t7413;
  t10074 = -1.*t7383*t604;
  t10099 = t10069 + t10074;
  t10027 = t7388 + t7416;
  t10132 = t7028 + t7030;
  t7736 = -1.*t7616*t2323;
  t7938 = -1.*t7601*t7616;
  t10038 = -1.*t308*t7029;
  t10044 = -1.*t6968*t604;
  t10053 = t10038 + t10044;
  t8228 = t7616*t3027;
  t9719 = -1.*t5379*t5203;
  t9735 = -1.*t4814*t5417;
  t5431 = -1.*t975*t4814*t5302;
  t5507 = t1059*t4814*t5506;
  t5698 = t5421 + t5431 + t5507;
  t9624 = t901*t5203;
  t9671 = t1141*t5417;
  t6062 = t4773*t5302;
  t6137 = t1158*t5506;
  t6138 = t6035 + t6062 + t6137;
  t9876 = t5379*t5203;
  t10598 = Power(t975,2);
  t10608 = Power(t1059,2);
  t9891 = t4814*t5417;
  t6465 = t975*t4814*t5302;
  t6496 = -1.*t1059*t4814*t5506;
  t6648 = t6391 + t6465 + t6496;
  t9915 = -1.*t5417*t1522;
  t9947 = -1.*t5203*t1227;
  t6889 = -1.*t5302*t6235;
  t6892 = -1.*t5506*t1540;
  t6893 = t6870 + t6889 + t6892;
  t10028 = t7601*t10027;
  t10139 = t10132*t7616;
  t7619 = t7480*t7450;
  t7622 = t7044*t7509;
  t7627 = t7618 + t7619 + t7622;
  t10182 = -1.*t7616*t9038;
  t10246 = -1.*t10027*t2323;
  t7751 = -1.*t7450*t6963;
  t7754 = -1.*t7509*t2681;
  t7763 = t7736 + t7751 + t7754;
  t10328 = -1.*t7601*t10027;
  t10391 = -1.*t10132*t7616;
  t8011 = -1.*t7480*t7450;
  t8058 = -1.*t7044*t7509;
  t8091 = t7938 + t8011 + t8058;
  t10445 = t7616*t9092;
  t10500 = t10027*t3027;
  t8229 = t7450*t7843;
  t8263 = t7509*t3217;
  t8301 = t8228 + t8229 + t8263;
  t11127 = -0.055855*t381;
  t11140 = -1.*t239*t5029;
  t11146 = t11127 + t11140;
  t11180 = 0.055855*t239;
  t11183 = t11180 + t5063;
  t11245 = -0.035165*t381;
  t11250 = -1.*t239*t7346;
  t11251 = t11245 + t11250;
  t11263 = 0.035165*t239;
  t11268 = t11263 + t7357;
  t8756 = -0.06108*t975*t8749;
  t8775 = 0.06108*t975*t8773;
  t8981 = t158*t1141;
  t8982 = -1.*t972*t1059*t8749;
  t8999 = t8981 + t8982;
  t9010 = -0.06108*t8999;
  t9015 = t158*t1522;
  t9017 = -1.*t972*t1059*t8773;
  t9020 = t9015 + t9017;
  t9023 = 0.06108*t9020;
  t11364 = -1.*t239*t308*t2095;
  t11366 = t381*t2095*t604;
  t11382 = t11364 + t11366;
  t11387 = -1.*t239*t308*t2388;
  t11390 = t381*t2388*t604;
  t11399 = t11387 + t11390;
  t9268 = t972*t1141;
  t9287 = t158*t1059*t8749;
  t9363 = t9268 + t9287;
  t9466 = -0.06108*t9363;
  t9483 = t972*t1522;
  t9506 = t158*t1059*t8773;
  t9512 = t9483 + t9506;
  t9524 = 0.06108*t9512;
  t11415 = -1.*t308*t381*t2095;
  t11416 = -1.*t239*t2095*t604;
  t11421 = t11415 + t11416;
  t11441 = -1.*t308*t381*t2388;
  t11442 = -1.*t239*t2388*t604;
  t11447 = t11441 + t11442;
  t9611 = -1.*t4814*t5203;
  t9620 = t9611 + t5421;
  t9623 = t1141*t9620;
  t9625 = t8749*t5203;
  t11522 = t308*t11183;
  t11530 = t11146*t604;
  t11557 = t11522 + t11530;
  t9717 = -1.*t9708*t5203;
  t11566 = t308*t11146;
  t11574 = -1.*t11183*t604;
  t11578 = t11566 + t11574;
  t9753 = t4929*t1015;
  t9801 = t1141*t5203;
  t9810 = t9753 + t9801 + t6035;
  t9812 = t4814*t9810;
  t9821 = t4814*t5203;
  t9837 = t9821 + t6391;
  t9873 = t1522*t9837;
  t9874 = t9708*t5203;
  t9928 = -1.*t5203*t8773;
  t9959 = -1.*t296*t4929;
  t9970 = -1.*t5203*t1522;
  t9972 = t9959 + t9970 + t6870;
  t9983 = t4814*t9972;
  t10015 = t7035*t7427;
  t10023 = 0. + t10015 + t7618;
  t11733 = t308*t11251;
  t11739 = -1.*t11268*t604;
  t11748 = t11733 + t11739;
  t11713 = t308*t11268;
  t11717 = t11251*t604;
  t11720 = t11713 + t11717;
  t10271 = -1.*t7049*t2388;
  t10280 = -1.*t7427*t2547;
  t10281 = t10271 + t10280 + t7736;
  t10321 = -1.*t7035*t7427;
  t10322 = 0. + t10321 + t7938;
  t10515 = t7049*t3180;
  t10527 = t7427*t3202;
  t10538 = t10515 + t10527 + t8228;
  t11594 = -1.*t5379*t11557;
  t10615 = -1.*t975*t9708*t5302;
  t10629 = t1059*t9708*t5506;
  t10649 = t975*t8749*t5698;
  t11565 = t901*t11557;
  t10707 = t975*t8749*t5302;
  t10724 = -1.*t1059*t8749*t5506;
  t10749 = t975*t9708*t6138;
  t11615 = t5379*t11557;
  t10820 = t975*t9708*t5302;
  t10821 = -1.*t1059*t9708*t5506;
  t10847 = t975*t8773*t6648;
  t11670 = -1.*t11557*t1227;
  t10848 = -1.*t975*t8773*t5302;
  t10850 = t1059*t8773*t5506;
  t10871 = t975*t9708*t6893;
  t11728 = t7601*t11720;
  t11764 = t4814*t7616;
  t11800 = -1.*t7616*t11421;
  t11852 = -1.*t11720*t2323;
  t11883 = -1.*t7601*t11720;
  t11904 = -1.*t4814*t7616;
  t11931 = t7616*t11447;
  t11952 = t11720*t3027;
  t12377 = -0.194401*t296;
  t12394 = -1.*t296*t1907;
  t12401 = -1.*t1015*t1828;
  t12424 = t12377 + t12394 + t12401;
  t12230 = t2333 + t2387;
  t12282 = t2005 + t2071;
  t12242 = -1.*t296*t1655;
  t12256 = t1015*t1826;
  t12265 = t12242 + t12256;
  t12538 = t296*t308*t381;
  t12541 = t239*t296*t604;
  t12545 = t12538 + t12541;
  t12566 = -1.*t308*t381*t12282;
  t12568 = -1.*t239*t12282*t604;
  t12571 = t12566 + t12568;
  t12598 = -1.*t308*t381*t12265;
  t12602 = -1.*t239*t12265*t604;
  t12603 = t12598 + t12602;
  t12633 = -1.*t975*t1015;
  t12644 = -1.*t1059*t12545;
  t12648 = t12633 + t12644;
  t3663 = t972*t1227;
  t3668 = -1.*t158*t1540;
  t3714 = t3663 + t3668;
  t12664 = t239*t308*t12282;
  t12665 = -1.*t381*t12282*t604;
  t12668 = t12664 + t12665;
  t12675 = t975*t12230;
  t12677 = -1.*t1059*t12571;
  t12678 = t12675 + t12677;
  t12689 = t239*t308*t12265;
  t12693 = -1.*t381*t12265*t604;
  t12700 = t12689 + t12693;
  t12709 = t975*t12282;
  t12720 = -1.*t1059*t12603;
  t12721 = t12709 + t12720;
  t12803 = 0.04*t296;
  t12807 = t12803 + t5020;
  t12822 = -1.*t308*t381*t12807;
  t12823 = -1.*t239*t12807*t604;
  t12828 = t12822 + t12823;
  t12848 = t239*t308*t12807;
  t12849 = -1.*t381*t12807*t604;
  t12859 = t12848 + t12849;
  t12992 = -1.*t308*t381*t12424;
  t12993 = -1.*t239*t12424*t604;
  t13002 = t12992 + t12993;
  t13014 = t239*t308*t12424;
  t13015 = -1.*t381*t12424*t604;
  t13023 = t13014 + t13015;
  t13032 = t7149 + t7190 + t7274;
  t12865 = -1.*t5379*t12859;
  t12896 = t901*t12859;
  t12905 = t5417*t1227;
  t13165 = t5029*t1059;
  t13169 = t975*t12828;
  t13172 = t13165 + t13169;
  t13179 = t975*t5029;
  t13180 = -1.*t1059*t12828;
  t13182 = t13179 + t13180;
  t12548 = t975*t12545;
  t12551 = t4029 + t12548;
  t12933 = t5379*t12859;
  t12949 = -1.*t8749*t5417;
  t12958 = -1.*t12859*t1227;
  t12589 = t12282*t1059;
  t12606 = t975*t12603;
  t12610 = t12589 + t12606;
  t13024 = t7601*t13023;
  t13048 = -1.*t7616*t12700;
  t13056 = -1.*t13023*t2323;
  t13282 = t13032*t1059;
  t13283 = t975*t13002;
  t13289 = t13282 + t13283;
  t13307 = t975*t13032;
  t13310 = -1.*t1059*t13002;
  t13315 = t13307 + t13310;
  t12565 = t12230*t1059;
  t12573 = t975*t12571;
  t12578 = t12565 + t12573;
  t13071 = -1.*t7601*t13023;
  t13100 = t7616*t12668;
  t13105 = t13023*t3027;
  t13463 = -0.16*t1655;
  t13470 = t13463 + t1827;
  t13445 = 0.020000000000000018*t1655;
  t13448 = 0.16*t1826;
  t13449 = t13445 + t13448;
  t13437 = 0.194401*t1655;
  t13440 = t1655*t1907;
  t13450 = t1655*t13449;
  t13457 = -1.*t1828*t1826;
  t13480 = t13470*t1826;
  t13498 = t13437 + t13440 + t13450 + t13457 + t13480;
  t13517 = -1.*t1655*t13470;
  t13519 = t13449*t1826;
  t13530 = t1853 + t13517 + t1883 + t1968 + t13519;
  t12241 = -0.11688*t12230;
  t12270 = -0.081715*t12265;
  t12275 = t12241 + t12270;
  t12276 = -1.*t12275*t1996;
  t12293 = -0.035165*t12282*t2976;
  t12464 = -1.*t7029*t7413;
  t12470 = -1.*t6968*t7383;
  t12475 = 0. + t12464 + t12470;
  t12486 = t7029*t7413;
  t12489 = t6968*t7383;
  t12502 = 0. + t12486 + t12489;
  t13767 = -1.*t1015*t13470;
  t13770 = t296*t13449;
  t13776 = t13767 + t13770;
  t12476 = t12475*t12230;
  t12505 = t12502*t12282;
  t12586 = -1.*t2976*t12578;
  t12621 = -1.*t1996*t12610;
  t12670 = t158*t12668;
  t12679 = t972*t12678;
  t12682 = t12670 + t12679;
  t12685 = -1.*t2976*t12682;
  t12708 = t158*t12700;
  t12722 = t972*t12721;
  t12723 = t12708 + t12722;
  t12725 = -1.*t1996*t12723;
  t12760 = t972*t12668;
  t12762 = -1.*t158*t12678;
  t12764 = t12760 + t12762;
  t12766 = -1.*t2976*t12764;
  t12767 = t972*t12700;
  t12769 = -1.*t158*t12721;
  t12777 = t12767 + t12769;
  t12798 = -1.*t1996*t12777;
  t3785 = t972*t2323;
  t3806 = -1.*t158*t2681;
  t3895 = t972*t3027;
  t3903 = -1.*t158*t3217;
  t12986 = t12700*t10023;
  t13028 = -1.*t7049*t12282;
  t13047 = -1.*t7427*t12603;
  t13897 = -1.*t308*t381*t13776;
  t13905 = -1.*t239*t13776*t604;
  t13907 = t13897 + t13905;
  t13916 = t239*t308*t13776;
  t13921 = -1.*t381*t13776*t604;
  t13924 = t13916 + t13921;
  t13068 = t12668*t10322;
  t13933 = t296*t13470;
  t13937 = t1015*t13449;
  t13942 = t13933 + t13937;
  t13092 = t7049*t12230;
  t13093 = t7427*t12571;
  t13280 = t12610*t7627;
  t13927 = t7601*t13924;
  t13964 = -1.*t13924*t2323;
  t13336 = -1.*t7450*t12610;
  t13341 = -1.*t7509*t12721;
  t14138 = t13942*t1059;
  t14159 = t975*t13907;
  t14164 = t14138 + t14159;
  t14175 = t975*t13942;
  t14178 = -1.*t1059*t13907;
  t14182 = t14175 + t14178;
  t13359 = t12578*t8091;
  t14038 = -1.*t7601*t13924;
  t14078 = t13924*t3027;
  t13367 = t7450*t12578;
  t13368 = t7509*t12678;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=(-0.5*(-0.06108*(-1.*t158*t901 - 1.*t1158*t972) + 0.06108*(-1.*t1227*t158 - 1.*t1540*t972) - 1.*t1996*(-1.*t158*t2323 - 1.*t2681*t972) - 1.*t2976*(-1.*t158*t3027 - 1.*t3217*t972))*var2[1] - 0.5*(0.06108*t3714 - 1.*t1996*(t3785 + t3806) - 1.*t2976*(t3895 + t3903) - 0.06108*(-1.*t1158*t158 + t901*t972))*var2[2])*var2[16];
  p_output1[4]=(-0.5*(-0.06108*t1158 + 0.06108*t1540 - 1.*t1996*t4674 - 1.*t2976*t4707)*var2[0] - 0.5*(0.06108*t158*t4151 - 0.06108*t158*t4219 + t158*t1996*t4273 + t158*t2976*t4488)*var2[1] - 0.5*(-0.06108*t4151*t972 + 0.06108*t4219*t972 - 1.*t1996*t4273*t972 - 1.*t2976*t4488*t972)*var2[2] - 0.5*(0.06108*(t4773*(t1059*t4814*t5214 + t1059*t4814*t5302) + t1158*t5698 - 1.*t1059*t4814*t6138 + t4814*(t1158*t5214 + t1158*t5302 + t4151*t5506 + t4773*t5506)*t975) - 0.06108*((-1.*t1059*t4814*t5214 - 1.*t1059*t4814*t5302)*t6235 + t1540*t6648 - 1.*t1059*t4814*t6893 + t4814*(-1.*t1540*t5214 - 1.*t1540*t5302 - 1.*t4219*t5506 - 1.*t5506*t6235)*t975) - 1.*t2976*(t7480*(-1.*t2681*t7431 - 1.*t4674*t7450 - 1.*t6963*t7491 - 1.*t4273*t7509) + t4674*t7627 - 1.*t1059*t7035*t7763 + t6963*(t7044*t7431 - 1.*t1059*t7035*t7450 + t7480*t7491 - 1.*t7035*t7509*t975)) - 1.*t1996*(t7480*(t3217*t7431 + t4707*t7450 + t4488*t7509 + t7491*t7843) + t4707*t8091 - 1.*t1059*t7035*t8301 + t7843*(-1.*t7044*t7431 + t1059*t7035*t7450 - 1.*t7480*t7491 + t7035*t7509*t975)))*var2[3])*var2[16];
  p_output1[5]=(-0.5*(t8756 + t8775 - 1.*t1996*t8790*t975 - 1.*t2976*t8874*t975)*var2[0] - 0.5*(t9466 + t9524 - 1.*t1996*(t1059*t158*t8790 + t9038*t972) - 1.*t2976*(t1059*t158*t8874 + t9092*t972))*var2[1] - 0.5*(t9010 + t9023 - 1.*t1996*(t158*t9038 - 1.*t1059*t8790*t972) - 1.*t2976*(t158*t9092 - 1.*t1059*t8874*t972))*var2[2] - 0.5*(-1.*t2976*(t10053*t7763*t975 + t7627*t8790*t975 + t6963*(t10028 + t10139 - 1.*t10099*t1059*t7044 - 1.*t10053*t1059*t7509 + t10053*t7450*t975 + t10099*t7480*t975) + t7480*(t10182 + t10246 + t10099*t1059*t2681 + t1059*t7509*t8790 - 1.*t10099*t6963*t975 - 1.*t7450*t8790*t975)) - 1.*t1996*(t10053*t8301*t975 + t8091*t8874*t975 + t7843*(t10328 + t10391 + t10099*t1059*t7044 + t10053*t1059*t7509 - 1.*t10053*t7450*t975 - 1.*t10099*t7480*t975) + t7480*(t10445 + t10500 - 1.*t10099*t1059*t3217 - 1.*t1059*t7509*t8874 + t10099*t7843*t975 + t7450*t8874*t975)) + 0.06108*(t10649 + t10749 + t4773*(t10615 + t10629 - 1.*t10598*t4814*t9629 - 1.*t10608*t4814*t9629 + t9719 + t9735) + t4814*t975*(t10707 + t10724 + t9624 - 1.*t1059*t1158*t9629 + t9671 + t4773*t9629*t975)) - 0.06108*(t10847 + t10871 + t6235*(t10820 + t10821 + t10598*t4814*t9629 + t10608*t4814*t9629 + t9876 + t9891) + t4814*t975*(t10848 + t10850 + t1059*t1540*t9629 - 1.*t6235*t9629*t975 + t9915 + t9947)))*var2[3] - 0.5*(-1.*t2976*(t10132*t10281 + t2323*(t10028 + t10139 + t10099*t7035 + t10053*t7427) + t7601*(t10182 + t10246 - 1.*t10099*t2547 - 1.*t7427*t8790) + t10023*t9038) - 1.*t1996*(t10132*t10538 + t3027*(t10328 + t10391 - 1.*t10099*t7035 - 1.*t10053*t7427) + t7601*(t10445 + t10500 + t10099*t3202 + t7427*t8874) + t10322*t9092) + 0.06108*(t9623 + t5379*(t9624 + t9625 + t1141*t9629 + t9671) + t901*(-1.*t4814*t9629 + t9717 + t9719 + t9735) + t9812) - 0.06108*(t9873 + t1227*(t4814*t9629 + t9874 + t9876 + t9891) + t5379*(-1.*t1522*t9629 + t9915 + t9928 + t9947) + t9983))*var2[4])*var2[16];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.5*(t8756 + t8775 - 1.*t11382*t1996*t975 - 1.*t11399*t2976*t975)*var2[0] - 0.5*(t9466 + t9524 - 1.*t1996*(t1059*t11382*t158 + t11421*t972) - 1.*t2976*(t1059*t11399*t158 + t11447*t972))*var2[1] - 0.5*(t9010 + t9023 - 1.*t1996*(t11421*t158 - 1.*t1059*t11382*t972) - 1.*t2976*(t11447*t158 - 1.*t1059*t11399*t972))*var2[2] - 0.5*(0.06108*(t10649 + t10749 + t4773*(t10615 + t10629 + t11594 - 1.*t10598*t11578*t4814 - 1.*t10608*t11578*t4814 + t9735) + t4814*t975*(t10707 + t10724 + t11565 - 1.*t1059*t11578*t1158 + t9671 + t11578*t4773*t975)) - 1.*t1996*(t11399*t8091*t975 + t8301*t9708*t975 + t7480*(t11931 + t11952 - 1.*t1059*t11748*t3217 - 1.*t1059*t11399*t7509 + t11399*t7450*t975 + t11748*t7843*t975) + t7843*(t11883 + t11904 + t1059*t11748*t7044 + t1059*t7509*t9708 - 1.*t11748*t7480*t975 - 1.*t7450*t9708*t975)) - 1.*t2976*(t11382*t7627*t975 + t7763*t9708*t975 + t7480*(t11800 + t11852 + t1059*t11748*t2681 + t1059*t11382*t7509 - 1.*t11748*t6963*t975 - 1.*t11382*t7450*t975) + t6963*(t11728 + t11764 - 1.*t1059*t11748*t7044 - 1.*t1059*t7509*t9708 + t11748*t7480*t975 + t7450*t9708*t975)) - 0.06108*(t10847 + t10871 + t6235*(t10820 + t10821 + t11615 + t10598*t11578*t4814 + t10608*t11578*t4814 + t9891) + t4814*t975*(t10848 + t10850 + t11670 + t1059*t11578*t1540 - 1.*t11578*t6235*t975 + t9915)))*var2[3] - 0.5*(-1.*t1996*(t10322*t11447 + t10538*t4814 + (t11931 + t11952 + t11748*t3202 + t11399*t7427)*t7601 + t3027*(t11883 + t11904 - 1.*t11748*t7035 - 1.*t7427*t9708)) - 1.*t2976*(t10023*t11421 + t10281*t4814 + (t11800 + t11852 - 1.*t11748*t2547 - 1.*t11382*t7427)*t7601 + t2323*(t11728 + t11764 + t11748*t7035 + t7427*t9708)) + 0.06108*(t9623 + t5379*(t11565 + t1141*t11578 + t9625 + t9671) + t901*(t11594 - 1.*t11578*t4814 + t9717 + t9735) + t9812) - 0.06108*(t9873 + t1227*(t11615 + t11578*t4814 + t9874 + t9891) + t5379*(t11670 - 1.*t11578*t1522 + t9915 + t9928) + t9983))*var2[4] - 0.5*(0.06108*t1015*(-1.*t11146*t239 - 1.*t11183*t381 + t381*t5090 - 1.*t239*t5166) - 0.06108*t296*(t11146*t239 + t11183*t381 - 1.*t381*t5090 + t239*t5166) - 1.*t1996*t3180*(-1.*t11251*t6968 - 1.*t11268*t7029 + t381*t7383 - 1.*t239*t7413) - 1.*t2388*t2976*(t11251*t6968 + t11268*t7029 - 1.*t381*t7383 + t239*t7413))*var2[5])*var2[16];
  p_output1[16]=(-0.5*(0.06108*t12551 + t12586 + t12621 - 0.06108*t6235)*var2[0] - 0.5*(t12766 + t12798 - 0.06108*t3714 + 0.06108*(-1.*t12648*t158 + t8749*t972))*var2[1] - 0.5*(t12685 + t12725 + 0.06108*(t158*t8749 + t12648*t972) - 0.06108*(t1227*t158 + t1540*t972))*var2[2] - 0.5*(-1.*t2976*(t13280 + (t13048 + t13056 + t13336 + t13341 - 1.*t13315*t2681 - 1.*t13289*t6963)*t7480 + t6963*(t13024 + t13315*t7044 + t13289*t7480)) - 1.*t1996*(t13359 + (t13071 - 1.*t13315*t7044 - 1.*t13289*t7480)*t7843 + t7480*(t13100 + t13105 + t13367 + t13368 + t13315*t3217 + t13289*t7843)) + 0.06108*(t5698*t6235 + t4814*(t12896 + t12905 + t1158*t13182 + t13172*t4773 + t1540*t5506 + t5302*t6235)*t975 + t4773*(t12865 + t1059*t13182*t4814 - 1.*t13172*t4814*t975)) - 0.06108*(t12551*t6648 + t4814*(t12949 + t12958 - 1.*t13182*t1540 - 1.*t12551*t5302 - 1.*t12648*t5506 - 1.*t13172*t6235)*t975 + t6235*(t12933 - 1.*t1059*t13182*t4814 + t13172*t4814*t975)))*var2[3] - 0.5*(-1.*t2976*(t12986 + t2323*(t13024 + t13002*t7035) + (t13028 + t13047 + t13048 + t13056 - 1.*t13032*t2388 - 1.*t13002*t2547)*t7601) - 1.*t1996*(t13068 + t3027*(t13071 - 1.*t13002*t7035) + (t13092 + t13093 + t13100 + t13105 + t13032*t3180 + t13002*t3202)*t7601) + 0.06108*((t1141*t12828 + t12896 + t12905 + t296*t4929 + t1015*t5029 + t1522*t5203)*t5379 + (t12865 - 1.*t12828*t4814)*t901 + t1227*t9620) - 0.06108*(t1227*(t12933 + t12828*t4814) + t5379*(t12949 + t12958 - 1.*t12828*t1522 - 1.*t296*t5029 - 1.*t12545*t5203 + t9753) + t8749*t9837))*var2[4] - 0.5*(0.06108*t296*(-1.*t239*t5090 - 1.*t381*t5166) + 0.06108*t1015*(t239*t5090 + t381*t5166) - 1.*t1996*(t12476 + t3180*(t12424*t381*t6968 - 1.*t12424*t239*t7029)) - 1.*t2976*(t12505 + t2388*(-1.*t12424*t381*t6968 + t12424*t239*t7029)))*var2[5] - 0.5*(0.0034116234*t1015 + t12276 + t12293 - 0.0034116234*t296)*var2[15])*var2[16];
  p_output1[17]=var2[16]*(-0.5*(t12586 + t12621 - 0.241*t13498*t6963 - 0.241*t13530*t7843)*var2[0] - 0.5*(t12766 + t12798 - 0.241*t13498*(0. + t3785 + t3806) - 0.241*t13530*(0. + t3895 + t3903))*var2[1] - 0.5*(t12685 + t12725 - 0.241*t13498*(0. + t158*t2323 + t2681*t972) - 0.241*t13530*(0. + t158*t3027 + t3217*t972))*var2[2] - 0.5*(-1.*t2976*(t13280 + (t13048 + t13336 + t13341 + t13964 - 1.*t14182*t2681 - 1.*t14164*t6963)*t7480 + t6963*(t13927 + t14182*t7044 + t14164*t7480)) - 0.241*t13530*(t6963*t7627 + t7480*t7763) - 1.*t1996*(t13359 + (t14038 - 1.*t14182*t7044 - 1.*t14164*t7480)*t7843 + t7480*(t13100 + t13367 + t13368 + t14078 + t14182*t3217 + t14164*t7843)) - 0.241*t13498*(t7843*t8091 + t7480*t8301))*var2[3] - 0.5*(-0.241*t13530*(t10023*t2323 + t10281*t7601) - 0.241*t13498*(t10322*t3027 + t10538*t7601) - 1.*t2976*(t12986 + t2323*(t13927 + t13907*t7035) + (t13028 + t13047 + t13048 + t13964 - 1.*t13942*t2388 - 1.*t13907*t2547)*t7601) - 1.*t1996*(t13068 + t3027*(t14038 - 1.*t13907*t7035) + (t13092 + t13093 + t13100 + t14078 + t13942*t3180 + t13907*t3202)*t7601))*var2[4] - 0.5*(-0.241*t13530*(0. + t12502*t2388) - 0.241*t13498*(0. + t12475*t3180) - 1.*t1996*(t12476 + t3180*(t13776*t381*t6968 - 1.*t13776*t239*t7029)) - 1.*t2976*(t12505 + t2388*(-1.*t13776*t381*t6968 + t13776*t239*t7029)))*var2[5] - 0.5*(t12276 + t12293 - 0.241*t13530*(0. + 0.035165*t2388) - 0.241*t13498*(0. - 0.081715*t2095 - 0.11688*t3180))*var2[15] - 0.5*(-0.241*t13498*t1969 - 1.*t13498*t1996 - 0.241*t13530*t2912 - 1.*t13530*t2976)*var2[16] - 0.5*(0.03856*t13498 - 0.004820000000000004*t13530)*var2[17]);
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

#include "Ce3_vec17_plane.hh"

namespace SymFunction
{

void Ce3_vec17_plane_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE