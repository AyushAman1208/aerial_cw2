# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ayush/challenge_multi_drone/src/aerostack2/as2_aerial_platforms/as2_platform_multirotor_simulator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ayush/challenge_multi_drone/build/as2_platform_multirotor_simulator

# Include any dependencies generated for this target.
include CMakeFiles/as2_platform_multirotor_simulator.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/as2_platform_multirotor_simulator.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/as2_platform_multirotor_simulator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/as2_platform_multirotor_simulator.dir/flags.make

CMakeFiles/as2_platform_multirotor_simulator.dir/src/as2_platform_multirotor_simulator.cpp.o: CMakeFiles/as2_platform_multirotor_simulator.dir/flags.make
CMakeFiles/as2_platform_multirotor_simulator.dir/src/as2_platform_multirotor_simulator.cpp.o: /home/ayush/challenge_multi_drone/src/aerostack2/as2_aerial_platforms/as2_platform_multirotor_simulator/src/as2_platform_multirotor_simulator.cpp
CMakeFiles/as2_platform_multirotor_simulator.dir/src/as2_platform_multirotor_simulator.cpp.o: CMakeFiles/as2_platform_multirotor_simulator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ayush/challenge_multi_drone/build/as2_platform_multirotor_simulator/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/as2_platform_multirotor_simulator.dir/src/as2_platform_multirotor_simulator.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/as2_platform_multirotor_simulator.dir/src/as2_platform_multirotor_simulator.cpp.o -MF CMakeFiles/as2_platform_multirotor_simulator.dir/src/as2_platform_multirotor_simulator.cpp.o.d -o CMakeFiles/as2_platform_multirotor_simulator.dir/src/as2_platform_multirotor_simulator.cpp.o -c /home/ayush/challenge_multi_drone/src/aerostack2/as2_aerial_platforms/as2_platform_multirotor_simulator/src/as2_platform_multirotor_simulator.cpp

CMakeFiles/as2_platform_multirotor_simulator.dir/src/as2_platform_multirotor_simulator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/as2_platform_multirotor_simulator.dir/src/as2_platform_multirotor_simulator.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ayush/challenge_multi_drone/src/aerostack2/as2_aerial_platforms/as2_platform_multirotor_simulator/src/as2_platform_multirotor_simulator.cpp > CMakeFiles/as2_platform_multirotor_simulator.dir/src/as2_platform_multirotor_simulator.cpp.i

CMakeFiles/as2_platform_multirotor_simulator.dir/src/as2_platform_multirotor_simulator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/as2_platform_multirotor_simulator.dir/src/as2_platform_multirotor_simulator.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ayush/challenge_multi_drone/src/aerostack2/as2_aerial_platforms/as2_platform_multirotor_simulator/src/as2_platform_multirotor_simulator.cpp -o CMakeFiles/as2_platform_multirotor_simulator.dir/src/as2_platform_multirotor_simulator.cpp.s

# Object files for target as2_platform_multirotor_simulator
as2_platform_multirotor_simulator_OBJECTS = \
"CMakeFiles/as2_platform_multirotor_simulator.dir/src/as2_platform_multirotor_simulator.cpp.o"

# External object files for target as2_platform_multirotor_simulator
as2_platform_multirotor_simulator_EXTERNAL_OBJECTS =

libas2_platform_multirotor_simulator.a: CMakeFiles/as2_platform_multirotor_simulator.dir/src/as2_platform_multirotor_simulator.cpp.o
libas2_platform_multirotor_simulator.a: CMakeFiles/as2_platform_multirotor_simulator.dir/build.make
libas2_platform_multirotor_simulator.a: CMakeFiles/as2_platform_multirotor_simulator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ayush/challenge_multi_drone/build/as2_platform_multirotor_simulator/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libas2_platform_multirotor_simulator.a"
	$(CMAKE_COMMAND) -P CMakeFiles/as2_platform_multirotor_simulator.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/as2_platform_multirotor_simulator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/as2_platform_multirotor_simulator.dir/build: libas2_platform_multirotor_simulator.a
.PHONY : CMakeFiles/as2_platform_multirotor_simulator.dir/build

CMakeFiles/as2_platform_multirotor_simulator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/as2_platform_multirotor_simulator.dir/cmake_clean.cmake
.PHONY : CMakeFiles/as2_platform_multirotor_simulator.dir/clean

CMakeFiles/as2_platform_multirotor_simulator.dir/depend:
	cd /home/ayush/challenge_multi_drone/build/as2_platform_multirotor_simulator && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ayush/challenge_multi_drone/src/aerostack2/as2_aerial_platforms/as2_platform_multirotor_simulator /home/ayush/challenge_multi_drone/src/aerostack2/as2_aerial_platforms/as2_platform_multirotor_simulator /home/ayush/challenge_multi_drone/build/as2_platform_multirotor_simulator /home/ayush/challenge_multi_drone/build/as2_platform_multirotor_simulator /home/ayush/challenge_multi_drone/build/as2_platform_multirotor_simulator/CMakeFiles/as2_platform_multirotor_simulator.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/as2_platform_multirotor_simulator.dir/depend

