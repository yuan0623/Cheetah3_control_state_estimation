/*
 * Automatically Generated from Mathematica.
 * Mon 29 Jul 2019 15:08:33 GMT-04:00
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
  double t559;
  double t233;
  double t435;
  double t387;
  double t565;
  double t653;
  double t658;
  double t700;
  double t534;
  double t598;
  double t620;
  double t783;
  double t758;
  double t892;
  double t906;
  double t909;
  double t916;
  double t885;
  double t894;
  double t897;
  double t965;
  double t982;
  double t1025;
  double t742;
  double t1134;
  double t1135;
  double t1147;
  double t1165;
  double t1167;
  double t1182;
  double t1191;
  double t1194;
  double t1198;
  double t1204;
  double t1215;
  double t1220;
  double t1042;
  double t1043;
  double t1072;
  double t1341;
  double t1374;
  double t1375;
  double t1381;
  double t1390;
  double t1397;
  double t1404;
  double t1536;
  double t1540;
  double t1548;
  double t1553;
  double t1511;
  double t1528;
  double t1482;
  double t1491;
  double t1500;
  double t1535;
  double t1558;
  double t1561;
  double t1593;
  double t1598;
  double t1601;
  double t1616;
  double t1619;
  double t1626;
  double t1429;
  double t1436;
  double t1439;
  double t1627;
  double t1628;
  double t1631;
  double t1638;
  double t1642;
  double t1653;
  double t1654;
  double t1691;
  double t1718;
  double t1723;
  double t1724;
  double t1728;
  double t1729;
  double t1730;
  double t1747;
  double t1750;
  double t1765;
  double t1775;
  double t1782;
  double t1790;
  double t1808;
  double t1809;
  double t1810;
  double t1791;
  double t1805;
  double t1818;
  double t1821;
  double t1828;
  double t1830;
  double t1831;
  double t1870;
  double t1895;
  double t1896;
  double t1926;
  double t1928;
  double t1934;
  double t1899;
  double t1912;
  double t1915;
  double t2012;
  double t2019;
  double t2022;
  double t2045;
  double t2047;
  double t2050;
  double t2029;
  double t2037;
  double t2040;
  double t2130;
  double t2131;
  double t2133;
  double t2168;
  double t2172;
  double t2178;
  double t2134;
  double t2137;
  double t2157;
  double t2201;
  double t2203;
  double t2207;
  double t2183;
  double t2187;
  double t2191;
  double t1662;
  double t1682;
  double t1684;
  double t1699;
  double t1701;
  double t1703;
  double t1715;
  double t1732;
  double t1979;
  double t1987;
  double t2009;
  double t1853;
  double t1863;
  double t1865;
  double t1833;
  double t1835;
  double t1843;
  double t2291;
  double t2296;
  double t2305;
  double t2324;
  double t2327;
  double t2328;
  double t2343;
  double t2352;
  double t2370;
  double t2329;
  double t2333;
  double t2338;
  double t2427;
  double t2451;
  double t2453;
  double t2471;
  double t2472;
  double t2473;
  double t2454;
  double t2458;
  double t2464;
  double t2416;
  double t2312;
  double t2315;
  double t2552;
  double t2554;
  double t2621;
  double t2622;
  double t2658;
  double t2668;
  double t2694;
  double t2696;
  double t2697;
  double t2688;
  double t2690;
  double t2691;
  double t2611;
  double t2616;
  double t2618;
  double t2538;
  double t2540;
  double t2543;
  double t2761;
  double t2759;
  double t2760;
  double t2764;
  double t2768;
  double t2779;
  double t2780;
  double t2782;
  double t2840;
  double t2818;
  double t2819;
  double t2826;
  double t2832;
  double t2842;
  double t2844;
  double t2853;
  double t2855;
  double t2858;
  double t2880;
  double t2881;
  double t2882;
  double t2888;
  double t2917;
  double t2920;
  double t2925;
  double t2903;
  double t2907;
  double t2908;
  double t2973;
  double t2974;
  double t2975;
  double t2967;
  double t2991;
  double t2993;
  double t2994;
  double t2989;
  double t3026;
  double t3028;
  double t3037;
  double t3041;
  double t3044;
  double t3051;
  t559 = Cos(var1[3]);
  t233 = Cos(var1[5]);
  t435 = Sin(var1[4]);
  t387 = Sin(var1[3]);
  t565 = Sin(var1[5]);
  t653 = t559*t233*t435;
  t658 = t387*t565;
  t700 = t653 + t658;
  t534 = -1.*t233*t387*t435;
  t598 = t559*t565;
  t620 = t534 + t598;
  t783 = Cos(var1[7]);
  t758 = Cos(var1[6]);
  t892 = Sin(var1[7]);
  t906 = t783*t620;
  t909 = -1.*t758*t700*t892;
  t916 = t906 + t909;
  t885 = t758*t783*t700;
  t894 = t620*t892;
  t897 = t885 + t894;
  t965 = Cos(var1[8]);
  t982 = 0. + t965;
  t1025 = Sin(var1[8]);
  t742 = Sin(var1[6]);
  t1134 = -1.*t559*t233;
  t1135 = -1.*t387*t435*t565;
  t1147 = t1134 + t1135;
  t1165 = -1.*t233*t387;
  t1167 = t559*t435*t565;
  t1182 = t1165 + t1167;
  t1191 = t783*t1147;
  t1194 = -1.*t758*t1182*t892;
  t1198 = t1191 + t1194;
  t1204 = t758*t783*t1182;
  t1215 = t1147*t892;
  t1220 = t1204 + t1215;
  t1042 = -1.*t1025;
  t1043 = 0. + t1042;
  t1072 = 0. + t1025;
  t1341 = Cos(var1[4]);
  t1374 = -1.*t1341*t783*t387;
  t1375 = -1.*t559*t1341*t758*t892;
  t1381 = t1374 + t1375;
  t1390 = t559*t1341*t758*t783;
  t1397 = -1.*t1341*t387*t892;
  t1404 = t1390 + t1397;
  t1536 = t1341*t758*t387;
  t1540 = 0. + t742;
  t1548 = -1.*t435*t1540;
  t1553 = 0. + t1536 + t1548;
  t1511 = t559*t1341;
  t1528 = 0. + t1511;
  t1482 = t982*t1404;
  t1491 = t1381*t1072;
  t1500 = t1482 + t1491;
  t1535 = t1528*t783;
  t1558 = -1.*t1553*t892;
  t1561 = 0. + t1535 + t1558;
  t1593 = t982*t1561;
  t1598 = t783*t1553;
  t1601 = t1528*t892;
  t1616 = 0. + t1598 + t1601;
  t1619 = t1616*t1043;
  t1626 = 0. + t1593 + t1619;
  t1429 = t982*t1381;
  t1436 = t1404*t1043;
  t1439 = t1429 + t1436;
  t1627 = Power(t1626,2);
  t1628 = t982*t1616;
  t1631 = t1561*t1072;
  t1638 = 0. + t1628 + t1631;
  t1642 = Power(t1638,2);
  t1653 = t1627 + t1642;
  t1654 = 1/t1653;
  t1691 = 0. + t758;
  t1718 = t1691*t435;
  t1723 = t1341*t387*t742;
  t1724 = 0. + t1718 + t1723;
  t1728 = Power(t1724,2);
  t1729 = t1728 + t1627 + t1642;
  t1730 = 1/t1729;
  t1747 = t1341*t233*t1691;
  t1750 = t233*t387*t435;
  t1765 = -1.*t559*t565;
  t1775 = t1750 + t1765;
  t1782 = -1.*t1775*t742;
  t1790 = 0. + t1747 + t1782;
  t1808 = t559*t233;
  t1809 = t387*t435*t565;
  t1810 = t1808 + t1809;
  t1791 = Power(t1790,2);
  t1805 = t1341*t1691*t565;
  t1818 = -1.*t1810*t742;
  t1821 = 0. + t1805 + t1818;
  t1828 = Power(t1821,2);
  t1830 = t1791 + t1828;
  t1831 = 1/t1830;
  t1870 = t1341*t233*t758*t387;
  t1895 = -1.*t233*t435*t1540;
  t1896 = t1870 + t1895;
  t1926 = t559*t1341*t233*t783;
  t1928 = -1.*t1896*t892;
  t1934 = t1926 + t1928;
  t1899 = t783*t1896;
  t1912 = t559*t1341*t233*t892;
  t1915 = t1899 + t1912;
  t2012 = t1341*t758*t387*t565;
  t2019 = -1.*t435*t565*t1540;
  t2022 = t2012 + t2019;
  t2045 = t559*t1341*t783*t565;
  t2047 = -1.*t2022*t892;
  t2050 = t2045 + t2047;
  t2029 = t783*t2022;
  t2037 = t559*t1341*t565*t892;
  t2040 = t2029 + t2037;
  t2130 = -1.*t758*t387*t435;
  t2131 = -1.*t1341*t1540;
  t2133 = t2130 + t2131;
  t2168 = -1.*t559*t783*t435;
  t2172 = -1.*t2133*t892;
  t2178 = t2168 + t2172;
  t2134 = t783*t2133;
  t2137 = -1.*t559*t435*t892;
  t2157 = t2134 + t2137;
  t2201 = t982*t2157;
  t2203 = t2178*t1072;
  t2207 = t2201 + t2203;
  t2183 = t982*t2178;
  t2187 = t2157*t1043;
  t2191 = t2183 + t2187;
  t1662 = -1.*t982*t1616;
  t1682 = -1.*t1561*t1072;
  t1684 = 0. + t1662 + t1682;
  t1699 = -1.*t1691*t435;
  t1701 = -1.*t1341*t387*t742;
  t1703 = 0. + t1699 + t1701;
  t1715 = 1/Sqrt(t1653);
  t1732 = Sqrt(t1653);
  t1979 = -1.*t1691*t435*t565;
  t1987 = -1.*t1341*t387*t565*t742;
  t2009 = t1979 + t1987;
  t1853 = -1.*t233*t1691*t435;
  t1863 = -1.*t1341*t233*t387*t742;
  t1865 = t1853 + t1863;
  t1833 = -1.*t1341*t1691*t565;
  t1835 = t1810*t742;
  t1843 = 0. + t1833 + t1835;
  t2291 = t233*t387;
  t2296 = -1.*t559*t435*t565;
  t2305 = t2291 + t2296;
  t2324 = t758*t1147;
  t2327 = -1.*t1341*t565*t1540;
  t2328 = t2324 + t2327;
  t2343 = t783*t2305;
  t2352 = -1.*t2328*t892;
  t2370 = t2343 + t2352;
  t2329 = t783*t2328;
  t2333 = t2305*t892;
  t2338 = t2329 + t2333;
  t2427 = t758*t1775;
  t2451 = t1341*t233*t1540;
  t2453 = t2427 + t2451;
  t2471 = t783*t700;
  t2472 = -1.*t2453*t892;
  t2473 = t2471 + t2472;
  t2454 = t783*t2453;
  t2458 = t700*t892;
  t2464 = t2454 + t2458;
  t2416 = t1747 + t1782;
  t2312 = -1.*t1147*t742;
  t2315 = t1833 + t2312;
  t2552 = t1341*t233*t758;
  t2554 = t2552 + t1782;
  t2621 = t1341*t758*t565;
  t2622 = t2621 + t1818;
  t2658 = -1.*t758*t435;
  t2668 = t2658 + t1701;
  t2694 = t783*t982*t2668;
  t2696 = -1.*t2668*t892*t1072;
  t2697 = t2694 + t2696;
  t2688 = -1.*t982*t2668*t892;
  t2690 = t783*t2668*t1043;
  t2691 = t2688 + t2690;
  t2611 = -1.*t758*t1810;
  t2616 = -1.*t1341*t565*t742;
  t2618 = t2611 + t2616;
  t2538 = -1.*t758*t1775;
  t2540 = -1.*t1341*t233*t742;
  t2543 = t2538 + t2540;
  t2761 = 0. + t653 + t658;
  t2759 = 0. + t2427 + t2451;
  t2760 = -1.*t783*t2759;
  t2764 = -1.*t2761*t892;
  t2768 = t2760 + t2764;
  t2779 = t783*t2761;
  t2780 = -1.*t2759*t892;
  t2782 = t2779 + t2780;
  t2840 = 0. + t1165 + t1167;
  t2818 = t758*t1810;
  t2819 = t1341*t565*t1540;
  t2826 = 0. + t2818 + t2819;
  t2832 = -1.*t783*t2826;
  t2842 = -1.*t2840*t892;
  t2844 = t2832 + t2842;
  t2853 = t783*t2840;
  t2855 = -1.*t2826*t892;
  t2858 = t2853 + t2855;
  t2880 = -1.*t783*t1553;
  t2881 = -1.*t1528*t892;
  t2882 = t2880 + t2881;
  t2888 = t1535 + t1558;
  t2917 = t982*t2888;
  t2920 = t2882*t1072;
  t2925 = t2917 + t2920;
  t2903 = t982*t2882;
  t2907 = t2888*t1043;
  t2908 = t2903 + t2907;
  t2973 = t783*t2759;
  t2974 = t2761*t892;
  t2975 = 0. + t2973 + t2974;
  t2967 = 0. + t2779 + t2780;
  t2991 = t783*t2826;
  t2993 = t2840*t892;
  t2994 = 0. + t2991 + t2993;
  t2989 = 0. + t2853 + t2855;
  t3026 = t965*t1561;
  t3028 = -1.*t1616*t1025;
  t3037 = t3026 + t3028;
  t3041 = -1.*t965*t1616;
  t3044 = -1.*t1561*t1025;
  t3051 = t3041 + t3044;
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
  p_output1[18]=0.2429*t620 + 0.0329*t700*t742 - 0.2083*t897 - 0.1422*t916 - 0.16*(t1072*t916 + t897*t982) - 0.02*(t1043*t897 + t916*t982);
  p_output1[19]=0.2429*t1147 - 0.1422*t1198 - 0.2083*t1220 + 0.0329*t1182*t742 - 0.02*(t1043*t1220 + t1198*t982) - 0.16*(t1072*t1198 + t1220*t982);
  p_output1[20]=-0.1422*t1381 - 0.2083*t1404 - 0.02*t1439 - 0.16*t1500 - 0.2429*t1341*t387 + 0.0329*t1341*t559*t742;
  p_output1[21]=t1500*t1626*t1654 + t1439*t1654*t1684;
  p_output1[22]=0.5*(2.*t1439*t1626 + 2.*t1500*t1638)*t1703*t1715*t1730 + t1341*t1730*t1732*t559*t742;
  p_output1[23]=-1.*t1182*t1790*t1831*t742 - 1.*t1831*t1843*t700*t742;
  p_output1[24]=-0.0329*t1865 - 0.2083*t1915 - 0.1422*t1934 + 0.0817*t233*t435 + 0.2429*t1341*t233*t559 - 0.16*(t1072*t1934 + t1915*t982) - 0.02*(t1043*t1915 + t1934*t982);
  p_output1[25]=-0.0329*t2009 - 0.2083*t2040 - 0.1422*t2050 + 0.0817*t435*t565 + 0.2429*t1341*t559*t565 - 0.16*(t1072*t2050 + t2040*t982) - 0.02*(t1043*t2040 + t2050*t982);
  p_output1[26]=0.0817*t1341 - 0.2083*t2157 - 0.1422*t2178 - 0.02*t2191 - 0.16*t2207 - 0.2429*t435*t559 - 0.0329*(-1.*t1341*t1691 + t387*t435*t742);
  p_output1[27]=t1654*t1684*t2191 + t1626*t1654*t2207;
  p_output1[28]=0.5*t1703*t1715*t1730*(2.*t1626*t2191 + 2.*t1638*t2207) + t1730*t1732*(t1341*t1691 - 1.*t387*t435*t742);
  p_output1[29]=t1831*t1843*t1865 + t1790*t1831*t2009;
  p_output1[30]=0.2429*t2305 - 0.0329*t2315 - 0.2083*t2338 - 0.1422*t2370 + 0.0817*t1341*t565 - 0.16*(t1072*t2370 + t2338*t982) - 0.02*(t1043*t2338 + t2370*t982);
  p_output1[31]=-0.0817*t1341*t233 - 0.0329*t2416 - 0.2083*t2464 - 0.1422*t2473 + 0.2429*t700 - 0.16*(t1072*t2473 + t2464*t982) - 0.02*(t1043*t2464 + t2473*t982);
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=t1831*t1843*t2315 + t1790*t1831*t2416;
  p_output1[36]=-0.0329*t2543 - 0.2083*t2554*t783 + 0.1422*t2554*t892 - 0.16*(-1.*t1072*t2554*t892 + t2554*t783*t982) - 0.02*(t1043*t2554*t783 - 1.*t2554*t892*t982);
  p_output1[37]=-0.0329*t2618 - 0.2083*t2622*t783 + 0.1422*t2622*t892 - 0.16*(-1.*t1072*t2622*t892 + t2622*t783*t982) - 0.02*(t1043*t2622*t783 - 1.*t2622*t892*t982);
  p_output1[38]=-0.02*t2691 - 0.16*t2697 - 0.0329*(t435*t742 - 1.*t1341*t387*t758) - 0.2083*t2668*t783 + 0.1422*t2668*t892;
  p_output1[39]=t1654*t1684*t2691 + t1626*t1654*t2697;
  p_output1[40]=0.5*t1703*t1715*t1730*(2.*t1626*t2691 + 2.*t1638*t2697) + t1730*t1732*(t1536 - 1.*t435*t742);
  p_output1[41]=t1831*t1843*t2543 + t1790*t1831*t2618;
  p_output1[42]=-0.1422*t2768 - 0.2083*t2782 - 0.02*(t1043*t2782 + t2768*t982) - 0.16*(t1072*t2768 + t2782*t982);
  p_output1[43]=-0.1422*t2844 - 0.2083*t2858 - 0.02*(t1043*t2858 + t2844*t982) - 0.16*(t1072*t2844 + t2858*t982);
  p_output1[44]=-0.1422*t2882 - 0.2083*t2888 - 0.02*t2908 - 0.16*t2925;
  p_output1[45]=t1654*t1684*t2908 + t1626*t1654*t2925;
  p_output1[46]=0.5*t1703*t1715*t1730*(2.*t1626*t2908 + 2.*t1638*t2925);
  p_output1[47]=0;
  p_output1[48]=-0.16*(-1.*t1025*t2975 + t2967*t965) - 0.02*(-1.*t1025*t2967 - 1.*t2975*t965);
  p_output1[49]=-0.16*(-1.*t1025*t2994 + t2989*t965) - 0.02*(-1.*t1025*t2989 - 1.*t2994*t965);
  p_output1[50]=-0.16*t3037 - 0.02*t3051;
  p_output1[51]=t1626*t1654*t3037 + t1654*t1684*t3051;
  p_output1[52]=0.5*t1703*t1715*t1730*(2.*t1638*t3037 + 2.*t1626*t3051);
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
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=0;
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
  p_output1[102]=0;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=0;
  p_output1[106]=0;
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

#include "Sj_3_func.hh"

namespace SymFunction
{

void Sj_3_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
