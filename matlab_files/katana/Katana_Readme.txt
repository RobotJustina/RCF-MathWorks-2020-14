Online mass estimation for the Katana manipulator

NOTE: Before running simulation file download the katana robot manipulator description for here:

 - <insert link to katana description download>

Files contained in this folder:

Complete system simulation:

 - "katana_full_system.slx" Complete system level simulation of algorithms for mass estimation.

Deployment to ROS-based robot or simulator:

 - "katana_control.slx" ROS node for control of the manipulator joints
 - "katana_ekf.slx" ROS node for joint speed estimation based on an extended kalman filter
 - "katana_smo.slx" ROS node implementing mass estimation using a sliding mode observer
 - For information on how to deploy ROS nodes from Simulink, see this link: 
 - https://www.mathworks.com/help/ros/ug/generate-a-standalone-ros-node-from-simulink.html

Other files:

 - "katana_rigid_body_tree.mat" MATLAB data file containing rigid body tree object obtained using "importrobot" and the urdf file
