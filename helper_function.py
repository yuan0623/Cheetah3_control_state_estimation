#import numpy as np
from scipy.spatial.transform import Rotation as Rot
from help_function_symbolic import *
import pdb
def getAcceReading(acc,RotM):
    f_noise = 0.001
    gravity = np.array([0,0,-9.8])
    f = np.dot(RotM.T,(acc-gravity))#+np.random.rand(3)*f_noise
    return f
def getGyroReading(current_base_ang_velocity,RotM):
    omega_noise = 0.002
    omega = np.dot(RotM.T,current_base_ang_velocity)
    return omega
def getAcceReadingNoise(acc,RotM):
    f_noise = 0.04
    gravity = np.array([0,0,-9.8])
    f = np.dot(RotM.T,(acc-gravity))+np.random.rand(3)*f_noise
    return f
def getGyroReadingNoise(current_base_ang_velocity,RotM):
    omega_noise = 0.002
    omega = np.dot(RotM.T,current_base_ang_velocity)+np.random.rand(3)*omega_noise
    return omega
def quaternion2RotM(q_):
    q = np.zeros(4)
    q[0] = q_[3]
    q[1] = q_[0]
    q[2] = q_[1]
    q[3] = q_[2]
    R = np.zeros([3,3])
    R[0,0]=1-2*(q[2]*q[2]+q[3]*q[3])
    R[0,1] = 2*(q[1]*q[2]-q[3]*q[0])
    R[0,2] = 2*(q[1]*q[3]+q[2]*q[0])

    R[1,0] = 2*(q[1]*q[2]+q[3]*q[0])
    R[1,1] = 1-2*(q[1]**2+q[3]**2)
    R[1,2] = 2*(q[2]*q[3]-q[1]*q[0])

    R[2,0] = 2*(q[1]*q[3]-q[2]*q[0])
    R[2,1] = 2*(q[2]*q[3]+q[1]*q[0])
    R[2,2] = 1-2*(q[1]**2+q[2]**2)

    return R



def EKF(xhat,T,process_input,z_measurement,P):
    g = np.array([0,0,-9.81])
    C = np.array([[0,0,0,1,0,0,0,0,0,0],
                 [0,0,0,0,1,0,0,0,0,0],
                 [0,0,0,0,0,1,0,0,0,0]])
    Q = 0.001*np.eye(10)
    R = 0.05*np.eye(3)
    #####################################
    #### predict
    para=np.concatenate((np.array([T]),process_input,g),axis=0)
    xhat = EKF_process(xhat,para)
    F = j_EKF_process(xhat,para)
    P = np.dot(F,np.dot(P,F.T))+Q
    #####################################

    #####################################
    #### update
    y = z_measurement-np.dot(C,xhat)
    S=np.dot(C,np.dot(P,C.T))+R
    K = np.dot(P,np.dot(C.T,np.linalg.inv(S)))
    xhat = xhat + np.dot(K,y)
    P = np.dot((np.eye(len(xhat))-np.dot(K,C)),P)
    #####################################
    xhat[6:10]=xhat[6:10]/np.linalg.norm(xhat[6:10])
    return xhat,P

def EKFWithLegEncoder(xhat,T,process_input,z_measurement,P,contacts):
    g = np.array([0,0,-9.81])
    process_noise_pimu = 0.001
    process_noise_vimu = 0.001
    process_noise_p_qua = 0.001

    sensor_noise_velocity = 0.01
    sensor_noise_foot_position = 0.01

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

    Q = np.eye(22)
    Q[0:3,0:3] = process_noise_pimu *  np.identity(3)
    Q[3:6,3:6] = process_noise_vimu *  np.identity(3)
    Q[6:9,6:9] = process_noise_p_FL *  np.identity(3)
    Q[9:12,9:12] = process_noise_p_FR *  np.identity(3)
    Q[12:15,12:15] = process_noise_p_RL *  np.identity(3)
    Q[15:18,15:18] = process_noise_p_RR *  np.identity(3)
    Q[18:22,18:22] = process_noise_p_qua *  np.identity(4)

    #R = np.eye(15)
    #R[0:3,0:3] = sensor_noise_velocity * np.identity(3)
    #R[3:15,3:15] = sensor_noise_foot_position * np.identity(12)

    R = np.eye(12)
    R[0:12,0:12] = sensor_noise_foot_position * np.identity(12)
    #####################################
    #### predict
    para=np.concatenate((np.array([T]),process_input,g),axis=0)
    xhat = EKF_process_leg(xhat,para)
    F = j_EKF_process_leg(xhat,para)
    P = np.dot(F,np.dot(P,F.T))+Q

    #####################################
    #print('******************************')
    #print('standard EKF')
    #print(xhat)
    #####################################
    #### update
    y = z_measurement-measurement_model_leg(xhat)
    #pdb.set_trace()
    H = j_measurement_model_leg(xhat)
    S = np.dot(H,np.dot(P,H.T))+R
    K = np.dot(P,np.dot(H.T,np.linalg.inv(S)))
    xixi = np.dot(K,y)
    #print('xixi')
    #print(np.linalg.norm(xixi[18:22]))
    delta_xhat = np.dot(K,y)
    #delta_xhat[18:22] = delta_xhat[18:22]/np.linalg.norm(delta_xhat[18:22])
    #xhat[0:18] = xhat[0:18]+delta_xhat[0:18]
    #xhat[18:22] = quaternionMultiplication(xhat[18:22] ,delta_xhat[18:22])
    xhat = xhat + np.dot(K,y)
    P = np.dot((np.eye(len(xhat))-np.dot(K,H)),P)
    #####################################
    xhat[18:22]=xhat[18:22]/np.linalg.norm(xhat[18:22])
    #print(y)
    #print(K)
    #print(xhat)
    #print('******************************')
    return xhat,P
def linearObserver(xhat,T,process_input,z_measurement,contacts):
    g = np.array([0,0,-9.81])
    para=np.concatenate((np.array([T]),process_input,g),axis=0)

    y = z_measurement-measurement_model_leg(xhat)
    A = j_EKF_process_leg(xhat,para)
    C = j_measurement_model_leg(xhat)
    L = np.ones([22,12])
    xhat = EKF_process_leg(xhat,para) + np.dot(L,y)
    return xhat
def EKFWithLegEncoderPosition(xhat,T,process_input,z_measurement,P,contacts):
    g = np.array([0,0,-9.81])
    process_noise_pimu = 0.001
    process_noise_vimu = 0.001
    process_noise_p_qua = 0.001

    sensor_noise_velocity = 0.001
    sensor_noise_position = 0.001
    sensor_noise_foot_position = 0.001

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

    Q = np.eye(22)
    Q[0:3,0:3] = process_noise_pimu *  np.identity(3)
    Q[3:6,3:6] = process_noise_vimu *  np.identity(3)
    Q[6:9,6:9] = process_noise_p_FL *  np.identity(3)
    Q[9:12,9:12] = process_noise_p_FR *  np.identity(3)
    Q[12:15,12:15] = process_noise_p_RL *  np.identity(3)
    Q[15:18,15:18] = process_noise_p_RR *  np.identity(3)
    Q[18:22,18:22] = process_noise_p_qua *  np.identity(4)

    #R = np.eye(15)
    #R[0:3,0:3] = sensor_noise_velocity * np.identity(3)
    #R[3:15,3:15] = sensor_noise_foot_position * np.identity(12)

    R = np.eye(15)
    R[0:3,0:3] = sensor_noise_position* np.identity(3)
    R[3:15,3:15] = sensor_noise_foot_position * np.identity(12)
    #####################################
    #### predict
    para=np.concatenate((np.array([T]),process_input,g),axis=0)
    xhat = EKF_process_leg(xhat,para)
    F = j_EKF_process_leg(xhat,para)
    P = np.dot(F,np.dot(P,F.T))+Q
    #####################################
    #print('******************************')
    #print('standard EKF')
    #print(xhat)
    #####################################
    #### update
    y = z_measurement-measurement_model_leg_position(xhat)
    #print(y)
    #pdb.set_trace()
    H = j_measurement_model_leg_position(xhat)
    S = np.dot(H,np.dot(P,H.T))+R
    K = np.dot(P,np.dot(H.T,np.linalg.inv(S)))
    xixi = np.dot(K,y)
    #print('xixi')
    #print(np.linalg.norm(xixi[18:22]))
    delta_xhat = np.dot(K,y)
    #delta_xhat[18:22] = delta_xhat[18:22]/np.linalg.norm(delta_xhat[18:22])
    #xhat[0:18] = xhat[0:18]+delta_xhat[0:18]
    #xhat[18:22] = quaternionMultiplication(xhat[18:22] ,delta_xhat[18:22])
    xhat = xhat + np.dot(K,y)
    P = np.dot((np.eye(len(xhat))-np.dot(K,H)),P)
    #####################################
    xhat[18:22]=xhat[18:22]/np.linalg.norm(xhat[18:22])
    #print(y)
    #print(K)
    #print(xhat)
    #print('******************************')
    return xhat,P

def EKFWithLegEncoderVelocity(xhat,T,process_input,z_measurement,P,contacts):
    g = np.array([0,0,-9.81])
    process_noise_pimu = 0.001
    process_noise_vimu = 0.001
    process_noise_p_qua = 0.001

    sensor_noise_velocity = 0.1
    sensor_noise_foot_position = 0.01

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

    Q = np.eye(22)
    Q[0:3,0:3] = process_noise_pimu *  np.identity(3)
    Q[3:6,3:6] = process_noise_vimu *  np.identity(3)
    Q[6:9,6:9] = process_noise_p_FL *  np.identity(3)
    Q[9:12,9:12] = process_noise_p_FR *  np.identity(3)
    Q[12:15,12:15] = process_noise_p_RL *  np.identity(3)
    Q[15:18,15:18] = process_noise_p_RR *  np.identity(3)
    Q[18:22,18:22] = process_noise_p_qua *  np.identity(4)

    R = np.eye(15)
    R[0:3,0:3] = sensor_noise_velocity * np.identity(3)
    R[3:15,3:15] = sensor_noise_foot_position * np.identity(12)

    #R = np.eye(15)
    #R[0:3,0:3] = 0.01* np.identity(3)
    #R[3:15,3:15] = sensor_noise_foot_position * np.identity(12)
    #####################################
    #### predict
    para=np.concatenate((np.array([T]),process_input,g),axis=0)
    xhat = EKF_process_leg(xhat,para)
    F = j_EKF_process_leg(xhat,para)
    P = np.dot(F,np.dot(P,F.T))+Q
    #####################################

    #####################################
    #### update
    y = z_measurement-measurement_model_leg_velocity(xhat)
    H = j_measurement_model_leg_velocity(xhat)
    S = np.dot(H,np.dot(P,H.T))+R
    K = np.dot(P,np.dot(H.T,np.linalg.inv(S)))
    xixi = np.dot(K,y)
    #print('xixi')
    #print(np.linalg.norm(xixi[18:22]))
    delta_xhat = np.dot(K,y)
    #delta_xhat[18:22] = delta_xhat[18:22]/np.linalg.norm(delta_xhat[18:22])
    #xhat[0:18] = xhat[0:18]+delta_xhat[0:18]
    #xhat[18:22] = quaternionMultiplication(xhat[18:22] ,delta_xhat[18:22])
    xhat = xhat + np.dot(K,y)
    P = np.dot((np.eye(len(xhat))-np.dot(K,H)),P)
    #####################################
    xhat[18:22]=xhat[18:22]/np.linalg.norm(xhat[18:22])
    return xhat,P



def EKFWithLegEncoderImpactPosition(xhat,T,process_input,z_measurement,P,contacts,touch_down,full_body_dynamic_state):
    g = np.array([0,0,-9.81])
    process_noise_pimu = 0.001
    process_noise_vimu = 0.001
    process_noise_p_qua = 0.001

    sensor_noise_position = 0.001
    sensor_noise_foot_position = 0.001
    if touch_down == 1:
        print('touch down')
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

    Q = np.eye(22)
    Q[0:3,0:3] = process_noise_pimu *  np.identity(3)
    Q[3:6,3:6] = process_noise_vimu *  np.identity(3)
    Q[6:9,6:9] = process_noise_p_FL *  np.identity(3)
    Q[9:12,9:12] = process_noise_p_FR *  np.identity(3)
    Q[12:15,12:15] = process_noise_p_RL *  np.identity(3)
    Q[15:18,15:18] = process_noise_p_RR *  np.identity(3)
    Q[18:22,18:22] = process_noise_p_qua *  np.identity(4)

    R = np.eye(15)
    R[0:3,0:3] = sensor_noise_position * np.identity(3)
    R[3:15,3:15] = sensor_noise_foot_position * np.identity(12)

    #R = np.eye(12)
    #R[0:12,0:12] = sensor_noise_foot_position * np.identity(12)
    #####################################
    #### predict
    para=np.concatenate((np.array([T]),process_input,g),axis=0)
    xhat = EKF_process_leg(xhat,para)
    F = j_EKF_process_leg(xhat,para)
    P = np.dot(F,np.dot(P,F.T))+Q
    #####################################
    #print('******************************')
    #print('impact-aware EKF')
    #print(xhat)
    #####################################
    #### impact
    if touch_down == 1:
        q_full_body_estimation = full_body_dynamic_state[0]
        dq_full_body_estimation = full_body_dynamic_state[1]
        print(q_full_body_estimation.shape)
        print(dq_full_body_estimation.shape)
        dq_plus = resetMap(q_full_body_estimation,dq_full_body_estimation,1)
        #dq_plus = dq_full_body
        xhat[3:6] = dq_plus[0:3]
        #pdb.set_trace()
    #####################################


    #####################################
    #### update
    y = z_measurement-measurement_model_leg_position(xhat)
    H = j_measurement_model_leg_position(xhat)
    S = np.dot(H,np.dot(P,H.T))+R
    K = np.dot(P,np.dot(H.T,np.linalg.inv(S)))
    xixi = np.dot(K,y)
    #print('xixi')
    #print(np.linalg.norm(xixi[18:22]))
    delta_xhat = np.dot(K,y)
    #delta_xhat[18:22] = delta_xhat[18:22]/np.linalg.norm(delta_xhat[18:22])
    #xhat[0:18] = xhat[0:18]+delta_xhat[0:18]
    #xhat[18:22] = quaternionMultiplication(xhat[18:22] ,delta_xhat[18:22])
    xhat = xhat + np.dot(K,y)
    P = np.dot((np.eye(len(xhat))-np.dot(K,H)),P)
    #####################################
    xhat[18:22]=xhat[18:22]/np.linalg.norm(xhat[18:22])
    #print(y)
    #print(K)
    #print(xhat)
    #print('******************************')
    return xhat,P
def EKFWithLegEncoderGroundTruthImpact(xhat,T,process_input,z_measurement,P,contacts,touch_down,dq_plus):
    g = np.array([0,0,-9.81])
    process_noise_pimu = 0.001
    process_noise_vimu = 0.001
    process_noise_p_qua = 0.001

    sensor_noise_velocity = 0.1
    sensor_noise_foot_position = 0.1
    if touch_down == 1:
        pass
        #print('touch down')
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

    Q = np.eye(22)
    Q[0:3,0:3] = process_noise_pimu *  np.identity(3)
    Q[3:6,3:6] = process_noise_vimu *  np.identity(3)
    Q[6:9,6:9] = process_noise_p_FL *  np.identity(3)
    Q[9:12,9:12] = process_noise_p_FR *  np.identity(3)
    Q[12:15,12:15] = process_noise_p_RL *  np.identity(3)
    Q[15:18,15:18] = process_noise_p_RR *  np.identity(3)
    Q[18:22,18:22] = process_noise_p_qua *  np.identity(4)

    #R = np.eye(15)
    #R[0:3,0:3] = sensor_noise_velocity * np.identity(3)
    #R[3:15,3:15] = sensor_noise_foot_position * np.identity(12)

    R = np.eye(12)
    R[0:12,0:12] = sensor_noise_foot_position * np.identity(12)
    #####################################
    #### predict
    para=np.concatenate((np.array([T]),process_input,g),axis=0)
    xhat = EKF_process_leg(xhat,para)
    F = j_EKF_process_leg(xhat,para)
    P = np.dot(F,np.dot(P,F.T))+Q
    #####################################

    #####################################
    #### impact
    if touch_down == 1:
        xhat[3:6] = dq_plus[0:3]
    #####################################


    #####################################
    #### update
    y = z_measurement-measurement_model_leg(xhat)
    H = j_measurement_model_leg(xhat)
    S = np.dot(H,np.dot(P,H.T))+R
    K = np.dot(P,np.dot(H.T,np.linalg.inv(S)))
    xixi = np.dot(K,y)
    #print('xixi')
    #print(np.linalg.norm(xixi[18:22]))
    delta_xhat = np.dot(K,y)
    #delta_xhat[18:22] = delta_xhat[18:22]/np.linalg.norm(delta_xhat[18:22])
    #xhat[0:18] = xhat[0:18]+delta_xhat[0:18]
    #xhat[18:22] = quaternionMultiplication(xhat[18:22] ,delta_xhat[18:22])
    xhat = xhat + np.dot(K,y)
    P = np.dot((np.eye(len(xhat))-np.dot(K,H)),P)
    #####################################
    xhat[18:22]=xhat[18:22]/np.linalg.norm(xhat[18:22])
    return xhat,P
def EKFWithLegEncoderImpact(xhat,T,process_input,z_measurement,P,contacts,touch_down,full_body_dynamic_state):
    g = np.array([0,0,-9.81])
    process_noise_pimu = 0.001
    process_noise_vimu = 0.001
    process_noise_p_qua = 0.001

    sensor_noise_velocity = 0.1
    sensor_noise_foot_position = 0.1
    if touch_down == 1:
        print('touch down')
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

    Q = np.eye(22)
    Q[0:3,0:3] = process_noise_pimu *  np.identity(3)
    Q[3:6,3:6] = process_noise_vimu *  np.identity(3)
    Q[6:9,6:9] = process_noise_p_FL *  np.identity(3)
    Q[9:12,9:12] = process_noise_p_FR *  np.identity(3)
    Q[12:15,12:15] = process_noise_p_RL *  np.identity(3)
    Q[15:18,15:18] = process_noise_p_RR *  np.identity(3)
    Q[18:22,18:22] = process_noise_p_qua *  np.identity(4)

    #R = np.eye(15)
    #R[0:3,0:3] = sensor_noise_velocity * np.identity(3)
    #R[3:15,3:15] = sensor_noise_foot_position * np.identity(12)

    R = np.eye(12)
    R[0:12,0:12] = sensor_noise_foot_position * np.identity(12)
    #####################################
    #### predict
    para=np.concatenate((np.array([T]),process_input,g),axis=0)
    xhat = EKF_process_leg(xhat,para)
    F = j_EKF_process_leg(xhat,para)
    P = np.dot(F,np.dot(P,F.T))+Q
    #####################################

    #####################################
    #### impact
    if touch_down == 1:
        q_full_body_estimation = full_body_dynamic_state[0]
        dq_full_body_estimation = full_body_dynamic_state[1]
        #print(q_full_body_estimation.shape)
        #print(dq_full_body_estimation.shape)
        dq_plus = resetMap(q_full_body_estimation,dq_full_body_estimation,1)
        #dq_plus = dq_full_body
        xhat[3:6] = dq_plus[0:3]
    #####################################


    #####################################
    #### update
    y = z_measurement-measurement_model_leg(xhat)
    H = j_measurement_model_leg(xhat)
    S = np.dot(H,np.dot(P,H.T))+R
    K = np.dot(P,np.dot(H.T,np.linalg.inv(S)))
    xixi = np.dot(K,y)
    #print('xixi')
    #print(np.linalg.norm(xixi[18:22]))
    delta_xhat = np.dot(K,y)
    #delta_xhat[18:22] = delta_xhat[18:22]/np.linalg.norm(delta_xhat[18:22])
    #xhat[0:18] = xhat[0:18]+delta_xhat[0:18]
    #xhat[18:22] = quaternionMultiplication(xhat[18:22] ,delta_xhat[18:22])
    xhat = xhat + np.dot(K,y)
    P = np.dot((np.eye(len(xhat))-np.dot(K,H)),P)
    #####################################
    xhat[18:22]=xhat[18:22]/np.linalg.norm(xhat[18:22])
    return xhat,P

def EKFWithLegEncoderBias(xhat,T,process_input,z_measurement,P,contacts):
    g = np.array([0,0,-9.81])
    process_noise_pimu = 0.01
    process_noise_vimu = 0.01
    process_noise_p_qua = 0.01
    process_noise_p_bias = 0.00000001
    sensor_noise_velocity = 0.1
    sensor_noise_foot_position = 0.01

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

    Q = np.eye(28)
    Q[0:3,0:3] = process_noise_pimu * np.identity(3)
    Q[3:6,3:6] = process_noise_vimu * np.identity(3)
    Q[6:9,6:9] = process_noise_p_FL * np.identity(3)
    Q[9:12,9:12] = process_noise_p_FR * np.identity(3)
    Q[12:15,12:15] = process_noise_p_RL * np.identity(3)
    Q[15:18,15:18] = process_noise_p_RR * np.identity(3)
    Q[18:22,18:22] = process_noise_p_qua * np.identity(4)
    Q[22:28,22:28] = process_noise_p_bias * np.identity(6)

    #R = np.eye(15)
    #R[0:3,0:3] = sensor_noise_velocity * np.identity(3)
    #R[3:15,3:15] = sensor_noise_foot_position * np.identity(12)

    R = np.eye(12)
    R[0:12,0:12] = sensor_noise_foot_position * np.identity(12)
    #####################################
    #### predict
    para=np.concatenate((np.array([T]),process_input,g),axis=0)
    xhat = EKF_process_leg_bias(xhat,para)
    F = j_EKF_process_leg_bias(xhat,para)
    P = np.dot(F,np.dot(P,F.T))+Q
    #####################################

    #####################################
    #### update
    y = z_measurement-measurement_model_leg_bias(xhat)
    H = j_measurement_model_leg_bias(xhat)
    S = np.dot(H,np.dot(P,H.T))+R
    K = np.dot(P,np.dot(H.T,np.linalg.inv(S)))
    xixi = np.dot(K,y)
    #print('xixi')
    #print(np.linalg.norm(xixi[18:22]))
    delta_xhat = np.dot(K,y)
    #delta_xhat[18:22] = delta_xhat[18:22]/np.linalg.norm(delta_xhat[18:22])
    #xhat[0:18] = xhat[0:18]+delta_xhat[0:18]
    #xhat[18:22] = quaternionMultiplication(xhat[18:22] ,delta_xhat[18:22])
    xhat = xhat + np.dot(K,y)
    P = np.dot((np.eye(len(xhat))-np.dot(K,H)),P)
    #####################################
    xhat[18:22]=xhat[18:22]/np.linalg.norm(xhat[18:22])
    return xhat,P

def EKFWithLegEncoderRotVec(xhat,T,process_input,z_measurement,P,contacts):
    g = np.array([0,0,-9.81])
    process_noise_pimu = 0.01
    process_noise_vimu = 0.01
    process_noise_p_qua = 0.01

    sensor_noise_velocity = 0.1
    sensor_noise_foot_position = 0.01

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

    Q = np.eye(21)
    Q[0:3,0:3] = process_noise_pimu *  np.identity(3)
    Q[3:6,3:6] = process_noise_vimu *  np.identity(3)
    Q[6:9,6:9] = process_noise_p_FL *  np.identity(3)
    Q[9:12,9:12] = process_noise_p_FR *  np.identity(3)
    Q[12:15,12:15] = process_noise_p_RL *  np.identity(3)
    Q[15:18,15:18] = process_noise_p_RR *  np.identity(3)
    Q[18:21,18:21] = process_noise_p_qua *  np.identity(3)

    #R = np.eye(15)
    #R[0:3,0:3] = sensor_noise_velocity * np.identity(3)
    #R[3:15,3:15] = sensor_noise_foot_position * np.identity(12)

    R = np.eye(12)
    R[0:12,0:12] = sensor_noise_foot_position * np.identity(12)
    #####################################
    #### predict
    para=np.concatenate((np.array([T]),process_input,g),axis=0)
    xhat = EKF_process_leg(xhat,para)
    quat_ = xhat[18:22]
    quat = Rot.from_quat([quat_[1],quat_[2],quat_[3],quat_[0]])
    rotvec = quat.as_rotvec()
    xhat_error = np.concatenate((xhat[0:18],rotvec),axis = 0)



    F = j_EKF_process_error_dynamics(xhat_error,para)
    P = np.dot(F,np.dot(P,F.T))+Q
    #####################################

    #####################################
    #### update
    y = z_measurement-measurement_model_leg_rotvec(xhat_error)
    H = j_measurement_model_leg_rotvec(xhat_error)
    S = np.dot(H,np.dot(P,H.T))+R
    K = np.dot(P,np.dot(H.T,np.linalg.inv(S)))

    #print('xixi')
    #print(np.linalg.norm(xixi[18:22]))
    delta_xhat = np.dot(K,y)
    #delta_xhat[18:22] = delta_xhat[18:22]/np.linalg.norm(delta_xhat[18:22])
    #xhat[0:18] = xhat[0:18]+delta_xhat[0:18]
    #xhat[18:22] = quaternionMultiplication(xhat[18:22] ,delta_xhat[18:22])
    xhat[0:18] = xhat[0:18]+delta_xhat[0:18]
    delta_rotvec = Rot.from_rotvec(delta_xhat[18:21])
    delta_rotvec_ = delta_rotvec.as_rotvec()
    delta_rotvec_norm = np.linalg.norm(delta_rotvec_)
    #print(type(delta_rotvec_))
    delta_quat_paper = np.concatenate((np.array([np.cos(0.5*delta_rotvec_norm)]),np.sin(0.5*delta_rotvec_norm)*delta_rotvec_/delta_rotvec_norm),axis=0)
    delta_quat_ = delta_rotvec.as_quat()
    delta_quat = np.array([delta_quat_[3],delta_quat_[0],delta_quat_[1],delta_quat_[2]])
    #pdb.set_trace()
    xhat[18:22] = quaternionMultiplication(delta_quat,xhat[18:22])
    #xhat = xhat + np.dot(K,y)
    P = np.dot((np.eye(21)-np.dot(K,H)),P)
    #####################################
    #xhat[18:22]=xhat[18:22]/np.linalg.norm(xhat[18:22])
    return xhat,P
def ComputePostVelResetMap(xhat,T,process_input,z_measurement,P,contacts,touch_down,full_body_dynamic_state):
    g = np.array([0,0,-9.81])
    process_noise_pimu = 0.001
    process_noise_vimu = 0.001
    process_noise_p_qua = 0.001

    sensor_noise_velocity = 0.1
    sensor_noise_foot_position = 0.1
    if touch_down == 1:
        pass
        #print('touch down')
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

    Q = np.eye(22)
    Q[0:3,0:3] = process_noise_pimu *  np.identity(3)
    Q[3:6,3:6] = process_noise_vimu *  np.identity(3)
    Q[6:9,6:9] = process_noise_p_FL *  np.identity(3)
    Q[9:12,9:12] = process_noise_p_FR *  np.identity(3)
    Q[12:15,12:15] = process_noise_p_RL *  np.identity(3)
    Q[15:18,15:18] = process_noise_p_RR *  np.identity(3)
    Q[18:22,18:22] = process_noise_p_qua *  np.identity(4)

    #R = np.eye(15)
    #R[0:3,0:3] = sensor_noise_velocity * np.identity(3)
    #R[3:15,3:15] = sensor_noise_foot_position * np.identity(12)

    R = np.eye(12)
    R[0:12,0:12] = sensor_noise_foot_position * np.identity(12)
    #####################################
    #### predict
    para=np.concatenate((np.array([T]),process_input,g),axis=0)
    xhat = EKF_process_leg(xhat,para)
    F = j_EKF_process_leg(xhat,para)
    P = np.dot(F,np.dot(P,F.T))+Q
    #####################################

    #####################################
    #### impact
    if touch_down == 1:
        q_full_body_estimation = full_body_dynamic_state[0]
        dq_full_body_estimation = full_body_dynamic_state[1]
        #print(q_full_body_estimation.shape)
        #print(dq_full_body_estimation.shape)
        dq_plus = resetMap(q_full_body_estimation,dq_full_body_estimation,1)
        #dq_plus = dq_full_body
        xhat[3:6] = dq_plus[0:3]
    #####################################

    return dq_plus
def reArrangeQuaternion(q):
    q_o = np.zeros(4)
    q_o[0]=q[3]
    q_o[1]=q[0]
    q_o[2]=q[1]
    q_o[3]=q[2]
    return q_o
def quaternion2EnlerAngles(q):
    angles = np.zeros(3)
    angles[0]=np.arctan(2*(q[0]*q[1]+q[2]*q[3])/(1-2*(q[1]**2+q[2]**2)))
    angles[1]=np.arctan(2*(q[0]*q[2]-q[3]*q[1]))
    angles[2]=np.arctan(2*(q[0]*q[3]+q[1]*q[2])/(1-2*(q[2]**2+q[3]**2)))
    return angles
def quaternionMultiplication(q1,q2):
    w0, x0, y0, z0 = q1
    w1, x1, y1, z1 = q2
    return np.array([-x1 * x0 - y1 * y0 - z1 * z0 + w1 * w0,
                     x1 * w0 + y1 * z0 - z1 * y0 + w1 * x0,
                     -x1 * z0 + y1 * w0 + z1 * x0 + w1 * y0,
                     x1 * y0 - y1 * x0 + z1 * w0 + w1 * z0], dtype=np.float64)
def contactChangeDetection(previous_contacts,contacts):
    if len(previous_contacts[0]) == len(contacts[0]) and len(previous_contacts[1]) == len(contacts[1]) and len(previous_contacts[2]) == len(contacts[2]) and len(previous_contacts[3]) == len(contacts[3]):
        contact_change = 0
    else:
        contact_change = 1
    return contact_change
def contactChangeDetectionSingleLeg(previous_contacts,contacts):
    if len(previous_contacts[1]) == len(contacts[1]):
        contact_change = 0
    else:
        contact_change = 1
    return contact_change
def touchDownDetectionSingleLeg(previous_contacts,contacts):

    if len(contacts[1]) != 0 and len(previous_contacts[1]) == 0:
        touch_down = 1
    else:
        touch_down = 0
    return touch_down
def resetMap(q,dq,foot_index):
    M = laikagoM(q)

    if foot_index == 1:
        swing_foot_jacobian = impact_jacobian(q)
    elif foot_index == 2:
        swing_foot_jacobian = impact_jacobian(q)
    elif foot_index == 3:
        swing_foot_jacobian = impact_jacobian(q)
    elif foot_index == 4:
        swing_foot_jacobian = impact_jacobian(q)
    b = np.concatenate((np.dot(M,dq),np.zeros(12)),axis = 0)
    A = np.zeros([30,30])
    #print(swing_foot_jacobian.shape)
    A[0:18,0:18] = M
    A[0:18,18:30] = -swing_foot_jacobian.T
    A[18:30,0:18] = swing_foot_jacobian
    dq_plus_ = np.linalg.solve(A, b)
    dq_plus = dq_plus_[0:18]
    return dq_plus
