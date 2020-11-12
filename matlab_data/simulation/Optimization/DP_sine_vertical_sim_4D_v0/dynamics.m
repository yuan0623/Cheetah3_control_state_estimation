function dx = dynamics(t,x,t_end_of_previous_step,foot_index,Alpha,current_stance_foot_position)
    global t_global 
        
    t_global=[t_global;t+t_end_of_previous_step];
    
% VERIFIED    
    [D,c_vec,B] = dynamics_laikago_matrix(x);
    q = x(1:18);
    dq = x(19:36);

    %% Platform motion

    zp_0=0.1; w=2*pi;
    p_contact =zeros(9,1);
    d_contact = zeros(9,1);
    dd_contact = zeros(9,1);
    z_contact = zp_0*sin(w*t_global(end));
    p_contact(3:3:9)= z_contact;
    vz_contact = w*zp_0*cos(w*t_global(end));
    d_contact(3:3:9)= vz_contact;
    dd_contact(3)=-w*w*zp_0*sin(w*t_global(end));
    dd_contact(6)=-w*w*zp_0*sin(w*t_global(end));
    dd_contact(9)=-w*w*zp_0*sin(w*t_global(end));%double derivative of contact points
%%
% SF_static = current_stance_foot_position;
% SF_dynamic = SF_static + p_contact;
% current_stance_foot_position = SF_dynamic;

    if foot_index == 1 % FL foot is swing foot
        j_c = j_1_func(q);
        %j_c1 = j_1_func(q);
        jj_c = jj_1_func(q,dq);
        %j_pd = (d_contact-j_c1*dq)/dq;
        %j_c = j_c1+j_pd;
        %current_stance_foot_position=F_1_func(q);
        
    elseif foot_index == 2 % RR foot is swing foot
        j_c = j_2_func(q);
        jj_c = jj_2_func(q,dq);
        %current_stance_foot_position=F_2_func(q);

    elseif foot_index == 3 % FR foot is swing foot
        j_c = j_3_func(q);
        jj_c = jj_3_func(q,dq);  
        %current_stance_foot_position=F_3_func(q);
        
    elseif foot_index == 4 % RR foot is swing foot
        j_c = j_4_func(q);
        jj_c = jj_4_func(q,dq);    
        %current_stance_foot_position=F_4_func(q);
    end
%     rank(j_c)
%     rank(j_c(:,1:6))

%%

    c_overall = c_vec-j_c'/(j_c/D*j_c')*(j_c/D*c_vec-jj_c + dd_contact); % Modified for dynamic platform
    B_overall = B-j_c'/(j_c/D*j_c')*j_c/D*B;
    %rank(B_overall)
    %rank(B)
      %dq(3) = vz_contact;
      dq(1)= 0.1;
    Fx = [dq;(D)\(-c_overall)];
    Gx = [zeros(18,12);(D)\B_overall];
   
    %B_overall = B; 
    u = feedback_linearization(t,x,D,c_overall,B_overall,...
        foot_index,Alpha,current_stance_foot_position,t_end_of_previous_step);
    %u=zeros(12,1);
    dx= Fx+Gx*u;
    u;dq;
end