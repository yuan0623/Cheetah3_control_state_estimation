function [value,isterminal,direction] = switch_events(t,t_end_of_previous_step,x,foot_index)
    
    global t_global 
    t_global=[t_global;t+t_end_of_previous_step];


    q=x(1:18);
    %% VERIFIED % Check t_global
    th_0=5*pi/180; w=2*pi/2;
    th =  th_0*sin(w*t_global(end));
    
    if foot_index == 1
        swing_foot_pose = SF_1_func(q);
        
    elseif foot_index == 2
        swing_foot_pose = SF_2_func(q);
        
    elseif foot_index == 3
        swing_foot_pose = SF_3_func(q);  
        
    elseif foot_index == 4
        swing_foot_pose = SF_4_func(q);
        
    end

    if t>0.15

        value = swing_foot_pose(3)-swing_foot_pose(1)*tan(th);
    else
        value = 1;
    end
  
    isterminal = 1;
    direction = -1;
end