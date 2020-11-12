function dq_plus=resetmap(x,foot_index)

    q=x(1:18);
    dq=x(19:36);
    [D,~,~] = dynamics_laikago_matrix(x);
    if foot_index == -1
        swing_foot_jacobian = impact_jacobian_func(q);
    elseif foot_index == 1
        swing_foot_jacobian = impact_jacobian_func(q);
    end
    b=[D*dq';zeros(12,1)];
    A=[D,-swing_foot_jacobian';
       swing_foot_jacobian,zeros(12,12)];
    dq_plus=A\b;
    dq_plus=dq_plus(1:18);
    
    
end