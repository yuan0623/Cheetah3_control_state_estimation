% written by StudentDave
%for licensing and usage questions
%email scienceguy5000 at gmail. com

%Bayesian Ninja tracking Quail using kalman filter

clear all
%% define our meta-variables (i.e. how long and often we will sample)
duration = 10  %how long the Quail flies
dt = .1;  %The Ninja continuously looks for the birdy,

%% Define update equations (Coefficent matrices): A physics based model for where we expect the Quail to be [state transition (state + velocity)] + [input control (acceleration)]
A = [1 dt; 0 1] ; % state transition matrix:  expected flight of the Quail (state prediction)
B = [dt^2/2; dt]; %input control matrix:  expected effect of the input accceleration on the state.
C = [0 1]; % measurement matrix: the expected measurement given the predicted state (likelihood)
%% define main variables
u = 0; % define acceleration magnitude
Q= [0; 0]; %initized state--it has two components: [position; velocity] of the Quail
x_hat = Q;  %x_estimate of initial location estimation of where the Quail is (what we are updating)
QuailAccel_noise_mag = 0.05; %process noise: the variability in how fast the Quail is speeding up (stdv of acceleration: meters/sec^2)
NinjaVision_noise_mag = 10;  %measurement noise: How mask-blinded is the Ninja (stdv of location, in meters)
R = NinjaVision_noise_mag^2;% Ez convert the measurement noise (stdv) into covariance matrix
Q = QuailAccel_noise_mag^2 * [dt^4/4 dt^3/2; dt^3/2 dt^2]; % Ex convert the process noise (stdv) into covariance matrix
P = Q; % estimate of initial Quail position variance (covariance matrix)

%% initize result variables
% Initialize for speed
Q_loc = []; % ACTUAL Quail flight path
vel = []; % ACTUAL Quail velocity
y_vec = []; % Quail path that the Ninja sees


%% simulate what the Ninja sees over time
x_init = [0;40];
for t = 0 : dt: duration
    % Generate the Quail flight
    QuailAccel_noise = QuailAccel_noise_mag * [(dt^2/2)*randn; dt*randn];
    Q= A * Q+ B * u + QuailAccel_noise;
    % Generate what the Ninja sees
    NinjaVision_noise = NinjaVision_noise_mag * randn;
    %y = C * Q+ NinjaVision_noise;
    y=70+30*sin(t)+NinjaVision_noise;
    Q_loc = [Q_loc; Q(1)];
    y_vec = [y_vec; y];
    vel = [vel; Q(2)];
end
%% Do kalman filtering
%initize estimation variables
x_hat_vec = []; %  estimated state
Q= [1; 2]; % re-initized state
P_estimate = P;
P_mag_estimate = [];
predic_state = [];
predic_var = [];
for t = 1:length(Q_loc)
    % Predict next state of the quail with the last state and predicted motion.
    x_hat = A * x_hat + B * u;
    predic_state = [predic_state; x_hat(1)] ;
    %predict next covariance
    P = A * P * A' + Q;
    norm(P)
    predic_var = [predic_var; P] ;
    % predicted Ninja measurement covariance
    % Kalman Gain
    K = P*C'*inv(C*P*C'+R)
    % Update the state estimate.
    x_hat = x_hat + K * (y_vec(t) - C * x_hat);
    % update covariance estimation.
    P =  (eye(2)-K*C)*P;

    x_hat_vec = [x_hat_vec, x_hat];

end

% Plot the results
%figure(2);
tt = 0 : dt : duration;
%plot(tt,Q_loc,'-r.',tt,Q_loc_meas,'-k.', tt,Q_loc_estimate,'-g.');
%plot(tt,Q_loc,'-r.')
hold on 
plot(tt,y_vec,'-k.')
plot(tt,x_hat_vec(2,:),'-g.')
%axis([0 10 -30 80])
hold off 
legend('measurement','estimation')
