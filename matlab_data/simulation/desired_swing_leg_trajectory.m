function [swing_desired,dswing_desired,ddswing_desired]=desired_swing_leg_trajectory(t,t_end_of_previous_step)
    global t_global 
        

    t_global=[t_global;t+t_end_of_previous_step];
    off_set = +0.06;
    omega = 60;
    %{
    swing_desired = -1.19576989-(0.7*sin(omega*t_global(end)))+off_set;
    dswing_desired = -(0.7*omega*cos(omega*t_global(end)));
    ddswing_desired = (0.7*omega*omega*sin(omega*t_global(end)));
    %}
    
    swing_desired = -1.693690715042657-(0.3*sin(omega*t_global(end)));
    dswing_desired = -(0.3*omega*cos(omega*t_global(end)));
    ddswing_desired = (0.3*omega*omega*sin(omega*t_global(end)));
    
    %-1.393690715042657
    
end