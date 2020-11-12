%%
load Alpha_initial_16_v5.mat
Alpha = initial_guess;
    Alpha1 = Alpha(1:56);
    Alpha2 = Alpha(57:112);
    Alpha3 = Alpha(113:168);
    Alpha4 = Alpha(169:224);
    x_sw=[-0.01, -0.005, -0.001, 0.0, 0.001, 0.005,0.01];
    Alpha1(36:42)= Alpha1(36:42)+x_sw; Alpha2(36:42)= Alpha2(36:42)+x_sw;
    Alpha3(36:42)= Alpha3(36:42)+x_sw; Alpha4(36:42)= Alpha4(36:42)+x_sw;
w=2*pi; z0=0.4251;
step_length =0.18;
%h_t =[0, 0.08, 0.15, 0.10, 0.04, 0.01,0];
%h_t =[0, 0.05, 0.06, 0.05, 0.03, 0.01,0];
h_t =[0, 0.07, 0.09, 0.08, 0.05, 0.015,0];
l0=0.5+0.4387/2;
d1= linspace(0,4*step_length/4,7);
%db= linspace(0,1*step_length/4,7)*0;%base does not move withrespect to treadmill hinge
l1=0.1692;%0.1792; %FL. % Distance of FL from the center of treadmill
l2=-0.2595; %-0.2595;%-step_length/4; %RR
l3= 0.2567;%0.2567;%-2*step_length/4; %FR
l4= -0.1720;%-0.1820;%-3*step_length/4; %RL
th_max = 10*pi/180;
th_0 = th_max/2;
th_offset =0;
v_treadmill = 0.2;

%% 1-Domain
t =linspace(0.0,0.250,7);
th = th_offset + th_0*sin(w.*t);
zb= z0- z0.*cos(th);
zs =((l1+d1)-v_treadmill.*t).*tan(th);
zsw=zs+h_t;
th_p = th;
Alpha1(22:28)= Alpha1(22:28)-th_p;
Alpha1(8:14)= Alpha1(8:14)-zb;
Alpha1(50:56)= zsw;
Alpha1(36:42)= Alpha1(36:42)- v_treadmill.*t;
%hold on
%plot(t,zs,t,zsw)
%% 2-Domain
t =linspace(0.25,0.50,7);
th = th_offset + th_0*sin(w.*t);
zb= z0 - z0.*cos(th);
zs =((l2+d1)-v_treadmill.*t).*tan(th);
zsw=zs+h_t;
th_p = th;
Alpha2(22:28)= -th_p;
Alpha2(8:14)= Alpha2(8:14)-zb;
Alpha2(50:56)= zsw;
Alpha2(36:42)= Alpha2(36:42)- v_treadmill.*t;
%hold on
%plot(t,zs,t,zsw)

%% 3-Domain
t =linspace(0.5,0.750,7);
th = th_offset + th_0*sin(w.*t);
zb= z0 - z0.*cos(th);
zs = ((l3+d1)-v_treadmill.*t).*tan(th);
zsw=zs+h_t;
th_p = th;
Alpha3(22:28)= -th_p;
Alpha3(8:14)= Alpha3(8:14)-zb;
Alpha3(50:56)= zsw;
Alpha3(36:42)= Alpha3(36:42)- v_treadmill.*t;
%hold on
%plot(t,zs,t,zsw)

%% 4-Domain
t =linspace(0.75,1.0,7);
th = th_offset + th_0*sin(w.*t);
zb= z0 - z0.*cos(th);
zs =((l4+d1)-v_treadmill.*t).*tan(th);
zsw=zs+h_t;
th_p = th;
Alpha4(22:28)= -th_p;
Alpha4(8:14)= Alpha4(8:14)-zb;
Alpha4(50:56)= zsw;
Alpha4(36:42)= Alpha4(36:42)- v_treadmill.*t;
%hold on
%plot(t,zs,t,zsw)
Alpha_initial = [Alpha1,Alpha2,Alpha3, Alpha4];
bcs = [Alpha1;Alpha2;Alpha3;Alpha4]