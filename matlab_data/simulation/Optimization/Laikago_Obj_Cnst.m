function [Cost,Cnst] = Laikago_Obj_Cnst




Cost = @obj;
Cnst = @constr;

%% cost function
    function J = obj(alpha)
        
        
        J = 0;
        
    end

%% constraints
    function [c,ceq] = constr(alpha)
        %% calculate the correspoinding q and dq during a step

        options = optimoptions('fsolve','Algorithm','trust-region-dogleg','Display','off','MaxFunEvals',1e10, ...
            'TolFun',1e-8); 
        
        [q_error,COP,q_sol_whole_step,Fr,dq_sol_whole_step,~]...
            =opt_inverse_solve_floating_base_equ(options,alpha);
        COP_x = COP(16:35,1);
        COP_y = COP(16:35,2);
        error = [q_error-0];  
        %alpha2walking(q_sol_whole_step)
        %% reaction force z direction is positive
        C_grf = -Fr(:,3);
        %C_grf=-1000; %test
        %% COP within polygon of support
           % Assume feet length [x (-0.05, 0.2), y(-0.1,0.1)]
%         if COP_x>0
%             C_cop = [COP_x-0.25;abs(COP_y)-0.1];
%         else
%             C_cop = [abs(COP_x)-0.15;abs(COP_y)-0.1];
%         end
        C_cop= -.001; %test
        %% q has to be feasible
        C1_ceq = error;
        
        %% pelvis pose
%        alpha1=alpha(1:7);  % Coefficient for x-coordinate of pelvis
%        C1_ceq1 = alpha1(1)+alpha1(end); %Symmetry about support foot%?
%        C1_c1 = [alpha1(1:3),-alpha1(5:7)]'; % Start with a negative value and body is behind support foot before midstance

        alpha3=alpha(8:14);  % Coefficient for z-coordinate of pelvis
        C3_c1 = [alpha3-0.35*ones(1,7),-alpha3+0.25*ones(1,7)]'; %pelvis z coordinate is between 0.25 to 0.35
       
        %% swing foot trave direction
        alpha7=alpha(36:42); % Coefficient for x-coordinate of swing leg
        %C6_ceq1 =alpha7(1)+alpha7(end);% alpha7(1)+alpha7(end); %Symmetry about support foot%?
        
        C6_c1 = [alpha7(1:2)+0.15,-alpha7(6:7)+0.15]'; % Start with a negative value and body is behind support foot before midstance
        C6_c2 = [alpha7(4)-0.15,alpha7(5)-0.2]';
        
        
        
        %% swing foot above the ground
        
        alpha8 = alpha(50:56);
        C8_ceq1 = [alpha8(1)+ alpha8(end)]'; %Swing foot touches the stairs at start and end
        C8_c1 = [alpha8(1)+0.15,-alpha8(4:6)+0.2]';% Swing foot above the stairs during intermediate steps
        %C2_ceq1 = [alpha4(1);alpha4(end)];
        %C1_c2 = -alpha2(1:end-1)'; % body  is leaned forward throughout the motion


        %% 
        
        
        fprintf('\n')
%          C2_ceq = [C1_ceq;C3_ceq1]; 
%          C1_c = [C3_c1];
        
        
       C2_ceq =[C1_ceq;C6_ceq1;C8_ceq1];
       C1_c = [C_grf;C_cop;C3_c1;C6_c1;C6_c2;C8_c1];
        
        
        c=C1_c
        
        ceq=[C2_ceq]
        
       
    end

end