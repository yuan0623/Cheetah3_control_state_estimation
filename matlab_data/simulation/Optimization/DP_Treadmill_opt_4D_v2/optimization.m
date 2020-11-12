tic;
%clear all
global step_no
A= [];
b= [];
Aeq = [];
beq = [];
lb = -2*ones(1,224);
ub = 2*ones(1,224);
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
% lb(50:56) = -0.01;
% ub(50:56) = 0.2;

%%
foot_index=1;
step_no =0;

%%
%  alpha1 = -0*[0, 0.005, 0.01, 0.015, 0.01, 0.005, 0];%+0.0143;  %y base
% % %alpha2 = [0.27, 0.272, 0.274, 0.275, 0.274, 0.272, 0.27];    %z base
%  alpha2 = [0.3292, 0.33, 0.331, 0.3315, 0.331, 0.33, 0.3292];
% % alpha2 = [0.36, 0.362, 0.358, 0.356, 0.355, 0.358, 0.36]-0.0040;
%  alpha3 = 0*[0, 0.02, 0.04, 0.05, 0.04, 0.02, 0];  % base roll
%  alpha4 = 0*[0, 0.02, 0.03, 0.04, 0.03, 0.02, 0];  % base pitch
%  alpha5 =  0*[0,0,0,0,0,0,0]; % base yaw
% % %alpha6 =  [0.192,0.2,0.22,0.25,0.27, 0.284, 0.292]; % x swing foot %move by 0.1m
% % %alpha6 =  [0.174,0.184,0.20,0.22,0.25, 0.264, 0.274];
%  alpha6 =  [0.2189,0.23,0.25,0.27,0.29, 0.305, 0.3189]-0.0656;
%  alpha7 =  [0.1489,0.15,0.15,0.15,0.15,0.15,0.1489]; % y swing foot
%  alpha8 =  0.82*[0, 0.005, 0.02, 0.05, 0.03, 0.005,0]; % z swing foot
% % % alpha9 =  [0,0,0,0,0,0,0]; % roll swing foot
% % % alpha10 =  6*[0, -0.02, -0.03, -0.04, -0.03, -0.02, 0]; % pitch swing foot
% % % alpha11 =  [0,0,0,0,0,0,0]; % yaw swing foot
%  alpha = [alpha1, alpha2, alpha3, alpha4, alpha5, alpha6, alpha7, alpha8];
% % 
%  Alpha1=alpha;
%  Alpha1(1:7)= -1.2*[0.0065, 0.0110, 0.0126, 0.016, 0.016, 0.014, 0.008];
% % 
%  Alpha2=alpha;
%  Alpha2(1:7)= [-0.0096, -0.008, -0.006, -0.005, -0.004, -0.002, 0]; %-alpha(1:7); Alpha2(1)=-0.0096; %Alpha2(7)=-0.005;
%  Alpha2(36:42)=alpha(36:42)-0.3891*ones(1,7);
% % %Alpha2(43:49)=-(0.124/0.11)*alpha(43:49);
%  Alpha2(43:49)=-alpha(43:49);
% % %alpha2(50:56)=[0, 0.02,0.04,0.05,0.04,0.015,0];
% % 
%  Alpha3=alpha;
%  Alpha3(1:7)=[0.005, 0.0072, 0.0095, 0.0105, 0.011, 0.010, 0.005]; %[0, 0.002, 0.0065, 0.007, 0.004, 0.007, -0.005]+0.015; %-alpha(1:7); Alpha3(7)=-0.005; %1*[0.005, 0.008, 0.01, 0.011, 0.011, 0.008, 0];%-alpha(1:7);
%  Alpha3(36:42)=alpha(36:42)+0.0482*ones(1,7);
% % %Alpha3(43:49)=-(0.124/0.11)*alpha(43:49);
%  Alpha3(43:49)=-alpha(43:49);
%  Alpha4=alpha;
% % Alpha4(1:7)=-0.7*[0.0263, 0.025, 0.02, 0.015, 0.01, 0.005, 0];%+0.0143;%[0, 0.005, 0.01, 0.015, 0.02, 0.025, 0.0263];
% % 
%  Alpha4(1:7)= -1*[0.005+0.005, 0.0115, 0.0126, 0.016, 0.013, 0.016, 0.0072]; %-alpha(1:7); Alpha4(1)=-0.005;
%  Alpha4(7)=-0.008;
%  Alpha4(36:42)=alpha(36:42)-0.3396*ones(1,7);
% 
% 
% %load opt_var.mat


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
%% Platform motion
zp=0.1; w=2*pi;

%%
% Alpha=[Alpha1,Alpha2,Alpha3,Alpha4];
 load IBC_pp_s16_h09_v1r2
 Alpha = Alpha_initial; %Alpha;
%%
%D-1
%  Alpha(8)=Alpha(8)+zp*sin(w*0);  Alpha(9)=Alpha(9)+zp*sin(w*0.0417);  Alpha(10)=Alpha(10)+zp*sin(w*0.0833); 
%  Alpha(11)=Alpha(11)+zp*sin(w*0.1250); Alpha(12)=Alpha(12)+zp*sin(w*0.1667); Alpha(13)=Alpha(13)+zp*sin(w*0.2083);
%  Alpha(14)=Alpha(14)+zp*sin(w*0.2500);
%  
%  Alpha(50)=Alpha(50)+zp*sin(w*0);  Alpha(51)=Alpha(51)+zp*sin(w*0.0417);  Alpha(52)=Alpha(52)+zp*sin(w*0.0833); 
%  Alpha(53)=Alpha(53)+zp*sin(w*0.1250); Alpha(54)=Alpha(54)+zp*sin(w*0.1667); Alpha(55)=Alpha(55)+zp*sin(w*0.2083);
%  Alpha(56)=Alpha(56)+zp*sin(w*0.2500);
%  
%  % D-2
%  Alpha(64)=Alpha(64)+zp*sin(w*0.2500); Alpha(65)=Alpha(65)+zp*sin(w*0.2916);Alpha(66)=Alpha(66)+zp*sin(w*0.3333);
%  Alpha(67)=Alpha(67)+zp*sin(w*0.3749); Alpha(68)=Alpha(68)+zp*sin(w*0.4165); Alpha(69)=Alpha(69)+zp*sin(w*0.4582);
%  Alpha(70)=Alpha(70)+zp*sin(w*0.4998);
%  
%  Alpha(106)=Alpha(106)+zp*sin(w*0.2500); Alpha(107)=Alpha(107)+zp*sin(w*0.2916);Alpha(108)=Alpha(108)+zp*sin(w*0.3333);
%  Alpha(109)=Alpha(109)+zp*sin(w*0.3749); Alpha(110)=Alpha(110)+zp*sin(w*0.4165); Alpha(111)=Alpha(111)+zp*sin(w*0.4582);
%  Alpha(112)=Alpha(112)+zp*sin(w*0.4998);
%  
% %D-3
%  Alpha(120)=Alpha(120)+zp*sin(w*0.4998); Alpha(121)=Alpha(121)+zp*sin(w*0.5416); Alpha(122)=Alpha(122)+zp*sin(w*0.5835);
%  Alpha(123)=Alpha(123)+zp*sin(w*0.6253); Alpha(124)=Alpha(124)+zp*sin(w*0.6671); Alpha(125)=Alpha(125)+zp*sin(w*0.7090);
%  Alpha(126)=Alpha(126)+zp*sin(w*0.7508);
%  
%  Alpha(162)=Alpha(162)+zp*sin(w*0.4998); Alpha(163)=Alpha(163)+zp*sin(w*0.5416); Alpha(164)=Alpha(164)+zp*sin(w*0.5835);
%  Alpha(165)=Alpha(165)+zp*sin(w*0.6253); Alpha(166)=Alpha(166)+zp*sin(w*0.6671); Alpha(167)=Alpha(167)+zp*sin(w*0.7090);
%  Alpha(168)=Alpha(168)+zp*sin(w*0.7508);
%  
%  %D-4
%  Alpha(176)=Alpha(176)+zp*sin(w*0.7508); Alpha(177)=Alpha(177)+zp*sin(w*0.7932); Alpha(178)=Alpha(178)+zp*sin(w*0.8355);
%  Alpha(179)=Alpha(179)+zp*sin(w*0.8779); Alpha(180)=Alpha(180)+zp*sin(w*0.9203); Alpha(181)=Alpha(181)+zp*sin(w*0.9626);
%  Alpha(182)=Alpha(182)+zp*sin(w*1.005);
% 
%  Alpha(218)=Alpha(218)+zp*sin(w*0.7508); Alpha(219)=Alpha(219)+zp*sin(w*0.7932); Alpha(220)=Alpha(220)+zp*sin(w*0.8355);
%  Alpha(221)=Alpha(221)+zp*sin(w*0.8779); Alpha(222)=Alpha(222)+zp*sin(w*0.9203); Alpha(223)=Alpha(223)+zp*sin(w*0.9626);
%  Alpha(224)=Alpha(224)+zp*sin(w*1.005);

 
%% Making base desired trajectory continuous across domains
% Alpha(7)=Alpha(57);
% Alpha(63)=Alpha(113);
% Alpha(119)=Alpha(169);
% % 
% Alpha(14)=Alpha(64);
% Alpha(70)=Alpha(120);
% Alpha(126)=Alpha(176);
% % 
% Alpha(21)=Alpha(71);
% Alpha(77)=Alpha(127);
% Alpha(133)=Alpha(183);
% % 
% Alpha(28)=Alpha(78);
% Alpha(84)=Alpha(134);
% Alpha(140)=Alpha(190);
% % 
% Alpha(35)=Alpha(85);
% Alpha(91)=Alpha(141);
% Alpha(147)=Alpha(197);
% 
% Alpha(1)=Alpha(175);
% Alpha(8)=Alpha(182);
% Alpha(15)=Alpha(191);
% Alpha(22)=Alpha(198);
% Alpha(29)=Alpha(205);

%%

options = optimoptions('fmincon',...
    'MaxFunEvals',1e6,...
    'MaxIter',1e7,'ConstraintTolerance', 1e-6);

[Cost,Cnst] = Laikago_Obj_Cnst_impact;% initial_optimization_variable

[optimized_variable,fval,exitflag,output] = fmincon(Cost,Alpha,A,b,Aeq,beq,...
    lb,ub,Cnst,options);

toc


