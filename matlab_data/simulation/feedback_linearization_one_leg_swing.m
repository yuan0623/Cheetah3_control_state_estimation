function [u,s]=feedback_linearization_one_leg_swing(t,x,D,c_overall,B_overall,foot_index,Alpha,current_stance_foot_position,t_end_of_previous_step)
    
    global y_global dy_global  dphi_global

    want_bezier=1;


    q=x(1:18);
    dq=x(19:36);
   
 

    if want_bezier==0
        hc = [q(7);q(8);q(9);q(10);q(11);q(12);q(13);q(14);q(15);q(16);q(17);q(18)];
        hc_j = [zeros(12,6),eye(12)];
        hc_jj = zeros(12,1);
        [swing_desired,dswing_desired,ddswing_desired]=desired_swing_leg_trajectory(t,t_end_of_previous_step);
        phi = [-0.04954306;
            0.54492796;
            swing_desired;
            0.04883778;
            0.64441268;
            -1.19089507;
            -0.04883834;
            0.64491817;
            -1.19419484-0.2;
            0.04925755;
            0.54589647;
            -1.1953619-0.2];
        
        dphi = [0;
                0;
                dswing_desired;
                0;
                0;
                0;
                0;
                0;
                0;
                0;
                0;
                0];

        ddphi = [0;
                0;
                ddswing_desired;
                0;
                0;
                0;
                0;
                0;
                0;
                0;
                0;
                0];
    elseif want_bezier==1
        hc = [q(7);q(8);q(9);q(10);q(11);q(14);q(15);q(16);q(18)];
        hc_j = zeros(9,18);
        hc_j(1,7)=1;
        hc_j(2,8)=1;
        hc_j(3,9)=1;
        hc_j(4,10)=1;
        hc_j(5,11)=1;
        hc_j(6,14)=1;
        hc_j(7,15)=1;
        hc_j(8,16)=1;
        hc_j(9,18)=1;
        hc_jj = zeros(9,1);
        [swing_desired,dswing_desired,ddswing_desired]=desired_swing_leg_trajectory(t,t_end_of_previous_step);
        phi = [-0.04954306
            0.54492796;
            swing_desired;
            0.04883778;
            0.64441268;
            0.64491817;
            -1.19419484-0.2;
            0.04925755;
            -1.1953619-0.2];
        
        dphi = [0;
                0;
                dswing_desired;
                0;
                0;
                0;
                0;
                0;
                0];

        ddphi = [0;
                0;
                ddswing_desired;
                0;
                0;
                0;
                0;
                0;
                0];
      
    else
        printf('hahahaha')
    end
    
    
    


    y=hc-phi;
    y_dot=hc_j*dq-dphi;


    Kp=25^2*eye(9,9);
    Kd=50*eye(9,9);
    v=-Kp*y-Kd*y_dot;


    %u=(hc_j/(D)*B_coupled)\(v+hc_j/(D)*C_coupled-hc_jj+ddphi);
    %u=((hc_j-pphipq)/(D)*B_overall)\(v+(hc_j-pphipq)/(D)*c_overall-hc_jj+ddphi);
    u=((hc_j)/(D)*B_overall)\(v+(hc_j)/(D)*c_overall-hc_jj+ddphi);
    %y_global=[y_global;y'];
    %dy_global=[dy_global;y_dot'];
    %dphi_global = [dphi_global;[dphi',s,foot_index,x']];
end