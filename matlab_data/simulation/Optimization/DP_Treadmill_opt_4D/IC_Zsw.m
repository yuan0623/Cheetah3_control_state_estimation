%%
load Alpha_initial_9.mat
Alpha = initial_guess;
    Alpha1 = Alpha(1:56);
    Alpha2 = Alpha(57:112);
    Alpha3 = Alpha(113:168);
    Alpha4 = Alpha(169:224);
w=2*pi; z0=0.4268;
step_length =0.1;
h_t =[0, 0.05, 0.06, 0.05, 0.03, 0.01,0];
%h_t =[0, 0.06, 0.08, 0.06, 0.03, 0.01,0];
%h_t =[0, 0.05, 0.08, 0.12, 0.04, 0.02,0];
l0=0.5+0.4387/2;
d1= linspace(0,4*step_length/4,7);
%db= linspace(0,1*step_length/4,7)*0;%base does not move withrespect to treadmill hinge
l1=0.2092; %FL. % Distance of FL from the center of treadmill
l2= -0.2295;%-step_length/4; %RR
l3= 0.2506;%-2*step_length/4; %FR
l4= -0.1881;%-3*step_length/4; %RL
th_max = 16*pi/180;
th_0 = th_max/2;
th_offset =0;
v_treadmill = 0.1;

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
%Alpha1(1:7)=0;
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
%Alpha2(1:7)=0;
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
%Alpha3(1:7)=0;
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
%Alpha4(1:7)=0;
%hold on
%plot(t,zs,t,zsw)
Alpha_initial = [Alpha1,Alpha2,Alpha3, Alpha4];
bcs = [Alpha1;Alpha2;Alpha3;Alpha4]