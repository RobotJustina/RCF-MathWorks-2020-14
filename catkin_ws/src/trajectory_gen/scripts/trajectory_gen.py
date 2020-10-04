#!/usr/bin/env python
import rospy
import numpy
import math
from std_msgs.msg import Float64MultiArray
from std_msgs.msg import Float32MultiArray

WAIT_FOR_NEW_GOAL  = 0
CALC_TRAJECTORY    = 10
SENDING_TRAJECTORY = 20
TRAJECTORY_DONE    = 30

SAMPLING_FREQUENCY = 250

def callback_goal_pose(msg):
    print "Received goal pose:"
    print msg.data
    global goal_pose, new_goal_pose
    goal_pose = msg.data
    new_goal_pose = True

def callback_current_pose(msg):
    global current_pose
    current_pose = msg.data

def get_single_trajectory(p0, pf, v0, vf, a0, af, t0, tf, delta_t):
    #Calculates the trajectory of ONLY ONE joint using a 5th degree polynomial.
    A1 = [t0**5    ,  t0**4   , t0**3    , t0**2 , t0 ,  1 ]
    A2 = [5*t0**4  ,  4*t0**3 ,  3*t0**2 , 2*t0  , 1  ,  0 ]
    A3 = [20*t0**3 ,  12*t0**2 , 6*t0    , 2     , 0  ,  0 ]
    A4 = [tf**5    ,  tf**4   ,  tf**3   , tf**2 , tf ,  1 ]
    A5 = [5*tf**4  ,  4*tf**3 ,  3*tf**2 , 2*tf  , 1  ,  0 ]
    A6 = [20*tf**3 ,  12*tf**2 , 6*tf    , 2     , 0  ,  0 ]

    B = numpy.array([[p0],[v0],[a0],[pf],[vf],[af]])
    A = numpy.array([A1, A2, A3, A4, A5, A6])
    if numpy.linalg.matrix_rank(A) != 6:
        print "Cannot calculate path. Coefficients matrix is singular"
        return None
    X = numpy.linalg.solve(A,B)

    n = int((math.fabs(tf - t0))/delta_t)
    positions = numpy.zeros(n)
    speeds = numpy.zeros(n)
    
    t = t0
    for i in range (n): 
        positions[i] = X[0]*t**5 + X[1]*t**4 + X[2]*t**3 + X[3]*t**2 + X[4]*t + X[5]
        speeds[i] = 5*X[0]*t**4 + 4*X[1]*t**3 + 3*X[2]*t**2 + 2*X[3]*t + X[4]
        t += delta_t
    return positions, speeds

def get_trajectory(current_pose, goal_pose, mean_speed, delta_t):
    #Calculates the trajectories for all joints
    #Resulting trajectory is an array of [n][DOFx2] where n is the number of points (usually hundreds or thousands)
    #Every array trajectory[i] is an DOFx2 with form [positions speeds]
    #DOF is given by the length of current_pose
    max_diff = max([abs(current_pose[i] - goal_pose[i]) for i in range(len(current_pose))])
    goal_t = max_diff/mean_speed
    all_positions = []
    all_speeds = []
    trajectory = []
    for i in range(len(current_pose)):
        results = get_single_trajectory(current_pose[i], goal_pose[i], 0,0,0,0,0,goal_t, delta_t)
        if results == None:
            print "Cannot calculate trajectory :'("
            return None
        [positions, speeds] = results
        all_positions.append(positions)
        all_speeds.append(speeds)
    for i in range(len(all_positions[0])):
        point = [all_positions[j][i] for j in range(len(all_positions))] + [all_speeds[j][i] for j in range(len(all_speeds))]
        trajectory.append(point)
    print "TrajectoryGenerator.-> Trajectory generated with " + str(len(trajectory)) + " points"
    return trajectory 

def main():
    print "Initializing trajectory generation..."
    rospy.init_node("trajectory_gen");
    rospy.Subscriber("/goal_positions", Float64MultiArray, callback_goal_pose)
    rospy.Subscriber("/joint_positions", Float64MultiArray, callback_current_pose)
    pub_goal_trajectory = rospy.Publisher("/goal_trajectory", Float32MultiArray, queue_size=10)
    loop = rospy.Rate(SAMPLING_FREQUENCY)
    global goal_pose, current_pose, new_goal_pose
    new_goal_pose = False
    current_pose  = [0,0,0,0,0,0,0]
    goal_pose     = [0,0,0,0,0,0,0]
    msg_goal_trajectory = Float32MultiArray()
    current_state = WAIT_FOR_NEW_GOAL
    trajectory = []
    current_k = 0
    while not rospy.is_shutdown():
        if current_state == WAIT_FOR_NEW_GOAL:
            if new_goal_pose:
                new_goal_pose = False
                print "TrajectoryGenerator.->Received new goal"
                current_state = CALC_TRAJECTORY
        elif current_state == CALC_TRAJECTORY:
            print "TrajectoryGenerator.->Calculating trajectory..."
            trajectory = get_trajectory(current_pose, goal_pose, 0.2, 1.0/SAMPLING_FREQUENCY)
            if trajectory == None:
                current_state = WAIT_FOR_NEW_GOAL
            else:
                current_state = SENDING_TRAJECTORY
                current_k = 0
                print "TrajectoryGenerator.->Sending trajectory..."
        elif current_state ==SENDING_TRAJECTORY:
            if current_k == len(trajectory):
                current_state = TRAJECTORY_DONE
            else:
                msg_goal_trajectory.data = trajectory[current_k]
                pub_goal_trajectory.publish(msg_goal_trajectory)
                current_k += 1
        elif current_state == TRAJECTORY_DONE:
            msg_goal_trajectory.data = [x for x in goal_pose] + [0 for i in range(7)]
            pub_goal_trajectory.publish(msg_goal_trajectory)
            print "TrajectoryGenerator.->Trajectory sent succesfully..."
            current_state = WAIT_FOR_NEW_GOAL
        loop.sleep()

if __name__ == "__main__":
    main();
