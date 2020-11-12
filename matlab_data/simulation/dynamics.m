function dx = dynamics(t,x,t_end_of_previous_step,foot_index,Alpha,current_stance_foot_position)
    %% run dynamics
    global Fr COP t_previous

    
    [D,c_vec,B] = dynamics_laikago_matrix(x);
    q = x(1:18);
    dq = x(19:36);

    
    if foot_index == -1 % right foot as stance foot
        %j_c = j_1_func(q);
        %jj_c = jj_1_func(q,dq);
        %j_c = j_1_func_fully(q);
        %jj_c = jj_1_func_fully(q,dq);
        j_c = j_support_foot_func(q);
        jj_c = jj_support_foot_func(q,dq);
    elseif foot_index == 1 % left foot as stance foot
        %j_c = j_2_func(q);
        %jj_c = jj_2_func(q,dq);
        %j_c = j_2_func_fully(q);
        %jj_c = jj_2_func_fully(q,dq);
        j_c = j_support_foot_func(q);
        jj_c = jj_support_foot_func(q,dq);
    end
    %rank(j_c)
    %rank(j_c(:,1:6))
    %j_c(1:6,1:6) = eye(6);
    c_overall = c_vec-j_c'/(j_c/D*j_c')*(j_c/D*c_vec-jj_c);
    B_overall = B-j_c'/(j_c/D*j_c')*j_c/D*B;
    %rank(B_overall)
    %rank(B)
    Fx = [dq;(D)\(-c_overall)];
    Gx = [zeros(18,12);(D)\B_overall];
    t
    %B_overall = B; 
    u = feedback_linearization_one_leg_swing(t,x,D,c_overall,B_overall,...
        foot_index,Alpha,current_stance_foot_position,t_end_of_previous_step);
    %u=zeros(12,1);
    dx= Fx+Gx*u;
    

end