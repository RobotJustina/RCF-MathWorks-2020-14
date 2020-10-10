Online mass estimation for the Justina manipulator

Files contained in this folder:

Complete system simulation:

 - "justina_full_system.slx" Complete system level simulation of algorithms for mass estimation.

Deployment to ROS-based robot or simulator:

 - "justina_control.slx" ROS node for control of the manipulator joints
 - "justina_ekf.slx" ROS node for joint speed estimation based on an extended kalman filter
 - "justina_manipulator.slx" ROS node computing the multibody dynamics of the manipulation task
 - "justina_smo.slx" ROS node implementing mass estimation using a sliding mode observer
 - For information on how to deploy ROS nodes from Simulink, see this link: 
 - https://www.mathworks.com/help/ros/ug/generate-a-standalone-ros-node-from-simulink.html

Other files:

 - "justina_rigid_body_tree.mat" MATLAB data file containing rigid body tree object obtained using "importrobot" and the urdf file
