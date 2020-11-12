function [u,s]=feedback_linearization_linear(t,x,D,c_overall,B_overall,foot_index,Alpha,current_stance_foot_position,t_end_of_previous_step)
    
    global y_global dy_global  dphi_global

    want_bezier=1;


    q=x(1:18);
    dq=x(19:36);
   
 

    if want_bezier==0
        hc = [q(7);q(8);q(9);q(10);q(11);q(12);q(13);q(14);q(15);q(16);q(17)];
        hc_j = [zeros(11,6),eye(11),zeros(11,1)];
        hc_jj = zeros(11,1);
        phi=zeros(11,1);
        phi(3)=0.363470182492382;
        phi(4)=pi/2;

        
        phi(7)=0.2483;
        phi(8)=-0.1146;
        phi(9)=0.1;
        
        phi(10)=-0.189;
        phi(11)=0.1146;
        %phi(12)=0.1;

        %phi=[0.1378 -0.0538 0.2785 -0.0035 0.0049 0.1278 -0.1038 0.0027 0.0032 0.0028 0.0025]';
        %phi=[0 0 0 0 0 0 0 0.03 -0.08 0.03 -pi/5]';
        %phi=[0 0 0 0 0 0 0 0 0.03 -0.08 0.03]';
        %phi=[0 0 0 0 0 0 0.03 -0.08 0.03 -pi/5 pi/9]';
        dphi=zeros(11,1);
        pphipq = zeros(11,18);
        ddphi=zeros(11,1);
    elseif want_bezier==1
        
         
        if foot_index == -1
            hc = hc1_linear_func(q);
            hc_j = j_hc1_linear_func(q);
            hc_jj = zeros(11,1);
            Alpha1=Alpha(1,:);
        elseif foot_index == 1
            hc = hc2_linear_func(q);
            hc_j = j_hc2_linear_func(q);
            hc_jj = zeros(11,1);
            Alpha1=Alpha(2,:);
        end



        theta=q(1)-current_stance_foot_position(1)+0.22;
        %theta = q(1);
        dtheta = dq(1);


        %chosse swing foot to normalize theta
        % 9 curves in total
        theta_plus = -0.03;
        theta_minus = 0.03;
        ds_dtheta=theta_minus-theta_plus;
        coef = 1;
        s=(coef*theta-theta_plus)/ds_dtheta;
        %s = 0;
        %[ph,dph,ddph]=laikago_new_Bezier_6th(Alpha1,s);
        [ph,dph,ddph]=laikago_new_Bezier_6th_reduced(Alpha1,s);
        %a=H_left_foot_stance_func(q);
        %actual = a(6)-current_stance_foot_position(1);
        %reference = ph(4);

        [base_desired,dbase_desired,ddbase_desired]=desired_base_trajectory(t,t_end_of_previous_step);
            phi=[base_desired(1);base_desired(2);ph];
        

        dphi=[dbase_desired(1);dbase_desired(2);...
            coef/ds_dtheta*dph*dtheta];

        pphipq = [[0;0;dph*coef/ds_dtheta],[zeros(11,17)]];
        %pphipq = zeros(12,18);
        ddphi=[ddbase_desired(1);ddbase_desired(2);...
            coef/ds_dtheta*(ddph*coef/ds_dtheta*dtheta^2)];
        %dphi=zeros(12,1);
        %ddphi=zeros(12,1);
    else
        printf('hahahaha')
    end
    
    
    


    y=hc-phi;
    y_dot=hc_j*dq-dphi;
    %hc_j*dq
    


    %s_overall=[s_overall;s];
    
 

    Kp=25^2*eye(11,11);
    Kd=50*eye(11,11);
    v=-Kp*y-Kd*y_dot;
    %norm(v)
    %hc_j

    %u=(hc_j/(D)*B_coupled)\(v+hc_j/(D)*C_coupled-hc_jj+ddphi);
    u=((hc_j-pphipq)/(D)*B_overall)\(v+(hc_j-pphipq)/(D)*c_overall-hc_jj+ddphi);

    %y_global=[y_global;y'];
    %dy_global=[dy_global;y_dot'];
    %dphi_global = [dphi_global;[dphi',s,foot_index,x']];
end