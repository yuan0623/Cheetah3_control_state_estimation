% in this example, the velocity of the system is measured
clear all
%% define our meta-variables (i.e. how long and often we will sample)
duration = 100;  %how long the Quail flies
dt = .05;  %The Ninja continuously looks for the birdy,

%% Define update equations (Coefficent matrices): A physics based model for where we expect the Quail to be [state transition (state + velocity)] + [input control (acceleration)]
A = [1 0 dt 0; 0 1 0 dt;0 0 1 0; 0 0 0 1] ; % state transition matrix:  expected flight of the Quail (state prediction)
B = [dt^2/2 0; dt 0;0 dt^2/2;0 dt]; %input control matrix:  expected effect of the input accceleration on the state.
C = [0 0 1 0;
    0 0 0 1]; % measurement matrix: the expected measurement given the predicted state (likelihood)
%% define main variables
u = [0;0]; % define acceleration magnitude


QuailAccel_noise_mag = 0.05; %process noise: the variability in how fast the Quail is speeding up (stdv of acceleration: meters/sec^2)
NinjaVision_noise_mag = 10;  %measurement noise: How mask-blinded is the Ninja (stdv of location, in meters)
R = [NinjaVision_noise_mag^2,0;
    0,NinjaVision_noise_mag^3];% Ez convert the measurement noise (stdv) into covariance matrix
Q = QuailAccel_noise_mag^2 * dt^4/4 * rand(4,4);
%P = Q; % estimate of initial Quail position variance (covariance matrix)

%% initize result variables
% Initialize for speed
y_vec = []; % Quail path that the Ninja sees


%% simulate what the Ninja sees over time

for t = 0 : dt: duration
    % Generate the Quail flight
    QuailAccel_noise = QuailAccel_noise_mag * [(dt^2/2)*randn;(dt^2/2)*randn; dt*randn;dt*randn];
    Q= A * Q+ B * u + QuailAccel_noise;
    % Generate what the Ninja sees
    NinjaVision_noise = NinjaVision_noise_mag * randn;
    %y = C * Q+ NinjaVision_noise;
    y=[70+30*sin(t)+NinjaVision_noise;NinjaVision_noise];
    y_vec = [y_vec, y];
end
%% Do kalman filtering
x_hat = [0;0;y_vec(1,1);y_vec(2,1)];  %x_estimate of initial location estimation of where the Quail is (what we are updating)
%initize estimation variables
x_hat_vec = []; %  estimated state
Q= [1 0 0 0;0 2 0 0; 0 0 3 0; 0 0 0 4]*0.3; % re-initized state
P=eye(4)*1000;
P_vec= [];
P_norm_vec=[];
for t = 1:length(y_vec)
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    % prediction
    x_hat = A*x_hat;
    P = A*P*A'+Q;
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    % update
    z = y_vec(:,t)-C*x_hat;
    S = C*P*C'+R;
    K = P*C'*inv(S);
    x_hat = x_hat +K*z;
    P = (eye(4)-K*C)*P;
    x_hat_vec = [x_hat_vec, x_hat];
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    P_norm_vec= [P_norm_vec,norm(P)];
    P_vec = [P_vec,P];
    
end

% Plot the results
%figure(2);
t_vec = 0 : dt : duration;
%plot(tt,Q_loc,'-r.',tt,Q_loc_meas,'-k.', tt,Q_loc_estimate,'-g.');
%plot(tt,Q_loc,'-r.')
subplot(2,1,1)
hold on 
plot(t_vec,y_vec(1,:),'*')
plot(t_vec,x_hat_vec(3,:),'-g.')
%axis([0 10 -30 80])
hold off 
legend('measurement','estimation')
subplot(2,1,2)
hold on 
plot(t_vec,y_vec(2,:),'*')
plot(t_vec,x_hat_vec(4,:),'-g.')
%axis([0 10 -30 80])
hold off 
legend('measurement','estimation')