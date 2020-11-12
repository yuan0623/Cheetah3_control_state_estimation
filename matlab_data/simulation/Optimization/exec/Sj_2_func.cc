/*
 * Automatically Generated from Mathematica.
 * Mon 29 Jul 2019 15:08:30 GMT-04:00
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
  double t178;
  double t23;
  double t73;
  double t69;
  double t184;
  double t130;
  double t233;
  double t387;
  double t534;
  double t559;
  double t563;
  double t608;
  double t603;
  double t574;
  double t598;
  double t620;
  double t651;
  double t658;
  double t747;
  double t749;
  double t815;
  double t854;
  double t761;
  double t488;
  double t953;
  double t965;
  double t975;
  double t986;
  double t1005;
  double t1008;
  double t904;
  double t1027;
  double t1042;
  double t1043;
  double t1065;
  double t1070;
  double t1075;
  double t770;
  double t771;
  double t1189;
  double t1195;
  double t1196;
  double t1198;
  double t1204;
  double t1213;
  double t1215;
  double t1222;
  double t1224;
  double t1240;
  double t1287;
  double t1288;
  double t1306;
  double t1307;
  double t1309;
  double t1312;
  double t1296;
  double t1321;
  double t1326;
  double t1341;
  double t1352;
  double t1356;
  double t1357;
  double t1358;
  double t1372;
  double t1245;
  double t1255;
  double t1257;
  double t1374;
  double t1375;
  double t1381;
  double t1382;
  double t1389;
  double t1390;
  double t1397;
  double t1442;
  double t1503;
  double t1504;
  double t1528;
  double t1535;
  double t1536;
  double t1538;
  double t1558;
  double t1561;
  double t1579;
  double t1582;
  double t1585;
  double t1588;
  double t1601;
  double t1616;
  double t1617;
  double t1593;
  double t1598;
  double t1620;
  double t1627;
  double t1628;
  double t1631;
  double t1632;
  double t1691;
  double t1696;
  double t1697;
  double t1689;
  double t1699;
  double t1701;
  double t1706;
  double t1707;
  double t1709;
  double t1791;
  double t1793;
  double t1803;
  double t1790;
  double t1805;
  double t1808;
  double t1810;
  double t1816;
  double t1818;
  double t1879;
  double t1882;
  double t1889;
  double t1876;
  double t1895;
  double t1896;
  double t1902;
  double t1911;
  double t1912;
  double t1406;
  double t1414;
  double t1429;
  double t1926;
  double t1928;
  double t1932;
  double t1936;
  double t1940;
  double t1944;
  double t1542;
  double t1440;
  double t1443;
  double t1451;
  double t1501;
  double t1772;
  double t1773;
  double t1775;
  double t1672;
  double t1673;
  double t1682;
  double t1639;
  double t1642;
  double t1644;
  double t2045;
  double t2049;
  double t2050;
  double t2078;
  double t2079;
  double t2091;
  double t2076;
  double t2096;
  double t2099;
  double t2102;
  double t2104;
  double t2109;
  double t2191;
  double t2193;
  double t2200;
  double t2187;
  double t2201;
  double t2203;
  double t2208;
  double t2211;
  double t2213;
  double t2180;
  double t2066;
  double t2069;
  double t2285;
  double t2287;
  double t2343;
  double t2347;
  double t2399;
  double t2400;
  double t2464;
  double t2465;
  double t2467;
  double t2428;
  double t2451;
  double t2452;
  double t2336;
  double t2337;
  double t2338;
  double t2265;
  double t2267;
  double t2279;
  double t2517;
  double t2523;
  double t2522;
  double t2524;
  double t2529;
  double t2540;
  double t2541;
  double t2543;
  double t2589;
  double t2591;
  double t2592;
  double t2594;
  double t2590;
  double t2600;
  double t2601;
  double t2611;
  double t2613;
  double t2616;
  double t2636;
  double t2637;
  double t2638;
  double t2648;
  double t2653;
  double t2658;
  double t2665;
  double t2669;
  double t2672;
  double t2674;
  double t2696;
  double t2697;
  double t2700;
  double t2710;
  double t2740;
  double t2741;
  double t2742;
  double t2748;
  double t2766;
  double t2768;
  double t2770;
  double t2775;
  double t2777;
  double t2778;
  t178 = Cos(var1[3]);
  t23 = Cos(var1[5]);
  t73 = Sin(var1[4]);
  t69 = Sin(var1[3]);
  t184 = Sin(var1[5]);
  t130 = -1.*t23*t69*t73;
  t233 = t178*t184;
  t387 = t130 + t233;
  t534 = t178*t23*t73;
  t559 = t69*t184;
  t563 = t534 + t559;
  t608 = Cos(var1[13]);
  t603 = Cos(var1[12]);
  t574 = Sin(var1[13]);
  t598 = t574*t387;
  t620 = t603*t608*t563;
  t651 = t598 + t620;
  t658 = t608*t387;
  t747 = -1.*t603*t574*t563;
  t749 = t658 + t747;
  t815 = Cos(var1[14]);
  t854 = 0. + t815;
  t761 = Sin(var1[14]);
  t488 = Sin(var1[12]);
  t953 = -1.*t23*t69;
  t965 = t178*t73*t184;
  t975 = t953 + t965;
  t986 = -1.*t178*t23;
  t1005 = -1.*t69*t73*t184;
  t1008 = t986 + t1005;
  t904 = 0. + t761;
  t1027 = -1.*t603*t574*t975;
  t1042 = t608*t1008;
  t1043 = t1027 + t1042;
  t1065 = t603*t608*t975;
  t1070 = t574*t1008;
  t1075 = t1065 + t1070;
  t770 = -1.*t761;
  t771 = 0. + t770;
  t1189 = Cos(var1[4]);
  t1195 = -1.*t603*t178*t1189*t574;
  t1196 = -1.*t608*t1189*t69;
  t1198 = t1195 + t1196;
  t1204 = t603*t608*t178*t1189;
  t1213 = -1.*t1189*t574*t69;
  t1215 = t1204 + t1213;
  t1222 = t904*t1198;
  t1224 = t854*t1215;
  t1240 = t1222 + t1224;
  t1287 = t178*t1189;
  t1288 = 0. + t1287;
  t1306 = t603*t1189*t69;
  t1307 = 0. + t488;
  t1309 = -1.*t1307*t73;
  t1312 = 0. + t1306 + t1309;
  t1296 = t1288*t574;
  t1321 = t608*t1312;
  t1326 = 0. + t1296 + t1321;
  t1341 = t771*t1326;
  t1352 = t608*t1288;
  t1356 = -1.*t574*t1312;
  t1357 = 0. + t1352 + t1356;
  t1358 = t854*t1357;
  t1372 = 0. + t1341 + t1358;
  t1245 = t854*t1198;
  t1255 = t771*t1215;
  t1257 = t1245 + t1255;
  t1374 = Power(t1372,2);
  t1375 = t854*t1326;
  t1381 = t904*t1357;
  t1382 = 0. + t1375 + t1381;
  t1389 = Power(t1382,2);
  t1390 = t1374 + t1389;
  t1397 = 1/t1390;
  t1442 = 0. + t603;
  t1503 = t1189*t488*t69;
  t1504 = t1442*t73;
  t1528 = 0. + t1503 + t1504;
  t1535 = Power(t1528,2);
  t1536 = t1535 + t1374 + t1389;
  t1538 = 1/t1536;
  t1558 = t1442*t1189*t23;
  t1561 = t23*t69*t73;
  t1579 = -1.*t178*t184;
  t1582 = t1561 + t1579;
  t1585 = -1.*t488*t1582;
  t1588 = 0. + t1558 + t1585;
  t1601 = t178*t23;
  t1616 = t69*t73*t184;
  t1617 = t1601 + t1616;
  t1593 = Power(t1588,2);
  t1598 = t1442*t1189*t184;
  t1620 = -1.*t488*t1617;
  t1627 = 0. + t1598 + t1620;
  t1628 = Power(t1627,2);
  t1631 = t1593 + t1628;
  t1632 = 1/t1631;
  t1691 = t603*t1189*t23*t69;
  t1696 = -1.*t23*t1307*t73;
  t1697 = t1691 + t1696;
  t1689 = t178*t1189*t23*t574;
  t1699 = t608*t1697;
  t1701 = t1689 + t1699;
  t1706 = t608*t178*t1189*t23;
  t1707 = -1.*t574*t1697;
  t1709 = t1706 + t1707;
  t1791 = t603*t1189*t69*t184;
  t1793 = -1.*t1307*t73*t184;
  t1803 = t1791 + t1793;
  t1790 = t178*t1189*t574*t184;
  t1805 = t608*t1803;
  t1808 = t1790 + t1805;
  t1810 = t608*t178*t1189*t184;
  t1816 = -1.*t574*t1803;
  t1818 = t1810 + t1816;
  t1879 = -1.*t1189*t1307;
  t1882 = -1.*t603*t69*t73;
  t1889 = t1879 + t1882;
  t1876 = -1.*t178*t574*t73;
  t1895 = t608*t1889;
  t1896 = t1876 + t1895;
  t1902 = -1.*t608*t178*t73;
  t1911 = -1.*t574*t1889;
  t1912 = t1902 + t1911;
  t1406 = -1.*t854*t1326;
  t1414 = -1.*t904*t1357;
  t1429 = 0. + t1406 + t1414;
  t1926 = t771*t1896;
  t1928 = t854*t1912;
  t1932 = t1926 + t1928;
  t1936 = t854*t1896;
  t1940 = t904*t1912;
  t1944 = t1936 + t1940;
  t1542 = Sqrt(t1390);
  t1440 = -1.*t1189*t488*t69;
  t1443 = -1.*t1442*t73;
  t1451 = 0. + t1440 + t1443;
  t1501 = 1/Sqrt(t1390);
  t1772 = -1.*t1189*t488*t69*t184;
  t1773 = -1.*t1442*t73*t184;
  t1775 = t1772 + t1773;
  t1672 = -1.*t1189*t23*t488*t69;
  t1673 = -1.*t1442*t23*t73;
  t1682 = t1672 + t1673;
  t1639 = -1.*t1442*t1189*t184;
  t1642 = t488*t1617;
  t1644 = 0. + t1639 + t1642;
  t2045 = t23*t69;
  t2049 = -1.*t178*t73*t184;
  t2050 = t2045 + t2049;
  t2078 = -1.*t1189*t1307*t184;
  t2079 = t603*t1008;
  t2091 = t2078 + t2079;
  t2076 = t574*t2050;
  t2096 = t608*t2091;
  t2099 = t2076 + t2096;
  t2102 = t608*t2050;
  t2104 = -1.*t574*t2091;
  t2109 = t2102 + t2104;
  t2191 = t1189*t23*t1307;
  t2193 = t603*t1582;
  t2200 = t2191 + t2193;
  t2187 = t574*t563;
  t2201 = t608*t2200;
  t2203 = t2187 + t2201;
  t2208 = t608*t563;
  t2211 = -1.*t574*t2200;
  t2213 = t2208 + t2211;
  t2180 = t1558 + t1585;
  t2066 = -1.*t488*t1008;
  t2069 = t1639 + t2066;
  t2285 = t603*t1189*t23;
  t2287 = t2285 + t1585;
  t2343 = t603*t1189*t184;
  t2347 = t2343 + t1620;
  t2399 = -1.*t603*t73;
  t2400 = t1440 + t2399;
  t2464 = t608*t854*t2400;
  t2465 = -1.*t574*t904*t2400;
  t2467 = t2464 + t2465;
  t2428 = -1.*t854*t574*t2400;
  t2451 = t608*t771*t2400;
  t2452 = t2428 + t2451;
  t2336 = -1.*t1189*t488*t184;
  t2337 = -1.*t603*t1617;
  t2338 = t2336 + t2337;
  t2265 = -1.*t1189*t23*t488;
  t2267 = -1.*t603*t1582;
  t2279 = t2265 + t2267;
  t2517 = 0. + t534 + t559;
  t2523 = 0. + t2191 + t2193;
  t2522 = -1.*t574*t2517;
  t2524 = -1.*t608*t2523;
  t2529 = t2522 + t2524;
  t2540 = t608*t2517;
  t2541 = -1.*t574*t2523;
  t2543 = t2540 + t2541;
  t2589 = 0. + t953 + t965;
  t2591 = t1189*t1307*t184;
  t2592 = t603*t1617;
  t2594 = 0. + t2591 + t2592;
  t2590 = -1.*t574*t2589;
  t2600 = -1.*t608*t2594;
  t2601 = t2590 + t2600;
  t2611 = t608*t2589;
  t2613 = -1.*t574*t2594;
  t2616 = t2611 + t2613;
  t2636 = -1.*t1288*t574;
  t2637 = -1.*t608*t1312;
  t2638 = t2636 + t2637;
  t2648 = t1352 + t1356;
  t2653 = t904*t2638;
  t2658 = t854*t2648;
  t2665 = t2653 + t2658;
  t2669 = t854*t2638;
  t2672 = t771*t2648;
  t2674 = t2669 + t2672;
  t2696 = t574*t2517;
  t2697 = t608*t2523;
  t2700 = 0. + t2696 + t2697;
  t2710 = 0. + t2540 + t2541;
  t2740 = t574*t2589;
  t2741 = t608*t2594;
  t2742 = 0. + t2740 + t2741;
  t2748 = 0. + t2611 + t2613;
  t2766 = -1.*t761*t1326;
  t2768 = t815*t1357;
  t2770 = t2766 + t2768;
  t2775 = -1.*t815*t1326;
  t2777 = -1.*t761*t1357;
  t2778 = t2775 + t2777;
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
  p_output1[18]=-0.1944*t387 + 0.0329*t488*t563 - 0.2083*t651 - 0.1422*t749 - 0.02*(t651*t771 + t749*t854) - 0.16*(t651*t854 + t749*t904);
  p_output1[19]=-0.1944*t1008 - 0.1422*t1043 - 0.2083*t1075 - 0.02*(t1075*t771 + t1043*t854) - 0.16*(t1075*t854 + t1043*t904) + 0.0329*t488*t975;
  p_output1[20]=-0.1422*t1198 - 0.2083*t1215 - 0.16*t1240 - 0.02*t1257 + 0.0329*t1189*t178*t488 + 0.1944*t1189*t69;
  p_output1[21]=t1240*t1372*t1397 + t1257*t1397*t1429;
  p_output1[22]=0.5*(2.*t1257*t1372 + 2.*t1240*t1382)*t1451*t1501*t1538 + t1189*t1538*t1542*t178*t488;
  p_output1[23]=-1.*t1632*t1644*t488*t563 - 1.*t1588*t1632*t488*t975;
  p_output1[24]=-0.0329*t1682 - 0.2083*t1701 - 0.1422*t1709 - 0.1944*t1189*t178*t23 + 0.0817*t23*t73 - 0.02*(t1701*t771 + t1709*t854) - 0.16*(t1701*t854 + t1709*t904);
  p_output1[25]=-0.0329*t1775 - 0.2083*t1808 - 0.1422*t1818 - 0.1944*t1189*t178*t184 + 0.0817*t184*t73 - 0.02*(t1808*t771 + t1818*t854) - 0.16*(t1808*t854 + t1818*t904);
  p_output1[26]=0.0817*t1189 - 0.2083*t1896 - 0.1422*t1912 - 0.02*t1932 - 0.16*t1944 + 0.1944*t178*t73 - 0.0329*(-1.*t1189*t1442 + t488*t69*t73);
  p_output1[27]=t1397*t1429*t1932 + t1372*t1397*t1944;
  p_output1[28]=0.5*t1451*t1501*t1538*(2.*t1372*t1932 + 2.*t1382*t1944) + t1538*t1542*(t1189*t1442 - 1.*t488*t69*t73);
  p_output1[29]=t1632*t1644*t1682 + t1588*t1632*t1775;
  p_output1[30]=0.0817*t1189*t184 - 0.1944*t2050 - 0.0329*t2069 - 0.2083*t2099 - 0.1422*t2109 - 0.02*(t2099*t771 + t2109*t854) - 0.16*(t2099*t854 + t2109*t904);
  p_output1[31]=-0.0329*t2180 - 0.2083*t2203 - 0.1422*t2213 - 0.0817*t1189*t23 - 0.1944*t563 - 0.02*(t2203*t771 + t2213*t854) - 0.16*(t2203*t854 + t2213*t904);
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=t1632*t1644*t2069 + t1588*t1632*t2180;
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
  p_output1[72]=-0.0329*t2279 + 0.1422*t2287*t574 - 0.2083*t2287*t608 - 0.02*(t2287*t608*t771 - 1.*t2287*t574*t854) - 0.16*(t2287*t608*t854 - 1.*t2287*t574*t904);
  p_output1[73]=-0.0329*t2338 + 0.1422*t2347*t574 - 0.2083*t2347*t608 - 0.02*(t2347*t608*t771 - 1.*t2347*t574*t854) - 0.16*(t2347*t608*t854 - 1.*t2347*t574*t904);
  p_output1[74]=-0.02*t2452 - 0.16*t2467 + 0.1422*t2400*t574 - 0.2083*t2400*t608 - 0.0329*(-1.*t1189*t603*t69 + t488*t73);
  p_output1[75]=t1397*t1429*t2452 + t1372*t1397*t2467;
  p_output1[76]=0.5*t1451*t1501*t1538*(2.*t1372*t2452 + 2.*t1382*t2467) + t1538*t1542*(t1306 - 1.*t488*t73);
  p_output1[77]=t1632*t1644*t2279 + t1588*t1632*t2338;
  p_output1[78]=-0.1422*t2529 - 0.2083*t2543 - 0.02*(t2543*t771 + t2529*t854) - 0.16*(t2543*t854 + t2529*t904);
  p_output1[79]=-0.1422*t2601 - 0.2083*t2616 - 0.02*(t2616*t771 + t2601*t854) - 0.16*(t2616*t854 + t2601*t904);
  p_output1[80]=-0.1422*t2638 - 0.2083*t2648 - 0.16*t2665 - 0.02*t2674;
  p_output1[81]=t1372*t1397*t2665 + t1397*t1429*t2674;
  p_output1[82]=0.5*t1451*t1501*t1538*(2.*t1382*t2665 + 2.*t1372*t2674);
  p_output1[83]=0;
  p_output1[84]=-0.02*(-1.*t2710*t761 - 1.*t2700*t815) - 0.16*(-1.*t2700*t761 + t2710*t815);
  p_output1[85]=-0.02*(-1.*t2748*t761 - 1.*t2742*t815) - 0.16*(-1.*t2742*t761 + t2748*t815);
  p_output1[86]=-0.16*t2770 - 0.02*t2778;
  p_output1[87]=t1372*t1397*t2770 + t1397*t1429*t2778;
  p_output1[88]=0.5*t1451*t1501*t1538*(2.*t1382*t2770 + 2.*t1372*t2778);
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

#include "Sj_2_func.hh"

namespace SymFunction
{

void Sj_2_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
