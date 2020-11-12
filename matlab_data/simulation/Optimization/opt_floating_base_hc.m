function [F,StanceFeet]= opt_floating_base_hc(q,desired_value, foot_index)

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

SF_1 = FLFoot;
SF_2 = RRFoot;
SF_3 = FRFoot;
SF_4 = RLFoot;

%%
 if foot_index == 1 % FL foot is swing foot
        SwingFoot = SF_1;
        StanceFeet = F_1;

    elseif foot_index == 2 % RR foot is swing foot
        SwingFoot = SF_2;
        StanceFeet = F_2;
    elseif foot_index == 3 % FR foot is swing foot
        SwingFoot = SF_3;
        StanceFeet = F_3;
        
    elseif foot_index == 4 % RR foot is swing foot
        SwingFoot = SF_4;
        StanceFeet = F_4;       
 end
    hc=[q(1);q(2);q(3);q(4);q(5);q(6);SwingFoot; StanceFeet];
    F=hc-desired_value;
end
        
    
    