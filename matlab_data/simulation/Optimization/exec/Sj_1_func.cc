/*
 * Automatically Generated from Mathematica.
 * Mon 29 Jul 2019 15:08:28 GMT-04:00
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
  double t467;
  double t65;
  double t71;
  double t70;
  double t528;
  double t438;
  double t534;
  double t559;
  double t598;
  double t603;
  double t604;
  double t704;
  double t675;
  double t642;
  double t658;
  double t747;
  double t749;
  double t761;
  double t768;
  double t770;
  double t880;
  double t883;
  double t795;
  double t583;
  double t942;
  double t953;
  double t974;
  double t978;
  double t980;
  double t982;
  double t901;
  double t1000;
  double t1005;
  double t1008;
  double t1027;
  double t1042;
  double t1043;
  double t808;
  double t837;
  double t1161;
  double t1172;
  double t1183;
  double t1184;
  double t1191;
  double t1193;
  double t1196;
  double t1203;
  double t1204;
  double t1209;
  double t1245;
  double t1254;
  double t1261;
  double t1262;
  double t1265;
  double t1266;
  double t1277;
  double t1255;
  double t1279;
  double t1281;
  double t1287;
  double t1288;
  double t1293;
  double t1294;
  double t1296;
  double t1297;
  double t1222;
  double t1224;
  double t1232;
  double t1306;
  double t1307;
  double t1309;
  double t1311;
  double t1312;
  double t1321;
  double t1326;
  double t1360;
  double t1378;
  double t1381;
  double t1382;
  double t1389;
  double t1390;
  double t1393;
  double t1414;
  double t1429;
  double t1430;
  double t1431;
  double t1436;
  double t1439;
  double t1443;
  double t1451;
  double t1468;
  double t1440;
  double t1442;
  double t1480;
  double t1482;
  double t1500;
  double t1501;
  double t1503;
  double t1561;
  double t1568;
  double t1569;
  double t1558;
  double t1579;
  double t1582;
  double t1588;
  double t1591;
  double t1593;
  double t1662;
  double t1664;
  double t1671;
  double t1659;
  double t1672;
  double t1673;
  double t1686;
  double t1687;
  double t1689;
  double t1738;
  double t1739;
  double t1742;
  double t1736;
  double t1745;
  double t1747;
  double t1757;
  double t1764;
  double t1765;
  double t1345;
  double t1347;
  double t1352;
  double t1773;
  double t1782;
  double t1788;
  double t1791;
  double t1793;
  double t1796;
  double t1403;
  double t1358;
  double t1363;
  double t1366;
  double t1377;
  double t1644;
  double t1646;
  double t1653;
  double t1542;
  double t1545;
  double t1548;
  double t1513;
  double t1517;
  double t1528;
  double t1853;
  double t1860;
  double t1863;
  double t1886;
  double t1889;
  double t1890;
  double t1882;
  double t1895;
  double t1896;
  double t1902;
  double t1904;
  double t1911;
  double t1960;
  double t1968;
  double t1976;
  double t1953;
  double t1979;
  double t2009;
  double t2012;
  double t2015;
  double t2019;
  double t1950;
  double t1869;
  double t1870;
  double t2081;
  double t2082;
  double t2090;
  double t2138;
  double t2139;
  double t2201;
  double t2202;
  double t2223;
  double t2225;
  double t2228;
  double t2215;
  double t2218;
  double t2219;
  double t2123;
  double t2130;
  double t2133;
  double t2077;
  double t2078;
  double t2297;
  double t2303;
  double t2302;
  double t2306;
  double t2310;
  double t2315;
  double t2322;
  double t2323;
  double t2345;
  double t2347;
  double t2348;
  double t2346;
  double t2351;
  double t2352;
  double t2371;
  double t2375;
  double t2380;
  double t2404;
  double t2406;
  double t2412;
  double t2416;
  double t2427;
  double t2428;
  double t2447;
  double t2452;
  double t2458;
  double t2461;
  double t2489;
  double t2491;
  double t2492;
  double t2498;
  double t2523;
  double t2524;
  double t2528;
  double t2536;
  double t2558;
  double t2563;
  double t2564;
  double t2571;
  double t2576;
  double t2578;
  t467 = Cos(var1[3]);
  t65 = Cos(var1[5]);
  t71 = Sin(var1[4]);
  t70 = Sin(var1[3]);
  t528 = Sin(var1[5]);
  t438 = -1.*t65*t70*t71;
  t534 = t467*t528;
  t559 = t438 + t534;
  t598 = t467*t65*t71;
  t603 = t70*t528;
  t604 = t598 + t603;
  t704 = Cos(var1[10]);
  t675 = Cos(var1[9]);
  t642 = Sin(var1[10]);
  t658 = t642*t559;
  t747 = t675*t704*t604;
  t749 = t658 + t747;
  t761 = t704*t559;
  t768 = -1.*t675*t642*t604;
  t770 = t761 + t768;
  t880 = Cos(var1[11]);
  t883 = 0. + t880;
  t795 = Sin(var1[11]);
  t583 = Sin(var1[9]);
  t942 = -1.*t65*t70;
  t953 = t467*t71*t528;
  t974 = t942 + t953;
  t978 = -1.*t467*t65;
  t980 = -1.*t70*t71*t528;
  t982 = t978 + t980;
  t901 = 0. + t795;
  t1000 = -1.*t675*t642*t974;
  t1005 = t704*t982;
  t1008 = t1000 + t1005;
  t1027 = t675*t704*t974;
  t1042 = t642*t982;
  t1043 = t1027 + t1042;
  t808 = -1.*t795;
  t837 = 0. + t808;
  t1161 = Cos(var1[4]);
  t1172 = -1.*t675*t467*t1161*t642;
  t1183 = -1.*t704*t1161*t70;
  t1184 = t1172 + t1183;
  t1191 = t675*t704*t467*t1161;
  t1193 = -1.*t1161*t642*t70;
  t1196 = t1191 + t1193;
  t1203 = t901*t1184;
  t1204 = t883*t1196;
  t1209 = t1203 + t1204;
  t1245 = t467*t1161;
  t1254 = 0. + t1245;
  t1261 = t675*t1161*t70;
  t1262 = -1.*t583;
  t1265 = 0. + t1262;
  t1266 = -1.*t1265*t71;
  t1277 = 0. + t1261 + t1266;
  t1255 = t1254*t642;
  t1279 = t704*t1277;
  t1281 = 0. + t1255 + t1279;
  t1287 = t837*t1281;
  t1288 = t704*t1254;
  t1293 = -1.*t642*t1277;
  t1294 = 0. + t1288 + t1293;
  t1296 = t883*t1294;
  t1297 = 0. + t1287 + t1296;
  t1222 = t883*t1184;
  t1224 = t837*t1196;
  t1232 = t1222 + t1224;
  t1306 = Power(t1297,2);
  t1307 = t883*t1281;
  t1309 = t901*t1294;
  t1311 = 0. + t1307 + t1309;
  t1312 = Power(t1311,2);
  t1321 = t1306 + t1312;
  t1326 = 1/t1321;
  t1360 = 0. + t675;
  t1378 = -1.*t1161*t583*t70;
  t1381 = t1360*t71;
  t1382 = 0. + t1378 + t1381;
  t1389 = Power(t1382,2);
  t1390 = t1389 + t1306 + t1312;
  t1393 = 1/t1390;
  t1414 = t1360*t1161*t65;
  t1429 = t65*t70*t71;
  t1430 = -1.*t467*t528;
  t1431 = t1429 + t1430;
  t1436 = t583*t1431;
  t1439 = 0. + t1414 + t1436;
  t1443 = t467*t65;
  t1451 = t70*t71*t528;
  t1468 = t1443 + t1451;
  t1440 = Power(t1439,2);
  t1442 = t1360*t1161*t528;
  t1480 = t583*t1468;
  t1482 = 0. + t1442 + t1480;
  t1500 = Power(t1482,2);
  t1501 = t1440 + t1500;
  t1503 = 1/t1501;
  t1561 = t675*t1161*t65*t70;
  t1568 = -1.*t65*t1265*t71;
  t1569 = t1561 + t1568;
  t1558 = t467*t1161*t65*t642;
  t1579 = t704*t1569;
  t1582 = t1558 + t1579;
  t1588 = t704*t467*t1161*t65;
  t1591 = -1.*t642*t1569;
  t1593 = t1588 + t1591;
  t1662 = t675*t1161*t70*t528;
  t1664 = -1.*t1265*t71*t528;
  t1671 = t1662 + t1664;
  t1659 = t467*t1161*t642*t528;
  t1672 = t704*t1671;
  t1673 = t1659 + t1672;
  t1686 = t704*t467*t1161*t528;
  t1687 = -1.*t642*t1671;
  t1689 = t1686 + t1687;
  t1738 = -1.*t1161*t1265;
  t1739 = -1.*t675*t70*t71;
  t1742 = t1738 + t1739;
  t1736 = -1.*t467*t642*t71;
  t1745 = t704*t1742;
  t1747 = t1736 + t1745;
  t1757 = -1.*t704*t467*t71;
  t1764 = -1.*t642*t1742;
  t1765 = t1757 + t1764;
  t1345 = -1.*t883*t1281;
  t1347 = -1.*t901*t1294;
  t1352 = 0. + t1345 + t1347;
  t1773 = t837*t1747;
  t1782 = t883*t1765;
  t1788 = t1773 + t1782;
  t1791 = t883*t1747;
  t1793 = t901*t1765;
  t1796 = t1791 + t1793;
  t1403 = Sqrt(t1321);
  t1358 = t1161*t583*t70;
  t1363 = -1.*t1360*t71;
  t1366 = 0. + t1358 + t1363;
  t1377 = 1/Sqrt(t1321);
  t1644 = t1161*t583*t70*t528;
  t1646 = -1.*t1360*t71*t528;
  t1653 = t1644 + t1646;
  t1542 = t1161*t65*t583*t70;
  t1545 = -1.*t1360*t65*t71;
  t1548 = t1542 + t1545;
  t1513 = -1.*t1360*t1161*t528;
  t1517 = -1.*t583*t1468;
  t1528 = 0. + t1513 + t1517;
  t1853 = t65*t70;
  t1860 = -1.*t467*t71*t528;
  t1863 = t1853 + t1860;
  t1886 = -1.*t1161*t1265*t528;
  t1889 = t675*t982;
  t1890 = t1886 + t1889;
  t1882 = t642*t1863;
  t1895 = t704*t1890;
  t1896 = t1882 + t1895;
  t1902 = t704*t1863;
  t1904 = -1.*t642*t1890;
  t1911 = t1902 + t1904;
  t1960 = t1161*t65*t1265;
  t1968 = t675*t1431;
  t1976 = t1960 + t1968;
  t1953 = t642*t604;
  t1979 = t704*t1976;
  t2009 = t1953 + t1979;
  t2012 = t704*t604;
  t2015 = -1.*t642*t1976;
  t2019 = t2012 + t2015;
  t1950 = t1414 + t1436;
  t1869 = t583*t982;
  t1870 = t1513 + t1869;
  t2081 = -1.*t675*t1161*t65;
  t2082 = -1.*t583*t1431;
  t2090 = t2081 + t2082;
  t2138 = -1.*t675*t1161*t528;
  t2139 = t2138 + t1517;
  t2201 = t675*t71;
  t2202 = t1378 + t2201;
  t2223 = t704*t883*t2202;
  t2225 = -1.*t642*t901*t2202;
  t2228 = t2223 + t2225;
  t2215 = -1.*t883*t642*t2202;
  t2218 = t704*t837*t2202;
  t2219 = t2215 + t2218;
  t2123 = -1.*t1161*t583*t528;
  t2130 = t675*t1468;
  t2133 = t2123 + t2130;
  t2077 = -1.*t1161*t65*t583;
  t2078 = t2077 + t1968;
  t2297 = 0. + t598 + t603;
  t2303 = 0. + t1960 + t1968;
  t2302 = -1.*t642*t2297;
  t2306 = -1.*t704*t2303;
  t2310 = t2302 + t2306;
  t2315 = t704*t2297;
  t2322 = -1.*t642*t2303;
  t2323 = t2315 + t2322;
  t2345 = 0. + t942 + t953;
  t2347 = t1161*t1265*t528;
  t2348 = 0. + t2347 + t2130;
  t2346 = -1.*t642*t2345;
  t2351 = -1.*t704*t2348;
  t2352 = t2346 + t2351;
  t2371 = t704*t2345;
  t2375 = -1.*t642*t2348;
  t2380 = t2371 + t2375;
  t2404 = -1.*t1254*t642;
  t2406 = -1.*t704*t1277;
  t2412 = t2404 + t2406;
  t2416 = t1288 + t1293;
  t2427 = t901*t2412;
  t2428 = t883*t2416;
  t2447 = t2427 + t2428;
  t2452 = t883*t2412;
  t2458 = t837*t2416;
  t2461 = t2452 + t2458;
  t2489 = t642*t2297;
  t2491 = t704*t2303;
  t2492 = 0. + t2489 + t2491;
  t2498 = 0. + t2315 + t2322;
  t2523 = t642*t2345;
  t2524 = t704*t2348;
  t2528 = 0. + t2523 + t2524;
  t2536 = 0. + t2371 + t2375;
  t2558 = -1.*t795*t1281;
  t2563 = t880*t1294;
  t2564 = t2558 + t2563;
  t2571 = -1.*t880*t1281;
  t2576 = -1.*t795*t1294;
  t2578 = t2571 + t2576;
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
  p_output1[18]=0.2429*t559 + 0.035199999999999995*t583*t604 - 0.2083*t749 - 0.1422*t770 - 0.02*(t749*t837 + t770*t883) - 0.16*(t749*t883 + t770*t901);
  p_output1[19]=-0.1422*t1008 - 0.2083*t1043 - 0.02*(t1043*t837 + t1008*t883) - 0.16*(t1043*t883 + t1008*t901) + 0.035199999999999995*t583*t974 + 0.2429*t982;
  p_output1[20]=-0.1422*t1184 - 0.2083*t1196 - 0.16*t1209 - 0.02*t1232 + 0.035199999999999995*t1161*t467*t583 - 0.2429*t1161*t70;
  p_output1[21]=t1209*t1297*t1326 + t1232*t1326*t1352;
  p_output1[22]=0.5*(2.*t1232*t1297 + 2.*t1209*t1311)*t1366*t1377*t1393 - 1.*t1161*t1393*t1403*t467*t583;
  p_output1[23]=t1503*t1528*t583*t604 + t1439*t1503*t583*t974;
  p_output1[24]=0.035199999999999995*t1548 - 0.2083*t1582 - 0.1422*t1593 + 0.2429*t1161*t467*t65 - 0.0817*t65*t71 - 0.02*(t1582*t837 + t1593*t883) - 0.16*(t1582*t883 + t1593*t901);
  p_output1[25]=0.035199999999999995*t1653 - 0.2083*t1673 - 0.1422*t1689 + 0.2429*t1161*t467*t528 - 0.0817*t528*t71 - 0.02*(t1673*t837 + t1689*t883) - 0.16*(t1673*t883 + t1689*t901);
  p_output1[26]=-0.0817*t1161 - 0.2083*t1747 - 0.1422*t1765 - 0.02*t1788 - 0.16*t1796 - 0.2429*t467*t71 + 0.035199999999999995*(-1.*t1161*t1360 - 1.*t583*t70*t71);
  p_output1[27]=t1326*t1352*t1788 + t1297*t1326*t1796;
  p_output1[28]=0.5*t1366*t1377*t1393*(2.*t1297*t1788 + 2.*t1311*t1796) + t1393*t1403*(t1161*t1360 + t583*t70*t71);
  p_output1[29]=t1503*t1528*t1548 + t1439*t1503*t1653;
  p_output1[30]=0.2429*t1863 + 0.035199999999999995*t1870 - 0.2083*t1896 - 0.1422*t1911 - 0.0817*t1161*t528 - 0.02*(t1896*t837 + t1911*t883) - 0.16*(t1896*t883 + t1911*t901);
  p_output1[31]=0.035199999999999995*t1950 - 0.2083*t2009 - 0.1422*t2019 + 0.2429*t604 + 0.0817*t1161*t65 - 0.02*(t2009*t837 + t2019*t883) - 0.16*(t2009*t883 + t2019*t901);
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=t1503*t1528*t1870 + t1439*t1503*t1950;
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
  p_output1[54]=0.035199999999999995*t2078 + 0.1422*t2090*t642 - 0.2083*t2090*t704 - 0.02*(t2090*t704*t837 - 1.*t2090*t642*t883) - 0.16*(t2090*t704*t883 - 1.*t2090*t642*t901);
  p_output1[55]=0.035199999999999995*t2133 + 0.1422*t2139*t642 - 0.2083*t2139*t704 - 0.02*(t2139*t704*t837 - 1.*t2139*t642*t883) - 0.16*(t2139*t704*t883 - 1.*t2139*t642*t901);
  p_output1[56]=-0.02*t2219 - 0.16*t2228 + 0.1422*t2202*t642 - 0.2083*t2202*t704 + 0.035199999999999995*(t1261 + t583*t71);
  p_output1[57]=t1326*t1352*t2219 + t1297*t1326*t2228;
  p_output1[58]=0.5*t1366*t1377*t1393*(2.*t1297*t2219 + 2.*t1311*t2228) + t1393*t1403*(-1.*t1161*t675*t70 - 1.*t583*t71);
  p_output1[59]=t1503*t1528*t2078 + t1439*t1503*t2133;
  p_output1[60]=-0.1422*t2310 - 0.2083*t2323 - 0.02*(t2323*t837 + t2310*t883) - 0.16*(t2323*t883 + t2310*t901);
  p_output1[61]=-0.1422*t2352 - 0.2083*t2380 - 0.02*(t2380*t837 + t2352*t883) - 0.16*(t2380*t883 + t2352*t901);
  p_output1[62]=-0.1422*t2412 - 0.2083*t2416 - 0.16*t2447 - 0.02*t2461;
  p_output1[63]=t1297*t1326*t2447 + t1326*t1352*t2461;
  p_output1[64]=0.5*t1366*t1377*t1393*(2.*t1311*t2447 + 2.*t1297*t2461);
  p_output1[65]=0;
  p_output1[66]=-0.02*(-1.*t2498*t795 - 1.*t2492*t880) - 0.16*(-1.*t2492*t795 + t2498*t880);
  p_output1[67]=-0.02*(-1.*t2536*t795 - 1.*t2528*t880) - 0.16*(-1.*t2528*t795 + t2536*t880);
  p_output1[68]=-0.16*t2564 - 0.02*t2578;
  p_output1[69]=t1297*t1326*t2564 + t1326*t1352*t2578;
  p_output1[70]=0.5*t1366*t1377*t1393*(2.*t1311*t2564 + 2.*t1297*t2578);
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

#include "Sj_1_func.hh"

namespace SymFunction
{

void Sj_1_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
