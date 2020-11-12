% q(7) FR_hip_motor_2_chassis_joint
% q(8) FR_upper_leg_2_hip_motor_joint
% q(9) FR_lower_leg_2_upper_leg_joint
% q(10) FL_hip_motor_2_chassis_joint
% q(11) FL_upper_leg_2_hip_motor_joint
% q(12) FL_lower_leg_2_upper_leg_joint
% q(13) RR_hip_motor_2_chassis_joint
% q(14) RR_upper_leg_2_hip_motor_joint
% q(15) RR_lower_leg_2_upper_leg_joint
% q(16) RL_hip_motor_2_chassis_joint
% q(17) RL_upper_leg_2_hip_motor_joint
% q(18) RL_lower_leg_2_upper_leg_joint


clc
clear all
tic
global s_overall y_global dy_global t_global global_position_reference Fr COP s_global dphi_global phi_global hc_global step_no total_steps offset torque dq_jump
tspan=linspace(0,1,500);
x0=zeros(1,36);
    %% Platform motion initial condition

    zp_0=0.1; w=1*pi;
    p_contact =zeros(9,1);
    d_contact = zeros(9,1);
    dd_contact = zeros(9,1);
    z_contact = zp_0*sin(w*0);
    p_contact(3:3:9)= z_contact;
    vz_contact = w*zp_0*cos(w*0);

%%
%q0=[0, 0, 0.27, 1.5708, 0, 1.5708, 0.04, 0.2, -1.26, -0.04, 0.2, -1.26, 0.04,0.2, -1.26, -0.04, 0.2, -1.26];
%q0=[0.0001, 0.01, 0.3292, 1.5708, 0, 1.5708, 0.1, 0, -0.8, 0.0965, 0.112, -0.72, 0.1,0, -0.8, 0.1, -0.14,-0.822]';%on the go pose
%q0=[0.0000, 0.00, 0.3292, 1.5708, 0, 1.5708, 0.1, 0, -0.8, 0.1, 0.11, -0.715, 0.1,0, -0.8, 0.1, -0.14,-0.72]';%on the go pose -0.821
q0=[0, 0, 0.4268, 0, 0, 0, -0.05, 0.55,-1.19306,0.05, 0.65,-1.2,-0.05, 0.65,-1.2, 0.05, 0.55,-1.19306];% On the go pose modified
  
x0(1:18)=q0;
j_c = j_1_func(q0);

 %j_contact_base= [j_c;[eye(3),zeros(3,15)]];
% % v_contact_base = zeros(12,1);
% % v_contact_base(3:3:12)= vz_contact;
% % v_contact_base(10)=0.0;
%v_contact_base=[-0.1805;0;0;-0.1000;0;0.1105;-0.1000;0;-0.1022;-0.1000;0;-0.1293];% obtained from optimization code
v_contact_base=0*[-0.05000;0;0.1105;-0.1000;0;-0.1022;-0.1000;0;-0.1293];% obtained from optimization code

% x0(19)=0.1;
% x0(21)=0.625;
dq0 = j_c\v_contact_base;
x0(19:36)=dq0;
%load Optimized_stp.mat
load IBC_pp_amp8_h06_ynz_v1.mat %IBC_pp_h06_ynz_v5.mat
alpha = Alpha_initial;


y_global=[];
torque =[];
dq_jump =[];
dy_global=[];
phi_global=[];

 
Alpha1=alpha(1:56);
%Alpha1(7)=0.005;
Alpha2=alpha(57:112);
%Alpha2(1:7)=Alpha2(1:7)+0.0045;
 %Alpha2(56)=0;


Alpha3=alpha(113:168);
%Alpha3(7)=-0.004;
%Alpha3(4) =0.013; Alpha3(5) = 0.009; Alpha3(6) = 0.004; Alpha3(7) = -0.002;

Alpha4=alpha(169:224);
%Alpha4(56)=0;
% Alpha4(1:7)=Alpha4(1:7)-0.005;
%Alpha4(1) = -0.002; Alpha4(2) = -0.008;

Alpha=[Alpha1;Alpha2;Alpha3;Alpha4];

%{
alpha = [0.3683, 0.3683, 0.3683, 0.3683, 0.3683, 0.3683, 0.3683,...  %base config
         pi/2  , pi/2  , pi/2  , pi/2  , pi/2  , pi/2  , pi/2,...    %base config
         0     , 0     , 0     , 0     , 0     , 0     , 0,...       %base config
         pi/2  , pi/2  , pi/2  , pi/2  , pi/2  , pi/2  , pi/2,...    %base config
         0.1838, 0.1938, 0.2038, 0.2438, 0.2538, 0.2738, 0.3038,...
         -0.1146, -0.1146, -0.1146, -0.1146, -0.1146, -0.1146, -0.1146,...
         0     , 0.03  , 0.07  , 0.1   , 0.07  , 0.03  , 0,...   
         -0.2490,-0.2390,-0.2290,-0.1890,-0.1790,-0.1590,-0.1290,...
         0.1146,0.1146,0.1146,0.1146,0.1146,0.1146,0.1146,...
         0     , 0.03  , 0.07  , 0.1   , 0.07  , 0.03  , 0];
alpha_L = alpha;
alpha_L(42:48) = -alpha_L(42:48);
alpha_L(63:69) = -alpha_L(63:69);
Alpha=[alpha;
       alpha_L];
%}
% alpha = [0.4109, 0.3683, 0.3683, 0.3683, 0.3683, 0.3683, 0.4109,...  %base config
%          pi/2  , pi/2  , pi/2  , pi/2  , pi/2  , pi/2  , pi/2,...    %base config
%          0     , 0     , 0     , 0     , 0     , 0     , 0,...       %base config
%          -0.03 , -0.02 , -0.01 , 0     , 0.01  , 0.02  , 0.03,...
%          -0.1146, -0.1146, -0.1146, -0.1146, -0.1146, -0.1146, -0.1146,...
%          0     , 0.03  , 0.07  , 0.1   , 0.07  , 0.03  , 0,...   
%          -0.03 , -0.02 , -0.01 , 0     , 0.01  , 0.02  , 0.03,...
%          0.1146,0.1146,0.1146,0.1146,0.1146,0.1146,0.1146,...
%          0     , 0.03  , 0.07  , 0.1   , 0.07  , 0.03  , 0];
% alpha_L = alpha;
% alpha_L(29:35) = -alpha_L(29:35);
% alpha_L(50:56) = -alpha_L(50:56);
% Alpha=[alpha;
%        alpha_L];   
   
   
   
t=[];
x_sol=[];

s_global=[0];
dphi_global = zeros(1,56);
t_global=[0];
s_overall=[0];
global_position_reference=[0 0];

%load x0.mat
%load x0_to_torso.mat
%load x0_to_torso1.mat
%x0(1)=0;



step=50;
t_end_of_previous_step=0;

t_interrupt=[];
foot_index = 1;


if foot_index == 1
    current_stance_foot_position=F_1_func(x0(1:18));  %FL is swing foot
elseif foot_index == 2
    current_stance_foot_position=F_2_func(x0(1:18));  %RR is swing foot
elseif foot_index == 3
    current_stance_foot_position=F_3_func(x0(1:18));  %FR is swing foot
elseif foot_index == 4
    current_stance_foot_position=F_4_func(x0(1:18));  %RL is swing foot
end
%current_stance_foot_position(1)=0.0376;
for i=1:step*4
    step_no =floor((i-1)/4);
    total_steps =i-1;
    options=odeset('Events',@(t,x) switch_events(t,t_end_of_previous_step,x,foot_index),'RelTol',1e-6,'AbsTol',1e-6, 'MaxStep',1e-2);
    %options=odeset('Events',@(t,x) switch_events(t,x,foot_index));
    [t_each_step,x_each_step,te,xe,ie]=ode45(@(t,x) dynamics(t,x,...
        t_end_of_previous_step,foot_index,Alpha,current_stance_foot_position),tspan,x0,options);
    
 
    if isempty(t)
        
        t=t_each_step;
        x_sol=x_each_step;
        t_interrupt=te;
        t_end_of_previous_step=t_each_step(end) ;
        stance_foot_position_overall_mat=current_stance_foot_position';
    else
        t_so_far=t_each_step+t(end);
        t_interrupt_each_step=te+t(end);
        t=[t;t_so_far];
        x_sol=[x_sol;x_each_step];
        t_end_of_previous_step=t(end);
        
        t_interrupt=[t_interrupt;t_interrupt_each_step];
    end
    

    dq_plus=resetmap(x_each_step(end,:),foot_index,t,t_end_of_previous_step);
    x0=[x_each_step(end,1:18)';dq_plus];
    dq_j = dq_plus-x_each_step(end,19:36)';
    dq_jump=[dq_jump;dq_j'];

     offset= x0(1,1);
    foot_index=mod(i,4)+1;
    if foot_index == 1
        current_stance_foot_position=F_1_func(x0(1:18));  %FL is swing foot
        fprintf('FL')
    elseif foot_index == 2
        current_stance_foot_position=F_2_func(x0(1:18));  %RR is swing foot
        fprintf('RR')
    elseif foot_index == 3
        current_stance_foot_position=F_3_func(x0(1:18));  %FR is swing foot
        fprintf('FR')
    elseif foot_index == 4
        current_stance_foot_position=F_4_func(x0(1:18));  %RL is swing foot
        fprintf('RL')
    end
    
    fprintf('hey,Ive finished %d step\n',i)
    
    %stance_foot_position_overall_mat=[stance_foot_position_overall_mat;current_stance_foot_position'];
   

 %   current_position=[current_position;current_stance_foot_position+r*sin(x_each_step(:,1))];
 %   current_stance_foot_position=current_stance_foot_position+current_step_length;
 foot_index;
end

toc

%%
%laikago_animation(t,x_sol,0)