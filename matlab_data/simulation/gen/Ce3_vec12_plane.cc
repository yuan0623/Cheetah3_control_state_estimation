/*
 * Automatically Generated from Mathematica.
 * Fri 21 Dec 2018 15:12:04 GMT-05:00
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
  double t1132;
  double t1320;
  double t1345;
  double t1617;
  double t1737;
  double t2096;
  double t2145;
  double t1100;
  double t2642;
  double t906;
  double t2701;
  double t600;
  double t3269;
  double t3311;
  double t3342;
  double t3046;
  double t3266;
  double t3586;
  double t2596;
  double t2707;
  double t2848;
  double t3391;
  double t3627;
  double t3754;
  double t3851;
  double t4023;
  double t4182;
  double t4561;
  double t4987;
  double t5026;
  double t5428;
  double t5435;
  double t5437;
  double t5450;
  double t5507;
  double t5517;
  double t5529;
  double t5582;
  double t5619;
  double t5751;
  double t5772;
  double t5804;
  double t5831;
  double t5835;
  double t5847;
  double t6329;
  double t6330;
  double t6334;
  double t6348;
  double t6350;
  double t6373;
  double t6499;
  double t6705;
  double t6706;
  double t6712;
  double t7117;
  double t7119;
  double t7128;
  double t7129;
  double t6251;
  double t6265;
  double t6270;
  double t6275;
  double t6321;
  double t6324;
  double t6497;
  double t6721;
  double t6722;
  double t6937;
  double t6949;
  double t6959;
  double t6961;
  double t7131;
  double t7132;
  double t7133;
  double t7154;
  double t7155;
  double t7159;
  double t7209;
  double t7210;
  double t7237;
  double t7238;
  double t7241;
  double t7564;
  double t7570;
  double t7571;
  double t6245;
  double t6247;
  double t6250;
  double t6724;
  double t7212;
  double t7214;
  double t7494;
  double t7506;
  double t7517;
  double t7272;
  double t7273;
  double t7409;
  double t7637;
  double t7640;
  double t7653;
  double t7894;
  double t7896;
  double t7897;
  double t7918;
  double t7921;
  double t7928;
  double t7526;
  double t7614;
  double t8034;
  double t8036;
  double t8037;
  double t7665;
  double t8018;
  double t8020;
  double t8026;
  double t7834;
  double t8030;
  double t8044;
  double t7529;
  double t7580;
  double t7585;
  double t8070;
  double t8071;
  double t7619;
  double t7631;
  double t7632;
  double t8130;
  double t8195;
  double t8197;
  double t8132;
  double t7666;
  double t7789;
  double t7792;
  double t8168;
  double t8170;
  double t7835;
  double t7836;
  double t7840;
  double t8487;
  double t8491;
  double t8496;
  double t8501;
  double t8502;
  double t7907;
  double t7942;
  double t7948;
  double t7949;
  double t7952;
  double t7953;
  double t7956;
  double t7958;
  double t7963;
  double t7968;
  double t7972;
  double t7973;
  double t7979;
  double t7981;
  double t7985;
  double t7986;
  double t7989;
  double t7991;
  double t7993;
  double t7994;
  double t7998;
  double t8002;
  double t8007;
  double t8008;
  double t8010;
  double t8012;
  double t8016;
  double t8029;
  double t8047;
  double t8055;
  double t8058;
  double t8068;
  double t8567;
  double t8573;
  double t8574;
  double t8559;
  double t8560;
  double t8564;
  double t8074;
  double t8081;
  double t8086;
  double t8088;
  double t8127;
  double t8135;
  double t8137;
  double t8138;
  double t8139;
  double t8175;
  double t8566;
  double t8203;
  double t8244;
  double t8272;
  double t8582;
  double t8315;
  double t8318;
  double t8340;
  double t8592;
  double t8386;
  double t8388;
  double t8440;
  double t8630;
  double t8441;
  double t8442;
  double t8471;
  double t8854;
  double t8859;
  double t8873;
  double t8910;
  double t8911;
  double t8912;
  double t5676;
  double t5679;
  double t5688;
  double t8946;
  double t8947;
  double t8975;
  double t8983;
  double t8984;
  double t8988;
  double t9068;
  double t9072;
  double t9074;
  double t9078;
  double t9083;
  double t9102;
  double t9113;
  double t9138;
  double t9139;
  double t9140;
  double t9146;
  double t9157;
  double t9164;
  double t9231;
  double t9233;
  double t9234;
  double t9239;
  double t9246;
  double t9248;
  double t8900;
  double t8913;
  double t8914;
  double t9179;
  double t9205;
  double t9211;
  double t8755;
  double t8756;
  double t8757;
  double t8831;
  double t8834;
  double t8835;
  double t8836;
  double t8837;
  double t8838;
  double t8840;
  double t9333;
  double t9334;
  double t9323;
  double t9324;
  double t9328;
  double t8841;
  double t8853;
  double t8883;
  double t8887;
  double t8889;
  double t8890;
  double t8892;
  double t8895;
  double t8917;
  double t8918;
  double t8919;
  double t8921;
  double t8926;
  double t8944;
  double t8945;
  double t8982;
  double t8995;
  double t9007;
  double t9014;
  double t9015;
  double t9021;
  double t9022;
  double t9023;
  double t9037;
  double t9038;
  double t9044;
  double t9054;
  double t9064;
  double t9067;
  double t9401;
  double t9429;
  double t9430;
  double t9153;
  double t9154;
  double t9445;
  double t9447;
  double t9455;
  double t9462;
  double t9463;
  double t9475;
  double t9173;
  double t9183;
  double t9488;
  double t9502;
  double t9503;
  double t9206;
  double t9229;
  double t9478;
  double t9506;
  double t9255;
  double t9257;
  double t9578;
  double t9581;
  double t9583;
  double t9587;
  double t9588;
  double t9589;
  double t9292;
  double t9518;
  double t9542;
  double t9303;
  double t9304;
  t1132 = Cos(var1[11]);
  t1320 = Sin(var1[10]);
  t1345 = -1.*t1132*t1320;
  t1617 = Cos(var1[10]);
  t1737 = Sin(var1[11]);
  t2096 = -1.*t1617*t1737;
  t2145 = t1345 + t2096;
  t1100 = Cos(var1[5]);
  t2642 = Sin(var1[9]);
  t906 = Cos(var1[9]);
  t2701 = Sin(var1[5]);
  t600 = Sin(var1[3]);
  t3269 = t1617*t1132;
  t3311 = -1.*t1320*t1737;
  t3342 = t3269 + t3311;
  t3046 = Cos(var1[3]);
  t3266 = Cos(var1[4]);
  t3586 = Sin(var1[4]);
  t2596 = t906*t1100*t2145;
  t2707 = -1.*t2642*t2145*t2701;
  t2848 = t2596 + t2707;
  t3391 = t3266*t3342;
  t3627 = -1.*t1100*t2642*t2145;
  t3754 = -1.*t906*t2145*t2701;
  t3851 = t3627 + t3754;
  t4023 = -1.*t3586*t3851;
  t4182 = t3391 + t4023;
  t4561 = t906*t1100*t3342;
  t4987 = -1.*t2642*t3342*t2701;
  t5026 = t4561 + t4987;
  t5428 = t1132*t1320;
  t5435 = t1617*t1737;
  t5437 = t5428 + t5435;
  t5450 = t3266*t5437;
  t5507 = -1.*t1100*t2642*t3342;
  t5517 = -1.*t906*t3342*t2701;
  t5529 = t5507 + t5517;
  t5582 = -1.*t3586*t5529;
  t5619 = t5450 + t5582;
  t5751 = -1.*t3342*t3586;
  t5772 = -1.*t3266*t3851;
  t5804 = t5751 + t5772;
  t5831 = -1.*t5437*t3586;
  t5835 = -1.*t3266*t5529;
  t5847 = t5831 + t5835;
  t6329 = -1.*t1132;
  t6330 = 1. + t6329;
  t6334 = 0.100689*t6330;
  t6348 = 0.080689*t1132;
  t6350 = -0.16*t1737;
  t6373 = t6334 + t6348 + t6350;
  t6499 = -0.20833*t6330;
  t6705 = -0.36833*t1132;
  t6706 = 0.02*t1737;
  t6712 = t6499 + t6705 + t6706;
  t7117 = 0.242889*t1320;
  t7119 = -1.*t1320*t6373;
  t7128 = t1617*t6712;
  t7129 = t7117 + t7119 + t7128;
  t6251 = t906*t1100;
  t6265 = -1.*t2642*t2701;
  t6270 = t6251 + t6265;
  t6275 = -1.*t1617;
  t6321 = 1. + t6275;
  t6324 = 0.242889*t6321;
  t6497 = t1617*t6373;
  t6721 = t1320*t6712;
  t6722 = t6324 + t6497 + t6721;
  t6937 = -1.*t906;
  t6949 = 1. + t6937;
  t6959 = 0.081715*t6949;
  t6961 = 0.11688*t906;
  t7131 = -1.*t2642*t7129;
  t7132 = t6959 + t6961 + t7131;
  t7133 = t1100*t7132;
  t7154 = 0.035165*t2642;
  t7155 = t906*t7129;
  t7159 = t7154 + t7155;
  t7209 = -1.*t7159*t2701;
  t7210 = t7133 + t7209;
  t7237 = t6722*t3586;
  t7238 = t3266*t7210;
  t7241 = t7237 + t7238;
  t7564 = t3266*t6722;
  t7570 = -1.*t3586*t7210;
  t7571 = t7564 + t7570;
  t6245 = t3342*t3586;
  t6247 = t3266*t3851;
  t6250 = t6245 + t6247;
  t6724 = -1.*t6722*t3586;
  t7212 = -1.*t3266*t7210;
  t7214 = t6724 + t7212;
  t7494 = t1100*t7159;
  t7506 = t7132*t2701;
  t7517 = t7494 + t7506;
  t7272 = t1100*t2642;
  t7273 = t906*t2701;
  t7409 = t7272 + t7273;
  t7637 = t5437*t3586;
  t7640 = t3266*t5529;
  t7653 = t7637 + t7640;
  t7894 = -1.*t906*t1100*t2145;
  t7896 = t2642*t2145*t2701;
  t7897 = t7894 + t7896;
  t7918 = -1.*t906*t1100*t3342;
  t7921 = t2642*t3342*t2701;
  t7928 = t7918 + t7921;
  t7526 = t7409*t7517;
  t7614 = -1.*t7517*t2848;
  t8034 = -1.*t1100*t7159;
  t8036 = -1.*t7132*t2701;
  t8037 = t8034 + t8036;
  t7665 = -1.*t7409*t7517;
  t8018 = -1.*t1100*t2642;
  t8020 = -1.*t906*t2701;
  t8026 = t8018 + t8020;
  t7834 = t7517*t5026;
  t8030 = t7409*t7210;
  t8044 = t6270*t7517;
  t7529 = t3266*t6270*t7241;
  t7580 = -1.*t3586*t6270*t7571;
  t7585 = t7526 + t7529 + t7580;
  t8070 = -1.*t7517*t3851;
  t8071 = -1.*t7210*t2848;
  t7619 = -1.*t7241*t6250;
  t7631 = -1.*t7571*t4182;
  t7632 = t7614 + t7619 + t7631;
  t8130 = -1.*t7409*t7210;
  t8195 = Power(t3266,2);
  t8197 = Power(t3586,2);
  t8132 = -1.*t6270*t7517;
  t7666 = -1.*t3266*t6270*t7241;
  t7789 = t3586*t6270*t7571;
  t7792 = t7665 + t7666 + t7789;
  t8168 = t7517*t5529;
  t8170 = t7210*t5026;
  t7835 = t7241*t7653;
  t7836 = t7571*t5619;
  t7840 = t7834 + t7835 + t7836;
  t8487 = -0.035165*t2642;
  t8491 = -1.*t906*t7129;
  t8496 = t8487 + t8491;
  t8501 = 0.035165*t906;
  t8502 = t8501 + t7131;
  t7907 = 0.03856*t3266*t7897;
  t7942 = -0.00482*t3266*t7928;
  t7948 = t7907 + t7942;
  t7949 = -0.5*var2[0]*t7948;
  t7952 = t600*t3851;
  t7953 = -1.*t3046*t3586*t7897;
  t7956 = t7952 + t7953;
  t7958 = 0.03856*t7956;
  t7963 = t600*t5529;
  t7968 = -1.*t3046*t3586*t7928;
  t7972 = t7963 + t7968;
  t7973 = -0.00482*t7972;
  t7979 = t7958 + t7973;
  t7981 = -0.5*var2[2]*t7979;
  t7985 = t3046*t3851;
  t7986 = t600*t3586*t7897;
  t7989 = t7985 + t7986;
  t7991 = 0.03856*t7989;
  t7993 = t3046*t5529;
  t7994 = t600*t3586*t7928;
  t7998 = t7993 + t7994;
  t8002 = -0.00482*t7998;
  t8007 = t7991 + t8002;
  t8008 = -0.5*var2[1]*t8007;
  t8010 = t6270*t7210;
  t8012 = t8010 + t7526;
  t8016 = t3851*t8012;
  t8029 = t8026*t7210;
  t8047 = -1.*t6722*t3342;
  t8055 = -1.*t7210*t3851;
  t8058 = t8047 + t8055 + t7614;
  t8068 = t6270*t8058;
  t8567 = t1100*t8496;
  t8573 = -1.*t8502*t2701;
  t8574 = t8567 + t8573;
  t8559 = t1100*t8502;
  t8560 = t8496*t2701;
  t8564 = t8559 + t8560;
  t8074 = -1.*t7210*t7897;
  t8081 = -1.*t6270*t7210;
  t8086 = t8081 + t7665;
  t8088 = t5529*t8086;
  t8127 = -1.*t8026*t7210;
  t8135 = t6722*t5437;
  t8137 = t7210*t5529;
  t8138 = t8135 + t8137 + t7834;
  t8139 = t6270*t8138;
  t8175 = t7210*t7928;
  t8566 = t7409*t8564;
  t8203 = t3266*t8026*t7241;
  t8244 = -1.*t3586*t8026*t7571;
  t8272 = t3266*t7897*t7585;
  t8582 = -1.*t8564*t2848;
  t8315 = -1.*t3266*t7897*t7241;
  t8318 = t3586*t7897*t7571;
  t8340 = t3266*t8026*t7632;
  t8592 = -1.*t7409*t8564;
  t8386 = -1.*t3266*t8026*t7241;
  t8388 = t3586*t8026*t7571;
  t8440 = t3266*t7928*t7792;
  t8630 = t8564*t5026;
  t8441 = t3266*t7928*t7241;
  t8442 = -1.*t3586*t7928*t7571;
  t8471 = t3266*t8026*t7840;
  t8854 = -1.*t1617*t1132;
  t8859 = t1320*t1737;
  t8873 = t8854 + t8859;
  t8910 = -1.*t1100*t2642*t8873;
  t8911 = -1.*t906*t8873*t2701;
  t8912 = t8910 + t8911;
  t5676 = t3046*t2848;
  t5679 = -1.*t600*t4182;
  t5688 = t5676 + t5679;
  t8946 = t906*t1100*t8873;
  t8947 = -1.*t2642*t8873*t2701;
  t8975 = t8946 + t8947;
  t8983 = t3266*t2145;
  t8984 = -1.*t3586*t8912;
  t8988 = t8983 + t8984;
  t9068 = 0.242889*t1617;
  t9072 = -1.*t1617*t6373;
  t9074 = -1.*t1320*t6712;
  t9078 = t9068 + t9072 + t9074;
  t9083 = -1.*t1100*t2642*t9078;
  t9102 = -1.*t906*t9078*t2701;
  t9113 = t9083 + t9102;
  t9138 = t906*t1100*t9078;
  t9139 = -1.*t2642*t9078*t2701;
  t9140 = t9138 + t9139;
  t9146 = -1.*t7409*t9140;
  t9157 = t7517*t2848;
  t9164 = t9140*t5026;
  t9231 = t7129*t3586;
  t9233 = t3266*t9113;
  t9234 = t9231 + t9233;
  t9239 = t3266*t7129;
  t9246 = -1.*t3586*t9113;
  t9248 = t9239 + t9246;
  t8900 = t2145*t3586;
  t8913 = t3266*t8912;
  t8914 = t8900 + t8913;
  t9179 = t7409*t9140;
  t9205 = -1.*t9140*t2848;
  t9211 = -1.*t7517*t8975;
  t8755 = t2642*t7159;
  t8756 = t906*t7132;
  t8757 = t8755 + t8756;
  t8831 = -0.00482*t8757*t2145;
  t8834 = -1.*t2642*t7159;
  t8835 = -1.*t906*t7132;
  t8836 = t8834 + t8835;
  t8837 = 0.03856*t8836*t3342;
  t8838 = t8831 + t8837;
  t8840 = -0.5*var2[5]*t8838;
  t9333 = -0.16*t1132;
  t9334 = t9333 + t6706;
  t9323 = 0.02*t1132;
  t9324 = 0.16*t1737;
  t9328 = t9323 + t9324;
  t8841 = -0.0001694953*t2145;
  t8853 = -0.11688*t3342;
  t8883 = -0.081715*t8873;
  t8887 = t8853 + t8883;
  t8889 = 0.03856*t8887;
  t8890 = t8841 + t8889;
  t8892 = -0.5*var2[9]*t8890;
  t8895 = -0.00482*t6250;
  t8917 = 0.03856*t8914;
  t8918 = t8895 + t8917;
  t8919 = -0.5*var2[0]*t8918;
  t8921 = t600*t2848;
  t8926 = t3046*t4182;
  t8944 = t8921 + t8926;
  t8945 = -0.00482*t8944;
  t8982 = t600*t8975;
  t8995 = t3046*t8988;
  t9007 = t8982 + t8995;
  t9014 = 0.03856*t9007;
  t9015 = t8945 + t9014;
  t9021 = -0.5*var2[2]*t9015;
  t9022 = -0.00482*t5688;
  t9023 = t3046*t8975;
  t9037 = -1.*t600*t8988;
  t9038 = t9023 + t9037;
  t9044 = 0.03856*t9038;
  t9054 = t9022 + t9044;
  t9064 = -0.5*var2[1]*t9054;
  t9067 = t2848*t8086;
  t9401 = -1.*t1320*t9334;
  t9429 = t1617*t9328;
  t9430 = t9401 + t9429;
  t9153 = t6722*t3342;
  t9154 = t7210*t3851;
  t9445 = -1.*t1100*t2642*t9430;
  t9447 = -1.*t906*t9430*t2701;
  t9455 = t9445 + t9447;
  t9462 = t906*t1100*t9430;
  t9463 = -1.*t2642*t9430*t2701;
  t9475 = t9462 + t9463;
  t9173 = t8975*t8012;
  t9183 = -1.*t6722*t2145;
  t9488 = t1617*t9334;
  t9502 = t1320*t9328;
  t9503 = t9488 + t9502;
  t9206 = -1.*t7210*t8912;
  t9229 = t6250*t7792;
  t9478 = -1.*t7409*t9475;
  t9506 = t9475*t5026;
  t9255 = t7241*t6250;
  t9257 = t7571*t4182;
  t9578 = t9503*t3586;
  t9581 = t3266*t9455;
  t9583 = t9578 + t9581;
  t9587 = t3266*t9503;
  t9588 = -1.*t3586*t9455;
  t9589 = t9587 + t9588;
  t9292 = t8914*t7585;
  t9518 = t7409*t9475;
  t9542 = -1.*t9475*t2848;
  t9303 = -1.*t7241*t8914;
  t9304 = -1.*t7571*t8988;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=(-0.5*(0.03856*(-1.*t3046*t4182 - 1.*t2848*t600) - 0.00482*(-1.*t3046*t5619 - 1.*t5026*t600))*var2[1] - 0.5*(0.03856*t5688 - 0.00482*(t3046*t5026 - 1.*t5619*t600))*var2[2])*var2[11];
  p_output1[4]=(-0.5*(0.03856*t4182 - 0.00482*t5619)*var2[0] - 0.5*(-0.03856*t5804*t600 + 0.00482*t5847*t600)*var2[1] - 0.5*(0.03856*t3046*t5804 - 0.00482*t3046*t5847)*var2[2] - 0.5*(-0.00482*(t6250*(-1.*t3586*t6270*t7214 - 1.*t3586*t6270*t7241) + t3266*t6270*(-1.*t4182*t7214 - 1.*t4182*t7241 - 1.*t5804*t7571 - 1.*t6250*t7571) + t4182*t7585 - 1.*t3586*t6270*t7632) + 0.03856*((t3586*t6270*t7214 + t3586*t6270*t7241)*t7653 + t3266*t6270*(t5619*t7214 + t5619*t7241 + t5847*t7571 + t7571*t7653) + t5619*t7792 - 1.*t3586*t6270*t7840))*var2[3])*var2[11];
  p_output1[5]=(t7949 + t7981 + t8008 - 0.5*(-0.00482*(t6250*(t8030 + t8044 + t6270*t8037*t8195 + t6270*t8037*t8197 + t8203 + t8244) + t8272 + t3266*t6270*(t3586*t4182*t8037 - 1.*t3266*t6250*t8037 + t8070 + t8071 + t8315 + t8318) + t8340) + 0.03856*(t7653*(t8130 + t8132 - 1.*t6270*t8037*t8195 - 1.*t6270*t8037*t8197 + t8386 + t8388) + t8440 + t3266*t6270*(-1.*t3586*t5619*t8037 + t3266*t7653*t8037 + t8168 + t8170 + t8441 + t8442) + t8471))*var2[3] - 0.5*(-0.00482*(t8016 + t2848*(t8029 + t8030 + t6270*t8037 + t8044) + t8068 + t7409*(-1.*t3851*t8037 + t8070 + t8071 + t8074)) + 0.03856*(t8088 + t5026*(-1.*t6270*t8037 + t8127 + t8130 + t8132) + t8139 + t7409*(t5529*t8037 + t8168 + t8170 + t8175)))*var2[4])*var2[11];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(t7949 + t7981 + t8008 - 0.5*(-0.00482*(t8272 + t8340 + t6250*(t8044 + t8203 + t8244 + t8566 + t6270*t8195*t8574 + t6270*t8197*t8574) + t3266*t6270*(t8070 + t8315 + t8318 + t3586*t4182*t8574 - 1.*t3266*t6250*t8574 + t8582)) + 0.03856*(t8440 + t8471 + t7653*(t8132 + t8386 + t8388 - 1.*t6270*t8195*t8574 - 1.*t6270*t8197*t8574 + t8592) + t3266*t6270*(t8168 + t8441 + t8442 - 1.*t3586*t5619*t8574 + t3266*t7653*t8574 + t8630)))*var2[3] - 0.5*(-0.00482*(t8016 + t8068 + t2848*(t8029 + t8044 + t8566 + t6270*t8574) + t7409*(t8070 + t8074 - 1.*t3851*t8574 + t8582)) + 0.03856*(t8088 + t8139 + t5026*(t8127 + t8132 - 1.*t6270*t8574 + t8592) + t7409*(t8168 + t8175 + t5529*t8574 + t8630)))*var2[4] - 0.5*(0.03856*t5437*(t2642*t7132 - 1.*t2642*t8502 - 1.*t7159*t906 - 1.*t8496*t906) - 0.00482*t3342*(-1.*t2642*t7132 + t2642*t8502 + t7159*t906 + t8496*t906))*var2[5])*var2[11];
  p_output1[10]=(t8840 + t8892 + t8919 + t9021 + t9064 - 0.5*(0.03856*(t9229 + t7653*(t9146 - 1.*t3266*t6270*t9234 + t3586*t6270*t9248) + t3266*t6270*(t9157 + t9164 + t7653*t9234 + t5619*t9248 + t9255 + t9257)) - 0.00482*(t6250*(t9179 + t3266*t6270*t9234 - 1.*t3586*t6270*t9248) + t9292 + t3266*t6270*(t9205 + t9211 - 1.*t6250*t9234 - 1.*t4182*t9248 + t9303 + t9304)))*var2[3] - 0.5*(0.03856*(t9067 + t5026*(-1.*t6270*t9113 + t9146) + t7409*(t5437*t7129 + t5529*t9113 + t9153 + t9154 + t9157 + t9164)) - 0.00482*(t9173 + t2848*(t6270*t9113 + t9179) + t7409*(-1.*t3342*t7129 - 1.*t3851*t9113 + t9183 + t9205 + t9206 + t9211)))*var2[4])*var2[11];
  p_output1[11]=(t8840 + t8892 + t8919 + t9021 + t9064 - 0.5*(-0.00482*(t9292 + t3266*t6270*(t9211 + t9303 + t9304 + t9542 - 1.*t6250*t9583 - 1.*t4182*t9589) + t6250*(t9518 + t3266*t6270*t9583 - 1.*t3586*t6270*t9589)) + 0.03856*(t9229 + t3266*t6270*(t9157 + t9255 + t9257 + t9506 + t7653*t9583 + t5619*t9589) + t7653*(t9478 - 1.*t3266*t6270*t9583 + t3586*t6270*t9589)))*var2[3] - 0.5*(0.03856*(t9067 + t5026*(-1.*t6270*t9455 + t9478) + t7409*(t9153 + t9154 + t9157 + t5529*t9455 + t5437*t9503 + t9506)) - 0.00482*(t9173 + t2848*(t6270*t9455 + t9518) + t7409*(t9183 + t9206 + t9211 - 1.*t3851*t9455 - 1.*t3342*t9503 + t9542)))*var2[4] - 0.5*(-0.00482*(-0.242889*t1737 + t1737*t6373 + t1132*t6712 + t1737*t9328 - 1.*t1132*t9334) + 0.03856*(-0.242889*t1132 + t1132*t6373 - 1.*t1737*t6712 + t1132*t9328 + t1737*t9334))*var2[10])*var2[11];
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
