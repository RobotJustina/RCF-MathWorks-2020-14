cmake_minimum_required(VERSION 2.8.3)
project(manipulator)
set(CMAKE_VERBOSE_MAKEFILE ON)

## Make top-level project name available in all nested projects.
set(MW_TOP_LEVEL_PROJECT_NAME ${PROJECT_NAME})


## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
roscpp
sensor_msgs
std_msgs
)

add_definitions(
-DMODEL=manipulator -DNUMST=4 -DNCSTATES=14 -DHAVESTDIO -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0 -DUNIX -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTID01EQ=1 -DTERMFCN=1 -DONESTEPFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=0 -DROS_PROJECT -DMW_SCHED_OTHER -DSTACK_SIZE=64 -D__MW_TARGET_USE_HARDWARE_RESOURCES_H__ -DRT=RT )

## The catkin_package macro generates cmake config files for your package
## Declare things to be passed to dependent projects
## INCLUDE_DIRS: uncomment this if you package contains header files
## LIBRARIES: libraries you create in this project that dependent projects also need
## CATKIN_DEPENDS: catkin_packages dependent projects also need
## DEPENDS: system dependencies of this project that dependent projects also need
catkin_package(
   CATKIN_DEPENDS roscpp sensor_msgs std_msgs 
)

###########
## Build ##
###########

## Specify additional locations of header files
## Your package locations should be listed before other locations
# include_directories(include)
include_directories(
  include
  ${PROJECT_SOURCE_DIR}
  ${Boost_INCLUDE_DIRS}
  ${catkin_INCLUDE_DIRS}
)

## Get list of .c files in project source directory
file(GLOB ${PROJECT_NAME}_C_SOURCES RELATIVE ${PROJECT_SOURCE_DIR} ${PROJECT_SOURCE_DIR}/*.c)
## Get list of .cpp files in project source directory
file(GLOB ${PROJECT_NAME}_CPP_SOURCES RELATIVE ${PROJECT_SOURCE_DIR} ${PROJECT_SOURCE_DIR}/*.cpp)

## Declare executable
add_executable(${PROJECT_NAME}_node
   manipulator_5aaa3abb_1.c
   manipulator_5aaa3abb_1_create.c
   manipulator_5aaa3abb_1_setParameters.c
   manipulator_5aaa3abb_1_asserts.c
   manipulator_5aaa3abb_1_deriv.c
   manipulator_5aaa3abb_1_checkDynamics.c
   manipulator_5aaa3abb_1_output.c
   manipulator_5aaa3abb_1_asm_delegate.c
   manipulator_5aaa3abb_1_sim_delegate.c
   manipulator_5aaa3abb_1_mode_zero_crossings.c
   manipulator_5aaa3abb_1_geometries.c
   manipulator_5aaa3abb_1_gateway.c
   pm_printf.c
   ert_main.cpp
   rt_backsubrr_dbl.c
   rt_forwardsubrr_dbl.c
   rt_lu_real.c
   rt_matrixlib_dbl.c
   manipulator.cpp
   manipulator_data.cpp
   linuxinitialize.cpp
   slros_busmsg_conversion.cpp
   slros_initialize.cpp
   slros_generic_param.cpp
   ${${PROJECT_NAME}_C_SOURCES}
   ${${PROJECT_NAME}_CPP_SOURCES}
)

## Add cmake target dependencies of the executable/library
## as an example, message headers may need to be generated before nodes
add_dependencies(${PROJECT_NAME}_node ${catkin_EXPORTED_TARGETS})

## Specify libraries to link a library or executable target against
target_link_libraries(${PROJECT_NAME}_node
   ${catkin_LIBRARIES}
   ${Boost_LIBRARIES}
   rt
)

set_target_properties(${PROJECT_NAME}_node PROPERTIES COMPILE_FLAGS " ")
SET( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fpermissive" )
SET( CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -include stdbool.h" )
