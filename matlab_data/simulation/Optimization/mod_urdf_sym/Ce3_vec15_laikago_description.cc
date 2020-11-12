/*
 * Automatically Generated from Mathematica.
 * Tue 10 Dec 2019 16:02:53 GMT-05:00
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
  double t1204;
  double t1026;
  double t1081;
  double t1294;
  double t1103;
  double t1295;
  double t1352;
  double t477;
  double t1416;
  double t1490;
  double t1863;
  double t662;
  double t1876;
  double t469;
  double t2150;
  double t2201;
  double t2230;
  double t2273;
  double t2495;
  double t2593;
  double t2643;
  double t1398;
  double t2079;
  double t2089;
  double t2264;
  double t2296;
  double t2298;
  double t2329;
  double t2379;
  double t2394;
  double t2421;
  double t2658;
  double t2698;
  double t2705;
  double t2712;
  double t2716;
  double t2735;
  double t2755;
  double t2784;
  double t3131;
  double t3132;
  double t3185;
  double t3265;
  double t3266;
  double t3267;
  double t3546;
  double t3551;
  double t3662;
  double t4035;
  double t4062;
  double t4067;
  double t4075;
  double t4077;
  double t4094;
  double t4109;
  double t4110;
  double t4115;
  double t4117;
  double t4119;
  double t4032;
  double t4108;
  double t4137;
  double t4176;
  double t4031;
  double t4192;
  double t4198;
  double t4211;
  double t4214;
  double t4230;
  double t4255;
  double t4387;
  double t4389;
  double t4466;
  double t4478;
  double t4513;
  double t4532;
  double t4567;
  double t4580;
  double t4584;
  double t4596;
  double t4628;
  double t4682;
  double t4688;
  double t4691;
  double t4675;
  double t4680;
  double t4681;
  double t4645;
  double t4646;
  double t4649;
  double t4013;
  double t4020;
  double t4021;
  double t4199;
  double t4641;
  double t4642;
  double t4749;
  double t4752;
  double t4759;
  double t4703;
  double t4709;
  double t4717;
  double t4916;
  double t4919;
  double t4926;
  double t5275;
  double t5292;
  double t5301;
  double t5223;
  double t5230;
  double t5259;
  double t4761;
  double t5456;
  double t5457;
  double t5461;
  double t4884;
  double t4981;
  double t5116;
  double t5467;
  double t4770;
  double t4777;
  double t4778;
  double t5478;
  double t5482;
  double t4889;
  double t4891;
  double t4892;
  double t5568;
  double t4985;
  double t4987;
  double t5022;
  double t5588;
  double t5590;
  double t5118;
  double t5122;
  double t5124;
  double t5553;
  double t5571;
  double t5846;
  double t5858;
  double t5859;
  double t5873;
  double t5874;
  double t5430;
  double t5513;
  double t6007;
  double t6015;
  double t6016;
  double t6030;
  double t6031;
  double t6034;
  double t5444;
  double t5446;
  double t5925;
  double t5931;
  double t5945;
  double t5949;
  double t5534;
  double t5535;
  double t5561;
  double t5562;
  double t6238;
  double t5863;
  double t5876;
  double t6263;
  double t5898;
  double t5901;
  double t5572;
  double t5575;
  double t5972;
  double t5973;
  double t5975;
  double t6253;
  double t6283;
  double t6507;
  double t6514;
  double t6545;
  double t6312;
  double t6344;
  double t6648;
  double t6651;
  double t6653;
  double t6670;
  double t6689;
  double t6690;
  double t5979;
  double t5981;
  double t5988;
  double t6376;
  double t6388;
  double t6718;
  double t6757;
  double t6758;
  double t6407;
  double t6422;
  double t7119;
  double t7120;
  double t7122;
  double t5841;
  double t5842;
  double t7298;
  double t7306;
  double t7313;
  double t7359;
  double t5917;
  double t5918;
  double t7283;
  double t7383;
  double t7768;
  double t7780;
  double t7793;
  double t2895;
  double t2898;
  double t2917;
  double t7953;
  double t7954;
  double t7957;
  double t7979;
  double t7982;
  double t7989;
  double t7164;
  double t7375;
  double t8310;
  double t8311;
  double t8329;
  double t8331;
  double t8334;
  double t8336;
  double t7513;
  double t7606;
  double t8330;
  double t8410;
  double t8413;
  double t8546;
  double t8550;
  double t8553;
  double t8564;
  double t8565;
  double t8567;
  double t7748;
  double t7826;
  double t7851;
  double t8471;
  double t8492;
  double t8511;
  double t8844;
  double t8845;
  double t8831;
  double t8837;
  double t8838;
  double t7116;
  double t7123;
  double t7127;
  double t7128;
  double t7129;
  double t7139;
  double t7151;
  double t7155;
  double t7157;
  double t7158;
  double t7202;
  double t7494;
  double t8949;
  double t9021;
  double t9045;
  double t7509;
  double t7590;
  double t8930;
  double t8943;
  double t8944;
  double t7621;
  double t7721;
  double t7865;
  double t7879;
  double t7883;
  double t7886;
  double t7916;
  double t7924;
  double t7932;
  double t7978;
  double t8006;
  double t8036;
  double t8055;
  double t8079;
  double t8089;
  double t8135;
  double t8143;
  double t8174;
  double t8182;
  double t8185;
  double t8221;
  double t8289;
  double t8299;
  double t8403;
  double t9091;
  double t8404;
  double t9485;
  double t9488;
  double t9499;
  double t9450;
  double t9457;
  double t9482;
  double t8491;
  double t9164;
  double t8514;
  double t8540;
  double t8545;
  double t9502;
  double t9516;
  double t8581;
  double t8596;
  double t10212;
  double t10274;
  double t10341;
  double t10413;
  double t10414;
  double t10448;
  double t8651;
  double t9738;
  double t9791;
  double t8737;
  double t8738;
  t1204 = Cos(var1[13]);
  t1026 = Cos(var1[14]);
  t1081 = Sin(var1[13]);
  t1294 = Sin(var1[14]);
  t1103 = -1.*t1026*t1081;
  t1295 = -1.*t1204*t1294;
  t1352 = t1103 + t1295;
  t477 = Cos(var1[5]);
  t1416 = t1204*t1026;
  t1490 = -1.*t1081*t1294;
  t1863 = t1416 + t1490;
  t662 = Sin(var1[12]);
  t1876 = Sin(var1[5]);
  t469 = Sin(var1[3]);
  t2150 = Cos(var1[3]);
  t2201 = Cos(var1[12]);
  t2230 = Cos(var1[4]);
  t2273 = Sin(var1[4]);
  t2495 = t1026*t1081;
  t2593 = t1204*t1294;
  t2643 = t2495 + t2593;
  t1398 = -1.*t477*t662*t1352;
  t2079 = t1863*t1876;
  t2089 = t1398 + t2079;
  t2264 = t2201*t2230*t1352;
  t2296 = t477*t1863;
  t2298 = t662*t1352*t1876;
  t2329 = t2296 + t2298;
  t2379 = -1.*t2273*t2329;
  t2394 = t2264 + t2379;
  t2421 = -1.*t477*t662*t1863;
  t2658 = t2643*t1876;
  t2698 = t2421 + t2658;
  t2705 = t2201*t2230*t1863;
  t2712 = t477*t2643;
  t2716 = t662*t1863*t1876;
  t2735 = t2712 + t2716;
  t2755 = -1.*t2273*t2735;
  t2784 = t2705 + t2755;
  t3131 = -1.*t2201*t1352*t2273;
  t3132 = -1.*t2230*t2329;
  t3185 = t3131 + t3132;
  t3265 = -1.*t2201*t1863*t2273;
  t3266 = -1.*t2230*t2735;
  t3267 = t3265 + t3266;
  t3546 = t2230*t662;
  t3551 = t2201*t2273*t1876;
  t3662 = t3546 + t3551;
  t4035 = -1.*t1026;
  t4062 = 1. + t4035;
  t4067 = -0.21935*t4062;
  t4075 = -0.221546*t1026;
  t4077 = -0.12338*t1294;
  t4094 = t4067 + t4075 + t4077;
  t4109 = -1. + t1026;
  t4110 = 0.25*t4109;
  t4115 = -0.37338*t1026;
  t4117 = 0.002196*t1294;
  t4119 = t4110 + t4115 + t4117;
  t4032 = -0.21935*t1081;
  t4108 = -1.*t1081*t4094;
  t4137 = t1204*t4119;
  t4176 = t4032 + t4108 + t4137;
  t4031 = -0.037381*t662;
  t4192 = t2201*t4176;
  t4198 = t4031 + t4192;
  t4211 = -1.*t1204;
  t4214 = 1. + t4211;
  t4230 = -0.21935*t4214;
  t4255 = t1204*t4094;
  t4387 = t1081*t4119;
  t4389 = t4230 + t4255 + t4387;
  t4466 = t477*t4389;
  t4478 = -1.*t2201;
  t4513 = 1. + t4478;
  t4532 = -0.0875*t4513;
  t4567 = -0.124881*t2201;
  t4580 = -1.*t662*t4176;
  t4584 = t4532 + t4567 + t4580;
  t4596 = -1.*t4584*t1876;
  t4628 = t4466 + t4596;
  t4682 = t2230*t4198;
  t4688 = -1.*t2273*t4628;
  t4691 = t4682 + t4688;
  t4675 = t662*t2273;
  t4680 = -1.*t2201*t2230*t1876;
  t4681 = t4675 + t4680;
  t4645 = t4198*t2273;
  t4646 = t2230*t4628;
  t4649 = t4645 + t4646;
  t4013 = t2201*t1352*t2273;
  t4020 = t2230*t2329;
  t4021 = t4013 + t4020;
  t4199 = -1.*t4198*t2273;
  t4641 = -1.*t2230*t4628;
  t4642 = t4199 + t4641;
  t4749 = t477*t4584;
  t4752 = t4389*t1876;
  t4759 = t4749 + t4752;
  t4703 = -1.*t662*t2273;
  t4709 = t2201*t2230*t1876;
  t4717 = t4703 + t4709;
  t4916 = t2201*t1863*t2273;
  t4919 = t2230*t2735;
  t4926 = t4916 + t4919;
  t5275 = t477*t662*t1352;
  t5292 = -1.*t1863*t1876;
  t5301 = t5275 + t5292;
  t5223 = t477*t662*t1863;
  t5230 = -1.*t2643*t1876;
  t5259 = t5223 + t5230;
  t4761 = t2201*t477*t4759;
  t5456 = -1.*t477*t4584;
  t5457 = -1.*t4389*t1876;
  t5461 = t5456 + t5457;
  t4884 = -1.*t4759*t2089;
  t4981 = -1.*t2201*t477*t4759;
  t5116 = t4759*t2698;
  t5467 = -1.*t2201*t1876*t4759;
  t4770 = t4681*t4649;
  t4777 = t3662*t4691;
  t4778 = t4761 + t4770 + t4777;
  t5478 = -1.*t4759*t2329;
  t5482 = -1.*t4628*t2089;
  t4889 = -1.*t4649*t4021;
  t4891 = -1.*t4691*t2394;
  t4892 = t4884 + t4889 + t4891;
  t5568 = t2201*t1876*t4759;
  t4985 = -1.*t4681*t4649;
  t4987 = -1.*t3662*t4691;
  t5022 = t4981 + t4985 + t4987;
  t5588 = t4628*t2698;
  t5590 = t4759*t2735;
  t5118 = t4649*t4926;
  t5122 = t4691*t2784;
  t5124 = t5116 + t5118 + t5122;
  t5553 = -1.*t662*t4198;
  t5571 = t2201*t4198*t1863;
  t5846 = 0.037381*t662;
  t5858 = -1.*t2201*t4176;
  t5859 = t5846 + t5858;
  t5873 = -0.037381*t2201;
  t5874 = t5873 + t4580;
  t5430 = t662*t4198;
  t5513 = -1.*t2201*t4198*t1352;
  t6007 = -1.*t2230*t662*t1352;
  t6015 = -1.*t2201*t1352*t2273*t1876;
  t6016 = t6007 + t6015;
  t6030 = -1.*t2230*t662*t1863;
  t6031 = -1.*t2201*t1863*t2273*t1876;
  t6034 = t6030 + t6031;
  t5444 = -1.*t2201*t1876*t4628;
  t5446 = t5430 + t5444 + t4761;
  t5925 = t2201*t4198;
  t5931 = t662*t5874;
  t5945 = t662*t4198*t1352;
  t5949 = -1.*t2201*t5874*t1352;
  t5534 = -1.*t4628*t2329;
  t5535 = t5513 + t5534 + t4884;
  t5561 = t2201*t1876*t4628;
  t5562 = t5553 + t5561 + t4981;
  t6238 = Power(t477,2);
  t5863 = -1.*t2201*t4198;
  t5876 = -1.*t662*t5874;
  t6263 = Power(t1876,2);
  t5898 = -1.*t662*t4198*t1863;
  t5901 = t2201*t5874*t1863;
  t5572 = t4628*t2735;
  t5575 = t5571 + t5116 + t5572;
  t5972 = -1.*t662*t1352*t2273;
  t5973 = t2201*t2230*t1352*t1876;
  t5975 = t5972 + t5973;
  t6253 = t2201*t6238*t5859;
  t6283 = -1.*t477*t662*t4759;
  t6507 = t2201*t2273;
  t6514 = t2230*t662*t1876;
  t6545 = t6507 + t6514;
  t6312 = t2201*t477*t1352*t4759;
  t6344 = -1.*t477*t5859*t2089;
  t6648 = t5874*t2273;
  t6651 = -1.*t2230*t5859*t1876;
  t6653 = t6648 + t6651;
  t6670 = t2230*t5874;
  t6689 = t5859*t2273*t1876;
  t6690 = t6670 + t6689;
  t5979 = -1.*t662*t1863*t2273;
  t5981 = t2201*t2230*t1863*t1876;
  t5988 = t5979 + t5981;
  t6376 = -1.*t2201*t6238*t5859;
  t6388 = t477*t662*t4759;
  t6718 = t2201*t2230;
  t6757 = -1.*t662*t2273*t1876;
  t6758 = t6718 + t6757;
  t6407 = -1.*t2201*t477*t1863*t4759;
  t6422 = t477*t5859*t2698;
  t7119 = -1.*t1204*t1026;
  t7120 = t1081*t1294;
  t7122 = t7119 + t7120;
  t5841 = -1.*t2201*t4584;
  t5842 = t5553 + t5841;
  t7298 = -0.21935*t1204;
  t7306 = -1.*t1204*t4094;
  t7313 = -1.*t1081*t4119;
  t7359 = t7298 + t7306 + t7313;
  t5917 = t2201*t4584;
  t5918 = t5430 + t5917;
  t7283 = Power(t2201,2);
  t7383 = Power(t662,2);
  t7768 = t477*t1352;
  t7780 = t662*t7122*t1876;
  t7793 = t7768 + t7780;
  t2895 = t2150*t2089;
  t2898 = -1.*t469*t2394;
  t2917 = t2895 + t2898;
  t7953 = -1.*t477*t662*t7122;
  t7954 = t1352*t1876;
  t7957 = t7953 + t7954;
  t7979 = t2201*t2230*t7122;
  t7982 = -1.*t2273*t7793;
  t7989 = t7979 + t7982;
  t7164 = t2201*t4198*t1352;
  t7375 = t7283*t7359*t1863;
  t8310 = -1.*t477*t662*t7359;
  t8311 = t4176*t1876;
  t8329 = t8310 + t8311;
  t8331 = t477*t4176;
  t8334 = t662*t7359*t1876;
  t8336 = t8331 + t8334;
  t7513 = -1.*t7283*t7359*t1352;
  t7606 = -1.*t2201*t4198*t7122;
  t8330 = -1.*t2201*t477*t8329;
  t8410 = t8329*t2698;
  t8413 = t4759*t2089;
  t8546 = t2201*t7359*t2273;
  t8550 = t2230*t8336;
  t8553 = t8546 + t8550;
  t8564 = t2201*t2230*t7359;
  t8565 = -1.*t2273*t8336;
  t8567 = t8564 + t8565;
  t7748 = t2201*t7122*t2273;
  t7826 = t2230*t7793;
  t7851 = t7748 + t7826;
  t8471 = t2201*t477*t8329;
  t8492 = -1.*t4759*t7957;
  t8511 = -1.*t8329*t2089;
  t8844 = -0.12338*t1026;
  t8845 = t8844 + t4117;
  t8831 = 0.002196*t1026;
  t8837 = 0.12338*t1294;
  t8838 = t8831 + t8837;
  t7116 = 0.000019783370916*t1352;
  t7123 = 5.e-6*t7122;
  t7127 = 0.124881*t1863;
  t7128 = 0.0875*t7122;
  t7129 = t7127 + t7128;
  t7139 = 0.02973458*t7129;
  t7151 = t7116 + t7123 + t7139;
  t7155 = -0.5*var2[12]*t7151;
  t7157 = -5.e-6*t2201*t1352;
  t7158 = t2201*t5842*t1352;
  t7202 = -1.*t662*t4584*t1352;
  t7494 = t4389*t1863;
  t8949 = -1.*t1081*t8845;
  t9021 = t1204*t8838;
  t9045 = t8949 + t9021;
  t7509 = t2201*t5918*t7122;
  t7590 = -1.*t4389*t1352;
  t8930 = t1204*t8845;
  t8943 = t1081*t8838;
  t8944 = t8930 + t8943;
  t7621 = t662*t4584*t7122;
  t7721 = -0.000529236*t4021;
  t7865 = 0.02973458*t7851;
  t7879 = t7721 + t7865;
  t7883 = -0.5*var2[0]*t7879;
  t7886 = t469*t2089;
  t7916 = t2150*t2394;
  t7924 = t7886 + t7916;
  t7932 = -0.000529236*t7924;
  t7978 = t469*t7957;
  t8006 = t2150*t7989;
  t8036 = t7978 + t8006;
  t8055 = 0.02973458*t8036;
  t8079 = t7932 + t8055;
  t8089 = -0.5*var2[2]*t8079;
  t8135 = -0.000529236*t2917;
  t8143 = t2150*t7957;
  t8174 = -1.*t469*t7989;
  t8182 = t8143 + t8174;
  t8185 = 0.02973458*t8182;
  t8221 = t8135 + t8185;
  t8289 = -0.5*var2[1]*t8221;
  t8299 = 5.e-6*t5301;
  t8403 = t2089*t5562;
  t9091 = t7283*t9045*t1863;
  t8404 = t4628*t2329;
  t9485 = -1.*t477*t662*t9045;
  t9488 = t8944*t1876;
  t9499 = t9485 + t9488;
  t9450 = t477*t8944;
  t9457 = t662*t9045*t1876;
  t9482 = t9450 + t9457;
  t8491 = t7957*t5446;
  t9164 = -1.*t7283*t9045*t1352;
  t8514 = -1.*t4628*t7793;
  t8540 = 5.e-6*t3185;
  t8545 = t4021*t5022;
  t9502 = -1.*t2201*t477*t9499;
  t9516 = t9499*t2698;
  t8581 = t4649*t4021;
  t8596 = t4691*t2394;
  t10212 = t2201*t9045*t2273;
  t10274 = t2230*t9482;
  t10341 = t10212 + t10274;
  t10413 = t2201*t2230*t9045;
  t10414 = -1.*t2273*t9482;
  t10448 = t10413 + t10414;
  t8651 = t7851*t4778;
  t9738 = t2201*t477*t9499;
  t9791 = -1.*t9499*t2089;
  t8737 = -1.*t4649*t7851;
  t8738 = -1.*t4691*t7989;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=(-0.5*(0.02973458*(-1.*t2150*t2394 - 1.*t2089*t469) - 0.000529236*(-1.*t2150*t2784 - 1.*t2698*t469))*var2[1] - 0.5*(0.02973458*t2917 - 0.000529236*(t2150*t2698 - 1.*t2784*t469))*var2[2])*var2[14];
  p_output1[4]=(-0.5*(0.02973458*t2394 - 0.000529236*t2784)*var2[0] - 0.5*(-0.02973458*t3185*t469 + 0.000529236*t3267*t469)*var2[1] - 0.5*(0.02973458*t2150*t3185 - 0.000529236*t2150*t3267)*var2[2] - 0.5*(5.e-6*(-1.*t1863*t2201*t2230 + t2273*t2735) - 0.006197*t3662 - 0.000529236*(t4681*(-1.*t2394*t4642 - 1.*t2394*t4649 - 1.*t3185*t4691 - 1.*t4021*t4691) + t4021*(t3662*t4642 + t3662*t4649 + t4681*t4691 + t4691*t4717) + t2394*t4778 + t3662*t4892) + 0.02973458*((-1.*t3662*t4642 - 1.*t3662*t4649 - 1.*t4681*t4691 - 1.*t4691*t4717)*t4926 + t4681*(t2784*t4642 + t2784*t4649 + t3267*t4691 + t4691*t4926) + t2784*t5022 + t3662*t5124))*var2[3])*var2[14];
  p_output1[5]=(-0.5*(-0.000529236*t2230*t5259 + 0.02973458*t2230*t5301)*var2[0] - 0.5*(-0.000529236*(t2150*t2735 + t2273*t469*t5259) + 0.02973458*(t2150*t2329 + t2273*t469*t5301))*var2[1] - 0.5*(-0.000529236*(t2735*t469 - 1.*t2150*t2273*t5259) + 0.02973458*(t2329*t469 - 1.*t2150*t2273*t5301))*var2[2] - 0.5*(0.006197*t2201*t2230*t477 - 5.e-6*t2230*t5259 - 0.000529236*(-1.*t2201*t2230*t477*t4892 + t2230*t4778*t5301 + t4021*(t2201*t4628*t477 - 1.*t2201*t2230*t4649*t477 + t2201*t2273*t4691*t477 - 1.*t2273*t3662*t5461 + t2230*t4681*t5461 + t5467) + t4681*(-1.*t2230*t4649*t5301 + t2273*t4691*t5301 + t2273*t2394*t5461 - 1.*t2230*t4021*t5461 + t5478 + t5482)) + 0.02973458*(-1.*t2201*t2230*t477*t5124 + t2230*t5022*t5259 + t4926*(-1.*t2201*t4628*t477 + t2201*t2230*t4649*t477 - 1.*t2201*t2273*t4691*t477 + t2273*t3662*t5461 - 1.*t2230*t4681*t5461 + t5568) + t4681*(t2230*t4649*t5259 - 1.*t2273*t4691*t5259 - 1.*t2273*t2784*t5461 + t2230*t4926*t5461 + t5588 + t5590)))*var2[3] - 0.5*(0.006197*t1876*t2201 - 0.000529236*(t2329*t5446 + t2089*(-1.*t1876*t2201*t5461 + t5467) + t2201*t477*(-1.*t4628*t5301 - 1.*t2329*t5461 + t5478 + t5482) - 1.*t1876*t2201*t5535) + 0.02973458*(t2735*t5562 + t2698*(t1876*t2201*t5461 + t5568) - 1.*t1876*t2201*t5575 + t2201*t477*(t4628*t5259 + t2735*t5461 + t5588 + t5590)) + 5.e-6*(-1.*t2643*t477 - 1.*t1863*t1876*t662))*var2[4])*var2[14];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.5*(0.02973458*t5975 - 0.000529236*t5988)*var2[0] - 0.5*(0.02973458*(-1.*t1352*t2150*t2201*t477 - 1.*t469*t6016) - 0.000529236*(-1.*t1863*t2150*t2201*t477 - 1.*t469*t6034))*var2[1] - 0.5*(0.02973458*(-1.*t1352*t2201*t469*t477 + t2150*t6016) - 0.000529236*(-1.*t1863*t2201*t469*t477 + t2150*t6034))*var2[2] - 0.5*(-0.006197*t6545 + 5.e-6*(-1.*t1863*t1876*t2201*t2230 + t1863*t2273*t662) + 0.02973458*(t5022*t5988 + t5124*t6545 + t4681*(t4649*t5988 + t4691*t6034 + t6407 + t6422 + t4926*t6653 + t2784*t6690) + t4926*(t6376 + t6388 - 1.*t4649*t6545 - 1.*t4681*t6653 - 1.*t3662*t6690 - 1.*t4691*t6758)) - 0.000529236*(t4778*t5975 + t4892*t6545 + t4681*(-1.*t4649*t5975 - 1.*t4691*t6016 + t6312 + t6344 - 1.*t4021*t6653 - 1.*t2394*t6690) + t4021*(t6253 + t6283 + t4649*t6545 + t4681*t6653 + t3662*t6690 + t4691*t6758)))*var2[3] - 0.5*(5.e-6*t1863*t2201*t477 + 0.006197*t477*t662 + 0.02973458*(-1.*t1863*t2201*t477*t5562 + t2201*t477*(t1863*t1876*t2201*t4628 - 1.*t1876*t2735*t5859 + t5898 + t5901 + t6407 + t6422) - 1.*t477*t5575*t662 + t2698*(t5863 + t5876 - 1.*t2201*t5859*t6263 + t6376 + t6388 - 1.*t1876*t4628*t662)) - 0.000529236*(-1.*t1352*t2201*t477*t5446 + t2201*t477*(-1.*t1352*t1876*t2201*t4628 + t1876*t2329*t5859 + t5945 + t5949 + t6312 + t6344) - 1.*t477*t5535*t662 + t2089*(t5925 + t5931 + t6253 + t2201*t5859*t6263 + t6283 + t1876*t4628*t662)))*var2[4] - 0.5*(-0.006197*t2201 + 5.e-6*t1863*t662 - 0.000529236*(-1.*t1352*t5918*t662 + t1352*t2201*(t2201*t5859 + t5925 + t5931 - 1.*t4584*t662) + t2201*(-1.*t1863*t4389 + t5513 + t1352*t4584*t662) + t662*(t1352*t2201*t4584 + t5945 + t5949 + t1352*t5859*t662)) + 0.02973458*(-1.*t1863*t5842*t662 + t1863*t2201*(-1.*t2201*t5859 + t5863 + t5876 + t4584*t662) + t2201*(t2643*t4389 + t5571 - 1.*t1863*t4584*t662) + t662*(-1.*t1863*t2201*t4584 + t5898 + t5901 - 1.*t1863*t5859*t662)))*var2[5])*var2[14];
  p_output1[13]=(t7155 + t7883 + t8089 + t8289 - 0.5*(t8540 + 0.02973458*(t8545 + t4926*(t8330 - 1.*t4681*t8553 - 1.*t3662*t8567) + t4681*(t8410 + t8413 + t4926*t8553 + t2784*t8567 + t8581 + t8596)) - 0.000529236*(t4021*(t8471 + t4681*t8553 + t3662*t8567) + t8651 + t4681*(t8492 + t8511 - 1.*t4021*t8553 - 1.*t2394*t8567 + t8737 + t8738)))*var2[3] - 0.5*(t8299 + 0.02973458*(t2698*(-1.*t2201*t662*t7359 + t8330 + t1876*t2201*t8336) + t8403 + t2201*t477*(t7164 + t7375 + t2735*t8336 + t8404 + t8410 + t8413)) - 0.000529236*(t2089*(t2201*t662*t7359 - 1.*t1876*t2201*t8336 + t8471) + t8491 + t2201*t477*(t7513 + t7606 - 1.*t2329*t8336 + t8492 + t8511 + t8514)))*var2[4] - 0.5*(t7157 + 0.02973458*(t7158 + t662*(t2643*t4176 + t7164 + t7202 + t7375 + t1863*t7359*t7383 + t7494)) - 0.000529236*(t7509 + t662*(-1.*t1863*t4176 - 1.*t1352*t7359*t7383 + t7513 + t7590 + t7606 + t7621)))*var2[5])*var2[14];
  p_output1[14]=(t7155 + t7883 + t8089 + t8289 - 0.5*(t8540 + 0.02973458*(t8545 + t4926*(-1.*t10448*t3662 - 1.*t10341*t4681 + t9502) + t4681*(t10448*t2784 + t10341*t4926 + t8413 + t8581 + t8596 + t9516)) - 0.000529236*(t8651 + t4021*(t10448*t3662 + t10341*t4681 + t9738) + t4681*(-1.*t10448*t2394 - 1.*t10341*t4021 + t8492 + t8737 + t8738 + t9791)))*var2[3] - 0.5*(t8299 + 0.02973458*(t8403 + t2698*(-1.*t2201*t662*t9045 + t1876*t2201*t9482 + t9502) + t2201*t477*(t7164 + t8404 + t8413 + t9091 + t2735*t9482 + t9516)) - 0.000529236*(t8491 + t2089*(t2201*t662*t9045 - 1.*t1876*t2201*t9482 + t9738) + t2201*t477*(t7606 + t8492 + t8514 + t9164 - 1.*t2329*t9482 + t9791)))*var2[4] - 0.5*(t7157 + 0.02973458*(t7158 + t662*(t7164 + t7202 + t7494 + t2643*t8944 + t1863*t7383*t9045 + t9091)) - 0.000529236*(t7509 + t662*(t7590 + t7606 + t7621 - 1.*t1863*t8944 - 1.*t1352*t7383*t9045 + t9164)))*var2[5] - 0.5*(-0.000529236*(0.21935*t1294 + t1294*t4094 + t1026*t4119 + t1294*t8838 - 1.*t1026*t8845) + 0.02973458*(0.21935*t1026 + t1026*t4094 - 1.*t1294*t4119 + t1026*t8838 + t1294*t8845))*var2[13])*var2[14];
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

#include "Ce3_vec15_laikago_description.hh"

namespace SymFunction
{

void Ce3_vec15_laikago_description_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
