function [u,s]=feedback_linearization(t,x,D,c_overall,B_overall,foot_index,Alpha,current_stance_foot_position,t_end_of_previous_step)
    
    global y_global dy_global  dphi_global

    want_bezier=1;


    q=x(1:18);
    dq=x(19:36);
   
 

    if want_bezier==0
        hc = [q(7);q(8);q(9);q(10);q(11);q(12);q(13);q(14);q(16);q(17);q(18)]; % leg 1 and 3 are the stance legs
        hc_j = [zeros(11,6),[eye(8);zeros(3,8)],zeros(11,1),[zeros(8,3);eye(3)]]; %11X18 matrix
        hc_jj = zeros(11,1);
        phi=zeros(11,1);
        
        %significance of parameters & going without Bezier?
%         phi(3)=0.363470182492382;
%         phi(4)=pi/2;
% 
%         
%         phi(7)=0.2483;
%         phi(8)=-0.1146;
%         phi(9)=0.1;
%         
%         phi(10)=-0.189;
%         phi(11)=0.1146;
%         %phi(12)=0.1;

        %phi=[0.1378 -0.0538 0.2785 -0.0035 0.0049 0.1278 -0.1038 0.0027 0.0032 0.0028 0.0025]';
        %phi=[0 0 0 0 0 0 0 0.03 -0.08 0.03 -pi/5]';
        %phi=[0 0 0 0 0 0 0 0 0.03 -0.08 0.03]';
        %phi=[0 0 0 0 0 0 0.03 -0.08 0.03 -pi/5 pi/9]';
        dphi=zeros(11,1);
        pphipq = zeros(11,18);
        ddphi=zeros(11,1);
        
    elseif want_bezier==1
        
         
        if foot_index == 1
            hc = hc_1_func(q)-[zeros(6,1);current_stance_foot_position(1);zeros(5,1)];  % 12x1
            hc_j = j_hc_1_func(q);
            hc_jj = jj_hc_1_func(q,dq);
            
            theta=q(1)-current_stance_foot_position(1)+0.08;
            
            Alpha1=Alpha(1,:);
        elseif foot_index == 2
            hc = hc_2_func(q)-[zeros(6,1);current_stance_foot_position(7);zeros(5,1)];  % 12x1
            hc_j = j_hc_2_func(q);
            hc_jj = jj_hc_2_func(q,dq);
            
            theta=q(1)-current_stance_foot_position(7)-0.36;
            
            Alpha1=Alpha(2,:);
            
        elseif foot_index == 3
            hc = hc_3_func(q)-[zeros(6,1);current_stance_foot_position(1);zeros(5,1)];  % 12x1
            hc_j = j_hc_3_func(q);
            hc_jj = jj_hc_3_func(q,dq);
            
            theta=q(1)-current_stance_foot_position(1)+0.08;
            
            Alpha1=Alpha(3,:);            
  
        elseif foot_index == 4
            hc = hc_4_func(q)-[zeros(6,1);current_stance_foot_position(7);zeros(5,1)];  % 12x1
            hc_j = j_hc_4_func(q);
            hc_jj = jj_hc_4_func(q,dq);

            theta=q(1)-current_stance_foot_position(7)-0.36;
            
            Alpha1=Alpha(4,:);            
            
        end

% Re check and verify

        %theta=q(1)-current_stance_foot_position(1)+0.22;
        %theta = q(1);
        dtheta = dq(1);


        %chosse swing foot to normalize theta
        % 9 curves in total
        theta_plus = 0;%-0.03;
        theta_minus = 0.025;
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
            phi=[base_desired(1);ph];
        

        dphi=[dbase_desired(1);...
            coef/ds_dtheta*dph*dtheta];

        pphipq = [[0;dph*coef/ds_dtheta],zeros(12,17)];
        %pphipq = zeros(12,18);
        ddphi=[ddbase_desired(1);...
            coef/ds_dtheta*(ddph*coef/ds_dtheta*dtheta^2)];
        %dphi=zeros(12,1);
        %ddphi=zeros(12,1);
    else
        printf('omg')
    end
    
    
    


    y=hc-phi;
    y_dot=hc_j*dq-dphi;
    %hc_j*dq
    
    %s_overall=[s_overall;s];

    Kp=25^2*eye(12,12);
    Kd=50*eye(12,12);
    v=-Kp*y-Kd*y_dot;
    %norm(v)
    %hc_j

    %u=(hc_j/(D)*B_coupled)\(v+hc_j/(D)*C_coupled-hc_jj+ddphi);
    
    u=((hc_j-pphipq)/(D)*B_overall)\(v+(hc_j-pphipq)/(D)*c_overall-hc_jj+ddphi);

    %y_global=[y_global;y'];
    %dy_global=[dy_global;y_dot'];
    %dphi_global = [dphi_global;[dphi',s,foot_index,x']];
end