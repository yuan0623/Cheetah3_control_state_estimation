/*
 * Automatically Generated from Mathematica.
 * Fri 21 Dec 2018 15:12:07 GMT-05:00
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
  double t242;
  double t297;
  double t300;
  double t330;
  double t372;
  double t380;
  double t394;
  double t172;
  double t494;
  double t499;
  double t580;
  double t222;
  double t403;
  double t421;
  double t632;
  double t72;
  double t767;
  double t826;
  double t876;
  double t705;
  double t740;
  double t988;
  double t1239;
  double t1240;
  double t1160;
  double t1227;
  double t458;
  double t680;
  double t684;
  double t958;
  double t1004;
  double t1007;
  double t1043;
  double t1071;
  double t1075;
  double t1231;
  double t1249;
  double t1263;
  double t1280;
  double t1335;
  double t1340;
  double t1362;
  double t1378;
  double t1434;
  double t1460;
  double t1564;
  double t1574;
  double t2363;
  double t2393;
  double t2414;
  double t2544;
  double t2595;
  double t2683;
  double t3937;
  double t3948;
  double t3953;
  double t4275;
  double t4286;
  double t4302;
  double t4339;
  double t4452;
  double t4496;
  double t4502;
  double t4685;
  double t4704;
  double t4773;
  double t4839;
  double t3364;
  double t3437;
  double t3572;
  double t3627;
  double t3701;
  double t3825;
  double t3908;
  double t3930;
  double t4334;
  double t4515;
  double t4554;
  double t4596;
  double t4624;
  double t4659;
  double t4672;
  double t4841;
  double t4872;
  double t4909;
  double t4914;
  double t4968;
  double t4982;
  double t4987;
  double t5121;
  double t5524;
  double t5586;
  double t2832;
  double t5464;
  double t5507;
  double t5271;
  double t5350;
  double t5428;
  double t3711;
  double t3721;
  double t5640;
  double t5610;
  double t3214;
  double t3269;
  double t3311;
  double t4561;
  double t5160;
  double t5173;
  double t5819;
  double t5825;
  double t5830;
  double t2913;
  double t5772;
  double t5794;
  double t5805;
  double t6272;
  double t6282;
  double t6313;
  double t7238;
  double t7272;
  double t7273;
  double t7319;
  double t7443;
  double t7529;
  double t7637;
  double t7724;
  double t5832;
  double t8008;
  double t8009;
  double t8010;
  double t7980;
  double t8018;
  double t6038;
  double t6383;
  double t7985;
  double t7986;
  double t7989;
  double t6907;
  double t7981;
  double t8020;
  double t5835;
  double t5843;
  double t5859;
  double t8055;
  double t8138;
  double t6041;
  double t6067;
  double t6108;
  double t8528;
  double t8595;
  double t6409;
  double t6462;
  double t6493;
  double t8755;
  double t8838;
  double t6924;
  double t6961;
  double t7015;
  double t9462;
  double t9488;
  double t9502;
  double t9535;
  double t9546;
  double t9919;
  double t9922;
  double t9960;
  double t9972;
  double t9981;
  double t9987;
  double t10031;
  double t10074;
  double t10139;
  double t10252;
  double t10277;
  double t10281;
  double t7958;
  double t7973;
  double t10589;
  double t10594;
  double t10619;
  double t10499;
  double t10513;
  double t10516;
  double t10720;
  double t10727;
  double t10733;
  double t8294;
  double t8312;
  double t8407;
  double t8491;
  double t8501;
  double t10527;
  double t10569;
  double t10575;
  double t8859;
  double t8863;
  double t8881;
  double t10522;
  double t10747;
  double t10769;
  double t10881;
  double t11003;
  double t11049;
  double t11089;
  double t11112;
  double t11371;
  double t11386;
  double t11388;
  double t11393;
  double t11497;
  double t11456;
  double t11584;
  double t11585;
  double t11592;
  double t11638;
  double t11648;
  double t11659;
  double t11709;
  double t11759;
  double t11770;
  double t11818;
  double t11837;
  double t11844;
  double t11863;
  double t11873;
  double t11879;
  double t11967;
  double t11971;
  double t11972;
  double t11982;
  double t11986;
  double t11997;
  double t12115;
  double t12118;
  double t12120;
  double t12143;
  double t12153;
  double t12164;
  double t12202;
  double t11703;
  double t11781;
  double t11786;
  double t12168;
  double t12225;
  double t12228;
  double t12372;
  double t12376;
  double t12377;
  double t12387;
  double t12389;
  double t12394;
  double t11636;
  double t11664;
  double t11670;
  double t12293;
  double t12336;
  double t12339;
  double t12726;
  double t12730;
  double t12693;
  double t12694;
  double t12695;
  double t12867;
  double t12900;
  double t12915;
  double t11425;
  double t11426;
  double t11441;
  double t11460;
  double t11484;
  double t11486;
  double t11488;
  double t11529;
  double t11575;
  double t11583;
  double t11596;
  double t11598;
  double t11608;
  double t11618;
  double t11620;
  double t11675;
  double t11796;
  double t11805;
  double t11816;
  double t11860;
  double t11925;
  double t11928;
  double t11932;
  double t11973;
  double t12005;
  double t12010;
  double t12011;
  double t12028;
  double t12029;
  double t12035;
  double t12043;
  double t12048;
  double t12049;
  double t12070;
  double t12074;
  double t12084;
  double t12097;
  double t12098;
  double t12099;
  double t12100;
  double t12193;
  double t12224;
  double t13005;
  double t13008;
  double t13010;
  double t13018;
  double t13026;
  double t13027;
  double t12291;
  double t13042;
  double t13045;
  double t13047;
  double t12317;
  double t12322;
  double t12367;
  double t13029;
  double t13063;
  double t12437;
  double t12441;
  double t13156;
  double t13161;
  double t13166;
  double t13187;
  double t13193;
  double t13199;
  double t12493;
  double t13095;
  double t13113;
  double t12520;
  double t12549;
  t242 = Cos(var1[17]);
  t297 = Sin(var1[16]);
  t300 = -1.*t242*t297;
  t330 = Cos(var1[16]);
  t372 = Sin(var1[17]);
  t380 = -1.*t330*t372;
  t394 = 0. + t300 + t380;
  t172 = Cos(var1[5]);
  t494 = Sin(var1[15]);
  t499 = -1.*t494*t394;
  t580 = 0. + t499;
  t222 = Cos(var1[15]);
  t403 = t222*t394;
  t421 = 0. + t403;
  t632 = Sin(var1[5]);
  t72 = Sin(var1[3]);
  t767 = t330*t242;
  t826 = -1.*t297*t372;
  t876 = 0. + t767 + t826;
  t705 = Cos(var1[3]);
  t740 = Cos(var1[4]);
  t988 = Sin(var1[4]);
  t1239 = -1.*t494*t876;
  t1240 = 0. + t1239;
  t1160 = t222*t876;
  t1227 = 0. + t1160;
  t458 = t172*t421;
  t680 = t580*t632;
  t684 = 0. + t458 + t680;
  t958 = t740*t876;
  t1004 = t172*t580;
  t1007 = -1.*t421*t632;
  t1043 = 0. + t1004 + t1007;
  t1071 = -1.*t988*t1043;
  t1075 = 0. + t958 + t1071;
  t1231 = t172*t1227;
  t1249 = t1240*t632;
  t1263 = 0. + t1231 + t1249;
  t1280 = t242*t297;
  t1335 = t330*t372;
  t1340 = 0. + t1280 + t1335;
  t1362 = t740*t1340;
  t1378 = t172*t1240;
  t1434 = -1.*t1227*t632;
  t1460 = 0. + t1378 + t1434;
  t1564 = -1.*t988*t1460;
  t1574 = 0. + t1362 + t1564;
  t2363 = -1.*t876*t988;
  t2393 = -1.*t740*t1043;
  t2414 = t2363 + t2393;
  t2544 = -1.*t1340*t988;
  t2595 = -1.*t740*t1460;
  t2683 = t2544 + t2595;
  t3937 = -1.*t242;
  t3948 = 1. + t3937;
  t3953 = -0.336601*t3948;
  t4275 = -0.356601*t242;
  t4286 = -0.16*t372;
  t4302 = 0. + t3953 + t4275 + t4286;
  t4339 = -0.20833*t3948;
  t4452 = -0.36833*t242;
  t4496 = 0.020000000000000018*t372;
  t4502 = 0. + t4339 + t4452 + t4496;
  t4685 = -0.194401*t297;
  t4704 = -1.*t297*t4302;
  t4773 = t330*t4502;
  t4839 = 0. + t4685 + t4704 + t4773;
  t3364 = 0. + t222;
  t3437 = t3364*t172;
  t3572 = 0. + t494;
  t3627 = -1.*t3572*t632;
  t3701 = 0. + t3437 + t3627;
  t3825 = -1.*t330;
  t3908 = 1. + t3825;
  t3930 = -0.194401*t3908;
  t4334 = t330*t4302;
  t4515 = t297*t4502;
  t4554 = 0. + t3930 + t4334 + t4515;
  t4596 = -1.*t222;
  t4624 = 1. + t4596;
  t4659 = 0.081715*t4624;
  t4672 = 0.11688*t222;
  t4841 = -1.*t494*t4839;
  t4872 = t4659 + t4672 + t4841;
  t4909 = t172*t4872;
  t4914 = 0.035165*t494;
  t4968 = t222*t4839;
  t4982 = t4914 + t4968;
  t4987 = -1.*t4982*t632;
  t5121 = 0. + t4909 + t4987;
  t5524 = t740*t4554;
  t5586 = -1.*t988*t5121;
  t2832 = t958 + t1071;
  t5464 = t740*t3701;
  t5507 = 0. + t5464;
  t5271 = t4554*t988;
  t5350 = t740*t5121;
  t5428 = 0. + t5271 + t5350;
  t3711 = -1.*t988*t3701;
  t3721 = 0. + t3711;
  t5640 = 0. + t5524 + t5586;
  t5610 = t5524 + t5586;
  t3214 = t876*t988;
  t3269 = t740*t1043;
  t3311 = 0. + t3214 + t3269;
  t4561 = -1.*t4554*t988;
  t5160 = -1.*t740*t5121;
  t5173 = t4561 + t5160;
  t5819 = t172*t4982;
  t5825 = t4872*t632;
  t5830 = 0. + t5819 + t5825;
  t2913 = t1362 + t1564;
  t5772 = t172*t3572;
  t5794 = t3364*t632;
  t5805 = 0. + t5772 + t5794;
  t6272 = t1340*t988;
  t6282 = t740*t1460;
  t6313 = 0. + t6272 + t6282;
  t7238 = -1.*t172*t421;
  t7272 = -1.*t580*t632;
  t7273 = t7238 + t7272;
  t7319 = -1.*t172*t1227;
  t7443 = -1.*t1240*t632;
  t7529 = t7319 + t7443;
  t7637 = t1004 + t1007;
  t7724 = t1378 + t1434;
  t5832 = t5805*t5830;
  t8008 = -1.*t172*t4982;
  t8009 = -1.*t4872*t632;
  t8010 = t8008 + t8009;
  t7980 = t4909 + t4987;
  t8018 = t3437 + t3627;
  t6038 = -1.*t5830*t684;
  t6383 = -1.*t5805*t5830;
  t7985 = -1.*t172*t3572;
  t7986 = -1.*t3364*t632;
  t7989 = t7985 + t7986;
  t6907 = t5830*t1263;
  t7981 = t5805*t7980;
  t8020 = t8018*t5830;
  t5835 = t5507*t5428;
  t5843 = t3721*t5640;
  t5859 = t5832 + t5835 + t5843;
  t8055 = -1.*t5830*t7637;
  t8138 = -1.*t7980*t684;
  t6041 = -1.*t5428*t3311;
  t6067 = -1.*t5640*t1075;
  t6108 = t6038 + t6041 + t6067;
  t8528 = -1.*t5805*t7980;
  t8595 = -1.*t8018*t5830;
  t6409 = -1.*t5507*t5428;
  t6462 = -1.*t3721*t5640;
  t6493 = t6383 + t6409 + t6462;
  t8755 = t5830*t7724;
  t8838 = t7980*t1263;
  t6924 = t5428*t6313;
  t6961 = t5640*t1574;
  t7015 = t6907 + t6924 + t6961;
  t9462 = -0.035165*t494;
  t9488 = -1.*t222*t4839;
  t9502 = t9462 + t9488;
  t9535 = 0.035165*t222;
  t9546 = t9535 + t4841;
  t9919 = -1.*t222*t172*t394;
  t9922 = t494*t394*t632;
  t9960 = t9919 + t9922;
  t9972 = -1.*t222*t172*t876;
  t9981 = t494*t876*t632;
  t9987 = t9972 + t9981;
  t10031 = -1.*t172*t494*t394;
  t10074 = -1.*t222*t394*t632;
  t10139 = t10031 + t10074;
  t10252 = -1.*t172*t494*t876;
  t10277 = -1.*t222*t876*t632;
  t10281 = t10252 + t10277;
  t7958 = t3701*t5121;
  t7973 = 0. + t7958 + t5832;
  t10589 = t172*t9502;
  t10594 = -1.*t9546*t632;
  t10619 = t10589 + t10594;
  t10499 = t172*t9546;
  t10513 = t9502*t632;
  t10516 = t10499 + t10513;
  t10720 = t222*t172;
  t10727 = -1.*t494*t632;
  t10733 = t10720 + t10727;
  t8294 = -1.*t4554*t876;
  t8312 = -1.*t5121*t1043;
  t8407 = t8294 + t8312 + t6038;
  t8491 = -1.*t3701*t5121;
  t8501 = 0. + t8491 + t6383;
  t10527 = -1.*t172*t494;
  t10569 = -1.*t222*t632;
  t10575 = t10527 + t10569;
  t8859 = t4554*t1340;
  t8863 = t5121*t1460;
  t8881 = t8859 + t8863 + t6907;
  t10522 = t5805*t10516;
  t10747 = t10733*t5830;
  t10769 = -1.*t5830*t10139;
  t10881 = -1.*t10516*t684;
  t11003 = -1.*t5805*t10516;
  t11049 = -1.*t10733*t5830;
  t11089 = t5830*t10281;
  t11112 = t10516*t1263;
  t11371 = -0.194401*t330;
  t11386 = -1.*t330*t4302;
  t11388 = -1.*t297*t4502;
  t11393 = t11371 + t11386 + t11388;
  t11497 = t300 + t380;
  t11456 = t767 + t826;
  t11584 = -1.*t330*t242;
  t11585 = t297*t372;
  t11592 = t11584 + t11585;
  t11638 = -1.*t172*t494*t11497;
  t11648 = -1.*t222*t11497*t632;
  t11659 = t11638 + t11648;
  t11709 = -1.*t172*t494*t11592;
  t11759 = -1.*t222*t11592*t632;
  t11770 = t11709 + t11759;
  t11818 = t222*t172*t11497;
  t11837 = -1.*t494*t11497*t632;
  t11844 = t11818 + t11837;
  t11863 = t740*t11456;
  t11873 = -1.*t988*t11659;
  t11879 = t11863 + t11873;
  t11967 = t222*t172*t11592;
  t11971 = -1.*t494*t11592*t632;
  t11972 = t11967 + t11971;
  t11982 = t740*t11497;
  t11986 = -1.*t988*t11770;
  t11997 = t11982 + t11986;
  t12115 = -1.*t172*t494*t11393;
  t12118 = -1.*t222*t11393*t632;
  t12120 = t12115 + t12118;
  t12143 = t222*t172*t11393;
  t12153 = -1.*t494*t11393*t632;
  t12164 = t12143 + t12153;
  t12202 = t4685 + t4704 + t4773;
  t11703 = t11497*t988;
  t11781 = t740*t11770;
  t11786 = t11703 + t11781;
  t12168 = t5805*t12164;
  t12225 = -1.*t5830*t11972;
  t12228 = -1.*t12164*t684;
  t12372 = t12202*t988;
  t12376 = t740*t12120;
  t12377 = t12372 + t12376;
  t12387 = t740*t12202;
  t12389 = -1.*t988*t12120;
  t12394 = t12387 + t12389;
  t11636 = t11456*t988;
  t11664 = t740*t11659;
  t11670 = t11636 + t11664;
  t12293 = -1.*t5805*t12164;
  t12336 = t5830*t11844;
  t12339 = t12164*t1263;
  t12726 = -0.16*t242;
  t12730 = t12726 + t4496;
  t12693 = 0.020000000000000018*t242;
  t12694 = 0.16*t372;
  t12695 = t12693 + t12694;
  t12867 = -1.*t297*t12730;
  t12900 = t330*t12695;
  t12915 = t12867 + t12900;
  t11425 = -1.*t3572*t4982;
  t11426 = -1.*t3364*t4872;
  t11441 = 0. + t11425 + t11426;
  t11460 = t11441*t11456;
  t11484 = t3572*t4982;
  t11486 = t3364*t4872;
  t11488 = 0. + t11484 + t11486;
  t11529 = t11488*t11497;
  t11575 = -0.00016949530000000016*t11497;
  t11583 = -0.11688*t11456;
  t11596 = -0.081715*t11592;
  t11598 = t11583 + t11596;
  t11608 = 0.03856*t11598;
  t11618 = t11575 + t11608;
  t11620 = -0.5*var2[15]*t11618;
  t11675 = -0.004820000000000004*t11670;
  t11796 = 0.03856*t11786;
  t11805 = t11675 + t11796;
  t11816 = -0.5*var2[0]*t11805;
  t11860 = t72*t11844;
  t11925 = t705*t11879;
  t11928 = t11860 + t11925;
  t11932 = -0.004820000000000004*t11928;
  t11973 = t72*t11972;
  t12005 = t705*t11997;
  t12010 = t11973 + t12005;
  t12011 = 0.03856*t12010;
  t12028 = t11932 + t12011;
  t12029 = -0.5*var2[2]*t12028;
  t12035 = t705*t11844;
  t12043 = -1.*t72*t11879;
  t12048 = t12035 + t12043;
  t12049 = -0.004820000000000004*t12048;
  t12070 = t705*t11972;
  t12074 = -1.*t72*t11997;
  t12084 = t12070 + t12074;
  t12097 = 0.03856*t12084;
  t12098 = t12049 + t12097;
  t12099 = -0.5*var2[1]*t12098;
  t12100 = t11972*t7973;
  t12193 = -1.*t4554*t11497;
  t12224 = -1.*t5121*t11770;
  t13005 = -1.*t172*t494*t12915;
  t13008 = -1.*t222*t12915*t632;
  t13010 = t13005 + t13008;
  t13018 = t222*t172*t12915;
  t13026 = -1.*t494*t12915*t632;
  t13027 = t13018 + t13026;
  t12291 = t11844*t8501;
  t13042 = t330*t12730;
  t13045 = t297*t12695;
  t13047 = t13042 + t13045;
  t12317 = t4554*t11456;
  t12322 = t5121*t11659;
  t12367 = t11786*t5859;
  t13029 = t5805*t13027;
  t13063 = -1.*t13027*t684;
  t12437 = -1.*t5428*t11786;
  t12441 = -1.*t5640*t11997;
  t13156 = t13047*t988;
  t13161 = t740*t13010;
  t13166 = t13156 + t13161;
  t13187 = t740*t13047;
  t13193 = -1.*t988*t13010;
  t13199 = t13187 + t13193;
  t12493 = t11670*t6493;
  t13095 = -1.*t5805*t13027;
  t13113 = t13027*t1263;
  t12520 = t5428*t11670;
  t12549 = t5640*t11879;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=(-0.5*(-0.004820000000000004*(-1.*t1574*t705 - 1.*t1263*t72) + 0.03856*(-1.*t1075*t705 - 1.*t684*t72))*var2[1] - 0.5*(0.03856*(t684*t705 - 1.*t1075*t72) - 0.004820000000000004*(t1263*t705 - 1.*t1574*t72))*var2[2])*var2[17];
  p_output1[4]=(-0.5*(0.03856*t2832 - 0.004820000000000004*t2913)*var2[0] - 0.5*(-0.03856*t2414*t72 + 0.004820000000000004*t2683*t72)*var2[1] - 0.5*(0.03856*t2414*t705 - 0.004820000000000004*t2683*t705)*var2[2] - 0.5*(-0.004820000000000004*(t5507*(-1.*t1075*t5173 - 1.*t2832*t5428 - 1.*t3311*t5610 - 1.*t2414*t5640) + t2832*t5859 - 1.*t3701*t6108*t988 + t3311*(t3721*t5173 + t5507*t5610 - 1.*t3701*t5640*t740 - 1.*t3701*t5428*t988)) + 0.03856*(t5507*(t1574*t5173 + t2913*t5428 + t2683*t5640 + t5610*t6313) + t2913*t6493 - 1.*t3701*t7015*t988 + t6313*(-1.*t3721*t5173 - 1.*t5507*t5610 + t3701*t5640*t740 + t3701*t5428*t988)))*var2[3])*var2[17];
  p_output1[5]=(-0.5*(0.03856*t7273*t740 - 0.004820000000000004*t740*t7529)*var2[0] - 0.5*(0.03856*(t705*t7637 + t72*t7273*t988) - 0.004820000000000004*(t705*t7724 + t72*t7529*t988))*var2[1] - 0.5*(0.03856*(t72*t7637 - 1.*t705*t7273*t988) - 0.004820000000000004*(t72*t7724 - 1.*t705*t7529*t988))*var2[2] - 0.5*(-0.004820000000000004*(t5859*t7273*t740 + t6108*t740*t7989 + t5507*(-1.*t5428*t7273*t740 - 1.*t3311*t740*t8010 + t8055 + t8138 + t5640*t7273*t988 + t1075*t8010*t988) + t3311*(t7981 + t5428*t740*t7989 + t5507*t740*t8010 + t8020 - 1.*t5640*t7989*t988 - 1.*t3721*t8010*t988)) + 0.03856*(t6493*t740*t7529 + t7015*t740*t7989 + t5507*(t5428*t740*t7529 + t6313*t740*t8010 + t8755 + t8838 - 1.*t5640*t7529*t988 - 1.*t1574*t8010*t988) + t6313*(-1.*t5428*t740*t7989 - 1.*t5507*t740*t8010 + t8528 + t8595 + t5640*t7989*t988 + t3721*t8010*t988)))*var2[3] - 0.5*(-0.004820000000000004*(t7637*t7973 + t684*(t7981 + t5121*t7989 + t3701*t8010 + t8020) + t5805*(-1.*t5121*t7273 - 1.*t1043*t8010 + t8055 + t8138) + t8018*t8407) + 0.03856*(t7724*t8501 + t1263*(-1.*t5121*t7989 - 1.*t3701*t8010 + t8528 + t8595) + t5805*(t5121*t7529 + t1460*t8010 + t8755 + t8838) + t8018*t8881))*var2[4])*var2[17];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.5*(0.03856*t740*t9960 - 0.004820000000000004*t740*t9987)*var2[0] - 0.5*(0.03856*(t10139*t705 + t72*t988*t9960) - 0.004820000000000004*(t10281*t705 + t72*t988*t9987))*var2[1] - 0.5*(0.03856*(t10139*t72 - 1.*t705*t988*t9960) - 0.004820000000000004*(t10281*t72 - 1.*t705*t988*t9987))*var2[2] - 0.5*(-0.004820000000000004*(t10575*t6108*t740 + t3311*(t10522 + t10747 + t10575*t5428*t740 + t10619*t5507*t740 - 1.*t10619*t3721*t988 - 1.*t10575*t5640*t988) + t5859*t740*t9960 + t5507*(t10769 + t10881 - 1.*t10619*t3311*t740 + t10619*t1075*t988 - 1.*t5428*t740*t9960 + t5640*t988*t9960)) + 0.03856*(t10575*t7015*t740 + t6313*(t11003 + t11049 - 1.*t10575*t5428*t740 - 1.*t10619*t5507*t740 + t10619*t3721*t988 + t10575*t5640*t988) + t6493*t740*t9987 + t5507*(t11089 + t11112 + t10619*t6313*t740 - 1.*t10619*t1574*t988 + t5428*t740*t9987 - 1.*t5640*t988*t9987)))*var2[3] - 0.5*(-0.004820000000000004*((t10522 + t10747 + t10619*t3701 + t10575*t5121)*t684 + t10139*t7973 + t10733*t8407 + t5805*(-1.*t1043*t10619 + t10769 + t10881 - 1.*t5121*t9960)) + 0.03856*(t1263*(t11003 + t11049 - 1.*t10619*t3701 - 1.*t10575*t5121) + t10281*t8501 + t10733*t8881 + t5805*(t11089 + t11112 + t10619*t1460 + t5121*t9987)))*var2[4] - 0.5*(0.03856*t1340*(t4872*t494 - 1.*t222*t4982 - 1.*t3364*t9502 - 1.*t3572*t9546) - 0.004820000000000004*t876*(-1.*t4872*t494 + t222*t4982 + t3364*t9502 + t3572*t9546))*var2[5])*var2[17];
  p_output1[16]=(t11620 + t11816 + t12029 + t12099 - 0.5*(-0.004820000000000004*(t12367 + (t12225 + t12228 - 1.*t1075*t12394 + t12437 + t12441 - 1.*t12377*t3311)*t5507 + t3311*(t12168 + t12394*t3721 + t12377*t5507)) + 0.03856*(t12493 + (t12293 - 1.*t12394*t3721 - 1.*t12377*t5507)*t6313 + t5507*(t12336 + t12339 + t12520 + t12549 + t12394*t1574 + t12377*t6313)))*var2[3] - 0.5*(0.03856*(t12291 + t1263*(t12293 - 1.*t12120*t3701) + (t12317 + t12322 + t12336 + t12339 + t12202*t1340 + t12120*t1460)*t5805) - 0.004820000000000004*(t12100 + (t12168 + t12120*t3701)*t684 + t5805*(-1.*t1043*t12120 + t12193 + t12224 + t12225 + t12228 - 1.*t12202*t876)))*var2[4] - 0.5*(0.03856*(t11460 + t1340*(-1.*t11393*t222*t3572 + t11393*t3364*t494)) - 0.004820000000000004*(t11529 + (t11393*t222*t3572 - 1.*t11393*t3364*t494)*t876))*var2[5])*var2[17];
  p_output1[17]=(t11620 + t11816 + t12029 + t12099 - 0.5*(-0.004820000000000004*(t12367 + (t12225 + t12437 + t12441 + t13063 - 1.*t1075*t13199 - 1.*t13166*t3311)*t5507 + t3311*(t13029 + t13199*t3721 + t13166*t5507)) + 0.03856*(t12493 + (t13095 - 1.*t13199*t3721 - 1.*t13166*t5507)*t6313 + t5507*(t12336 + t12520 + t12549 + t13113 + t13199*t1574 + t13166*t6313)))*var2[3] - 0.5*(0.03856*(t12291 + t1263*(t13095 - 1.*t13010*t3701) + (t12317 + t12322 + t12336 + t13113 + t13047*t1340 + t13010*t1460)*t5805) - 0.004820000000000004*(t12100 + (t13029 + t13010*t3701)*t684 + t5805*(t12193 + t12224 + t12225 - 1.*t1043*t13010 + t13063 - 1.*t13047*t876)))*var2[4] - 0.5*(0.03856*(t11460 + t1340*(-1.*t12915*t222*t3572 + t12915*t3364*t494)) - 0.004820000000000004*(t11529 + (t12915*t222*t3572 - 1.*t12915*t3364*t494)*t876))*var2[5] - 0.5*(-0.004820000000000004*(-1.*t12730*t242 + 0.194401*t372 + t12695*t372 + t372*t4302 + t242*t4502) + 0.03856*(0.194401*t242 + t12695*t242 + t12730*t372 + t242*t4302 - 1.*t372*t4502))*var2[16])*var2[17];
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

#include "Ce3_vec18_plane.hh"

namespace SymFunction
{

void Ce3_vec18_plane_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
