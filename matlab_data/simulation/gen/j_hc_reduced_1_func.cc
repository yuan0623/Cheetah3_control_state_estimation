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
  double t23;
  double t11;
  double t21;
  double t14;
  double t24;
  double t35;
  double t37;
  double t39;
  double t22;
  double t27;
  double t30;
  double t47;
  double t46;
  double t50;
  double t56;
  double t59;
  double t60;
  double t49;
  double t51;
  double t52;
  double t63;
  double t64;
  double t66;
  double t40;
  double t81;
  double t82;
  double t84;
  double t86;
  double t87;
  double t88;
  double t90;
  double t92;
  double t93;
  double t97;
  double t99;
  double t100;
  double t67;
  double t69;
  double t74;
  double t112;
  double t115;
  double t116;
  double t117;
  double t121;
  double t122;
  double t126;
  double t150;
  double t149;
  double t147;
  double t148;
  double t152;
  double t154;
  double t156;
  double t158;
  double t159;
  double t169;
  double t171;
  double t162;
  double t145;
  double t178;
  double t185;
  double t186;
  double t187;
  double t191;
  double t192;
  double t193;
  double t165;
  double t166;
  double t209;
  double t210;
  double t211;
  double t213;
  double t214;
  double t215;
  double t236;
  double t237;
  double t238;
  double t239;
  double t244;
  double t245;
  double t246;
  double t240;
  double t241;
  double t242;
  double t230;
  double t263;
  double t264;
  double t265;
  double t270;
  double t271;
  double t272;
  double t266;
  double t267;
  double t268;
  double t289;
  double t290;
  double t291;
  double t296;
  double t297;
  double t298;
  double t292;
  double t293;
  double t294;
  double t317;
  double t318;
  double t319;
  double t320;
  double t321;
  double t316;
  double t322;
  double t323;
  double t325;
  double t326;
  double t327;
  double t312;
  double t345;
  double t346;
  double t347;
  double t344;
  double t348;
  double t349;
  double t351;
  double t352;
  double t353;
  double t371;
  double t372;
  double t373;
  double t370;
  double t374;
  double t375;
  double t377;
  double t378;
  double t379;
  double t391;
  double t392;
  double t393;
  double t399;
  double t400;
  double t401;
  double t406;
  double t407;
  double t408;
  double t402;
  double t403;
  double t404;
  double t422;
  double t423;
  double t424;
  double t428;
  double t429;
  double t430;
  double t435;
  double t436;
  double t437;
  double t431;
  double t432;
  double t433;
  double t455;
  double t456;
  double t457;
  double t454;
  double t458;
  double t459;
  double t461;
  double t462;
  double t463;
  double t481;
  double t482;
  double t483;
  double t480;
  double t484;
  double t485;
  double t487;
  double t488;
  double t489;
  double t425;
  double t504;
  double t505;
  double t517;
  double t518;
  double t519;
  double t524;
  double t525;
  double t526;
  double t538;
  double t539;
  double t540;
  double t558;
  double t556;
  double t557;
  double t559;
  double t560;
  double t562;
  double t563;
  double t564;
  double t579;
  double t575;
  double t576;
  double t577;
  double t578;
  double t580;
  double t581;
  double t583;
  double t584;
  double t585;
  double t600;
  double t601;
  double t596;
  double t597;
  double t598;
  double t599;
  double t602;
  double t603;
  double t605;
  double t606;
  double t607;
  double t620;
  double t621;
  double t622;
  double t618;
  double t633;
  double t634;
  double t635;
  double t631;
  double t646;
  double t647;
  double t648;
  double t644;
  double t660;
  double t661;
  double t662;
  double t678;
  double t679;
  double t680;
  double t692;
  double t693;
  double t694;
  double t711;
  double t710;
  double t712;
  double t713;
  double t715;
  double t716;
  double t717;
  double t675;
  double t729;
  double t730;
  double t728;
  double t731;
  double t732;
  double t734;
  double t735;
  double t736;
  double t697;
  double t748;
  double t749;
  double t747;
  double t750;
  double t751;
  double t753;
  double t754;
  double t755;
  double t766;
  double t767;
  double t768;
  double t770;
  double t779;
  double t780;
  double t781;
  double t783;
  double t792;
  double t793;
  double t794;
  double t796;
  t23 = Cos(var1[3]);
  t11 = Cos(var1[5]);
  t21 = Sin(var1[4]);
  t14 = Sin(var1[3]);
  t24 = Sin(var1[5]);
  t35 = t23*t11*t21;
  t37 = t14*t24;
  t39 = t35 + t37;
  t22 = -1.*t11*t14*t21;
  t27 = t23*t24;
  t30 = t22 + t27;
  t47 = Cos(var1[7]);
  t46 = Cos(var1[6]);
  t50 = Sin(var1[7]);
  t56 = t47*t30;
  t59 = -1.*t46*t39*t50;
  t60 = t56 + t59;
  t49 = t46*t47*t39;
  t51 = t30*t50;
  t52 = t49 + t51;
  t63 = Cos(var1[8]);
  t64 = 0. + t63;
  t66 = Sin(var1[8]);
  t40 = Sin(var1[6]);
  t81 = -1.*t23*t11;
  t82 = -1.*t14*t21*t24;
  t84 = t81 + t82;
  t86 = -1.*t11*t14;
  t87 = t23*t21*t24;
  t88 = t86 + t87;
  t90 = t47*t84;
  t92 = -1.*t46*t88*t50;
  t93 = t90 + t92;
  t97 = t46*t47*t88;
  t99 = t84*t50;
  t100 = t97 + t99;
  t67 = -1.*t66;
  t69 = 0. + t67;
  t74 = 0. + t66;
  t112 = Cos(var1[4]);
  t115 = -1.*t112*t47*t14;
  t116 = -1.*t23*t112*t46*t50;
  t117 = t115 + t116;
  t121 = t23*t112*t46*t47;
  t122 = -1.*t112*t14*t50;
  t126 = t121 + t122;
  t150 = Cos(var1[16]);
  t149 = Cos(var1[15]);
  t147 = Sin(var1[16]);
  t148 = t147*t30;
  t152 = t149*t150*t39;
  t154 = t148 + t152;
  t156 = t150*t30;
  t158 = -1.*t149*t147*t39;
  t159 = t156 + t158;
  t169 = Cos(var1[17]);
  t171 = 0. + t169;
  t162 = Sin(var1[17]);
  t145 = Sin(var1[15]);
  t178 = 0. + t162;
  t185 = -1.*t149*t147*t88;
  t186 = t150*t84;
  t187 = t185 + t186;
  t191 = t149*t150*t88;
  t192 = t147*t84;
  t193 = t191 + t192;
  t165 = -1.*t162;
  t166 = 0. + t165;
  t209 = -1.*t149*t23*t112*t147;
  t210 = -1.*t150*t112*t14;
  t211 = t209 + t210;
  t213 = t149*t150*t23*t112;
  t214 = -1.*t112*t147*t14;
  t215 = t213 + t214;
  t236 = t112*t11*t46*t14;
  t237 = 0. + t40;
  t238 = -1.*t11*t21*t237;
  t239 = t236 + t238;
  t244 = t23*t112*t11*t47;
  t245 = -1.*t239*t50;
  t246 = t244 + t245;
  t240 = t47*t239;
  t241 = t23*t112*t11*t50;
  t242 = t240 + t241;
  t230 = 0. + t46;
  t263 = t112*t46*t14*t24;
  t264 = -1.*t21*t24*t237;
  t265 = t263 + t264;
  t270 = t23*t112*t47*t24;
  t271 = -1.*t265*t50;
  t272 = t270 + t271;
  t266 = t47*t265;
  t267 = t23*t112*t24*t50;
  t268 = t266 + t267;
  t289 = -1.*t46*t14*t21;
  t290 = -1.*t112*t237;
  t291 = t289 + t290;
  t296 = -1.*t23*t47*t21;
  t297 = -1.*t291*t50;
  t298 = t296 + t297;
  t292 = t47*t291;
  t293 = -1.*t23*t21*t50;
  t294 = t292 + t293;
  t317 = t149*t112*t11*t14;
  t318 = -1.*t145;
  t319 = 0. + t318;
  t320 = -1.*t11*t319*t21;
  t321 = t317 + t320;
  t316 = t23*t112*t11*t147;
  t322 = t150*t321;
  t323 = t316 + t322;
  t325 = t150*t23*t112*t11;
  t326 = -1.*t147*t321;
  t327 = t325 + t326;
  t312 = 0. + t149;
  t345 = t149*t112*t14*t24;
  t346 = -1.*t319*t21*t24;
  t347 = t345 + t346;
  t344 = t23*t112*t147*t24;
  t348 = t150*t347;
  t349 = t344 + t348;
  t351 = t150*t23*t112*t24;
  t352 = -1.*t147*t347;
  t353 = t351 + t352;
  t371 = -1.*t112*t319;
  t372 = -1.*t149*t14*t21;
  t373 = t371 + t372;
  t370 = -1.*t23*t147*t21;
  t374 = t150*t373;
  t375 = t370 + t374;
  t377 = -1.*t150*t23*t21;
  t378 = -1.*t147*t373;
  t379 = t377 + t378;
  t391 = t11*t14;
  t392 = -1.*t23*t21*t24;
  t393 = t391 + t392;
  t399 = t46*t84;
  t400 = -1.*t112*t24*t237;
  t401 = t399 + t400;
  t406 = t47*t393;
  t407 = -1.*t401*t50;
  t408 = t406 + t407;
  t402 = t47*t401;
  t403 = t393*t50;
  t404 = t402 + t403;
  t422 = t11*t14*t21;
  t423 = -1.*t23*t24;
  t424 = t422 + t423;
  t428 = t46*t424;
  t429 = t112*t11*t237;
  t430 = t428 + t429;
  t435 = t47*t39;
  t436 = -1.*t430*t50;
  t437 = t435 + t436;
  t431 = t47*t430;
  t432 = t39*t50;
  t433 = t431 + t432;
  t455 = -1.*t112*t319*t24;
  t456 = t149*t84;
  t457 = t455 + t456;
  t454 = t147*t393;
  t458 = t150*t457;
  t459 = t454 + t458;
  t461 = t150*t393;
  t462 = -1.*t147*t457;
  t463 = t461 + t462;
  t481 = t112*t11*t319;
  t482 = t149*t424;
  t483 = t481 + t482;
  t480 = t147*t39;
  t484 = t150*t483;
  t485 = t480 + t484;
  t487 = t150*t39;
  t488 = -1.*t147*t483;
  t489 = t487 + t488;
  t425 = -1.*t424*t40;
  t504 = t112*t11*t46;
  t505 = t504 + t425;
  t517 = t23*t11;
  t518 = t14*t21*t24;
  t519 = t517 + t518;
  t524 = t112*t46*t24;
  t525 = -1.*t519*t40;
  t526 = t524 + t525;
  t538 = -1.*t46*t21;
  t539 = -1.*t112*t14*t40;
  t540 = t538 + t539;
  t558 = 0. + t35 + t37;
  t556 = 0. + t428 + t429;
  t557 = -1.*t47*t556;
  t559 = -1.*t558*t50;
  t560 = t557 + t559;
  t562 = t47*t558;
  t563 = -1.*t556*t50;
  t564 = t562 + t563;
  t579 = 0. + t86 + t87;
  t575 = t46*t519;
  t576 = t112*t24*t237;
  t577 = 0. + t575 + t576;
  t578 = -1.*t47*t577;
  t580 = -1.*t579*t50;
  t581 = t578 + t580;
  t583 = t47*t579;
  t584 = -1.*t577*t50;
  t585 = t583 + t584;
  t600 = t23*t112;
  t601 = 0. + t600;
  t596 = t112*t46*t14;
  t597 = -1.*t21*t237;
  t598 = 0. + t596 + t597;
  t599 = -1.*t47*t598;
  t602 = -1.*t601*t50;
  t603 = t599 + t602;
  t605 = t601*t47;
  t606 = -1.*t598*t50;
  t607 = t605 + t606;
  t620 = t47*t556;
  t621 = t558*t50;
  t622 = 0. + t620 + t621;
  t618 = 0. + t562 + t563;
  t633 = t47*t577;
  t634 = t579*t50;
  t635 = 0. + t633 + t634;
  t631 = 0. + t583 + t584;
  t646 = t47*t598;
  t647 = t601*t50;
  t648 = 0. + t646 + t647;
  t644 = 0. + t605 + t606;
  t660 = -1.*t149*t112*t11;
  t661 = -1.*t145*t424;
  t662 = t660 + t661;
  t678 = -1.*t149*t112*t24;
  t679 = -1.*t145*t519;
  t680 = t678 + t679;
  t692 = -1.*t112*t145*t14;
  t693 = t149*t21;
  t694 = t692 + t693;
  t711 = 0. + t481 + t482;
  t710 = -1.*t147*t558;
  t712 = -1.*t150*t711;
  t713 = t710 + t712;
  t715 = t150*t558;
  t716 = -1.*t147*t711;
  t717 = t715 + t716;
  t675 = t149*t519;
  t729 = t112*t319*t24;
  t730 = 0. + t729 + t675;
  t728 = -1.*t147*t579;
  t731 = -1.*t150*t730;
  t732 = t728 + t731;
  t734 = t150*t579;
  t735 = -1.*t147*t730;
  t736 = t734 + t735;
  t697 = t149*t112*t14;
  t748 = -1.*t319*t21;
  t749 = 0. + t697 + t748;
  t747 = -1.*t601*t147;
  t750 = -1.*t150*t749;
  t751 = t747 + t750;
  t753 = t150*t601;
  t754 = -1.*t147*t749;
  t755 = t753 + t754;
  t766 = t147*t558;
  t767 = t150*t711;
  t768 = 0. + t766 + t767;
  t770 = 0. + t715 + t716;
  t779 = t147*t579;
  t780 = t150*t730;
  t781 = 0. + t779 + t780;
  t783 = 0. + t734 + t735;
  t792 = t601*t147;
  t793 = t150*t749;
  t794 = 0. + t792 + t793;
  t796 = 0. + t753 + t754;
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
  p_output1[38]=0.2429*t30 + 0.0329*t39*t40 - 0.2083*t52 - 0.1422*t60 - 0.02*(t60*t64 + t52*t69) - 0.16*(t52*t64 + t60*t74);
  p_output1[39]=-0.2083*t100 + 0.2429*t84 + 0.0329*t40*t88 - 0.1422*t93 - 0.02*(t100*t69 + t64*t93) - 0.16*(t100*t64 + t74*t93);
  p_output1[40]=-0.1422*t117 - 0.2083*t126 - 0.2429*t112*t14 + 0.0329*t112*t23*t40 - 0.02*(t117*t64 + t126*t69) - 0.16*(t126*t64 + t117*t74);
  p_output1[41]=-0.2083*t154 - 0.1422*t159 - 0.02*(t154*t166 + t159*t171) - 0.16*(t154*t171 + t159*t178) - 0.1944*t30 + 0.0329*t145*t39;
  p_output1[42]=-0.1422*t187 - 0.2083*t193 - 0.02*(t171*t187 + t166*t193) - 0.16*(t178*t187 + t171*t193) - 0.1944*t84 + 0.0329*t145*t88;
  p_output1[43]=0.1944*t112*t14 - 0.1422*t211 - 0.2083*t215 - 0.02*(t171*t211 + t166*t215) - 0.16*(t178*t211 + t171*t215) + 0.0329*t112*t145*t23;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=1.;
  p_output1[49]=0.0817*t11*t21 + 0.2429*t11*t112*t23 - 0.2083*t242 - 0.1422*t246 - 0.0329*(-1.*t11*t21*t230 - 1.*t11*t112*t14*t40) - 0.02*(t246*t64 + t242*t69) - 0.16*(t242*t64 + t246*t74);
  p_output1[50]=0.0817*t21*t24 + 0.2429*t112*t23*t24 - 0.2083*t268 - 0.1422*t272 - 0.0329*(-1.*t21*t230*t24 - 1.*t112*t14*t24*t40) - 0.02*(t272*t64 + t268*t69) - 0.16*(t268*t64 + t272*t74);
  p_output1[51]=0.0817*t112 - 0.2429*t21*t23 - 0.2083*t294 - 0.1422*t298 - 0.0329*(-1.*t112*t230 + t14*t21*t40) - 0.02*(t298*t64 + t294*t69) - 0.16*(t294*t64 + t298*t74);
  p_output1[52]=-0.0817*t11*t21 - 0.1944*t11*t112*t23 + 0.0329*(t11*t112*t14*t145 - 1.*t11*t21*t312) - 0.2083*t323 - 0.1422*t327 - 0.02*(t166*t323 + t171*t327) - 0.16*(t171*t323 + t178*t327);
  p_output1[53]=-0.0817*t21*t24 - 0.1944*t112*t23*t24 + 0.0329*(t112*t14*t145*t24 - 1.*t21*t24*t312) - 0.2083*t349 - 0.1422*t353 - 0.02*(t166*t349 + t171*t353) - 0.16*(t171*t349 + t178*t353);
  p_output1[54]=-0.0817*t112 + 0.1944*t21*t23 + 0.0329*(-1.*t14*t145*t21 - 1.*t112*t312) - 0.2083*t375 - 0.1422*t379 - 0.02*(t166*t375 + t171*t379) - 0.16*(t171*t375 + t178*t379);
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0.0817*t112*t24 + 0.2429*t393 - 0.2083*t404 - 0.1422*t408 - 0.02*(t408*t64 + t404*t69) - 0.16*(t404*t64 + t408*t74) - 0.0329*(-1.*t112*t230*t24 - 1.*t40*t84);
  p_output1[61]=-0.0817*t11*t112 + 0.2429*t39 - 0.0329*(t11*t112*t230 + t425) - 0.2083*t433 - 0.1422*t437 - 0.02*(t437*t64 + t433*t69) - 0.16*(t433*t64 + t437*t74);
  p_output1[62]=0;
  p_output1[63]=-0.0817*t112*t24 - 0.1944*t393 - 0.2083*t459 - 0.1422*t463 - 0.02*(t166*t459 + t171*t463) - 0.16*(t171*t459 + t178*t463) + 0.0329*(-1.*t112*t24*t312 + t145*t84);
  p_output1[64]=0.0817*t11*t112 - 0.1944*t39 + 0.0329*(t11*t112*t312 + t145*t424) - 0.2083*t485 - 0.1422*t489 - 0.02*(t166*t485 + t171*t489) - 0.16*(t171*t485 + t178*t489);
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=-0.0329*(-1.*t11*t112*t40 - 1.*t424*t46) - 0.2083*t47*t505 + 0.1422*t50*t505 - 0.02*(-1.*t50*t505*t64 + t47*t505*t69) - 0.16*(t47*t505*t64 - 1.*t50*t505*t74);
  p_output1[72]=-0.0329*(-1.*t112*t24*t40 - 1.*t46*t519) - 0.2083*t47*t526 + 0.1422*t50*t526 - 0.02*(-1.*t50*t526*t64 + t47*t526*t69) - 0.16*(t47*t526*t64 - 1.*t50*t526*t74);
  p_output1[73]=-0.0329*(t21*t40 - 1.*t112*t14*t46) - 0.2083*t47*t540 + 0.1422*t50*t540 - 0.02*(-1.*t50*t540*t64 + t47*t540*t69) - 0.16*(t47*t540*t64 - 1.*t50*t540*t74);
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=-0.1422*t560 - 0.2083*t564 - 0.02*(t560*t64 + t564*t69) - 0.16*(t564*t64 + t560*t74);
  p_output1[83]=-0.1422*t581 - 0.2083*t585 - 0.02*(t581*t64 + t585*t69) - 0.16*(t585*t64 + t581*t74);
  p_output1[84]=-0.1422*t603 - 0.2083*t607 - 0.02*(t603*t64 + t607*t69) - 0.16*(t607*t64 + t603*t74);
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=0;
  p_output1[93]=-0.02*(-1.*t622*t63 - 1.*t618*t66) - 0.16*(t618*t63 - 1.*t622*t66);
  p_output1[94]=-0.02*(-1.*t63*t635 - 1.*t631*t66) - 0.16*(t63*t631 - 1.*t635*t66);
  p_output1[95]=-0.02*(-1.*t63*t648 - 1.*t644*t66) - 0.16*(t63*t644 - 1.*t648*t66);
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
  p_output1[108]=0;
  p_output1[109]=0;
  p_output1[110]=0;
  p_output1[111]=0;
  p_output1[112]=0;
  p_output1[113]=0;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
  p_output1[120]=0;
  p_output1[121]=0;
  p_output1[122]=0;
  p_output1[123]=0;
  p_output1[124]=0;
  p_output1[125]=0;
  p_output1[126]=0;
  p_output1[127]=0;
  p_output1[128]=0;
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
  p_output1[140]=0;
  p_output1[141]=0;
  p_output1[142]=0;
  p_output1[143]=0;
  p_output1[144]=0;
  p_output1[145]=0;
  p_output1[146]=0;
  p_output1[147]=0;
  p_output1[148]=0;
  p_output1[149]=0;
  p_output1[150]=0;
  p_output1[151]=0;
  p_output1[152]=0;
  p_output1[153]=0;
  p_output1[154]=0;
  p_output1[155]=0;
  p_output1[156]=0;
  p_output1[157]=0;
  p_output1[158]=0;
  p_output1[159]=0;
  p_output1[160]=0;
  p_output1[161]=0;
  p_output1[162]=0;
  p_output1[163]=0;
  p_output1[164]=0;
  p_output1[165]=0;
  p_output1[166]=0;
  p_output1[167]=0;
  p_output1[168]=0;
  p_output1[169]=0;
  p_output1[170]=0;
  p_output1[171]=0;
  p_output1[172]=0;
  p_output1[173]=0.0329*(-1.*t11*t112*t145 + t482) + 0.1422*t147*t662 - 0.2083*t150*t662 - 0.02*(t150*t166*t662 - 1.*t147*t171*t662) - 0.16*(t150*t171*t662 - 1.*t147*t178*t662);
  p_output1[174]=0.0329*(-1.*t112*t145*t24 + t675) + 0.1422*t147*t680 - 0.2083*t150*t680 - 0.02*(t150*t166*t680 - 1.*t147*t171*t680) - 0.16*(t150*t171*t680 - 1.*t147*t178*t680);
  p_output1[175]=0.1422*t147*t694 - 0.2083*t150*t694 - 0.02*(t150*t166*t694 - 1.*t147*t171*t694) - 0.16*(t150*t171*t694 - 1.*t147*t178*t694) + 0.0329*(t145*t21 + t697);
  p_output1[176]=0;
  p_output1[177]=0;
  p_output1[178]=0;
  p_output1[179]=0;
  p_output1[180]=0;
  p_output1[181]=0;
  p_output1[182]=0;
  p_output1[183]=0;
  p_output1[184]=-0.1422*t713 - 0.2083*t717 - 0.02*(t171*t713 + t166*t717) - 0.16*(t178*t713 + t171*t717);
  p_output1[185]=-0.1422*t732 - 0.2083*t736 - 0.02*(t171*t732 + t166*t736) - 0.16*(t178*t732 + t171*t736);
  p_output1[186]=-0.1422*t751 - 0.2083*t755 - 0.02*(t171*t751 + t166*t755) - 0.16*(t178*t751 + t171*t755);
  p_output1[187]=0;
  p_output1[188]=0;
  p_output1[189]=0;
  p_output1[190]=0;
  p_output1[191]=0;
  p_output1[192]=0;
  p_output1[193]=0;
  p_output1[194]=0;
  p_output1[195]=-0.02*(-1.*t169*t768 - 1.*t162*t770) - 0.16*(-1.*t162*t768 + t169*t770);
  p_output1[196]=-0.02*(-1.*t169*t781 - 1.*t162*t783) - 0.16*(-1.*t162*t781 + t169*t783);
  p_output1[197]=-0.02*(-1.*t169*t794 - 1.*t162*t796) - 0.16*(-1.*t162*t794 + t169*t796);
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

#include "j_hc_reduced_1_func.hh"

namespace SymFunction
{

void j_hc_reduced_1_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
