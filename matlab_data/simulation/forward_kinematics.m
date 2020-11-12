function feet_position = forward_kinematics(q)
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
    Aw2hip = Aw2b*Ab2FL_hip;
    Aw2upper_leg = Aw2hip*AFL_hip2upper_leg;
    Aw2lower_leg = Aw2upper_leg*AFL_upper_leg2lower_leg;
    Aw2foot = Aw2lower_leg*AFL_lower_leg2foot;

    FLFoot = [Aw2foot(1,4);Aw2foot(2,4);Aw2foot(3,4)];
    
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
    Aw2foot = Aw2lower_leg*ARL_lower_leg2foot;

    RLFoot = [Aw2foot(1,4);Aw2foot(2,4);Aw2foot(3,4)];

    
    feet_position = [FLFoot;FRFoot;RLFoot;RRFoot];
end