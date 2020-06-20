import numpy as np
import scipy.linalg
import pdb
def state_estimation(dt,xhat,u,z_measurement,P):
# x_dot=Ax+Bu
# y=Cx

# Set A matrix
    A = np.identity(18)
    A[0:3,3:6] = dt * np.identity(3)
# Set B matrix
    B = np.zeros([18,3])
    B[3:6,0:3] = np.identity(3) * dt
# Set C matrix
    C = np.zeros([28,18])
    C[0:3,0:3] = -1 * np.identity(3)
    C[3:6,0:3] = -1 * np.identity(3)
    C[6:9,0:3] = -1 * np.identity(3)
    C[9:12,0:3] = -1 * np.identity(3)
    C[0:12,6:18] = np.identity(12)
    C[12:15,3:6] = -1 * np.identity(3)
    C[15:18,3:6] = -1 * np.identity(3)
    C[18:21,3:6] = -1 * np.identity(3)
    C[21:24,3:6] = -1 * np.identity(3)
    C[27,17] = 1
    C[26,14] = 1
    C[25,11] = 1
    C[24,8] = 1

# Some noise parameters
    process_noise_pimu = 0.02
    process_noise_vimu = 0.02
    process_noise_pfoot = 0.002

    sensor_noise_pimu_rel_foot = 1000000.01
    sensor_noise_vimu_rel_foot = 1000000.01
    sensor_noise_zfoot = 100000.01
# Set process covariance
    Q = np.identity(18)
    Q[0:3,0:3] = process_noise_pimu * (dt / 20) * np.identity(3)
    Q[3:6,3:6] = process_noise_vimu * (dt / 20) * np.identity(3)
    Q[6:18,6:18] = process_noise_pfoot * dt * np.identity(12)
# Set measurement covariance
    R = np.identity(28)
    R[0:12,0:12] = sensor_noise_pimu_rel_foot * np.identity(12)
    R[12:24,12:24] = sensor_noise_vimu_rel_foot * np.identity(12)
    R[24:28,24:28] = sensor_noise_zfoot * np.identity(4)

# Get acceleration from accelerometer
    #g = np.array([0,0,-9.81])


# Get elements of y
    p0 = np.array([xhat[0],xhat[1],xhat[2]])
    v0 = np.array([xhat[3],xhat[4],xhat[5]])

    #z_model = np.concatenate((ps, vs, pzs),axis=None)
    # Kalman filter estimatiion
    #########################################################
    # predict
    xhat = np.dot(A,xhat) + np.dot(B,u)
    At = A.T
    Pm = np.dot(A,np.dot(P,At)) + Q
    #########################################################


    ##########################################################
    # update
    Ct = C.T
    z_model = np.dot(C,xhat)
    y = z_model - z_measurement
    S = np.dot(C,np.dot(P,Ct))+R
    K = np.dot(P,np.dot(Ct,np.linalg.inv(S)))
    xhat = xhat+np.dot(K,y)
    P=np.dot((np.eye(18)-np.dot(K,C)),Pm)
    y= np.dot(C,xhat)-z_measurement
    ##########################################################
    #print(np.linalg.norm(ey))
    #S = C @ Pm @ Ct + R
    #LU = scipy.linalg.lu_factor(S)
    #K = Pm @ Ct @ np.linalg.inv(S)
    #xhat += K @ ey
    #S_ey = scipy.linalg.lu_solve(LU,ey)
    #xhat += Pm @ Ct @ S_ey
    #I = np.identity(18)
    #S_C = scipy.linalg.lu_solve(LU,C)
    #P = (I - Pm @ Ct @ S_C) @ Pm
    #P = (I - K @ C) @ Pm
    #Pt = P.T
    #P = (P + Pt) / 2
    #print(scipy.linalg.norm(P))
    #pdb.set_trace()
    #if np.linalg.det(P[0:2,0:2]) > 0.00001:
    #    P[0:2,2:18] = np.zeros((2,16))
    #    P[2:18,0:2] = np.zeros((16,2))
    #    P[0:2,0:2] /= 10

    return xhat,P

def state_estimation_god_view(dt,xhat,u,z_measurement,P):
    # Set A matrix
    A = np.identity(18)
    A[0:3,3:6] = dt * np.identity(3)
    # Set B matrix
    B = np.zeros([18,3])
    B[3:6,0:3] = np.identity(3) * dt
    # Set C matrix
    C = np.zeros([15,18])
    C[0:3,0:3]=np.eye(3)
    C[3:6,6:9]=np.eye(3)
    C[6:9,9:12]=np.eye(3)
    C[9:12,12:15]=np.eye(3)
    C[12:15,15:18]=np.eye(3)
    # Some noise parameters
    scale = 0.001
    process_noise_pimu = 0.02*scale
    process_noise_vimu = 0.02*scale
    process_noise_pfoot = 0.02*scale

    sensor_noise_position = 0.01
    sensor_noise_foot_position = 0.01
    # Set process covariance
    Q = np.identity(18)
    Q[0:3,0:3] = process_noise_pimu *  np.identity(3)
    Q[3:6,3:6] = process_noise_vimu *  np.identity(3)
    Q[6:18,6:18] = process_noise_pfoot *  np.identity(12)
    # Set measurement covariance
    R = np.identity(15)
    R[0:3,0:3] = sensor_noise_position * np.identity(3)
    R[3:15,3:15] = sensor_noise_foot_position * np.identity(12)

    # Kalman filter estimatiion
    #########################################################
    # predict
    xhat = np.dot(A,xhat) + np.dot(B,u)
    P=np.dot(A,np.dot(P,A.T))+Q
    #########################################################
    #pdb.set_trace()
    #######################
    # update
    y = z_measurement-np.dot(C,xhat)
    S=np.dot(C,np.dot(P,C.T))+R
    K = np.dot(P,np.dot(C.T,np.linalg.inv(S)))
    xhat = xhat + np.dot(K,y)
    #print(x_hat)
    P = np.dot((np.eye(len(xhat))-np.dot(K,C)),P)
    #########################
    #pdb.set_trace()

    return xhat,P

def state_estimation_simple_version(dt,xhat,u,z_measurement,P):
    A = np.identity(6)
    A[0:3,3:6] = dt * np.identity(3)
    B = np.zeros([6,3])
    B[0:3,0:3] = np.identity(3) * dt**2/2
    B[3:6,0:3] = np.identity(3) * dt
    C = np.zeros([3,6])
    C[0:3,0:3]=np.eye(3)

    scale = 1
    process_noise_pimu = 0.02*scale
    sensor_noise_position = 1

    Q = np.identity(6)
    Q[0:3,0:3] = process_noise_pimu *  np.identity(3)
    # Set measurement covariance
    R = np.identity(3)
    R[0:3,0:3] = sensor_noise_position * np.identity(3)

    # Kalman filter estimatiion
    #########################################################
    # predict
    xhat = np.dot(A,xhat) + np.dot(B,u)
    P=np.dot(A,np.dot(P,A.T))+Q
    #########################################################
    #pdb.set_trace()
    #######################
    # update
    y = z_measurement-np.dot(C,xhat)
    S=np.dot(C,np.dot(P,C.T))+R
    K = np.dot(P,np.dot(C.T,np.linalg.inv(S)))
    xhat = xhat + np.dot(K,y)
    #print('norm K')
    #print(np.linalg.norm(K))
    P = np.dot((np.eye(len(xhat))-np.dot(K,C)),P)
    #########################
    #pdb.set_trace()

    return xhat,P

def state_estimation_simple_velocity_version(dt,xhat,u,z_measurement,P):
    A = np.identity(6)
    A[0:3,3:6] = dt * np.identity(3)
    B = np.zeros([6,3])
    B[0:3,0:3] = np.identity(3) * dt**2/2
    B[3:6,0:3] = np.identity(3) * dt
    C = np.zeros([3,6])
    C[0:3,3:6]=np.eye(3)

    scale = 1
    process_noise_pimu = 0.01*scale
    sensor_noise_position = 0.01

    Q = np.identity(6)
    Q[0:3,0:3] = process_noise_pimu *  np.identity(3)
    # Set measurement covariance
    R = np.identity(3)
    R[0:3,0:3] = sensor_noise_position * np.identity(3)

    # Kalman filter estimatiion
    #########################################################
    # predict
    xhat = np.dot(A,xhat) + np.dot(B,u)
    P=np.dot(A,np.dot(P,A.T))+Q
    #########################################################
    #pdb.set_trace()
    #######################
    # update
    y = z_measurement-np.dot(C,xhat)
    S=np.dot(C,np.dot(P,C.T))+R
    K = np.dot(P,np.dot(C.T,np.linalg.inv(S)))
    xhat = xhat + np.dot(K,y)
    print('norm K')
    print(np.linalg.norm(K))
    P = np.dot((np.eye(len(xhat))-np.dot(K,C)),P)
    #########################
    #pdb.set_trace()

    return xhat,P

def Cheetah3KalmanFilter(dt,xhat,u,z_measurement,P,contacts):
    # Set A matrix
    A = np.identity(18)
    A[0:3,3:6] = dt * np.identity(3)
    # Set B matrix
    B = np.zeros([18,3])
    B[3:6,0:3] = np.identity(3) * dt
    # Set C matrix
    C = np.zeros([15,18])
    C[0:3,3:6]=np.eye(3)
    C[3:6,0:3]=-np.eye(3)
    C[6:9,0:3]=-np.eye(3)
    C[9:12,0:3]=-np.eye(3)
    C[12:15,0:3]=-np.eye(3)

    C[3:6,6:9]=np.eye(3)
    C[6:9,9:12]=np.eye(3)
    C[9:12,12:15]=np.eye(3)
    C[12:15,15:18]=np.eye(3)
    # Some noise parameters
    scale = 10000
    process_noise_pimu = 0.02
    process_noise_vimu = 0.02

    if len(contacts[0])==0:
        process_noise_p_FL = 100000000
    elif len(contacts[0])!=0:
        process_noise_p_FL = 0.00001

    if len(contacts[1])==0:
        process_noise_p_FR = 100000000
    elif len(contacts[1])!=0:
        process_noise_p_FR = 0.00001

    if len(contacts[2])==0:
        process_noise_p_RL = 100000000
    elif len(contacts[2])!=0:
        process_noise_p_RL = 0.00001

    if len(contacts[3])==0:
        process_noise_p_RR = 100000000
    elif len(contacts[3])!=0:
        process_noise_p_RR = 0.00001

    sensor_noise_velocity = 0.0001
    sensor_noise_foot_position = 0.0001
    # Set process covariance
    Q = np.identity(18)
    Q[0:3,0:3] = process_noise_pimu *  np.identity(3)
    Q[3:6,3:6] = process_noise_vimu *  np.identity(3)
    Q[6:9,6:9] = process_noise_p_FL *  np.identity(3)
    Q[9:12,9:12] = process_noise_p_FR *  np.identity(3)
    Q[12:15,12:15] = process_noise_p_RL *  np.identity(3)
    Q[15:18,15:18] = process_noise_p_RR *  np.identity(3)
    # Set measurement covariance
    R = np.identity(15)
    R[0:3,0:3] = sensor_noise_velocity * np.identity(3)
    R[3:15,3:15] = sensor_noise_foot_position * np.identity(12)

    # Kalman filter estimatiion
    #########################################################
    # predict
    xhat = np.dot(A,xhat) + np.dot(B,u)
    P=np.dot(A,np.dot(P,A.T))+Q
    #########################################################
    #pdb.set_trace()
    #######################
    # update
    y = z_measurement-np.dot(C,xhat)
    S=np.dot(C,np.dot(P,C.T))+R
    K = np.dot(P,np.dot(C.T,np.linalg.inv(S)))
    xhat = xhat + np.dot(K,y)
    #print(x_hat)
    P = np.dot((np.eye(len(xhat))-np.dot(K,C)),P)
    #########################
    #pdb.set_trace()

    return xhat,P
def state_estimation_god_view_relative(dt,xhat,u,z_measurement,P):
    # Set A matrix
    A = np.identity(18)
    A[0:3,3:6] = dt * np.identity(3)
    # Set B matrix
    B = np.zeros([18,3])
    B[3:6,0:3] = np.identity(3) * dt
    # Set C matrix
    C = np.zeros([15,18])
    C[0:3,0:3]=np.eye(3)

    C[3:6,0:3]=-np.eye(3)
    C[6:9,0:3]=-np.eye(3)
    C[9:12,0:3]=-np.eye(3)
    C[12:15,0:3]=-np.eye(3)

    C[3:6,6:9]=np.eye(3)
    C[6:9,9:12]=np.eye(3)
    C[9:12,12:15]=np.eye(3)
    C[12:15,15:18]=np.eye(3)
    # Some noise parameters
    scale = 0.001
    process_noise_pimu = 0.02*scale
    process_noise_vimu = 0.02*scale
    process_noise_pfoot = 0.02*scale

    sensor_noise_position = 0.01
    sensor_noise_foot_position = 0.01
    # Set process covariance
    Q = np.identity(18)
    Q[0:3,0:3] = process_noise_pimu *  np.identity(3)
    Q[3:6,3:6] = process_noise_vimu *  np.identity(3)
    Q[6:18,6:18] = process_noise_pfoot *  np.identity(12)
    # Set measurement covariance
    R = np.identity(15)
    R[0:3,0:3] = sensor_noise_position * np.identity(3)
    R[3:15,3:15] = sensor_noise_foot_position * np.identity(12)

    # Kalman filter estimatiion
    #########################################################
    # predict
    xhat = np.dot(A,xhat) + np.dot(B,u)
    P=np.dot(A,np.dot(P,A.T))+Q
    #########################################################
    #pdb.set_trace()
    #######################
    # update
    y = z_measurement-np.dot(C,xhat)
    S=np.dot(C,np.dot(P,C.T))+R
    K = np.dot(P,np.dot(C.T,np.linalg.inv(S)))
    xhat = xhat + np.dot(K,y)
    #print(x_hat)
    P = np.dot((np.eye(len(xhat))-np.dot(K,C)),P)
    #########################
    #pdb.set_trace()

    return xhat,P
