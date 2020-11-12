/*
 * Automatically Generated from Mathematica.
 * Mon 29 Jul 2019 15:08:36 GMT-04:00
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
static void output1(double *p_output1,const double *var1)
{
  double t411;
  double t202;
  double t215;
  double t206;
  double t420;
  double t238;
  double t430;
  double t598;
  double t653;
  double t658;
  double t738;
  double t897;
  double t894;
  double t826;
  double t885;
  double t898;
  double t903;
  double t914;
  double t916;
  double t919;
  double t1070;
  double t1075;
  double t1003;
  double t651;
  double t1204;
  double t1215;
  double t1220;
  double t1224;
  double t1244;
  double t1245;
  double t1167;
  double t1255;
  double t1261;
  double t1279;
  double t1296;
  double t1321;
  double t1332;
  double t1046;
  double t1052;
  double t1482;
  double t1503;
  double t1504;
  double t1511;
  double t1593;
  double t1598;
  double t1601;
  double t1627;
  double t1628;
  double t1631;
  double t1686;
  double t1689;
  double t1709;
  double t1710;
  double t1718;
  double t1723;
  double t1724;
  double t1706;
  double t1728;
  double t1729;
  double t1731;
  double t1740;
  double t1745;
  double t1747;
  double t1750;
  double t1791;
  double t1653;
  double t1654;
  double t1655;
  double t1805;
  double t1808;
  double t1809;
  double t1820;
  double t1821;
  double t1824;
  double t1828;
  double t1862;
  double t1912;
  double t1915;
  double t1920;
  double t1921;
  double t1924;
  double t1926;
  double t1948;
  double t1949;
  double t1950;
  double t1951;
  double t1953;
  double t1960;
  double t1978;
  double t2009;
  double t2010;
  double t1961;
  double t1968;
  double t2012;
  double t2029;
  double t2037;
  double t2040;
  double t2041;
  double t2107;
  double t2109;
  double t2110;
  double t2102;
  double t2111;
  double t2115;
  double t2122;
  double t2134;
  double t2157;
  double t2237;
  double t2238;
  double t2239;
  double t2234;
  double t2242;
  double t2244;
  double t2252;
  double t2257;
  double t2261;
  double t2371;
  double t2380;
  double t2387;
  double t2370;
  double t2388;
  double t2389;
  double t2394;
  double t2395;
  double t2397;
  double t1832;
  double t1835;
  double t1844;
  double t2403;
  double t2407;
  double t2412;
  double t2416;
  double t2425;
  double t2427;
  double t1936;
  double t1852;
  double t1864;
  double t1865;
  double t1899;
  double t2220;
  double t2223;
  double t2230;
  double t2094;
  double t2096;
  double t2099;
  double t2050;
  double t2052;
  double t2060;
  double t2515;
  double t2529;
  double t2543;
  double t2583;
  double t2584;
  double t2585;
  double t2565;
  double t2587;
  double t2591;
  double t2596;
  double t2601;
  double t2610;
  double t2653;
  double t2669;
  double t2672;
  double t2652;
  double t2676;
  double t2677;
  double t2687;
  double t2690;
  double t2693;
  double t2648;
  double t2552;
  double t2555;
  double t2756;
  double t2768;
  double t2772;
  double t2847;
  double t2853;
  double t2878;
  double t2882;
  double t2934;
  double t2936;
  double t2946;
  double t2910;
  double t2917;
  double t2920;
  double t2817;
  double t2818;
  double t2819;
  double t2749;
  double t2752;
  double t2991;
  double t2995;
  double t2993;
  double t2996;
  double t2997;
  double t3004;
  double t3008;
  double t3009;
  double t3057;
  double t3059;
  double t3060;
  double t3058;
  double t3064;
  double t3066;
  double t3070;
  double t3072;
  double t3073;
  double t3103;
  double t3104;
  double t3105;
  double t3107;
  double t3110;
  double t3111;
  double t3112;
  double t3124;
  double t3125;
  double t3126;
  double t3164;
  double t3165;
  double t3174;
  double t3177;
  double t3201;
  double t3204;
  double t3208;
  double t3213;
  double t3231;
  double t3233;
  double t3235;
  double t3240;
  double t3242;
  double t3250;
  t411 = Cos(var1[3]);
  t202 = Cos(var1[5]);
  t215 = Sin(var1[4]);
  t206 = Sin(var1[3]);
  t420 = Sin(var1[5]);
  t238 = -1.*t202*t206*t215;
  t430 = t411*t420;
  t598 = t238 + t430;
  t653 = t411*t202*t215;
  t658 = t206*t420;
  t738 = t653 + t658;
  t897 = Cos(var1[16]);
  t894 = Cos(var1[15]);
  t826 = Sin(var1[16]);
  t885 = t826*t598;
  t898 = t894*t897*t738;
  t903 = t885 + t898;
  t914 = t897*t598;
  t916 = -1.*t894*t826*t738;
  t919 = t914 + t916;
  t1070 = Cos(var1[17]);
  t1075 = 0. + t1070;
  t1003 = Sin(var1[17]);
  t651 = Sin(var1[15]);
  t1204 = -1.*t202*t206;
  t1215 = t411*t215*t420;
  t1220 = t1204 + t1215;
  t1224 = -1.*t411*t202;
  t1244 = -1.*t206*t215*t420;
  t1245 = t1224 + t1244;
  t1167 = 0. + t1003;
  t1255 = -1.*t894*t826*t1220;
  t1261 = t897*t1245;
  t1279 = t1255 + t1261;
  t1296 = t894*t897*t1220;
  t1321 = t826*t1245;
  t1332 = t1296 + t1321;
  t1046 = -1.*t1003;
  t1052 = 0. + t1046;
  t1482 = Cos(var1[4]);
  t1503 = -1.*t894*t411*t1482*t826;
  t1504 = -1.*t897*t1482*t206;
  t1511 = t1503 + t1504;
  t1593 = t894*t897*t411*t1482;
  t1598 = -1.*t1482*t826*t206;
  t1601 = t1593 + t1598;
  t1627 = t1167*t1511;
  t1628 = t1075*t1601;
  t1631 = t1627 + t1628;
  t1686 = t411*t1482;
  t1689 = 0. + t1686;
  t1709 = t894*t1482*t206;
  t1710 = -1.*t651;
  t1718 = 0. + t1710;
  t1723 = -1.*t1718*t215;
  t1724 = 0. + t1709 + t1723;
  t1706 = t1689*t826;
  t1728 = t897*t1724;
  t1729 = 0. + t1706 + t1728;
  t1731 = t1052*t1729;
  t1740 = t897*t1689;
  t1745 = -1.*t826*t1724;
  t1747 = 0. + t1740 + t1745;
  t1750 = t1075*t1747;
  t1791 = 0. + t1731 + t1750;
  t1653 = t1075*t1511;
  t1654 = t1052*t1601;
  t1655 = t1653 + t1654;
  t1805 = Power(t1791,2);
  t1808 = t1075*t1729;
  t1809 = t1167*t1747;
  t1820 = 0. + t1808 + t1809;
  t1821 = Power(t1820,2);
  t1824 = t1805 + t1821;
  t1828 = 1/t1824;
  t1862 = 0. + t894;
  t1912 = -1.*t1482*t651*t206;
  t1915 = t1862*t215;
  t1920 = 0. + t1912 + t1915;
  t1921 = Power(t1920,2);
  t1924 = t1921 + t1805 + t1821;
  t1926 = 1/t1924;
  t1948 = t1862*t1482*t202;
  t1949 = t202*t206*t215;
  t1950 = -1.*t411*t420;
  t1951 = t1949 + t1950;
  t1953 = t651*t1951;
  t1960 = 0. + t1948 + t1953;
  t1978 = t411*t202;
  t2009 = t206*t215*t420;
  t2010 = t1978 + t2009;
  t1961 = Power(t1960,2);
  t1968 = t1862*t1482*t420;
  t2012 = t651*t2010;
  t2029 = 0. + t1968 + t2012;
  t2037 = Power(t2029,2);
  t2040 = t1961 + t2037;
  t2041 = 1/t2040;
  t2107 = t894*t1482*t202*t206;
  t2109 = -1.*t202*t1718*t215;
  t2110 = t2107 + t2109;
  t2102 = t411*t1482*t202*t826;
  t2111 = t897*t2110;
  t2115 = t2102 + t2111;
  t2122 = t897*t411*t1482*t202;
  t2134 = -1.*t826*t2110;
  t2157 = t2122 + t2134;
  t2237 = t894*t1482*t206*t420;
  t2238 = -1.*t1718*t215*t420;
  t2239 = t2237 + t2238;
  t2234 = t411*t1482*t826*t420;
  t2242 = t897*t2239;
  t2244 = t2234 + t2242;
  t2252 = t897*t411*t1482*t420;
  t2257 = -1.*t826*t2239;
  t2261 = t2252 + t2257;
  t2371 = -1.*t1482*t1718;
  t2380 = -1.*t894*t206*t215;
  t2387 = t2371 + t2380;
  t2370 = -1.*t411*t826*t215;
  t2388 = t897*t2387;
  t2389 = t2370 + t2388;
  t2394 = -1.*t897*t411*t215;
  t2395 = -1.*t826*t2387;
  t2397 = t2394 + t2395;
  t1832 = -1.*t1075*t1729;
  t1835 = -1.*t1167*t1747;
  t1844 = 0. + t1832 + t1835;
  t2403 = t1052*t2389;
  t2407 = t1075*t2397;
  t2412 = t2403 + t2407;
  t2416 = t1075*t2389;
  t2425 = t1167*t2397;
  t2427 = t2416 + t2425;
  t1936 = Sqrt(t1824);
  t1852 = t1482*t651*t206;
  t1864 = -1.*t1862*t215;
  t1865 = 0. + t1852 + t1864;
  t1899 = 1/Sqrt(t1824);
  t2220 = t1482*t651*t206*t420;
  t2223 = -1.*t1862*t215*t420;
  t2230 = t2220 + t2223;
  t2094 = t1482*t202*t651*t206;
  t2096 = -1.*t1862*t202*t215;
  t2099 = t2094 + t2096;
  t2050 = -1.*t1862*t1482*t420;
  t2052 = -1.*t651*t2010;
  t2060 = 0. + t2050 + t2052;
  t2515 = t202*t206;
  t2529 = -1.*t411*t215*t420;
  t2543 = t2515 + t2529;
  t2583 = -1.*t1482*t1718*t420;
  t2584 = t894*t1245;
  t2585 = t2583 + t2584;
  t2565 = t826*t2543;
  t2587 = t897*t2585;
  t2591 = t2565 + t2587;
  t2596 = t897*t2543;
  t2601 = -1.*t826*t2585;
  t2610 = t2596 + t2601;
  t2653 = t1482*t202*t1718;
  t2669 = t894*t1951;
  t2672 = t2653 + t2669;
  t2652 = t826*t738;
  t2676 = t897*t2672;
  t2677 = t2652 + t2676;
  t2687 = t897*t738;
  t2690 = -1.*t826*t2672;
  t2693 = t2687 + t2690;
  t2648 = t1948 + t1953;
  t2552 = t651*t1245;
  t2555 = t2050 + t2552;
  t2756 = -1.*t894*t1482*t202;
  t2768 = -1.*t651*t1951;
  t2772 = t2756 + t2768;
  t2847 = -1.*t894*t1482*t420;
  t2853 = t2847 + t2052;
  t2878 = t894*t215;
  t2882 = t1912 + t2878;
  t2934 = t897*t1075*t2882;
  t2936 = -1.*t826*t1167*t2882;
  t2946 = t2934 + t2936;
  t2910 = -1.*t1075*t826*t2882;
  t2917 = t897*t1052*t2882;
  t2920 = t2910 + t2917;
  t2817 = -1.*t1482*t651*t420;
  t2818 = t894*t2010;
  t2819 = t2817 + t2818;
  t2749 = -1.*t1482*t202*t651;
  t2752 = t2749 + t2669;
  t2991 = 0. + t653 + t658;
  t2995 = 0. + t2653 + t2669;
  t2993 = -1.*t826*t2991;
  t2996 = -1.*t897*t2995;
  t2997 = t2993 + t2996;
  t3004 = t897*t2991;
  t3008 = -1.*t826*t2995;
  t3009 = t3004 + t3008;
  t3057 = 0. + t1204 + t1215;
  t3059 = t1482*t1718*t420;
  t3060 = 0. + t3059 + t2818;
  t3058 = -1.*t826*t3057;
  t3064 = -1.*t897*t3060;
  t3066 = t3058 + t3064;
  t3070 = t897*t3057;
  t3072 = -1.*t826*t3060;
  t3073 = t3070 + t3072;
  t3103 = -1.*t1689*t826;
  t3104 = -1.*t897*t1724;
  t3105 = t3103 + t3104;
  t3107 = t1740 + t1745;
  t3110 = t1167*t3105;
  t3111 = t1075*t3107;
  t3112 = t3110 + t3111;
  t3124 = t1075*t3105;
  t3125 = t1052*t3107;
  t3126 = t3124 + t3125;
  t3164 = t826*t2991;
  t3165 = t897*t2995;
  t3174 = 0. + t3164 + t3165;
  t3177 = 0. + t3004 + t3008;
  t3201 = t826*t3057;
  t3204 = t897*t3060;
  t3208 = 0. + t3201 + t3204;
  t3213 = 0. + t3070 + t3072;
  t3231 = -1.*t1003*t1729;
  t3233 = t1070*t1747;
  t3235 = t3231 + t3233;
  t3240 = -1.*t1070*t1729;
  t3242 = -1.*t1003*t1747;
  t3250 = t3240 + t3242;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=1.;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=1.;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=-0.1944*t598 + 0.0329*t651*t738 - 0.2083*t903 - 0.1422*t919 - 0.02*(t1052*t903 + t1075*t919) - 0.16*(t1075*t903 + t1167*t919);
  p_output1[19]=-0.1944*t1245 - 0.1422*t1279 - 0.2083*t1332 - 0.02*(t1075*t1279 + t1052*t1332) - 0.16*(t1167*t1279 + t1075*t1332) + 0.0329*t1220*t651;
  p_output1[20]=-0.1422*t1511 - 0.2083*t1601 - 0.16*t1631 - 0.02*t1655 + 0.1944*t1482*t206 + 0.0329*t1482*t411*t651;
  p_output1[21]=t1631*t1791*t1828 + t1655*t1828*t1844;
  p_output1[22]=0.5*(2.*t1655*t1791 + 2.*t1631*t1820)*t1865*t1899*t1926 - 1.*t1482*t1926*t1936*t411*t651;
  p_output1[23]=t1220*t1960*t2041*t651 + t2041*t2060*t651*t738;
  p_output1[24]=0.0329*t2099 - 0.2083*t2115 - 0.0817*t202*t215 - 0.1422*t2157 - 0.02*(t1052*t2115 + t1075*t2157) - 0.16*(t1075*t2115 + t1167*t2157) - 0.1944*t1482*t202*t411;
  p_output1[25]=0.0329*t2230 - 0.2083*t2244 - 0.1422*t2261 - 0.02*(t1052*t2244 + t1075*t2261) - 0.16*(t1075*t2244 + t1167*t2261) - 0.0817*t215*t420 - 0.1944*t1482*t411*t420;
  p_output1[26]=-0.0817*t1482 - 0.2083*t2389 - 0.1422*t2397 - 0.02*t2412 - 0.16*t2427 + 0.1944*t215*t411 + 0.0329*(-1.*t1482*t1862 - 1.*t206*t215*t651);
  p_output1[27]=t1828*t1844*t2412 + t1791*t1828*t2427;
  p_output1[28]=0.5*t1865*t1899*t1926*(2.*t1791*t2412 + 2.*t1820*t2427) + t1926*t1936*(t1482*t1862 + t206*t215*t651);
  p_output1[29]=t2041*t2060*t2099 + t1960*t2041*t2230;
  p_output1[30]=-0.1944*t2543 + 0.0329*t2555 - 0.2083*t2591 - 0.1422*t2610 - 0.02*(t1052*t2591 + t1075*t2610) - 0.16*(t1075*t2591 + t1167*t2610) - 0.0817*t1482*t420;
  p_output1[31]=0.0817*t1482*t202 + 0.0329*t2648 - 0.2083*t2677 - 0.1422*t2693 - 0.02*(t1052*t2677 + t1075*t2693) - 0.16*(t1075*t2677 + t1167*t2693) - 0.1944*t738;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=t2041*t2060*t2555 + t1960*t2041*t2648;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
  p_output1[90]=0.0329*t2752 + 0.1422*t2772*t826 - 0.2083*t2772*t897 - 0.02*(-1.*t1075*t2772*t826 + t1052*t2772*t897) - 0.16*(-1.*t1167*t2772*t826 + t1075*t2772*t897);
  p_output1[91]=0.0329*t2819 + 0.1422*t2853*t826 - 0.2083*t2853*t897 - 0.02*(-1.*t1075*t2853*t826 + t1052*t2853*t897) - 0.16*(-1.*t1167*t2853*t826 + t1075*t2853*t897);
  p_output1[92]=-0.02*t2920 - 0.16*t2946 + 0.0329*(t1709 + t215*t651) + 0.1422*t2882*t826 - 0.2083*t2882*t897;
  p_output1[93]=t1828*t1844*t2920 + t1791*t1828*t2946;
  p_output1[94]=0.5*t1865*t1899*t1926*(2.*t1791*t2920 + 2.*t1820*t2946) + t1926*t1936*(-1.*t215*t651 - 1.*t1482*t206*t894);
  p_output1[95]=t2041*t2060*t2752 + t1960*t2041*t2819;
  p_output1[96]=-0.1422*t2997 - 0.2083*t3009 - 0.02*(t1075*t2997 + t1052*t3009) - 0.16*(t1167*t2997 + t1075*t3009);
  p_output1[97]=-0.1422*t3066 - 0.2083*t3073 - 0.02*(t1075*t3066 + t1052*t3073) - 0.16*(t1167*t3066 + t1075*t3073);
  p_output1[98]=-0.1422*t3105 - 0.2083*t3107 - 0.16*t3112 - 0.02*t3126;
  p_output1[99]=t1791*t1828*t3112 + t1828*t1844*t3126;
  p_output1[100]=0.5*t1865*t1899*t1926*(2.*t1820*t3112 + 2.*t1791*t3126);
  p_output1[101]=0;
  p_output1[102]=-0.02*(-1.*t1070*t3174 - 1.*t1003*t3177) - 0.16*(-1.*t1003*t3174 + t1070*t3177);
  p_output1[103]=-0.02*(-1.*t1070*t3208 - 1.*t1003*t3213) - 0.16*(-1.*t1003*t3208 + t1070*t3213);
  p_output1[104]=-0.16*t3235 - 0.02*t3250;
  p_output1[105]=t1791*t1828*t3235 + t1828*t1844*t3250;
  p_output1[106]=0.5*t1865*t1899*t1926*(2.*t1820*t3235 + 2.*t1791*t3250);
  p_output1[107]=0;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Sj_4_func.hh"

namespace SymFunction
{

void Sj_4_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
