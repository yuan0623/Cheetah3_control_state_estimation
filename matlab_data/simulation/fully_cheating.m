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

AFL_hip2upper_leg_p = [1 0 0  0.0536;
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

FLr21 = Aw2foot_FL(2,1);
FLr21 = FLr21(1);
FLr11 = Aw2foot_FL(1,1);
FLr11 = FLr11(1);
FLr31 = Aw2foot_FL(3,1);
FLr31 = FLr31(1);
FLr32 = Aw2foot_FL(3,2);
FLr32 = FLr32(1);
FLr33 = Aw2foot_FL(3,3);
FLr33 = FLr33(1);
FLPitch = atan2(-FLr31,sqrt(FLr32*FLr32+FLr33*FLr33));
FLYaw = atan2(FLr21,FLr11);
FLRoll = atan2(FLr32,FLr33);

FLFoot = [Aw2foot_FL(1,4);Aw2foot_FL(2,4);Aw2foot_FL(3,4);FLRoll;FLPitch;FLYaw];

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
Aw2hip_FR = Aw2b*Ab2FR_hip;
Aw2upper_leg_FR = Aw2hip_FR*AFR_hip2upper_leg;
Aw2lower_leg_FR = Aw2upper_leg_FR*AFR_upper_leg2lower_leg;
Aw2foot_FR = Aw2lower_leg_FR*AFR_lower_leg2foot;

FRr21 = Aw2foot_FR(2,1);
FRr21 = FRr21(1);
FRr11 = Aw2foot_FR(1,1);
FRr11 = FRr11(1);
FRr31 = Aw2foot_FR(3,1);
FRr31 = FRr31(1);
FRr32 = Aw2foot_FR(3,2);
FRr32 = FRr32(1);
FRr33 = Aw2foot_FR(3,3);
FRr33 = FRr33(1);
FRPitch = atan2(-FRr31,sqrt(FRr32*FRr32+FRr33*FRr33));
FRYaw = atan2(FRr21,FRr11);
FRRoll = atan2(FRr32,FRr33);

FRFoot = [Aw2foot_FR(1,4);Aw2foot_FR(2,4);Aw2foot_FR(3,4);FRRoll;FRPitch;FRYaw];
%% fully actuated cheating
%{
FLFoot_fun = SymFunction('FLFoot_func',FLFoot,sym_var);
FRFoot_fun = SymFunction('FRFoot_func',FRFoot,sym_var);

j_FLFoot = jacobian(FLFoot,sym_var);
j_FRFoot = jacobian(FRFoot,sym_var);

j_FLFoot_fun = SymFunction('j_FLFoot_func',j_FLFoot,sym_var);
j_FRFoot_fun = SymFunction('j_FRFoot_func',j_FRFoot,sym_var);

export(j_FLFoot_fun,'fully_cheating')
export(j_FRFoot_fun,'fully_cheating')

jj_FLFoot = jacobian(j_FLFoot*dq,sym_var)*dq;
jj_FRFoot = jacobian(j_FRFoot*dq,sym_var)*dq;

jj_FLFoot_fun = SymFunction('jj_FLFoot_func',jj_FLFoot,sym_var,dsym_var);
jj_FRFoot_fun = SymFunction('jj_FRFoot_func',jj_FRFoot,sym_var,dsym_var);

export(jj_FLFoot_fun, 'fully_cheating')
export(jj_FRFoot_fun, 'fully_cheating')
%}
%% constraint jacobian


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

ARL_hip2upper_leg_p = [1 0 0  0.0536;
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
Aw2hip_RL = Aw2b*Ab2RL_hip;
Aw2upper_leg_RL = Aw2hip_RL*ARL_hip2upper_leg;
Aw2lower_leg_RL = Aw2upper_leg_RL*ARL_upper_leg2lower_leg;
Aw2foot_RL = Aw2lower_leg_RL*ARL_lower_leg2foot;

RLr21 = Aw2foot_RL(2,1);
RLr21 = RLr21(1);
RLr11 = Aw2foot_RL(1,1);
RLr11 = RLr11(1);
RLr31 = Aw2foot_RL(3,1);
RLr31 = RLr31(1);
RLr32 = Aw2foot_RL(3,2);
RLr32 = RLr32(1);
RLr33 = Aw2foot_RL(3,3);
RLr33 = RLr33(1);
RLPitch = atan2(-RLr31,sqrt(RLr32*RLr32+RLr33*RLr33));
RLYaw = atan2(RLr21,RLr11);
RLRoll = atan2(RLr32,RLr33);

RLFoot = [Aw2foot_RL(1,4);Aw2foot_RL(2,4);Aw2foot_RL(3,4);RLRoll;RLPitch;RLYaw];

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
Aw2hip_RR = Aw2b*Ab2RR_hip;
Aw2upper_leg_RR = Aw2hip_RR*ARR_hip2upper_leg;
Aw2lower_leg_RR = Aw2upper_leg_RR*ARR_upper_leg2lower_leg;
Aw2foot_RR = Aw2lower_leg_RR*ARR_lower_leg2foot;

RRr21 = Aw2foot_RR(2,1);
RRr21 = RRr21(1);
RRr11 = Aw2foot_RR(1,1);
RRr11 = RRr11(1);
RRr31 = Aw2foot_RR(3,1);
RRr31 = RRr31(1);
RRr32 = Aw2foot_RR(3,2);
RRr32 = RRr32(1);
RRr33 = Aw2foot_RR(3,3);
RRr33 = RRr33(1);
RRPitch = atan2(-RRr31,sqrt(RRr32*RRr32+RRr33*RRr33));
RRYaw = atan2(RRr21,RRr11);
RRRoll = atan2(RRr32,RRr33);

RRFoot = [Aw2foot_RR(1,4);Aw2foot_RR(2,4);Aw2foot_RR(3,4);RRRoll;RRPitch;RRYaw];


F_1 = [FLFoot;RRFoot];
F_2 = [FRFoot;RLFoot];
F_1_fun = SymFunction('F_1_func_fully',F_1,sym_var);
F_2_fun = SymFunction('F_2_func_fully',F_2,sym_var);
export(F_1_fun,'fully_cheating')
export(F_2_fun,'fully_cheating')
%%
j_1 = jacobian(F_1,sym_var);
j_2 = jacobian(F_2,sym_var);

j_1_fun = SymFunction('j_1_func_fully',j_1,sym_var);
j_2_fun = SymFunction('j_2_func_fully',j_2,sym_var);
export(j_1_fun,'fully_cheating')
export(j_2_fun,'fully_cheating')
%%
jj_1 = jacobian(j_1*dq,sym_var)*dq;
jj_2 = jacobian(j_2*dq,sym_var)*dq;

jj_1_fun = SymFunction('jj_1_func_fully',jj_1,sym_var,dsym_var);
jj_2_fun = SymFunction('jj_2_func_fully',jj_2,sym_var,dsym_var);

export(jj_1_fun,'fully_cheating')
export(jj_2_fun,'fully_cheating')

%% compute output function and its derivatives
% the dimension is 12
hc_1 = [q(1);q(2);q(3);q(4);q(5);q(6);FRFoot;RLFoot];
hc_2 = [q(1);q(2);q(3);q(4);q(5);q(6);FLFoot;RRFoot];

hc_1_fun = SymFunction('hc_1_func_fully',hc_1, sym_var);
hc_2_fun = SymFunction('hc_2_func_fully',hc_2, sym_var);

export(hc_1_fun,'fully_cheating')
export(hc_2_fun,'fully_cheating')

j_hc_1 = jacobian(hc_1,sym_var);
j_hc_2 = jacobian(hc_2,sym_var);

j_hc_1_fun = SymFunction('j_hc_1_func_fully',j_hc_1,sym_var);
j_hc_2_fun = SymFunction('j_hc_2_func_fully',j_hc_2,sym_var);

export(j_hc_1_fun,'fully_cheating')
export(j_hc_2_fun,'fully_cheating')

jj_hc_1=jacobian(j_hc_1*dq,sym_var)*dq;
jj_hc_2=jacobian(j_hc_2*dq,sym_var)*dq;

jj_hc_1_fun = SymFunction('jj_hc_1_func_fully',jj_hc_1,sym_var,dsym_var);
jj_hc_2_fun = SymFunction('jj_hc_2_func_fully',jj_hc_2,sym_var,dsym_var);

export(jj_hc_1_fun,'fully_cheating')
export(jj_hc_2_fun,'fully_cheating')
