# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/myung/repos/volvo-boot-camp-2022/projects/can_network/apps/input_handler

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/myung/repos/volvo-boot-camp-2022/projects/can_network/apps/input_handler/build

# Include any dependencies generated for this target.
include CMakeFiles/_sock_can.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/_sock_can.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/_sock_can.dir/flags.make

CMakeFiles/_sock_can.dir/home/myung/repos/volvo-boot-camp-2022/projects/can_network/libs/socket_can/src/socket_can.cpp.o: CMakeFiles/_sock_can.dir/flags.make
CMakeFiles/_sock_can.dir/home/myung/repos/volvo-boot-camp-2022/projects/can_network/libs/socket_can/src/socket_can.cpp.o: /home/myung/repos/volvo-boot-camp-2022/projects/can_network/libs/socket_can/src/socket_can.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/myung/repos/volvo-boot-camp-2022/projects/can_network/apps/input_handler/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/_sock_can.dir/home/myung/repos/volvo-boot-camp-2022/projects/can_network/libs/socket_can/src/socket_can.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/_sock_can.dir/home/myung/repos/volvo-boot-camp-2022/projects/can_network/libs/socket_can/src/socket_can.cpp.o -c /home/myung/repos/volvo-boot-camp-2022/projects/can_network/libs/socket_can/src/socket_can.cpp

CMakeFiles/_sock_can.dir/home/myung/repos/volvo-boot-camp-2022/projects/can_network/libs/socket_can/src/socket_can.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/_sock_can.dir/home/myung/repos/volvo-boot-camp-2022/projects/can_network/libs/socket_can/src/socket_can.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/myung/repos/volvo-boot-camp-2022/projects/can_network/libs/socket_can/src/socket_can.cpp > CMakeFiles/_sock_can.dir/home/myung/repos/volvo-boot-camp-2022/projects/can_network/libs/socket_can/src/socket_can.cpp.i

CMakeFiles/_sock_can.dir/home/myung/repos/volvo-boot-camp-2022/projects/can_network/libs/socket_can/src/socket_can.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/_sock_can.dir/home/myung/repos/volvo-boot-camp-2022/projects/can_network/libs/socket_can/src/socket_can.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/myung/repos/volvo-boot-camp-2022/projects/can_network/libs/socket_can/src/socket_can.cpp -o CMakeFiles/_sock_can.dir/home/myung/repos/volvo-boot-camp-2022/projects/can_network/libs/socket_can/src/socket_can.cpp.s

# Object files for target _sock_can
_sock_can_OBJECTS = \
"CMakeFiles/_sock_can.dir/home/myung/repos/volvo-boot-camp-2022/projects/can_network/libs/socket_can/src/socket_can.cpp.o"

# External object files for target _sock_can
_sock_can_EXTERNAL_OBJECTS =

lib_sock_can.a: CMakeFiles/_sock_can.dir/home/myung/repos/volvo-boot-camp-2022/projects/can_network/libs/socket_can/src/socket_can.cpp.o
lib_sock_can.a: CMakeFiles/_sock_can.dir/build.make
lib_sock_can.a: CMakeFiles/_sock_can.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/myung/repos/volvo-boot-camp-2022/projects/can_network/apps/input_handler/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library lib_sock_can.a"
	$(CMAKE_COMMAND) -P CMakeFiles/_sock_can.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/_sock_can.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/_sock_can.dir/build: lib_sock_can.a

.PHONY : CMakeFiles/_sock_can.dir/build

CMakeFiles/_sock_can.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/_sock_can.dir/cmake_clean.cmake
.PHONY : CMakeFiles/_sock_can.dir/clean

CMakeFiles/_sock_can.dir/depend:
	cd /home/myung/repos/volvo-boot-camp-2022/projects/can_network/apps/input_handler/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/myung/repos/volvo-boot-camp-2022/projects/can_network/apps/input_handler /home/myung/repos/volvo-boot-camp-2022/projects/can_network/apps/input_handler /home/myung/repos/volvo-boot-camp-2022/projects/can_network/apps/input_handler/build /home/myung/repos/volvo-boot-camp-2022/projects/can_network/apps/input_handler/build /home/myung/repos/volvo-boot-camp-2022/projects/can_network/apps/input_handler/build/CMakeFiles/_sock_can.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/_sock_can.dir/depend

