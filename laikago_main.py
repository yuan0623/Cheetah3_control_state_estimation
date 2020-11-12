import pybullet as p
import matplotlib.pyplot as plt
#import numpy as np
import csv
import time
import pdb
from state_estimation import *

#from foot_poisition_symbolic import*
#from foot_velocity_symbolic import*
from helper_function import *
# class Dog:
p.connect(p.GUI)
plane = p.loadURDF("plane.urdf")
p.setGravity(0,0,-9.8)
#p.setTimeStep(1./500)
p.setRealTimeSimulation(1)

#p.setDefaultContactERP(0)
#urdfFlags = p.URDF_USE_SELF_COLLISION+p.URDF_USE_SELF_COLLISION_EXCLUDE_ALL_PARENTS
urdfFlags = p.URDF_USE_SELF_COLLISION
quadruped = p.loadURDF("laikago/urdf/laikago.urdf",[-0.0,0.0,0.58],[0,0,0,1], flags = urdfFlags,useFixedBase=False)
#quadruped_2 = p.loadURDF("laikago/laikago.urdf",[0,0,0.48],[0,0,0,1], flags = urdfFlags,useFixedBase=False)
#enable collision between lower legs
for j in range (p.getNumJoints(quadruped)):
        print(p.getJointInfo(quadruped,j))

lower_legs = [2,5,8,11]
for l0 in lower_legs:
    for l1 in lower_legs:
        if (l1>l0):
            enableCollision = 1
            print("collision for pair",l0,l1, p.getJointInfo(quadruped,l0)[12],p.getJointInfo(quadruped,l1)[12], "enabled=",enableCollision)
            p.setCollisionFilterPair(quadruped, quadruped, 2,5,enableCollision)

jointIds=[]
paramIds=[]

maxForceId = p.addUserDebugParameter("maxForce",0,100,80)

for j in range (p.getNumJoints(quadruped)):
    p.changeDynamics(quadruped,j,linearDamping=0, angularDamping=0)
    info = p.getJointInfo(quadruped,j)
    # print(info)
    jointName = info[1]
    jointType = info[2]
    if (jointType==p.JOINT_PRISMATIC or jointType==p.JOINT_REVOLUTE):
        jointIds.append(j)

# print(jointIds)
#time.sleep(20)

p.getCameraImage(1280,720)
#p.setRealTimeSimulation(0)

# Set up trajectory of laikago
trajectory=[]
with open('matlab_data/L_Walk_nd_50_steps.csv', 'r') as csvfile:  #int_10_step
    spamreader = csv.reader(csvfile)
    for row in spamreader:
        row = [float(element) for element in list(row)]
        trajectory.append(row)
trajectory = np.array(trajectory)


targetPos = trajectory[0,j]
pos_r=3

for i in range(20):
    for j in range(p.getNumJoints(quadruped)):
        #p.stepSimulation()
        pos=(pos_r/(i+1)+(i+1))/(i+1)
    #targetPos = p.readUserDebugParameter(c)
        maxForce = p.readUserDebugParameter(maxForceId)
        targetPos = trajectory[0,j]
        p.setJointMotorControl2(quadruped,jointIds[j],p.POSITION_CONTROL,targetPos/pos,force=maxForce)

        time.sleep(0.002)

print('motion ready')
print(pos)
#pdb.set_trace()
count = 0
t=[]

# Initialize state variables



Base_Pose = []
Xhat = []
previous_base_lin_velocity = np.zeros(3)



dt = 1/240
time.sleep(2)

#p.setRealTimeSimulation(0)
#################################################################################
# run the motion of the robot
#################################################################################
#p.setTimeStep(1/240)
#P=np.eye(18)*100
#xhat = np.zeros(18)

P=np.eye(21)*100
xhat = np.array([0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0])

#P=np.eye(10)*100
#xhat = np.array([0,0,0,0,0,0,1,0,0,0])
xhat_vec=[]
base_pose_vec=[]
P_norm_vec=[]
base_position_measurement_vec=[]
q_joint = np.zeros(p.getNumJoints(quadruped))
dq_joint = np.zeros(p.getNumJoints(quadruped))
acce_reading_vec = []
gyro_reading_vec = []
base_orientation_euler_GT_vec =[]
base_orientation_euler_ES_vec =[]
current_base_lin_velocity_vec =[]
####################################################################################
#initilize the contact
contact_FR = p.getContactPoints(bodyA = quadruped,bodyB = plane,linkIndexA = 2)
contact_FL = p.getContactPoints(bodyA = quadruped,bodyB = plane,linkIndexA = 5)
contact_RR = p.getContactPoints(bodyA = quadruped,bodyB = plane,linkIndexA = 8)
contact_RL = p.getContactPoints(bodyA = quadruped,bodyB = plane,linkIndexA = 11)
previous_contacts=[contact_FL,contact_FR,contact_RL,contact_RR]
contact_switch_count = 0
t_contact_swich_vec = []
y_contact_swich_vec = []
t_major_contact_swich_vec = []
y_major_contact_swich_vec = []
contact_duration = 0
major_contact_count = 0
#y_major_contact_swich_vec = np.oness(64)
###################################################################################

for i in range(1,8000,1):

    current_base_lin_velocity = np.array(p.getBaseVelocity(quadruped)[0])
    current_base_ang_velocity = np.array(p.getBaseVelocity(quadruped)[1])
    base_acceleration = (current_base_lin_velocity - previous_base_lin_velocity) / dt
    u = base_acceleration

    c_t=i/240
    t.append(c_t)
    joint_state = []
    for j in range(p.getNumJoints(quadruped)):
        targetPos = trajectory[i,j]
        p.setJointMotorControl2(quadruped,jointIds[j],p.POSITION_CONTROL,targetPos, force=200) #positionGain=.707, velocityGain=1.0,
        joint_state = p.getJointState(quadruped,jointIds[j])
        joint_position = joint_state[0]
        joint_velocity = joint_state[1]
        q_joint[j]=joint_position
        dq_joint[j] = joint_velocity

    #######################################################
    # incoperate sensor measurement

    base_pose = p.getBasePositionAndOrientation(quadruped)
    #pdb.set_trace()
    base_position_measurement = np.array(base_pose[0])+1/100*np.random.standard_normal()
    base_orientation = base_pose[1] #[x,y,z,w]
    base_orientation_rearranged_GT = reArrangeQuaternion(base_orientation)
    base_orientation_euler_GT = quaternion2EnlerAngles(base_orientation_rearranged_GT)
    RotM = quaternion2RotM(base_orientation)
    acce_reading = getAcceReading(base_acceleration,RotM)
    gyro_reading = getGyroReading(current_base_ang_velocity,RotM)
    process_input = np.concatenate((acce_reading,gyro_reading),axis = 0)

    #q_god_view = np.concatenate((base_position_measurement,Euler,q_joint),axis = 0)
    q_body = np.concatenate((np.array([0,0,0,0,0,0]),q_joint),axis = 0)
    #foot_position_god_view = feetPosition(q_god_view)
    foot_position_relative = feetPosition(q_body)
    #z_measurement = np.concatenate((base_position_measurement, foot_position_relative),axis = 0)
    #z_measurement = np.concatenate((current_base_lin_velocity, foot_position_relative),axis = 0)
    #z_measurement = np.concatenate((current_base_lin_velocity+np.random.rand(3)*0.01, foot_position_relative),axis = 0)
    z_measurement = foot_position_relative
    #z_measurement = current_base_lin_velocity
    ######################################################

    contact_index = []
    contact_FR = p.getContactPoints(bodyA = quadruped,bodyB = plane,linkIndexA = 2)
    contact_FL = p.getContactPoints(bodyA = quadruped,bodyB = plane,linkIndexA = 5)
    contact_RR = p.getContactPoints(bodyA = quadruped,bodyB = plane,linkIndexA = 8)
    contact_RL = p.getContactPoints(bodyA = quadruped,bodyB = plane,linkIndexA = 11)
    contacts=[contact_FL,contact_FR,contact_RL,contact_RR]

    #print(len(contact_FL))
    #print(len(contact_FR))
    #print(len(contact_RL))
    #print(len(contact_RR))

    #xhat,P = EKF(xhat,dt,process_input,z_measurement,P)
    #xhat,P = EKFWithLegEncoder(xhat,dt,process_input,z_measurement,P,contacts)
    xhat,P = EKFWithLegEncoderRotVec(xhat,dt,process_input,z_measurement,P,contacts)
    print(np.linalg.norm(P))

    #xhat,P = state_estimation_god_view_relative(dt,xhat,u,z_measurement,P)
    #xhat,P = Cheetah3KalmanFilter(dt,xhat,u,z_measurement,P,contacts)
    base_orinetation_estimation = xhat[18:22]
    #base_orinetation_estimation = xhat[6:10]
    base_orientation_euler_ES = quaternion2EnlerAngles(base_orinetation_estimation)
    base_orientation_euler_ES_vec.append(base_orientation_euler_ES)
    current_base_lin_velocity_vec.append(current_base_lin_velocity)
    time.sleep(dt)

    contact_change = contactChangeDetection(previous_contacts,contacts)

    if contact_change == 1:
        print(contact_switch_count)
        print('switch contact')
        t_contact_swich_vec.append(c_t)
        y_contact_swich_vec.append(-0.5)
        contact_switch_count =contact_switch_count+1

    contact_duration = contact_duration+1/240
    #print(contact_duration)
    if contact_change == 1 and contact_duration>0.43:
        contact_duration = 0
        t_major_contact_swich_vec.append(c_t)
        major_contact_count = major_contact_count+1





    '''
    print('acce_reading')
    print(acce_reading)
    print('xhat')
    print(xhat)
    print('P norm')
    print(np.linalg.norm(P))
    print('gyro reading')
    print(gyro_reading)
    print('estimated quaternion')
    print(xhat[18:22])
    print('estimated quaternion norm')
    print(np.linalg.norm(xhat[18:22]))
    '''
    #print('real x')
    #print(base_pose[0][0])
    #print('foot_position')
    #print(foot_position_relative)
    #pdb.set_trace()
    previous_base_lin_velocity = current_base_lin_velocity
    acce_reading_vec.append(acce_reading)
    gyro_reading_vec.append(gyro_reading)
    xhat_vec.append(xhat)
    #base_pose_vec.append(base_pose[0][0])
    #P_norm_vec.append(np.linalg.norm(P))
    base_position_measurement_vec.append(base_position_measurement)
    base_orientation_euler_GT_vec.append(base_orientation_euler_GT)
    previous_contacts = contacts
    #p.stepSimulation()
time.sleep(2)

##################################################################################
# generate plots
##################################################################################
acce_reading_vec_np = np.array(acce_reading_vec)
gyro_reading_vec_np = np.array(gyro_reading_vec)
base_position_measurement_vec_np = np.array(base_position_measurement_vec)
xhat_vec_np=np.array(xhat_vec)
base_orientation_euler_ES_vec_np = np.array(base_orientation_euler_ES_vec)
base_orientation_euler_GT_vec_np = np.array(base_orientation_euler_GT_vec)
t_contact_swich_vec_np = np.array(t_contact_swich_vec)
y_contact_swich_vec_np = np.array(y_contact_swich_vec)
current_base_lin_velocity_vec_np = np.array(current_base_lin_velocity_vec)
t_major_contact_swich_vec_np = np.array(t_major_contact_swich_vec)
print(acce_reading_vec_np.shape)
print(len(t_contact_swich_vec_np))
print(contact_switch_count)
print('major contact')
print(major_contact_count)
plt.figure(1)
plt.title('accelemoter reading')
#plt.vlines(t_contact_swich_vec_np,-5,15,label = 'contact moment',linewidth=0.2)
plt.vlines(t_major_contact_swich_vec_np,-5,15,label = 'contact moment_major',linewidth=1,color = 'red')

plt.plot(t,acce_reading_vec_np[:,0],label='x')
plt.plot(t,acce_reading_vec_np[:,1],label='y')
plt.plot(t,acce_reading_vec_np[:,2],label='z')
#plt.plot(t_contact_swich_vec_np ,y_contact_swich_vec_np,'o',label = 'contact moment')

plt.legend()

plt.figure(2)
plt.title('gyro reading')
#plt.vlines(t_contact_swich_vec_np,-0.1,0.1,label = 'contact moment',linewidth=0.2)
plt.vlines(t_major_contact_swich_vec_np,-0.1,0.1,label = 'contact moment_major',linewidth=1,color = 'red')
plt.plot(t,gyro_reading_vec_np[:,0],label='x')
plt.plot(t,gyro_reading_vec_np[:,1],label='y')
plt.plot(t,gyro_reading_vec_np[:,2],label='z')
#plt.plot(t_contact_swich_vec_np ,y_contact_swich_vec_np,'o',label = 'contact moment')
plt.legend()
#plt.plot(t,acce_reading_vec_np[:,1],label='y')
#plt.plot(t,acce_reading_vec_np[:,2],label='z')
#plt.figure(2)
#plt.title('estimation result x')
#plt.plot(t,base_position_measurement_vec_np[:,0],label='measurement')
#plt.plot(t,xhat_vec_np[:,0],label='estimation')
#plt.plot(t_contact_swich_vec_np ,y_contact_swich_vec_np,'o',label = 'contact moment')
#plt.legend()

plt.figure(3)
plt.title('estimation result y')
#plt.vlines(t_contact_swich_vec_np,-0.1,0.1,label = 'contact moment',linewidth=0.2)
plt.vlines(t_major_contact_swich_vec_np,-0.1,0.1,label = 'contact moment_major',linewidth=1,color = 'red')
plt.plot(t,base_position_measurement_vec_np[:,1],label='measurement')
plt.plot(t,xhat_vec_np[:,1],label='estimation')
plt.legend()

plt.figure(4)
plt.title('estimation result z')
#plt.vlines(t_contact_swich_vec_np,0,1,label = 'contact moment',linewidth=0.2)
plt.vlines(t_major_contact_swich_vec_np,0,1,label = 'contact moment_major',linewidth=1,color = 'red')
plt.plot(t,base_position_measurement_vec_np[:,2],label='measurement')
plt.plot(t,xhat_vec_np[:,2],label='estimation')
plt.legend()

plt.figure(5)
plt.title('roll')
#plt.vlines(t_contact_swich_vec_np,-0.08,0.04,label = 'contact moment',linewidth=0.2)
plt.vlines(t_major_contact_swich_vec_np,-0.08,0.04,label = 'contact moment_major',linewidth=1,color = 'red')
plt.plot(t,base_orientation_euler_ES_vec_np[:,0],label='esitmation')
plt.plot(t,base_orientation_euler_GT_vec_np[:,0],label='ground truth')
plt.legend()

plt.figure(6)
plt.title('pitch')
#plt.vlines(t_contact_swich_vec_np,-0.08,0.04,label = 'contact moment',linewidth=0.2)
plt.vlines(t_major_contact_swich_vec_np,-0.08,0.04, label = 'contact moment_major',linewidth=1,color = 'red')
plt.plot(t,base_orientation_euler_ES_vec_np[:,1],label='esitmation')
plt.plot(t,base_orientation_euler_GT_vec_np[:,1],label='ground truth')
plt.legend()

plt.figure(7)
plt.title('x-axis foot position estimation')
#plt.vlines(t_contact_swich_vec_np,-0,20,label = 'contact moment',linewidth=0.2)
plt.vlines(t_major_contact_swich_vec_np,0,20,label = 'contact moment_major',linewidth=1,color = 'red')
plt.plot(t,xhat_vec_np[:,6],label='FL')
plt.plot(t,xhat_vec_np[:,9],label='FR')
plt.plot(t,xhat_vec_np[:,12],label='RL')
plt.plot(t,xhat_vec_np[:,15],label='RR')
plt.xlabel('t (s)')
plt.ylabel('x (m)')
plt.legend()

plt.figure(8)
plt.title('x-axis velocity')
#plt.vlines(t_contact_swich_vec_np,-0.1,0.1,label = 'contact moment',linewidth=0.2)
plt.vlines(t_major_contact_swich_vec_np,-0.1,0.1,label = 'contact moment_major',linewidth=1,color = 'red')
plt.plot(t,xhat_vec_np[:,3],label='estimation')
plt.plot(t,current_base_lin_velocity_vec_np[:,0],'--',label='ground truth')
plt.xlabel('t (s)')
plt.ylabel('x (m/s)')
plt.legend()

plt.figure(9)
plt.title('y-axis velocity')
#plt.vlines(t_contact_swich_vec_np,-0.1,0.1,label = 'contact moment',linewidth=0.2)
plt.vlines(t_major_contact_swich_vec_np,-0.1,0.1,label = 'contact moment_major',linewidth=1,color = 'red')
plt.plot(t,xhat_vec_np[:,4],label='estimation')
plt.plot(t,current_base_lin_velocity_vec_np[:,1],'--',label='ground truth')
plt.xlabel('t (s)')
plt.ylabel('y (m/s)')
plt.legend()

plt.figure(10)
plt.title('z-axis velocity')
#plt.vlines(t_contact_swich_vec_np,-0.1,0.1,label = 'contact moment',linewidth=0.2)
plt.vlines(t_major_contact_swich_vec_np,-0.1,0.1,label = 'contact moment_major',linewidth=1,color = 'red')
plt.plot(t,xhat_vec_np[:,5],label='estimation')
plt.plot(t,current_base_lin_velocity_vec_np[:,2],'--',label='ground truth')
plt.xlabel('t (s)')
plt.ylabel('z (m/s)')
plt.legend()
'''
plt.figure(11)
plt.title('bias')

plt.plot(t,xhat_vec_np[:,22],label='a_x')
plt.plot(t,xhat_vec_np[:,23],label='a_y')
plt.plot(t,xhat_vec_np[:,24],label='a_z')
plt.plot(t,xhat_vec_np[:,25],label='omega_x')
plt.plot(t,xhat_vec_np[:,26],label='omega_y')
plt.plot(t,xhat_vec_np[:,27],label='omega_z')

plt.xlabel('t (s)')
plt.ylabel('z (m/s)')
'''
plt.legend()

plt.show()



'''
xhat_vec_np=np.array(xhat_vec)
base_pose_vec_np=np.array(base_pose_vec)
base_position_measurement_vec_np=np.array(base_position_measurement_vec)
print(xhat_vec_np.shape)
plt.figure(1)
plt.title('x-axis comparison')
#plt.plot(t,base_position_measurement_vec_np,label='measurement')
plt.plot(t,xhat_vec_np[:,0],label='estimation')
plt.plot(t,base_pose_vec_np,label='ground truth')
plt.xlabel('t (s)')
plt.ylabel('x (m)')
plt.legend()
#plt.plot(t,xhat_vec_np[:,2],label='base height')



plt.figure(2)
plt.title('norm of P matrix')
plt.plot(P_norm_vec)
plt.xlabel('t (s)')
plt.ylabel('norm of P')
plt.figure(3)
plt.title('x-axis foot position estimation')
plt.plot(t,xhat_vec_np[:,6],label='FL')
plt.plot(t,xhat_vec_np[:,9],label='FR')
plt.plot(t,xhat_vec_np[:,12],label='RL')
plt.plot(t,xhat_vec_np[:,15],label='RR')
plt.xlabel('t (s)')
plt.ylabel('x (m)')
plt.legend()
plt.show()
'''
p.disconnect()
