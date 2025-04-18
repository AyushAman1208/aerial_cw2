# Install script for directory: /home/ayush/challenge_multi_drone/src/aerostack2/as2_behaviors/as2_behaviors_trajectory_generation/generate_polynomial_trajectory_behavior

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/ayush/challenge_multi_drone/install/as2_behaviors_trajectory_generation")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtrajectory_generator_component.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtrajectory_generator_component.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtrajectory_generator_component.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ayush/challenge_multi_drone/build/as2_behaviors_trajectory_generation/generate_polynomial_trajectory_behavior/libtrajectory_generator_component.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtrajectory_generator_component.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtrajectory_generator_component.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtrajectory_generator_component.so"
         OLD_RPATH "/home/ayush/challenge_multi_drone/build/as2_behaviors_trajectory_generation/_deps/dynamic_trajectory_generator-build:/home/ayush/challenge_multi_drone/install/as2_behavior/lib:/home/ayush/challenge_multi_drone/install/as2_core/lib:/opt/ros/humble/lib/x86_64-linux-gnu:/home/ayush/challenge_multi_drone/install/as2_msgs/lib:/opt/ros/humble/lib:/home/ayush/challenge_multi_drone/build/as2_behaviors_trajectory_generation/_deps/dynamic_trajectory_generator-build/subpackages/mav_trajectory_generation:/home/ayush/challenge_multi_drone/build/as2_behaviors_trajectory_generation/_deps/nlopt-build:/home/ayush/project_gazebo_ws/install/as2_behaviors_trajectory_generation/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtrajectory_generator_component.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdynamic_trajectory_generator.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdynamic_trajectory_generator.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdynamic_trajectory_generator.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ayush/challenge_multi_drone/build/as2_behaviors_trajectory_generation/_deps/dynamic_trajectory_generator-build/libdynamic_trajectory_generator.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdynamic_trajectory_generator.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdynamic_trajectory_generator.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdynamic_trajectory_generator.so"
         OLD_RPATH "/home/ayush/challenge_multi_drone/build/as2_behaviors_trajectory_generation/_deps/dynamic_trajectory_generator-build/subpackages/mav_trajectory_generation:/home/ayush/challenge_multi_drone/build/as2_behaviors_trajectory_generation/_deps/nlopt-build:/home/ayush/project_gazebo_ws/install/as2_behaviors_trajectory_generation/lib:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdynamic_trajectory_generator.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmav_trajectory_generation.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmav_trajectory_generation.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmav_trajectory_generation.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ayush/challenge_multi_drone/build/as2_behaviors_trajectory_generation/_deps/dynamic_trajectory_generator-build/subpackages/mav_trajectory_generation/libmav_trajectory_generation.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmav_trajectory_generation.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmav_trajectory_generation.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmav_trajectory_generation.so"
         OLD_RPATH "/home/ayush/challenge_multi_drone/build/as2_behaviors_trajectory_generation/_deps/nlopt-build:/home/ayush/project_gazebo_ws/install/as2_behaviors_trajectory_generation/lib:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmav_trajectory_generation.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/as2_behaviors_trajectory_generation" TYPE DIRECTORY FILES "/home/ayush/challenge_multi_drone/src/aerostack2/as2_behaviors/as2_behaviors_trajectory_generation/generate_polynomial_trajectory_behavior/launch")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/as2_behaviors_trajectory_generation/generate_polynomial_trajectory_behavior" TYPE DIRECTORY FILES "/home/ayush/challenge_multi_drone/src/aerostack2/as2_behaviors/as2_behaviors_trajectory_generation/generate_polynomial_trajectory_behavior/config")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/as2_behaviors_trajectory_generation/generate_polynomial_trajectory_behavior_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/as2_behaviors_trajectory_generation/generate_polynomial_trajectory_behavior_node")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/as2_behaviors_trajectory_generation/generate_polynomial_trajectory_behavior_node"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/as2_behaviors_trajectory_generation" TYPE EXECUTABLE FILES "/home/ayush/challenge_multi_drone/build/as2_behaviors_trajectory_generation/generate_polynomial_trajectory_behavior/generate_polynomial_trajectory_behavior_node")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/as2_behaviors_trajectory_generation/generate_polynomial_trajectory_behavior_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/as2_behaviors_trajectory_generation/generate_polynomial_trajectory_behavior_node")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/as2_behaviors_trajectory_generation/generate_polynomial_trajectory_behavior_node"
         OLD_RPATH "/home/ayush/challenge_multi_drone/build/as2_behaviors_trajectory_generation/_deps/dynamic_trajectory_generator-build:/home/ayush/challenge_multi_drone/install/as2_behavior/lib:/home/ayush/challenge_multi_drone/install/as2_core/lib:/opt/ros/humble/lib/x86_64-linux-gnu:/home/ayush/challenge_multi_drone/install/as2_msgs/lib:/opt/ros/humble/lib:/home/ayush/challenge_multi_drone/build/as2_behaviors_trajectory_generation/_deps/dynamic_trajectory_generator-build/subpackages/mav_trajectory_generation:/home/ayush/challenge_multi_drone/build/as2_behaviors_trajectory_generation/_deps/nlopt-build:/home/ayush/project_gazebo_ws/install/as2_behaviors_trajectory_generation/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/as2_behaviors_trajectory_generation/generate_polynomial_trajectory_behavior_node")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/ayush/challenge_multi_drone/build/as2_behaviors_trajectory_generation/_deps/dynamic_trajectory_generator-build/cmake_install.cmake")
  include("/home/ayush/challenge_multi_drone/build/as2_behaviors_trajectory_generation/generate_polynomial_trajectory_behavior/tests/cmake_install.cmake")

endif()

