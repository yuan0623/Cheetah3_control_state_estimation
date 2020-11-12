/*
 * Automatically Generated from Mathematica.
 * Tue 10 Dec 2019 16:01:32 GMT-05:00
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
  double t1765;
  double t2560;
  double t1558;
  double t2720;
  double t106;
  double t468;
  double t1528;
  double t2363;
  double t2721;
  double t3068;
  double t5103;
  double t5752;
  double t5779;
  double t5827;
  double t6082;
  double t6126;
  double t3665;
  double t4737;
  double t5095;
  double t6411;
  double t6441;
  double t6442;
  double t6537;
  double t6564;
  double t6565;
  double t6509;
  double t6510;
  double t6516;
  double t6524;
  double t6566;
  double t6569;
  double t6578;
  double t6579;
  double t6580;
  double t6581;
  double t6586;
  double t6589;
  double t5831;
  double t5833;
  double t5891;
  double t6626;
  double t3081;
  double t5104;
  double t5105;
  double t6611;
  double t6471;
  double t6473;
  double t6474;
  double t6409;
  double t6454;
  double t6455;
  double t6469;
  double t6475;
  double t6477;
  double t6869;
  double t6870;
  double t6875;
  double t6905;
  double t6906;
  double t6907;
  double t6927;
  double t6944;
  double t6946;
  double t6947;
  double t6949;
  double t6950;
  double t6953;
  double t6955;
  double t6957;
  double t6967;
  double t6969;
  double t6975;
  double t6664;
  double t6665;
  double t6667;
  double t6678;
  double t6679;
  double t6680;
  double t6727;
  double t6728;
  double t6730;
  double t6786;
  double t6791;
  double t6793;
  double t6884;
  double t6885;
  double t6890;
  double t7168;
  double t7169;
  double t7170;
  double t7178;
  double t7181;
  double t7183;
  double t7184;
  double t7185;
  double t7186;
  double t7355;
  double t7358;
  double t7360;
  double t7368;
  double t7369;
  double t7370;
  double t7381;
  double t7387;
  double t7390;
  double t7391;
  double t7392;
  double t7399;
  double t7400;
  double t7401;
  double t7425;
  double t7428;
  double t7432;
  double t7436;
  double t7439;
  double t7440;
  double t7442;
  double t7338;
  double t7346;
  double t7353;
  double t7372;
  double t7394;
  double t7397;
  double t7524;
  double t7531;
  double t7532;
  double t7398;
  double t7448;
  double t7449;
  double t7564;
  double t7566;
  double t7567;
  double t7540;
  double t7547;
  double t7548;
  double t7493;
  double t7501;
  double t7511;
  double t7568;
  double t7582;
  double t7588;
  double t7552;
  double t7553;
  double t7556;
  double t7591;
  double t7592;
  double t7602;
  double t7673;
  double t7674;
  double t7678;
  double t6255;
  double t6300;
  double t6315;
  double t6084;
  double t6150;
  double t6210;
  double t7611;
  double t7614;
  double t7615;
  double t7624;
  double t7763;
  double t7765;
  double t7766;
  double t7769;
  double t7771;
  double t7753;
  double t7756;
  double t7757;
  double t7772;
  double t7773;
  double t7776;
  double t7782;
  double t7783;
  double t7784;
  double t7644;
  double t7646;
  double t7647;
  double t7665;
  double t7695;
  double t7701;
  double t7705;
  double t7706;
  double t7762;
  double t7787;
  double t7789;
  double t7790;
  double t7723;
  double t7726;
  double t7727;
  double t7728;
  double t7846;
  double t7847;
  double t7848;
  double t7858;
  double t7859;
  double t7860;
  double t7966;
  double t7973;
  double t7974;
  double t7977;
  double t7991;
  double t7992;
  double t7993;
  double t7980;
  double t7983;
  double t7985;
  double t7990;
  double t7994;
  double t7998;
  double t8001;
  double t8004;
  double t8007;
  double t7926;
  double t7928;
  double t8158;
  double t8159;
  double t8161;
  double t8162;
  double t8165;
  double t8160;
  double t8188;
  double t8195;
  double t8197;
  double t8199;
  double t8204;
  double t8216;
  double t8219;
  double t8220;
  double t8196;
  double t8205;
  double t8210;
  double t8043;
  double t8045;
  double t8046;
  double t8213;
  double t8222;
  double t8224;
  double t8228;
  double t8233;
  double t8234;
  double t8115;
  double t8130;
  double t8144;
  double t8145;
  double t7767;
  double t7781;
  double t7795;
  double t7796;
  double t7821;
  double t8363;
  double t7823;
  double t7829;
  double t7830;
  double t8337;
  double t8343;
  double t8345;
  double t7550;
  double t7626;
  double t7627;
  double t8406;
  double t8412;
  double t8416;
  double t8422;
  double t8423;
  double t8424;
  double t7689;
  double t8445;
  double t8446;
  double t8448;
  double t7710;
  double t7713;
  double t7987;
  double t8042;
  double t8120;
  double t8495;
  double t8132;
  double t8487;
  double t8493;
  double t8212;
  double t8494;
  double t8497;
  double t8246;
  double t8515;
  double t8275;
  double t8517;
  double t8291;
  double t8520;
  double t8431;
  double t8432;
  double t8439;
  double t8440;
  double t8352;
  double t8356;
  double t8384;
  double t8385;
  double t8618;
  double t8619;
  double t8496;
  double t8643;
  double t8644;
  double t8516;
  double t8694;
  double t8675;
  double t8681;
  double t8682;
  double t8701;
  double t8541;
  double t8713;
  double t8717;
  double t8558;
  double t8720;
  double t8781;
  double t8783;
  double t8784;
  double t8787;
  double t8788;
  double t8789;
  double t8792;
  t1765 = Cos(var1[14]);
  t2560 = Sin(var1[13]);
  t1558 = Cos(var1[13]);
  t2720 = Sin(var1[14]);
  t106 = Cos(var1[4]);
  t468 = Cos(var1[5]);
  t1528 = Sin(var1[12]);
  t2363 = t1558*t1765;
  t2721 = -1.*t2560*t2720;
  t3068 = t2363 + t2721;
  t5103 = Sin(var1[5]);
  t5752 = -1.*t1765*t2560;
  t5779 = -1.*t1558*t2720;
  t5827 = t5752 + t5779;
  t6082 = Sin(var1[4]);
  t6126 = Cos(var1[12]);
  t3665 = t1765*t2560;
  t4737 = t1558*t2720;
  t5095 = t3665 + t4737;
  t6411 = t468*t3068;
  t6441 = t1528*t5827*t5103;
  t6442 = t6411 + t6441;
  t6537 = -1.*t1558*t1765;
  t6564 = t2560*t2720;
  t6565 = t6537 + t6564;
  t6509 = t6126*t5827*t6082;
  t6510 = t106*t6442;
  t6516 = t6509 + t6510;
  t6524 = 0.000529236*t6516;
  t6566 = t6126*t6565*t6082;
  t6569 = t468*t5827;
  t6578 = t1528*t6565*t5103;
  t6579 = t6569 + t6578;
  t6580 = t106*t6579;
  t6581 = t6566 + t6580;
  t6586 = -0.02973458*t6581;
  t6589 = t6524 + t6586;
  t5831 = t468*t1528*t5827;
  t5833 = -1.*t3068*t5103;
  t5891 = t5831 + t5833;
  t6626 = Sin(var1[3]);
  t3081 = t468*t1528*t3068;
  t5104 = -1.*t5095*t5103;
  t5105 = t3081 + t5104;
  t6611 = Cos(var1[3]);
  t6471 = t468*t5095;
  t6473 = t1528*t3068*t5103;
  t6474 = t6471 + t6473;
  t6409 = t6126*t106*t5827;
  t6454 = -1.*t6082*t6442;
  t6455 = t6409 + t6454;
  t6469 = t6126*t106*t3068;
  t6475 = -1.*t6082*t6474;
  t6477 = t6469 + t6475;
  t6869 = -1.*t468*t1528*t5827;
  t6870 = t3068*t5103;
  t6875 = t6869 + t6870;
  t6905 = t6611*t6875;
  t6906 = -1.*t6626*t6455;
  t6907 = t6905 + t6906;
  t6927 = 0.000529236*t6907;
  t6944 = -1.*t468*t1528*t6565;
  t6946 = t5827*t5103;
  t6947 = t6944 + t6946;
  t6949 = t6611*t6947;
  t6950 = t6126*t106*t6565;
  t6953 = -1.*t6082*t6579;
  t6955 = t6950 + t6953;
  t6957 = -1.*t6626*t6955;
  t6967 = t6949 + t6957;
  t6969 = -0.02973458*t6967;
  t6975 = t6927 + t6969;
  t6664 = -1.*t6126*t5827*t6082;
  t6665 = -1.*t106*t6442;
  t6667 = t6664 + t6665;
  t6678 = -1.*t6126*t3068*t6082;
  t6679 = -1.*t106*t6474;
  t6680 = t6678 + t6679;
  t6727 = -1.*t106*t1528*t5827;
  t6728 = -1.*t6126*t5827*t6082*t5103;
  t6730 = t6727 + t6728;
  t6786 = -1.*t106*t1528*t3068;
  t6791 = -1.*t6126*t3068*t6082*t5103;
  t6793 = t6786 + t6791;
  t6884 = -1.*t468*t1528*t3068;
  t6885 = t5095*t5103;
  t6890 = t6884 + t6885;
  t7168 = t6626*t6875;
  t7169 = t6611*t6455;
  t7170 = t7168 + t7169;
  t7178 = 0.000529236*t7170;
  t7181 = t6626*t6947;
  t7183 = t6611*t6955;
  t7184 = t7181 + t7183;
  t7185 = -0.02973458*t7184;
  t7186 = t7178 + t7185;
  t7355 = -1.*t1765;
  t7358 = 1. + t7355;
  t7360 = -0.21935*t7358;
  t7368 = -0.221546*t1765;
  t7369 = -0.12338*t2720;
  t7370 = t7360 + t7368 + t7369;
  t7381 = -1. + t1765;
  t7387 = 0.25*t7381;
  t7390 = -0.37338*t1765;
  t7391 = 0.002196*t2720;
  t7392 = t7387 + t7390 + t7391;
  t7399 = -1.*t6126;
  t7400 = 1. + t7399;
  t7401 = -0.0875*t7400;
  t7425 = -0.124881*t6126;
  t7428 = -0.21935*t2560;
  t7432 = -1.*t2560*t7370;
  t7436 = t1558*t7392;
  t7439 = t7428 + t7432 + t7436;
  t7440 = -1.*t1528*t7439;
  t7442 = t7401 + t7425 + t7440;
  t7338 = -1.*t1558;
  t7346 = 1. + t7338;
  t7353 = -0.21935*t7346;
  t7372 = t1558*t7370;
  t7394 = t2560*t7392;
  t7397 = t7353 + t7372 + t7394;
  t7524 = -1.*t468*t7442;
  t7531 = -1.*t7397*t5103;
  t7532 = t7524 + t7531;
  t7398 = t468*t7397;
  t7448 = -1.*t7442*t5103;
  t7449 = t7398 + t7448;
  t7564 = -0.037381*t1528;
  t7566 = t6126*t7439;
  t7567 = t7564 + t7566;
  t7540 = t468*t7442;
  t7547 = t7397*t5103;
  t7548 = t7540 + t7547;
  t7493 = t1528*t6082;
  t7501 = -1.*t6126*t106*t5103;
  t7511 = t7493 + t7501;
  t7568 = t7567*t6082;
  t7582 = t106*t7449;
  t7588 = t7568 + t7582;
  t7552 = t106*t1528;
  t7553 = t6126*t6082*t5103;
  t7556 = t7552 + t7553;
  t7591 = t106*t7567;
  t7592 = -1.*t6082*t7449;
  t7602 = t7591 + t7592;
  t7673 = t6126*t3068*t6082;
  t7674 = t106*t6474;
  t7678 = t7673 + t7674;
  t6255 = -1.*t1528*t3068*t6082;
  t6300 = t6126*t106*t3068*t5103;
  t6315 = t6255 + t6300;
  t6084 = -1.*t1528*t5827*t6082;
  t6150 = t6126*t106*t5827*t5103;
  t6210 = t6084 + t6150;
  t7611 = t6126*t468*t7548;
  t7614 = t7511*t7588;
  t7615 = t7556*t7602;
  t7624 = t7611 + t7614 + t7615;
  t7763 = 0.037381*t1528;
  t7765 = -1.*t6126*t7439;
  t7766 = t7763 + t7765;
  t7769 = -0.037381*t6126;
  t7771 = t7769 + t7440;
  t7753 = t6126*t6082;
  t7756 = t106*t1528*t5103;
  t7757 = t7753 + t7756;
  t7772 = t7771*t6082;
  t7773 = -1.*t106*t7766*t5103;
  t7776 = t7772 + t7773;
  t7782 = t106*t7771;
  t7783 = t7766*t6082*t5103;
  t7784 = t7782 + t7783;
  t7644 = -1.*t7548*t6875;
  t7646 = -1.*t7588*t6516;
  t7647 = -1.*t7602*t6455;
  t7665 = t7644 + t7646 + t7647;
  t7695 = -1.*t6126*t468*t7548;
  t7701 = -1.*t7511*t7588;
  t7705 = -1.*t7556*t7602;
  t7706 = t7695 + t7701 + t7705;
  t7762 = Power(t468,2);
  t7787 = t6126*t106;
  t7789 = -1.*t1528*t6082*t5103;
  t7790 = t7787 + t7789;
  t7723 = t7548*t6890;
  t7726 = t7588*t7678;
  t7727 = t7602*t6477;
  t7728 = t7723 + t7726 + t7727;
  t7846 = -1.*t7567*t6082;
  t7847 = -1.*t106*t7449;
  t7848 = t7846 + t7847;
  t7858 = -1.*t1528*t6082;
  t7859 = t6126*t106*t5103;
  t7860 = t7858 + t7859;
  t7966 = -0.21935*t1558;
  t7973 = -1.*t1558*t7370;
  t7974 = -1.*t2560*t7392;
  t7977 = t7966 + t7973 + t7974;
  t7991 = t468*t7439;
  t7992 = t1528*t7977*t5103;
  t7993 = t7991 + t7992;
  t7980 = -1.*t468*t1528*t7977;
  t7983 = t7439*t5103;
  t7985 = t7980 + t7983;
  t7990 = t6126*t7977*t6082;
  t7994 = t106*t7993;
  t7998 = t7990 + t7994;
  t8001 = t6126*t106*t7977;
  t8004 = -1.*t6082*t7993;
  t8007 = t8001 + t8004;
  t7926 = 5.e-6*t6516;
  t7928 = t6516*t7706;
  t8158 = -0.12338*t1765;
  t8159 = t8158 + t7391;
  t8161 = 0.002196*t1765;
  t8162 = 0.12338*t2720;
  t8165 = t8161 + t8162;
  t8160 = -1.*t2560*t8159;
  t8188 = t1558*t8165;
  t8195 = t8160 + t8188;
  t8197 = t1558*t8159;
  t8199 = t2560*t8165;
  t8204 = t8197 + t8199;
  t8216 = t468*t8204;
  t8219 = t1528*t8195*t5103;
  t8220 = t8216 + t8219;
  t8196 = -1.*t468*t1528*t8195;
  t8205 = t8204*t5103;
  t8210 = t8196 + t8205;
  t8043 = t7548*t6875;
  t8045 = t7588*t6516;
  t8046 = t7602*t6455;
  t8213 = t6126*t8195*t6082;
  t8222 = t106*t8220;
  t8224 = t8213 + t8222;
  t8228 = t6126*t106*t8195;
  t8233 = -1.*t6082*t8220;
  t8234 = t8228 + t8233;
  t8115 = t6581*t7624;
  t8130 = -1.*t7548*t6947;
  t8144 = -1.*t7588*t6581;
  t8145 = -1.*t7602*t6955;
  t7767 = t6126*t7762*t7766;
  t7781 = -1.*t468*t1528*t7548;
  t7795 = t6126*t468*t5827*t7548;
  t7796 = -1.*t468*t7766*t6875;
  t7821 = -1.*t6126*t7762*t7766;
  t8363 = Power(t5103,2);
  t7823 = t468*t1528*t7548;
  t7829 = -1.*t6126*t468*t3068*t7548;
  t7830 = t468*t7766*t6890;
  t8337 = t1528*t7567;
  t8343 = -1.*t6126*t5103*t7449;
  t8345 = t8337 + t8343 + t7611;
  t7550 = -1.*t6126*t5103*t7548;
  t7626 = -1.*t7548*t6442;
  t7627 = -1.*t7449*t6875;
  t8406 = -1.*t6126*t7567*t5827;
  t8412 = -1.*t7449*t6442;
  t8416 = t8406 + t8412 + t7644;
  t8422 = -1.*t1528*t7567;
  t8423 = t6126*t5103*t7449;
  t8424 = t8422 + t8423 + t7695;
  t7689 = t6126*t5103*t7548;
  t8445 = t6126*t7567*t3068;
  t8446 = t7449*t6474;
  t8448 = t8445 + t7723 + t8446;
  t7710 = t7449*t6890;
  t7713 = t7548*t6474;
  t7987 = -1.*t6126*t468*t7985;
  t8042 = t7985*t6890;
  t8120 = t6126*t468*t7985;
  t8495 = Power(t6126,2);
  t8132 = -1.*t7985*t6875;
  t8487 = 5.e-6*t6875;
  t8493 = t6875*t8424;
  t8212 = -1.*t6126*t468*t8210;
  t8494 = t6126*t7567*t5827;
  t8497 = t7449*t6442;
  t8246 = t8210*t6890;
  t8515 = t6947*t8345;
  t8275 = t6126*t468*t8210;
  t8517 = -1.*t6126*t7567*t6565;
  t8291 = -1.*t8210*t6875;
  t8520 = -1.*t7449*t6579;
  t8431 = -1.*t6126*t7567;
  t8432 = -1.*t1528*t7771;
  t8439 = -1.*t1528*t7567*t3068;
  t8440 = t6126*t7771*t3068;
  t8352 = t6126*t7567;
  t8356 = t1528*t7771;
  t8384 = t1528*t7567*t5827;
  t8385 = -1.*t6126*t7771*t5827;
  t8618 = -1.*t6126*t7442;
  t8619 = t8422 + t8618;
  t8496 = t8495*t7977*t3068;
  t8643 = t6126*t7442;
  t8644 = t8337 + t8643;
  t8516 = -1.*t8495*t7977*t5827;
  t8694 = Power(t1528,2);
  t8675 = 5.e-6*t6126*t5827;
  t8681 = t6126*t8619*t5827;
  t8682 = -1.*t1528*t7442*t5827;
  t8701 = t7397*t3068;
  t8541 = t8495*t8195*t3068;
  t8713 = t6126*t8644*t6565;
  t8717 = -1.*t7397*t5827;
  t8558 = -1.*t8495*t8195*t5827;
  t8720 = t1528*t7442*t6565;
  t8781 = -0.000019783370916*t5827;
  t8783 = 5.e-6*t3068;
  t8784 = 0.124881*t3068;
  t8787 = 0.0875*t6565;
  t8788 = t8784 + t8787;
  t8789 = -0.02973458*t8788;
  t8792 = t8781 + t8783 + t8789;
  p_output1[0]=var2[14]*(-0.5*(-0.02973458*t6455 + 0.000529236*t6477)*var2[4] - 0.5*(0.000529236*t106*t5105 - 0.02973458*t106*t5891)*var2[5] - 0.5*(-0.02973458*t6210 + 0.000529236*t6315)*var2[12] - 0.5*t6589*var2[13] - 0.5*t6589*var2[14]);
  p_output1[1]=var2[14]*(-0.5*(-0.02973458*(-1.*t6455*t6611 - 1.*t6626*t6875) + 0.000529236*(-1.*t6477*t6611 - 1.*t6626*t6890))*var2[3] - 0.5*(0.02973458*t6626*t6667 - 0.000529236*t6626*t6680)*var2[4] - 0.5*(0.000529236*(t6474*t6611 + t5105*t6082*t6626) - 0.02973458*(t6442*t6611 + t5891*t6082*t6626))*var2[5] - 0.5*(-0.02973458*(-1.*t468*t5827*t6126*t6611 - 1.*t6626*t6730) + 0.000529236*(-1.*t3068*t468*t6126*t6611 - 1.*t6626*t6793))*var2[12] - 0.5*t6975*var2[13] - 0.5*t6975*var2[14]);
  p_output1[2]=var2[14]*(-0.5*(0.000529236*(-1.*t6477*t6626 + t6611*t6890) - 0.02973458*t6907)*var2[3] - 0.5*(-0.02973458*t6611*t6667 + 0.000529236*t6611*t6680)*var2[4] - 0.5*(-0.02973458*(-1.*t5891*t6082*t6611 + t6442*t6626) + 0.000529236*(-1.*t5105*t6082*t6611 + t6474*t6626))*var2[5] - 0.5*(-0.02973458*(-1.*t468*t5827*t6126*t6626 + t6611*t6730) + 0.000529236*(-1.*t3068*t468*t6126*t6626 + t6611*t6793))*var2[12] - 0.5*t7186*var2[13] - 0.5*t7186*var2[14]);
  p_output1[3]=var2[14]*(-0.5*(5.e-6*t6477 + 0.006197*t7556 - 0.02973458*(t6477*t7706 + t7556*t7728 + t7511*(t6477*t7588 + t6680*t7602 + t7602*t7678 + t6477*t7848) + t7678*(-1.*t7556*t7588 - 1.*t7511*t7602 - 1.*t7556*t7848 - 1.*t7602*t7860)) + 0.000529236*(t6455*t7624 + t7556*t7665 + t7511*(-1.*t6455*t7588 - 1.*t6516*t7602 - 1.*t6667*t7602 - 1.*t6455*t7848) + t6516*(t7556*t7588 + t7511*t7602 + t7556*t7848 + t7602*t7860)))*var2[4] - 0.5*(5.e-6*t106*t5105 - 0.006197*t106*t468*t6126 + 0.000529236*(t6516*(t468*t6126*t7449 + t106*t7511*t7532 + t7550 - 1.*t6082*t7532*t7556 - 1.*t106*t468*t6126*t7588 + t468*t6082*t6126*t7602) + t106*t5891*t7624 + t7511*(t6082*t6455*t7532 - 1.*t106*t6516*t7532 - 1.*t106*t5891*t7588 + t5891*t6082*t7602 + t7626 + t7627) - 1.*t106*t468*t6126*t7665) - 0.02973458*(t7678*(-1.*t468*t6126*t7449 - 1.*t106*t7511*t7532 + t6082*t7532*t7556 + t106*t468*t6126*t7588 - 1.*t468*t6082*t6126*t7602 + t7689) + t106*t5105*t7706 + t7511*(-1.*t6082*t6477*t7532 + t106*t5105*t7588 - 1.*t5105*t6082*t7602 + t106*t7532*t7678 + t7710 + t7713) - 1.*t106*t468*t6126*t7728))*var2[5] - 0.5*(5.e-6*t6315 + 0.006197*t7757 + 0.000529236*(t6210*t7624 + t7665*t7757 + t6516*(t7588*t7757 + t7767 + t7511*t7776 + t7781 + t7556*t7784 + t7602*t7790) + t7511*(-1.*t6210*t7588 - 1.*t6730*t7602 - 1.*t6516*t7776 - 1.*t6455*t7784 + t7795 + t7796)) - 0.02973458*(t6315*t7706 + t7728*t7757 + t7678*(-1.*t7588*t7757 - 1.*t7511*t7776 - 1.*t7556*t7784 - 1.*t7602*t7790 + t7821 + t7823) + t7511*(t6315*t7588 + t6793*t7602 + t7678*t7776 + t6477*t7784 + t7829 + t7830)))*var2[12] - 0.5*(t7926 - 0.02973458*(t7928 + t7678*(t7987 - 1.*t7511*t7998 - 1.*t7556*t8007) + t7511*(t7678*t7998 + t6477*t8007 + t8042 + t8043 + t8045 + t8046)) + 0.000529236*(t8115 + t6516*(t7511*t7998 + t7556*t8007 + t8120) + t7511*(-1.*t6516*t7998 - 1.*t6455*t8007 + t8130 + t8132 + t8144 + t8145)))*var2[13] - 0.5*(t7926 - 0.02973458*(t7928 + t7678*(t8212 - 1.*t7511*t8224 - 1.*t7556*t8234) + t7511*(t8043 + t8045 + t8046 + t7678*t8224 + t6477*t8234 + t8246)) + 0.000529236*(t8115 + t6516*(t7511*t8224 + t7556*t8234 + t8275) + t7511*(t8130 + t8144 + t8145 - 1.*t6516*t8224 - 1.*t6455*t8234 + t8291)))*var2[14]);
  p_output1[4]=var2[14]*(-0.5*(-0.006197*t5103*t6126 + 5.e-6*t6474 + 0.000529236*(t6875*(-1.*t5103*t6126*t7532 + t7550) + t468*t6126*(-1.*t5891*t7449 - 1.*t6442*t7532 + t7626 + t7627) + t6442*t8345 - 1.*t5103*t6126*t8416) - 0.02973458*(t6890*(t5103*t6126*t7532 + t7689) + t468*t6126*(t5105*t7449 + t6474*t7532 + t7710 + t7713) + t6474*t8424 - 1.*t5103*t6126*t8448))*var2[5] - 0.5*(-0.006197*t1528*t468 - 5.e-6*t3068*t468*t6126 + 0.000529236*(-1.*t468*t5827*t6126*t8345 + t6875*(t1528*t5103*t7449 + t7767 + t7781 + t8352 + t8356 + t6126*t7766*t8363) + t468*t6126*(-1.*t5103*t5827*t6126*t7449 + t5103*t6442*t7766 + t7795 + t7796 + t8384 + t8385) - 1.*t1528*t468*t8416) - 0.02973458*(-1.*t3068*t468*t6126*t8424 + t6890*(-1.*t1528*t5103*t7449 + t7821 + t7823 - 1.*t6126*t7766*t8363 + t8431 + t8432) + t468*t6126*(t3068*t5103*t6126*t7449 - 1.*t5103*t6474*t7766 + t7829 + t7830 + t8439 + t8440) - 1.*t1528*t468*t8448))*var2[12] - 0.5*(t8487 - 0.02973458*(t6890*(-1.*t1528*t6126*t7977 + t7987 + t5103*t6126*t7993) + t8493 + t468*t6126*(t6474*t7993 + t8042 + t8043 + t8494 + t8496 + t8497)) + 0.000529236*(t6875*(t1528*t6126*t7977 - 1.*t5103*t6126*t7993 + t8120) + t8515 + t468*t6126*(-1.*t6442*t7993 + t8130 + t8132 + t8516 + t8517 + t8520)))*var2[13] - 0.5*(t8487 - 0.02973458*(t6890*(-1.*t1528*t6126*t8195 + t8212 + t5103*t6126*t8220) + t8493 + t468*t6126*(t8043 + t6474*t8220 + t8246 + t8494 + t8497 + t8541)) + 0.000529236*(t6875*(t1528*t6126*t8195 - 1.*t5103*t6126*t8220 + t8275) + t8515 + t468*t6126*(t8130 - 1.*t6442*t8220 + t8291 + t8517 + t8520 + t8558)))*var2[14]);
  p_output1[5]=var2[14]*(-0.5*(-5.e-6*t1528*t3068 + 0.006197*t6126 - 0.02973458*(t3068*t6126*(t1528*t7442 - 1.*t6126*t7766 + t8431 + t8432) + t1528*(-1.*t3068*t6126*t7442 - 1.*t1528*t3068*t7766 + t8439 + t8440) + t6126*(t5095*t7397 - 1.*t1528*t3068*t7442 + t8445) - 1.*t1528*t3068*t8619) + 0.000529236*(t5827*t6126*(-1.*t1528*t7442 + t6126*t7766 + t8352 + t8356) + t1528*(t5827*t6126*t7442 + t1528*t5827*t7766 + t8384 + t8385) + t6126*(-1.*t3068*t7397 + t1528*t5827*t7442 + t8406) - 1.*t1528*t5827*t8644))*var2[12] - 0.5*(t8675 - 0.02973458*(t8681 + t1528*(t5095*t7439 + t8494 + t8496 + t8682 + t3068*t7977*t8694 + t8701)) + 0.000529236*(t8713 + t1528*(-1.*t3068*t7439 + t8516 + t8517 - 1.*t5827*t7977*t8694 + t8717 + t8720)))*var2[13] - 0.5*(t8675 - 0.02973458*(t8681 + t1528*(t5095*t8204 + t8494 + t8541 + t8682 + t3068*t8195*t8694 + t8701)) + 0.000529236*(t8713 + t1528*(-1.*t3068*t8204 + t8517 + t8558 - 1.*t5827*t8195*t8694 + t8717 + t8720)))*var2[14]);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=var2[14]*(-0.5*t8792*var2[13] - 0.5*t8792*var2[14]);
  p_output1[13]=-0.5*(-0.02973458*(0.21935*t1765 + t1765*t7370 - 1.*t2720*t7392 + t2720*t8159 + t1765*t8165) + 0.000529236*(0.21935*t2720 + t2720*t7370 + t1765*t7392 - 1.*t1765*t8159 + t2720*t8165))*Power(var2[14],2);
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

#include "Ce1_vec15_laikago_description.hh"

namespace SymFunction
{

void Ce1_vec15_laikago_description_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
