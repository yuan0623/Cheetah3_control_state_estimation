function [COP,F_c] = opt_dynamics(s,q_sol,dq_sol,Alpha,foot_index,StanceFeet,t_inst)
%%
 [D,c_vec,B] = opt_dynamics_laikago_matrix(q_sol,dq_sol);
    q = q_sol;
    dq = dq_sol;

    %% Platform motion
    v_tm = 0.16; step_length =0.16;
    th_0=5*pi/180; w=2*pi;
    th =  th_0*sin(w*t_inst);  
    dth_dt = th_0*w*cos(w*t_inst);
    ddth_dtt = -th_0*w*w*sin(w*t_inst);

%     t_ref = t_end_of_previous_step;
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
%%
% SF_static = current_stance_foot_position;
% SF_dynamic = SF_static + p_contact;
% current_stance_foot_position = SF_dynamic;

    if foot_index == 1 % FL foot is swing foot
        j_c = j_1_func(q);
        jj_c = jj_1_func(q,dq);
        
            l1=0.1792-v_tm*t_inst; %FL
            l2= -0.2595-v_tm*t_inst;%RR
            l3= 0.2567-v_tm*t_inst;%FR
            l4= -0.1820-v_tm*t_inst; %RL    
        
        SF_a =[l3*[-cos(th);0;-sin(th)];l4*[-cos(th);0;-sin(th)];l2*[-cos(th);0;-sin(th)]]*dth_dt*dth_dt...
               +[l3*[-sin(th);0;cos(th)];l4*[-sin(th);0;cos(th)];l2*[-sin(th);0;cos(th)]]*ddth_dtt;
        
        %current_stance_foot_position=F_1_func(q);
        
    elseif foot_index == 2 % RR foot is swing foot
        j_c = j_2_func(q);
        jj_c = jj_2_func(q,dq);
        
            l1= 0.1792-v_tm*t_inst + step_length; %FL
            l2= -0.2595-v_tm*t_inst;%RR
            l3= 0.2567-v_tm*t_inst;%FR
            l4= -0.1820-v_tm*t_inst; %RL
            
        SF_a =[l1*[-cos(th);0;-sin(th)];l3*[-cos(th);0;-sin(th)];l4*[-cos(th);0;-sin(th)]]*dth_dt*dth_dt...
               +[l1*[-sin(th);0;cos(th)];l3*[-sin(th);0;cos(th)];l4*[-sin(th);0;cos(th)]]*ddth_dtt;

            
        %current_stance_foot_position=F_2_func(q);

    elseif foot_index == 3 % FR foot is swing foot
        j_c = j_3_func(q);
        jj_c = jj_3_func(q,dq);  
        
            l1= 0.1792-v_tm*t_inst + step_length; %FL
            l2= -0.2595-v_tm*t_inst + step_length;%RR
            l3= 0.2567-v_tm*t_inst;%FR
            l4= -0.1820-v_tm*t_inst; %RL       

        SF_a =[l1*[-cos(th);0;-sin(th)];l4*[-cos(th);0;-sin(th)];l2*[-cos(th);0;-sin(th)]]*dth_dt*dth_dt...
               +[l1*[-sin(th);0;cos(th)];l4*[-sin(th);0;cos(th)];l2*[-sin(th);0;cos(th)]]*ddth_dtt;
           
        
        %current_stance_foot_position=F_3_func(q);
        
    elseif foot_index == 4 % RR foot is swing foot
        j_c = j_4_func(q);
        jj_c = jj_4_func(q,dq);  
        
            l1= 0.1792-v_tm*t_inst + step_length; %FL
            l2= -0.2595-v_tm*t_inst + step_length;%RR
            l3= 0.2567- v_tm*t_inst + step_length;%FR
            l4= -0.1820-v_tm*t_inst; %RL      
 
        SF_a =[l1*[-cos(th);0;-sin(th)];l3*[-cos(th);0;-sin(th)];l2*[-cos(th);0;-sin(th)]]*dth_dt*dth_dt...
               +[l1*[-sin(th);0;cos(th)];l3*[-sin(th);0;cos(th)];l2*[-sin(th);0;cos(th)]]*ddth_dtt;
            
            
        %current_stance_foot_position=F_4_func(q);
    end
    
    dd_contact = SF_a;

    c_overall = c_vec-j_c'/(j_c/D*j_c')*(j_c/D*c_vec-jj_c + dd_contact);
    B_overall = B-j_c'/(j_c/D*j_c')*j_c/D*B;

    Fx = [dq;(D)\(-c_overall)];
    Gx = [zeros(18,12);(D)\B_overall];
   
   
    %u = feedback_linearization(t,x,D,c_overall,B_overall,...
    %    foot_index,Alpha,current_stance_foot_position,t_end_of_previous_step);
    %    This is suitable for ode eqn
    
    
    u=opt_feedback_linearization(s,q_sol,dq_sol,D,c_overall,B_overall,Alpha,foot_index,StanceFeet,t_inst); % Recheck it
    
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