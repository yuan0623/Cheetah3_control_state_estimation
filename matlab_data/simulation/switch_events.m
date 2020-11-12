function [value,isterminal,direction] = switch_events(t,x,foot_index)
    q=x(1:18);
    if foot_index == -1
        swing_foot_pose = F_2_func(q);
        

    elseif foot_index == 1
        swing_foot_pose = F_1_func(q);
        
    end

    if t>0.1

        value = swing_foot_pose(3);
    else
        value = 10;
    end
    
    value = 10;   
    isterminal = 1;
    direction = -1;
end