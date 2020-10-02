# RCF-MathWorks-2020-14
Deliverables of the project "Object Recognition by Physical Properties Detection using Fault Reconstruction Techniques" supported by Robocup Federation and MathWorks under grant 2020-14

This project is developed in the context of the Robocup@Home competition. We propose to estimate the mass of a grasped object using fault reconstruction techniques. Considering the weight of the object as a disturbance causing a faulty behavior, such weight can be estimated using an Sliding Mode Observer. The estimation of the grasped object mass can be used to improve manipulation tasks when visual information is not enough to correctly identify an object (e.g., an empty and a full can). The overall system was designed and tested using Simulink Toolboxes and this repository contains the files and instructions to reproduce the results obtained using two different manipulators: Katana and Justina's left arm (a robot developed in the Biorobotics Laboratory, UNAM). For technical details, please refer to [ref to report].

##Requirements
* Matlab 2020a
* ROS Melodic

##Overview of the system

The proposed system is composed by the following main modules:

* Manipulator: a module to simulate the system dynamics (to be replaced by a real manipulator)
* SMO: A Sliding Mode Observer to reconstruct the fault signal (used to estimate the object's weight)
* EKF: An Extended Kalman Filter, used to estimate joint speeds for control purposes.
* ControlPD: A PD control plus gravity compensation.

The following figure shows the interconnection of all subsystems.

##Running simulations:

Results can be reproduced with two 
* Using the corresponding 'full_system' Simulink file
* Using the exported ROS nodes.

To export the simulink Files:
