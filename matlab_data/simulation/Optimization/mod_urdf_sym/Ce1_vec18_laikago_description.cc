/*
 * Automatically Generated from Mathematica.
 * Tue 10 Dec 2019 16:01:38 GMT-05:00
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
  double t7589;
  double t8417;
  double t7110;
  double t8418;
  double t139;
  double t5169;
  double t6652;
  double t8151;
  double t8419;
  double t8441;
  double t8460;
  double t8565;
  double t8567;
  double t8575;
  double t8848;
  double t8858;
  double t8453;
  double t8458;
  double t8459;
  double t8886;
  double t8889;
  double t8890;
  double t8955;
  double t8961;
  double t8965;
  double t8942;
  double t8946;
  double t8949;
  double t8951;
  double t8966;
  double t8967;
  double t8975;
  double t8976;
  double t8977;
  double t8978;
  double t8982;
  double t8985;
  double t8628;
  double t8634;
  double t8711;
  double t9020;
  double t8449;
  double t8483;
  double t8507;
  double t9017;
  double t8897;
  double t8898;
  double t8902;
  double t8885;
  double t8892;
  double t8893;
  double t8896;
  double t8909;
  double t8917;
  double t9262;
  double t9270;
  double t9275;
  double t9304;
  double t9305;
  double t9307;
  double t9308;
  double t9309;
  double t9311;
  double t9312;
  double t9317;
  double t9320;
  double t9321;
  double t9322;
  double t9323;
  double t9324;
  double t9325;
  double t9330;
  double t9082;
  double t9083;
  double t9084;
  double t9087;
  double t9090;
  double t9097;
  double t9205;
  double t9216;
  double t9220;
  double t9226;
  double t9227;
  double t9228;
  double t9282;
  double t9283;
  double t9284;
  double t9481;
  double t9496;
  double t9507;
  double t9515;
  double t9519;
  double t9520;
  double t9521;
  double t9533;
  double t9540;
  double t9567;
  double t9569;
  double t9570;
  double t9571;
  double t9572;
  double t9573;
  double t9598;
  double t9600;
  double t9602;
  double t9603;
  double t9604;
  double t9614;
  double t9633;
  double t9637;
  double t9644;
  double t9652;
  double t9669;
  double t9670;
  double t9671;
  double t9678;
  double t9681;
  double t9562;
  double t9563;
  double t9564;
  double t9594;
  double t9605;
  double t9610;
  double t9697;
  double t9700;
  double t9701;
  double t9612;
  double t9682;
  double t9683;
  double t9723;
  double t9724;
  double t9725;
  double t9704;
  double t9705;
  double t9706;
  double t9687;
  double t9688;
  double t9696;
  double t9726;
  double t9732;
  double t9733;
  double t9708;
  double t9715;
  double t9719;
  double t9735;
  double t9737;
  double t9738;
  double t9797;
  double t9798;
  double t9799;
  double t8875;
  double t8876;
  double t8877;
  double t8849;
  double t8859;
  double t8862;
  double t9746;
  double t9761;
  double t9766;
  double t9767;
  double t9872;
  double t9873;
  double t9874;
  double t9876;
  double t9877;
  double t9863;
  double t9864;
  double t9867;
  double t9878;
  double t9879;
  double t9880;
  double t9886;
  double t9887;
  double t9891;
  double t9783;
  double t9784;
  double t9786;
  double t9787;
  double t9810;
  double t9812;
  double t9826;
  double t9833;
  double t9871;
  double t9894;
  double t9895;
  double t9896;
  double t9846;
  double t9847;
  double t9849;
  double t9850;
  double t9987;
  double t9988;
  double t9990;
  double t9995;
  double t9996;
  double t9997;
  double t10132;
  double t10133;
  double t10134;
  double t10136;
  double t10201;
  double t10202;
  double t10203;
  double t10137;
  double t10184;
  double t10188;
  double t10191;
  double t10204;
  double t10206;
  double t10213;
  double t10216;
  double t10217;
  double t10130;
  double t10131;
  double t10349;
  double t10350;
  double t10353;
  double t10359;
  double t10362;
  double t10352;
  double t10363;
  double t10364;
  double t10371;
  double t10373;
  double t10377;
  double t10409;
  double t10410;
  double t10413;
  double t10366;
  double t10384;
  double t10388;
  double t10232;
  double t10234;
  double t10235;
  double t10408;
  double t10417;
  double t10422;
  double t10427;
  double t10434;
  double t10437;
  double t10244;
  double t10309;
  double t10324;
  double t10327;
  double t9875;
  double t9885;
  double t9900;
  double t9901;
  double t9915;
  double t10536;
  double t9917;
  double t9947;
  double t9948;
  double t10522;
  double t10523;
  double t10528;
  double t9707;
  double t9769;
  double t9770;
  double t10549;
  double t10550;
  double t10551;
  double t10557;
  double t10558;
  double t10560;
  double t9804;
  double t10578;
  double t10579;
  double t10580;
  double t9836;
  double t9837;
  double t10190;
  double t10231;
  double t10247;
  double t10645;
  double t10310;
  double t10636;
  double t10642;
  double t10397;
  double t10644;
  double t10671;
  double t10459;
  double t10689;
  double t10482;
  double t10693;
  double t10493;
  double t10697;
  double t10562;
  double t10564;
  double t10569;
  double t10571;
  double t10530;
  double t10531;
  double t10541;
  double t10543;
  double t10759;
  double t10763;
  double t10646;
  double t10791;
  double t10792;
  double t10691;
  double t10833;
  double t10825;
  double t10826;
  double t10830;
  double t10835;
  double t10715;
  double t10846;
  double t10852;
  double t10738;
  double t10857;
  double t10903;
  double t10907;
  double t10908;
  double t10909;
  double t10910;
  double t10913;
  double t10914;
  t7589 = Cos(var1[17]);
  t8417 = Sin(var1[16]);
  t7110 = Cos(var1[16]);
  t8418 = Sin(var1[17]);
  t139 = Cos(var1[4]);
  t5169 = Cos(var1[5]);
  t6652 = Sin(var1[15]);
  t8151 = t7110*t7589;
  t8419 = -1.*t8417*t8418;
  t8441 = t8151 + t8419;
  t8460 = Sin(var1[5]);
  t8565 = -1.*t7589*t8417;
  t8567 = -1.*t7110*t8418;
  t8575 = t8565 + t8567;
  t8848 = Sin(var1[4]);
  t8858 = Cos(var1[15]);
  t8453 = t7589*t8417;
  t8458 = t7110*t8418;
  t8459 = t8453 + t8458;
  t8886 = t5169*t8441;
  t8889 = t6652*t8575*t8460;
  t8890 = t8886 + t8889;
  t8955 = -1.*t7110*t7589;
  t8961 = t8417*t8418;
  t8965 = t8955 + t8961;
  t8942 = t8858*t8575*t8848;
  t8946 = t139*t8890;
  t8949 = t8942 + t8946;
  t8951 = 0.000529236*t8949;
  t8966 = t8858*t8965*t8848;
  t8967 = t5169*t8575;
  t8975 = t6652*t8965*t8460;
  t8976 = t8967 + t8975;
  t8977 = t139*t8976;
  t8978 = t8966 + t8977;
  t8982 = -0.02973458*t8978;
  t8985 = t8951 + t8982;
  t8628 = t5169*t6652*t8575;
  t8634 = -1.*t8441*t8460;
  t8711 = t8628 + t8634;
  t9020 = Sin(var1[3]);
  t8449 = t5169*t6652*t8441;
  t8483 = -1.*t8459*t8460;
  t8507 = t8449 + t8483;
  t9017 = Cos(var1[3]);
  t8897 = t5169*t8459;
  t8898 = t6652*t8441*t8460;
  t8902 = t8897 + t8898;
  t8885 = t8858*t139*t8575;
  t8892 = -1.*t8848*t8890;
  t8893 = t8885 + t8892;
  t8896 = t8858*t139*t8441;
  t8909 = -1.*t8848*t8902;
  t8917 = t8896 + t8909;
  t9262 = -1.*t5169*t6652*t8575;
  t9270 = t8441*t8460;
  t9275 = t9262 + t9270;
  t9304 = t9017*t9275;
  t9305 = -1.*t9020*t8893;
  t9307 = t9304 + t9305;
  t9308 = 0.000529236*t9307;
  t9309 = -1.*t5169*t6652*t8965;
  t9311 = t8575*t8460;
  t9312 = t9309 + t9311;
  t9317 = t9017*t9312;
  t9320 = t8858*t139*t8965;
  t9321 = -1.*t8848*t8976;
  t9322 = t9320 + t9321;
  t9323 = -1.*t9020*t9322;
  t9324 = t9317 + t9323;
  t9325 = -0.02973458*t9324;
  t9330 = t9308 + t9325;
  t9082 = -1.*t8858*t8575*t8848;
  t9083 = -1.*t139*t8890;
  t9084 = t9082 + t9083;
  t9087 = -1.*t8858*t8441*t8848;
  t9090 = -1.*t139*t8902;
  t9097 = t9087 + t9090;
  t9205 = -1.*t139*t6652*t8575;
  t9216 = -1.*t8858*t8575*t8848*t8460;
  t9220 = t9205 + t9216;
  t9226 = -1.*t139*t6652*t8441;
  t9227 = -1.*t8858*t8441*t8848*t8460;
  t9228 = t9226 + t9227;
  t9282 = -1.*t5169*t6652*t8441;
  t9283 = t8459*t8460;
  t9284 = t9282 + t9283;
  t9481 = t9020*t9275;
  t9496 = t9017*t8893;
  t9507 = t9481 + t9496;
  t9515 = 0.000529236*t9507;
  t9519 = t9020*t9312;
  t9520 = t9017*t9322;
  t9521 = t9519 + t9520;
  t9533 = -0.02973458*t9521;
  t9540 = t9515 + t9533;
  t9567 = -1.*t7589;
  t9569 = 1. + t9567;
  t9570 = -0.21935*t9569;
  t9571 = -0.221546*t7589;
  t9572 = -0.12338*t8418;
  t9573 = t9570 + t9571 + t9572;
  t9598 = -1. + t7589;
  t9600 = 0.25*t9598;
  t9602 = -0.37338*t7589;
  t9603 = 0.002196*t8418;
  t9604 = t9600 + t9602 + t9603;
  t9614 = -1.*t8858;
  t9633 = 1. + t9614;
  t9637 = 0.0875*t9633;
  t9644 = 0.124119*t8858;
  t9652 = -0.21935*t8417;
  t9669 = -1.*t8417*t9573;
  t9670 = t7110*t9604;
  t9671 = t9652 + t9669 + t9670;
  t9678 = -1.*t6652*t9671;
  t9681 = t9637 + t9644 + t9678;
  t9562 = -1.*t7110;
  t9563 = 1. + t9562;
  t9564 = -0.21935*t9563;
  t9594 = t7110*t9573;
  t9605 = t8417*t9604;
  t9610 = t9564 + t9594 + t9605;
  t9697 = -1.*t5169*t9681;
  t9700 = -1.*t9610*t8460;
  t9701 = t9697 + t9700;
  t9612 = t5169*t9610;
  t9682 = -1.*t9681*t8460;
  t9683 = t9612 + t9682;
  t9723 = 0.036619*t6652;
  t9724 = t8858*t9671;
  t9725 = t9723 + t9724;
  t9704 = t5169*t9681;
  t9705 = t9610*t8460;
  t9706 = t9704 + t9705;
  t9687 = t6652*t8848;
  t9688 = -1.*t8858*t139*t8460;
  t9696 = t9687 + t9688;
  t9726 = t9725*t8848;
  t9732 = t139*t9683;
  t9733 = t9726 + t9732;
  t9708 = t139*t6652;
  t9715 = t8858*t8848*t8460;
  t9719 = t9708 + t9715;
  t9735 = t139*t9725;
  t9737 = -1.*t8848*t9683;
  t9738 = t9735 + t9737;
  t9797 = t8858*t8441*t8848;
  t9798 = t139*t8902;
  t9799 = t9797 + t9798;
  t8875 = -1.*t6652*t8441*t8848;
  t8876 = t8858*t139*t8441*t8460;
  t8877 = t8875 + t8876;
  t8849 = -1.*t6652*t8575*t8848;
  t8859 = t8858*t139*t8575*t8460;
  t8862 = t8849 + t8859;
  t9746 = t8858*t5169*t9706;
  t9761 = t9696*t9733;
  t9766 = t9719*t9738;
  t9767 = t9746 + t9761 + t9766;
  t9872 = -0.036619*t6652;
  t9873 = -1.*t8858*t9671;
  t9874 = t9872 + t9873;
  t9876 = 0.036619*t8858;
  t9877 = t9876 + t9678;
  t9863 = t8858*t8848;
  t9864 = t139*t6652*t8460;
  t9867 = t9863 + t9864;
  t9878 = t9877*t8848;
  t9879 = -1.*t139*t9874*t8460;
  t9880 = t9878 + t9879;
  t9886 = t139*t9877;
  t9887 = t9874*t8848*t8460;
  t9891 = t9886 + t9887;
  t9783 = -1.*t9706*t9275;
  t9784 = -1.*t9733*t8949;
  t9786 = -1.*t9738*t8893;
  t9787 = t9783 + t9784 + t9786;
  t9810 = -1.*t8858*t5169*t9706;
  t9812 = -1.*t9696*t9733;
  t9826 = -1.*t9719*t9738;
  t9833 = t9810 + t9812 + t9826;
  t9871 = Power(t5169,2);
  t9894 = t8858*t139;
  t9895 = -1.*t6652*t8848*t8460;
  t9896 = t9894 + t9895;
  t9846 = t9706*t9284;
  t9847 = t9733*t9799;
  t9849 = t9738*t8917;
  t9850 = t9846 + t9847 + t9849;
  t9987 = -1.*t9725*t8848;
  t9988 = -1.*t139*t9683;
  t9990 = t9987 + t9988;
  t9995 = -1.*t6652*t8848;
  t9996 = t8858*t139*t8460;
  t9997 = t9995 + t9996;
  t10132 = -0.21935*t7110;
  t10133 = -1.*t7110*t9573;
  t10134 = -1.*t8417*t9604;
  t10136 = t10132 + t10133 + t10134;
  t10201 = t5169*t9671;
  t10202 = t6652*t10136*t8460;
  t10203 = t10201 + t10202;
  t10137 = -1.*t5169*t6652*t10136;
  t10184 = t9671*t8460;
  t10188 = t10137 + t10184;
  t10191 = t8858*t10136*t8848;
  t10204 = t139*t10203;
  t10206 = t10191 + t10204;
  t10213 = t8858*t139*t10136;
  t10216 = -1.*t8848*t10203;
  t10217 = t10213 + t10216;
  t10130 = 5.e-6*t8949;
  t10131 = t8949*t9833;
  t10349 = -0.12338*t7589;
  t10350 = t10349 + t9603;
  t10353 = 0.002196*t7589;
  t10359 = 0.12338*t8418;
  t10362 = t10353 + t10359;
  t10352 = -1.*t8417*t10350;
  t10363 = t7110*t10362;
  t10364 = t10352 + t10363;
  t10371 = t7110*t10350;
  t10373 = t8417*t10362;
  t10377 = t10371 + t10373;
  t10409 = t5169*t10377;
  t10410 = t6652*t10364*t8460;
  t10413 = t10409 + t10410;
  t10366 = -1.*t5169*t6652*t10364;
  t10384 = t10377*t8460;
  t10388 = t10366 + t10384;
  t10232 = t9706*t9275;
  t10234 = t9733*t8949;
  t10235 = t9738*t8893;
  t10408 = t8858*t10364*t8848;
  t10417 = t139*t10413;
  t10422 = t10408 + t10417;
  t10427 = t8858*t139*t10364;
  t10434 = -1.*t8848*t10413;
  t10437 = t10427 + t10434;
  t10244 = t8978*t9767;
  t10309 = -1.*t9706*t9312;
  t10324 = -1.*t9733*t8978;
  t10327 = -1.*t9738*t9322;
  t9875 = t8858*t9871*t9874;
  t9885 = -1.*t5169*t6652*t9706;
  t9900 = t8858*t5169*t8575*t9706;
  t9901 = -1.*t5169*t9874*t9275;
  t9915 = -1.*t8858*t9871*t9874;
  t10536 = Power(t8460,2);
  t9917 = t5169*t6652*t9706;
  t9947 = -1.*t8858*t5169*t8441*t9706;
  t9948 = t5169*t9874*t9284;
  t10522 = t6652*t9725;
  t10523 = -1.*t8858*t8460*t9683;
  t10528 = t10522 + t10523 + t9746;
  t9707 = -1.*t8858*t8460*t9706;
  t9769 = -1.*t9706*t8890;
  t9770 = -1.*t9683*t9275;
  t10549 = -1.*t8858*t9725*t8575;
  t10550 = -1.*t9683*t8890;
  t10551 = t10549 + t10550 + t9783;
  t10557 = -1.*t6652*t9725;
  t10558 = t8858*t8460*t9683;
  t10560 = t10557 + t10558 + t9810;
  t9804 = t8858*t8460*t9706;
  t10578 = t8858*t9725*t8441;
  t10579 = t9683*t8902;
  t10580 = t10578 + t9846 + t10579;
  t9836 = t9683*t9284;
  t9837 = t9706*t8902;
  t10190 = -1.*t8858*t5169*t10188;
  t10231 = t10188*t9284;
  t10247 = t8858*t5169*t10188;
  t10645 = Power(t8858,2);
  t10310 = -1.*t10188*t9275;
  t10636 = 5.e-6*t9275;
  t10642 = t9275*t10560;
  t10397 = -1.*t8858*t5169*t10388;
  t10644 = t8858*t9725*t8575;
  t10671 = t9683*t8890;
  t10459 = t10388*t9284;
  t10689 = t9312*t10528;
  t10482 = t8858*t5169*t10388;
  t10693 = -1.*t8858*t9725*t8965;
  t10493 = -1.*t10388*t9275;
  t10697 = -1.*t9683*t8976;
  t10562 = -1.*t8858*t9725;
  t10564 = -1.*t6652*t9877;
  t10569 = -1.*t6652*t9725*t8441;
  t10571 = t8858*t9877*t8441;
  t10530 = t8858*t9725;
  t10531 = t6652*t9877;
  t10541 = t6652*t9725*t8575;
  t10543 = -1.*t8858*t9877*t8575;
  t10759 = -1.*t8858*t9681;
  t10763 = t10557 + t10759;
  t10646 = t10645*t10136*t8441;
  t10791 = t8858*t9681;
  t10792 = t10522 + t10791;
  t10691 = -1.*t10645*t10136*t8575;
  t10833 = Power(t6652,2);
  t10825 = 5.e-6*t8858*t8575;
  t10826 = t8858*t10763*t8575;
  t10830 = -1.*t6652*t9681*t8575;
  t10835 = t9610*t8441;
  t10715 = t10645*t10364*t8441;
  t10846 = t8858*t10792*t8965;
  t10852 = -1.*t9610*t8575;
  t10738 = -1.*t10645*t10364*t8575;
  t10857 = t6652*t9681*t8965;
  t10903 = 0.000019380093084*t8575;
  t10907 = 5.e-6*t8441;
  t10908 = -0.124119*t8441;
  t10909 = -0.0875*t8965;
  t10910 = t10908 + t10909;
  t10913 = -0.02973458*t10910;
  t10914 = t10903 + t10907 + t10913;
  p_output1[0]=var2[17]*(-0.5*(-0.02973458*t8893 + 0.000529236*t8917)*var2[4] - 0.5*(0.000529236*t139*t8507 - 0.02973458*t139*t8711)*var2[5] - 0.5*(-0.02973458*t8862 + 0.000529236*t8877)*var2[15] - 0.5*t8985*var2[16] - 0.5*t8985*var2[17]);
  p_output1[1]=var2[17]*(-0.5*(-0.02973458*(-1.*t8893*t9017 - 1.*t9020*t9275) + 0.000529236*(-1.*t8917*t9017 - 1.*t9020*t9284))*var2[3] - 0.5*(0.02973458*t9020*t9084 - 0.000529236*t9020*t9097)*var2[4] - 0.5*(0.000529236*(t8902*t9017 + t8507*t8848*t9020) - 0.02973458*(t8890*t9017 + t8711*t8848*t9020))*var2[5] - 0.5*(-0.02973458*(-1.*t5169*t8575*t8858*t9017 - 1.*t9020*t9220) + 0.000529236*(-1.*t5169*t8441*t8858*t9017 - 1.*t9020*t9228))*var2[15] - 0.5*t9330*var2[16] - 0.5*t9330*var2[17]);
  p_output1[2]=var2[17]*(-0.5*(0.000529236*(-1.*t8917*t9020 + t9017*t9284) - 0.02973458*t9307)*var2[3] - 0.5*(-0.02973458*t9017*t9084 + 0.000529236*t9017*t9097)*var2[4] - 0.5*(-0.02973458*(-1.*t8711*t8848*t9017 + t8890*t9020) + 0.000529236*(-1.*t8507*t8848*t9017 + t8902*t9020))*var2[5] - 0.5*(-0.02973458*(-1.*t5169*t8575*t8858*t9020 + t9017*t9220) + 0.000529236*(-1.*t5169*t8441*t8858*t9020 + t9017*t9228))*var2[15] - 0.5*t9540*var2[16] - 0.5*t9540*var2[17]);
  p_output1[3]=var2[17]*(-0.5*(5.e-6*t8917 + 0.006197*t9719 - 0.02973458*(t8917*t9833 + t9719*t9850 + t9696*(t8917*t9733 + t9097*t9738 + t9738*t9799 + t8917*t9990) + t9799*(-1.*t9719*t9733 - 1.*t9696*t9738 - 1.*t9719*t9990 - 1.*t9738*t9997)) + 0.000529236*(t8893*t9767 + t9719*t9787 + t9696*(-1.*t8893*t9733 - 1.*t8949*t9738 - 1.*t9084*t9738 - 1.*t8893*t9990) + t8949*(t9719*t9733 + t9696*t9738 + t9719*t9990 + t9738*t9997)))*var2[4] - 0.5*(5.e-6*t139*t8507 - 0.006197*t139*t5169*t8858 + 0.000529236*(t8949*(t5169*t8858*t9683 + t139*t9696*t9701 + t9707 - 1.*t8848*t9701*t9719 - 1.*t139*t5169*t8858*t9733 + t5169*t8848*t8858*t9738) + t139*t8711*t9767 + t9696*(t8848*t8893*t9701 - 1.*t139*t8949*t9701 - 1.*t139*t8711*t9733 + t8711*t8848*t9738 + t9769 + t9770) - 1.*t139*t5169*t8858*t9787) - 0.02973458*(t9799*(-1.*t5169*t8858*t9683 - 1.*t139*t9696*t9701 + t8848*t9701*t9719 + t139*t5169*t8858*t9733 - 1.*t5169*t8848*t8858*t9738 + t9804) + t139*t8507*t9833 + t9696*(-1.*t8848*t8917*t9701 + t139*t8507*t9733 - 1.*t8507*t8848*t9738 + t139*t9701*t9799 + t9836 + t9837) - 1.*t139*t5169*t8858*t9850))*var2[5] - 0.5*(5.e-6*t8877 + 0.006197*t9867 + 0.000529236*(t8862*t9767 + t9787*t9867 + t8949*(t9733*t9867 + t9875 + t9696*t9880 + t9885 + t9719*t9891 + t9738*t9896) + t9696*(-1.*t8862*t9733 - 1.*t9220*t9738 - 1.*t8949*t9880 - 1.*t8893*t9891 + t9900 + t9901)) - 0.02973458*(t8877*t9833 + t9850*t9867 + t9799*(-1.*t9733*t9867 - 1.*t9696*t9880 - 1.*t9719*t9891 - 1.*t9738*t9896 + t9915 + t9917) + t9696*(t8877*t9733 + t9228*t9738 + t9799*t9880 + t8917*t9891 + t9947 + t9948)))*var2[15] - 0.5*(t10130 + 0.000529236*(t10244 + (t10309 + t10310 + t10324 + t10327 - 1.*t10217*t8893 - 1.*t10206*t8949)*t9696 + t8949*(t10247 + t10206*t9696 + t10217*t9719)) - 0.02973458*(t10131 + (t10190 - 1.*t10206*t9696 - 1.*t10217*t9719)*t9799 + t9696*(t10231 + t10232 + t10234 + t10235 + t10217*t8917 + t10206*t9799)))*var2[16] - 0.5*(t10130 + 0.000529236*(t10244 + (t10309 + t10324 + t10327 + t10493 - 1.*t10437*t8893 - 1.*t10422*t8949)*t9696 + t8949*(t10482 + t10422*t9696 + t10437*t9719)) - 0.02973458*(t10131 + (t10397 - 1.*t10422*t9696 - 1.*t10437*t9719)*t9799 + t9696*(t10232 + t10234 + t10235 + t10459 + t10437*t8917 + t10422*t9799)))*var2[17]);
  p_output1[4]=var2[17]*(-0.5*(-0.006197*t8460*t8858 + 5.e-6*t8902 + 0.000529236*(-1.*t10551*t8460*t8858 + t10528*t8890 + t9275*(-1.*t8460*t8858*t9701 + t9707) + t5169*t8858*(-1.*t8711*t9683 - 1.*t8890*t9701 + t9769 + t9770)) - 0.02973458*(-1.*t10580*t8460*t8858 + t10560*t8902 + t9284*(t8460*t8858*t9701 + t9804) + t5169*t8858*(t8507*t9683 + t8902*t9701 + t9836 + t9837)))*var2[5] - 0.5*(-0.006197*t5169*t6652 - 5.e-6*t5169*t8441*t8858 + 0.000529236*(-1.*t10551*t5169*t6652 - 1.*t10528*t5169*t8575*t8858 + t9275*(t10530 + t10531 + t6652*t8460*t9683 + t10536*t8858*t9874 + t9875 + t9885) + t5169*t8858*(t10541 + t10543 - 1.*t8460*t8575*t8858*t9683 + t8460*t8890*t9874 + t9900 + t9901)) - 0.02973458*(-1.*t10580*t5169*t6652 - 1.*t10560*t5169*t8441*t8858 + t9284*(t10562 + t10564 - 1.*t6652*t8460*t9683 - 1.*t10536*t8858*t9874 + t9915 + t9917) + t5169*t8858*(t10569 + t10571 + t8441*t8460*t8858*t9683 - 1.*t8460*t8902*t9874 + t9947 + t9948)))*var2[15] - 0.5*(t10636 + 0.000529236*(t10689 + t5169*t8858*(t10309 + t10310 + t10691 + t10693 + t10697 - 1.*t10203*t8890) + (t10247 + t10136*t6652*t8858 - 1.*t10203*t8460*t8858)*t9275) - 0.02973458*(t10642 + t5169*t8858*(t10231 + t10232 + t10644 + t10646 + t10671 + t10203*t8902) + (t10190 - 1.*t10136*t6652*t8858 + t10203*t8460*t8858)*t9284))*var2[16] - 0.5*(t10636 + 0.000529236*(t10689 + t5169*t8858*(t10309 + t10493 + t10693 + t10697 + t10738 - 1.*t10413*t8890) + (t10482 + t10364*t6652*t8858 - 1.*t10413*t8460*t8858)*t9275) - 0.02973458*(t10642 + t5169*t8858*(t10232 + t10459 + t10644 + t10671 + t10715 + t10413*t8902) + (t10397 - 1.*t10364*t6652*t8858 + t10413*t8460*t8858)*t9284))*var2[17]);
  p_output1[5]=var2[17]*(-0.5*(-5.e-6*t6652*t8441 + 0.006197*t8858 - 0.02973458*(-1.*t10763*t6652*t8441 + t8858*(t10578 + t8459*t9610 - 1.*t6652*t8441*t9681) + t6652*(t10569 + t10571 - 1.*t8441*t8858*t9681 - 1.*t6652*t8441*t9874) + t8441*t8858*(t10562 + t10564 + t6652*t9681 - 1.*t8858*t9874)) + 0.000529236*(-1.*t10792*t6652*t8575 + t8858*(t10549 - 1.*t8441*t9610 + t6652*t8575*t9681) + t6652*(t10541 + t10543 + t8575*t8858*t9681 + t6652*t8575*t9874) + t8575*t8858*(t10530 + t10531 - 1.*t6652*t9681 + t8858*t9874)))*var2[15] - 0.5*(t10825 + 0.000529236*(t10846 + t6652*(t10691 + t10693 + t10852 + t10857 - 1.*t10136*t10833*t8575 - 1.*t8441*t9671)) - 0.02973458*(t10826 + t6652*(t10644 + t10646 + t10830 + t10835 + t10136*t10833*t8441 + t8459*t9671)))*var2[16] - 0.5*(t10825 - 0.02973458*(t10826 + t6652*(t10644 + t10715 + t10830 + t10835 + t10364*t10833*t8441 + t10377*t8459)) + 0.000529236*(t10846 + t6652*(t10693 + t10738 + t10852 + t10857 - 1.*t10377*t8441 - 1.*t10364*t10833*t8575)))*var2[17]);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=var2[17]*(-0.5*t10914*var2[16] - 0.5*t10914*var2[17]);
  p_output1[16]=-0.5*(0.000529236*(-1.*t10350*t7589 + 0.21935*t8418 + t10362*t8418 + t8418*t9573 + t7589*t9604) - 0.02973458*(0.21935*t7589 + t10362*t7589 + t10350*t8418 + t7589*t9573 - 1.*t8418*t9604))*Power(var2[17],2);
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

#include "Ce1_vec18_laikago_description.hh"

namespace SymFunction
{

void Ce1_vec18_laikago_description_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
