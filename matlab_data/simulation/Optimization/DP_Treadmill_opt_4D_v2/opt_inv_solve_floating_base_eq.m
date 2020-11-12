function [q_error,COP_,q_sol_whole_step,Fr,dq_sol_whole_step,phi_overall,time]...
    =opt_inv_solve_floating_base_eq(options,Alpha,foot_index,q0,StanceFeet,t_ref)
    
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
    
    time = zeros(num_points,1);  % take time as output from this function
    t_start = t_ref; % give starting point of previous step as ref time.
    t_inst =t_start;
%% Platform motion
w=2*pi; % Pitching angular frequency
step_length =0.16;
% l1=0.437/2-0.05; %FL. % Distance of FL from the center of treadmill
% l2= -0.437/2;%-step_length/4; %RR
% l3= 0.437/2;%-2*step_length/4; %FR
% l4= -0.437/2+0.05;%-3*step_length/4; %RL
th_max = 10*pi/180;
th_0 = th_max/2;
v_tm =0.16; %treadmill speed in m/s
   
    i=1;
    
    %COP_ = zeros(num_points,3);           

    q0_ref=q0;
    base_offset=q0_ref(1);
% % %     theta_plus = 0+(foot_index-1)*(Alpha1(42)-Alpha1(36))/4;
% % %     theta_minus = (Alpha1(42)-Alpha1(36))/4 +(foot_index-1)*(Alpha1(42)-Alpha1(36))/4;%0.025;%base motion after each leg movement
% % % F_1 = [FRFoot;RLFoot;RRFoot];[l3,l4,l2]
% % % F_2 = [FLFoot;FRFoot;RLFoot];[l1,l3,l4]
% % % F_3 = [FLFoot;RLFoot;RRFoot];[l1,l4,l2]
% % % F_4 = [FLFoot;FRFoot;RRFoot];[l1,l3,l2]
    %StanceFeet=F_1_func(q0); %change it
    for s=linspace(0,1,num_points)

        th =  th_0*sin(w*t_inst);
        dth_dt = th_0*w*cos(w*t_inst);
        th_ref =  th_0*sin(w*t_ref);
        
        if foot_index==1
            
            l1r=0.1792-v_tm*t_ref; %FL
            l2r= -0.2595-v_tm*t_ref;%RR
            l3r= 0.2567-v_tm*t_ref;%FR
            l4r= -0.1820-v_tm*t_ref; %RL
            
            l1=0.1792-v_tm*t_inst; %FL
            l2= -0.2595-v_tm*t_inst;%RR
            l3= 0.2567-v_tm*t_inst;%FR
            l4= -0.1820-v_tm*t_inst; %RL
            
            
            theta_plus = (Alpha(36)-StanceFeet(1))/4;
            theta_minus = (Alpha(42)-StanceFeet(1)+v_tm*0.25)/4;
            SF_p =[l3r*[(cos(th)-cos(th_ref));0;sin(th)-sin(th_ref)];l4r*[(cos(th)-cos(th_ref));0;sin(th)-sin(th_ref)];l2r*[(cos(th)-cos(th_ref));0;sin(th)-sin(th_ref)]];
            %pc_tm = [-v_tm*t_inst*cos(th); 0; -v_tm*t_inst*sin(th)]; %Contact_point position due to treadmill motion along belt
            %SF_p = SF_p+[pc_tm; pc_tm; pc_tm];
            SF_v =[l3*[-sin(th);0;cos(th)];l4*[-sin(th);0;cos(th)];l2*[-sin(th);0;cos(th)]]*dth_dt;
            %vc_tm = [-v_tm*cos(th),0,-v_tm*sin(th)]; %Contact_point velocity due to treadmill motion along belt
            %SF_v = SF_v + [vc_tm; vc_tm; vc_tm];
        elseif foot_index==2
            
            l1r= 0.1792-v_tm*t_ref + step_length; %FL
            l2r= -0.2595-v_tm*t_ref;%RR
            l3r= 0.2567-v_tm*t_ref;%FR
            l4r= -0.1820-v_tm*t_ref; %RL            
            
            l1= 0.1792-v_tm*t_inst + step_length; %FL
            l2= -0.2595-v_tm*t_inst;%RR
            l3= 0.2567-v_tm*t_inst;%FR
            l4= -0.1820-v_tm*t_inst; %RL
            
            theta_plus = (Alpha(36)-StanceFeet(7))/4;
            theta_minus = (Alpha(42)-StanceFeet(7)+v_tm*0.25)/4;
            SF_p =[l1r*[(cos(th)-cos(th_ref));0;sin(th)-sin(th_ref)];l3r*[(cos(th)-cos(th_ref));0;sin(th)-sin(th_ref)];l4r*[(cos(th)-cos(th_ref));0;sin(th)-sin(th_ref)]];
            SF_v =[l1*[-sin(th);0;cos(th)];l3*[-sin(th);0;cos(th)];l4*[-sin(th);0;cos(th)]]*dth_dt;
            
        elseif foot_index==3
            
            l1r= 0.1792-v_tm*t_ref + step_length; %FL
            l2r= -0.2595-v_tm*t_ref + step_length;%RR
            l3r= 0.2567-v_tm*t_ref;%FR
            l4r= -0.1820-v_tm*t_ref; %RL
            
            l1= 0.1792-v_tm*t_inst + step_length; %FL
            l2= -0.2595-v_tm*t_inst + step_length;%RR
            l3= 0.2567-v_tm*t_inst;%FR
            l4= -0.1820-v_tm*t_inst; %RL
            
            
            theta_plus = (Alpha(36)-StanceFeet(1))/4;
            theta_minus = (Alpha(42)-StanceFeet(1)+v_tm*0.25)/4;
            SF_p =[l1r*[(cos(th)-cos(th_ref));0;sin(th)-sin(th_ref)];l4r*[(cos(th)-cos(th_ref));0;sin(th)-sin(th_ref)];l2r*[(cos(th)-cos(th_ref));0;sin(th)-sin(th_ref)]];
            SF_v =[l1*[-sin(th);0;cos(th)];l4*[-sin(th);0;cos(th)];l2*[-sin(th);0;cos(th)]]*dth_dt;%...
                %+ [[(cos(th)-1);0;sin(th)];[(cos(th)-1);0;sin(th)];[(cos(th)-1);0;sin(th)]]*(-v_tm);

        elseif foot_index==4

            l1r= 0.1792-v_tm*t_ref + step_length; %FL
            l2r= -0.2595-v_tm*t_ref + step_length;%RR
            l3r= 0.2567- v_tm*t_ref + step_length;%FR
            l4r= -0.1820-v_tm*t_ref; %RL            
            
            l1= 0.1792-v_tm*t_inst + step_length; %FL
            l2= -0.2595-v_tm*t_inst + step_length;%RR
            l3= 0.2567- v_tm*t_inst + step_length;%FR
            l4= -0.1820-v_tm*t_inst; %RL
            
            theta_plus = (Alpha(36)-StanceFeet(7))/4;
            theta_minus = (Alpha(42)-StanceFeet(7)+v_tm*0.25)/4;
            SF_p =[l1r*[(cos(th)-cos(th_ref));0;sin(th)-sin(th_ref)];l3r*[(cos(th)-cos(th_ref));0;sin(th)-sin(th_ref)];l2r*[(cos(th)-cos(th_ref));0;sin(th)-sin(th_ref)]];
            SF_v =[l1*[-sin(th);0;cos(th)];l3*[-sin(th);0;cos(th)];l2*[-sin(th);0;cos(th)]]*dth_dt; %...
                %+[[(cos(th)-1);0;sin(th)];[(cos(th)-1);0;sin(th)];[(cos(th)-1);0;sin(th)]]*(-v_tm);
        
        end
        
   pc_tm = -v_tm*(t_inst-t_ref)*[cos(th); 0; 0*sin(th)]; %Contact_point position due to treadmill motion along belt
   SF_p = SF_p+[pc_tm; pc_tm; pc_tm]; % Modified position of the contact points
   vc_tm = -v_tm*[(cos(th)); 0; 0*sin(th)]; %Contact_point velocity due to treadmill motion along belt
   SF_v = SF_v + [vc_tm; vc_tm; vc_tm]; % Modified velocity of the contact points
 
        theta = s*(theta_minus-theta_plus)+theta_plus;
        q1 = (theta-theta_plus);
        
        %[~,StanceFeet]= opt_floating_base_hc(q0,q0, foot_index);

        [ph,dph,~]=laikago_new_Bezier_6th(Alpha,s);
        
%         SF_p = zeros(9,1); %change to match pitching treadmill
%         SF_p(3)=-zp*sin(w*t_inst); SF_p(6)=-zp*sin(w*t_inst); SF_p(9)=-zp*sin(w*t_inst);
%         

phi = [q1;ph;StanceFeet]-[v_tm*(t_inst-t_ref)*cos(th); 0; 0; 0; 0; 0; 0;0;0 ; -SF_p]; %Desired value
        %plot(i,phi(10),'s',i,phi(13),'*',i,phi(16),'o')
        %plot(i,q1,'*')
        %hold 
        
        
        
        
        
        phi_overall(i,:) = phi';

        
        tic
        [q_sol,q_fval]=fsolve(@(q) opt_floating_base_hc(q,phi,foot_index),q0,options);
        %[test,~]= opt_floating_base_hc(q_sol,phi, foot_index); %check
        toc
        %test_hc_error(i,:)=norm(test);
        q_fval_overall(i,:)=q_fval';
        q_fval = norm(q_fval);
        q_error(i)=q_fval;
        q0=q_sol;
       
        %% below is used to calculate the velocity of the robot in joint space
        
        dtheta = 0.16;
        
        ds_dtheta=(theta_minus-theta_plus);% ds_dtheta=1/(theta_minus-theta_plus) (This part is taken care while using ds_theta;
        stance_foot_velocity = SF_v;
        %stance_foot_velocity(3)=zp*w*sin(w*t_inst); stance_foot_velocity(6)=zp*w*sin(w*t_inst); stance_foot_velocity(9)=zp*w*sin(w*t_inst);

        %dphi = [1/ds_dtheta*dph(1)*dtheta;dtheta;1/ds_dtheta*dph(2)*dtheta;stance_foot_velocity;stance_foot_velocity];
        dphi = [dtheta-v_tm;(1/ds_dtheta)*dph*dtheta; stance_foot_velocity];% hd_dot
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
        t_step = q1/dtheta;
        q_sol_whole_step(i,:)=q_sol;
        dq_sol_whole_step(i,:)=dq_sol;
        t_inst = t_start + t_step;
        time(i,:)= t_inst;
        
       % [~, dev]= opt_floating_base_hc(q_sol,0);
        %dq0 = dq_sol;
       % deviation(i,1) =dev;
        
%         StanceFeet(3:3:9)= zp*sin(w*t_inst);
%         StanceFeet;
        %% calculate COP

        [COP1,Fr1] = opt_dynamics(s,q_sol,dq_sol,Alpha,foot_index,StanceFeet,t_inst);
        
        Fr(i,:)= Fr1';
        
        %COP_(i,:) = [COP1,0];

        %% update the loop
        i=i+1;
%         if i==35
%             pause(10)
%         end
        
    end
    %error = norm(q_error)+norm(dq_error);
     
end




