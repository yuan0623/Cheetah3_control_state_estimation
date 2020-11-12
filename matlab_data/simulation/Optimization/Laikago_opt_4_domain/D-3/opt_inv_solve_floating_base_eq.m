function [q_error,COP_,q_sol_whole_step,Fr,dq_sol_whole_step,phi_overall]...
    =opt_inv_solve_floating_base_eq(options,Alpha1,foot_index,q0,StanceFeet)
    
   %q0=[0, 0, 0.27, 1.5708, 0, 1.5708, 0.04, 0.2, -1.26, -0.04, 0.2, -1.26, 0.04,0.2, -1.26, -0.04, 0.2, -1.26];
    %q0=[0, 0, 0.36, 1.5708, 0, 1.5708, 0.04, -0.125, -0.6, -0.04, -0.125, -0.6, 0.04,-0.125, -0.6, -0.04, -0.125,-0.6]; %0.0143
    %q0=[0, 0, 0.36, 1.5708, 0, 1.5708, 0.04, -0.16, -0.6, -0.04, -0.16, -0.6, 0.04,-0.125, -0.6, -0.04, -0.125,-0.6];
    %q0=[0, 0, 0.36, 1.5708, 0, 1.5708, 0.04, -0.125, -0.6, 0.0416, -0.125, -0.6, 0.04,-0.125, -0.6, 0.04, -0.125,-0.6];
    %q0=[0, 0, 0.356, 1.5708, 0, 1.5708, 0.04, -0.25, -0.6, 0.0416, -0.25, -0.6, 0.04,-0.25, -0.6, 0.04, -0.25,-0.6];
    % below line decide how many points in each step
    num_points = length(linspace(0,1,50));
    COP_=0;
   % q_fval_overall=zeros(num_of_point,38);
    q_error = zeros(num_points,1);
    phi_overall=zeros(num_points,18);
    Fr = zeros(num_points,9);
    q_sol_whole_step = zeros(num_points,18);
    dq_sol_whole_step = zeros(num_points,18);
    %deviation=zeros(num_points,1);
    i=1;
    
    %COP_ = zeros(num_points,3);
    
    
    theta_plus = 0+(foot_index-1)*(Alpha1(42)-Alpha1(36))/4;
    theta_minus = (Alpha1(42)-Alpha1(36))/4 +(foot_index-1)*(Alpha1(42)-Alpha1(36))/4;%0.025;%base motion after each leg movement
    
    %StanceFeet=F_1_func(q0); %change it
    for s=linspace(0,1,num_points)

        theta = s*(theta_minus-theta_plus)+theta_plus;
        %stance_foot_pose=[0;0.138;0;0;0;0];
        q1 = theta;
        
        %[~,StanceFeet]= opt_floating_base_hc(q0,q0, foot_index);

        [ph,dph,~]=laikago_new_Bezier_6th(Alpha1,s);


        phi = [q1;ph;StanceFeet]-[zeros(2,1);0.356; pi/2; 0; pi/2; 0 ; zeros(11,1)]; %Desired value
        phi_overall(i,:) = phi';

        
        tic
        [q_sol,q_fval]=fsolve(@(q) opt_floating_base_hc(q,phi,foot_index),q0,options);
        [~,StanceFeet]= opt_floating_base_hc(q_sol,phi, foot_index); %check
        toc
        q_fval_overall(i,:)=q_fval';
        q_fval = norm(q_fval);
        q_error(i)=q_fval;
        q0=q_sol;
       
        %% below is used to calculate the velocity of the robot in joint space
        
        dtheta = 0.02;
        
        ds_dtheta=(theta_minus-theta_plus);% ds_dtheta=1/(theta_minus-theta_plus) (This part is taken care while using ds_theta;
        stance_foot_velocity = zeros(9,1);

        %dphi = [1/ds_dtheta*dph(1)*dtheta;dtheta;1/ds_dtheta*dph(2)*dtheta;stance_foot_velocity;stance_foot_velocity];
        dphi = [dtheta;(1/ds_dtheta)*dph*dtheta; stance_foot_velocity];% hd_dot
        %[dq_sol,dq_fval]=lsqnonlin(@(dq) opt_floating_base_dhc(dq,q_sol,dphi),dq0,dq_lb,dq_ub,options);
        
        if foot_index==1
            hc_j = j_hc_opt1_func(q_sol); % Jacobian calculated from symbolic computation using frost
        
        elseif foot_index==2
            hc_j = j_hc_opt2_func(q_sol);
        
        elseif foot_index==3
            hc_j = j_hc_opt3_func(q_sol);  
        
        elseif foot_index==4
            hc_j = j_hc_opt4_func(q_sol);   
        
        end
        
        dq_sol=hc_j\dphi; %dphi=hd_dot

        q_sol_whole_step(i,:)=q_sol;
        dq_sol_whole_step(i,:)=dq_sol;
       
        
       % [~, dev]= opt_floating_base_hc(q_sol,0);
        %dq0 = dq_sol;
       % deviation(i,1) =dev;
        
        %% calculate COP

        [COP1,Fr1] = opt_dynamics(s,q_sol,dq_sol,Alpha1,foot_index);
        
        Fr(i,:)= Fr1';
        
        %COP_(i,:) = [COP1,0];

        %% update the loop
        i=i+1;
        
    end
    %error = norm(q_error)+norm(dq_error);
     
end









