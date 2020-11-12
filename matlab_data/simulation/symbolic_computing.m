sym_var=SymVariable('q',[18,1]);
dsym_var=SymVariable('dq',[18,1]);

q=[sym_var(1);sym_var(2);sym_var(3);sym_var(4);sym_var(5);sym_var(6);sym_var(7);...
    sym_var(8);sym_var(9);sym_var(10);sym_var(11);sym_var(12);sym_var(13);
    sym_var(14);sym_var(15);sym_var(16);sym_var(17);sym_var(18)];
dq=[dsym_var(1);dsym_var(2);dsym_var(3);dsym_var(4);dsym_var(5);dsym_var(6);...
   dsym_var(7);dsym_var(8);dsym_var(9);dsym_var(10);dsym_var(11);dsym_var(12);
   dsym_var(13);dsym_var(14);dsym_var(15);dsym_var(16);dsym_var(17);dsym_var(18)];
%%

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
%{
Lr21 = Aw2LAnkleRoll(2,1);
Lr21 = Lr21(1);
Lr11 = Aw2LAnkleRoll(1,1);
Lr11 = Lr11(1);
Lr31 = Aw2LAnkleRoll(3,1);
Lr31 = Lr31(1);
Lr32 = Aw2LAnkleRoll(3,2);
Lr32 = Lr32(1);
Lr33 = Aw2LAnkleRoll(3,3);
Lr33 = Lr33(1);
LPitch = atan2(-Lr31,sqrt(Lr32*Lr32+Lr33*Lr33));
LYaw = atan2(Lr21,Lr11);
LRoll = atan2(Lr32,Lr33);
%}
FLFoot = [Aw2foot_FL(1,4);Aw2foot_FL(2,4);Aw2foot_FL(3,4)];

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
Aw2foot = Aw2lower_leg*AFR_lower_leg2foot;

FRFoot = [Aw2foot(1,4);Aw2foot(2,4);Aw2foot(3,4)];

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
Aw2foot = Aw2lower_leg*ARL_lower_leg2foot;

RLFoot = [Aw2foot(1,4);Aw2foot(2,4);Aw2foot(3,4)];

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
Aw2foot = Aw2lower_leg*ARR_lower_leg2foot;

RRFoot = [Aw2foot(1,4);Aw2foot(2,4);Aw2foot(3,4)];

%%
F_1 = [FLFoot;RRFoot];
F_2 = [FRFoot;RLFoot];
F_1_fun = SymFunction('F_1_func',F_1,sym_var);
F_2_fun = SymFunction('F_2_func',F_2,sym_var);
export(F_1_fun,'gen')
export(F_2_fun,'gen')
%%
j_1 = jacobian(F_1,sym_var);
j_2 = jacobian(F_2,sym_var);

j_1_fun = SymFunction('j_1_func',j_1,sym_var);
j_2_fun = SymFunction('j_2_func',j_2,sym_var);
export(j_1_fun,'gen')
export(j_2_fun,'gen')
%%
jj_1 = jacobian(j_1*dq,sym_var)*dq;
jj_2 = jacobian(j_2*dq,sym_var)*dq;

jj_1_fun = SymFunction('jj_1_func',jj_1,sym_var,dsym_var);
jj_2_fun = SymFunction('jj_2_func',jj_2,sym_var,dsym_var);

export(jj_1_fun,'gen')
export(jj_2_fun,'gen')

%% compute output function and its derivatives
% the dimension is 12
hc_1 = [q(1);q(2);q(3);q(4);q(5);q(6);FRFoot;RLFoot];
hc_2 = [q(1);q(2);q(3);q(4);q(5);q(6);FLFoot;RRFoot];

hc1_fun = SymFunction('hc_1_func',hc_1, sym_var);
hc2_fun = SymFunction('hc_2_func',hc_2, sym_var);

export(hc1_fun,'gen')
export(hc2_fun,'gen')

j_hc_1 = jacobian(hc_1,sym_var);
j_hc_2 = jacobian(hc_2,sym_var);

j_hc_1_fun = SymFunction('j_hc_1_func',j_hc_1,sym_var);
j_hc_2_fun = SymFunction('j_hc_2_func',j_hc_2,sym_var);

export(j_hc_1_fun,'gen')
export(j_hc_2_fun,'gen')

jj_hc_1=jacobian(j_hc_1*dq,sym_var)*dq;
jj_hc_2=jacobian(j_hc_2*dq,sym_var)*dq;

jj_hc_1_fun = SymFunction('jj_hc_1_func',jj_hc_1,sym_var,dsym_var);
jj_hc_2_fun = SymFunction('jj_hc_2_func',jj_hc_2,sym_var,dsym_var);

export(jj_hc_1_fun,'gen')
export(jj_hc_2_fun,'gen')
%% compute output function and its derivatives 1D less
hc_1 = [q(1);q(2);q(3);q(4);q(5);FRFoot;RLFoot];
hc_2 = [q(1);q(2);q(3);q(4);q(5);FLFoot;RRFoot];

hc1_fun = SymFunction('hc_reduced_1_func',hc_1, sym_var);
hc2_fun = SymFunction('hc_reduced_2_func',hc_2, sym_var);

export(hc1_fun,'gen')
export(hc2_fun,'gen')

j_hc_1 = jacobian(hc_1,sym_var);
j_hc_2 = jacobian(hc_2,sym_var);

j_hc_1_fun = SymFunction('j_hc_reduced_1_func',j_hc_1,sym_var);
j_hc_2_fun = SymFunction('j_hc_reduced_2_func',j_hc_2,sym_var);

export(j_hc_1_fun,'gen')
export(j_hc_2_fun,'gen')

jj_hc_1=jacobian(j_hc_1*dq,sym_var)*dq;
jj_hc_2=jacobian(j_hc_2*dq,sym_var)*dq;

jj_hc_1_fun = SymFunction('jj_hc_reduced_1_func',jj_hc_1,sym_var,dsym_var);
jj_hc_2_fun = SymFunction('jj_hc_reduced_2_func',jj_hc_2,sym_var,dsym_var);

export(jj_hc_1_fun,'gen')
export(jj_hc_2_fun,'gen')
%% linear output function
hc1_linear = [q(7);q(8);q(9);q(10);q(11);q(12);q(13);q(14);q(15);q(16);q(18)];
hc2_linear = [q(7);q(8);q(9);q(10);q(11);q(12);q(13);q(15);q(16);q(17);q(18)];
hc1_fun = SymFunction('hc1_linear_func',hc1_linear,sym_var);
hc2_fun = SymFunction('hc2_linear_func',hc2_linear,sym_var);

export(hc1_fun,'gen')
export(hc2_fun,'gen')

j_hc1_linear = jacobian(hc1_linear,sym_var);
j_hc2_linear = jacobian(hc2_linear,sym_var);

j_hc1_linear_fun = SymFunction('j_hc1_linear_func',j_hc1_linear,sym_var);
j_hc2_linear_fun = SymFunction('j_hc2_linear_func',j_hc2_linear,sym_var);

export(j_hc1_linear_fun,'gen')
export(j_hc2_linear_fun,'gen')
%%
support_foot = [FLFoot;RLFoot;RRFoot];
j_support_foot = jacobian(support_foot,sym_var);
jj_support_foot = jacobian(j_support_foot*dq,sym_var)*dq;
j_support_foot_fun = SymFunction('j_support_foot_func',j_support_foot,sym_var);
jj_support_foot_fun = SymFunction('jj_support_foot_func',jj_support_foot,sym_var,dsym_var);
export(j_support_foot_fun,'gen_one_leg_swing')
export(jj_support_foot_fun,'gen_one_leg_swing')
%%
support_foot = [FRFoot;FLFoot;RLFoot;RRFoot];
j_support_foot = jacobian(support_foot,sym_var);
jj_support_foot = jacobian(j_support_foot*dq,sym_var)*dq;
j_support_foot_fun = SymFunction('impact_jacobian_func',j_support_foot,sym_var);
export(j_support_foot_fun,'gen_one_leg_swing')