a= 0:0.01:1;
load opt_DP_10.mat
alpha = optimized_variable;
Alpha1=alpha(1:56);
Alpha2=alpha(57:112);
Alpha3=alpha(113:168);
Alpha4=alpha(169:224);
for i=1:101
 s=a(i);
 [ph,~,~]=laikago_new_Bezier_6th(Alpha1,s);
 for j=1:8
   plot(s, ph(j),'.')
   hold on
 end
end
for i=1:101
 s=a(i);
 [ph,~,~]=laikago_new_Bezier_6th(Alpha2,s);
 for j=1:8
   plot(s+1, ph(j),'.')
   hold on
 end
end
for i=1:101
 s=a(i);
 [ph,~,~]=laikago_new_Bezier_6th(Alpha3,s);
 for j=1:8
   plot(s+2, ph(j),'.')
   hold on
 end
end
for i=1:101
 s=a(i);
 [ph,~,~]=laikago_new_Bezier_6th(Alpha4,s);
 for j=1:8
   plot(s+3, ph(j),'.')
   hold on
 end
end
plot([1,1],[-0.30,0.5],[2,2],[-0.30,0.5],[3,3],[-0.30,0.5],[4,4],[-0.30,0.5])