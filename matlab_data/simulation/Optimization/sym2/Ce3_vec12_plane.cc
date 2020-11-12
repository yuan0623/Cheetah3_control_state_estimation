/*
 * Automatically Generated from Mathematica.
 * Sun 28 Jul 2019 02:54:03 GMT-04:00
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
  double t661;
  double t693;
  double t709;
  double t749;
  double t1181;
  double t1234;
  double t1267;
  double t660;
  double t1291;
  double t320;
  double t1420;
  double t202;
  double t1918;
  double t2118;
  double t2127;
  double t1683;
  double t1752;
  double t2419;
  double t1283;
  double t1506;
  double t1515;
  double t2297;
  double t2679;
  double t2703;
  double t2725;
  double t2758;
  double t2795;
  double t3079;
  double t3101;
  double t3129;
  double t3220;
  double t3233;
  double t3235;
  double t3249;
  double t3256;
  double t3392;
  double t3463;
  double t3654;
  double t3682;
  double t4295;
  double t4323;
  double t4337;
  double t4345;
  double t4356;
  double t4613;
  double t4872;
  double t4876;
  double t4881;
  double t4882;
  double t4889;
  double t4896;
  double t4944;
  double t4973;
  double t4983;
  double t5110;
  double t5342;
  double t5349;
  double t5351;
  double t5354;
  double t4823;
  double t4837;
  double t4849;
  double t4852;
  double t4853;
  double t4854;
  double t4899;
  double t5115;
  double t5222;
  double t5312;
  double t5323;
  double t5336;
  double t5339;
  double t5378;
  double t5383;
  double t5436;
  double t5437;
  double t5439;
  double t5590;
  double t5599;
  double t5633;
  double t5758;
  double t5795;
  double t5817;
  double t5975;
  double t5990;
  double t6065;
  double t4792;
  double t4811;
  double t4821;
  double t5236;
  double t5722;
  double t5746;
  double t5863;
  double t5898;
  double t5899;
  double t5855;
  double t5860;
  double t5862;
  double t7167;
  double t7204;
  double t7207;
  double t7787;
  double t7807;
  double t7811;
  double t7841;
  double t7864;
  double t7868;
  double t5951;
  double t7040;
  double t8128;
  double t8142;
  double t8143;
  double t7259;
  double t8110;
  double t8111;
  double t8115;
  double t7624;
  double t8124;
  double t8155;
  double t5960;
  double t6070;
  double t6130;
  double t8213;
  double t8222;
  double t7042;
  double t7076;
  double t7078;
  double t8253;
  double t8366;
  double t8369;
  double t8268;
  double t7280;
  double t7311;
  double t7326;
  double t8315;
  double t8320;
  double t7649;
  double t7659;
  double t7699;
  double t8604;
  double t8606;
  double t8615;
  double t8627;
  double t8637;
  double t7830;
  double t7888;
  double t7889;
  double t7909;
  double t7913;
  double t7949;
  double t7951;
  double t7974;
  double t7987;
  double t7992;
  double t7995;
  double t7999;
  double t8002;
  double t8003;
  double t8017;
  double t8036;
  double t8037;
  double t8055;
  double t8056;
  double t8057;
  double t8063;
  double t8072;
  double t8075;
  double t8078;
  double t8090;
  double t8100;
  double t8103;
  double t8116;
  double t8160;
  double t8166;
  double t8182;
  double t8194;
  double t8718;
  double t8719;
  double t8723;
  double t8702;
  double t8708;
  double t8711;
  double t8223;
  double t8243;
  double t8247;
  double t8250;
  double t8251;
  double t8285;
  double t8288;
  double t8293;
  double t8300;
  double t8322;
  double t8716;
  double t8384;
  double t8385;
  double t8399;
  double t8741;
  double t8405;
  double t8406;
  double t8462;
  double t8755;
  double t8502;
  double t8504;
  double t8519;
  double t8787;
  double t8527;
  double t8534;
  double t8570;
  double t9166;
  double t9173;
  double t9174;
  double t9198;
  double t9199;
  double t9207;
  double t3869;
  double t3904;
  double t3968;
  double t9289;
  double t9293;
  double t9296;
  double t9311;
  double t9314;
  double t9315;
  double t9411;
  double t9426;
  double t9430;
  double t9436;
  double t9439;
  double t9441;
  double t9444;
  double t9451;
  double t9455;
  double t9459;
  double t9478;
  double t9505;
  double t9508;
  double t9681;
  double t9682;
  double t9683;
  double t9686;
  double t9688;
  double t9689;
  double t9196;
  double t9212;
  double t9222;
  double t9589;
  double t9618;
  double t9641;
  double t9088;
  double t9093;
  double t9094;
  double t9101;
  double t9106;
  double t9107;
  double t9128;
  double t9130;
  double t9131;
  double t9148;
  double t9998;
  double t10002;
  double t9953;
  double t9955;
  double t9963;
  double t9157;
  double t9163;
  double t9178;
  double t9182;
  double t9184;
  double t9185;
  double t9186;
  double t9188;
  double t9227;
  double t9237;
  double t9238;
  double t9241;
  double t9242;
  double t9257;
  double t9274;
  double t9304;
  double t9316;
  double t9327;
  double t9333;
  double t9334;
  double t9350;
  double t9351;
  double t9375;
  double t9378;
  double t9380;
  double t9384;
  double t9385;
  double t9392;
  double t9394;
  double t10128;
  double t10130;
  double t10136;
  double t9498;
  double t9501;
  double t10141;
  double t10149;
  double t10158;
  double t10170;
  double t10171;
  double t10185;
  double t9554;
  double t9609;
  double t10196;
  double t10199;
  double t10204;
  double t9622;
  double t9677;
  double t10190;
  double t10230;
  double t9802;
  double t9833;
  double t10333;
  double t10338;
  double t10347;
  double t10351;
  double t10358;
  double t10362;
  double t9861;
  double t10258;
  double t10296;
  double t9892;
  double t9906;
  t661 = Cos(var1[11]);
  t693 = Sin(var1[10]);
  t709 = -1.*t661*t693;
  t749 = Cos(var1[10]);
  t1181 = Sin(var1[11]);
  t1234 = -1.*t749*t1181;
  t1267 = t709 + t1234;
  t660 = Cos(var1[5]);
  t1291 = Sin(var1[9]);
  t320 = Cos(var1[9]);
  t1420 = Sin(var1[5]);
  t202 = Sin(var1[3]);
  t1918 = t749*t661;
  t2118 = -1.*t693*t1181;
  t2127 = t1918 + t2118;
  t1683 = Cos(var1[3]);
  t1752 = Cos(var1[4]);
  t2419 = Sin(var1[4]);
  t1283 = t320*t660*t1267;
  t1506 = -1.*t1291*t1267*t1420;
  t1515 = t1283 + t1506;
  t2297 = t1752*t2127;
  t2679 = -1.*t660*t1291*t1267;
  t2703 = -1.*t320*t1267*t1420;
  t2725 = t2679 + t2703;
  t2758 = -1.*t2419*t2725;
  t2795 = t2297 + t2758;
  t3079 = t320*t660*t2127;
  t3101 = -1.*t1291*t2127*t1420;
  t3129 = t3079 + t3101;
  t3220 = t661*t693;
  t3233 = t749*t1181;
  t3235 = t3220 + t3233;
  t3249 = t1752*t3235;
  t3256 = -1.*t660*t1291*t2127;
  t3392 = -1.*t320*t2127*t1420;
  t3463 = t3256 + t3392;
  t3654 = -1.*t2419*t3463;
  t3682 = t3249 + t3654;
  t4295 = -1.*t2127*t2419;
  t4323 = -1.*t1752*t2725;
  t4337 = t4295 + t4323;
  t4345 = -1.*t3235*t2419;
  t4356 = -1.*t1752*t3463;
  t4613 = t4345 + t4356;
  t4872 = -1.*t661;
  t4876 = 1. + t4872;
  t4881 = 0.100689*t4876;
  t4882 = 0.080689*t661;
  t4889 = -0.16*t1181;
  t4896 = t4881 + t4882 + t4889;
  t4944 = -0.20833*t4876;
  t4973 = -0.36833*t661;
  t4983 = 0.02*t1181;
  t5110 = t4944 + t4973 + t4983;
  t5342 = 0.242889*t693;
  t5349 = -1.*t693*t4896;
  t5351 = t749*t5110;
  t5354 = t5342 + t5349 + t5351;
  t4823 = t320*t660;
  t4837 = -1.*t1291*t1420;
  t4849 = t4823 + t4837;
  t4852 = -1.*t749;
  t4853 = 1. + t4852;
  t4854 = 0.242889*t4853;
  t4899 = t749*t4896;
  t5115 = t693*t5110;
  t5222 = t4854 + t4899 + t5115;
  t5312 = -1.*t320;
  t5323 = 1. + t5312;
  t5336 = 0.081715*t5323;
  t5339 = 0.11688*t320;
  t5378 = -1.*t1291*t5354;
  t5383 = t5336 + t5339 + t5378;
  t5436 = t660*t5383;
  t5437 = 0.035165*t1291;
  t5439 = t320*t5354;
  t5590 = t5437 + t5439;
  t5599 = -1.*t5590*t1420;
  t5633 = t5436 + t5599;
  t5758 = t5222*t2419;
  t5795 = t1752*t5633;
  t5817 = t5758 + t5795;
  t5975 = t1752*t5222;
  t5990 = -1.*t2419*t5633;
  t6065 = t5975 + t5990;
  t4792 = t2127*t2419;
  t4811 = t1752*t2725;
  t4821 = t4792 + t4811;
  t5236 = -1.*t5222*t2419;
  t5722 = -1.*t1752*t5633;
  t5746 = t5236 + t5722;
  t5863 = t660*t5590;
  t5898 = t5383*t1420;
  t5899 = t5863 + t5898;
  t5855 = t660*t1291;
  t5860 = t320*t1420;
  t5862 = t5855 + t5860;
  t7167 = t3235*t2419;
  t7204 = t1752*t3463;
  t7207 = t7167 + t7204;
  t7787 = -1.*t320*t660*t1267;
  t7807 = t1291*t1267*t1420;
  t7811 = t7787 + t7807;
  t7841 = -1.*t320*t660*t2127;
  t7864 = t1291*t2127*t1420;
  t7868 = t7841 + t7864;
  t5951 = t5862*t5899;
  t7040 = -1.*t5899*t1515;
  t8128 = -1.*t660*t5590;
  t8142 = -1.*t5383*t1420;
  t8143 = t8128 + t8142;
  t7259 = -1.*t5862*t5899;
  t8110 = -1.*t660*t1291;
  t8111 = -1.*t320*t1420;
  t8115 = t8110 + t8111;
  t7624 = t5899*t3129;
  t8124 = t5862*t5633;
  t8155 = t4849*t5899;
  t5960 = t1752*t4849*t5817;
  t6070 = -1.*t2419*t4849*t6065;
  t6130 = t5951 + t5960 + t6070;
  t8213 = -1.*t5899*t2725;
  t8222 = -1.*t5633*t1515;
  t7042 = -1.*t5817*t4821;
  t7076 = -1.*t6065*t2795;
  t7078 = t7040 + t7042 + t7076;
  t8253 = -1.*t5862*t5633;
  t8366 = Power(t1752,2);
  t8369 = Power(t2419,2);
  t8268 = -1.*t4849*t5899;
  t7280 = -1.*t1752*t4849*t5817;
  t7311 = t2419*t4849*t6065;
  t7326 = t7259 + t7280 + t7311;
  t8315 = t5899*t3463;
  t8320 = t5633*t3129;
  t7649 = t5817*t7207;
  t7659 = t6065*t3682;
  t7699 = t7624 + t7649 + t7659;
  t8604 = -0.035165*t1291;
  t8606 = -1.*t320*t5354;
  t8615 = t8604 + t8606;
  t8627 = 0.035165*t320;
  t8637 = t8627 + t5378;
  t7830 = 0.03856*t1752*t7811;
  t7888 = -0.00482*t1752*t7868;
  t7889 = t7830 + t7888;
  t7909 = -0.5*var2[0]*t7889;
  t7913 = t202*t2725;
  t7949 = -1.*t1683*t2419*t7811;
  t7951 = t7913 + t7949;
  t7974 = 0.03856*t7951;
  t7987 = t202*t3463;
  t7992 = -1.*t1683*t2419*t7868;
  t7995 = t7987 + t7992;
  t7999 = -0.00482*t7995;
  t8002 = t7974 + t7999;
  t8003 = -0.5*var2[2]*t8002;
  t8017 = t1683*t2725;
  t8036 = t202*t2419*t7811;
  t8037 = t8017 + t8036;
  t8055 = 0.03856*t8037;
  t8056 = t1683*t3463;
  t8057 = t202*t2419*t7868;
  t8063 = t8056 + t8057;
  t8072 = -0.00482*t8063;
  t8075 = t8055 + t8072;
  t8078 = -0.5*var2[1]*t8075;
  t8090 = t4849*t5633;
  t8100 = t8090 + t5951;
  t8103 = t2725*t8100;
  t8116 = t8115*t5633;
  t8160 = -1.*t5222*t2127;
  t8166 = -1.*t5633*t2725;
  t8182 = t8160 + t8166 + t7040;
  t8194 = t4849*t8182;
  t8718 = t660*t8615;
  t8719 = -1.*t8637*t1420;
  t8723 = t8718 + t8719;
  t8702 = t660*t8637;
  t8708 = t8615*t1420;
  t8711 = t8702 + t8708;
  t8223 = -1.*t5633*t7811;
  t8243 = -1.*t4849*t5633;
  t8247 = t8243 + t7259;
  t8250 = t3463*t8247;
  t8251 = -1.*t8115*t5633;
  t8285 = t5222*t3235;
  t8288 = t5633*t3463;
  t8293 = t8285 + t8288 + t7624;
  t8300 = t4849*t8293;
  t8322 = t5633*t7868;
  t8716 = t5862*t8711;
  t8384 = t1752*t8115*t5817;
  t8385 = -1.*t2419*t8115*t6065;
  t8399 = t1752*t7811*t6130;
  t8741 = -1.*t8711*t1515;
  t8405 = -1.*t1752*t7811*t5817;
  t8406 = t2419*t7811*t6065;
  t8462 = t1752*t8115*t7078;
  t8755 = -1.*t5862*t8711;
  t8502 = -1.*t1752*t8115*t5817;
  t8504 = t2419*t8115*t6065;
  t8519 = t1752*t7868*t7326;
  t8787 = t8711*t3129;
  t8527 = t1752*t7868*t5817;
  t8534 = -1.*t2419*t7868*t6065;
  t8570 = t1752*t8115*t7699;
  t9166 = -1.*t749*t661;
  t9173 = t693*t1181;
  t9174 = t9166 + t9173;
  t9198 = -1.*t660*t1291*t9174;
  t9199 = -1.*t320*t9174*t1420;
  t9207 = t9198 + t9199;
  t3869 = t1683*t1515;
  t3904 = -1.*t202*t2795;
  t3968 = t3869 + t3904;
  t9289 = t320*t660*t9174;
  t9293 = -1.*t1291*t9174*t1420;
  t9296 = t9289 + t9293;
  t9311 = t1752*t1267;
  t9314 = -1.*t2419*t9207;
  t9315 = t9311 + t9314;
  t9411 = 0.242889*t749;
  t9426 = -1.*t749*t4896;
  t9430 = -1.*t693*t5110;
  t9436 = t9411 + t9426 + t9430;
  t9439 = -1.*t660*t1291*t9436;
  t9441 = -1.*t320*t9436*t1420;
  t9444 = t9439 + t9441;
  t9451 = t320*t660*t9436;
  t9455 = -1.*t1291*t9436*t1420;
  t9459 = t9451 + t9455;
  t9478 = -1.*t5862*t9459;
  t9505 = t5899*t1515;
  t9508 = t9459*t3129;
  t9681 = t5354*t2419;
  t9682 = t1752*t9444;
  t9683 = t9681 + t9682;
  t9686 = t1752*t5354;
  t9688 = -1.*t2419*t9444;
  t9689 = t9686 + t9688;
  t9196 = t1267*t2419;
  t9212 = t1752*t9207;
  t9222 = t9196 + t9212;
  t9589 = t5862*t9459;
  t9618 = -1.*t9459*t1515;
  t9641 = -1.*t5899*t9296;
  t9088 = t1291*t5590;
  t9093 = t320*t5383;
  t9094 = t9088 + t9093;
  t9101 = -0.00482*t9094*t1267;
  t9106 = -1.*t1291*t5590;
  t9107 = -1.*t320*t5383;
  t9128 = t9106 + t9107;
  t9130 = 0.03856*t9128*t2127;
  t9131 = t9101 + t9130;
  t9148 = -0.5*var2[5]*t9131;
  t9998 = -0.16*t661;
  t10002 = t9998 + t4983;
  t9953 = 0.02*t661;
  t9955 = 0.16*t1181;
  t9963 = t9953 + t9955;
  t9157 = -0.0001694953*t1267;
  t9163 = -0.11688*t2127;
  t9178 = -0.081715*t9174;
  t9182 = t9163 + t9178;
  t9184 = 0.03856*t9182;
  t9185 = t9157 + t9184;
  t9186 = -0.5*var2[9]*t9185;
  t9188 = -0.00482*t4821;
  t9227 = 0.03856*t9222;
  t9237 = t9188 + t9227;
  t9238 = -0.5*var2[0]*t9237;
  t9241 = t202*t1515;
  t9242 = t1683*t2795;
  t9257 = t9241 + t9242;
  t9274 = -0.00482*t9257;
  t9304 = t202*t9296;
  t9316 = t1683*t9315;
  t9327 = t9304 + t9316;
  t9333 = 0.03856*t9327;
  t9334 = t9274 + t9333;
  t9350 = -0.5*var2[2]*t9334;
  t9351 = -0.00482*t3968;
  t9375 = t1683*t9296;
  t9378 = -1.*t202*t9315;
  t9380 = t9375 + t9378;
  t9384 = 0.03856*t9380;
  t9385 = t9351 + t9384;
  t9392 = -0.5*var2[1]*t9385;
  t9394 = t1515*t8247;
  t10128 = -1.*t693*t10002;
  t10130 = t749*t9963;
  t10136 = t10128 + t10130;
  t9498 = t5222*t2127;
  t9501 = t5633*t2725;
  t10141 = -1.*t660*t1291*t10136;
  t10149 = -1.*t320*t10136*t1420;
  t10158 = t10141 + t10149;
  t10170 = t320*t660*t10136;
  t10171 = -1.*t1291*t10136*t1420;
  t10185 = t10170 + t10171;
  t9554 = t9296*t8100;
  t9609 = -1.*t5222*t1267;
  t10196 = t749*t10002;
  t10199 = t693*t9963;
  t10204 = t10196 + t10199;
  t9622 = -1.*t5633*t9207;
  t9677 = t4821*t7326;
  t10190 = -1.*t5862*t10185;
  t10230 = t10185*t3129;
  t9802 = t5817*t4821;
  t9833 = t6065*t2795;
  t10333 = t10204*t2419;
  t10338 = t1752*t10158;
  t10347 = t10333 + t10338;
  t10351 = t1752*t10204;
  t10358 = -1.*t2419*t10158;
  t10362 = t10351 + t10358;
  t9861 = t9222*t6130;
  t10258 = t5862*t10185;
  t10296 = -1.*t10185*t1515;
  t9892 = -1.*t5817*t9222;
  t9906 = -1.*t6065*t9315;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=(-0.5*(0.03856*(-1.*t1515*t202 - 1.*t1683*t2795) - 0.00482*(-1.*t202*t3129 - 1.*t1683*t3682))*var2[1] - 0.5*(-0.00482*(t1683*t3129 - 1.*t202*t3682) + 0.03856*t3968)*var2[2])*var2[11];
  p_output1[4]=(-0.5*(0.03856*t2795 - 0.00482*t3682)*var2[0] - 0.5*(-0.03856*t202*t4337 + 0.00482*t202*t4613)*var2[1] - 0.5*(0.03856*t1683*t4337 - 0.00482*t1683*t4613)*var2[2] - 0.5*(-0.00482*(t4821*(-1.*t2419*t4849*t5746 - 1.*t2419*t4849*t5817) + t1752*t4849*(-1.*t2795*t5746 - 1.*t2795*t5817 - 1.*t4337*t6065 - 1.*t4821*t6065) + t2795*t6130 - 1.*t2419*t4849*t7078) + 0.03856*((t2419*t4849*t5746 + t2419*t4849*t5817)*t7207 + t1752*t4849*(t3682*t5746 + t3682*t5817 + t4613*t6065 + t6065*t7207) + t3682*t7326 - 1.*t2419*t4849*t7699))*var2[3])*var2[11];
  p_output1[5]=(t7909 + t8003 + t8078 - 0.5*(-0.00482*(t4821*(t8124 + t8155 + t4849*t8143*t8366 + t4849*t8143*t8369 + t8384 + t8385) + t8399 + t1752*t4849*(t2419*t2795*t8143 - 1.*t1752*t4821*t8143 + t8213 + t8222 + t8405 + t8406) + t8462) + 0.03856*(t7207*(t8253 + t8268 - 1.*t4849*t8143*t8366 - 1.*t4849*t8143*t8369 + t8502 + t8504) + t8519 + t1752*t4849*(-1.*t2419*t3682*t8143 + t1752*t7207*t8143 + t8315 + t8320 + t8527 + t8534) + t8570))*var2[3] - 0.5*(-0.00482*(t8103 + t1515*(t8116 + t8124 + t4849*t8143 + t8155) + t8194 + t5862*(-1.*t2725*t8143 + t8213 + t8222 + t8223)) + 0.03856*(t8250 + t3129*(-1.*t4849*t8143 + t8251 + t8253 + t8268) + t8300 + t5862*(t3463*t8143 + t8315 + t8320 + t8322)))*var2[4])*var2[11];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(t7909 + t8003 + t8078 - 0.5*(-0.00482*(t8399 + t8462 + t4821*(t8155 + t8384 + t8385 + t8716 + t4849*t8366*t8723 + t4849*t8369*t8723) + t1752*t4849*(t8213 + t8405 + t8406 + t2419*t2795*t8723 - 1.*t1752*t4821*t8723 + t8741)) + 0.03856*(t8519 + t8570 + t7207*(t8268 + t8502 + t8504 - 1.*t4849*t8366*t8723 - 1.*t4849*t8369*t8723 + t8755) + t1752*t4849*(t8315 + t8527 + t8534 - 1.*t2419*t3682*t8723 + t1752*t7207*t8723 + t8787)))*var2[3] - 0.5*(-0.00482*(t8103 + t8194 + t1515*(t8116 + t8155 + t8716 + t4849*t8723) + t5862*(t8213 + t8223 - 1.*t2725*t8723 + t8741)) + 0.03856*(t8250 + t8300 + t3129*(t8251 + t8268 - 1.*t4849*t8723 + t8755) + t5862*(t8315 + t8322 + t3463*t8723 + t8787)))*var2[4] - 0.5*(0.03856*t3235*(t1291*t5383 - 1.*t320*t5590 - 1.*t320*t8615 - 1.*t1291*t8637) - 0.00482*t2127*(-1.*t1291*t5383 + t320*t5590 + t320*t8615 + t1291*t8637))*var2[5])*var2[11];
  p_output1[10]=(t9148 + t9186 + t9238 + t9350 + t9392 - 0.5*(0.03856*(t9677 + t7207*(t9478 - 1.*t1752*t4849*t9683 + t2419*t4849*t9689) + t1752*t4849*(t9505 + t9508 + t7207*t9683 + t3682*t9689 + t9802 + t9833)) - 0.00482*(t4821*(t9589 + t1752*t4849*t9683 - 1.*t2419*t4849*t9689) + t9861 + t1752*t4849*(t9618 + t9641 - 1.*t4821*t9683 - 1.*t2795*t9689 + t9892 + t9906)))*var2[3] - 0.5*(0.03856*(t9394 + t3129*(-1.*t4849*t9444 + t9478) + t5862*(t3235*t5354 + t3463*t9444 + t9498 + t9501 + t9505 + t9508)) - 0.00482*(t9554 + t1515*(t4849*t9444 + t9589) + t5862*(-1.*t2127*t5354 - 1.*t2725*t9444 + t9609 + t9618 + t9622 + t9641)))*var2[4])*var2[11];
  p_output1[11]=(t9148 + t9186 + t9238 + t9350 + t9392 - 0.5*(0.03856*((t10190 - 1.*t10347*t1752*t4849 + t10362*t2419*t4849)*t7207 + t9677 + t1752*t4849*(t10230 + t10362*t3682 + t10347*t7207 + t9505 + t9802 + t9833)) - 0.00482*(t4821*(t10258 + t10347*t1752*t4849 - 1.*t10362*t2419*t4849) + t9861 + t1752*t4849*(t10296 - 1.*t10362*t2795 - 1.*t10347*t4821 + t9641 + t9892 + t9906)))*var2[3] - 0.5*(0.03856*(t3129*(t10190 - 1.*t10158*t4849) + t9394 + t5862*(t10230 + t10204*t3235 + t10158*t3463 + t9498 + t9501 + t9505)) - 0.00482*(t1515*(t10258 + t10158*t4849) + t9554 + t5862*(t10296 - 1.*t10204*t2127 - 1.*t10158*t2725 + t9609 + t9622 + t9641)))*var2[4] - 0.5*(-0.00482*(-0.242889*t1181 + t1181*t4896 - 1.*t10002*t661 + t5110*t661 + t1181*t9963) + 0.03856*(t10002*t1181 - 1.*t1181*t5110 - 0.242889*t661 + t4896*t661 + t661*t9963))*var2[10])*var2[11];
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

#include "Ce3_vec12_plane.hh"

namespace SymFunction
{

void Ce3_vec12_plane_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
