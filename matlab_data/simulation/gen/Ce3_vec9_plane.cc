/*
 * Automatically Generated from Mathematica.
 * Fri 21 Dec 2018 15:12:03 GMT-05:00
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
  double t513;
  double t604;
  double t609;
  double t614;
  double t682;
  double t864;
  double t965;
  double t314;
  double t1041;
  double t238;
  double t1042;
  double t152;
  double t1411;
  double t1417;
  double t1453;
  double t1149;
  double t1346;
  double t1542;
  double t972;
  double t1046;
  double t1076;
  double t1534;
  double t1543;
  double t1586;
  double t1592;
  double t1661;
  double t1666;
  double t1787;
  double t1800;
  double t1850;
  double t1864;
  double t1870;
  double t1879;
  double t1881;
  double t1887;
  double t1892;
  double t1898;
  double t1910;
  double t1924;
  double t2394;
  double t2407;
  double t2410;
  double t2421;
  double t2429;
  double t2435;
  double t3207;
  double t3238;
  double t3202;
  double t3276;
  double t3297;
  double t3303;
  double t3307;
  double t3313;
  double t3350;
  double t3376;
  double t3481;
  double t3483;
  double t3486;
  double t3507;
  double t3191;
  double t3194;
  double t3199;
  double t3201;
  double t3521;
  double t3526;
  double t3543;
  double t3545;
  double t3552;
  double t3557;
  double t3560;
  double t3625;
  double t3648;
  double t3650;
  double t3691;
  double t3810;
  double t3861;
  double t3866;
  double t3867;
  double t3869;
  double t3875;
  double t3896;
  double t3899;
  double t3902;
  double t4082;
  double t4115;
  double t4119;
  double t3993;
  double t4032;
  double t4042;
  double t4132;
  double t4154;
  double t4165;
  double t3798;
  double t3878;
  double t3879;
  double t4059;
  double t4064;
  double t4071;
  double t4485;
  double t4499;
  double t4501;
  double t4730;
  double t4754;
  double t4759;
  double t4829;
  double t4843;
  double t4879;
  double t4120;
  double t5198;
  double t5211;
  double t5215;
  double t4288;
  double t4511;
  double t5143;
  double t5187;
  double t5192;
  double t4537;
  double t4190;
  double t4222;
  double t4271;
  double t5139;
  double t5222;
  double t5245;
  double t5254;
  double t4314;
  double t4316;
  double t4317;
  double t4516;
  double t4517;
  double t4522;
  double t5300;
  double t5377;
  double t5381;
  double t5309;
  double t5317;
  double t5326;
  double t4547;
  double t4548;
  double t4559;
  double t5562;
  double t5581;
  double t5585;
  double t5675;
  double t5680;
  double t5681;
  double t5705;
  double t5712;
  double t5714;
  double t5117;
  double t5120;
  double t5868;
  double t5871;
  double t5846;
  double t5851;
  double t5861;
  double t5877;
  double t5879;
  double t5880;
  double t5266;
  double t5267;
  double t5270;
  double t5293;
  double t5296;
  double t5335;
  double t5339;
  double t5343;
  double t5866;
  double t5883;
  double t5894;
  double t5898;
  double t5916;
  double t5922;
  double t5938;
  double t5960;
  double t6155;
  double t6156;
  double t6157;
  double t6168;
  double t6170;
  double t6171;
  double t2099;
  double t2131;
  double t2195;
  double t6182;
  double t6183;
  double t6184;
  double t6186;
  double t6188;
  double t6191;
  double t6217;
  double t6219;
  double t6220;
  double t6223;
  double t6226;
  double t6227;
  double t6232;
  double t6238;
  double t6239;
  double t6240;
  double t6243;
  double t6258;
  double t6260;
  double t6469;
  double t6495;
  double t6496;
  double t6400;
  double t6457;
  double t6459;
  double t6278;
  double t6166;
  double t6172;
  double t6173;
  double t6298;
  double t6306;
  double t6140;
  double t6141;
  double t6143;
  double t6144;
  double t6146;
  double t6147;
  double t6148;
  double t6149;
  double t6150;
  double t6151;
  double t6802;
  double t6807;
  double t6768;
  double t6769;
  double t6770;
  double t6153;
  double t6154;
  double t6158;
  double t6160;
  double t6161;
  double t6162;
  double t6164;
  double t6165;
  double t6174;
  double t6175;
  double t6176;
  double t6177;
  double t6178;
  double t6179;
  double t6181;
  double t6185;
  double t6194;
  double t6195;
  double t6199;
  double t6200;
  double t6201;
  double t6203;
  double t6208;
  double t6209;
  double t6210;
  double t6212;
  double t6213;
  double t6214;
  double t6216;
  double t6861;
  double t6862;
  double t6863;
  double t6254;
  double t6255;
  double t6865;
  double t6866;
  double t6867;
  double t6875;
  double t6908;
  double t6916;
  double t6289;
  double t6293;
  double t6931;
  double t6935;
  double t6936;
  double t6300;
  double t6378;
  double t6919;
  double t6941;
  double t6591;
  double t6598;
  double t6998;
  double t6999;
  double t7000;
  double t6986;
  double t6987;
  double t6993;
  double t6954;
  double t6691;
  double t6966;
  double t6697;
  double t6699;
  t513 = Cos(var1[8]);
  t604 = Sin(var1[7]);
  t609 = -1.*t513*t604;
  t614 = Cos(var1[7]);
  t682 = Sin(var1[8]);
  t864 = -1.*t614*t682;
  t965 = t609 + t864;
  t314 = Cos(var1[6]);
  t1041 = Sin(var1[5]);
  t238 = Cos(var1[5]);
  t1042 = Sin(var1[6]);
  t152 = Sin(var1[3]);
  t1411 = t614*t513;
  t1417 = -1.*t604*t682;
  t1453 = t1411 + t1417;
  t1149 = Cos(var1[3]);
  t1346 = Cos(var1[4]);
  t1542 = Sin(var1[4]);
  t972 = t238*t314*t965;
  t1046 = t1041*t1042*t965;
  t1076 = t972 + t1046;
  t1534 = t1346*t1453;
  t1543 = -1.*t314*t1041*t965;
  t1586 = t238*t1042*t965;
  t1592 = t1543 + t1586;
  t1661 = -1.*t1542*t1592;
  t1666 = t1534 + t1661;
  t1787 = t238*t314*t1453;
  t1800 = t1041*t1042*t1453;
  t1850 = t1787 + t1800;
  t1864 = t513*t604;
  t1870 = t614*t682;
  t1879 = t1864 + t1870;
  t1881 = t1346*t1879;
  t1887 = -1.*t314*t1041*t1453;
  t1892 = t238*t1042*t1453;
  t1898 = t1887 + t1892;
  t1910 = -1.*t1542*t1898;
  t1924 = t1881 + t1910;
  t2394 = -1.*t1542*t1453;
  t2407 = -1.*t1346*t1592;
  t2410 = t2394 + t2407;
  t2421 = -1.*t1542*t1879;
  t2429 = -1.*t1346*t1898;
  t2435 = t2421 + t2429;
  t3207 = -1.*t513;
  t3238 = 1. + t3207;
  t3202 = 0.242889*t604;
  t3276 = 0.100689*t3238;
  t3297 = 0.080689*t513;
  t3303 = -0.16*t682;
  t3307 = t3276 + t3297 + t3303;
  t3313 = -1.*t604*t3307;
  t3350 = -0.20833*t3238;
  t3376 = -0.36833*t513;
  t3481 = 0.02*t682;
  t3483 = t3350 + t3376 + t3481;
  t3486 = t614*t3483;
  t3507 = t3202 + t3313 + t3486;
  t3191 = t238*t314;
  t3194 = t1041*t1042;
  t3199 = t3191 + t3194;
  t3201 = 0.032875*t1042;
  t3521 = t314*t3507;
  t3526 = t3201 + t3521;
  t3543 = -1.*t1041*t3526;
  t3545 = -1.*t314;
  t3552 = 1. + t3545;
  t3557 = -0.081715*t3552;
  t3560 = -0.11459*t314;
  t3625 = t1042*t3507;
  t3648 = t3557 + t3560 + t3625;
  t3650 = t238*t3648;
  t3691 = t3543 + t3650;
  t3810 = -1.*t614;
  t3861 = 1. + t3810;
  t3866 = 0.242889*t3861;
  t3867 = t614*t3307;
  t3869 = t604*t3483;
  t3875 = t3866 + t3867 + t3869;
  t3896 = t1346*t3691;
  t3899 = t1542*t3875;
  t3902 = t3896 + t3899;
  t4082 = t238*t3526;
  t4115 = t1041*t3648;
  t4119 = t4082 + t4115;
  t3993 = t1542*t1453;
  t4032 = t1346*t1592;
  t4042 = t3993 + t4032;
  t4132 = -1.*t1542*t3691;
  t4154 = t1346*t3875;
  t4165 = t4132 + t4154;
  t3798 = -1.*t1346*t3691;
  t3878 = -1.*t1542*t3875;
  t3879 = t3798 + t3878;
  t4059 = t314*t1041;
  t4064 = -1.*t238*t1042;
  t4071 = t4059 + t4064;
  t4485 = t1542*t1879;
  t4499 = t1346*t1898;
  t4501 = t4485 + t4499;
  t4730 = -1.*t238*t314*t965;
  t4754 = -1.*t1041*t1042*t965;
  t4759 = t4730 + t4754;
  t4829 = -1.*t238*t314*t1453;
  t4843 = -1.*t1041*t1042*t1453;
  t4879 = t4829 + t4843;
  t4120 = t4071*t4119;
  t5198 = -1.*t238*t3526;
  t5211 = -1.*t1041*t3648;
  t5215 = t5198 + t5211;
  t4288 = -1.*t4119*t1076;
  t4511 = -1.*t4071*t4119;
  t5143 = -1.*t314*t1041;
  t5187 = t238*t1042;
  t5192 = t5143 + t5187;
  t4537 = t4119*t1850;
  t4190 = -1.*t1542*t3199*t4165;
  t4222 = t1346*t3199*t3902;
  t4271 = t4120 + t4190 + t4222;
  t5139 = t4071*t3691;
  t5222 = t3199*t4119;
  t5245 = -1.*t4119*t1592;
  t5254 = -1.*t3691*t1076;
  t4314 = -1.*t3902*t4042;
  t4316 = -1.*t4165*t1666;
  t4317 = t4288 + t4314 + t4316;
  t4516 = t1542*t3199*t4165;
  t4517 = -1.*t1346*t3199*t3902;
  t4522 = t4511 + t4516 + t4517;
  t5300 = -1.*t4071*t3691;
  t5377 = Power(t1346,2);
  t5381 = Power(t1542,2);
  t5309 = -1.*t3199*t4119;
  t5317 = t4119*t1898;
  t5326 = t3691*t1850;
  t4547 = t3902*t4501;
  t4548 = t4165*t1924;
  t4559 = t4537 + t4547 + t4548;
  t5562 = 0.032875*t314;
  t5581 = -1.*t1042*t3507;
  t5585 = t5562 + t5581;
  t5675 = t314*t1041*t965;
  t5680 = -1.*t238*t1042*t965;
  t5681 = t5675 + t5680;
  t5705 = t314*t1041*t1453;
  t5712 = -1.*t238*t1042*t1453;
  t5714 = t5705 + t5712;
  t5117 = t3199*t3691;
  t5120 = t5117 + t4120;
  t5868 = -1.*t1041*t5585;
  t5871 = t4082 + t5868;
  t5846 = t1041*t3526;
  t5851 = t238*t5585;
  t5861 = t5846 + t5851;
  t5877 = -1.*t238*t314;
  t5879 = -1.*t1041*t1042;
  t5880 = t5877 + t5879;
  t5266 = -1.*t3875*t1453;
  t5267 = -1.*t3691*t1592;
  t5270 = t5266 + t5267 + t4288;
  t5293 = -1.*t3199*t3691;
  t5296 = t5293 + t4511;
  t5335 = t3875*t1879;
  t5339 = t3691*t1898;
  t5343 = t5335 + t5339 + t4537;
  t5866 = t4071*t5861;
  t5883 = t5880*t4119;
  t5894 = -1.*t4119*t5681;
  t5898 = -1.*t5861*t1076;
  t5916 = -1.*t4071*t5861;
  t5922 = -1.*t5880*t4119;
  t5938 = t4119*t5714;
  t5960 = t5861*t1850;
  t6155 = -1.*t614*t513;
  t6156 = t604*t682;
  t6157 = t6155 + t6156;
  t6168 = -1.*t314*t1041*t6157;
  t6170 = t238*t1042*t6157;
  t6171 = t6168 + t6170;
  t2099 = t1149*t1076;
  t2131 = -1.*t152*t1666;
  t2195 = t2099 + t2131;
  t6182 = t238*t314*t6157;
  t6183 = t1041*t1042*t6157;
  t6184 = t6182 + t6183;
  t6186 = t1346*t965;
  t6188 = -1.*t1542*t6171;
  t6191 = t6186 + t6188;
  t6217 = 0.242889*t614;
  t6219 = -1.*t614*t3307;
  t6220 = -1.*t604*t3483;
  t6223 = t6217 + t6219 + t6220;
  t6226 = -1.*t314*t1041*t6223;
  t6227 = t238*t1042*t6223;
  t6232 = t6226 + t6227;
  t6238 = t238*t314*t6223;
  t6239 = t1041*t1042*t6223;
  t6240 = t6238 + t6239;
  t6243 = -1.*t4071*t6240;
  t6258 = t4119*t1076;
  t6260 = t6240*t1850;
  t6469 = t1346*t6232;
  t6495 = t1542*t3507;
  t6496 = t6469 + t6495;
  t6400 = -1.*t1542*t6232;
  t6457 = t1346*t3507;
  t6459 = t6400 + t6457;
  t6278 = t4071*t6240;
  t6166 = t1542*t965;
  t6172 = t1346*t6171;
  t6173 = t6166 + t6172;
  t6298 = -1.*t6240*t1076;
  t6306 = -1.*t4119*t6184;
  t6140 = -1.*t1042*t3526;
  t6141 = t314*t3648;
  t6143 = t6140 + t6141;
  t6144 = -0.00482*t6143*t965;
  t6146 = t1042*t3526;
  t6147 = -1.*t314*t3648;
  t6148 = t6146 + t6147;
  t6149 = 0.03856*t6148*t1453;
  t6150 = t6144 + t6149;
  t6151 = -0.5*var2[5]*t6150;
  t6802 = -0.16*t513;
  t6807 = t6802 + t3481;
  t6768 = 0.02*t513;
  t6769 = 0.16*t682;
  t6770 = t6768 + t6769;
  t6153 = -0.0001584575*t965;
  t6154 = -0.11459*t1453;
  t6158 = -0.081715*t6157;
  t6160 = t6154 + t6158;
  t6161 = 0.03856*t6160;
  t6162 = t6153 + t6161;
  t6164 = -0.5*var2[6]*t6162;
  t6165 = -0.00482*t4042;
  t6174 = 0.03856*t6173;
  t6175 = t6165 + t6174;
  t6176 = -0.5*var2[0]*t6175;
  t6177 = t152*t1076;
  t6178 = t1149*t1666;
  t6179 = t6177 + t6178;
  t6181 = -0.00482*t6179;
  t6185 = t152*t6184;
  t6194 = t1149*t6191;
  t6195 = t6185 + t6194;
  t6199 = 0.03856*t6195;
  t6200 = t6181 + t6199;
  t6201 = -0.5*var2[2]*t6200;
  t6203 = -0.00482*t2195;
  t6208 = t1149*t6184;
  t6209 = -1.*t152*t6191;
  t6210 = t6208 + t6209;
  t6212 = 0.03856*t6210;
  t6213 = t6203 + t6212;
  t6214 = -0.5*var2[1]*t6213;
  t6216 = t5296*t1076;
  t6861 = -1.*t604*t6807;
  t6862 = t614*t6770;
  t6863 = t6861 + t6862;
  t6254 = t3875*t1453;
  t6255 = t3691*t1592;
  t6865 = -1.*t314*t1041*t6863;
  t6866 = t238*t1042*t6863;
  t6867 = t6865 + t6866;
  t6875 = t238*t314*t6863;
  t6908 = t1041*t1042*t6863;
  t6916 = t6875 + t6908;
  t6289 = t5120*t6184;
  t6293 = -1.*t3875*t965;
  t6931 = t614*t6807;
  t6935 = t604*t6770;
  t6936 = t6931 + t6935;
  t6300 = -1.*t3691*t6171;
  t6378 = t4522*t4042;
  t6919 = -1.*t4071*t6916;
  t6941 = t6916*t1850;
  t6591 = t3902*t4042;
  t6598 = t4165*t1666;
  t6998 = t1346*t6867;
  t6999 = t1542*t6936;
  t7000 = t6998 + t6999;
  t6986 = -1.*t1542*t6867;
  t6987 = t1346*t6936;
  t6993 = t6986 + t6987;
  t6954 = t4071*t6916;
  t6691 = t4271*t6173;
  t6966 = -1.*t6916*t1076;
  t6697 = -1.*t3902*t6173;
  t6699 = -1.*t4165*t6191;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=(-0.5*(0.03856*(-1.*t1076*t152 - 1.*t1149*t1666) - 0.00482*(-1.*t152*t1850 - 1.*t1149*t1924))*var2[1] - 0.5*(-0.00482*(t1149*t1850 - 1.*t152*t1924) + 0.03856*t2195)*var2[2])*var2[8];
  p_output1[4]=(-0.5*(0.03856*t1666 - 0.00482*t1924)*var2[0] - 0.5*(-0.03856*t152*t2410 + 0.00482*t152*t2435)*var2[1] - 0.5*(0.03856*t1149*t2410 - 0.00482*t1149*t2435)*var2[2] - 0.5*(-0.00482*((-1.*t1542*t3199*t3879 - 1.*t1542*t3199*t3902)*t4042 + t1346*t3199*(-1.*t1666*t3879 - 1.*t1666*t3902 - 1.*t2410*t4165 - 1.*t4042*t4165) + t1666*t4271 - 1.*t1542*t3199*t4317) + 0.03856*((t1542*t3199*t3879 + t1542*t3199*t3902)*t4501 + t1346*t3199*(t1924*t3879 + t1924*t3902 + t2435*t4165 + t4165*t4501) + t1924*t4522 - 1.*t1542*t3199*t4559))*var2[3])*var2[8];
  p_output1[5]=(-0.5*(0.03856*t1346*t4759 - 0.00482*t1346*t4879)*var2[0] - 0.5*(0.03856*(t1149*t1592 + t152*t1542*t4759) - 0.00482*(t1149*t1898 + t152*t1542*t4879))*var2[1] - 0.5*(0.03856*(t152*t1592 - 1.*t1149*t1542*t4759) - 0.00482*(t152*t1898 - 1.*t1149*t1542*t4879))*var2[2] - 0.5*(0.03856*(t1346*t4522*t4879 + t1346*t4559*t5192 + t1346*t3199*(t1346*t3902*t4879 - 1.*t1542*t4165*t4879 - 1.*t1542*t1924*t5215 + t1346*t4501*t5215 + t5317 + t5326) + t4501*(-1.*t1346*t3902*t5192 + t1542*t4165*t5192 + t5300 + t5309 - 1.*t3199*t5215*t5377 - 1.*t3199*t5215*t5381)) - 0.00482*(t1346*t4271*t4759 + t1346*t4317*t5192 + t1346*t3199*(-1.*t1346*t3902*t4759 + t1542*t4165*t4759 + t1542*t1666*t5215 - 1.*t1346*t4042*t5215 + t5245 + t5254) + t4042*(t5139 + t1346*t3902*t5192 - 1.*t1542*t4165*t5192 + t5222 + t3199*t5215*t5377 + t3199*t5215*t5381)))*var2[3] - 0.5*(-0.00482*(t1592*t5120 + t1076*(t5139 + t3691*t5192 + t3199*t5215 + t5222) + t4071*(-1.*t3691*t4759 - 1.*t1592*t5215 + t5245 + t5254) + t3199*t5270) + 0.03856*(t1898*t5296 + t1850*(-1.*t3691*t5192 - 1.*t3199*t5215 + t5300 + t5309) + t4071*(t3691*t4879 + t1898*t5215 + t5317 + t5326) + t3199*t5343))*var2[4])*var2[8];
  p_output1[6]=(-0.5*(0.03856*t1076*t1346 - 0.00482*t1346*t1850)*var2[0] - 0.5*(0.03856*(t1076*t152*t1542 + t1149*t5681) - 0.00482*(t152*t1542*t1850 + t1149*t5714))*var2[1] - 0.5*(0.03856*(-1.*t1076*t1149*t1542 + t152*t5681) - 0.00482*(-1.*t1149*t1542*t1850 + t152*t5714))*var2[2] - 0.5*(-0.00482*(t1076*t1346*t4271 + t1346*t4071*t4317 + t4042*(t1346*t3902*t4071 - 1.*t1542*t4071*t4165 + t5866 + t3199*t5377*t5871 + t3199*t5381*t5871 + t5883) + t1346*t3199*(-1.*t1076*t1346*t3902 + t1076*t1542*t4165 + t1542*t1666*t5871 - 1.*t1346*t4042*t5871 + t5894 + t5898)) + 0.03856*(t1346*t1850*t4522 + t1346*t4071*t4559 + t4501*(-1.*t1346*t3902*t4071 + t1542*t4071*t4165 - 1.*t3199*t5377*t5871 - 1.*t3199*t5381*t5871 + t5916 + t5922) + t1346*t3199*(t1346*t1850*t3902 - 1.*t1542*t1850*t4165 - 1.*t1542*t1924*t5871 + t1346*t4501*t5871 + t5938 + t5960)))*var2[3] - 0.5*(-0.00482*(t5120*t5681 + t5270*t5880 + t1076*(t5139 + t5866 + t3199*t5871 + t5883) + t4071*(t5254 - 1.*t1592*t5871 + t5894 + t5898)) + 0.03856*(t5296*t5714 + t5343*t5880 + t1850*(t5300 - 1.*t3199*t5871 + t5916 + t5922) + t4071*(t5326 + t1898*t5871 + t5938 + t5960)))*var2[4] - 0.5*(-0.00482*t1453*(-1.*t1042*t3648 - 1.*t1042*t5585) + 0.03856*t1879*(t1042*t3648 + t1042*t5585))*var2[5])*var2[8];
  p_output1[7]=(t6151 + t6164 + t6176 + t6201 + t6214 - 0.5*(0.03856*(t6378 + t4501*(t6243 + t1542*t3199*t6459 - 1.*t1346*t3199*t6496) + t1346*t3199*(t6258 + t6260 + t1924*t6459 + t4501*t6496 + t6591 + t6598)) - 0.00482*(t4042*(t6278 - 1.*t1542*t3199*t6459 + t1346*t3199*t6496) + t6691 + t1346*t3199*(t6298 + t6306 - 1.*t1666*t6459 - 1.*t4042*t6496 + t6697 + t6699)))*var2[3] - 0.5*(0.03856*(t6216 + t1850*(-1.*t3199*t6232 + t6243) + t4071*(t1879*t3507 + t1898*t6232 + t6254 + t6255 + t6258 + t6260)) - 0.00482*(t1076*(t3199*t6232 + t6278) + t6289 + t4071*(-1.*t1453*t3507 - 1.*t1592*t6232 + t6293 + t6298 + t6300 + t6306)))*var2[4])*var2[8];
  p_output1[8]=(t6151 + t6164 + t6176 + t6201 + t6214 - 0.5*(-0.00482*(t6691 + t4042*(t6954 - 1.*t1542*t3199*t6993 + t1346*t3199*t7000) + t1346*t3199*(t6306 + t6697 + t6699 + t6966 - 1.*t1666*t6993 - 1.*t4042*t7000)) + 0.03856*(t6378 + t4501*(t6919 + t1542*t3199*t6993 - 1.*t1346*t3199*t7000) + t1346*t3199*(t6258 + t6591 + t6598 + t6941 + t1924*t6993 + t4501*t7000)))*var2[3] - 0.5*(0.03856*(t6216 + t1850*(-1.*t3199*t6867 + t6919) + t4071*(t6254 + t6255 + t6258 + t1898*t6867 + t1879*t6936 + t6941)) - 0.00482*(t6289 + t1076*(t3199*t6867 + t6954) + t4071*(t6293 + t6300 + t6306 - 1.*t1592*t6867 - 1.*t1453*t6936 + t6966)))*var2[4] - 0.5*(-0.00482*(t3483*t513 - 1.*t513*t6807 - 0.242889*t682 + t3307*t682 + t6770*t682) + 0.03856*(-0.242889*t513 + t3307*t513 + t513*t6770 - 1.*t3483*t682 + t6807*t682))*var2[7])*var2[8];
  p_output1[9]=0;
  p_output1[10]=0;
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

#include "Ce3_vec9_plane.hh"

namespace SymFunction
{

void Ce3_vec9_plane_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
