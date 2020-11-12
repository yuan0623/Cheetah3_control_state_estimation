function [Cost,Cnst] = Laikago_ObjectiveAndConstraints
    Cost = @obj;
    Cnst = @constr;
    
    %% Use fully actuated objective and constraints: No zero dynamics!
    %% cost function
    function J = obj(optimization_variable)

        J=1;

    end

    %% constraints
    function [c,ceq] = constr(optimization_variable)
        q1_0 = optimization_variable(78);
        dq1_0 = optimization_variable(80);

        x0 = [q1_0; dq1_0];
        %% set the ode 
  %%Modify this part to solve for zero dynamics      
        odeoptions=odeset('Events',@(t,x) opt_switch_events(t,x,optimization_variable),'RelTol',1e-6,'AbsTol',1e-6);
        %options=odeset('Events',@(t,x) switch_events(t,x,foot_index));
        tspan= [0 6];
        [t,x_sol,t_minus,x_minus,flag]=ode45(@(t,z) FiveDOF_zero_dynamics(t,z,optimization_variable),tspan,x0,odeoptions);
        if ~isempty(x_minus)
            theta_minus = x_minus(1);
            dtheta_minus = x_minus(2);
            [q_minus,dq_minus] = theta2q(theta_minus,dtheta_minus,optimization_variable);
            dq_plus = FiveDOF_ResetMap(q_minus,dq_minus);
            R = [0 0 0 0 1;
                 0 0 0 1 0;
                 0 0 1 0 0;
                 0 1 0 0 0;
                 1 0 0 0 0];


            dq_plus = R*dq_plus;
            dtheta_plus = dq_plus(1);
            q_plus = R*q_minus;
            [ph_minus,dph_minus,ddph_minus]=FiveDOF_new_Bezier_6th(optimization_variable,1);
            [ph_plus,dph_plus,ddph_plus]=FiveDOF_new_Bezier_6th(optimization_variable,0);
            %% hybrid invariance condition
            y_minus = [q_minus(2);q_minus(3);q_minus(4);q_minus(5)] - ph_minus;
            y_plus = [q_plus(2);q_plus(3);q_plus(4);q_plus(5)] - ph_plus;
            ceq1_1 = y_plus - y_minus;

            theta_plus = optimization_variable(29);
            theta_minus = optimization_variable(30);
            ds_dtheta = 1/(theta_minus - theta_plus);

            dy_minus = [dq_minus(2);dq_minus(3);dq_minus(4);dq_minus(5)] - dph_minus*ds_dtheta*dtheta_minus;
            dy_plus = [dq_plus(2);dq_plus(3);dq_plus(4);dq_plus(5)] - dph_plus*ds_dtheta*dtheta_plus;
            ceq1_2 = dy_minus - dy_plus;
            %% periodicity 
            ceq1_3 = dtheta_plus - dq1_0;
            ceq1 = [ceq1_1 ; ceq1_2; ceq1_3];


            %% feasibility constraint
            
            theta_vec = linspace(theta_plus, theta_minus,50)';
            q_vec = zeros(5,length(theta_vec));
            for i=1:length(theta_vec)

                [q,~]=theta2q(theta_vec(i),0,optimization_variable);
                q_vec(:,i) = q;
            end
            q0 = q_vec(:,1);
            qe = q_vec(:,end);
            swing_height_0 = swing_foot_height(q0);
            swing_height_e = swing_foot_height(qe);
            %swing foot touches the ground at the beginning and the end
            ceq2_1 = [swing_height_0; swing_height_e];
            ceq2 = ceq2_1;
            
            swing_height_vec = zeros(1,length(theta_vec)-2);
            for i=2:(length(theta_vec)-1)
                swing_height_0 = swing_foot_height(q_vec(:,i));
                swing_height_vec(i-1) = swing_height_0;
            end
            c1_1 = -swing_height_vec';
            c1_2 = swing_height_vec'-0.5;
            c1 = [c1_1;c1_2];
            % swing foot is higher than the ground
            
            %% stability check 
            pertubation = 0.03;
            jacobian = linearized_poincare_map(x0,pertubation,optimization_variable);
            %jacobian = 0;
            c2 = jacobian -0.8;
            
            
            %% overall constraint

           
            %c2;
            ceq = [ceq1;ceq2];
            
            c = [c1;c2];
            %c = [];
        else
            ceq=1;
            c=1;
       
        end
    end
end