tic;
%clear all
A= [];
b= [];
Aeq = [];
beq = [];
lb = -2*ones(1,56);
%lb(8:14) = 0;
%lb(80) = 0;
ub = 2*ones(1,56);

alpha1 = [0, 0, 0, 0, 0.002, 0.005, 0.01];  %y base
alpha2 = [0.229, 0.232, 0.235, 0.238, 0.235, 0.232, 0.229];    %z base
alpha3 = 0*[0, 0.02, 0.04, 0.05, 0.04, 0.02, 0];  % base roll
alpha4 = 0*[0, -0.02, -0.03, -0.04, -0.03, -0.02, 0];  % base pitch
alpha5 =  0*[0,0,0,0,0,0,0]; % base yaw
alpha6 =  [0.08,0.088,0.10,0.12,0.15, 0.17, 0.18]; % x swing foot %move by 0.1m
alpha7 =  [0.11,0.11,0.11,0.11,0.11,0.11,0.11]; % y swing foot
alpha8 =  3*[0, 0.02, 0.04, 0.05, 0.03, 0.01,0]; % z swing foot
% alpha9 =  [0,0,0,0,0,0,0]; % roll swing foot
% alpha10 =  0*[0, -0.02, -0.03, -0.04, -0.03, -0.02, 0]; % pitch swing foot
% alpha11 =  [0,0,0,0,0,0,0]; % yaw swing foot
alpha = [alpha1, alpha2, alpha3, alpha4, alpha5, alpha6, alpha7, alpha8];
%alpha = [alpha1, alpha2, alpha6, alpha7, alpha8, alpha9, alpha10, alpha11];
%load optimal4.mat
initial_optimization_variable = alpha;%optimized_variable;
%initial_optimization_variable = alpha;
options = optimoptions('fmincon',...
    'MaxFunEvals',20000,...
    'MaxIter',20000);

[Cost,Cnst] = Laikago_Obj_Cnst;

[optimized_variable,fval,exitflag,output] = fmincon(Cost,initial_optimization_variable,A,b,Aeq,beq,...
    lb,ub,Cnst,options);

toc