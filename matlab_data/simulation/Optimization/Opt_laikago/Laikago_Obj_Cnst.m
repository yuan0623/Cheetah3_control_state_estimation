function [Cost,Cnst] = Laikago_Obj_Cnst(Alpha1,foot_index)


%(Alpha1,foot_index)


Cost = @obj ;
Cnst = @constr;

%% cost function 
    function J = obj(Alpha1)
            options = optimoptions('fsolve','Algorithm','trust-region-dogleg','Display','off','MaxFunEvals',1e10, ...
            'TolFun',1e-8); 
            [~,~,q_sol,~,dq_sol,~]...
             =opt_inv_solve_floating_base_eq(options,Alpha1,foot_index);
       
            J =0; %mean(mean(dq_sol.*dq_sol));%mean(Alpha1.*Alpha1);
        
    end

%% constraints
    function [c,ceq] = constr(Alpha1)
        %% calculate the correspoinding q and dq during a step

        options = optimoptions('fsolve','Algorithm','trust-region-dogleg','Display','off','MaxFunEvals',1e10, ...
            'TolFun',1e-10); 
        

        [q_error,COP,q_sol_whole_step,Fr,dq_sol_whole_step,~]...
            =opt_inv_solve_floating_base_eq(options,Alpha1,foot_index);

        %COP_x = COP(10:40,1);
        %COP_y = COP(10:40,2);
        error = q_error;  
        %alpha2walking(q_sol_whole_step)
        %% reaction force z direction is positive
        C_grf = -[Fr(5:45,3);Fr(5:45,6);Fr(5:45,9)];%;Fr(15:35,9)
        %C_grf=-1000; %test
%% Test
ST=F_1_func(q_sol_whole_step(15,:));
x1=ST(1);y1=ST(2);
x2=ST(4);y2=ST(5);
x3=ST(7);y3=ST(8);
zmp_x= x1+((x2-x1)*Fr(:,6)+(x3-x1)*Fr(:,9))./(Fr(:,3)+Fr(:,6)+Fr(:,9));
zmp_y= y1+((y2-y1)*Fr(:,6)+(y3-y1)*Fr(:,9))./(Fr(:,3)+Fr(:,6)+Fr(:,9));

axis([-0.3 0.3 -0.2 0.2])
xlabel('x')
ylabel('y')
 L12 = line([x1,x2],[y1,y2],'Color','blue','LineWidth',2);
 L23 = line([x2,x3],[y2,y3],'Color','blue','LineWidth',2);
 L31 = line([x3,x1],[y3,y1],'Color','blue','LineWidth',2);
 hold on 
 plot(zmp_x,zmp_y,'Color','black','LineWidth',1.5);
 grid on

 y_start=y1+((y2-y1)/(x2-x1))*(zmp_x(1)-x1);
 y_end=y1+((y2-y1)/(x2-x1))*(zmp_x(end)-x1);       
        
        
        %% COP within polygon of support
           % Assume feet length [x (-0.05, 0.2), y(-0.1,0.1)]
%         if COP_x>0
%             C_cop = [COP_x-0.25;abs(COP_y)-0.1];
%         else
%             C_cop = [abs(COP_x)-0.15;abs(COP_y)-0.1];
%         end
        %C_cop= -.001; %test
        %% q has to be feasible
         C1_ceq = error;
        
        %% pelvis pose
         alpha1=Alpha1(1:7);  % Coefficient for y-coordinate of base
         %%
         zmp_ceq1= [zmp_y(1)-(y1+y2)/2; zmp_x(1)-(x1+x2)/2];
         zmp_ceq2= [zmp_y(end)-(y1+y2)/2-(Alpha1(42)-Alpha1(36))*(y2-y1)/(4*(x2-x1)); zmp_x(end)-(x1+x2)/2-(Alpha1(42)-Alpha1(36))/4];
         zmp_c1= [(zmp_y(2:end-1)-(y1+y2)/2) ];%((x1+x2)/2 -zmp_x(2:end-1))
         %%
         C1_ceq1 = [alpha1(1)-y_start; alpha1(end)-y_end]; %at the boundary of support polygon
         C1_c1 = [alpha1(2:6)-y_start,-alpha1(2:4)+y_end]'; % Start with a negative value and body is behind support foot before midstance

        alpha2=Alpha1(8:14);  % Coefficient for z-coordinate of pelvis
        C2_c1 = [alpha2-0.5*ones(1,7),-alpha2+0.2*ones(1,7)]'; %pelvis z coordinate is between 0.3 to 0.4m
       
        %% swing foot trave direction
        alpha6=Alpha1(36:42); % Coefficient for x-coordinate of swing leg
        
        %C6_ceq1 =alpha6(1)+alpha6(end);% alpha7(1)+alpha7(end); %Symmetry about support foot%?
        
        %C6_c1 = [alpha6(1:2)+0.15,-alpha6(6:7)+0.15]'; % Start with a negative value and body is behind support foot before midstance
        C6_c1 = [alpha6-0.5,-alpha6-0.1]';
        
        
        
        %% swing foot above the ground
        
        alpha8 = Alpha1(50:56);
        C8_ceq1 = [alpha8(1)+alpha8(end);alpha8(1)-alpha8(end)]; %Swing foot touches the ground at start and end
        C8_c1 = [alpha8(2)-0.05,-alpha8(3:5)+0.03]';% Swing foot above the the ground
        %C2_ceq1 = [alpha4(1);alpha4(end)];
        %C1_c2 = -alpha2(1:end-1)'; % body  is leaned forward throughout the motion


        %% 
        
        
        fprintf('\n')
%          C2_ceq = [C1_ceq;C3_ceq1]; 
%          C1_c = [C2_c1];
        %;C_cop
        
       C2_ceq =[C1_ceq; C8_ceq1;zmp_ceq1;zmp_ceq2];
       C1_c = [C_grf; C2_c1;C6_c1;C8_c1;zmp_c1];
        
        
        c=C1_c
        
        ceq=C2_ceq
        
       
      end

end




