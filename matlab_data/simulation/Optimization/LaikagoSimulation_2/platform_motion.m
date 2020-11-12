function [platform_x,dplatform_x,ddplatform_x]=platform_motion(t,t_end_of_previous_step)
    global t_global 
        

    t_global=[t_global;t+t_end_of_previous_step];
    %t_global=t+t_end_of_previous_step;
    %a=0.2*sin(pi/8);
    a=0; %5 cm/s speed.
    b=0.1;
    c=0.01;
    x_platform = a+b*t_global(end)+0.5*c*(t_global(end))^2;
    %x_torso_desired = b+a*t_global;
    y_platform = 0;
    z_platform = 0;
    
    
    platform_x=[x_platform y_platform z_platform];


    dx_platform=b+c*t_global(end);
    dy_platform=0;
    dz_platform=0;
    dplatform_x=[dx_platform dy_platform dz_platform];
    
    ddx_platform=c;
    ddy_platform=0;
    ddz_platform=0;
    ddplatform_x=[ddx_platform ddy_platform ddz_platform];
end