function [D,c_vec,B] = dynamics_laikago_matrix(x)
    
% VERIFIED
    q = x(1:18);
    dq = x(19:36);
    D = Mmat_laikago_description(q);
    c_vec = compute_drift(q,dq);
    B = zeros(18,12);
    B(7:18,1:12)=eye(12,12);   

end