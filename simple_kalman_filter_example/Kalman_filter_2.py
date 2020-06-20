#########################################
# In this example, only the position (x,y) has been measured
#########################################
import numpy as np
import matplotlib.pyplot as plt
import pdb
duration = 100
dt = 0.1
t_vec = np.linspace(0,duration,num=int(duration /dt))
measurement_vx_vec = 70*t_vec+30*np.sin(t_vec)+10*np.random.standard_normal(int(duration /dt))
measurement_vy_vec = 0+3*np.random.standard_normal(int(duration /dt))
measurement_vec = np.array([measurement_vx_vec,measurement_vy_vec])



A = np.array([[1,0,dt,0],[0,1,0,dt],[0,0,1,0],[0,0,0,1]])
C = np.array([[1,0,0,0],[0,1,0,0]])
P = np.eye(4)*1000

Q = np.array([[1,0,0,0],[0,2,0,0],[0,0,3,0],[0,0,0,4]])*0.3
R = np.array([[100,0],[0,1000]])

x_hat=np.array([0,0,measurement_vx_vec[0],measurement_vy_vec[0]])
x_hat_vec = []
P_norm_vec=[]
for i in range(int(duration /dt)):
    #######################
    # prediction
    x_hat=np.dot(A,x_hat)
    P=np.dot(A,np.dot(P,A.T))+Q
    #######################

    #######################
    # update
    y = measurement_vec[:,i]-np.dot(C,x_hat)
    S=np.dot(C,np.dot(P,C.T))+R
    K = np.dot(P,np.dot(C.T,np.linalg.inv(S)))
    x_hat = x_hat + np.dot(K,y)
    #print(x_hat)
    P = np.dot((np.eye(4)-np.dot(K,C)),P)
    y = measurement_vec[:,i]-np.dot(C,x_hat)
    #########################
    #pdb.set_trace()
    x_hat_vec.append(x_hat)
    P_norm_vec.append(np.linalg.norm(P))
x_hat_vec = np.array(x_hat_vec)
#print(x_hat_vec[:,2])
#print(x_hat_vec[0,2])
#print(x_hat_vec[10,2])
print(np.linalg.norm(K))
plt.figure(1)
plt.title('vx')
plt.plot(t_vec,x_hat_vec[:,0],label="estimation")
plt.plot(t_vec,measurement_vx_vec,'o',label="measurement")
plt.legend()
plt.xlim(0,duration)


plt.figure(2)
plt.title('vy')
plt.plot(t_vec,x_hat_vec[:,1],label="estimation")
plt.plot(t_vec,measurement_vy_vec,'o',label="measurement")
plt.legend()
plt.xlim(0,duration)

plt.figure(3)
plt.title('P_norm_vec')
plt.plot(np.array(P_norm_vec))

plt.show()
