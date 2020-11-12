function u=opt_feedback_linearization(s,q_sol,dq_sol,D,c_overall,B_overall,Alpha1,foot_index)
    q = q_sol;
    dq = dq_sol;
    global step_no
%%

        if foot_index == 1 
            hc = hc_1_func(q)-[zeros(2,1);0.356; pi/2; 0; pi/2; 0 ; zeros(2,1)];  % 12x1
            hc_j = j_hc_1_func(q);
            hc_jj = jj_hc_1_func(q,dq);

            %theta=q(1)-current_stance_foot_position(1)+0.114;%-2*0.1*(step_no);
            
            theta=q(1)-0.1*(step_no);
            %theta=SF(1)-current_stance_foot_position(1);
            theta;
            %Alpha1=Alpha(1,:);
            %Alpha1(36:42)= Alpha1(36:42)+0.1*step_no;
        elseif foot_index == 2
            %SF=SF_2_func(q);
            hc = hc_2_func(q)-[zeros(2,1); 0.356; pi/2; 0; pi/2; 0 ; zeros(2,1)];  % 12x1
            hc_j = j_hc_2_func(q);
            hc_jj = jj_hc_2_func(q,dq);
            %Alpha1=Alpha(2,:);
            %theta=q(1)-current_stance_foot_position(7)-0.3233 -0.025;%-2*0.1*(step_no);
            
            %theta=q(1)-(Alpha1(42)-Alpha1(36))/4-0.1*(step_no); % (Alpha1(42)-Alpha1(36))/4;
            theta=q(1)-(Alpha1(42)-Alpha1(36))/4-0.1*(step_no); 
            theta;
    
            %Alpha1(36:42)= Alpha1(36:42)+0.1*step_no;
        elseif foot_index == 3
            hc = hc_3_func(q)-[zeros(2,1); 0.356; pi/2; 0; pi/2; 0; zeros(2,1)];  % 12x1
            hc_j = j_hc_3_func(q);
            hc_jj = jj_hc_3_func(q,dq);
            
            %theta=q(1)-current_stance_foot_position(1)+0.2356-0.05;%-2*0.1*(step_no);
            
            %theta=q(1)-(Alpha1(42)-Alpha1(36))/2 -0.1*(step_no);
            theta=q(1)-0.1*(step_no);
            theta;
            %Alpha1=Alpha(3,:);            
            %Alpha1(36:42)= Alpha1(36:42)+0.1*step_no;
        elseif foot_index == 4
            hc = hc_4_func(q)- [zeros(3,1); pi/2; 0; pi/2; 0 ; zeros(2,1)];  % 12x1
            hc_j = j_hc_4_func(q);
            hc_jj = jj_hc_4_func(q,dq);

            %theta=q(1)-current_stance_foot_position(7)-0.2014-0.075;%-2*0.1*(step_no);
            
            %theta=q(1)-(Alpha1(42)-Alpha1(36))*3/4 -0.1*(step_no);
             theta=q(1)-0.1*(step_no);
            
            %Alpha1=Alpha(4,:);            
            %Alpha1(36:42)= Alpha1(36:42)+0.1*step_no;
         end

    
    %%
    dtheta = dq(1);
    theta_plus = 0; %base at start;
    theta_minus = (Alpha1(42)-Alpha1(36))/4; %0.025; %base at end of step
    ds_dtheta = (theta_minus-theta_plus);
    coefficient=1;
    s=(coefficient*theta-theta_plus)/ds_dtheta;
        %s 
    %s=(coefficient*theta-Alpha(15))/ds_dtheta;

    [ph,dph,ddph]=laikago_new_Bezier_6th(Alpha1,s);
    
    H=hc_j-[0;dph*(coefficient/ds_dtheta)];
    
    L= [0;(ddph*dtheta^2)*(coefficient/ds_dtheta)^2];
    
    %ddphi = [0;(coefficient/ds_dtheta)^2*(ddph*dtheta^2)];
    %pphipq = [0;dph*coefficient/ds_dtheta];


    v=zeros(9,1);
    
    u=((H)/(D)*B_overall)\((H)/(D)*c_overall-hc_jj+L+v);
    u;
    

    %u=((hc_j-pphipq)/(D)*B_overall)\(v+(hc_j-pphipq)/(D)*c_overall-hc_jj+ddphi);
end

