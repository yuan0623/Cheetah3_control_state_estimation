sym_var=SymVariable('q',[18,1]);
dsym_var=SymVariable('dq',[18,1]);

q=[sym_var(1);sym_var(2);sym_var(3);sym_var(4);sym_var(5);sym_var(6);sym_var(7);...
    sym_var(8);sym_var(9);sym_var(10);sym_var(11);sym_var(12);sym_var(13);
    sym_var(14);sym_var(15);sym_var(16);sym_var(17);sym_var(18)];
dq=[dsym_var(1);dsym_var(2);dsym_var(3);dsym_var(4);dsym_var(5);dsym_var(6);...
   dsym_var(7);dsym_var(8);dsym_var(9);dsym_var(10);dsym_var(11);dsym_var(12);
   dsym_var(13);dsym_var(14);dsym_var(15);dsym_var(16);dsym_var(17);dsym_var(18)];


Aw2bp = [1 0 0 q(1);
         0 1 0 q(2);
         0 0 1 q(3);
         0 0 0 1];
Rb_roll = [1 0          0         0;
           0 cos(q(4)) -sin(q(4)) 0;
           0 sin(q(4))  cos(q(4)) 0;
           0 0          0         1];
Rb_pitch = [cos(q(5)) 0 sin(q(5)) 0;
            0         1 0         0;
           -sin(q(5)) 0 cos(q(5)) 0;
            0         0 0         1];
Rb_yaw = [cos(q(6)) -sin(q(6)) 0 0;
          sin(q(6))  cos(q(6)) 0 0;
          0          0         1 0;
          0          0         0 1];
Rb_rpy = Rb_yaw*Rb_pitch*Rb_roll;
%Rb_rpy = Rb_roll*Rb_pitch*Rb_yaw;
Aw2b = Aw2bp*Rb_rpy;

%% base frame to FL
Ab2FL_hip_p = [1 0 0  0.0817;
               0 1 0  0;
               0 0 1  0.2429;
               0 0 0  1];
AFL_hip_p2FL_hip = [cos(q(10)) -sin(q(10)) 0 0;
                    sin(q(10))  cos(q(10)) 0 0;
                    0           0          1 0;
                    0           0          0 1];
Ab2FL_hip = Ab2FL_hip_p*AFL_hip_p2FL_hip;

AFL_hip2upper_leg_p = [1 0 0  0.0559;
                       0 1 0  0;
                       0 0 1  0;
                       0 0 0  1];
Aupper_leg_p2upper_leg = [1 0           0          0;
                          0 cos(q(11)) -sin(q(11)) 0;
                          0 sin(q(11))  cos(q(11)) 0;
                          0 0           0          1]; 
AFL_hip2upper_leg = AFL_hip2upper_leg_p*Aupper_leg_p2upper_leg;

AFL_upper_leg2lower_leg_p = [1 0 0  -0.0207;
                           0 1 0 -0.2083;
                           0 0 1 -0.1422;
                           0 0 0  1];
AFL_lower_leg_p2lower_leg = [1 0           0          0;
                             0 cos(q(12)) -sin(q(12)) 0;
                             0 sin(q(12))  cos(q(12)) 0;
                             0 0           0          1];
AFL_upper_leg2lower_leg = AFL_upper_leg2lower_leg_p*AFL_lower_leg_p2lower_leg;

AFL_lower_leg2foot = [1 0 0  0;
                      0 1 0 -0.16;
                      0 0 1 -0.02;
                      0 0 0  1];
Aw2hip_FL = Aw2b*Ab2FL_hip;
Aw2upper_leg_FL = Aw2hip_FL*AFL_hip2upper_leg;
Aw2lower_leg_FL = Aw2upper_leg_FL*AFL_upper_leg2lower_leg;
Aw2foot_FL = Aw2lower_leg_FL*AFL_lower_leg2foot;

FL11=Aw2foot_FL(1,1);
FL11=FL11(1);
FL21=Aw2foot_FL(2,1);
FL21=FL21(1);
FL31=Aw2foot_FL(3,1);
FL31=FL31(1);
FL32=Aw2foot_FL(3,2);
FL32=FL32(1);
FL33=Aw2foot_FL(3,3);
FL33=FL33(1);
FL_Yaw=atan2(FL21,FL11);
FL_Pitch=atan2(-FL31,sqrt(FL32*FL32+FL33*FL33));
FL_Roll=atan2(FL32,FL33);

FLFoot = [Aw2foot_FL(1,4);Aw2foot_FL(2,4);Aw2foot_FL(3,4)]; %Foot no. 1, for constraints
FLFoot_swing=[Aw2foot_FL(1,4);Aw2foot_FL(2,4);Aw2foot_FL(3,4);FL_Roll;FL_Pitch;FL_Yaw]; % for output

%% base frame to FR
Ab2FR_hip_p = [1 0 0 -0.0817;
               0 1 0  0;
               0 0 1  0.2429;
               0 0 0  1];
AFR_hip_p2FR_hip = [cos(-q(7)) -sin(-q(7)) 0 0;
                    sin(-q(7))  cos(-q(7)) 0 0;
                    0           0          1 0;
                    0           0          0 1];
Ab2FR_hip = Ab2FR_hip_p*AFR_hip_p2FR_hip;

AFR_hip2upper_leg_p = [1 0 0 -0.0536;
                       0 1 0  0;
                       0 0 1  0;
                       0 0 0  1];
Aupper_leg_p2upper_leg = [1 0          0         0;
                          0 cos(q(8)) -sin(q(8)) 0;
                          0 sin(q(8))  cos(q(8)) 0;
                          0 0          0         1]; 
AFR_hip2upper_leg = AFR_hip2upper_leg_p*Aupper_leg_p2upper_leg;

AFR_upper_leg2lower_leg_p = [1 0 0  0.0207;
                           0 1 0 -0.2083;
                           0 0 1 -0.1422;
                           0 0 0  1];
AFR_lower_leg_p2lower_leg = [1 0          0         0;
                             0 cos(q(9)) -sin(q(9)) 0;
                             0 sin(q(9))  cos(q(9)) 0;
                             0 0          0         1];
AFR_upper_leg2lower_leg = AFR_upper_leg2lower_leg_p*AFR_lower_leg_p2lower_leg;

AFR_lower_leg2foot = [1 0 0  0;
                      0 1 0 -0.16;
                      0 0 1 -0.02;
                      0 0 0  1];
Aw2hip = Aw2b*Ab2FR_hip;
Aw2upper_leg = Aw2hip*AFR_hip2upper_leg;
Aw2lower_leg = Aw2upper_leg*AFR_upper_leg2lower_leg;
Aw2foot_FR = Aw2lower_leg*AFR_lower_leg2foot;

FR11=Aw2foot_FR(1,1);
FR11=FR11(1);
FR21=Aw2foot_FR(2,1);
FR21=FR21(1);
FR31=Aw2foot_FR(3,1);
FR31=FR31(1);
FR32=Aw2foot_FR(3,2);
FR32=FR32(1);
FR33=Aw2foot_FR(3,3);
FR33=FR33(1);
FR_Yaw=atan2(FR21,FR11);
FR_Pitch=atan2(-FR31,sqrt(FR32*FR32+FR33*FR33));
FR_Roll=atan2(FR32,FR33);

FRFoot = [Aw2foot_FR(1,4);Aw2foot_FR(2,4);Aw2foot_FR(3,4)]; %Foot no. 2, For constraints
FRFoot_swing=[Aw2foot_FR(1,4);Aw2foot_FR(2,4);Aw2foot_FR(3,4);FR_Roll;FR_Pitch;FR_Yaw];% for output

%% base frame to RL
Ab2RL_hip_p = [1 0 0  0.0817;
               0 1 0  0;
               0 0 1 -0.1944;
               0 0 0  1];
ARL_hip_p2RL_hip = [cos(q(16)) -sin(q(16)) 0 0;
                    sin(q(16))  cos(q(16)) 0 0;
                    0           0          1 0;
                    0           0          0 1];
Ab2RL_hip = Ab2RL_hip_p*ARL_hip_p2RL_hip;

ARL_hip2upper_leg_p = [1 0 0  0.0559;
                       0 1 0  0;
                       0 0 1  0;
                       0 0 0  1];
Aupper_leg_p2upper_leg = [1 0           0          0;
                          0 cos(q(17)) -sin(q(17)) 0;
                          0 sin(q(17))  cos(q(17)) 0;
                          0 0           0          1]; 
ARL_hip2upper_leg = ARL_hip2upper_leg_p*Aupper_leg_p2upper_leg;

ARL_upper_leg2lower_leg_p = [1 0 0 -0.0207;
                             0 1 0 -0.2083;
                             0 0 1 -0.1422;
                             0 0 0  1];
ARL_lower_leg_p2lower_leg = [1 0          0         0;
                             0 cos(q(18)) -sin(q(18)) 0;
                             0 sin(q(18))  cos(q(18)) 0;
                             0 0          0         1];
ARL_upper_leg2lower_leg = ARL_upper_leg2lower_leg_p*ARL_lower_leg_p2lower_leg;

ARL_lower_leg2foot = [1 0 0  0;
                      0 1 0 -0.16;
                      0 0 1 -0.02;
                      0 0 0  1];
Aw2hip = Aw2b*Ab2RL_hip;
Aw2upper_leg = Aw2hip*ARL_hip2upper_leg;
Aw2lower_leg = Aw2upper_leg*ARL_upper_leg2lower_leg;
Aw2foot_RL = Aw2lower_leg*ARL_lower_leg2foot;

RL11=Aw2foot_RL(1,1);
RL11=RL11(1);
RL21=Aw2foot_RL(2,1);
RL21=RL21(1);
RL31=Aw2foot_RL(3,1);
RL31=RL31(1);
RL32=Aw2foot_RL(3,2);
RL32=RL32(1);
RL33=Aw2foot_RL(3,3);
RL33=RL33(1);
RL_Yaw=atan2(RL21,RL11);
RL_Pitch=atan2(-RL31,sqrt(RL32*RL32+RL33*RL33));
RL_Roll=atan2(RL32,RL33);

RLFoot = [Aw2foot_RL(1,4);Aw2foot_RL(2,4);Aw2foot_RL(3,4)]; %Foot no. 3, For constraints
RLFoot_swing=[Aw2foot_RL(1,4);Aw2foot_RL(2,4);Aw2foot_RL(3,4);RL_Roll;RL_Pitch;RL_Yaw];% for output


%% base frame to RR
Ab2RR_hip_p = [1 0 0 -0.0817;
               0 1 0  0;
               0 0 1 -0.1944;
               0 0 0  1];
ARR_hip_p2RR_hip = [cos(-q(13)) -sin(-q(13)) 0 0;
                    sin(-q(13))  cos(-q(13)) 0 0;
                    0            0           1 0;
                    0            0           0 1];
Ab2RR_hip = Ab2RR_hip_p*ARR_hip_p2RR_hip;

ARR_hip2upper_leg_p = [1 0 0 -0.0536;
                       0 1 0  0;
                       0 0 1  0;
                       0 0 0  1];
Aupper_leg_p2upper_leg = [1 0          0         0;
                          0 cos(q(14)) -sin(q(14)) 0;
                          0 sin(q(14))  cos(q(14)) 0;
                          0 0          0         1]; 
ARR_hip2upper_leg = ARR_hip2upper_leg_p*Aupper_leg_p2upper_leg;

ARR_upper_leg2lower_leg_p = [1 0 0  0.0207;
                             0 1 0 -0.2083;
                             0 0 1 -0.1422;
                             0 0 0  1];
ARR_lower_leg_p2lower_leg = [1 0          0         0;
                             0 cos(q(15)) -sin(q(15)) 0;
                             0 sin(q(15))  cos(q(15)) 0;
                             0 0          0         1];
ARR_upper_leg2lower_leg = ARR_upper_leg2lower_leg_p*ARR_lower_leg_p2lower_leg;

ARR_lower_leg2foot = [1 0 0  0;
                      0 1 0 -0.16;
                      0 0 1 -0.02;
                      0 0 0  1];
Aw2hip = Aw2b*Ab2RR_hip;
Aw2upper_leg = Aw2hip*ARR_hip2upper_leg;
Aw2lower_leg = Aw2upper_leg*ARR_upper_leg2lower_leg;
Aw2foot_RR = Aw2lower_leg*ARR_lower_leg2foot;

RR11=Aw2foot_RR(1,1);
RR11=RR11(1);
RR21=Aw2foot_RR(2,1);
RR21=RR21(1);
RR31=Aw2foot_RR(3,1);
RR31=RR31(1);
RR32=Aw2foot_RR(3,2);
RR32=RR32(1);
RR33=Aw2foot_RR(3,3);
RR33=RR33(1);
RR_Yaw=atan2(RR21,RR11);
RR_Pitch=atan2(-RR31,sqrt(RR32*RR32+RR33*RR33));
RR_Roll=atan2(RR32,RR33);

RRFoot = [Aw2foot_RR(1,4);Aw2foot_RR(2,4);Aw2foot_RR(3,4)]; %Foot no. 4, For constraints
RRFoot_swing=[Aw2foot_RR(1,4);Aw2foot_RR(2,4);Aw2foot_RR(3,4);RR_Roll;RR_Pitch;RR_Yaw];% for output


% order of leg movement FL(1)->RR(4)->FR(2)->RL(3)
%F1,F2,F3 and F4 are the coordinates of contact points while moving 1st,
%2nd,3rd, and 4th leg respectively
% 1st leg = FL, 2nd leg = RR, 3rd leg = FR, 4th leg = RL

%% Modified for one leg at a time movement % Contact jacobian
F_1 = [FRFoot;RLFoot;RRFoot];
F_2 = [FLFoot;FRFoot;RLFoot];
F_3 = [FLFoot;RLFoot;RRFoot];
F_4 = [FLFoot;FRFoot;RRFoot];
F_1_fun = SymFunction('F_1_func',F_1,sym_var);
F_2_fun = SymFunction('F_2_func',F_2,sym_var);
F_3_fun = SymFunction('F_3_func',F_3,sym_var);
F_4_fun = SymFunction('F_4_func',F_4,sym_var);
export(F_1_fun,'sym2')
export(F_2_fun,'sym2')
export(F_3_fun,'sym2')
export(F_4_fun,'sym2')
%%
j_1 = jacobian(F_1,sym_var);
j_2 = jacobian(F_2,sym_var);
j_3 = jacobian(F_3,sym_var);
j_4 = jacobian(F_4,sym_var);
j_1_fun = SymFunction('j_1_func',j_1,sym_var);
j_2_fun = SymFunction('j_2_func',j_2,sym_var);
j_3_fun = SymFunction('j_3_func',j_3,sym_var);
j_4_fun = SymFunction('j_4_func',j_4,sym_var);
export(j_1_fun,'sym2')
export(j_2_fun,'sym2')
export(j_3_fun,'sym2')
export(j_4_fun,'sym2')
%%
jj_1 = jacobian(j_1*dq,sym_var)*dq;
jj_2 = jacobian(j_2*dq,sym_var)*dq;
jj_3 = jacobian(j_3*dq,sym_var)*dq;
jj_4 = jacobian(j_4*dq,sym_var)*dq;
jj_1_fun = SymFunction('jj_1_func',jj_1,sym_var,dsym_var);
jj_2_fun = SymFunction('jj_2_func',jj_2,sym_var,dsym_var);
jj_3_fun = SymFunction('jj_3_func',jj_3,sym_var,dsym_var);
jj_4_fun = SymFunction('jj_4_func',jj_4,sym_var,dsym_var);

export(jj_1_fun,'sym2')
export(jj_2_fun,'sym2')
export(jj_3_fun,'sym2')
export(jj_4_fun,'sym2')

%% Swing foot pose and jacobian
% SF_1 = FLFoot_swing;
% SF_2 = RRFoot_swing;
% SF_3 = FRFoot_swing;
% SF_4 = RLFoot_swing;
SF_1 = FLFoot;
SF_2 = RRFoot;
SF_3 = FRFoot;
SF_4 = RLFoot;
SF_1_fun = SymFunction('SF_1_func',SF_1,sym_var);
SF_2_fun = SymFunction('SF_2_func',SF_2,sym_var);
SF_3_fun = SymFunction('SF_3_func',SF_3,sym_var);
SF_4_fun = SymFunction('SF_4_func',SF_4,sym_var);

export(SF_1_fun,'sym2')
export(SF_2_fun,'sym2')
export(SF_3_fun,'sym2')
export(SF_4_fun,'sym2')
%% Swing foot jacobian
Sj_1 = jacobian(SF_1,sym_var);
Sj_2 = jacobian(SF_2,sym_var);
Sj_3 = jacobian(SF_3,sym_var);
Sj_4 = jacobian(SF_4,sym_var);
Sj_1_fun = SymFunction('Sj_1_func',Sj_1,sym_var);
Sj_2_fun = SymFunction('Sj_2_func',Sj_2,sym_var);
Sj_3_fun = SymFunction('Sj_3_func',Sj_3,sym_var);
Sj_4_fun = SymFunction('Sj_4_func',Sj_4,sym_var);
export(Sj_1_fun,'sym2')
export(Sj_2_fun,'sym2')
export(Sj_3_fun,'sym2')
export(Sj_4_fun,'sym2')


%%
%% compute output function and its derivatives
% the dimension is 9
hc_1 = [q(1);q(2);q(3);q(4);q(5);q(6);FLFoot];
hc_2 = [q(1);q(2);q(3);q(4);q(5);q(6);RRFoot];
hc_3 = [q(1);q(2);q(3);q(4);q(5);q(6);FRFoot];
hc_4 = [q(1);q(2);q(3);q(4);q(5);q(6);RLFoot];
% hc_1 = [q(1);q(2);q(3);FLFoot_swing];
% hc_2 = [q(1);q(2);q(3);RRFoot_swing];
% hc_3 = [q(1);q(2);q(3);FRFoot_swing];
% hc_4 = [q(1);q(2);q(3);RLFoot_swing];

hc_1_fun = SymFunction('hc_1_func',hc_1, sym_var);
hc_2_fun = SymFunction('hc_2_func',hc_2, sym_var);
hc_3_fun = SymFunction('hc_3_func',hc_3, sym_var);
hc_4_fun = SymFunction('hc_4_func',hc_4, sym_var);

export(hc_1_fun,'sym2')
export(hc_2_fun,'sym2')
export(hc_3_fun,'sym2')
export(hc_4_fun,'sym2')

j_hc_1 = jacobian(hc_1,sym_var);
j_hc_2 = jacobian(hc_2,sym_var);
j_hc_3 = jacobian(hc_3,sym_var);
j_hc_4 = jacobian(hc_4,sym_var);

j_hc_1_fun = SymFunction('j_hc_1_func',j_hc_1,sym_var);
j_hc_2_fun = SymFunction('j_hc_2_func',j_hc_2,sym_var);
j_hc_3_fun = SymFunction('j_hc_3_func',j_hc_3,sym_var);
j_hc_4_fun = SymFunction('j_hc_4_func',j_hc_4,sym_var);

export(j_hc_1_fun,'sym2')
export(j_hc_2_fun,'sym2')
export(j_hc_3_fun,'sym2')
export(j_hc_4_fun,'sym2')

jj_hc_1=jacobian(j_hc_1*dq,sym_var)*dq;
jj_hc_2=jacobian(j_hc_2*dq,sym_var)*dq;
jj_hc_3=jacobian(j_hc_3*dq,sym_var)*dq;
jj_hc_4=jacobian(j_hc_4*dq,sym_var)*dq;

jj_hc_1_fun = SymFunction('jj_hc_1_func',jj_hc_1,sym_var,dsym_var);
jj_hc_2_fun = SymFunction('jj_hc_2_func',jj_hc_2,sym_var,dsym_var);
jj_hc_3_fun = SymFunction('jj_hc_3_func',jj_hc_3,sym_var,dsym_var);
jj_hc_4_fun = SymFunction('jj_hc_4_func',jj_hc_4,sym_var,dsym_var);

export(jj_hc_1_fun,'sym2')
export(jj_hc_2_fun,'sym2')
export(jj_hc_3_fun,'sym2')
export(jj_hc_4_fun,'sym2')

%%
%% Reset map jacobian% swing leg and the legs which stay in stance for the next swing will be taken for jacobian
% [1,3,4],[2,4,1],[3,1,2],[4,2,3]
% F_1 = [FRFoot;RLFoot;RRFoot];
% F_2 = [FLFoot;FRFoot;RLFoot];
% F_3 = [FLFoot;RLFoot;RRFoot];
% F_4 = [FLFoot;FRFoot;RRFoot];

Reset_F_1 = [FLFoot;FRFoot;RLFoot]; %(1,3,4)(1,4,2)(1,3,2)(3,4,2)
Reset_F_2 = [FLFoot;RLFoot;RRFoot];
Reset_F_3 = [FLFoot;FRFoot;RRFoot];
Reset_F_4 = [FRFoot;RLFoot;RRFoot];
Reset_F_1_fun = SymFunction('Reset_F_1_func',Reset_F_1,sym_var);
Reset_F_2_fun = SymFunction('Reset_F_2_func',Reset_F_2,sym_var);
Reset_F_3_fun = SymFunction('Reset_F_3_func',Reset_F_3,sym_var);
Reset_F_4_fun = SymFunction('Reset_F_4_func',Reset_F_4,sym_var);
export(Reset_F_1_fun,'sym2')
export(Reset_F_2_fun,'sym2')
export(Reset_F_3_fun,'sym2')
export(Reset_F_4_fun,'sym2')
%%
Reset_j_1 = jacobian(Reset_F_1,sym_var);
Reset_j_2 = jacobian(Reset_F_2,sym_var);
Reset_j_3 = jacobian(Reset_F_3,sym_var);
Reset_j_4 = jacobian(Reset_F_4,sym_var);
Reset_j_1_fun = SymFunction('Reset_j_1_func',Reset_j_1,sym_var);
Reset_j_2_fun = SymFunction('Reset_j_2_func',Reset_j_2,sym_var);
Reset_j_3_fun = SymFunction('Reset_j_3_func',Reset_j_3,sym_var);
Reset_j_4_fun = SymFunction('Reset_j_4_func',Reset_j_4,sym_var);
export(Reset_j_1_fun,'sym2')
export(Reset_j_2_fun,'sym2')
export(Reset_j_3_fun,'sym2')
export(Reset_j_4_fun,'sym2')

%% Output function for the optimization problem

hc_opt1 = [q(1);q(2);q(3);q(4);q(5);q(6);SF_1; F_1];
hc_opt2 = [q(1);q(2);q(3);q(4);q(5);q(6);SF_2; F_2];
hc_opt3 = [q(1);q(2);q(3);q(4);q(5);q(6);SF_3; F_3];
hc_opt4 = [q(1);q(2);q(3);q(4);q(5);q(6);SF_4; F_4];

hc_opt1_fun = SymFunction('hc_opt1_func',hc_opt1, sym_var);
hc_opt2_fun = SymFunction('hc_opt2_func',hc_opt2, sym_var);
hc_opt3_fun = SymFunction('hc_opt3_func',hc_opt3, sym_var);
hc_opt4_fun = SymFunction('hc_opt4_func',hc_opt4, sym_var);

export(hc_opt1_fun,'sym2')
export(hc_opt2_fun,'sym2')
export(hc_opt3_fun,'sym2')
export(hc_opt4_fun,'sym2')

j_hc_opt1 = jacobian(hc_opt1,sym_var);
j_hc_opt2 = jacobian(hc_opt2,sym_var);
j_hc_opt3 = jacobian(hc_opt3,sym_var);
j_hc_opt4 = jacobian(hc_opt4,sym_var);

j_hc_opt1_fun = SymFunction('j_hc_opt1_func',j_hc_opt1,sym_var);
j_hc_opt2_fun = SymFunction('j_hc_opt2_func',j_hc_opt2,sym_var);
j_hc_opt3_fun = SymFunction('j_hc_opt3_func',j_hc_opt3,sym_var);
j_hc_opt4_fun = SymFunction('j_hc_opt4_func',j_hc_opt4,sym_var);

export(j_hc_opt1_fun,'sym2')
export(j_hc_opt2_fun,'sym2')
export(j_hc_opt3_fun,'sym2')
export(j_hc_opt4_fun,'sym2')


%% compute output function and its derivatives 1D less
% hc_1 = [q(1);q(2);q(3);q(4);q(5);FRFoot;RLFoot];
% hc_2 = [q(1);q(2);q(3);q(4);q(5);FLFoot;RRFoot];
% 
% hc_1_fun = SymFunction('hc_reduced_1_func',hc_1, sym_var);
% hc_2_fun = SymFunction('hc_reduced_2_func',hc_2, sym_var);
% 
% export(hc_1_fun,'sym2')
% export(hc_2_fun,'sym2')
% 
% j_hc_1 = jacobian(hc_1,sym_var);
% j_hc_2 = jacobian(hc_2,sym_var);
% 
% j_hc_1_fun = SymFunction('j_hc_reduced_1_func',j_hc_1,sym_var);
% j_hc_2_fun = SymFunction('j_hc_reduced_2_func',j_hc_2,sym_var);
% 
% export(j_hc_1_fun,'sym2')
% export(j_hc_2_fun,'sym2')
% 
% jj_hc_1=jacobian(j_hc_1*dq,sym_var)*dq;
% jj_hc_2=jacobian(j_hc_2*dq,sym_var)*dq;
% 
% jj_hc_1_fun = SymFunction('jj_hc_reduced_1_func',jj_hc_1,sym_var,dsym_var);
% jj_hc_2_fun = SymFunction('jj_hc_reduced_2_func',jj_hc_2,sym_var,dsym_var);
% 
% export(jj_hc_1_fun,'sym2')
% export(jj_hc_2_fun,'sym2')


%%