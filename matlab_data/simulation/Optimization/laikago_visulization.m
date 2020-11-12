function laikago_visulization(x)
    %VERIFIED
    figure
    axis(gca,'equal')
    %axis([-0.15 0.8 -0.15 0.15 0 0.3])
    xlabel('x')
    ylabel('y')
    zlabel('z')
    view(32,47)
    %view(90,90)
    %view(90,0)  %z-y plane frontal
    view(0,0)   %x-z plane sagital 

    
    q=x(1:18);

    base = [q(1);q(2);q(3)];
    [FLHip,FLupper,FLlower,FLFoot]=FL_position(q);
    [FRHip,FRupper,FRlower,FRFoot]=FR_position(q);
    [RLHip,RLupper,RLlower,RLFoot]=RL_position(q);
    [RRHip,RRupper,RRlower,RRFoot]=RR_position(q);


    %LFoot

    %subplot(2,1,1)
   % view(0,90)
    %axis([-0.2 0.2 -0.3 0.3 -0.5 0.4])
    axis([-0.5 0.5 -0.5 0.5 -0.01 0.5])
    xlabel('x')
    ylabel('y')
    zlabel('z')
    base2FLhip = line([base(1),FLHip(1)],[base(2),FLHip(2)],[base(3),FLHip(3)],'Color','blue','LineWidth',3);
    base2FRhip = line([base(1),FRHip(1)],[base(2),FRHip(2)],[base(3),FRHip(3)],'Color','green','LineWidth',3);
    base2RLhip = line([base(1),RLHip(1)],[base(2),RLHip(2)],[base(3),RLHip(3)],'Color','yellow','LineWidth',3);
    base2RRhip = line([base(1),RRHip(1)],[base(2),RRHip(2)],[base(3),RRHip(3)],'Color','red','LineWidth',3);

    FLhip2Lupper = line([FLHip(1),FLupper(1)],[FLHip(2),FLupper(2)],[FLHip(3),FLupper(3)],'Color','blue','LineWidth',3);
    FRhip2Rupper = line([FRHip(1),FRupper(1)],[FRHip(2),FRupper(2)],[FRHip(3),FRupper(3)],'Color','green','LineWidth',3);
    RLhip2Lupper = line([RLHip(1),RLupper(1)],[RLHip(2),RLupper(2)],[RLHip(3),RLupper(3)],'Color','yellow','LineWidth',3);
    RRhip2Rupper = line([RRHip(1),RRupper(1)],[RRHip(2),RRupper(2)],[RRHip(3),RRupper(3)],'Color','red','LineWidth',3);

    FLupper2lower = line([FLupper(1),FLlower(1)],[FLupper(2),FLlower(2)],[FLupper(3),FLlower(3)],'Color','blue','LineWidth',3);
    FRupper2lower = line([FRupper(1),FRlower(1)],[FRupper(2),FRlower(2)],[FRupper(3),FRlower(3)],'Color','green','LineWidth',3);
    RLupper2lower = line([RLupper(1),RLlower(1)],[RLupper(2),RLlower(2)],[RLupper(3),RLlower(3)],'Color','yellow','LineWidth',3);
    RRupper2lower = line([RRupper(1),RRlower(1)],[RRupper(2),RRlower(2)],[RRupper(3),RRlower(3)],'Color','red','LineWidth',3);


    FLlower2LFoot = line([FLlower(1),FLFoot(1)],[FLlower(2),FLFoot(2)],[FLlower(3),FLFoot(3)],'Color','blue','LineWidth',3);
    FRlower2RFoot = line([FRlower(1),FRFoot(1)],[FRlower(2),FRFoot(2)],[FRlower(3),FRFoot(3)],'Color','green','LineWidth',3);
    RLlower2LFoot = line([RLlower(1),RLFoot(1)],[RLlower(2),RLFoot(2)],[RLlower(3),RLFoot(3)],'Color','yellow','LineWidth',3);
    RRlower2RFoot = line([RRlower(1),RRFoot(1)],[RRlower(2),RRFoot(2)],[RRlower(3),RRFoot(3)],'Color','red','LineWidth',3);

    %subplot(2,1,2)
    %view(0,90)
   % axis([-0.7 0.7 -0.7 0.7 -0.7 0.7])
    xlabel('x')
    ylabel('y')
    zlabel('z')
    base2FLhip2 = line([base(1),FLHip(1)],[base(2),FLHip(2)],[base(3),FLHip(3)],'Color','blue','LineWidth',3);
    base2FRhip2 = line([base(1),FRHip(1)],[base(2),FRHip(2)],[base(3),FRHip(3)],'Color','green','LineWidth',3);
    base2RLhip2 = line([base(1),RLHip(1)],[base(2),RLHip(2)],[base(3),RLHip(3)],'Color','yellow','LineWidth',3);
    base2RRhip2 = line([base(1),RRHip(1)],[base(2),RRHip(2)],[base(3),RRHip(3)],'Color','red','LineWidth',3);

    FLhip2Lupper2 = line([FLHip(1),FLupper(1)],[FLHip(2),FLupper(2)],[FLHip(3),FLupper(3)],'Color','blue','LineWidth',3);
    FRhip2Rupper2 = line([FRHip(1),FRupper(1)],[FRHip(2),FRupper(2)],[FRHip(3),FRupper(3)],'Color','green','LineWidth',3);
    RLhip2Lupper2 = line([RLHip(1),RLupper(1)],[RLHip(2),RLupper(2)],[RLHip(3),RLupper(3)],'Color','yellow','LineWidth',3);
    RRhip2Rupper2 = line([RRHip(1),RRupper(1)],[RRHip(2),RRupper(2)],[RRHip(3),RRupper(3)],'Color','red','LineWidth',3);

    FLupper2lower2 = line([FLupper(1),FLlower(1)],[FLupper(2),FLlower(2)],[FLupper(3),FLlower(3)],'Color','blue','LineWidth',3);
    FRupper2lower2 = line([FRupper(1),FRlower(1)],[FRupper(2),FRlower(2)],[FRupper(3),FRlower(3)],'Color','green','LineWidth',3);
    RLupper2lower2 = line([RLupper(1),RLlower(1)],[RLupper(2),RLlower(2)],[RLupper(3),RLlower(3)],'Color','yellow','LineWidth',3);
    RRupper2lower2 = line([RRupper(1),RRlower(1)],[RRupper(2),RRlower(2)],[RRupper(3),RRlower(3)],'Color','red','LineWidth',3);


    FLlower2LFoot2 = line([FLlower(1),FLFoot(1)],[FLlower(2),FLFoot(2)],[FLlower(3),FLFoot(3)],'Color','blue','LineWidth',3);
    FRlower2RFoot2 = line([FRlower(1),FRFoot(1)],[FRlower(2),FRFoot(2)],[FRlower(3),FRFoot(3)],'Color','green','LineWidth',3);
    RLlower2LFoot2 = line([RLlower(1),RLFoot(1)],[RLlower(2),RLFoot(2)],[RLlower(3),RLFoot(3)],'Color','yellow','LineWidth',3);
    RRlower2RFoot2 = line([RRlower(1),RRFoot(1)],[RRlower(2),RRFoot(2)],[RRlower(3),RRFoot(3)],'Color','red','LineWidth',3);



   
   
    
end
%%
function [FLHip,FLupper,FLlower,FLFoot]=FL_position(q)
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
    Ab2FL_hip_p = [1 0 0  0.21935;
               0 1 0  0.0875;
               0 0 1  0;
               0 0 0  1];
AFL_hip_p2FL_hip = [1   0          0         0;
                    0 cos(q(10)) -sin(q(10)) 0;
                    0 sin(q(10))  cos(q(10)) 0;
                    0   0          0         1];
Ab2FL_hip = Ab2FL_hip_p*AFL_hip_p2FL_hip;

AFL_hip2upper_leg_p = [1 0 0  0.0;
                       0 1 0  0.037;
                       0 0 1  0;
                       0 0 0  1];
Aupper_leg_p2upper_leg = [cos(q(11)) 0 sin(q(11)) 0;
                            0       1   0       0;
                        -sin(q(11))  0 cos(q(11)) 0;
                            0       0   0        1];
AFL_hip2upper_leg = AFL_hip2upper_leg_p*Aupper_leg_p2upper_leg;

AFL_upper_leg2lower_leg_p = [1 0 0  0;
                             0 1 0  0;
                             0 0 1 -0.25;
                             0 0 0  1];
AFL_lower_leg_p2lower_leg = [cos(q(12)) 0 sin(q(12)) 0;
                               0       1   0       0;
                           -sin(q(12))  0 cos(q(12)) 0;
                               0       0   0        1];
AFL_upper_leg2lower_leg = AFL_upper_leg2lower_leg_p*AFL_lower_leg_p2lower_leg;

AFL_lower_leg2foot = [1 0 0  0.13775;
                      0 1 0  0;
                      0 0 1 -0.2386; %taken from mesh file
                      0 0 0  1];
    Aw2hip = Aw2b*Ab2FL_hip;
    Aw2upper_leg = Aw2hip*AFL_hip2upper_leg;
    Aw2lower_leg = Aw2upper_leg*AFL_upper_leg2lower_leg;
    Aw2foot = Aw2lower_leg*AFL_lower_leg2foot;
    FLHip = [Aw2hip(1,4);Aw2hip(2,4);Aw2hip(3,4)];
    FLupper = [Aw2upper_leg(1,4);Aw2upper_leg(2,4);Aw2upper_leg(3,4)];
    FLlower = [Aw2lower_leg(1,4);Aw2lower_leg(2,4);Aw2lower_leg(3,4)];
    FLFoot = [Aw2foot(1,4);Aw2foot(2,4);Aw2foot(3,4)];
end
function [FRHip,FRupper,FRlower,FRFoot]=FR_position(q)
    % world frame to base frame
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
    %% base frame to FR
    Ab2FR_hip_p = [1 0 0  0.21935;
               0 1 0  -0.0875;
               0 0 1  0;
               0 0 0  1];
AFR_hip_p2FR_hip = [1   0          0         0;
                    0 cos(q(7)) -sin(q(7))   0;
                    0 sin(q(7))  cos(q(7))   0;
                    0   0          0         1];
Ab2FR_hip = Ab2FR_hip_p*AFR_hip_p2FR_hip;

AFR_hip2upper_leg_p = [1 0 0  0;
                       0 1 0  -0.0370;
                       0 0 1  0;
                       0 0 0  1];
Aupper_leg_p2upper_leg = [cos(q(8)) 0 sin(q(8)) 0;
                            0       1   0       0;
                        -sin(q(8))  0 cos(q(8)) 0;
                            0       0   0       1];
                        
AFR_hip2upper_leg = AFR_hip2upper_leg_p*Aupper_leg_p2upper_leg;

AFR_upper_leg2lower_leg_p = [1 0 0  0.0;
                             0 1 0  0.0;
                             0 0 1 -0.250;
                             0 0 0  1];
AFR_lower_leg_p2lower_leg =[cos(q(9)) 0 sin(q(9)) 0;
                              0       1   0       0;
                          -sin(q(9))  0 cos(q(9)) 0;
                              0       0   0       1];
AFR_upper_leg2lower_leg = AFR_upper_leg2lower_leg_p*AFR_lower_leg_p2lower_leg;

AFR_lower_leg2foot = [1 0 0  0.13775;
                      0 1 0  0;
                      0 0 1 -0.2386; %taken from mesh file
                      0 0 0  1];
    Aw2hip = Aw2b*Ab2FR_hip;
    Aw2upper_leg = Aw2hip*AFR_hip2upper_leg;
    Aw2lower_leg = Aw2upper_leg*AFR_upper_leg2lower_leg;
    Aw2foot = Aw2lower_leg*AFR_lower_leg2foot;
    FRHip = [Aw2hip(1,4);Aw2hip(2,4);Aw2hip(3,4)];
    FRupper = [Aw2upper_leg(1,4);Aw2upper_leg(2,4);Aw2upper_leg(3,4)];
    FRlower = [Aw2lower_leg(1,4);Aw2lower_leg(2,4);Aw2lower_leg(3,4)];
    FRFoot = [Aw2foot(1,4);Aw2foot(2,4);Aw2foot(3,4)];
end
function [RRHip,RRupper,RRlower,RRFoot]=RR_position(q)
    % world frame to base frame
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
    %% base frame to RR
    Ab2RR_hip_p = [1 0 0  -0.21935;
               0 1 0  -0.0875;
               0 0 1   0;
               0 0 0   1];
ARR_hip_p2RR_hip = [1 0          0         0;
                    0 cos(q(13)) -sin(q(13)) 0;
                    0 sin(q(13))  cos(q(13)) 0;
                    0 0          0         1];
Ab2RR_hip = Ab2RR_hip_p*ARR_hip_p2RR_hip;

ARR_hip2upper_leg_p = [1 0 0  0;
                       0 1 0  -0.0370;
                       0 0 1  0;
                       0 0 0  1];
Aupper_leg_p2upper_leg = [cos(q(14)) 0 sin(q(14)) 0;
                             0       1   0       0;
                        -sin(q(14))  0 cos(q(14)) 0;
                             0       0   0        1]; 
ARR_hip2upper_leg = ARR_hip2upper_leg_p*Aupper_leg_p2upper_leg;

ARR_upper_leg2lower_leg_p = [1 0 0  0;
                             0 1 0  0;
                             0 0 1 -0.250;
                             0 0 0  1];
ARR_lower_leg_p2lower_leg = [cos(q(15)) 0 sin(q(15)) 0;
                                0       1   0        0;
                            -sin(q(15)) 0 cos(q(15)) 0;
                                0       0   0        1];
ARR_upper_leg2lower_leg = ARR_upper_leg2lower_leg_p*ARR_lower_leg_p2lower_leg;

ARR_lower_leg2foot = [1 0 0  0.13775;
                      0 1 0  0;
                      0 0 1 -0.2386; %taken from mesh file
                      0 0 0  1];
    Aw2hip = Aw2b*Ab2RR_hip;
    Aw2upper_leg = Aw2hip*ARR_hip2upper_leg;
    Aw2lower_leg = Aw2upper_leg*ARR_upper_leg2lower_leg;
    Aw2foot = Aw2lower_leg*ARR_lower_leg2foot;
    RRHip = [Aw2hip(1,4);Aw2hip(2,4);Aw2hip(3,4)];
    RRupper = [Aw2upper_leg(1,4);Aw2upper_leg(2,4);Aw2upper_leg(3,4)];
    RRlower = [Aw2lower_leg(1,4);Aw2lower_leg(2,4);Aw2lower_leg(3,4)];
    RRFoot = [Aw2foot(1,4);Aw2foot(2,4);Aw2foot(3,4)];
end
function [RLHip,RLupper,RLlower,RLFoot]=RL_position(q)
    % world frame to base frame
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
    %% base frame to RL
    Ab2RL_hip_p = [1 0 0  -0.21935;
               0 1 0   0.0875;
               0 0 1  0;
               0 0 0  1];
ARL_hip_p2RL_hip = [1   0          0         0;
                    0 cos(q(16)) -sin(q(16)) 0;
                    0 sin(q(16))  cos(q(16)) 0;
                    0   0          0         1];
Ab2RL_hip = Ab2RL_hip_p*ARL_hip_p2RL_hip;

ARL_hip2upper_leg_p = [1 0 0  0;
                       0 1 0  0.0370;
                       0 0 1  0;
                       0 0 0  1];
Aupper_leg_p2upper_leg = [cos(q(17)) 0 sin(q(17)) 0;
                             0       1   0       0;
                        -sin(q(17))  0 cos(q(17)) 0;
                             0       0   0        1];  
ARL_hip2upper_leg = ARL_hip2upper_leg_p*Aupper_leg_p2upper_leg;

ARL_upper_leg2lower_leg_p = [1 0 0  0;
                             0 1 0  0;
                             0 0 1 -0.250;
                             0 0 0  1];
ARL_lower_leg_p2lower_leg = [cos(q(18)) 0 sin(q(18)) 0;
                                0       1   0        0;
                            -sin(q(18)) 0 cos(q(18)) 0;
                                0       0   0        1]; 
ARL_upper_leg2lower_leg = ARL_upper_leg2lower_leg_p*ARL_lower_leg_p2lower_leg;

ARL_lower_leg2foot = [1 0 0  0.13775;
                      0 1 0  0;
                      0 0 1 -0.2386; %taken from mesh file
                      0 0 0  1];
    Aw2hip = Aw2b*Ab2RL_hip;
    Aw2upper_leg = Aw2hip*ARL_hip2upper_leg;
    Aw2lower_leg = Aw2upper_leg*ARL_upper_leg2lower_leg;
    Aw2foot = Aw2lower_leg*ARL_lower_leg2foot;
    RLHip = [Aw2hip(1,4);Aw2hip(2,4);Aw2hip(3,4)];
    RLupper = [Aw2upper_leg(1,4);Aw2upper_leg(2,4);Aw2upper_leg(3,4)];
    RLlower = [Aw2lower_leg(1,4);Aw2lower_leg(2,4);Aw2lower_leg(3,4)];
    RLFoot = [Aw2foot(1,4);Aw2foot(2,4);Aw2foot(3,4)];
end