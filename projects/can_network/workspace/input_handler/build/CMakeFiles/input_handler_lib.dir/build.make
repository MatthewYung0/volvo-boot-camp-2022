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
CMAKE_SOURCE_DIR = /home/myung/repos/volvo-boot-camp-2022/projects/can_network/workspace/input_handler

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/myung/repos/volvo-boot-camp-2022/projects/can_network/workspace/input_handler/build

# Include any dependencies generated for this target.
include CMakeFiles/input_handler_lib.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/input_handler_lib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/input_handler_lib.dir/flags.make

CMakeFiles/input_handler_lib.dir/src/can_message.cpp.o: CMakeFiles/input_handler_lib.dir/flags.make
CMakeFiles/input_handler_lib.dir/src/can_message.cpp.o: ../src/can_message.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/myung/repos/volvo-boot-camp-2022/projects/can_network/workspace/input_handler/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/input_handler_lib.dir/src/can_message.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/input_handler_lib.dir/src/can_message.cpp.o -c /home/myung/repos/volvo-boot-camp-2022/projects/can_network/workspace/input_handler/src/can_message.cpp

CMakeFiles/input_handler_lib.dir/src/can_message.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/input_handler_lib.dir/src/can_message.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/myung/repos/volvo-boot-camp-2022/projects/can_network/workspace/input_handler/src/can_message.cpp > CMakeFiles/input_handler_lib.dir/src/can_message.cpp.i

CMakeFiles/input_handler_lib.dir/src/can_message.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/input_handler_lib.dir/src/can_message.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/myung/repos/volvo-boot-camp-2022/projects/can_network/workspace/input_handler/src/can_message.cpp -o CMakeFiles/input_handler_lib.dir/src/can_message.cpp.s

CMakeFiles/input_handler_lib.dir/src/check_input.cpp.o: CMakeFiles/input_handler_lib.dir/flags.make
CMakeFiles/input_handler_lib.dir/src/check_input.cpp.o: ../src/check_input.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/myung/repos/volvo-boot-camp-2022/projects/can_network/workspace/input_handler/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/input_handler_lib.dir/src/check_input.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/input_handler_lib.dir/src/check_input.cpp.o -c /home/myung/repos/volvo-boot-camp-2022/projects/can_network/workspace/input_handler/src/check_input.cpp

CMakeFiles/input_handler_lib.dir/src/check_input.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/input_handler_lib.dir/src/check_input.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/myung/repos/volvo-boot-camp-2022/projects/can_network/workspace/input_handler/src/check_input.cpp > CMakeFiles/input_handler_lib.dir/src/check_input.cpp.i

CMakeFiles/input_handler_lib.dir/src/check_input.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/input_handler_lib.dir/src/check_input.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/myung/repos/volvo-boot-camp-2022/projects/can_network/workspace/input_handler/src/check_input.cpp -o CMakeFiles/input_handler_lib.dir/src/check_input.cpp.s

CMakeFiles/input_handler_lib.dir/src/socket_can_setup.cpp.o: CMakeFiles/input_handler_lib.dir/flags.make
CMakeFiles/input_handler_lib.dir/src/socket_can_setup.cpp.o: ../src/socket_can_setup.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/myung/repos/volvo-boot-camp-2022/projects/can_network/workspace/input_handler/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/input_handler_lib.dir/src/socket_can_setup.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/input_handler_lib.dir/src/socket_can_setup.cpp.o -c /home/myung/repos/volvo-boot-camp-2022/projects/can_network/workspace/input_handler/src/socket_can_setup.cpp

CMakeFiles/input_handler_lib.dir/src/socket_can_setup.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/input_handler_lib.dir/src/socket_can_setup.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/myung/repos/volvo-boot-camp-2022/projects/can_network/workspace/input_handler/src/socket_can_setup.cpp > CMakeFiles/input_handler_lib.dir/src/socket_can_setup.cpp.i

CMakeFiles/input_handler_lib.dir/src/socket_can_setup.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/input_handler_lib.dir/src/socket_can_setup.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/myung/repos/volvo-boot-camp-2022/projects/can_network/workspace/input_handler/src/socket_can_setup.cpp -o CMakeFiles/input_handler_lib.dir/src/socket_can_setup.cpp.s

CMakeFiles/input_handler_lib.dir/src/socket_can.cpp.o: CMakeFiles/input_handler_lib.dir/flags.make
CMakeFiles/input_handler_lib.dir/src/socket_can.cpp.o: ../src/socket_can.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/myung/repos/volvo-boot-camp-2022/projects/can_network/workspace/input_handler/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/input_handler_lib.dir/src/socket_can.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/input_handler_lib.dir/src/socket_can.cpp.o -c /home/myung/repos/volvo-boot-camp-2022/projects/can_network/workspace/input_handler/src/socket_can.cpp

CMakeFiles/input_handler_lib.dir/src/socket_can.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/input_handler_lib.dir/src/socket_can.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/myung/repos/volvo-boot-camp-2022/projects/can_network/workspace/input_handler/src/socket_can.cpp > CMakeFiles/input_handler_lib.dir/src/socket_can.cpp.i

CMakeFiles/input_handler_lib.dir/src/socket_can.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/input_handler_lib.dir/src/socket_can.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/myung/repos/volvo-boot-camp-2022/projects/can_network/workspace/input_handler/src/socket_can.cpp -o CMakeFiles/input_handler_lib.dir/src/socket_can.cpp.s

# Object files for target input_handler_lib
input_handler_lib_OBJECTS = \
"CMakeFiles/input_handler_lib.dir/src/can_message.cpp.o" \
"CMakeFiles/input_handler_lib.dir/src/check_input.cpp.o" \
"CMakeFiles/input_handler_lib.dir/src/socket_can_setup.cpp.o" \
"CMakeFiles/input_handler_lib.dir/src/socket_can.cpp.o"

# External object files for target input_handler_lib
input_handler_lib_EXTERNAL_OBJECTS =

libinput_handler_lib.so: CMakeFiles/input_handler_lib.dir/src/can_message.cpp.o
libinput_handler_lib.so: CMakeFiles/input_handler_lib.dir/src/check_input.cpp.o
libinput_handler_lib.so: CMakeFiles/input_handler_lib.dir/src/socket_can_setup.cpp.o
libinput_handler_lib.so: CMakeFiles/input_handler_lib.dir/src/socket_can.cpp.o
libinput_handler_lib.so: CMakeFiles/input_handler_lib.dir/build.make
libinput_handler_lib.so: CMakeFiles/input_handler_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/myung/repos/volvo-boot-camp-2022/projects/can_network/workspace/input_handler/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX shared library libinput_handler_lib.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/input_handler_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/input_handler_lib.dir/build: libinput_handler_lib.so

.PHONY : CMakeFiles/input_handler_lib.dir/build

CMakeFiles/input_handler_lib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/input_handler_lib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/input_handler_lib.dir/clean

CMakeFiles/input_handler_lib.dir/depend:
	cd /home/myung/repos/volvo-boot-camp-2022/projects/can_network/workspace/input_handler/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/myung/repos/volvo-boot-camp-2022/projects/can_network/workspace/input_handler /home/myung/repos/volvo-boot-camp-2022/projects/can_network/workspace/input_handler /home/myung/repos/volvo-boot-camp-2022/projects/can_network/workspace/input_handler/build /home/myung/repos/volvo-boot-camp-2022/projects/can_network/workspace/input_handler/build /home/myung/repos/volvo-boot-camp-2022/projects/can_network/workspace/input_handler/build/CMakeFiles/input_handler_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/input_handler_lib.dir/depend

