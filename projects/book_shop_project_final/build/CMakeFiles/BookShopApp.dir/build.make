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
CMAKE_SOURCE_DIR = /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/build

# Include any dependencies generated for this target.
include CMakeFiles/BookShopApp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BookShopApp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BookShopApp.dir/flags.make

CMakeFiles/BookShopApp.dir/main.cpp.o: CMakeFiles/BookShopApp.dir/flags.make
CMakeFiles/BookShopApp.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BookShopApp.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BookShopApp.dir/main.cpp.o -c /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/main.cpp

CMakeFiles/BookShopApp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BookShopApp.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/main.cpp > CMakeFiles/BookShopApp.dir/main.cpp.i

CMakeFiles/BookShopApp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BookShopApp.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/main.cpp -o CMakeFiles/BookShopApp.dir/main.cpp.s

# Object files for target BookShopApp
BookShopApp_OBJECTS = \
"CMakeFiles/BookShopApp.dir/main.cpp.o"

# External object files for target BookShopApp
BookShopApp_EXTERNAL_OBJECTS =

BookShopApp: CMakeFiles/BookShopApp.dir/main.cpp.o
BookShopApp: CMakeFiles/BookShopApp.dir/build.make
BookShopApp: libbookshoplib.so
BookShopApp: CMakeFiles/BookShopApp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable BookShopApp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BookShopApp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BookShopApp.dir/build: BookShopApp

.PHONY : CMakeFiles/BookShopApp.dir/build

CMakeFiles/BookShopApp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/BookShopApp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/BookShopApp.dir/clean

CMakeFiles/BookShopApp.dir/depend:
	cd /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/build /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/build /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/build/CMakeFiles/BookShopApp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BookShopApp.dir/depend

