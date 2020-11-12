t_vec = linspace(0,10,20000)';



motion = zeros(20000,12);
motion(:,1)= -0.04954306;
motion(:,2)= 0.54492796;
off_set = +0.12;
omega = 30;
t_wave_vec = linspace(0,1.5*pi/omega,200);
wave = -1.19576989-abs(0.7*sin(omega*t_wave_vec))+off_set;
touch_down_moment = [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,...
    33,34,35,36,37,38,39,40]/3;
touch_down_index = zeros(length(touch_down_moment),1);
n = 1;

count = 0;
%motion(:,3) = -1.19576989+off_set;
%motion(50:end,3) = -1.835769890000000;
%{
for j=1:9
   
    touch_down_index(j) = find(t_vec>touch_down_moment(j),1);
    
    motion(touch_down_index(j):touch_down_index(j)+199,3) = wave;
    
end
%}
motion(:,3)= -1.19576989-abs(0.7*sin(omega*t_vec))+off_set;

motion(:,4)= 0.04883778;

motion(:,5)= 0.64441268;
motion(:,6)= -1.19089507;

motion(:,7)= -0.04883834;
motion(:,8)= 0.64491817;
motion(:,9)= -1.19419484-0.2;
motion(:,10)= 0.04925755;
motion(:,11)= 0.54589647;
motion(:,12)= -1.1953619-0.2;


csvwrite('matlab_data/motion_static15.csv',motion)