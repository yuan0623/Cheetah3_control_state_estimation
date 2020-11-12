tic;
%clear all
global step_no
A= [];
b= [];
Aeq = [];
beq = [];
lb = -2*ones(1,56);
ub = 2*ones(1,56);
% lb(1:7) = -0.1;
% ub(1:7) = 0.1;
% lb(8:14) = 0.2;
% ub(8:14) = 0.5;
% lb(15:21) = -0.3;
% ub(15:21) = 0.3;
% lb(22:28) = -0.3;
% ub(22:28) = 0.3;
% lb(29:35) = -0.3;
% ub(29:35) = 0.3;
% lb(36:42) = -0.5;
% ub(36:42) = 0.5;
% lb(43:49) = -0.2;
% ub(43:49) = 0.2;
% lb(50:56) = -0.2;
% ub(50:56) = 0.2;

%%
foot_index=2;
step_no =0;

%%
alpha1 = -01.0*[0, 0.005, 0.01, 0.015, 0.02, 0.025, 0.0263];%+0.0143;  %y base
%alpha2 = [0.27, 0.272, 0.274, 0.275, 0.274, 0.272, 0.27];    %z base
%alpha2 = [0.35, 0.352, 0.354, 0.355, 0.354, 0.352, 0.35];
alpha2 = [0.36, 0.362, 0.358, 0.356, 0.355, 0.358, 0.36]-0.0040;
alpha3 = 0*[0, 0.02, 0.04, 0.05, 0.04, 0.02, 0];  % base roll
alpha4 = 0*[0, 0.02, 0.03, 0.04, 0.03, 0.02, 0];  % base pitch
alpha5 =  0*[0,0,0,0,0,0,0]; % base yaw
%alpha6 =  [0.192,0.2,0.22,0.25,0.27, 0.284, 0.292]; % x swing foot %move by 0.1m
%alpha6 =  [0.174,0.184,0.20,0.22,0.25, 0.264, 0.274];
alpha6 =  [0.2189,0.23,0.25,0.27,0.29, 0.305, 0.3189]+0.0448;
alpha7 =  [0.13,0.13,0.13,0.13,0.13,0.13,0.13]; % y swing foot
alpha8 =  1.5*[0, 0.02, 0.04, 0.05, 0.03, 0.01,0]; % z swing foot
% alpha9 =  [0,0,0,0,0,0,0]; % roll swing foot
% alpha10 =  6*[0, -0.02, -0.03, -0.04, -0.03, -0.02, 0]; % pitch swing foot
% alpha11 =  [0,0,0,0,0,0,0]; % yaw swing foot
alpha = [alpha1, alpha2, alpha3, alpha4, alpha5, alpha6, alpha7, alpha8];

Alpha1=alpha;

Alpha2=alpha;
Alpha2(1:7)=alpha(7);
Alpha2(36:42)=alpha(36:42)-0.437*ones(1,7);
%Alpha2(43:49)=-(0.124/0.11)*alpha(43:49);
Alpha2(43:49)=-alpha(43:49);
%alpha2(50:56)=[0, 0.02,0.04,0.05,0.04,0.015,0];

Alpha3=alpha;
Alpha3(1:7)=alpha(7);
%Alpha3(43:49)=-(0.124/0.11)*alpha(43:49);
Alpha3(43:49)=-alpha(43:49);
Alpha4=alpha;
Alpha4(1:7)=-0.7*[0.0263, 0.025, 0.02, 0.015, 0.01, 0.005, 0];%+0.0143;%[0, 0.005, 0.01, 0.015, 0.02, 0.025, 0.0263];

Alpha4(36:42)=alpha(36:42)-0.437*ones(1,7);


%load opt_var.mat


%%
% alpha1 = -4*[0, 0.02, 0.02, 0.03, 0.03, 0.02, 0.01];  %y base
% alpha2 = [0.27, 0.272, 0.274, 0.275, 0.274, 0.272, 0.27];    %z base
% alpha3 = 0*[0, 0.02, 0.04, 0.05, 0.04, 0.02, 0];  % base roll
% alpha4 = 0*[0, 0.02, 0.03, 0.04, 0.03, 0.02, 0];  % base pitch
% alpha5 =  0*[0,0,0,0,0,0,0]; % base yaw
% alpha6 =  [0.192,0.2,0.22,0.25,0.27, 0.284, 0.292]; % x swing foot %move by 0.1m
% alpha7 =  [0.11,0.11,0.11,0.11,0.11,0.11,0.11]; % y swing foot
% alpha8 =  1*[0, 0.02, 0.04, 0.05, 0.03, 0.01,0]; % z swing foot
% % alpha9 =  [0,0,0,0,0,0,0]; % roll swing foot
% % alpha10 =  6*[0, -0.02, -0.03, -0.04, -0.03, -0.02, 0]; % pitch swing foot
% % alpha11 =  [0,0,0,0,0,0,0]; % yaw swing foot
% alpha = [alpha1, alpha2, alpha3, alpha4, alpha5, alpha6, alpha7, alpha8];
% %alpha = [alpha1, alpha2, alpha6, alpha7, alpha8, alpha9, alpha10, alpha11];
% 
% Alpha1=alpha;
% 
% Alpha2=alpha;
% Alpha2(36:42)=alpha(36:42)-0.437*ones(1,7);
% Alpha2(43:49)=-(0.124/0.11)*alpha(43:49);
% %alpha2(50:56)=[0, 0.02,0.04,0.05,0.04,0.015,0];
% 
% Alpha3=alpha;
% Alpha3(43:49)=-(0.124/0.11)*alpha(43:49);
% 
% Alpha4=alpha;
% Alpha4(36:42)=alpha(36:42)-0.437*ones(1,7);


%%
%Alpha=[Alpha1,Alpha2,Alpha3,Alpha4];
load opt_var10.mat
% Alpha(5)=Alpha(5)-0.025; %%used with opt_var3
% Alpha(6)=Alpha(6)-0.038; %%used with opt_var3
% Alpha(7)=Alpha(7)+0.002; %%used with opt_var3
Alpha = optimized_variable(113:168); %Alpha;
load optimized_D1.mat
Optimized_1 = optimized_variable;
load optimized_D2.mat
Optimized_2 = optimized_D2; 
Optimized_3 = 0; Optimized_4 = 0;
[alp1, alp2] = bezier_coefficiet(Optimized_1, Optimized_2, Optimized_3, Optimized_4, 2);
Alpha(1:7:50)=alp1;
Alpha(2:7:51)=alp2;
%% Making base desired trajectory continuous across domains
% Alpha(7)=Alpha(57);
% Alpha(63)=Alpha(113);
% Alpha(119)=Alpha(169);
% 
% Alpha(14)=Alpha(64);
% Alpha(70)=Alpha(120);
% Alpha(126)=Alpha(176);
% 
% Alpha(21)=Alpha(71);
% Alpha(77)=Alpha(127);
% Alpha(133)=Alpha(183);
% 
% Alpha(28)=Alpha(78);
% Alpha(84)=Alpha(134);
% Alpha(140)=Alpha(190);
% 
% Alpha(35)=Alpha(85);
% Alpha(91)=Alpha(141);
% Alpha(147)=Alpha(197);


%%

options = optimoptions('fmincon',...
    'MaxFunEvals',250000,...
    'MaxIter',250000);

[Cost,Cnst] = Laikago_Obj_Cnst_impact;% initial_optimization_variable

[optimized_D3,fval,exitflag,output] = fmincon(Cost,Alpha,A,b,Aeq,beq,...
    lb,ub,Cnst,options);

toc


