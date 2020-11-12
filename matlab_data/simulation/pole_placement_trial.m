%% pole placement
A = eye(18);
dt = 0.001;
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




%p = -3*ones(18,1);
p = -linspace(1,4,18);
K = place(A',C',p)
%%
A = eye(6);
A(1:3,4:6) = eye(3)*dt;
C = zeros(3,6);
%C = eye(6)
C(1:3,1:3) = eye(3);
%C(4:6,4:6) = eye(3);
p = -linspace(1,40,6);
K = place(A',C',p);
%unob = length(A)-rank(obsv(A,C))
%%
figure
plot(t,x_sol(:,4))
hold on 
plot(t,x_hat_vec(:,4))
ylim([-100,100])
title('dx')
figure
plot(t,x_sol(:,5))
hold on 
plot(t,x_hat_vec(:,5))
ylim([-100,100])
title('dy')
figure
plot(t,x_sol(:,6))
hold on 
plot(t,x_hat_vec(:,6))
ylim([-100,100])
title('dz')
%%
figure
plot(t,x_sol(:,1))
hold on 
plot(t,x_hat_vec(:,1))
ylim([-5,5])
title('x')
figure
plot(t,x_sol(:,2))
hold on 
plot(t,x_hat_vec(:,2))
ylim([-5,5])
title('y')
figure
plot(t,x_sol(:,3))
hold on 
plot(t,x_hat_vec(:,3))
ylim([-5,5])
title('z')