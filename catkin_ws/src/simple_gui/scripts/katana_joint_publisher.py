#!/usr/bin/env python
import rospy
from sensor_msgs.msg import JointState
from std_msgs.msg import Float64MultiArray

def callback_positions(msg):
    global positions
    positions = msg.data

def main():
    print "INITIALIZING KATANA JOINT STATE PUBLISHER..."
    rospy.init_node("joint_publisher")
    loop = rospy.Rate(25)
    rospy.Subscriber('/joint_positions', Float64MultiArray, callback_positions)
    pub_joints = rospy.Publisher('/joint_states', JointState, queue_size=10)
    msg_joints = JointState()
    msg_joints.name = ["katana_motor1_pan_joint",  "katana_motor2_lift_joint", "katana_motor3_lift_joint",
                       "katana_motor4_lift_joint", "katana_motor5_wrist_roll_joint",
                       "katana_r_finger_joint", "katana_l_finger_joint"]
    global positions
    positions = [0,0,0,0,0,0,0]
    while not rospy.is_shutdown():
        msg_joints.header.stamp = rospy.Time.now()
        msg_joints.position = positions
        pub_joints.publish(msg_joints)
        loop.sleep()

if __name__ == '__main__':
    main()
