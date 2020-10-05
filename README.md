# RCF-MathWorks-2020-14
Deliverables of the project "Object Recognition by Physical Properties Detection using Fault Reconstruction Techniques" supported by Robocup Federation and MathWorks under grant 2020-14

This project is developed in the context of the Robocup@Home competition. We propose to estimate the mass of a grasped object using fault reconstruction techniques. Considering the weight of the object as a disturbance causing a faulty behavior, such weight can be estimated using an Sliding Mode Observer. The estimation of the grasped object mass can be used to improve manipulation tasks when visual information is not enough to correctly identify an object (e.g., an empty and a full can). The overall system was designed and tested using Simulink Toolboxes and this repository contains the files and instructions to reproduce the results obtained using two different manipulators: Katana (https://github.com/uos/katana_driver) and Justina's left arm (a robot developed in the Biorobotics Laboratory, UNAM https://biorobotics.fi-p.unam.mx/). For technical details, please refer to [ref to report].

## Requirements
* Matlab 2020a (Required toolbox: ROS, Control and Simscape)
* ROS Melodic

## Overview of the system

The proposed system is composed by the following main modules:

* Manipulator: a module to simulate the system dynamics (to be replaced by a real manipulator)
* SMO: A Sliding Mode Observer to reconstruct the fault signal (used to estimate the object's weight)
* EKF: An Extended Kalman Filter, used to estimate joint speeds for control purposes.
* ControlPD: A PD control plus gravity compensation.

The following figure shows the interconnection of these four modules:
<img src="https://github.com/RobotJustina/RCF-MathWorks-2020-14/blob/master/media/FullSystem.png" alt="Full System" width="640"/>

## Running simulations:

Results can be reproduced in the following ways

* Using Simulink and the Justina's manipulator
* Using Justina's manipulator with stand-alone ROS nodes
* Using Simulink and the Katana manipulator

### Runnig Justina's manipulator using Simulink

Open the Simulink model 'matlab_files/justina_arm/justina_full_system.slx'. Simulations require the robot description file (URDF), thus, ensure your Matlab working directory is 'matlab/justina_arm'. After simulation completes, you should see the joint positions:

<img src="https://github.com/RobotJustina/RCF-MathWorks-2020-14/blob/master/media/JointPositions.png" alt="Resulting joint positions" width="640"/>

And the corresponding Mass Estimation:

<img src="https://github.com/RobotJustina/RCF-MathWorks-2020-14/blob/master/media/MassEstimation.png" alt="Resulting mass estimation" width="640"/>

You can change the simulated mass of the grasped object to verify the estimation. 

### Running Justina's manipulator with stand-alone ROS nodes

The four main modules of this proposal can be run as stand-alone ROS nodes. The corresponding exported packages are already included in the 'catkin_ws/src' folder. Additionaly, three packages are include to ease operation:
* A node for generating polinomial trajectories.
* A GUI for setting desired positions and showing the resulting estimated mass. 
* A package containing the corresponding launch files. 

To run the simulations, first compile the repository:

* $ cd [path_to_this_repo]/catkin_ws
* $ catkin_make -j2 -l2
* $ source devel/setup.bash

And then, run the launch file:

* $ roslaunch bring_up justina_arm.launch

You should see an RViz showing Justina's manipulator:

<img src="https://github.com/RobotJustina/RCF-MathWorks-2020-14/blob/master/media/rviz.png" alt="RViz for Justina's manipulator" width="640"/>

And a GUI, which allows you to set the goal position, the simulated mass of the grasped object, and to see the current position and the current estimated mass:

<img src="https://github.com/RobotJustina/RCF-MathWorks-2020-14/blob/master/media/gui.png" alt="GUI for Justina's manipulator" width="320"/>

You can change tunning constants of control and Sliding Mode Observer with the corresponding parameters in the launch file. 

### Runnig Katana manipulator using Simulink

Open the Simulink model 'matlab_files/katana/katana_full_system.slx'. Ensure your Matlab working directory is 'matlab/katana'. After simulation completes, you should see, in the corresponding Scope blocks, the joint positions:

<img src="https://github.com/RobotJustina/RCF-MathWorks-2020-14/blob/master/media/KatanaPoses.png" alt="Katana positions" width="640"/>

And the resulting mass estimation:

<img src="https://github.com/RobotJustina/RCF-MathWorks-2020-14/blob/master/media/KatanaMassEstimation.png" alt="Katana positions" width="640"/>

To run the Katana simulation using stand-alone ROS nodes, the corresponding blocks in the foder 'matlab_files/katana' can be exported using the steps described in https://la.mathworks.com/help/ros/ug/generate-a-standalone-ros-node-from-simulink.html. 

Description files for Katana manipulator were obtained from https://github.com/uos/katana_driver. 
