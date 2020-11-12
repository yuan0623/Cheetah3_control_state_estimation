/*
 * Automatically Generated from Mathematica.
 * Fri 21 Dec 2018 15:11:53 GMT-05:00
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
  double t220;
  double t363;
  double t205;
  double t481;
  double t1592;
  double t1613;
  double t1678;
  double t709;
  double t1164;
  double t1341;
  double t1347;
  double t1782;
  double t2470;
  double t2510;
  double t2874;
  double t1824;
  double t4093;
  double t4115;
  double t4285;
  double t4339;
  double t4555;
  double t4586;
  double t4749;
  double t4799;
  double t4968;
  double t5003;
  double t343;
  double t578;
  double t672;
  double t5725;
  double t5726;
  double t5732;
  double t5791;
  double t5594;
  double t5966;
  double t6059;
  double t6142;
  double t6236;
  double t6256;
  double t6265;
  double t6349;
  double t6436;
  double t3848;
  double t4068;
  double t4080;
  double t4744;
  double t5090;
  double t5135;
  double t5142;
  double t5173;
  double t5361;
  double t6803;
  double t6972;
  double t7048;
  double t7280;
  double t7334;
  double t7828;
  double t7836;
  double t8079;
  double t7824;
  double t8246;
  double t7047;
  double t7400;
  double t7452;
  double t760;
  double t1682;
  double t1832;
  double t1841;
  double t1859;
  double t1894;
  double t9124;
  double t9146;
  double t9153;
  double t9102;
  double t9104;
  double t9105;
  double t2397;
  double t2937;
  double t3005;
  double t3006;
  double t3148;
  double t3168;
  double t9159;
  double t9188;
  double t9195;
  double t9214;
  double t9219;
  double t9220;
  double t9396;
  double t9398;
  double t9401;
  double t5404;
  double t6521;
  double t7628;
  double t7643;
  double t8911;
  double t9011;
  double t9080;
  double t9095;
  double t9099;
  double t9558;
  double t9559;
  double t9562;
  double t9566;
  double t9567;
  double t9568;
  double t9579;
  double t9589;
  double t9590;
  double t9591;
  double t9592;
  double t9643;
  double t9644;
  double t9648;
  double t9595;
  double t9596;
  double t9602;
  double t9613;
  double t9615;
  double t9619;
  double t9625;
  double t9626;
  double t9628;
  double t9633;
  double t9634;
  double t9637;
  double t9676;
  double t9679;
  double t9681;
  double t9669;
  double t9670;
  double t9671;
  double t9682;
  double t9687;
  double t9688;
  double t9709;
  double t9712;
  double t9713;
  double t9733;
  double t9738;
  double t9740;
  double t9746;
  double t9747;
  double t9750;
  double t9672;
  double t9689;
  double t9694;
  double t9762;
  double t9763;
  double t9698;
  double t9699;
  double t9858;
  double t9863;
  double t9864;
  double t9870;
  double t9871;
  double t9874;
  double t9719;
  double t9892;
  double t9893;
  double t9897;
  double t9751;
  double t9770;
  double t9911;
  double t9912;
  double t9913;
  double t9915;
  double t9916;
  double t9917;
  double t9868;
  double t9876;
  double t9879;
  double t9788;
  double t9803;
  double t9809;
  double t9923;
  double t9924;
  double t9828;
  double t9835;
  double t9881;
  double t9882;
  double t9840;
  double t9842;
  double t9662;
  double t9663;
  double t9664;
  double t6126;
  double t6441;
  double t6458;
  double t6472;
  double t6474;
  double t6499;
  double t6556;
  double t6567;
  double t6573;
  double t6745;
  double t8220;
  double t8320;
  double t8642;
  double t8693;
  double t9008;
  double t9010;
  double t9019;
  double t9031;
  double t9050;
  double t9060;
  double t9078;
  double t9653;
  double t9654;
  double t9655;
  double t9228;
  double t9231;
  double t9232;
  double t9255;
  double t9275;
  double t9277;
  double t9285;
  double t9293;
  double t9316;
  double t9320;
  double t9397;
  double t9433;
  double t9435;
  double t9439;
  double t9445;
  double t9447;
  double t9450;
  double t9453;
  double t9459;
  double t9472;
  double t9495;
  double t9510;
  double t9514;
  double t9515;
  double t9519;
  double t9520;
  double t9521;
  double t9524;
  double t9525;
  double t10020;
  double t10022;
  double t10026;
  double t9530;
  double t9531;
  double t9532;
  double t9536;
  double t9538;
  double t9542;
  double t9650;
  double t9651;
  double t9658;
  double t9666;
  double t9667;
  double t9612;
  double t9620;
  double t9621;
  double t9632;
  double t9638;
  double t9639;
  double t9696;
  double t9700;
  double t9703;
  double t9704;
  double t9732;
  double t9745;
  double t9752;
  double t9753;
  double t9755;
  double t9764;
  double t9771;
  double t9772;
  double t9775;
  double t9714;
  double t9717;
  double t9718;
  double t9720;
  double t9725;
  double t9726;
  double t9780;
  double t9781;
  double t9789;
  double t9796;
  double t9797;
  double t9799;
  double t9801;
  double t9806;
  double t9812;
  double t9813;
  double t9820;
  double t9822;
  double t9824;
  double t9825;
  double t9830;
  double t9832;
  double t9833;
  double t9836;
  double t9837;
  double t9839;
  double t9841;
  double t9843;
  double t9844;
  double t9846;
  double t9880;
  double t9883;
  double t9886;
  double t9890;
  double t9898;
  double t9899;
  double t9901;
  double t9903;
  double t9906;
  double t9907;
  double t9910;
  double t9914;
  double t9918;
  double t9921;
  double t9922;
  double t9926;
  double t9930;
  double t9935;
  double t9936;
  double t9938;
  double t9940;
  double t9941;
  double t9942;
  double t9945;
  double t9952;
  double t9953;
  double t9954;
  double t9956;
  double t9957;
  double t9963;
  double t9965;
  double t9966;
  double t9974;
  double t9975;
  double t9976;
  double t9979;
  double t9983;
  double t9985;
  double t9986;
  double t9987;
  double t9988;
  double t9991;
  double t9993;
  double t9994;
  double t9997;
  double t9998;
  double t9999;
  double t10000;
  double t10001;
  double t10142;
  double t10143;
  double t10144;
  double t9593;
  double t9594;
  double t9623;
  double t9640;
  double t9641;
  double t10082;
  double t10084;
  double t10085;
  double t10086;
  double t10088;
  double t10260;
  double t10261;
  double t10263;
  double t9891;
  double t9908;
  double t9939;
  double t9972;
  double t10003;
  double t10005;
  double t10217;
  double t10219;
  double t10221;
  double t10222;
  double t10223;
  double t10224;
  double t10118;
  double t10119;
  double t10121;
  double t10122;
  double t10124;
  double t10126;
  double t10309;
  double t10310;
  double t10314;
  double t10269;
  double t10273;
  double t10274;
  double t10288;
  double t10290;
  double t10291;
  double t9707;
  double t9728;
  double t9777;
  double t9821;
  double t9853;
  double t9855;
  double t10204;
  double t10206;
  double t10209;
  double t10211;
  double t10212;
  double t10213;
  double t10101;
  double t10104;
  double t10105;
  double t10111;
  double t10113;
  double t10116;
  double t10302;
  double t10303;
  double t10306;
  double t10307;
  double t10308;
  double t10317;
  double t10318;
  double t9101;
  double t9107;
  double t9154;
  double t9221;
  double t9223;
  double t9224;
  double t10147;
  double t10153;
  double t10154;
  double t10155;
  double t10161;
  double t10162;
  double t10027;
  double t10029;
  double t10031;
  double t10035;
  double t10039;
  double t10040;
  double t10355;
  double t10362;
  double t10366;
  double t10368;
  double t10374;
  double t10375;
  double t10376;
  double t10258;
  double t10264;
  double t10265;
  double t10267;
  double t10268;
  double t10275;
  double t10276;
  double t10465;
  double t10466;
  double t10467;
  double t10468;
  double t10469;
  double t10473;
  double t9526;
  double t9527;
  double t9533;
  double t9534;
  double t9550;
  double t9551;
  double t10181;
  double t10182;
  double t10184;
  double t10187;
  double t10191;
  double t10192;
  double t10057;
  double t10058;
  double t10059;
  double t10060;
  double t10065;
  double t10069;
  double t10382;
  double t10384;
  double t10385;
  double t10387;
  double t10389;
  double t10390;
  double t10401;
  double t10280;
  double t10281;
  double t10284;
  double t10285;
  double t10286;
  double t10293;
  double t10294;
  double t10441;
  double t10444;
  double t10445;
  double t10446;
  double t10449;
  double t10496;
  double t10497;
  double t10498;
  double t10499;
  double t10502;
  double t9274;
  double t9343;
  double t9436;
  double t9441;
  double t9442;
  double t10164;
  double t10170;
  double t10174;
  double t10175;
  double t10176;
  double t10044;
  double t10045;
  double t10046;
  double t10047;
  double t10052;
  double t10342;
  double t10343;
  double t10344;
  double t10348;
  double t10351;
  double t10246;
  double t10247;
  double t10252;
  double t10253;
  double t10254;
  double t10429;
  double t10430;
  double t10432;
  double t10522;
  double t10523;
  double t10525;
  double t10488;
  double t10491;
  double t10492;
  double t2206;
  double t3636;
  double t3748;
  double t10133;
  double t10135;
  double t10137;
  double t10011;
  double t10016;
  double t10018;
  double t10334;
  double t10336;
  double t10338;
  double t10234;
  double t10238;
  double t10239;
  t220 = Cos(var1[11]);
  t363 = Sin(var1[10]);
  t205 = Cos(var1[10]);
  t481 = Sin(var1[11]);
  t1592 = -1.*t220*t363;
  t1613 = -1.*t205*t481;
  t1678 = t1592 + t1613;
  t709 = Sin(var1[4]);
  t1164 = Cos(var1[4]);
  t1341 = Cos(var1[5]);
  t1347 = Sin(var1[9]);
  t1782 = Cos(var1[9]);
  t2470 = -1.*t205*t220;
  t2510 = t363*t481;
  t2874 = t2470 + t2510;
  t1824 = Sin(var1[5]);
  t4093 = -1.*t220;
  t4115 = 1. + t4093;
  t4285 = 0.100689*t4115;
  t4339 = 0.080689*t220;
  t4555 = -0.16*t481;
  t4586 = t4285 + t4339 + t4555;
  t4749 = -0.20833*t4115;
  t4799 = -0.36833*t220;
  t4968 = 0.02*t481;
  t5003 = t4749 + t4799 + t4968;
  t343 = t205*t220;
  t578 = -1.*t363*t481;
  t672 = t343 + t578;
  t5725 = 0.242889*t363;
  t5726 = -1.*t363*t4586;
  t5732 = t205*t5003;
  t5791 = t5725 + t5726 + t5732;
  t5594 = 0.035165*t1347;
  t5966 = t1782*t5791;
  t6059 = t5594 + t5966;
  t6142 = -1.*t1782;
  t6236 = 1. + t6142;
  t6256 = 0.081715*t6236;
  t6265 = 0.11688*t1782;
  t6349 = -1.*t1347*t5791;
  t6436 = t6256 + t6265 + t6349;
  t3848 = -1.*t205;
  t4068 = 1. + t3848;
  t4080 = 0.242889*t4068;
  t4744 = t205*t4586;
  t5090 = t363*t5003;
  t5135 = t4080 + t4744 + t5090;
  t5142 = t220*t363;
  t5173 = t205*t481;
  t5361 = t5142 + t5173;
  t6803 = -0.16*t220;
  t6972 = t6803 + t4968;
  t7048 = 0.02*t220;
  t7280 = 0.16*t481;
  t7334 = t7048 + t7280;
  t7828 = -1.*t363*t6972;
  t7836 = t205*t7334;
  t8079 = t7828 + t7836;
  t7824 = Power(t1782,2);
  t8246 = Power(t1347,2);
  t7047 = t205*t6972;
  t7400 = t363*t7334;
  t7452 = t7047 + t7400;
  t760 = t672*t709;
  t1682 = -1.*t1341*t1347*t1678;
  t1832 = -1.*t1782*t1678*t1824;
  t1841 = t1682 + t1832;
  t1859 = t1164*t1841;
  t1894 = t760 + t1859;
  t9124 = t1347*t6059;
  t9146 = t1782*t6436;
  t9153 = t9124 + t9146;
  t9102 = -1.*t1347*t6059;
  t9104 = -1.*t1782*t6436;
  t9105 = t9102 + t9104;
  t2397 = t1678*t709;
  t2937 = -1.*t1341*t1347*t2874;
  t3005 = -1.*t1782*t2874*t1824;
  t3006 = t2937 + t3005;
  t3148 = t1164*t3006;
  t3168 = t2397 + t3148;
  t9159 = t5361*t709;
  t9188 = -1.*t1341*t1347*t672;
  t9195 = -1.*t1782*t672*t1824;
  t9214 = t9188 + t9195;
  t9219 = t1164*t9214;
  t9220 = t9159 + t9219;
  t9396 = t220*t5003;
  t9398 = -0.242889*t481;
  t9401 = t4586*t481;
  t5404 = -1.*t5135*t5361;
  t6521 = t5135*t672;
  t7628 = -1.*t7452*t5361;
  t7643 = -1.*t5135*t672;
  t8911 = t5135*t1678;
  t9011 = t7452*t672;
  t9080 = t1782*t1341;
  t9095 = -1.*t1347*t1824;
  t9099 = t9080 + t9095;
  t9558 = Sin(var1[3]);
  t9559 = t1782*t1341*t1678;
  t9562 = -1.*t1347*t1678*t1824;
  t9566 = t9559 + t9562;
  t9567 = t9558*t9566;
  t9568 = Cos(var1[3]);
  t9579 = t1164*t672;
  t9589 = -1.*t709*t1841;
  t9590 = t9579 + t9589;
  t9591 = t9568*t9590;
  t9592 = t9567 + t9591;
  t9643 = t9568*t9566;
  t9644 = -1.*t9558*t9590;
  t9648 = t9643 + t9644;
  t9595 = t1782*t1341*t672;
  t9596 = -1.*t1347*t672*t1824;
  t9602 = t9595 + t9596;
  t9613 = t1164*t5361;
  t9615 = -1.*t709*t9214;
  t9619 = t9613 + t9615;
  t9625 = t1782*t1341*t2874;
  t9626 = -1.*t1347*t2874*t1824;
  t9628 = t9625 + t9626;
  t9633 = t1164*t1678;
  t9634 = -1.*t709*t3006;
  t9637 = t9633 + t9634;
  t9676 = t1341*t1347;
  t9679 = t1782*t1824;
  t9681 = t9676 + t9679;
  t9669 = t1341*t6436;
  t9670 = -1.*t6059*t1824;
  t9671 = t9669 + t9670;
  t9682 = t1341*t6059;
  t9687 = t6436*t1824;
  t9688 = t9682 + t9687;
  t9709 = -1.*t9099*t9671;
  t9712 = -1.*t9681*t9688;
  t9713 = t9709 + t9712;
  t9733 = -1.*t1341*t1347*t8079;
  t9738 = -1.*t1782*t8079*t1824;
  t9740 = t9733 + t9738;
  t9746 = t1782*t1341*t8079;
  t9747 = -1.*t1347*t8079*t1824;
  t9750 = t9746 + t9747;
  t9672 = t9099*t9671;
  t9689 = t9681*t9688;
  t9694 = t9672 + t9689;
  t9762 = t9671*t1841;
  t9763 = t9688*t9566;
  t9698 = -1.*t9671*t1841;
  t9699 = -1.*t9688*t9566;
  t9858 = t5135*t709;
  t9863 = t1164*t9671;
  t9864 = t9858 + t9863;
  t9870 = t1164*t5135;
  t9871 = -1.*t709*t9671;
  t9874 = t9870 + t9871;
  t9719 = t9688*t9602;
  t9892 = -1.*t1164*t9099*t9864;
  t9893 = t709*t9099*t9874;
  t9897 = t9712 + t9892 + t9893;
  t9751 = -1.*t9681*t9750;
  t9770 = t9750*t9602;
  t9911 = t7452*t709;
  t9912 = t1164*t9740;
  t9913 = t9911 + t9912;
  t9915 = t1164*t7452;
  t9916 = -1.*t709*t9740;
  t9917 = t9915 + t9916;
  t9868 = t1164*t9099*t9864;
  t9876 = -1.*t709*t9099*t9874;
  t9879 = t9689 + t9868 + t9876;
  t9788 = t9681*t9750;
  t9803 = -1.*t9750*t9566;
  t9809 = -1.*t9688*t9628;
  t9923 = t9864*t1894;
  t9924 = t9874*t9590;
  t9828 = -1.*t9688*t9602;
  t9835 = -1.*t9750*t9602;
  t9881 = -1.*t9864*t1894;
  t9882 = -1.*t9874*t9590;
  t9840 = t9750*t9566;
  t9842 = t9688*t9628;
  t9662 = t9568*t9628;
  t9663 = -1.*t9558*t9637;
  t9664 = t9662 + t9663;
  t6126 = -1.*t1782*t6059*t672;
  t6441 = t1347*t6436*t672;
  t6458 = t5404 + t6126 + t6441;
  t6472 = t1678*t6458;
  t6474 = t1782*t6059*t1678;
  t6499 = -1.*t1347*t6436*t1678;
  t6556 = t6474 + t6499 + t6521;
  t6567 = t672*t6556;
  t6573 = -1.*t1782*t6059*t1678;
  t6745 = t1347*t6436*t1678;
  t8220 = -1.*t7824*t8079*t672;
  t8320 = -1.*t8246*t8079*t672;
  t8642 = t6573 + t6745 + t7628 + t7643 + t8220 + t8320;
  t8693 = t672*t8642;
  t9008 = t7824*t8079*t1678;
  t9010 = t8246*t8079*t1678;
  t9019 = t1782*t6059*t2874;
  t9031 = -1.*t1347*t6436*t2874;
  t9050 = t8911 + t9008 + t9010 + t9011 + t9019 + t9031;
  t9060 = t5361*t9050;
  t9078 = t6472 + t6567 + t8693 + t9060;
  t9653 = t9568*t9602;
  t9654 = -1.*t9558*t9619;
  t9655 = t9653 + t9654;
  t9228 = 0.242889*t220;
  t9231 = -1.*t220*t4586;
  t9232 = t5003*t481;
  t9255 = t9228 + t9231 + t9232;
  t9275 = -0.242889*t220;
  t9277 = t220*t4586;
  t9285 = t220*t7334;
  t9293 = -1.*t5003*t481;
  t9316 = t6972*t481;
  t9320 = t9275 + t9277 + t9285 + t9293 + t9316;
  t9397 = -1.*t220*t6972;
  t9433 = t7334*t481;
  t9435 = t9396 + t9397 + t9398 + t9401 + t9433;
  t9439 = t9396 + t9398 + t9401;
  t9445 = -1.*t5791*t672;
  t9447 = t5404 + t9445;
  t9450 = t1678*t9447;
  t9453 = t5791*t1678;
  t9459 = t9453 + t6521;
  t9472 = t672*t9459;
  t9495 = -1.*t5791*t1678;
  t9510 = -1.*t8079*t672;
  t9514 = t9495 + t7628 + t7643 + t9510;
  t9515 = t672*t9514;
  t9519 = t8079*t1678;
  t9520 = t5791*t2874;
  t9521 = t8911 + t9519 + t9011 + t9520;
  t9524 = t5361*t9521;
  t9525 = t9450 + t9472 + t9515 + t9524;
  t10020 = t9568*t9681;
  t10022 = t9558*t709*t9099;
  t10026 = t10020 + t10022;
  t9530 = -0.11688*t672;
  t9531 = -0.081715*t2874;
  t9532 = t9530 + t9531;
  t9536 = -0.081715*t1678;
  t9538 = -0.11688*t5361;
  t9542 = t9536 + t9538;
  t9650 = 0.241*t9220*t9648;
  t9651 = 0.241*t3168*t9648;
  t9658 = 0.241*t1894*t9655;
  t9666 = 0.241*t1894*t9664;
  t9667 = t9650 + t9651 + t9658 + t9666;
  t9612 = t9558*t9602;
  t9620 = t9568*t9619;
  t9621 = t9612 + t9620;
  t9632 = t9558*t9628;
  t9638 = t9568*t9637;
  t9639 = t9632 + t9638;
  t9696 = t9566*t9694;
  t9700 = t7643 + t9698 + t9699;
  t9703 = t9681*t9700;
  t9704 = t9696 + t9703;
  t9732 = t9566*t9713;
  t9745 = -1.*t9099*t9740;
  t9752 = t9745 + t9751;
  t9753 = t9602*t9752;
  t9755 = t7452*t5361;
  t9764 = t9740*t9214;
  t9771 = t9755 + t6521 + t9762 + t9763 + t9764 + t9770;
  t9772 = t9681*t9771;
  t9775 = t9732 + t9753 + t9772;
  t9714 = t9602*t9713;
  t9717 = t5135*t5361;
  t9718 = t9671*t9214;
  t9720 = t9717 + t9718 + t9719;
  t9725 = t9681*t9720;
  t9726 = t9714 + t9725;
  t9780 = t9628*t9694;
  t9781 = t9099*t9740;
  t9789 = t9781 + t9788;
  t9796 = t9566*t9789;
  t9797 = -1.*t5135*t1678;
  t9799 = -1.*t7452*t672;
  t9801 = -1.*t9740*t1841;
  t9806 = -1.*t9671*t3006;
  t9812 = t9797 + t9799 + t9801 + t9803 + t9806 + t9809;
  t9813 = t9681*t9812;
  t9820 = t9780 + t9796 + t9813;
  t9822 = t6521 + t9762 + t9763;
  t9824 = t9566*t9822;
  t9825 = -1.*t9671*t9214;
  t9830 = t5404 + t9825 + t9828;
  t9832 = t9628*t9830;
  t9833 = -1.*t9740*t9214;
  t9836 = t7628 + t7643 + t9698 + t9699 + t9833 + t9835;
  t9837 = t9566*t9836;
  t9839 = t9740*t1841;
  t9841 = t9671*t3006;
  t9843 = t8911 + t9011 + t9839 + t9840 + t9841 + t9842;
  t9844 = t9602*t9843;
  t9846 = t9824 + t9832 + t9837 + t9844;
  t9880 = t1894*t9879;
  t9883 = t9699 + t9881 + t9882;
  t9886 = t1164*t9099*t9883;
  t9890 = t9880 + t9886;
  t9898 = t9220*t9897;
  t9899 = t9864*t9220;
  t9901 = t9874*t9619;
  t9903 = t9719 + t9899 + t9901;
  t9906 = t1164*t9099*t9903;
  t9907 = t9898 + t9906;
  t9910 = t1894*t9897;
  t9914 = -1.*t1164*t9099*t9913;
  t9918 = t709*t9099*t9917;
  t9921 = t9751 + t9914 + t9918;
  t9922 = t9220*t9921;
  t9926 = t9913*t9220;
  t9930 = t9917*t9619;
  t9935 = t9763 + t9770 + t9923 + t9924 + t9926 + t9930;
  t9936 = t1164*t9099*t9935;
  t9938 = t9910 + t9922 + t9936;
  t9940 = t3168*t9879;
  t9941 = t1164*t9099*t9913;
  t9942 = -1.*t709*t9099*t9917;
  t9945 = t9788 + t9941 + t9942;
  t9952 = t1894*t9945;
  t9953 = -1.*t9913*t1894;
  t9954 = -1.*t9917*t9590;
  t9956 = -1.*t9864*t3168;
  t9957 = -1.*t9874*t9637;
  t9963 = t9803 + t9809 + t9953 + t9954 + t9956 + t9957;
  t9965 = t1164*t9099*t9963;
  t9966 = t9940 + t9952 + t9965;
  t9974 = t9763 + t9923 + t9924;
  t9975 = t1894*t9974;
  t9976 = -1.*t9864*t9220;
  t9979 = -1.*t9874*t9619;
  t9983 = t9828 + t9976 + t9979;
  t9985 = t3168*t9983;
  t9986 = -1.*t9913*t9220;
  t9987 = -1.*t9917*t9619;
  t9988 = t9699 + t9835 + t9881 + t9882 + t9986 + t9987;
  t9991 = t1894*t9988;
  t9993 = t9913*t1894;
  t9994 = t9917*t9590;
  t9997 = t9864*t3168;
  t9998 = t9874*t9637;
  t9999 = t9840 + t9842 + t9993 + t9994 + t9997 + t9998;
  t10000 = t9220*t9999;
  t10001 = t9975 + t9985 + t9991 + t10000;
  t10142 = t9558*t9681;
  t10143 = -1.*t9568*t709*t9099;
  t10144 = t10142 + t10143;
  t9593 = 0.241*t9220*t9592;
  t9594 = 0.241*t3168*t9592;
  t9623 = 0.241*t1894*t9621;
  t9640 = 0.241*t1894*t9639;
  t9641 = t9593 + t9594 + t9623 + t9640;
  t10082 = 0.241*t9648*t9621;
  t10084 = 0.241*t9592*t9655;
  t10085 = 0.241*t9648*t9639;
  t10086 = 0.241*t9592*t9664;
  t10088 = t10082 + t10084 + t10085 + t10086;
  t10260 = t9220*t9974;
  t10261 = t1894*t9983;
  t10263 = t10260 + t10261;
  t9891 = 0.241*t1894*t9890;
  t9908 = 0.241*t3168*t9907;
  t9939 = 0.241*t1894*t9938;
  t9972 = 0.241*t9220*t9966;
  t10003 = 0.241*t1164*t9099*t10001;
  t10005 = t9891 + t9908 + t9939 + t9972 + t10003;
  t10217 = 0.241*t9592*t9890;
  t10219 = 0.241*t9639*t9907;
  t10221 = 0.241*t9592*t9938;
  t10222 = 0.241*t9621*t9966;
  t10223 = 0.241*t10144*t10001;
  t10224 = t10217 + t10219 + t10221 + t10222 + t10223;
  t10118 = 0.241*t9648*t9890;
  t10119 = 0.241*t9664*t9907;
  t10121 = 0.241*t9648*t9938;
  t10122 = 0.241*t9655*t9966;
  t10124 = 0.241*t10026*t10001;
  t10126 = t10118 + t10119 + t10121 + t10122 + t10124;
  t10309 = t9602*t9822;
  t10310 = t9566*t9830;
  t10314 = t10309 + t10310;
  t10269 = t672*t6458;
  t10273 = t5361*t6556;
  t10274 = t10269 + t10273;
  t10288 = t672*t9447;
  t10290 = t5361*t9459;
  t10291 = t10288 + t10290;
  t9707 = 0.241*t1894*t9704;
  t9728 = 0.241*t3168*t9726;
  t9777 = 0.241*t1894*t9775;
  t9821 = 0.241*t9220*t9820;
  t9853 = 0.241*t1164*t9099*t9846;
  t9855 = t9707 + t9728 + t9777 + t9821 + t9853;
  t10204 = 0.241*t9592*t9704;
  t10206 = 0.241*t9592*t9775;
  t10209 = 0.241*t9726*t9639;
  t10211 = 0.241*t9621*t9820;
  t10212 = 0.241*t10144*t9846;
  t10213 = t10204 + t10206 + t10209 + t10211 + t10212;
  t10101 = 0.241*t9648*t9704;
  t10104 = 0.241*t9648*t9775;
  t10105 = 0.241*t9726*t9664;
  t10111 = 0.241*t9655*t9820;
  t10113 = 0.241*t10026*t9846;
  t10116 = t10101 + t10104 + t10105 + t10111 + t10113;
  t10302 = 0.241*t9820*t9890;
  t10303 = 0.241*t9846*t10263;
  t10306 = 0.241*t9775*t9907;
  t10307 = 0.241*t9726*t9938;
  t10308 = 0.241*t9704*t9966;
  t10317 = 0.241*t10314*t10001;
  t10318 = t10302 + t10303 + t10306 + t10307 + t10308 + t10317;
  t9101 = 0.241*t1164*t9078*t9099;
  t9107 = 0.241*t9105*t672*t1894;
  t9154 = 0.241*t9153*t672*t1894;
  t9221 = 0.241*t9153*t1678*t9220;
  t9223 = 0.241*t9105*t5361*t3168;
  t9224 = t9101 + t9107 + t9154 + t9221 + t9223;
  t10147 = 0.241*t9078*t10144;
  t10153 = 0.241*t9105*t672*t9592;
  t10154 = 0.241*t9153*t672*t9592;
  t10155 = 0.241*t9153*t1678*t9621;
  t10161 = 0.241*t9105*t5361*t9639;
  t10162 = t10147 + t10153 + t10154 + t10155 + t10161;
  t10027 = 0.241*t9078*t10026;
  t10029 = 0.241*t9105*t672*t9648;
  t10031 = 0.241*t9153*t672*t9648;
  t10035 = 0.241*t9153*t1678*t9655;
  t10039 = 0.241*t9105*t5361*t9664;
  t10040 = t10027 + t10029 + t10031 + t10035 + t10039;
  t10355 = 0.241*t9153*t1678*t9704;
  t10362 = 0.241*t9078*t10314;
  t10366 = 0.241*t9105*t672*t9726;
  t10368 = 0.241*t9105*t5361*t9775;
  t10374 = 0.241*t9153*t672*t9820;
  t10375 = 0.241*t10274*t9846;
  t10376 = t10355 + t10362 + t10366 + t10368 + t10374 + t10375;
  t10258 = 0.241*t9153*t1678*t9890;
  t10264 = 0.241*t9078*t10263;
  t10265 = 0.241*t9105*t672*t9907;
  t10267 = 0.241*t9105*t5361*t9938;
  t10268 = 0.241*t9153*t672*t9966;
  t10275 = 0.241*t10274*t10001;
  t10276 = t10258 + t10264 + t10265 + t10267 + t10268 + t10275;
  t10465 = 0.01694953*t9153*t1678*t672;
  t10466 = 0.241*t9105*t672*t9542;
  t10467 = 0.241*t9105*t5361*t9532;
  t10468 = 0.241*t10291*t9078;
  t10469 = 0.241*t10274*t9525;
  t10473 = t10465 + t10466 + t10467 + t10468 + t10469;
  t9526 = 0.241*t1164*t9525*t9099;
  t9527 = 0.008474765*t672*t1894;
  t9533 = 0.241*t9532*t1894;
  t9534 = 0.008474765*t1678*t9220;
  t9550 = 0.241*t9542*t3168;
  t9551 = t9526 + t9527 + t9533 + t9534 + t9550;
  t10181 = 0.241*t9525*t10144;
  t10182 = 0.008474765*t672*t9592;
  t10184 = 0.241*t9532*t9592;
  t10187 = 0.008474765*t1678*t9621;
  t10191 = 0.241*t9542*t9639;
  t10192 = t10181 + t10182 + t10184 + t10187 + t10191;
  t10057 = 0.241*t9525*t10026;
  t10058 = 0.008474765*t672*t9648;
  t10059 = 0.241*t9532*t9648;
  t10060 = 0.008474765*t1678*t9655;
  t10065 = 0.241*t9542*t9664;
  t10069 = t10057 + t10058 + t10059 + t10060 + t10065;
  t10382 = 0.008474765*t1678*t9704;
  t10384 = 0.241*t9525*t10314;
  t10385 = 0.241*t9532*t9726;
  t10387 = 0.241*t9542*t9775;
  t10389 = 0.008474765*t672*t9820;
  t10390 = 0.241*t10291*t9846;
  t10401 = t10382 + t10384 + t10385 + t10387 + t10389 + t10390;
  t10280 = 0.008474765*t1678*t9890;
  t10281 = 0.241*t9525*t10263;
  t10284 = 0.241*t9532*t9907;
  t10285 = 0.241*t9542*t9938;
  t10286 = 0.008474765*t672*t9966;
  t10293 = 0.241*t10291*t10001;
  t10294 = t10280 + t10281 + t10284 + t10285 + t10286 + t10293;
  t10441 = 0.241*t9105*t672*t9439;
  t10444 = 0.241*t9153*t1678*t9255;
  t10445 = 0.241*t9105*t5361*t9320;
  t10446 = 0.241*t9153*t672*t9435;
  t10449 = t10441 + t10444 + t10445 + t10446;
  t10496 = 0.008474765*t1678*t9255;
  t10497 = 0.008474765*t672*t9435;
  t10498 = 0.241*t9320*t9542;
  t10499 = 0.241*t9439*t9532;
  t10502 = t10496 + t10497 + t10498 + t10499;
  t9274 = 0.241*t9255*t1894;
  t9343 = 0.241*t9320*t1894;
  t9436 = 0.241*t9435*t9220;
  t9441 = 0.241*t9439*t3168;
  t9442 = t9274 + t9343 + t9436 + t9441;
  t10164 = 0.241*t9255*t9592;
  t10170 = 0.241*t9320*t9592;
  t10174 = 0.241*t9435*t9621;
  t10175 = 0.241*t9439*t9639;
  t10176 = t10164 + t10170 + t10174 + t10175;
  t10044 = 0.241*t9255*t9648;
  t10045 = 0.241*t9320*t9648;
  t10046 = 0.241*t9435*t9655;
  t10047 = 0.241*t9439*t9664;
  t10052 = t10044 + t10045 + t10046 + t10047;
  t10342 = 0.241*t9435*t9704;
  t10343 = 0.241*t9320*t9726;
  t10344 = 0.241*t9439*t9775;
  t10348 = 0.241*t9255*t9820;
  t10351 = t10342 + t10343 + t10344 + t10348;
  t10246 = 0.241*t9435*t9890;
  t10247 = 0.241*t9320*t9907;
  t10252 = 0.241*t9439*t9938;
  t10253 = 0.241*t9255*t9966;
  t10254 = t10246 + t10247 + t10252 + t10253;
  t10429 = 0.00482*t9153*t1678;
  t10430 = -0.03856*t9105*t672;
  t10432 = t10429 + t10430;
  t10522 = -0.03856*t9320;
  t10523 = 0.00482*t9435;
  t10525 = t10522 + t10523;
  t10488 = 0.0001694953*t1678;
  t10491 = -0.03856*t9532;
  t10492 = t10488 + t10491;
  t2206 = 0.00482*t1894;
  t3636 = -0.03856*t3168;
  t3748 = t2206 + t3636;
  t10133 = 0.00482*t9592;
  t10135 = -0.03856*t9639;
  t10137 = t10133 + t10135;
  t10011 = 0.00482*t9648;
  t10016 = -0.03856*t9664;
  t10018 = t10011 + t10016;
  t10334 = -0.03856*t9775;
  t10336 = 0.00482*t9820;
  t10338 = t10334 + t10336;
  t10234 = -0.03856*t9938;
  t10238 = 0.00482*t9966;
  t10239 = t10234 + t10238;
  p_output1[0]=var2[11]*(-0.5*(0.482*t1894*t3168 + 0.482*t1894*t9220)*var2[0] - 0.5*t9667*var2[1] - 0.5*t9641*var2[2] - 0.5*t10005*var2[3] - 0.5*t9855*var2[4] - 0.5*t9224*var2[5] - 0.5*t9551*var2[9] - 0.5*t9442*var2[10] - 0.5*t3748*var2[11]);
  p_output1[1]=var2[11]*(-0.5*t9667*var2[0] - 0.5*(0.482*t9648*t9655 + 0.482*t9648*t9664)*var2[1] - 0.5*t10088*var2[2] - 0.5*t10126*var2[3] - 0.5*t10116*var2[4] - 0.5*t10040*var2[5] - 0.5*t10069*var2[9] - 0.5*t10052*var2[10] - 0.5*t10018*var2[11]);
  p_output1[2]=var2[11]*(-0.5*t9641*var2[0] - 0.5*t10088*var2[1] - 0.5*(0.482*t9592*t9621 + 0.482*t9592*t9639)*var2[2] - 0.5*t10224*var2[3] - 0.5*t10213*var2[4] - 0.5*t10162*var2[5] - 0.5*t10192*var2[9] - 0.5*t10176*var2[10] - 0.5*t10137*var2[11]);
  p_output1[3]=var2[11]*(-0.5*t10005*var2[0] - 0.5*t10126*var2[1] - 0.5*t10224*var2[2] - 0.5*(0.482*t10001*t10263 + 0.482*t9907*t9938 + 0.482*t9890*t9966)*var2[3] - 0.5*t10318*var2[4] - 0.5*t10276*var2[5] - 0.5*t10294*var2[9] - 0.5*t10254*var2[10] - 0.5*t10239*var2[11]);
  p_output1[4]=var2[11]*(-0.5*t9855*var2[0] - 0.5*t10116*var2[1] - 0.5*t10213*var2[2] - 0.5*t10318*var2[3] - 0.5*(0.482*t9726*t9775 + 0.482*t9704*t9820 + 0.482*t10314*t9846)*var2[4] - 0.5*t10376*var2[5] - 0.5*t10401*var2[9] - 0.5*t10351*var2[10] - 0.5*t10338*var2[11]);
  p_output1[5]=var2[11]*(-0.5*t9224*var2[0] - 0.5*t10040*var2[1] - 0.5*t10162*var2[2] - 0.5*t10276*var2[3] - 0.5*t10376*var2[4] - 0.5*(0.482*t10274*t9078 + 0.482*t5361*t672*Power(t9105,2) + 0.482*t1678*t672*Power(t9153,2))*var2[5] - 0.5*t10473*var2[9] - 0.5*t10449*var2[10] - 0.5*t10432*var2[11]);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=var2[11]*(-0.5*t9551*var2[0] - 0.5*t10069*var2[1] - 0.5*t10192*var2[2] - 0.5*t10294*var2[3] - 0.5*t10401*var2[4] - 0.5*t10473*var2[5] - 0.5*(0.00059603022245*t1678*t672 + 0.482*t10291*t9525 + 0.482*t9532*t9542)*var2[9] - 0.5*t10502*var2[10] - 0.5*t10492*var2[11]);
  p_output1[10]=var2[11]*(-0.5*t9442*var2[0] - 0.5*t10052*var2[1] - 0.5*t10176*var2[2] - 0.5*t10254*var2[3] - 0.5*t10351*var2[4] - 0.5*t10449*var2[5] - 0.5*t10502*var2[9] - 0.5*(0.482*t9255*t9435 + 0.482*t9320*t9439)*var2[10] - 0.5*t10525*var2[11]);
  p_output1[11]=(-0.5*t3748*var2[0] - 0.5*t10018*var2[1] - 0.5*t10137*var2[2] - 0.5*t10239*var2[3] - 0.5*t10338*var2[4] - 0.5*t10432*var2[5] - 0.5*t10492*var2[9] - 0.5*t10525*var2[10])*var2[11];
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

#include "Ce2_vec12_plane.hh"

namespace SymFunction
{

void Ce2_vec12_plane_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE