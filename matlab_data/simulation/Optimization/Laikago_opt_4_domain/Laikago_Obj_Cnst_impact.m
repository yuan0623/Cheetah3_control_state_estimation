function [Cost,Cnst] = Laikago_Obj_Cnst_impact


%(Alpha1,foot_index)


Cost = @obj ;
Cnst = @constr;

%% cost function 
    function J = obj(Alpha)
        
    Alpha1 = Alpha(1:56);
    Alpha2 = Alpha(57:112);
    Alpha3 = Alpha(113:168);
    Alpha4 = Alpha(169:224);
    
    
  %% EQUATING LAST BEZIER COEFFICIENT OF FIRST DOMAIN TO FIRST BEZIER COEFFICIENT OF NEXT DOMAIN
%   Alpha11(7) = Alpha12(1);
%   Alpha21(7) = Alpha22(1);
%   Alpha31(7) = Alpha32(1);
%   Alpha41(7) = Alpha42(1);
%   Alpha51(7) = Alpha52(1);
%     
%   
%   Alpha12(7) = Alpha13(1);
%   Alpha22(7) = Alpha23(1);
%   Alpha32(7) = Alpha33(1);
%   Alpha42(7) = Alpha43(1);
%   Alpha52(7) = Alpha53(1);
%   
%   Alpha13(7) = Alpha14(1);
%   Alpha23(7) = Alpha24(1);
%   Alpha33(7) = Alpha34(1);
%   Alpha43(7) = Alpha44(1);
%   Alpha53(7) = Alpha54(1);
%   
%   Alpha14(7) = Alpha11(1);
%   Alpha24(7) = Alpha21(1);
%   Alpha34(7) = Alpha31(1);
%   Alpha44(7) = Alpha41(1);
%   Alpha54(7) = Alpha51(1);
%%    
           options = optimoptions('fsolve','Algorithm','trust-region-dogleg','Display','off','MaxFunEvals',1e10, ...
          'TolFun',1e-6);
      %q_s=[0, 0, 0.55, 0, 0, 0, -0.05, 0.6,-1.1,0.05, 0.6,-1.1,-0.05, 0.6,-1.1, 0.05, 0.6,-1.1];;%standing pose_Mod.
      %q_g=[0, 0, 0.55, 0, 0, 0, -0.05, 0.63916,-0.8, 0.05, 0.76,-0.8, -0.05, 0.76,-0.8, 0.05, 0.63916,-0.8];% On the go pose modified
      
      q0_1=[0, 0, 0.4268, 0, 0, 0, -0.05, 0.55,-1.19306,0.05, 0.65,-1.2,-0.05, 0.65,-1.2, 0.05, 0.55,-1.19306];% On the go pose modified
      %q0_1=[0, 0, 0.3292, 1.5708, 0, 1.5708, 0.1, 0, -0.8, 0.0965, 0.112, -0.7165, 0.1,0, -0.8, 0.1, -0.14,-0.8192]';
      
      foot_index = 1;
      support_foot_pose_1  = F_1_func(q0_1);
      %support_foot_pose_1 = [0]
      [q_error_1,COP_1,q_sol_whole_step_1,Fr_1,dq_sol_whole_step_1,~]...
          =opt_inv_solve_floating_base_eq(options,Alpha1,foot_index,q0_1,support_foot_pose_1);


      q0_2 = q_sol_whole_step_1(end,:)';
      support_foot_pose_2  = F_2_func(q0_2);
      foot_index = 2;
      [q_error_2,COP_2,q_sol_whole_step_2,Fr_2,dq_sol_whole_step_2,~]...
          =opt_inv_solve_floating_base_eq(options,Alpha2,foot_index,q0_2,support_foot_pose_2);


      q0_3 = q_sol_whole_step_2(end,:)';
      support_foot_pose_3  = F_3_func(q0_3);
      foot_index = 3;
      [q_error_3,COP_3,q_sol_whole_step_3,Fr_3,dq_sol_whole_step_3,~]...
          =opt_inv_solve_floating_base_eq(options,Alpha3,foot_index,q0_3,support_foot_pose_3);


      q0_4 = q_sol_whole_step_3(end,:)';
      support_foot_pose_4  = F_4_func(q0_4);
      foot_index = 4;
      [q_error_4,COP_4,q_sol_whole_step_4,Fr_4,dq_sol_whole_step_4,~]...
          =opt_inv_solve_floating_base_eq(options,Alpha4,foot_index,q0_4,support_foot_pose_4);
      
      %%
       %% hybrid invariance between first and second domain
       % y invariance D-1
       q_minus_1 = q_sol_whole_step_1(end,:);
       q_plus_2 = q_sol_whole_step_2(1,:);
       c_eq_y1=q_minus_1-q_plus_2;
       c_eq_y_1 = norm(c_eq_y1);     
       % dy invariance D-1
       dq_minus_1=dq_sol_whole_step_1(end,:);
       x_minus_1 = [q_minus_1,dq_minus_1];
       foot_index = 1;
       dq_plus_2 = resetmap(x_minus_1,1);
       
       c_eq_dy1 = dq_plus_2-dq_sol_whole_step_2(1,:)';
       c_eq_dy_1 = norm(c_eq_dy1);
   
       %% hybrid invariance between second and third domain
              % y invariance D-2
       q_minus_2 = q_sol_whole_step_2(end,:);
       q_plus_3 = q_sol_whole_step_3(1,:);
       c_eq_y2 = q_minus_2-q_plus_3; 
       c_eq_y_2 = norm(c_eq_y2);
       
       % dy invariance D-2
       dq_minus_2 = dq_sol_whole_step_2(end,:);
       x_minus_2 = [q_minus_2,dq_minus_2];
       foot_index = 2;
       dq_plus_3 = resetmap(x_minus_2,2);      
       c_eq_dy2 = dq_plus_3-dq_sol_whole_step_3(1,:)';
       c_eq_dy_2 = norm(c_eq_dy2);
       
       %% hybrid invariance between third and fourth domain
       % y invariance D-3
       q_minus_3 = q_sol_whole_step_3(end,:);
       q_plus_4 = q_sol_whole_step_4(1,:);
       c_eq_y3 = q_minus_3-q_plus_4;   
       c_eq_y_3 = norm(c_eq_y3);
       
       % dy invariance D-3
       dq_minus_3=dq_sol_whole_step_3(end,:);
       x_minus_3 = [q_minus_3,dq_minus_3];
       foot_index = 3;
       dq_plus_4 = resetmap(x_minus_3,3);       
       c_eq_dy3 = dq_plus_4-dq_sol_whole_step_4(1,:)';
       c_eq_dy_3 = norm(c_eq_dy3);
       
       %% hybrid invariance between fourth and first domain
       % y invariance D-3
       q_minus_4 = q_sol_whole_step_4(end,:);
       q_plus_1 = q_sol_whole_step_1(1,:);
       c_eq_y4 = q_minus_4(2:end)-q_plus_1(2:end); 
       c_eq_y_4 = norm(c_eq_y4);
       
       % dy invariance D-3
       dq_minus_4=dq_sol_whole_step_4(end,:);
       x_minus_4 = [q_minus_4,dq_minus_4];
       foot_index = 4;
       dq_plus_1 = resetmap(x_minus_4,4);
       
       c_eq_dy4 = dq_plus_1-dq_sol_whole_step_1(1,:)';  
       c_eq_dy_4 = norm(c_eq_dy4);


    %%    
       jj = c_eq_dy_1 + c_eq_dy_2 + c_eq_dy_3 + c_eq_dy_4;
       aa=jj-8;
       aa;
       J = 0;
%             J = (norm(Fr_1(:,3)) + norm(Fr_1(:,6))+ norm(Fr_1(:,9))+ norm(Fr_2(:,3)) + norm(Fr_2(:,6))+ norm(Fr_2(:,9))...
%                 +norm(Fr_3(:,3)) + norm(Fr_3(:,6))+ norm(Fr_3(:,9))+ norm(Fr_4(:,3)) + norm(Fr_4(:,6))+ norm(Fr_4(:,9)))/12;
%                 

%             aaa=J-1054.5;
%             aaa;
         %mean(mean(dq_sol.*dq_sol));%mean(Alpha1.*Alpha1);
        
    end

%% constraints
    function [c,ceq] = constr(Alpha)
        %% Foot number and corresponding swing foot
  %%%   Foot number(Domain)     swing foot
  %%%             1             Front left
  %%%             2             Rear right
  %%%             3             Front right
  %%%             4             Rear left
 %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%       
  %% Labeling Bezier coefficient
    Alpha1 = Alpha(1:56);
    Alpha2 = Alpha(57:112);
    Alpha3 = Alpha(113:168);
    Alpha4 = Alpha(169:224);

%% AlphaIJ means Ith Bezier curve of domain J
    Alpha11 = Alpha1(1:7);
    Alpha21 = Alpha1(8:14);
    Alpha31 = Alpha1(15:21);
    Alpha41 = Alpha1(22:28);
    Alpha51 = Alpha1(29:35);
    Alpha61 = Alpha1(36:42);
    Alpha71 = Alpha1(43:49);
    Alpha81 = Alpha1(50:56);

    Alpha12 = Alpha2(1:7);
    Alpha22 = Alpha2(8:14);
    Alpha32 = Alpha2(15:21);
    Alpha42 = Alpha2(22:28);
    Alpha52 = Alpha2(29:35);
    Alpha62 = Alpha2(36:42);
    Alpha72 = Alpha2(43:49);
    Alpha82 = Alpha2(50:56);

    Alpha13 = Alpha3(1:7);
    Alpha23 = Alpha3(8:14);
    Alpha33 = Alpha3(15:21);
    Alpha43 = Alpha3(22:28);
    Alpha53 = Alpha3(29:35);
    Alpha63 = Alpha3(36:42);
    Alpha73 = Alpha3(43:49);
    Alpha83 = Alpha3(50:56);

    Alpha14 = Alpha4(1:7);
    Alpha24 = Alpha4(8:14);
    Alpha34 = Alpha4(15:21);
    Alpha44 = Alpha4(22:28);
    Alpha54 = Alpha4(29:35);
    Alpha64 = Alpha4(36:42);
    Alpha74 = Alpha4(43:49);
    Alpha84 = Alpha4(50:56);
    
  %% EQUATING LAST BEZIER COEFFICIENT OF FIRST DOMAIN TO FIRST BEZIER COEFFICIENT OF NEXT DOMAIN
  cy_12 =  [Alpha11(7)- Alpha12(1); Alpha21(7)- Alpha22(1); Alpha31(7)- Alpha32(1); Alpha41(7)- Alpha42(1);  Alpha51(7)- Alpha52(1)];
 
  cy_23 = [Alpha12(7)- Alpha13(1);Alpha22(7)- Alpha23(1);Alpha32(7)- Alpha33(1);Alpha42(7)- Alpha43(1); Alpha52(7) - Alpha53(1)];
  
  cy_34= [Alpha13(7)-Alpha14(1);Alpha23(7) - Alpha24(1);Alpha33(7)- Alpha34(1);Alpha43(7)- Alpha44(1);Alpha53(7)-Alpha54(1)];
  
  cy_41=[Alpha14(7)- Alpha11(1); Alpha24(7)- Alpha21(1);Alpha34(7) - Alpha31(1);Alpha44(7)- Alpha41(1);Alpha54(7)- Alpha51(1)];
  
  C_y_inv = [cy_12;cy_23;cy_34;cy_41];
  
  
    
  %% New q0
  %q0=[0, 0, 0.3292, 1.5708, 0, 1.5708, 0.1, 0, -0.8, 0.0965, 0, -0.8, 0.1,0, -0.8, 0.1, 0,-0.8]'; % resting pose
  %q0=[0, 0, 0.3292, 1.5708, 0, 1.5708, 0.1, 0, -0.8, 0.0965, 0.112, -0.72, 0.1,0, -0.8, 0.1, -0.14,-0.822]';%on the go pose
  
  
    %% calculate the correspoinding q and dq during a step
      options = optimoptions('fsolve','Algorithm','trust-region-dogleg','Display','off','MaxFunEvals',1e10, ...
          'TolFun',1e-6);
      %q0_1=[0, 0, 0.356, 1.5708, 0, 1.5708, 0.04, -0.25, -0.6, 0.0416, -0.25, -0.6, 0.04,-0.25, -0.6, 0.04, -0.25,-0.6]';
 
      %q0 = [0, 0, 0.4125, 0, 0, 0, -0.05, 0.7,-0.8, 0.05, 0.7,-0.8, -0.05, 0.7,-0.8, 0.05, 0.7,-0.8];%standing pose_Mod.
      
     q0_1=[0, 0, 0.4268, 0, 0, 0, -0.05, 0.55,-1.19306,0.05, 0.65,-1.2,-0.05, 0.65,-1.2, 0.05, 0.55,-1.19306];% On the go pose modified

    %q0_1= [0, 0, 0.3292, 1.5708, 0, 1.5708, 0.1, 0, -0.8, 0.0965, 0.112, -0.7165, 0.1,0, -0.8, 0.1, -0.14,-0.8192]';
      
      mu_s=0.8; %static friction coefficient;
      
      foot_index = 1;
      support_foot_pose_1  = F_1_func(q0_1);
      %support_foot_pose_1 = [0]
      [q_error_1,COP_1,q_sol_whole_step_1,Fr_1,dq_sol_whole_step_1,~]...
          =opt_inv_solve_floating_base_eq(options,Alpha1,foot_index,q0_1,support_foot_pose_1);


      q0_2 = q_sol_whole_step_1(end,:)';
      support_foot_pose_2  = F_2_func(q0_2);
      foot_index = 2;
      [q_error_2,COP_2,q_sol_whole_step_2,Fr_2,dq_sol_whole_step_2,~]...
          =opt_inv_solve_floating_base_eq(options,Alpha2,foot_index,q0_2,support_foot_pose_2);


      q0_3 = q_sol_whole_step_2(end,:)';
      support_foot_pose_3  = F_3_func(q0_3);
      foot_index = 3;
      [q_error_3,COP_3,q_sol_whole_step_3,Fr_3,dq_sol_whole_step_3,~]...
          =opt_inv_solve_floating_base_eq(options,Alpha3,foot_index,q0_3,support_foot_pose_3);


      q0_4 = q_sol_whole_step_3(end,:)';
      support_foot_pose_4  = F_4_func(q0_4);
      foot_index = 4;
      [q_error_4,COP_4,q_sol_whole_step_4,Fr_4,dq_sol_whole_step_4,~]...
          =opt_inv_solve_floating_base_eq(options,Alpha4,foot_index,q0_4,support_foot_pose_4);


        
        
%%

        
        %% reaction force z direction is positive
        %C_grf = -[Fr(5:45,3);Fr(5:45,6);Fr(5:45,9)];%;Fr(15:35,9)
        %C_grf=-1000; %test
%% Test Polygon of support and ZMP
% ST=F_1_func(q_sol_whole_step(15,:));
% x1=ST(1);y1=ST(2);
% x2=ST(4);y2=ST(5);
% x3=ST(7);y3=ST(8);
% zmp_x= x1+((x2-x1)*Fr(:,6)+(x3-x1)*Fr(:,9))./(Fr(:,3)+Fr(:,6)+Fr(:,9));
% zmp_y= y1+((y2-y1)*Fr(:,6)+(y3-y1)*Fr(:,9))./(Fr(:,3)+Fr(:,6)+Fr(:,9));
% 
% axis([-0.3 0.3 -0.2 0.2])
% xlabel('x')
% ylabel('y')
%  L12 = line([x1,x2],[y1,y2],'Color','blue','LineWidth',2);
%  L23 = line([x2,x3],[y2,y3],'Color','blue','LineWidth',2);
%  L31 = line([x3,x1],[y3,y1],'Color','blue','LineWidth',2);
%  hold on 
%  plot(zmp_x,zmp_y,'Color','black','LineWidth',1.5);
%  grid on
% 
%  y_start=y1+((y2-y1)/(x2-x1))*(zmp_x(1)-x1);
%  y_end=y1+((y2-y1)/(x2-x1))*(zmp_x(end)-x1);       
         
         %% %% ZMP within polygon of support
%          zmp_ceq1= [zmp_y(1)-(y1+y2)/2; zmp_x(1)-(x1+x2)/2];
%          zmp_ceq2= [zmp_y(end)-(y1+y2)/2-(Alpha1(42)-Alpha1(36))*(y2-y1)/(4*(x2-x1)); zmp_x(end)-(x1+x2)/2-(Alpha1(42)-Alpha1(36))/4];
%          zmp_c1= [(zmp_y(2:end-1)-(y1+y2)/2) ];%((x1+x2)/2 -zmp_x(2:end-1))
        


       
%%    foot_index 1

     %% Feasible q   
        error_1 = q_error_1;
        C1_ceq_1 = error_1;
    %% unilateral constraints
        %Fr= Fr_1;
        C_grf_1 = -[Fr_1(6:45,3);Fr_1(6:45,6);Fr_1(6:45,9)];% A step (s=0 to 1) is devided into 50 substeps
    %% Friction cone    
        fc_11= sqrt(Fr_1(6:45,1).*Fr_1(6:45,1)+Fr_1(6:45,2).*Fr_1(6:45,2))-mu_s*Fr_1(6:45,3);
        fc_12= sqrt(Fr_1(6:45,4).*Fr_1(6:45,4)+Fr_1(6:45,5).*Fr_1(6:45,5))-mu_s*Fr_1(6:45,6);
        fc_13= sqrt(Fr_1(6:45,7).*Fr_1(6:45,7)+Fr_1(6:45,8).*Fr_1(6:45,8))-mu_s*Fr_1(6:45,9);
        
        C_fc_1 = [fc_11;fc_12;fc_13];
        C_fc_1 = -1;
        %C_grf_1 = [];
    %% pelvis pose
        % Alpha11 is coefficient for y-coordinate of base
         
        % Alpha21 is coefficient for z-coordinate of pelvis
        C2_c_11 = [Alpha21-0.5,-Alpha21+0.3]'; %pelvis z coordinate is between 0.3 to 0.4m
        
        %% swing foot trave direction
        %Alpha61 is Coefficient for x-coordinate of swing leg
        C6_c_11 = [Alpha61-0.4,-Alpha61-0.15]';
        C6_c_21_3 = [Alpha61(1)-Alpha63(1)+0.04, -Alpha61(7)+Alpha63(1)+0.04]';
        
        
        %% swing foot above the ground
        %Alpha81 is Coefficient for z-coordinate of swing leg
        C8_ceq_11 = [Alpha81(1); Alpha81(end)]; %Swing foot touches the ground at start and end
        C8_c_11 = [Alpha81(2)-0.01,-Alpha81(4)+0.045, Alpha81(6)-0.01,-Alpha81(2:6)]';% Swing foot above the the ground
%%
       C2_ceq_1 =[C1_ceq_1; C8_ceq_11]; 
       C1_c_1 = [C_grf_1; C_fc_1; C2_c_11;C6_c_11;C8_c_11;C6_c_21_3];
        
%% foot_index 2        

     %% Feasible q   
        error_2 = q_error_2;
        C1_ceq_2 = error_2;
    %% unilateral constraints
        %Fr= Fr_2;
        C_grf_2 = -[Fr_2(6:45,3);Fr_2(6:45,6);Fr_2(6:45,9)];% A step (s=0 to 1) is devided into 50 substeps    
  
     %% Friction cone    
        fc_21= sqrt(Fr_2(6:45,1).*Fr_2(6:45,1)+Fr_2(6:45,2).*Fr_2(6:45,2))-mu_s*Fr_2(6:45,3);
        fc_22= sqrt(Fr_2(6:45,4).*Fr_2(6:45,4)+Fr_2(6:45,5).*Fr_2(6:45,5))-mu_s*Fr_2(6:45,6);
        fc_23= sqrt(Fr_2(6:45,7).*Fr_2(6:45,7)+Fr_2(6:45,8).*Fr_2(6:45,8))-mu_s*Fr_2(6:45,9);
        
        C_fc_2 = [fc_21;fc_22;fc_23]; 
        C_fc_2 = -1;
        
%% pelvis pose
        % Alpha12 is coefficient for y-coordinate of base
         
        % Alpha22 is coefficient for z-coordinate of pelvis
        C2_c_12 = [Alpha22-0.5,-Alpha22+0.3]'; %pelvis z coordinate is between 0.3 to 0.4m
        
        %% swing foot trave direction
        %Alpha62 is Coefficient for x-coordinate of swing leg
        C6_c_12 = [Alpha62+0.1,-Alpha62-0.3]';
        C6_c_22_4 = [Alpha62(1)-Alpha64(1)+0.04, -Alpha62(7)+Alpha64(1)+0.04]';
        %% swing foot above the ground
        %Alpha82 is Coefficient for z-coordinate of swing leg
        C8_ceq_12 = [Alpha82(1); Alpha82(end)]; %Swing foot touches the ground at start and end
        C8_c_12 = [Alpha82(2)-0.01,-Alpha82(4)+0.045, Alpha82(6)-0.01,-Alpha82(2:6)]';% Swing foot above the the ground        
%%
       C2_ceq_2 =[C1_ceq_2; C8_ceq_12]; 
       C1_c_2 = [C_grf_2; C_fc_2; C2_c_12;C6_c_12;C8_c_12;C6_c_22_4];
        
%% foot_index 3          

     %% Feasible q   
        error_3 = q_error_3;
        C1_ceq_3 = error_3;
    %% unilateral constraints
        %Fr= Fr_3;
        C_grf_3 = -[Fr_3(6:45,3);Fr_3(6:45,6);Fr_3(6:45,9)];% A step (s=0 to 1) is devided into 50 substeps    

     %% Friction cone    
        fc_31= sqrt(Fr_3(6:45,1).*Fr_3(6:45,1)+Fr_3(6:45,2).*Fr_3(6:45,2))-mu_s*Fr_3(6:45,3);
        fc_32= sqrt(Fr_3(6:45,4).*Fr_3(6:45,4)+Fr_3(6:45,5).*Fr_3(6:45,5))-mu_s*Fr_3(6:45,6);
        fc_33= sqrt(Fr_3(6:45,7).*Fr_3(6:45,7)+Fr_3(6:45,8).*Fr_3(6:45,8))-mu_s*Fr_3(6:45,9);
        
        C_fc_3 = [fc_31;fc_32;fc_33];         
        C_fc_3 = -1;
%% pelvis pose
        % Alpha13 is coefficient for y-coordinate of base
         
        % Alpha23 is coefficient for z-coordinate of pelvis
        C2_c_13 = [Alpha23-0.5,-Alpha23+0.3]'; %pelvis z coordinate is between 0.3 to 0.4m
        
        %% swing foot trave direction
        %Alpha63 is Coefficient for x-coordinate of swing leg
        C6_c_13 = [Alpha63-0.4,-Alpha63+0.2]';
        C6_c_23_1 = [Alpha63(1)-Alpha61(7)+0.04, -Alpha63(7)+Alpha63(1)+0.04]';

        %% swing foot above the ground
        %Alpha83 is Coefficient for z-coordinate of swing leg
        C8_ceq_13 = [Alpha83(1); Alpha83(end)]; %Swing foot touches the ground at start and end
        C8_c_13 = [Alpha83(2)-0.01,-Alpha83(4)+0.045, Alpha83(6)-0.01,-Alpha83(2:6)]';% Swing foot above the the ground       
%%
       C2_ceq_3 =[C1_ceq_3; C8_ceq_13]; 
       C1_c_3 = [C_grf_3; C_fc_3; C2_c_13;C6_c_13;C8_c_13;C6_c_23_1];
%% foot_index 4         

     %% Feasible q   
        error_4 = q_error_4;
        C1_ceq_4 = error_4;
    %% unilateral constraints
        %Fr= Fr_4;
        C_grf_4 = -[Fr_4(6:45,3);Fr_4(6:45,6);Fr_4(6:45,9)];% A step (s=0 to 1) is devided into 50 substeps    
 
     %% Friction cone    
        fc_41= sqrt(Fr_4(6:45,1).*Fr_4(6:45,1)+Fr_4(6:45,2).*Fr_4(6:45,2))-mu_s*Fr_4(6:45,3);
        fc_42= sqrt(Fr_4(6:45,4).*Fr_4(6:45,4)+Fr_4(6:45,5).*Fr_4(6:45,5))-mu_s*Fr_4(6:45,6);
        fc_43= sqrt(Fr_4(6:45,7).*Fr_4(6:45,7)+Fr_4(6:45,8).*Fr_4(6:45,8))-mu_s*Fr_4(6:45,9);
        
        C_fc_4 = [fc_41;fc_42;fc_43];         
        C_fc_4 = -1;
%% pelvis pose
        % Alpha14 is coefficient for y-coordinate of base
         
        % Alpha24 is coefficient for z-coordinate of pelvis
        C2_c_14 = [Alpha24-0.5,-Alpha24+0.3]'; %pelvis z coordinate is between 0.3 to 0.4m
        
        %% swing foot trave direction
        %Alpha64 is Coefficient for x-coordinate of swing leg
        C6_c_14 = [Alpha64+0.030,-Alpha64-0.25]';
        C6_c_24_2 = [Alpha64(1)-Alpha62(7)+0.04, -Alpha64(7)+Alpha62(1)+0.04]';

        %% swing foot above the ground
        %Alpha84 is Coefficient for z-coordinate of swing leg
        C8_ceq_14 = [Alpha84(1); Alpha84(end)]; %Swing foot touches the ground at start and end
        C8_c_14 = [Alpha84(2)-0.01,-Alpha84(4)+0.045, Alpha84(6)-0.01,-Alpha84(2:6)]';% Swing foot above the the ground       
        %% 
       C2_ceq_4 =[C1_ceq_4; C8_ceq_14]; 
       C1_c_4 = [C_grf_4; C_fc_4; C2_c_14;C6_c_14;C8_c_14;C6_c_24_2];
       %% 
       %% hybrid invariance between first and second domain
       % y invariance D-1
       q_minus_1 = q_sol_whole_step_1(end,:);
       q_plus_2 = q_sol_whole_step_2(1,:);
       c_eq_y1=q_minus_1-q_plus_2;
       c_eq_y_1 = norm(c_eq_y1);
       c_ineq_y_1 = c_eq_y_1-0.1;
       
       % dy invariance D-1
       dq_minus_1=dq_sol_whole_step_1(end,:);
       q_minus_1=q_sol_whole_step_1(end,:);
       x_minus_1 = [q_minus_1,dq_minus_1];
       foot_index = 1;
       dq_plus_2 = resetmap(x_minus_1,1);
       
       c_eq_dy1 = dq_plus_2-dq_sol_whole_step_2(1,:)';
       c_eq_dy_1 = norm(c_eq_dy1);
       c_ineq_dy_1=c_eq_dy_1-2;
       
       
       
       %% hybrid invariance between second and third domain
              % y invariance D-2
       q_minus_2 = q_sol_whole_step_2(end,:);
       q_plus_3 = q_sol_whole_step_3(1,:);
       c_eq_y2 = q_minus_2-q_plus_3; 
       c_eq_y_2 = norm(c_eq_y2);
       c_ineq_y_2 = c_eq_y_2 -0.1;
       
       % dy invariance D-2
       dq_minus_2 = dq_sol_whole_step_2(end,:);
       q_minus_2 = q_sol_whole_step_2(end,:);
       x_minus_2 = [q_minus_2,dq_minus_2];
       foot_index = 2;
       dq_plus_3 = resetmap(x_minus_2,2);
       
       c_eq_dy2 = dq_plus_3-dq_sol_whole_step_3(1,:)';
       c_eq_dy_2 = norm(c_eq_dy2);
       c_ineq_dy_2 = c_eq_dy_2-2;
       
       %% hybrid invariance between third and fourth domain
       % y invariance D-3
       q_minus_3 = q_sol_whole_step_3(end,:);
       q_plus_4 = q_sol_whole_step_4(1,:);
       c_eq_y3 = q_minus_3-q_plus_4;   
       c_eq_y_3 = norm(c_eq_y3);
       c_ineq_y_3 = c_eq_y_3-0.1;
       
       % dy invariance D-3
       dq_minus_3=dq_sol_whole_step_3(end,:);
       q_minus_3=q_sol_whole_step_3(end,:);
       x_minus_3 = [q_minus_3,dq_minus_3];
       foot_index = 3;
       dq_plus_4 = resetmap(x_minus_3,3);
       
       c_eq_dy3 = dq_plus_4-dq_sol_whole_step_4(1,:)';
       c_eq_dy_3 = norm(c_eq_dy3);
       c_ineq_dy_3 = c_eq_dy_3-2;
       
       %% hybrid invariance between fourth and first domain
       % y invariance D-3
       q_minus_4 = q_sol_whole_step_4(end,:);
       q_plus_1 = q_sol_whole_step_1(1,:);
       c_eq_y4 = q_minus_4(2:end)-q_plus_1(2:end); 
       c_eq_y_4 = norm(c_eq_y4);
       c_ineq_y_4 = c_eq_y_4-0.1;
       
       % dy invariance D-3
       dq_minus_4=dq_sol_whole_step_4(end,:);
       q_minus_4=q_sol_whole_step_4(end,:);
       x_minus_4 = [q_minus_4,dq_minus_4];
       foot_index = 4;
       dq_plus_1 = resetmap(x_minus_4,4);
       
       c_eq_dy4 = dq_plus_1-dq_sol_whole_step_1(1,:)';  
       c_eq_dy_4 = norm(c_eq_dy4);
       c_ineq_dy_4 = c_eq_dy_4-2;
       
       
       %% y invariance
        fprintf('\n')
        %;c_eq_y_1';c_eq_y_2';c_eq_y_3';c_eq_y_4';c_eq_dy_1;c_eq_dy_2;c_eq_dy_3;c_eq_dy_4
        
       C2_ceq =[C2_ceq_1; C2_ceq_2;C2_ceq_3;C2_ceq_4;C_y_inv];               %[C1_ceq; C8_ceq1;zmp_ceq1;zmp_ceq2];
       C1_c = [C1_c_1; C1_c_2; C1_c_3; C1_c_4 ];
       hyb_in= [c_ineq_y_1;c_ineq_y_2;c_ineq_y_3;c_ineq_y_4;c_ineq_dy_1;c_ineq_dy_2;c_ineq_dy_3;c_ineq_dy_4]; % 0.1 substracted from y invariance and 2 substracted from dy invariance
       %[C_grf; C2_c1;C6_c1;C8_c1;zmp_c1];
        
        
        c=C1_c'
        
        ceq=C2_ceq'
         q_inter=[q_sol_whole_step_1;q_sol_whole_step_2;q_sol_whole_step_3;q_sol_whole_step_4];
         t_inter = [1:1:200];
%         laikago_animation(t_inter,q_inter,0)      
       
    end

end