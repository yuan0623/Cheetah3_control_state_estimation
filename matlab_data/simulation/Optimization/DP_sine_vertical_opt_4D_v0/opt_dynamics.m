function [COP,F_c]= opt_dynamics(s,q_sol,dq_sol,Alpha,foot_index,StanceFeet,t_inst)
%%
 [D,c_vec,B] = opt_dynamics_laikago_matrix(q_sol,dq_sol);
    q = q_sol;
    dq = dq_sol;

    if foot_index == 1 % FL foot is swing foot
        j_c = j_1_func(q);
        jj_c = jj_1_func(q,dq);

    elseif foot_index == 2 % RR foot is swing foot
        j_c = j_2_func(q);
        jj_c = jj_2_func(q,dq);

    elseif foot_index == 3 % FR foot is swing foot
        j_c = j_3_func(q);
        jj_c = jj_3_func(q,dq);  
        
    elseif foot_index == 4 % RL foot is swing foot
        j_c = j_4_func(q);
        jj_c = jj_4_func(q,dq);        
    end
%% Platform motion

    zp_0=0.1; w=6.2519;
    dd_contact = zeros(9,1);
    dd_contact(3)=-w*w*zp_0*sin(w*t_inst);
    dd_contact(6)=-w*w*zp_0*sin(w*t_inst);
    dd_contact(9)=-w*w*zp_0*sin(w*t_inst);%double derivative of contact points

    
    
    %%
    c_overall = c_vec-j_c'/(j_c/D*j_c')*(j_c/D*c_vec-jj_c +dd_contact);
    B_overall = B-j_c'/(j_c/D*j_c')*j_c/D*B;

    Fx = [dq;(D)\(-c_overall)];
    Gx = [zeros(18,12);(D)\B_overall];
   
   
    %u = feedback_linearization(t,x,D,c_overall,B_overall,...
    %    foot_index,Alpha,current_stance_foot_position,t_end_of_previous_step);
    %    This is suitable for ode eqn
    
    
    u=opt_feedback_linearization(s,q_sol,dq_sol,D,c_overall,B_overall,Alpha,foot_index,StanceFeet); % Recheck it
    
    dx= Fx+Gx*u;
    
    F_c = (j_c/D*j_c')\(j_c/D*c_vec-jj_c)-(j_c/D*j_c')\j_c/D*B*u +(j_c/D*j_c')\(dd_contact); % contact force
    
    pz = 0;
    px = (pz*F_c(1)-F_c(5))/F_c(3);
    py = (F_c(4)+pz*F_c(2))/F_c(3);
    %py =  Fr1(4)/Fr1(3);
    %px = -F_c(5)/F_c(3);
    %py =  F_c(4)/F_c(3);
    COP = [px,py]; %ZMP, should be the contact point coz the feet are pointed 
                    %hence no moment resistance at feet


%%
%     q = q_sol;
%     dq = dq_sol;
%     
%     x=[q;dq];
%     [D,c_vec,B] = dynamic_matrix_valkyrie(x);
% 
% 
%     q = x(1:18);
%     dq = x(19:36);
% 
%     j_c = j_left_foot_func(q); % rightfoot supported on ground a=0;
%     jj_c = j_dot_left_foot_func(q,dq); %j_dot
% 
%     
%     c_overall = c_vec-j_c'/(j_c/D*j_c')*(j_c/D*c_vec-jj_c);
%     B_overall = B-j_c'/(j_c/D*j_c')*j_c/D*B;
%     
%     Fx = [dq;(D)\(-c_overall)];
%     Gx = [zeros(38,32);(D)\B_overall];
% 
%     u=opt_feedback_linearization(s,x,D,c_overall,B_overall,Alpha);
%     %u=zeros(32,1);
%     dx= Fx+Gx*u;
%     F_c = (j_c/D*j_c')\(j_c/D*c_vec-jj_c)-(j_c/D*j_c')\j_c/D*B*u;
%     %COP=0;
%     
%     
% 
%     
%     pz = 0;
%     px = (pz*F_c(1)-F_c(5))/F_c(3);
%     py = (F_c(4)+pz*F_c(2))/F_c(3);
%     %py =  Fr1(4)/Fr1(3);
%     %px = -F_c(5)/F_c(3);
%     %py =  F_c(4)/F_c(3);
%     COP = [px,py];

end