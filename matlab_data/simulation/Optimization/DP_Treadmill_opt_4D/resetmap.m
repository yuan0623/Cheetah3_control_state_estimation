function dq_plus=resetmap(x,foot_index,t_e)

%% VERIFIED
    q=x(1:18);
    dq=x(19:36);
    [D,~,~] = dynamics_laikago_matrix(x);

    v_tm = 0.1; step_length =0.1;
    th_0=5*pi/180; w=2*pi;
    th =  th_0*sin(w*t_e);
    dth_dt = th_0*w*cos(w*t_e);
%% VERIFIED % verify foot order in reset jacobian
% [1,3,4],[2,4,1],[3,1,2],[4,2,3]%(1,3,4)(1,4,2)(1,3,2)(3,4,2)


    q=x(1:18);
    dq=x(19:36);
    [D,~,~] = dynamics_laikago_matrix(x);
    if foot_index == 1
        swing_foot_jacobian = Sj_1_func(q);  % SWING FOOT JACOBIAN
        reset_jacobian = j_2_func(q); %Reset_j_1_func(q); %swing foot+the other two feet which  
                                           %will stay as stance in the next step
            l1=0.2092-v_tm*t_e+step_length; %FL
            l2= -0.2295-v_tm*t_e;%RR
            l3= 0.2506-v_tm*t_e;%FR
            l4= -0.1881-v_tm*t_e; %RL
            
        RF_v =[l1*[-sin(th);0;cos(th)];l3*[-sin(th);0;cos(th)];l4*[-sin(th);0;cos(th)]]*dth_dt;
          
    elseif foot_index == 2
        swing_foot_jacobian = Sj_2_func(q);
        reset_jacobian = j_3_func(q); %Reset_j_2_func(q);
        
            l1= 0.2092-v_tm*t_e+ step_length  ; %FL
            l2= -0.2295-v_tm*t_e+step_length  ;%RR
            l3= 0.2506-v_tm*t_e ;%FR
            l4= -0.1881-v_tm*t_e ; %RL
            
         RF_v =[l1*[-sin(th);0;cos(th)];l4*[-sin(th);0;cos(th)];l2*[-sin(th);0;cos(th)]]*dth_dt;
       
        
    elseif foot_index == 3
        swing_foot_jacobian = Sj_3_func(q);
        reset_jacobian = j_4_func(q); %Reset_j_3_func(q);
        
            l1= 0.2092-v_tm*t_e + step_length; %FL
            l2= -0.2295-v_tm*t_e + step_length;%RR
            l3= 0.2506-v_tm*t_e + step_length;%FR
            l4= -0.1881-v_tm*t_e; %RL
        RF_v =[l1*[-sin(th);0;cos(th)];l3*[-sin(th);0;cos(th)];l2*[-sin(th);0;cos(th)]]*dth_dt;%...
                 
        
    elseif foot_index == 4
        swing_foot_jacobian = Sj_4_func(q);
        reset_jacobian = j_1_func(q);%Reset_j_4_func(q);
        
            l1= 0.2092-v_tm*t_e + step_length  ; %FL
            l2= -0.2295-v_tm*t_e + step_length  ;%RR
            l3= 0.2506- v_tm*t_e + step_length  ;%FR
            l4= -0.1881-v_tm*t_e+ step_length ; %RL
        
         RF_v =[l3*[-sin(th);0;cos(th)];l4*[-sin(th);0;cos(th)];l2*[-sin(th);0;cos(th)]]*dth_dt; %...
                 
    end
   vc_tm = -v_tm*[(cos(th)); 0; 0*sin(th)]; %Contact_point velocity due to treadmill motion along belt
   RF_v = RF_v + [vc_tm; vc_tm; vc_tm]; % Modified velocity of the contact points
     
    
    
%     v_contact = zeros(9,1);
%     vc_z =zp*w*cos(w*t_e);
%     v_contact(3:3:9)= vc_z;

    b=[D*dq'; RF_v];
    
    A=[D,-reset_jacobian';
    reset_jacobian,zeros(9,9)];
    dq_plus=A\b;
    dq_plus=dq_plus(1:18);

%     b=[D*dq';0;0;0];
%     A=[D,-swing_foot_jacobian';
%        swing_foot_jacobian,zeros(3,3)];
%     dq_plus=A\b;
%     dq_plus=dq_plus(1:18);
    
    
end