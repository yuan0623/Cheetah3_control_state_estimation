import pybullet as p
import matplotlib.pyplot as plt
import numpy as np
import csv
import time
import pdb
from state_estimation import *
from foot_poisition_symbolic import*
from foot_velocity_symbolic import*
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
quadruped = p.loadURDF("laikago/urdf/laikago.urdf",[0.0,0.0,0.58],[0,0,0,1], flags = urdfFlags,useFixedBase=False)
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

P = 100 * np.identity(18)

dt = 1/240
time.sleep(2)

#p.setRealTimeSimulation(0)
#################################################################################
# run the motion of the robot
#################################################################################
#p.setTimeStep(1/240)
P=np.eye(6)*100
xhat = np.zeros(6)
xhat_vec=[]
base_pose_vec=[]
P_norm_vec=[]
base_position_measurement_vec=[]
q_joint = np.zeros(p.getNumJoints(quadruped))
dq_joint = np.zeros(p.getNumJoints(quadruped))
for i in range(1,8000,1):

    current_base_lin_velocity = np.array(p.getBaseVelocity(quadruped)[0])

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
    base_orientation = base_pose[1]
    Euler = p.getEulerFromQuaternion(base_orientation)

    q_god_view = np.concatenate((base_position_measurement,Euler,q_joint),axis = 0)
    foot_position_god_view = feetPosition(q_god_view)
    #z_measurement = base_position_measurement
    z_measurement = current_base_lin_velocity
    ######################################################


    #xhat,P = state_estimation_simple_version(dt,xhat,u,z_measurement,P)
    xhat,P = state_estimation_simple_velocity_version(dt,xhat,u,z_measurement,P)

    #if np.linalg.norm(P)>60000:
    #    P=np.eye(6)*100
    #xhat,P = state_estimation_god_view(dt,xhat,u,z_measurement,P)

    time.sleep(dt)



    print('estimated x')
    print(xhat[0])
    print('real x')
    print(base_pose[0][0])
    print('foot_position')
    print(foot_position_god_view)

    previous_base_lin_velocity = current_base_lin_velocity
    xhat_vec.append(xhat[0])
    base_pose_vec.append(base_pose[0][0])
    P_norm_vec.append(np.linalg.norm(P))
    base_position_measurement_vec.append(base_position_measurement)
    #p.stepSimulation()
time.sleep(2)

##################################################################################
# generate plots
##################################################################################
xhat_vec_np=np.array(xhat_vec)
base_pose_vec_np=np.array(base_pose_vec)
base_position_measurement_vec_np=np.array(base_position_measurement_vec)
plt.figure(1)
plt.title('x-axis comparison')
#plt.plot(t,base_position_measurement_vec_np[:,0],label='measurement')
plt.plot(t,xhat_vec_np,label='estimation')
plt.plot(t,base_pose_vec_np,label='ground truth')
plt.xlabel('t (s)')
plt.ylabel('x (m)')
plt.legend()
plt.figure(2)
plt.title('norm of P matrix')
plt.plot(t,P_norm_vec)
plt.xlabel('t (s)')
plt.ylabel('norm of P')
plt.show()
p.disconnect()
