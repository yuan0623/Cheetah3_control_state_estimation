/*
 * Automatically Generated from Mathematica.
 * Sun 26 May 2019 16:50:09 GMT-04:00
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
  double t37;
  double t27;
  double t34;
  double t30;
  double t41;
  double t35;
  double t49;
  double t51;
  double t56;
  double t60;
  double t61;
  double t73;
  double t72;
  double t70;
  double t71;
  double t77;
  double t78;
  double t80;
  double t85;
  double t87;
  double t99;
  double t100;
  double t90;
  double t54;
  double t111;
  double t113;
  double t114;
  double t119;
  double t121;
  double t126;
  double t106;
  double t130;
  double t132;
  double t134;
  double t137;
  double t138;
  double t141;
  double t93;
  double t96;
  double t161;
  double t175;
  double t176;
  double t177;
  double t180;
  double t181;
  double t182;
  double t204;
  double t203;
  double t201;
  double t202;
  double t206;
  double t207;
  double t211;
  double t212;
  double t213;
  double t220;
  double t221;
  double t216;
  double t198;
  double t228;
  double t240;
  double t241;
  double t242;
  double t244;
  double t246;
  double t247;
  double t217;
  double t218;
  double t260;
  double t261;
  double t262;
  double t266;
  double t267;
  double t268;
  double t288;
  double t292;
  double t294;
  double t295;
  double t298;
  double t287;
  double t299;
  double t300;
  double t302;
  double t303;
  double t304;
  double t283;
  double t328;
  double t329;
  double t330;
  double t327;
  double t331;
  double t332;
  double t334;
  double t335;
  double t336;
  double t357;
  double t358;
  double t359;
  double t356;
  double t360;
  double t361;
  double t363;
  double t364;
  double t365;
  double t390;
  double t391;
  double t393;
  double t394;
  double t389;
  double t395;
  double t396;
  double t398;
  double t399;
  double t402;
  double t385;
  double t421;
  double t422;
  double t426;
  double t420;
  double t427;
  double t428;
  double t431;
  double t432;
  double t433;
  double t452;
  double t453;
  double t454;
  double t451;
  double t456;
  double t458;
  double t460;
  double t461;
  double t463;
  double t475;
  double t476;
  double t477;
  double t486;
  double t487;
  double t489;
  double t485;
  double t490;
  double t491;
  double t493;
  double t494;
  double t495;
  double t510;
  double t511;
  double t512;
  double t517;
  double t518;
  double t520;
  double t516;
  double t521;
  double t522;
  double t524;
  double t527;
  double t528;
  double t549;
  double t550;
  double t551;
  double t548;
  double t552;
  double t553;
  double t555;
  double t560;
  double t561;
  double t585;
  double t586;
  double t587;
  double t583;
  double t588;
  double t589;
  double t591;
  double t592;
  double t593;
  double t613;
  double t614;
  double t615;
  double t630;
  double t632;
  double t633;
  double t638;
  double t639;
  double t640;
  double t654;
  double t655;
  double t656;
  double t676;
  double t681;
  double t677;
  double t682;
  double t683;
  double t685;
  double t686;
  double t687;
  double t634;
  double t700;
  double t702;
  double t703;
  double t701;
  double t704;
  double t705;
  double t707;
  double t708;
  double t709;
  double t659;
  double t724;
  double t725;
  double t727;
  double t729;
  double t726;
  double t732;
  double t733;
  double t736;
  double t737;
  double t738;
  double t753;
  double t755;
  double t756;
  double t758;
  double t767;
  double t769;
  double t771;
  double t773;
  double t784;
  double t785;
  double t786;
  double t788;
  double t576;
  double t803;
  double t804;
  double t820;
  double t821;
  double t822;
  double t834;
  double t835;
  double t836;
  double t853;
  double t852;
  double t854;
  double t855;
  double t857;
  double t858;
  double t859;
  double t871;
  double t872;
  double t873;
  double t870;
  double t874;
  double t875;
  double t877;
  double t878;
  double t879;
  double t891;
  double t892;
  double t893;
  double t890;
  double t894;
  double t895;
  double t897;
  double t898;
  double t899;
  double t910;
  double t911;
  double t912;
  double t914;
  double t923;
  double t924;
  double t925;
  double t927;
  double t936;
  double t937;
  double t938;
  double t940;
  t37 = Cos(var1[3]);
  t27 = Cos(var1[5]);
  t34 = Sin(var1[4]);
  t30 = Sin(var1[3]);
  t41 = Sin(var1[5]);
  t35 = -1.*t27*t30*t34;
  t49 = t37*t41;
  t51 = t35 + t49;
  t56 = t37*t27*t34;
  t60 = t30*t41;
  t61 = t56 + t60;
  t73 = Cos(var1[10]);
  t72 = Cos(var1[9]);
  t70 = Sin(var1[10]);
  t71 = t70*t51;
  t77 = t72*t73*t61;
  t78 = t71 + t77;
  t80 = t73*t51;
  t85 = -1.*t72*t70*t61;
  t87 = t80 + t85;
  t99 = Cos(var1[11]);
  t100 = 0. + t99;
  t90 = Sin(var1[11]);
  t54 = Sin(var1[9]);
  t111 = -1.*t27*t30;
  t113 = t37*t34*t41;
  t114 = t111 + t113;
  t119 = -1.*t37*t27;
  t121 = -1.*t30*t34*t41;
  t126 = t119 + t121;
  t106 = 0. + t90;
  t130 = -1.*t72*t70*t114;
  t132 = t73*t126;
  t134 = t130 + t132;
  t137 = t72*t73*t114;
  t138 = t70*t126;
  t141 = t137 + t138;
  t93 = -1.*t90;
  t96 = 0. + t93;
  t161 = Cos(var1[4]);
  t175 = -1.*t72*t37*t161*t70;
  t176 = -1.*t73*t161*t30;
  t177 = t175 + t176;
  t180 = t72*t73*t37*t161;
  t181 = -1.*t161*t70*t30;
  t182 = t180 + t181;
  t204 = Cos(var1[13]);
  t203 = Cos(var1[12]);
  t201 = Sin(var1[13]);
  t202 = t201*t51;
  t206 = t203*t204*t61;
  t207 = t202 + t206;
  t211 = t204*t51;
  t212 = -1.*t203*t201*t61;
  t213 = t211 + t212;
  t220 = Cos(var1[14]);
  t221 = 0. + t220;
  t216 = Sin(var1[14]);
  t198 = Sin(var1[12]);
  t228 = 0. + t216;
  t240 = -1.*t203*t201*t114;
  t241 = t204*t126;
  t242 = t240 + t241;
  t244 = t203*t204*t114;
  t246 = t201*t126;
  t247 = t244 + t246;
  t217 = -1.*t216;
  t218 = 0. + t217;
  t260 = -1.*t203*t37*t161*t201;
  t261 = -1.*t204*t161*t30;
  t262 = t260 + t261;
  t266 = t203*t204*t37*t161;
  t267 = -1.*t161*t201*t30;
  t268 = t266 + t267;
  t288 = t72*t161*t27*t30;
  t292 = -1.*t54;
  t294 = 0. + t292;
  t295 = -1.*t27*t294*t34;
  t298 = t288 + t295;
  t287 = t37*t161*t27*t70;
  t299 = t73*t298;
  t300 = t287 + t299;
  t302 = t73*t37*t161*t27;
  t303 = -1.*t70*t298;
  t304 = t302 + t303;
  t283 = 0. + t72;
  t328 = t72*t161*t30*t41;
  t329 = -1.*t294*t34*t41;
  t330 = t328 + t329;
  t327 = t37*t161*t70*t41;
  t331 = t73*t330;
  t332 = t327 + t331;
  t334 = t73*t37*t161*t41;
  t335 = -1.*t70*t330;
  t336 = t334 + t335;
  t357 = -1.*t161*t294;
  t358 = -1.*t72*t30*t34;
  t359 = t357 + t358;
  t356 = -1.*t37*t70*t34;
  t360 = t73*t359;
  t361 = t356 + t360;
  t363 = -1.*t73*t37*t34;
  t364 = -1.*t70*t359;
  t365 = t363 + t364;
  t390 = t203*t161*t27*t30;
  t391 = 0. + t198;
  t393 = -1.*t27*t391*t34;
  t394 = t390 + t393;
  t389 = t37*t161*t27*t201;
  t395 = t204*t394;
  t396 = t389 + t395;
  t398 = t204*t37*t161*t27;
  t399 = -1.*t201*t394;
  t402 = t398 + t399;
  t385 = 0. + t203;
  t421 = t203*t161*t30*t41;
  t422 = -1.*t391*t34*t41;
  t426 = t421 + t422;
  t420 = t37*t161*t201*t41;
  t427 = t204*t426;
  t428 = t420 + t427;
  t431 = t204*t37*t161*t41;
  t432 = -1.*t201*t426;
  t433 = t431 + t432;
  t452 = -1.*t161*t391;
  t453 = -1.*t203*t30*t34;
  t454 = t452 + t453;
  t451 = -1.*t37*t201*t34;
  t456 = t204*t454;
  t458 = t451 + t456;
  t460 = -1.*t204*t37*t34;
  t461 = -1.*t201*t454;
  t463 = t460 + t461;
  t475 = t27*t30;
  t476 = -1.*t37*t34*t41;
  t477 = t475 + t476;
  t486 = -1.*t161*t294*t41;
  t487 = t72*t126;
  t489 = t486 + t487;
  t485 = t70*t477;
  t490 = t73*t489;
  t491 = t485 + t490;
  t493 = t73*t477;
  t494 = -1.*t70*t489;
  t495 = t493 + t494;
  t510 = t27*t30*t34;
  t511 = -1.*t37*t41;
  t512 = t510 + t511;
  t517 = t161*t27*t294;
  t518 = t72*t512;
  t520 = t517 + t518;
  t516 = t70*t61;
  t521 = t73*t520;
  t522 = t516 + t521;
  t524 = t73*t61;
  t527 = -1.*t70*t520;
  t528 = t524 + t527;
  t549 = -1.*t161*t391*t41;
  t550 = t203*t126;
  t551 = t549 + t550;
  t548 = t201*t477;
  t552 = t204*t551;
  t553 = t548 + t552;
  t555 = t204*t477;
  t560 = -1.*t201*t551;
  t561 = t555 + t560;
  t585 = t161*t27*t391;
  t586 = t203*t512;
  t587 = t585 + t586;
  t583 = t201*t61;
  t588 = t204*t587;
  t589 = t583 + t588;
  t591 = t204*t61;
  t592 = -1.*t201*t587;
  t593 = t591 + t592;
  t613 = -1.*t72*t161*t27;
  t614 = -1.*t54*t512;
  t615 = t613 + t614;
  t630 = t37*t27;
  t632 = t30*t34*t41;
  t633 = t630 + t632;
  t638 = -1.*t72*t161*t41;
  t639 = -1.*t54*t633;
  t640 = t638 + t639;
  t654 = -1.*t161*t54*t30;
  t655 = t72*t34;
  t656 = t654 + t655;
  t676 = 0. + t56 + t60;
  t681 = 0. + t517 + t518;
  t677 = -1.*t70*t676;
  t682 = -1.*t73*t681;
  t683 = t677 + t682;
  t685 = t73*t676;
  t686 = -1.*t70*t681;
  t687 = t685 + t686;
  t634 = t72*t633;
  t700 = 0. + t111 + t113;
  t702 = t161*t294*t41;
  t703 = 0. + t702 + t634;
  t701 = -1.*t70*t700;
  t704 = -1.*t73*t703;
  t705 = t701 + t704;
  t707 = t73*t700;
  t708 = -1.*t70*t703;
  t709 = t707 + t708;
  t659 = t72*t161*t30;
  t724 = t37*t161;
  t725 = 0. + t724;
  t727 = -1.*t294*t34;
  t729 = 0. + t659 + t727;
  t726 = -1.*t725*t70;
  t732 = -1.*t73*t729;
  t733 = t726 + t732;
  t736 = t73*t725;
  t737 = -1.*t70*t729;
  t738 = t736 + t737;
  t753 = t70*t676;
  t755 = t73*t681;
  t756 = 0. + t753 + t755;
  t758 = 0. + t685 + t686;
  t767 = t70*t700;
  t769 = t73*t703;
  t771 = 0. + t767 + t769;
  t773 = 0. + t707 + t708;
  t784 = t725*t70;
  t785 = t73*t729;
  t786 = 0. + t784 + t785;
  t788 = 0. + t736 + t737;
  t576 = -1.*t198*t512;
  t803 = t203*t161*t27;
  t804 = t803 + t576;
  t820 = t203*t161*t41;
  t821 = -1.*t198*t633;
  t822 = t820 + t821;
  t834 = -1.*t161*t198*t30;
  t835 = -1.*t203*t34;
  t836 = t834 + t835;
  t853 = 0. + t585 + t586;
  t852 = -1.*t201*t676;
  t854 = -1.*t204*t853;
  t855 = t852 + t854;
  t857 = t204*t676;
  t858 = -1.*t201*t853;
  t859 = t857 + t858;
  t871 = t161*t391*t41;
  t872 = t203*t633;
  t873 = 0. + t871 + t872;
  t870 = -1.*t201*t700;
  t874 = -1.*t204*t873;
  t875 = t870 + t874;
  t877 = t204*t700;
  t878 = -1.*t201*t873;
  t879 = t877 + t878;
  t891 = t203*t161*t30;
  t892 = -1.*t391*t34;
  t893 = 0. + t891 + t892;
  t890 = -1.*t725*t201;
  t894 = -1.*t204*t893;
  t895 = t890 + t894;
  t897 = t204*t725;
  t898 = -1.*t201*t893;
  t899 = t897 + t898;
  t910 = t201*t676;
  t911 = t204*t853;
  t912 = 0. + t910 + t911;
  t914 = 0. + t857 + t858;
  t923 = t201*t700;
  t924 = t204*t873;
  t925 = 0. + t923 + t924;
  t927 = 0. + t877 + t878;
  t936 = t725*t201;
  t937 = t204*t893;
  t938 = 0. + t936 + t937;
  t940 = 0. + t897 + t898;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=1.;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=1.;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=1.;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=1.;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=1.;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=1.;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=1.;
  p_output1[37]=0;
  p_output1[38]=0.2429*t51 + 0.035199999999999995*t54*t61 - 0.2083*t78 - 0.1422*t87 - 0.16*(t100*t78 + t106*t87) - 0.02*(t100*t87 + t78*t96);
  p_output1[39]=0.2429*t126 - 0.1422*t134 - 0.2083*t141 - 0.16*(t106*t134 + t100*t141) + 0.035199999999999995*t114*t54 - 0.02*(t100*t134 + t141*t96);
  p_output1[40]=-0.1422*t177 - 0.2083*t182 - 0.16*(t106*t177 + t100*t182) - 0.2429*t161*t30 + 0.035199999999999995*t161*t37*t54 - 0.02*(t100*t177 + t182*t96);
  p_output1[41]=-0.2083*t207 - 0.1422*t213 - 0.02*(t207*t218 + t213*t221) - 0.16*(t207*t221 + t213*t228) - 0.1944*t51 + 0.0329*t198*t61;
  p_output1[42]=-0.1944*t126 + 0.0329*t114*t198 - 0.1422*t242 - 0.2083*t247 - 0.02*(t221*t242 + t218*t247) - 0.16*(t228*t242 + t221*t247);
  p_output1[43]=-0.1422*t262 - 0.2083*t268 - 0.02*(t221*t262 + t218*t268) - 0.16*(t228*t262 + t221*t268) + 0.1944*t161*t30 + 0.0329*t161*t198*t37;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=1.;
  p_output1[49]=-0.2083*t300 - 0.1422*t304 - 0.16*(t100*t300 + t106*t304) - 0.0817*t27*t34 + 0.2429*t161*t27*t37 + 0.035199999999999995*(-1.*t27*t283*t34 + t161*t27*t30*t54) - 0.02*(t100*t304 + t300*t96);
  p_output1[50]=-0.2083*t332 - 0.1422*t336 - 0.16*(t100*t332 + t106*t336) - 0.0817*t34*t41 + 0.2429*t161*t37*t41 + 0.035199999999999995*(-1.*t283*t34*t41 + t161*t30*t41*t54) - 0.02*(t100*t336 + t332*t96);
  p_output1[51]=-0.0817*t161 - 0.2083*t361 - 0.1422*t365 - 0.16*(t100*t361 + t106*t365) - 0.2429*t34*t37 + 0.035199999999999995*(-1.*t161*t283 - 1.*t30*t34*t54) - 0.02*(t100*t365 + t361*t96);
  p_output1[52]=0.0817*t27*t34 - 0.1944*t161*t27*t37 - 0.0329*(-1.*t161*t198*t27*t30 - 1.*t27*t34*t385) - 0.2083*t396 - 0.1422*t402 - 0.02*(t218*t396 + t221*t402) - 0.16*(t221*t396 + t228*t402);
  p_output1[53]=0.0817*t34*t41 - 0.1944*t161*t37*t41 - 0.0329*(-1.*t161*t198*t30*t41 - 1.*t34*t385*t41) - 0.2083*t428 - 0.1422*t433 - 0.02*(t218*t428 + t221*t433) - 0.16*(t221*t428 + t228*t433);
  p_output1[54]=0.0817*t161 + 0.1944*t34*t37 - 0.0329*(t198*t30*t34 - 1.*t161*t385) - 0.2083*t458 - 0.1422*t463 - 0.02*(t218*t458 + t221*t463) - 0.16*(t221*t458 + t228*t463);
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=-0.0817*t161*t41 + 0.2429*t477 - 0.2083*t491 - 0.1422*t495 - 0.16*(t100*t491 + t106*t495) + 0.035199999999999995*(-1.*t161*t283*t41 + t126*t54) - 0.02*(t100*t495 + t491*t96);
  p_output1[61]=0.0817*t161*t27 - 0.2083*t522 - 0.1422*t528 - 0.16*(t100*t522 + t106*t528) + 0.035199999999999995*(t161*t27*t283 + t512*t54) + 0.2429*t61 - 0.02*(t100*t528 + t522*t96);
  p_output1[62]=0;
  p_output1[63]=0.0817*t161*t41 - 0.0329*(-1.*t126*t198 - 1.*t161*t385*t41) - 0.1944*t477 - 0.2083*t553 - 0.1422*t561 - 0.02*(t218*t553 + t221*t561) - 0.16*(t221*t553 + t228*t561);
  p_output1[64]=-0.0817*t161*t27 - 0.0329*(t161*t27*t385 + t576) - 0.2083*t589 - 0.1422*t593 - 0.02*(t218*t589 + t221*t593) - 0.16*(t221*t589 + t228*t593) - 0.1944*t61;
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
  p_output1[104]=0.035199999999999995*(t518 - 1.*t161*t27*t54) + 0.1422*t615*t70 - 0.2083*t615*t73 - 0.16*(-1.*t106*t615*t70 + t100*t615*t73) - 0.02*(-1.*t100*t615*t70 + t615*t73*t96);
  p_output1[105]=0.035199999999999995*(-1.*t161*t41*t54 + t634) + 0.1422*t640*t70 - 0.2083*t640*t73 - 0.16*(-1.*t106*t640*t70 + t100*t640*t73) - 0.02*(-1.*t100*t640*t70 + t640*t73*t96);
  p_output1[106]=0.035199999999999995*(t34*t54 + t659) + 0.1422*t656*t70 - 0.2083*t656*t73 - 0.16*(-1.*t106*t656*t70 + t100*t656*t73) - 0.02*(-1.*t100*t656*t70 + t656*t73*t96);
  p_output1[107]=0;
  p_output1[108]=0;
  p_output1[109]=0;
  p_output1[110]=0;
  p_output1[111]=0;
  p_output1[112]=0;
  p_output1[113]=0;
  p_output1[114]=0;
  p_output1[115]=-0.1422*t683 - 0.2083*t687 - 0.16*(t106*t683 + t100*t687) - 0.02*(t100*t683 + t687*t96);
  p_output1[116]=-0.1422*t705 - 0.2083*t709 - 0.16*(t106*t705 + t100*t709) - 0.02*(t100*t705 + t709*t96);
  p_output1[117]=-0.1422*t733 - 0.2083*t738 - 0.16*(t106*t733 + t100*t738) - 0.02*(t100*t733 + t738*t96);
  p_output1[118]=0;
  p_output1[119]=0;
  p_output1[120]=0;
  p_output1[121]=0;
  p_output1[122]=0;
  p_output1[123]=0;
  p_output1[124]=0;
  p_output1[125]=0;
  p_output1[126]=-0.02*(-1.*t758*t90 - 1.*t756*t99) - 0.16*(-1.*t756*t90 + t758*t99);
  p_output1[127]=-0.02*(-1.*t773*t90 - 1.*t771*t99) - 0.16*(-1.*t771*t90 + t773*t99);
  p_output1[128]=-0.02*(-1.*t788*t90 - 1.*t786*t99) - 0.16*(-1.*t786*t90 + t788*t99);
  p_output1[129]=0;
  p_output1[130]=0;
  p_output1[131]=0;
  p_output1[132]=0;
  p_output1[133]=0;
  p_output1[134]=0;
  p_output1[135]=0;
  p_output1[136]=0;
  p_output1[137]=0;
  p_output1[138]=0;
  p_output1[139]=0;
  p_output1[140]=-0.0329*(-1.*t161*t198*t27 - 1.*t203*t512) + 0.1422*t201*t804 - 0.2083*t204*t804 - 0.02*(t204*t218*t804 - 1.*t201*t221*t804) - 0.16*(t204*t221*t804 - 1.*t201*t228*t804);
  p_output1[141]=-0.0329*(-1.*t161*t198*t41 - 1.*t203*t633) + 0.1422*t201*t822 - 0.2083*t204*t822 - 0.02*(t204*t218*t822 - 1.*t201*t221*t822) - 0.16*(t204*t221*t822 - 1.*t201*t228*t822);
  p_output1[142]=-0.0329*(-1.*t161*t203*t30 + t198*t34) + 0.1422*t201*t836 - 0.2083*t204*t836 - 0.02*(t204*t218*t836 - 1.*t201*t221*t836) - 0.16*(t204*t221*t836 - 1.*t201*t228*t836);
  p_output1[143]=0;
  p_output1[144]=0;
  p_output1[145]=0;
  p_output1[146]=0;
  p_output1[147]=0;
  p_output1[148]=0;
  p_output1[149]=0;
  p_output1[150]=0;
  p_output1[151]=-0.1422*t855 - 0.2083*t859 - 0.02*(t221*t855 + t218*t859) - 0.16*(t228*t855 + t221*t859);
  p_output1[152]=-0.1422*t875 - 0.2083*t879 - 0.02*(t221*t875 + t218*t879) - 0.16*(t228*t875 + t221*t879);
  p_output1[153]=-0.1422*t895 - 0.2083*t899 - 0.02*(t221*t895 + t218*t899) - 0.16*(t228*t895 + t221*t899);
  p_output1[154]=0;
  p_output1[155]=0;
  p_output1[156]=0;
  p_output1[157]=0;
  p_output1[158]=0;
  p_output1[159]=0;
  p_output1[160]=0;
  p_output1[161]=0;
  p_output1[162]=-0.02*(-1.*t220*t912 - 1.*t216*t914) - 0.16*(-1.*t216*t912 + t220*t914);
  p_output1[163]=-0.02*(-1.*t220*t925 - 1.*t216*t927) - 0.16*(-1.*t216*t925 + t220*t927);
  p_output1[164]=-0.02*(-1.*t220*t938 - 1.*t216*t940) - 0.16*(-1.*t216*t938 + t220*t940);
  p_output1[165]=0;
  p_output1[166]=0;
  p_output1[167]=0;
  p_output1[168]=0;
  p_output1[169]=0;
  p_output1[170]=0;
  p_output1[171]=0;
  p_output1[172]=0;
  p_output1[173]=0;
  p_output1[174]=0;
  p_output1[175]=0;
  p_output1[176]=0;
  p_output1[177]=0;
  p_output1[178]=0;
  p_output1[179]=0;
  p_output1[180]=0;
  p_output1[181]=0;
  p_output1[182]=0;
  p_output1[183]=0;
  p_output1[184]=0;
  p_output1[185]=0;
  p_output1[186]=0;
  p_output1[187]=0;
  p_output1[188]=0;
  p_output1[189]=0;
  p_output1[190]=0;
  p_output1[191]=0;
  p_output1[192]=0;
  p_output1[193]=0;
  p_output1[194]=0;
  p_output1[195]=0;
  p_output1[196]=0;
  p_output1[197]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 11, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "j_hc_reduced_2_func.hh"

namespace SymFunction
{

void j_hc_reduced_2_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
