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
clear
tic
global s_overall y_global dy_global t_global ...
    global_position_reference Fr COP s_global dphi_global phi_global hc_global
tspan=[0 3];
x0=zeros(1,36);


x0(4)=pi/2;
%x0(5)=pi/2;
x0(6)=pi/2;

x0(8)=-0.7;
x0(9)=0.7;

x0(11)=-0.7;
x0(12)=0.7;

x0(14)=-0.7;
x0(15)=0.7;

x0(17)=-0.7;
x0(18)=0.7;
load x_initial.mat
x0 = x_initial;
%a=F_2_func(x0(1:18));
%x0(3)=-a(3);
%x0=zeros(1,36);
%x0(15)= 0.2;
%x0(1:18)=rand(18,1);
%x0=[x0;x0];
%laikago_animation(0,x0,0)
%x0=rand(1,36);
y_global=[];

dy_global=[];
phi_global=[];
%load save_correct_upgraded.mat
%Alpha=optimized_alpha;
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
alpha = [0.4109, 0.3683, 0.3683, 0.3683, 0.3683, 0.3683, 0.4109,...  %base config
         pi/2  , pi/2  , pi/2  , pi/2  , pi/2  , pi/2  , pi/2,...    %base config
         0     , 0     , 0     , 0     , 0     , 0     , 0,...       %base config
         -0.03 , -0.02 , -0.01 , 0     , 0.01  , 0.02  , 0.03,...
         -0.1146, -0.1146, -0.1146, -0.1146, -0.1146, -0.1146, -0.1146,...
         0     , 0.03  , 0.07  , 0.1   , 0.07  , 0.03  , 0,...   
         -0.03 , -0.02 , -0.01 , 0     , 0.01  , 0.02  , 0.03,...
         0.1146,0.1146,0.1146,0.1146,0.1146,0.1146,0.1146,...
         0     , 0.03  , 0.07  , 0.1   , 0.07  , 0.03  , 0];
alpha_L = alpha;
alpha_L(29:35) = -alpha_L(29:35);
alpha_L(50:56) = -alpha_L(50:56);
Alpha=[alpha;
       alpha_L];   
   
   
   
t=[];
x_sol=[];
s_global=[0];
dphi_global = zeros(1,85);
t_global=[0];
s_overall=[0];
global_position_reference=[0 0];

%load x0.mat
%load x0_to_torso.mat
%load x0_to_torso1.mat
%x0(1)=0;



step=1;
t_end_of_previous_step=0;

t_interrupt=[];
foot_index = -1;


if foot_index == -1
    current_stance_foot_position=F_1_func(x0(1:18));  %Right foot as stance foot
elseif foot_index == 1
    current_stance_foot_position=F_2_func(x0(1:18));  %Left foot as stance foot
end
%current_stance_foot_position(1)=0.0376;
for i=1:step
    options=odeset('Events',@(t,x) switch_events(t,x,foot_index),'RelTol',1e-6,'AbsTol',1e-6);
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
    

    dq_plus=resetmap(x_each_step(end,:),foot_index);
    %x0=[x_each_step(end,1:18)';dq_plus];

    if foot_index==-1
        current_stance_foot_position=F_1_func(x0(1:18));
        fprintf('heihei')
    elseif foot_index == 1
        current_stance_foot_position=F_2_func(x0(1:18));
        fprintf('xixi')
    end
    fprintf('hey,Ive finished %d step\n',i)
    stance_foot_position_overall_mat=[stance_foot_position_overall_mat;current_stance_foot_position'];
    foot_index=(-1)^(i+1);
 %   current_position=[current_position;current_stance_foot_position+r*sin(x_each_step(:,1))];
 %   current_stance_foot_position=current_stance_foot_position+current_step_length;
end


%% plot stance foot position

%{
%%
figure

subplot(2,1,1);
hold on 
plot(t_global(2:end),global_position_reference(2:end,1),'LineWidth',2.5,'LineStyle','--','Color','r')
%plot(t,x(:,1))
%plot(t_overall(1:25:end),q1_overall(1:25:end))
plot(t(1:90:end),x_sol(1:90:end,1),'--gs','MarkerSize',3,...
    'MarkerEdgeColor','g',...
    'MarkerFaceColor',[0.9,0.9,0.8])
plot(t_overall(1:25:end),q1_overall(1:25:end),'--bs','MarkerSize',3,...
    'MarkerEdgeColor','b',...
    'MarkerFaceColor',[0.5,0.5,0.5])
hold off
axis([0 3 -0.02 0.12])
xlabel('\it{t (s)}','FontName','Times New Roman');
ylabel('\it{x (m)}','FontName','Times New Roman');
yticks([-0.02 0.02 0.06 0.1])
grid on
box on
legend1 = legend('x_d(t)','x_{bm}','x_{bw}','Location','best','Orientation','horizontal');
legend1.FontAngle = 'italic';
legend1.FontName = 'Times New Roman';
legend1.FontSize=12;

legend boxoff 
title('(a)')

subplot(2,1,2)
load stance_foot_position_overall0921.mat
hold on
plot(stance_foot_position_overall_mat(2:2:end,1),-stance_foot_position_overall_mat(2:2:end,2),'o','LineWidth',3)
plot(stance_foot_position_overall_mat(1:2:end,1),-stance_foot_position_overall_mat(1:2:end,2),'o','LineWidth',3)
plot(stance_foot_position_overall(2:2:end,1),stance_foot_position_overall(2:2:end,2),'x','LineWidth',3)
plot(stance_foot_position_overall(1:2:end,1),stance_foot_position_overall(1:2:end,2),'x','LineWidth',3)

legend1 = legend('right foot (M)','left foot (M)','right foot (W)','left foot (W)','Location','best','Orientation','horizontal');
legend1.FontAngle = 'italic';
legend1.FontName = 'Times New Roman';
legend1.EdgeColor = 'm';
legend1.LineWidth = 1;
legend boxoff 
xlim([0 0.6])
ylim([-0.1 0.1])
xlabel('\it{x (m)}','FontName','Times New Roman')
ylabel('\it{y (m)}','FontName','Times New Roman')
hold off
grid on
box on
title('(b)')
%%
figure
plot(t_global,global_position_reference(:,2)-global_position_reference(:,2))
hold on 
plot(t,x_sol(:,2))
legend('y_d(t)','q_2','Location','best','Orientation','horizontal')
axis([0 8 -0.08 0.08])
xlabel('t (s)')
ylabel('x (m)')
plot(t_overall(1:25:end),-q2_overall(1:25:end),'--bs','MarkerSize',3,...
    'MarkerEdgeColor','b',...
    'MarkerFaceColor',[0.5,0.5,0.5])
hold off
legend boxoff 

%}
%{
figure
hold on
title('y')
for j=1:11
    plot(t_global(2:end),y_global(:,j))
end
legend
hold off
%%
figure
hold on
title('dy')
for k=1:11
    plot(t_global(2:end),dy_global(:,k))
end
legend
hold off
%}
%{
hold on
for k=12:24
    plot(t,x(:,k))
end
hold off
%}
toc
%% run observer

%laikago_animation(t,x_sol,0)