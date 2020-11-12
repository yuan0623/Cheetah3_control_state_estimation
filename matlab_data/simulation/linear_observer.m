function x_hat_vec = linear_observer(x_sol,t)
    x_hat = zeros(18,1);
    x_hat_vec = zeros(length(t),18);
    t_previous = 0;
    u_process = x_sol(:,19:21);
    
    for i = 2:length(t)
        %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
        % process matrix 
        dt = t(i)-t_previous;
        A = eye(18);
        A(1:3,4:6) = eye(3)*dt;
        B = zeros(18,3);
        B(1:3,:) = dt^2/2*eye(3);
        B(4:6,:) = dt*eye(3);

        C = zeros(15,18);
        C(1:3,1:3) = -eye(3);
        C(4:6,1:3) = -eye(3);
        C(7:9,1:3) = -eye(3);
        C(10:12,1:3) = -eye(3);
        C(1:12,7:18) = eye(12);
        C(13:15,1:3) = eye(3);
        q_full = x_sol(i,:)';
        q_body = [0;0;0;0;0;0;q_full(7:end)];
        sensor_reading = [forward_kinematics(q_body);q_full(1:3)];
        pole = -linspace(-0.8,0.8,18);
        L = place(A',C',pole)';
        %L = zeros(18,12);
        acc = u_process(i,:)';
        x_hat = A*x_hat+B*acc+L*(sensor_reading - C*x_hat);
        
        %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
        
        x_hat_vec(i,:) = x_hat';

        dt
        i
        t_previous = t(i);
    end

end