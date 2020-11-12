function dx = dynamics(t,x,t_end_of_previous_step,foot_index,Alpha,current_stance_foot_position)
    global Fr COP

% VERIFIED    
    [D,c_vec,B] = dynamics_laikago_matrix(x);
    q = x(1:18);
    dq = x(19:36);

    
    if foot_index == 1 % FL foot is swing foot
        j_c = j_1_func(q);
        jj_c = jj_1_func(q,dq);

    elseif foot_index == 2 % RR foot is swing foot
        j_c = j_2_func(q);
        jj_c = jj_2_func(q,dq);

    elseif foot_index == 3 % FR foot is swing foot
        j_c = j_3_func(q);
        jj_c = jj_3_func(q,dq);  
        
    elseif foot_index == 4 % RR foot is swing foot
        j_c = j_4_func(q);
        jj_c = jj_4_func(q,dq);        
    end
%     rank(j_c)
%     rank(j_c(:,1:6))

    c_overall = c_vec-j_c'/(j_c/D*j_c')*(j_c/D*c_vec-jj_c);
    B_overall = B-j_c'/(j_c/D*j_c')*j_c/D*B;
    %rank(B_overall)
    %rank(B)
    Fx = [dq;(D)\(-c_overall)];
    Gx = [zeros(18,12);(D)\B_overall];
   
    %B_overall = B; 
    u = feedback_linearization(t,x,D,c_overall,B_overall,...
        foot_index,Alpha,current_stance_foot_position,t_end_of_previous_step);
    %u=zeros(12,1);
    dx= Fx+Gx*u;
    F_c = (j_c/D*j_c')\(j_c/D*c_vec-jj_c)-(j_c/D*j_c')\j_c/D*B*u; % contact force
    
end
