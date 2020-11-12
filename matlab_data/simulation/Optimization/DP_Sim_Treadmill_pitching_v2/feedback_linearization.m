function [u,s,uc,uv,ucm]=feedback_linearization(t,x,D,c_overall,B_overall,foot_index,Alpha,current_stance_foot_position,t_end_of_previous_step)
    
    global y_global dy_global  step_no offset t_global torque total_steps
  
    t_global=[t_global;t+t_end_of_previous_step];
    t_current = t_global(end);
    %% Platform position velocity and acceleration
    v_tm = 0.18/2; step_length =0.18;    
    th_0=5*pi/180; w=2*pi/2;   
    th =  th_0*sin(w*t_global(end));
    dth_dt = th_0*w*cos(w*t_global(end));
    %th_ref =  th_0*sin(w*t_ref);
    
%     p_contact =zeros(9,1);
%     d_contact = zeros(9,1);
%     dd_contact = zeros(9,1);
%     z_contact = zp_0*sin(w*t_global(end));
%     p_contact(3:3:9)= z_contact;
%     vz_contact = w*zp_0*cos(w*t_global(end));
%     d_contact(3:3:9)= vz_contact;
%     dd_contact(3)=-w*w*zp_0*sin(w*t_global(end));
%     dd_contact(6)=-w*w*zp_0*sin(w*t_global(end));
%     dd_contact(9)=-w*w*zp_0*sin(w*t_global(end));%double derivative of contact points
     StanceFeet = current_stance_foot_position;
    
    %%
    
    want_bezier=1;


    q=x(1:18);
    dq=x(19:36);
    q1 = q(1);
   
 

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
            %SF=SF_1_func(q);
            hc = [hc_1_func(q)]-[zeros(2,1); 0 ; 0; 0; 0; zeros(2,1);0];  % 9x1 -zp*sin(w*t_global(end))
            hc_j = j_hc_1_func(q);
            hc_jj = jj_hc_1_func(q,dq);
            Alpha1=Alpha(1,:);
            theta_plus = (Alpha1(36)-StanceFeet(1))/4;
            theta_minus = (Alpha1(42)-StanceFeet(1)+v_tm*0.25*2)/4;
            
%             Alpha1(36:42)= Alpha1(36:42)+ 0.1013*step_no;%offset
%             theta_plus = (Alpha1(36)-StanceFeet(1))/4;
%             theta_minus = (Alpha1(42)-StanceFeet(1))/4; 
%             theta = q1 + theta_plus -step_no*0.100;
%             theta;

        elseif foot_index == 2
            %SF=SF_2_func(q);
            hc = hc_2_func(q)-[zeros(2,1);0; 0; 0; 0; zeros(2,1);0];  % 9x1
            hc_j = j_hc_2_func(q);
            hc_jj = jj_hc_2_func(q,dq);
            Alpha1=Alpha(2,:);
            theta_plus = (Alpha1(36)-StanceFeet(7))/4;
            theta_minus = (Alpha1(42)-StanceFeet(7)+v_tm*0.25*2)/4;  
            
%             Alpha1(36:42)= Alpha1(36:42)+0.1013*step_no;         
%             theta_plus = (Alpha1(36)-StanceFeet(7))/4;
%             theta_minus = (Alpha1(42)-StanceFeet(7))/4;
%             theta = q1 + theta_plus -step_no*0.100 -0.025;
%             theta;
        elseif foot_index == 3
            hc = hc_3_func(q)-[zeros(6,1); zeros(2,1);0];  % 9x1 -zp*sin(w*t_global(end))
            hc_j = j_hc_3_func(q);
            hc_jj = jj_hc_3_func(q,dq);
            Alpha1=Alpha(3,:);
            theta_plus = (Alpha1(36)-StanceFeet(1))/4;
            theta_minus = (Alpha1(42)-StanceFeet(1)+v_tm*0.25*2)/4;            
            
%             %Alpha1(8:14)= Alpha1(8:14)-z_contact;
%             %Alpha1(50:56)= Alpha1(50:56)-z_contact;           
%             Alpha1(36:42)= Alpha1(36:42)+0.1013*step_no;            
%             theta_plus = (Alpha1(36)-StanceFeet(1))/4;
%             theta_minus = (Alpha1(42)-StanceFeet(1))/4;
%             theta = q1 + theta_plus -step_no*0.100 -0.05;
%             %theta=q(1)-current_stance_foot_position(1)+0.2356-0.05;%-2*0.1*(step_no);

        elseif foot_index == 4
            hc = hc_4_func(q)- [zeros(6,1); zeros(2,1); 0];  % 9x1
            hc_j = j_hc_4_func(q);
            hc_jj = jj_hc_4_func(q,dq);
            
            Alpha1=Alpha(4,:);  
            theta_plus = (Alpha1(36)-StanceFeet(1))/4;
            theta_minus = (Alpha1(42)-StanceFeet(1)+v_tm*0.25*2)/4;            
            
            
%             %Alpha1(8:14)= Alpha1(8:14)-z_contact;
%             %Alpha1(50:56)= Alpha1(50:56)-z_contact;            
%             Alpha1(36:42)= Alpha1(36:42)+0.1013*step_no;
%             
%             theta_plus = (Alpha1(36)-StanceFeet(7))/4;
%             theta_minus = (Alpha1(42)-StanceFeet(7))/4;
%             theta = q1 + theta_plus -step_no*0.100-0.0746;

        end

% Re check and verify

    dtheta = 0.18/2;
%     theta_plus = 0; %base at start;
%     theta_minus = (Alpha1(42)-Alpha1(36))/4; %0.025; %base at end of step
  
%theta = dtheta*(t_current-t_end_of_previous_step)+theta_plus;%q1 + theta_plus -step_no*0.1013;
  
theta = dtheta*(t_current-0.5*total_steps)+theta_plus; 
  
    %theta = s*(theta_minus-theta_plus)+theta_plus;
    ds_dtheta = (theta_minus-theta_plus);
    coef=1;
    s=(coef*theta-theta_plus)/ds_dtheta;

    s 
        %[ph,dph,ddph]=laikago_new_Bezier_6th(Alpha1,s);
        [ph,dph,ddph]=laikago_new_Bezier_6th(Alpha1,s);
        %a=H_left_foot_stance_func(q);
        %actual = a(6)-current_stance_foot_position(1);
        %reference = ph(4);

        [base_desired,dbase_desired,ddbase_desired]=desired_base_trajectory(t,t_end_of_previous_step);
            phi=[base_desired(1);ph]; %current_stance_foot_position
        

        dphi=[dbase_desired(1);...
            coef/ds_dtheta*dph*dtheta];%d_contact

        pphipq = [[0;dph],zeros(9,17)];
        %pphipq = zeros(12,18);
        ddphi=[ddbase_desired(1);...
            (coef/ds_dtheta)*(ddph*(coef/ds_dtheta)*dtheta^2)]; %dd_contact
        %dphi=zeros(12,1);
        %ddphi=zeros(12,1);
    else
        printf('omg')
    end
    
    
  
% if t==0
%   y=0.05*ones(9,1);
%   y_dot=0.05*ones(9,1);
% else
    y=hc-phi;
    y_dot=hc_j*dq-dphi;
% end
    %hc_j*dq

    %s_overall=[s_overall;s];

%     Kp=25^2*eye(9,9);
%     Kd=50*eye(9,9);
    
    Kp=11^2*eye(9,9);
    Kd=22*eye(9,9);
    
            Kp(1,1)=100;Kp(4,4)=100;Kp(7,7)=36;
            Kd(1,1)=20;Kd(4,4)=20;Kd(7,7)=12;
            
            Kp(2,2)=36;Kp(5,5)=36;Kp(8,8)=64;
            Kd(2,2)=12;Kd(5,5)=12;Kd(8,8)=16;
%     
    
    v=-Kp*y-Kd*y_dot;
    %norm(v)% We can get v fromControl Lyapunov function 
    %hc_j

    %u=(hc_j/(D)*B_coupled)\(v+hc_j/(D)*C_coupled-hc_jj+ddphi);
    
 %%   
    %u=((hc_j-pphipq)/(D)*B_overall)\(v+(hc_j-pphipq)/(D)*c_overall-hc_jj+ddphi);
     u=((hc_j)/(D)*B_overall)\(v+(hc_j)/(D)*c_overall-hc_jj+ddphi);
     
     uc =((hc_j)/(D)*B_overall)\((hc_j)/(D)*c_overall-hc_jj+ddphi);
     uv=((hc_j)/(D)*B_overall)\(v);
     ucm=((hc_j)/(D)*B_overall)\(-hc_jj+ddphi);
     
%%%     

%%  Sturatin for torque:
%      if abs(u(1))>15
%          u(1)= sign(u(1))*15;
%      elseif abs(u(2))>20
%          u(2)= sign(u(2))*20;
%      elseif abs(u(3))>40
%          u(3)= sign(u(3))*40;
%      elseif abs(u(4))>20
%          u(4)= sign(u(4))*20;
%      elseif abs(u(5))>55
%          u(5)= sign(u(5))*55;
%      elseif abs(u(6))>55
%          u(6)= sign(u(6))*55; 
%      elseif abs(u(7))>20
%          u(7)= sign(u(7))*20;
%      elseif abs(u(8))>55
%          u(8)= sign(u(8))*55;
%      elseif abs(u(9))>55
%          u(9)= sign(u(9))*55;
              %if abs(u(10))>15
               %   u(10)= sign(u(10))*15;
%      elseif abs(u(11))>55
%          u(11)= sign(u(11))*55;
%      elseif abs(u(12))>55
%          u(12)= sign(u(12))*55;
            %end


%%%     Using mmodified expression for u
%%    
%     for i=1:9
%         figure(1)
%         plot(s,y(i),'.')
%         hold on
%         figure(2)
%         plot(s,u(i),'.')
%         hold on
%     end

    %%
%         H=hc_j-[0;dph*(coef/ds_dtheta)];
%     
%     L= [0;(ddph*dtheta^2)*(coef/ds_dtheta)^2];
%     
%     %ddphi = [0;(coefficient/ds_dtheta)^2*(ddph*dtheta^2)];
%     %pphipq = [0;dph*coefficient/ds_dtheta];
%     
%     u=((H)/(D)*B_overall)\((H)/(D)*c_overall-hc_jj+L+v);
%     u;
    
%%
    %y_global=[y_global;y'];
    dy_global=[dy_global;y_dot'];
    %dphi_global = [dphi_global;[dphi',s,foot_index,x']];
end