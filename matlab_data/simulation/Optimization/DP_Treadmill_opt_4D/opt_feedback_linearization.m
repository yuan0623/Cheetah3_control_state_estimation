function u=opt_feedback_linearization(s,q_sol,dq_sol,D,c_overall,B_overall,Alpha,foot_index,StanceFeet,t_inst)
    q = q_sol;
    dq = dq_sol;
    global step_no
    %% Platform motion parameters
w=2*pi; % Pitching angular frequency
step_length =0.1;
v_tm =0.1; %treadmill speed in m/s
th_max = 10*pi/180;
th_0 = th_max/2;
th =  th_0*sin(w*t_inst);
    
    
    %%

        if foot_index == 1 
            hc = hc_1_func(q)-[zeros(2,1);0; 0; 0; 0; 0 ; zeros(2,1)];  % 12x1
            hc_j = j_hc_1_func(q);
            hc_jj = jj_hc_1_func(q,dq);
            
            theta_plus = (Alpha(36)-StanceFeet(1))/4;
            theta_minus = (Alpha(42)-StanceFeet(1)+v_tm*0.25)/4;
            

%             %theta=q(1)-current_stance_foot_position(1)+0.114;%-2*0.1*(step_no);
%             
%             theta=q(1)-0.1*(step_no);
%             %theta=SF(1)-current_stance_foot_position(1);
%             theta;
%             %Alpha1=Alpha(1,:);
%             %Alpha1(36:42)= Alpha1(36:42)+0.1*step_no;
        elseif foot_index == 2
            %SF=SF_2_func(q);
            hc = hc_2_func(q);%-[zeros(2,1); 0; -pi/2; 0; -pi/2; 0 ; zeros(2,1)];  % 12x1
            hc_j = j_hc_2_func(q);
            hc_jj = jj_hc_2_func(q,dq);
            
            theta_plus = (Alpha(36)-StanceFeet(7))/4;
            theta_minus = (Alpha(42)-StanceFeet(7)+v_tm*0.25)/4;            
            
%             %Alpha1=Alpha(2,:);
%             %theta=q(1)-current_stance_foot_position(7)-0.3233 -0.025;%-2*0.1*(step_no);
%             
%             theta=q(1)-(Alpha1(42)-Alpha1(36))/4-0.1*(step_no); % (Alpha1(42)-Alpha1(36))/4;
%             %theta=q(1)-0.1*(step_no); 
%             theta;
%     
%             %Alpha1(36:42)= Alpha1(36:42)+0.1*step_no;

        elseif foot_index == 3
            hc = hc_3_func(q);%-[zeros(2,1); 0; -pi/2; 0; -pi/2; 0; zeros(2,1)];  % 12x1
            hc_j = j_hc_3_func(q);
            hc_jj = jj_hc_3_func(q,dq);
            
            theta_plus = (Alpha(36)-StanceFeet(1))/4;
            theta_minus = (Alpha(42)-StanceFeet(1)+v_tm*0.25)/4;
            
%             %theta=q(1)-current_stance_foot_position(1)+0.2356-0.05;%-2*0.1*(step_no);
%             
%             theta=q(1)-(Alpha1(42)-Alpha1(36))/2 -0.1*(step_no);
%             %theta=q(1)-0.1*(step_no);
%             theta;
%             %Alpha1=Alpha(3,:);            
%             %Alpha1(36:42)= Alpha1(36:42)+0.1*step_no;

        elseif foot_index == 4
            hc = hc_4_func(q);%- [zeros(2,1); 0; -pi/2; 0; -pi/2; 0 ; zeros(2,1)];  % 12x1
            hc_j = j_hc_4_func(q);
            hc_jj = jj_hc_4_func(q,dq);

            theta_plus = (Alpha(36)-StanceFeet(7))/4;
            theta_minus = (Alpha(42)-StanceFeet(7)+v_tm*0.25)/4;            
            
%             %theta=q(1)-current_stance_foot_position(7)-0.2014-0.075;%-2*0.1*(step_no);
%             
%             theta=q(1)-(Alpha1(42)-Alpha1(36))*3/4 -0.1*(step_no);
%              %theta=q(1)-0.1*(step_no);
%             
%             %Alpha1=Alpha(4,:); 
%             q;
%             
%             %Alpha1(36:42)= Alpha1(36:42)+0.1*step_no;
         end

    
    %%
    dtheta = 0.1; %dq(1);
%     theta_plus = 0; %base at start;
%     theta_minus = (Alpha1(42)-Alpha1(36))/4; %0.025; %base at end of step

    theta = s*(theta_minus-theta_plus)+theta_plus;
    ds_dtheta = (theta_minus-theta_plus);
    coefficient=1;
    s=(coefficient*theta-theta_plus)/ds_dtheta;
        %s 
    %s=(coefficient*theta-Alpha(15))/ds_dtheta;

    [ph,dph,ddph]=laikago_new_Bezier_6th(Alpha,s);
    
    H=hc_j-[v_tm*t_inst;dph*(coefficient/ds_dtheta)];
    
    L= [0;(ddph*dtheta^2)*(coefficient/ds_dtheta)^2];
    
    %ddphi = [0;(coefficient/ds_dtheta)^2*(ddph*dtheta^2)];
    %pphipq = [0;dph*coefficient/ds_dtheta];


    v=zeros(9,1);%v=ddh_d-ddh_c)
    
    u=((H)/(D)*B_overall)\((H)/(D)*c_overall-hc_jj+L+v);
    u;
    

    %u=((hc_j-pphipq)/(D)*B_overall)\(v+(hc_j-pphipq)/(D)*c_overall-hc_jj+ddphi);
end

