function [torso_desired,dtorso_desired,ddtorso_desired]=desired_base_trajectory(t,t_end_of_previous_step)
    global t_global 
        

    t_global=[t_global;t+t_end_of_previous_step];
    %t_global=t+t_end_of_previous_step;
    %a=0.2*sin(pi/8);
    a=0.14; %5 cm/s speed.

    b=0;
    x_torso_desired = b+a*t_global(end);
    %x_torso_desired = b+a*t_global;
    y_torso_desired = 0;
    
    
    torso_desired=[x_torso_desired y_torso_desired];


    dx_torso_desired=a;
    dy_torso_desired=0;
    dtorso_desired=[dx_torso_desired dy_torso_desired];
    
    ddx_torso_desired=0;
    ddy_torso_desired=0;
    ddtorso_desired=[ddx_torso_desired ddy_torso_desired];
end