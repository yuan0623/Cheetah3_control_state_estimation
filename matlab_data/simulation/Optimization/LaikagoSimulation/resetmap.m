function dq_plus=resetmap(x,foot_index)

%% VERIFIED
    q=x(1:18);
    dq=x(19:36);
    [D,~,~] = dynamics_laikago_matrix(x);
    if foot_index == 1
        swing_foot_jacobian = Sj_1_func(q);  % SWING FOOT JACOBIAN
        
    elseif foot_index == 2
        swing_foot_jacobian = Sj_2_func(q);
        
    elseif foot_index == 3
        swing_foot_jacobian = Sj_3_func(q);
        
    elseif foot_index == 4
        swing_foot_jacobian = Sj_4_func(q);
        
    end
    
    b=[D*dq';0;0;0;0;0;0];
    A=[D,-swing_foot_jacobian';
       swing_foot_jacobian,zeros(6,6)];
    dq_plus=A\b;
    dq_plus=dq_plus(1:18);

%     b=[D*dq';0;0;0];
%     A=[D,-swing_foot_jacobian';
%        swing_foot_jacobian,zeros(3,3)];
%     dq_plus=A\b;
%     dq_plus=dq_plus(1:18);
    
    
end