/*
 * Automatically Generated from Mathematica.
 * Fri 21 Dec 2018 15:11:45 GMT-05:00
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
  double t386;
  double t392;
  double t699;
  double t1204;
  double t1679;
  double t1798;
  double t1921;
  double t109;
  double t228;
  double t248;
  double t2105;
  double t3100;
  double t3142;
  double t3165;
  double t2463;
  double t2103;
  double t2857;
  double t2871;
  double t3079;
  double t3166;
  double t3279;
  double t3306;
  double t3326;
  double t3327;
  double t3839;
  double t3840;
  double t3860;
  double t3967;
  double t5895;
  double t5955;
  double t5992;
  double t5411;
  double t5427;
  double t5431;
  double t5520;
  double t5639;
  double t5993;
  double t6051;
  double t6202;
  double t6209;
  double t6218;
  double t6237;
  double t6240;
  double t6402;
  double t4188;
  double t4471;
  double t4496;
  double t4823;
  double t4835;
  double t4910;
  double t6874;
  double t6891;
  double t6893;
  double t6897;
  double t6900;
  double t6945;
  double t6952;
  double t6953;
  double t6954;
  double t7043;
  double t3691;
  double t4002;
  double t4020;
  double t4537;
  double t5119;
  double t5265;
  double t7086;
  double t7087;
  double t7096;
  double t7465;
  double t7469;
  double t7477;
  double t7581;
  double t7582;
  double t7591;
  double t7613;
  double t7614;
  double t7616;
  double t7618;
  double t7627;
  double t7630;
  double t7634;
  double t7637;
  double t7640;
  double t6553;
  double t6735;
  double t6736;
  double t6748;
  double t6750;
  double t6751;
  double t7717;
  double t7726;
  double t7727;
  double t7728;
  double t7730;
  double t7731;
  double t7732;
  double t7740;
  double t7741;
  double t7300;
  double t7427;
  double t7428;
  double t8054;
  double t8055;
  double t8067;
  double t8069;
  double t8082;
  double t8086;
  double t8100;
  double t8102;
  double t8129;
  double t8318;
  double t8322;
  double t8259;
  double t8351;
  double t8356;
  double t8359;
  double t8385;
  double t8411;
  double t8450;
  double t8459;
  double t8462;
  double t8464;
  double t8471;
  double t8475;
  double t8521;
  double t8522;
  double t8526;
  double t8240;
  double t8484;
  double t8512;
  double t8607;
  double t8647;
  double t8648;
  double t8649;
  double t8650;
  double t8652;
  double t8689;
  double t8691;
  double t8697;
  double t8711;
  double t8712;
  double t8668;
  double t8669;
  double t8679;
  double t8735;
  double t8736;
  double t8742;
  double t8743;
  double t8773;
  double t8774;
  double t8778;
  double t8780;
  double t8789;
  double t8798;
  double t8801;
  double t8803;
  double t8162;
  double t8230;
  double t8239;
  double t8688;
  double t8715;
  double t8716;
  double t8790;
  double t8810;
  double t8817;
  double t8827;
  double t8830;
  double t8832;
  double t8514;
  double t8542;
  double t8547;
  double t8567;
  double t8662;
  double t8930;
  double t8933;
  double t8937;
  double t9119;
  double t9121;
  double t9122;
  double t8723;
  double t8825;
  double t8833;
  double t8849;
  double t8853;
  double t8855;
  double t8860;
  double t8862;
  double t8864;
  double t8867;
  double t8868;
  double t8892;
  double t8897;
  double t8902;
  double t8904;
  double t8915;
  double t8965;
  double t8967;
  double t8983;
  double t9002;
  double t9007;
  double t9016;
  double t9018;
  double t9021;
  double t9030;
  double t9041;
  double t9044;
  double t9065;
  double t9070;
  double t9073;
  double t9075;
  double t9077;
  double t9253;
  double t9257;
  double t9259;
  double t9621;
  double t9637;
  double t9638;
  double t9641;
  double t9657;
  double t9658;
  double t9668;
  double t9644;
  double t9649;
  double t9650;
  double t9654;
  double t9669;
  double t9676;
  double t9694;
  double t9695;
  double t9696;
  double t9528;
  double t9876;
  double t9891;
  double t9892;
  double t9896;
  double t9908;
  double t9912;
  double t9918;
  double t9926;
  double t9954;
  double t9956;
  double t9963;
  double t9965;
  double t9966;
  double t9967;
  double t9706;
  double t9927;
  double t9940;
  double t9942;
  double t9709;
  double t9711;
  double t9964;
  double t9972;
  double t9987;
  double t10008;
  double t10025;
  double t10032;
  double t9740;
  double t9813;
  double t9835;
  double t9851;
  double t8548;
  double t8865;
  double t8945;
  double t9036;
  double t10194;
  double t10196;
  double t10197;
  double t10198;
  double t9116;
  double t10206;
  double t10209;
  double t10211;
  double t10212;
  double t9164;
  double t10216;
  double t10221;
  double t10223;
  double t10227;
  double t10232;
  double t9197;
  double t10248;
  double t10251;
  double t10275;
  double t10277;
  double t9211;
  double t10288;
  double t9651;
  double t9707;
  double t9755;
  double t9806;
  double t10381;
  double t9949;
  double t10387;
  double t10389;
  double t10059;
  double t10404;
  double t10084;
  double t10408;
  double t10135;
  double t10412;
  double t10477;
  double t10478;
  double t10480;
  double t10481;
  double t10483;
  double t10484;
  double t10485;
  double t10486;
  double t10491;
  double t10539;
  double t10540;
  double t10541;
  double t10542;
  double t10544;
  double t10545;
  t386 = Cos(var1[11]);
  t392 = Sin(var1[10]);
  t699 = -1.*t386*t392;
  t1204 = Cos(var1[10]);
  t1679 = Sin(var1[11]);
  t1798 = -1.*t1204*t1679;
  t1921 = t699 + t1798;
  t109 = Cos(var1[4]);
  t228 = Cos(var1[9]);
  t248 = Cos(var1[5]);
  t2105 = Sin(var1[9]);
  t3100 = t1204*t386;
  t3142 = -1.*t392*t1679;
  t3165 = t3100 + t3142;
  t2463 = Sin(var1[5]);
  t2103 = -1.*t228*t248*t1921;
  t2857 = t2105*t1921*t2463;
  t2871 = t2103 + t2857;
  t3079 = -0.03856*t109*t2871;
  t3166 = -1.*t228*t248*t3165;
  t3279 = t2105*t3165*t2463;
  t3306 = t3166 + t3279;
  t3326 = 0.00482*t109*t3306;
  t3327 = t3079 + t3326;
  t3839 = Sin(var1[4]);
  t3840 = -1.*t248*t2105*t1921;
  t3860 = -1.*t228*t1921*t2463;
  t3967 = t3840 + t3860;
  t5895 = -1.*t1204*t386;
  t5955 = t392*t1679;
  t5992 = t5895 + t5955;
  t5411 = t3165*t3839;
  t5427 = t109*t3967;
  t5431 = t5411 + t5427;
  t5520 = 0.00482*t5431;
  t5639 = t1921*t3839;
  t5993 = -1.*t248*t2105*t5992;
  t6051 = -1.*t228*t5992*t2463;
  t6202 = t5993 + t6051;
  t6209 = t109*t6202;
  t6218 = t5639 + t6209;
  t6237 = -0.03856*t6218;
  t6240 = t5520 + t6237;
  t6402 = Sin(var1[3]);
  t4188 = t386*t392;
  t4471 = t1204*t1679;
  t4496 = t4188 + t4471;
  t4823 = -1.*t248*t2105*t3165;
  t4835 = -1.*t228*t3165*t2463;
  t4910 = t4823 + t4835;
  t6874 = Cos(var1[3]);
  t6891 = t6874*t3967;
  t6893 = t6402*t3839*t2871;
  t6897 = t6891 + t6893;
  t6900 = -0.03856*t6897;
  t6945 = t6874*t4910;
  t6952 = t6402*t3839*t3306;
  t6953 = t6945 + t6952;
  t6954 = 0.00482*t6953;
  t7043 = t6900 + t6954;
  t3691 = t109*t3165;
  t4002 = -1.*t3839*t3967;
  t4020 = t3691 + t4002;
  t4537 = t109*t4496;
  t5119 = -1.*t3839*t4910;
  t5265 = t4537 + t5119;
  t7086 = t228*t248*t1921;
  t7087 = -1.*t2105*t1921*t2463;
  t7096 = t7086 + t7087;
  t7465 = t6874*t7096;
  t7469 = -1.*t6402*t4020;
  t7477 = t7465 + t7469;
  t7581 = 0.00482*t7477;
  t7582 = t228*t248*t5992;
  t7591 = -1.*t2105*t5992*t2463;
  t7613 = t7582 + t7591;
  t7614 = t6874*t7613;
  t7616 = t109*t1921;
  t7618 = -1.*t3839*t6202;
  t7627 = t7616 + t7618;
  t7630 = -1.*t6402*t7627;
  t7634 = t7614 + t7630;
  t7637 = -0.03856*t7634;
  t7640 = t7581 + t7637;
  t6553 = -1.*t3165*t3839;
  t6735 = -1.*t109*t3967;
  t6736 = t6553 + t6735;
  t6748 = -1.*t4496*t3839;
  t6750 = -1.*t109*t4910;
  t6751 = t6748 + t6750;
  t7717 = t6402*t3967;
  t7726 = -1.*t6874*t3839*t2871;
  t7727 = t7717 + t7726;
  t7728 = -0.03856*t7727;
  t7730 = t6402*t4910;
  t7731 = -1.*t6874*t3839*t3306;
  t7732 = t7730 + t7731;
  t7740 = 0.00482*t7732;
  t7741 = t7728 + t7740;
  t7300 = t228*t248*t3165;
  t7427 = -1.*t2105*t3165*t2463;
  t7428 = t7300 + t7427;
  t8054 = t6402*t7096;
  t8055 = t6874*t4020;
  t8067 = t8054 + t8055;
  t8069 = 0.00482*t8067;
  t8082 = t6402*t7613;
  t8086 = t6874*t7627;
  t8100 = t8082 + t8086;
  t8102 = -0.03856*t8100;
  t8129 = t8069 + t8102;
  t8318 = -1.*t386;
  t8322 = 1. + t8318;
  t8259 = 0.242889*t392;
  t8351 = 0.100689*t8322;
  t8356 = 0.080689*t386;
  t8359 = -0.16*t1679;
  t8385 = t8351 + t8356 + t8359;
  t8411 = -1.*t392*t8385;
  t8450 = -0.20833*t8322;
  t8459 = -0.36833*t386;
  t8462 = 0.02*t1679;
  t8464 = t8450 + t8459 + t8462;
  t8471 = t1204*t8464;
  t8475 = t8259 + t8411 + t8471;
  t8521 = -0.035165*t2105;
  t8522 = -1.*t228*t8475;
  t8526 = t8521 + t8522;
  t8240 = 0.035165*t228;
  t8484 = -1.*t2105*t8475;
  t8512 = t8240 + t8484;
  t8607 = t228*t248;
  t8647 = -1.*t2105*t2463;
  t8648 = t8607 + t8647;
  t8649 = t248*t8526;
  t8650 = -1.*t8512*t2463;
  t8652 = t8649 + t8650;
  t8689 = -1.*t228;
  t8691 = 1. + t8689;
  t8697 = 0.081715*t8691;
  t8711 = 0.11688*t228;
  t8712 = t8697 + t8711 + t8484;
  t8668 = 0.035165*t2105;
  t8669 = t228*t8475;
  t8679 = t8668 + t8669;
  t8735 = -1.*t248*t2105;
  t8736 = -1.*t228*t2463;
  t8742 = t8735 + t8736;
  t8743 = -1.*t1204;
  t8773 = 1. + t8743;
  t8774 = 0.242889*t8773;
  t8778 = t1204*t8385;
  t8780 = t392*t8464;
  t8789 = t8774 + t8778 + t8780;
  t8798 = t248*t8712;
  t8801 = -1.*t8679*t2463;
  t8803 = t8798 + t8801;
  t8162 = t248*t2105;
  t8230 = t228*t2463;
  t8239 = t8162 + t8230;
  t8688 = t248*t8679;
  t8715 = t8712*t2463;
  t8716 = t8688 + t8715;
  t8790 = t8789*t3839;
  t8810 = t109*t8803;
  t8817 = t8790 + t8810;
  t8827 = t109*t8789;
  t8830 = -1.*t3839*t8803;
  t8832 = t8827 + t8830;
  t8514 = t248*t8512;
  t8542 = t8526*t2463;
  t8547 = t8514 + t8542;
  t8567 = Power(t109,2);
  t8662 = Power(t3839,2);
  t8930 = t4496*t3839;
  t8933 = t109*t4910;
  t8937 = t8930 + t8933;
  t9119 = -1.*t248*t8679;
  t9121 = -1.*t8712*t2463;
  t9122 = t9119 + t9121;
  t8723 = t8648*t8716;
  t8825 = t109*t8742*t8817;
  t8833 = -1.*t3839*t8742*t8832;
  t8849 = t8239*t8716;
  t8853 = t109*t8648*t8817;
  t8855 = -1.*t3839*t8648*t8832;
  t8860 = t8849 + t8853 + t8855;
  t8862 = t109*t2871*t8860;
  t8864 = -1.*t8716*t3967;
  t8867 = -1.*t109*t2871*t8817;
  t8868 = t3839*t2871*t8832;
  t8892 = -1.*t8716*t7096;
  t8897 = -1.*t8817*t5431;
  t8902 = -1.*t8832*t4020;
  t8904 = t8892 + t8897 + t8902;
  t8915 = t109*t8742*t8904;
  t8965 = -1.*t8648*t8716;
  t8967 = -1.*t109*t8742*t8817;
  t8983 = t3839*t8742*t8832;
  t9002 = -1.*t8239*t8716;
  t9007 = -1.*t109*t8648*t8817;
  t9016 = t3839*t8648*t8832;
  t9018 = t9002 + t9007 + t9016;
  t9021 = t109*t3306*t9018;
  t9030 = t8716*t4910;
  t9041 = t109*t3306*t8817;
  t9044 = -1.*t3839*t3306*t8832;
  t9065 = t8716*t7428;
  t9070 = t8817*t8937;
  t9073 = t8832*t5265;
  t9075 = t9065 + t9070 + t9073;
  t9077 = t109*t8742*t9075;
  t9253 = -1.*t8789*t3839;
  t9257 = -1.*t109*t8803;
  t9259 = t9253 + t9257;
  t9621 = 0.242889*t1204;
  t9637 = -1.*t1204*t8385;
  t9638 = -1.*t392*t8464;
  t9641 = t9621 + t9637 + t9638;
  t9657 = -1.*t248*t2105*t9641;
  t9658 = -1.*t228*t9641*t2463;
  t9668 = t9657 + t9658;
  t9644 = t228*t248*t9641;
  t9649 = -1.*t2105*t9641*t2463;
  t9650 = t9644 + t9649;
  t9654 = t8475*t3839;
  t9669 = t109*t9668;
  t9676 = t9654 + t9669;
  t9694 = t109*t8475;
  t9695 = -1.*t3839*t9668;
  t9696 = t9694 + t9695;
  t9528 = t5431*t9018;
  t9876 = -0.16*t386;
  t9891 = t9876 + t8462;
  t9892 = -1.*t392*t9891;
  t9896 = 0.02*t386;
  t9908 = 0.16*t1679;
  t9912 = t9896 + t9908;
  t9918 = t1204*t9912;
  t9926 = t9892 + t9918;
  t9954 = t1204*t9891;
  t9956 = t392*t9912;
  t9963 = t9954 + t9956;
  t9965 = -1.*t248*t2105*t9926;
  t9966 = -1.*t228*t9926*t2463;
  t9967 = t9965 + t9966;
  t9706 = t8716*t7096;
  t9927 = t228*t248*t9926;
  t9940 = -1.*t2105*t9926*t2463;
  t9942 = t9927 + t9940;
  t9709 = t8817*t5431;
  t9711 = t8832*t4020;
  t9964 = t9963*t3839;
  t9972 = t109*t9967;
  t9987 = t9964 + t9972;
  t10008 = t109*t9963;
  t10025 = -1.*t3839*t9967;
  t10032 = t10008 + t10025;
  t9740 = t6218*t8860;
  t9813 = -1.*t8716*t7613;
  t9835 = -1.*t8817*t6218;
  t9851 = -1.*t8832*t7627;
  t8548 = t8239*t8547;
  t8865 = -1.*t8547*t7096;
  t8945 = -1.*t8239*t8547;
  t9036 = t8547*t7428;
  t10194 = t8648*t8803;
  t10196 = t10194 + t8849;
  t10197 = t3967*t10196;
  t10198 = t8742*t8803;
  t9116 = t8239*t8803;
  t10206 = -1.*t8789*t3165;
  t10209 = -1.*t8803*t3967;
  t10211 = t10206 + t10209 + t8892;
  t10212 = t8648*t10211;
  t9164 = -1.*t8803*t7096;
  t10216 = -1.*t8803*t2871;
  t10221 = -1.*t8648*t8803;
  t10223 = t10221 + t9002;
  t10227 = t4910*t10223;
  t10232 = -1.*t8742*t8803;
  t9197 = -1.*t8239*t8803;
  t10248 = t8789*t4496;
  t10251 = t8803*t4910;
  t10275 = t10248 + t10251 + t9065;
  t10277 = t8648*t10275;
  t9211 = t8803*t7428;
  t10288 = t8803*t3306;
  t9651 = -1.*t8239*t9650;
  t9707 = t9650*t7428;
  t9755 = t8239*t9650;
  t9806 = -1.*t9650*t7096;
  t10381 = t7096*t10223;
  t9949 = -1.*t8239*t9942;
  t10387 = t8789*t3165;
  t10389 = t8803*t3967;
  t10059 = t9942*t7428;
  t10404 = t7613*t10196;
  t10084 = t8239*t9942;
  t10408 = -1.*t8789*t1921;
  t10135 = -1.*t9942*t7096;
  t10412 = -1.*t8803*t6202;
  t10477 = t2105*t8679;
  t10478 = t228*t8712;
  t10480 = t10477 + t10478;
  t10481 = 0.00482*t10480*t1921;
  t10483 = -1.*t2105*t8679;
  t10484 = -1.*t228*t8712;
  t10485 = t10483 + t10484;
  t10486 = -0.03856*t10485*t3165;
  t10491 = t10481 + t10486;
  t10539 = 0.0001694953*t1921;
  t10540 = -0.11688*t3165;
  t10541 = -0.081715*t5992;
  t10542 = t10540 + t10541;
  t10544 = -0.03856*t10542;
  t10545 = t10539 + t10544;
  p_output1[0]=var2[11]*(-0.5*(-0.03856*t4020 + 0.00482*t5265)*var2[4] - 0.5*t3327*var2[5] - 0.5*t3327*var2[9] - 0.5*t6240*var2[10] - 0.5*t6240*var2[11]);
  p_output1[1]=var2[11]*(-0.5*(-0.03856*(-1.*t4020*t6874 - 1.*t6402*t7096) + 0.00482*(-1.*t5265*t6874 - 1.*t6402*t7428))*var2[3] - 0.5*(0.03856*t6402*t6736 - 0.00482*t6402*t6751)*var2[4] - 0.5*t7043*var2[5] - 0.5*t7043*var2[9] - 0.5*t7640*var2[10] - 0.5*t7640*var2[11]);
  p_output1[2]=var2[11]*(-0.5*(0.00482*(-1.*t5265*t6402 + t6874*t7428) - 0.03856*t7477)*var2[3] - 0.5*(-0.03856*t6736*t6874 + 0.00482*t6751*t6874)*var2[4] - 0.5*t7741*var2[5] - 0.5*t7741*var2[9] - 0.5*t8129*var2[10] - 0.5*t8129*var2[11]);
  p_output1[3]=var2[11]*(-0.5*(0.00482*(t4020*t8860 - 1.*t3839*t8648*t8904 + t109*t8648*(-1.*t4020*t8817 - 1.*t5431*t8832 - 1.*t6736*t8832 - 1.*t4020*t9259) + t5431*(-1.*t3839*t8648*t8817 - 1.*t3839*t8648*t9259)) - 0.03856*(t5265*t9018 - 1.*t3839*t8648*t9075 + t109*t8648*(t5265*t8817 + t6751*t8832 + t8832*t8937 + t5265*t9259) + t8937*(t3839*t8648*t8817 + t3839*t8648*t9259)))*var2[4] - 0.5*(0.00482*(t8862 + t8915 + t5431*(t8723 + t8825 + t8833 + t9116 + t8567*t8648*t9122 + t8648*t8662*t9122) + t109*t8648*(t8864 + t8867 + t8868 + t3839*t4020*t9122 - 1.*t109*t5431*t9122 + t9164)) - 0.03856*(t9021 + t9077 + t8937*(t8965 + t8967 + t8983 - 1.*t8567*t8648*t9122 - 1.*t8648*t8662*t9122 + t9197) + t109*t8648*(t9030 + t9041 + t9044 - 1.*t3839*t5265*t9122 + t109*t8937*t9122 + t9211)))*var2[5] - 0.5*(0.00482*(t5431*(t8548 + t8567*t8648*t8652 + t8648*t8652*t8662 + t8723 + t8825 + t8833) + t8862 + t109*t8648*(t3839*t4020*t8652 - 1.*t109*t5431*t8652 + t8864 + t8865 + t8867 + t8868) + t8915) - 0.03856*(t8937*(-1.*t8567*t8648*t8652 - 1.*t8648*t8652*t8662 + t8945 + t8965 + t8967 + t8983) + t9021 + t109*t8648*(-1.*t3839*t5265*t8652 + t109*t8652*t8937 + t9030 + t9036 + t9041 + t9044) + t9077))*var2[9] - 0.5*(-0.03856*(t9528 + t8937*(t9651 - 1.*t109*t8648*t9676 + t3839*t8648*t9696) + t109*t8648*(t8937*t9676 + t5265*t9696 + t9706 + t9707 + t9709 + t9711)) + 0.00482*(t9740 + t5431*(t109*t8648*t9676 - 1.*t3839*t8648*t9696 + t9755) + t109*t8648*(-1.*t5431*t9676 - 1.*t4020*t9696 + t9806 + t9813 + t9835 + t9851)))*var2[10] - 0.5*(0.00482*(t9740 + t109*t8648*(t10135 - 1.*t10032*t4020 + t9813 + t9835 + t9851 - 1.*t5431*t9987) + t5431*(t10084 - 1.*t10032*t3839*t8648 + t109*t8648*t9987)) - 0.03856*(t9528 + t8937*(t10032*t3839*t8648 + t9949 - 1.*t109*t8648*t9987) + t109*t8648*(t10059 + t10032*t5265 + t9706 + t9709 + t9711 + t8937*t9987)))*var2[11]);
  p_output1[4]=var2[11]*(-0.5*(0.00482*(t10197 + t10212 + t7096*(t10198 + t8723 + t9116 + t8648*t9122) + t8239*(t10216 + t8864 - 1.*t3967*t9122 + t9164)) - 0.03856*(t10227 + t10277 + t7428*(t10232 + t8965 - 1.*t8648*t9122 + t9197) + t8239*(t10288 + t9030 + t4910*t9122 + t9211)))*var2[5] - 0.5*(0.00482*(t10197 + t10212 + t7096*(t10198 + t8548 + t8648*t8652 + t8723) + t8239*(t10216 - 1.*t3967*t8652 + t8864 + t8865)) - 0.03856*(t10227 + t10277 + t7428*(t10232 - 1.*t8648*t8652 + t8945 + t8965) + t8239*(t10288 + t4910*t8652 + t9030 + t9036)))*var2[9] - 0.5*(-0.03856*(t10381 + t7428*(t9651 - 1.*t8648*t9668) + t8239*(t10387 + t10389 + t4496*t8475 + t4910*t9668 + t9706 + t9707)) + 0.00482*(t10404 + t7096*(t8648*t9668 + t9755) + t8239*(t10408 + t10412 - 1.*t3165*t8475 - 1.*t3967*t9668 + t9806 + t9813)))*var2[10] - 0.5*(-0.03856*(t10381 + t8239*(t10059 + t10387 + t10389 + t9706 + t4496*t9963 + t4910*t9967) + t7428*(t9949 - 1.*t8648*t9967)) + 0.00482*(t10404 + t8239*(t10135 + t10408 + t10412 + t9813 - 1.*t3165*t9963 - 1.*t3967*t9967) + t7096*(t10084 + t8648*t9967)))*var2[11]);
  p_output1[5]=var2[11]*(-0.5*(0.00482*t3165*(t2105*t8512 + t228*t8526 + t228*t8679 - 1.*t2105*t8712) - 0.03856*t4496*(-1.*t2105*t8512 - 1.*t228*t8526 - 1.*t228*t8679 + t2105*t8712))*var2[9] - 0.5*t10491*var2[10] - 0.5*t10491*var2[11]);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=var2[11]*(-0.5*t10545*var2[10] - 0.5*t10545*var2[11]);
  p_output1[10]=-0.5*(0.00482*(-0.242889*t1679 + t1679*t8385 + t386*t8464 - 1.*t386*t9891 + t1679*t9912) - 0.03856*(-0.242889*t386 + t386*t8385 - 1.*t1679*t8464 + t1679*t9891 + t386*t9912))*Power(var2[11],2);
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
