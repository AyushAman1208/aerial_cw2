# CMake generated Testfile for 
# Source directory: /home/ayush/challenge_multi_drone/src/aerostack2/as2_map_server/tests
# Build directory: /home/ayush/challenge_multi_drone/build/as2_map_server/tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(as2_map_server_map_server_gtest "/usr/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/ayush/challenge_multi_drone/build/as2_map_server/test_results/as2_map_server/as2_map_server_map_server_gtest.gtest.xml" "--package-name" "as2_map_server" "--output-file" "/home/ayush/challenge_multi_drone/build/as2_map_server/ament_cmake_gtest/as2_map_server_map_server_gtest.txt" "--command" "/home/ayush/challenge_multi_drone/build/as2_map_server/tests/as2_map_server_map_server_gtest" "--gtest_output=xml:/home/ayush/challenge_multi_drone/build/as2_map_server/test_results/as2_map_server/as2_map_server_map_server_gtest.gtest.xml")
set_tests_properties(as2_map_server_map_server_gtest PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/ayush/challenge_multi_drone/build/as2_map_server/tests/as2_map_server_map_server_gtest" TIMEOUT "60" WORKING_DIRECTORY "/home/ayush/challenge_multi_drone/build/as2_map_server/tests" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/ayush/challenge_multi_drone/src/aerostack2/as2_map_server/tests/CMakeLists.txt;10;ament_add_gtest;/home/ayush/challenge_multi_drone/src/aerostack2/as2_map_server/tests/CMakeLists.txt;0;")
subdirs("../gtest")
