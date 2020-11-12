function [alp1, alp2] = bezier_coefficiet(Optimized_1, Optimized_2, Optimized_3, Optimized_4, foot_index)

      options = optimoptions('fsolve','Algorithm','trust-region-dogleg','Display','off','MaxFunEvals',1e10, ...
                'TolFun',1e-8);
      q0_1=[0, 0, 0.356, 1.5708, 0, 1.5708, 0.04, -0.25, -0.6, 0.04, -0.25, -0.5992, 0.04,-0.25, -0.6, 0.04, -0.25,-0.6];
      SF=hc_opt1_func(q0_1);
      
      if foot_index == 1
          Alpha_minus = Optimized_1;
          support_foot_pose_1  = F_1_func(q0_1);
          [q_error_1,COP_1,q_sol_whole_step_1,Fr,dq_sol_whole_step_1,~]...
          =opt_inv_solve_floating_base_eq(options,Optimized_1,foot_index,q0_1,support_foot_pose_1);
      
           q_minus = q_sol_whole_step_1(end,:);

           dq_minus = dq_sol_whole_step_1(end,:);

           x_minus = [q_minus,dq_minus];

           dq_plus = resetmap(x_minus,foot_index); % desired velocity for the start of next domain from impact map.

           J_desired=j_hc_2_func(q_minus); %Output function for the next domain
           J_desired_opt=j_hc_opt2_func(q_minus); %Optimization based Output function for the next domain

           vel=J_desired*dq_plus; % base x,y,z, roll,pitch,yaw and swing leg x,y,z velocity
           vel_opt=J_desired_opt*dq_plus; % base x,y,z, roll,pitch,yaw and swing leg x,y,z velocity and stance legs x,y,z velocity
      
      elseif foot_index == 2
          Alpha_minus = Optimized_2;
          support_foot_pose_1  = F_1_func(q0_1);
          [q_error_1,COP_1,q_sol_whole_step_1,Fr,dq_sol_whole_step_1,~]...
          =opt_inv_solve_floating_base_eq(options,Optimized_1,1,q0_1,support_foot_pose_1);
           q0_2 = q_sol_whole_step_1(end,:)';
          support_foot_pose_2  = F_2_func(q0_2);
          
          [q_error_2,COP_2,q_sol_whole_step_2,Fr_2,dq_sol_whole_step_2,~]...
           =opt_inv_solve_floating_base_eq(options,Optimized_2,foot_index,q0_2,support_foot_pose_2);
       
      
           q_minus = q_sol_whole_step_2(end,:);

           dq_minus = dq_sol_whole_step_2(end,:);

           x_minus = [q_minus,dq_minus];

           dq_plus = resetmap(x_minus,foot_index); % desired velocity for the start of next domain from impact map.

           J_desired=j_hc_3_func(q_minus); %Output function for the next domain
           J_desired_opt=j_hc_opt3_func(q_minus); %Optimization based Output function for the next domain

           vel=J_desired*dq_plus; % base x,y,z, roll,pitch,yaw and swing leg x,y,z velocity
           vel_opt=J_desired_opt*dq_plus; % base x,y,z, roll,pitch,yaw and swing leg x,y,z velocity and stance legs x,y,z velocity

       
       
          
      elseif foot_index == 3
          Alpha_minus = Optimized_3;
          support_foot_pose_1  = F_1_func(q0_1);
          [q_error_1,COP_1,q_sol_whole_step_1,Fr,dq_sol_whole_step_1,~]...
          =opt_inv_solve_floating_base_eq(options,Optimized_1,1,q0_1,support_foot_pose_1);
           q0_2 = q_sol_whole_step_1(end,:)';
          support_foot_pose_2  = F_2_func(q0_2);
          
          [q_error_2,COP_2,q_sol_whole_step_2,Fr_2,dq_sol_whole_step_2,~]...
           =opt_inv_solve_floating_base_eq(options,Optimized_2, 2, q0_2,support_foot_pose_2);
          q0_3 = q_sol_whole_step_2(end,:)';
          support_foot_pose_3  = F_3_func(q0_3);
          
          [q_error_3,COP_3,q_sol_whole_step_3,Fr_3,dq_sol_whole_step_3,~]...
           =opt_inv_solve_floating_base_eq(options,Optimized_3,foot_index,q0_3,support_foot_pose_3);


           q_minus = q_sol_whole_step_3(end,:);

           dq_minus = dq_sol_whole_step_3(end,:);

           x_minus = [q_minus,dq_minus];

           dq_plus = resetmap(x_minus,foot_index); % desired velocity for the start of next domain from impact map.

           J_desired=j_hc_4_func(q_minus); %Output function for the next domain
           J_desired_opt=j_hc_opt4_func(q_minus); %Optimization based Output function for the next domain

           vel=J_desired*dq_plus; % base x,y,z, roll,pitch,yaw and swing leg x,y,z velocity
           vel_opt=J_desired_opt*dq_plus; % base x,y,z, roll,pitch,yaw and swing leg x,y,z velocity and stance legs x,y,z velocity


       
       
      elseif foot_index == 4
           Alpha_minus = Optimized_4;
           support_foot_pose_1  = F_1_func(q0_1);
          [q_error_1,COP_1,q_sol_whole_step_1,Fr,dq_sol_whole_step_1,~]...
          =opt_inv_solve_floating_base_eq(options,Optimized_1,1,q0_1,support_foot_pose_1);
           q0_2 = q_sol_whole_step_1(end,:)';
          support_foot_pose_2  = F_2_func(q0_2);
          
          [q_error_2,COP_2,q_sol_whole_step_2,Fr_2,dq_sol_whole_step_2,~]...
           =opt_inv_solve_floating_base_eq(options,Optimized_2,2,q0_2,support_foot_pose_2);
           q0_3 = q_sol_whole_step_2(end,:)';
          support_foot_pose_3  = F_3_func(q0_3);
          
          [q_error_3,COP_3,q_sol_whole_step_3,Fr_3,dq_sol_whole_step_3,~]...
           =opt_inv_solve_floating_base_eq(options,Optimized_3,3,q0_3,support_foot_pose_3);
           q0_4 = q_sol_whole_step_3(end,:)';
           support_foot_pose_4  = F_4_func(q0_4);

          [q_error_4,COP_4,q_sol_whole_step_4,Fr_4,dq_sol_whole_step_4,~]...
           =opt_inv_solve_floating_base_eq(options,Optimized_4,foot_index,q0_4,support_foot_pose_4);           


           q_minus = q_sol_whole_step_4(end,:);

           dq_minus = dq_sol_whole_step_4(end,:);

           x_minus = [q_minus,dq_minus];

           dq_plus = resetmap(x_minus,foot_index); % desired velocity for the start of next domain from impact map.

           J_desired=j_hc_1_func(q_minus); %Output function for the next domain
           J_desired_opt=j_hc_opt1_func(q_minus); %Optimization based Output function for the next domain

           vel=J_desired*dq_plus; % base x,y,z, roll,pitch,yaw and swing leg x,y,z velocity
           vel_opt=J_desired_opt*dq_plus; % base x,y,z, roll,pitch,yaw and swing leg x,y,z velocity and stance legs x,y,z velocity
           
           
      end
      dtheta = 0.1;
      ds_dtheta =1/((Alpha_minus(42)-Alpha_minus(36))/4);
      
      alp1 = Alpha_minus(7:7:56)';
      
      if foot_index == 1
            alp1(6:8)= SF(16:18);
            
      elseif foot_index == 2
            alp1(6:8)= SF(10:12);
            
      elseif foot_index == 3
            alp1(6:8)= SF(13:15); 
            
      elseif foot_index == 4
            alp1(6:8)= SF(7:9); 
      end
            
      vel = vel(2:9);
      alp1;
      alp2 = alp1 + vel/(6*ds_dtheta*dtheta);
           
      end
  
      
       