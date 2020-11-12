function [value,isterminal,direction] = switch_events(t,x,foot_index)
    q=x(1:18);
    %% VERIFIED
    if foot_index == 1
        swing_foot_pose = SF_1_func(q);
        
    elseif foot_index == 2
        swing_foot_pose = SF_2_func(q);
        
    elseif foot_index == 3
        swing_foot_pose = SF_3_func(q);  
        
    elseif foot_index == 4
        swing_foot_pose = SF_4_func(q);
        
    end

    if t>0.1

        value = swing_foot_pose(3);
    else
        value = 1;
    end
  
    isterminal = 1;
    direction = -1;
end