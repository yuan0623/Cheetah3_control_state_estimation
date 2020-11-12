function [D,c_vec,B] = opt_dynamics_laikago_matrix(q_sol,dq_sol)
    
% VERIFIED
    q = q_sol;
    dq = dq_sol;
    D = Mmat_laikago_description(q);
    c_vec = compute_drift(q,dq);
    B = zeros(18,12);
    %B(6,:)=ones(1,12) ;
    B(7:18,1:12)=eye(12,12);   

end