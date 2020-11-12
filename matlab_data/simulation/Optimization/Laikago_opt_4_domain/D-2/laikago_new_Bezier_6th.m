% Hey Amir, do you want to play basketball? I am Yuan btw.
function [ph,dph,ddph]=laikago_new_Bezier_6th(Alpha,s) 

% VERIFIED

S=[
    (1-s).^6
    6*s.*(1-s).^5
    15*s.^2*(1-s).^4
    20*s.^3*(1-s).^3
    15*s.^4*(1-s).^2
    6*s.^5*(1-s).^1
    s.^6
    ];

dS=[
    6*(s - 1).^5
    - 30*s.*(s - 1).^4 - 6*(s - 1).^5
    30*s.*(s - 1).^4 + 60*s.^2*(s - 1).^3
    - 60*s.^2*(s - 1).^3 - 60*s.^3*(s - 1).^2
    15*s.^4*(2*s - 2) + 60*s.^3*(s - 1).^2
    - 30*s.^4*(s - 1) - 6*s.^5
    6*s.^5
    ];

ddS=[
    30*(s - 1).^4
    - 120*s.*(s - 1).^3 - 60*(s - 1).^4
    240*s.*(s - 1).^3 + 30*(s - 1).^4 + 180*s.^2*(s - 1).^2
    - 120*s.*(s - 1).^3 - 60*s.^3*(2*s - 2) - 360*s.^2*(s - 1).^2
    120*s.^3*(2*s - 2) + 180*s.^2*(s - 1).^2 + 30*s.^4
    - 120*s.^3*(s - 1) - 60*s.^4
    30*s.^4
    ];

a1=Alpha(1:7);                %base y              q2
a2=Alpha(8:14);               %base z              q3
a3=Alpha(15:21);              %base roll           q4
a4=Alpha(22:28);              %base pitch          q5
a5=Alpha(29:35);              %base yaw            q6
a6=Alpha(36:42);              %swing foot x        q12
a7=Alpha(43:49);              %swing foot y        q13
a8=Alpha(50:56);              %swing foot z        q14
% a9=Alpha(57:63);              %swing foot roll
% a10=Alpha(64:70);             %swing foot pitch    q17
% a11=Alpha(71:77);             %swing foot yaw     q18

ph = [a1;a2;a3;a4;a5;a6;a7;a8]*S;
dph = [a1;a2;a3;a4;a5;a6;a7;a8]*dS;
ddph = [a1;a2;a3;a4;a5;a6;a7;a8]*ddS;

end





 