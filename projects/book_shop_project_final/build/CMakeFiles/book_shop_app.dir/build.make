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
include CMakeFiles/book_shop_app.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/book_shop_app.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/book_shop_app.dir/flags.make

CMakeFiles/book_shop_app.dir/main.cpp.o: CMakeFiles/book_shop_app.dir/flags.make
CMakeFiles/book_shop_app.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/book_shop_app.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/book_shop_app.dir/main.cpp.o -c /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/main.cpp

CMakeFiles/book_shop_app.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/book_shop_app.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/main.cpp > CMakeFiles/book_shop_app.dir/main.cpp.i

CMakeFiles/book_shop_app.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/book_shop_app.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/main.cpp -o CMakeFiles/book_shop_app.dir/main.cpp.s

CMakeFiles/book_shop_app.dir/src/Book.cpp.o: CMakeFiles/book_shop_app.dir/flags.make
CMakeFiles/book_shop_app.dir/src/Book.cpp.o: ../src/Book.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/book_shop_app.dir/src/Book.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/book_shop_app.dir/src/Book.cpp.o -c /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/src/Book.cpp

CMakeFiles/book_shop_app.dir/src/Book.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/book_shop_app.dir/src/Book.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/src/Book.cpp > CMakeFiles/book_shop_app.dir/src/Book.cpp.i

CMakeFiles/book_shop_app.dir/src/Book.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/book_shop_app.dir/src/Book.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/src/Book.cpp -o CMakeFiles/book_shop_app.dir/src/Book.cpp.s

CMakeFiles/book_shop_app.dir/src/addBookToArray.cpp.o: CMakeFiles/book_shop_app.dir/flags.make
CMakeFiles/book_shop_app.dir/src/addBookToArray.cpp.o: ../src/addBookToArray.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/book_shop_app.dir/src/addBookToArray.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/book_shop_app.dir/src/addBookToArray.cpp.o -c /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/src/addBookToArray.cpp

CMakeFiles/book_shop_app.dir/src/addBookToArray.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/book_shop_app.dir/src/addBookToArray.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/src/addBookToArray.cpp > CMakeFiles/book_shop_app.dir/src/addBookToArray.cpp.i

CMakeFiles/book_shop_app.dir/src/addBookToArray.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/book_shop_app.dir/src/addBookToArray.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/src/addBookToArray.cpp -o CMakeFiles/book_shop_app.dir/src/addBookToArray.cpp.s

CMakeFiles/book_shop_app.dir/src/buyBook.cpp.o: CMakeFiles/book_shop_app.dir/flags.make
CMakeFiles/book_shop_app.dir/src/buyBook.cpp.o: ../src/buyBook.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/book_shop_app.dir/src/buyBook.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/book_shop_app.dir/src/buyBook.cpp.o -c /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/src/buyBook.cpp

CMakeFiles/book_shop_app.dir/src/buyBook.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/book_shop_app.dir/src/buyBook.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/src/buyBook.cpp > CMakeFiles/book_shop_app.dir/src/buyBook.cpp.i

CMakeFiles/book_shop_app.dir/src/buyBook.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/book_shop_app.dir/src/buyBook.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/src/buyBook.cpp -o CMakeFiles/book_shop_app.dir/src/buyBook.cpp.s

CMakeFiles/book_shop_app.dir/src/changeBookDetails.cpp.o: CMakeFiles/book_shop_app.dir/flags.make
CMakeFiles/book_shop_app.dir/src/changeBookDetails.cpp.o: ../src/changeBookDetails.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/book_shop_app.dir/src/changeBookDetails.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/book_shop_app.dir/src/changeBookDetails.cpp.o -c /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/src/changeBookDetails.cpp

CMakeFiles/book_shop_app.dir/src/changeBookDetails.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/book_shop_app.dir/src/changeBookDetails.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/src/changeBookDetails.cpp > CMakeFiles/book_shop_app.dir/src/changeBookDetails.cpp.i

CMakeFiles/book_shop_app.dir/src/changeBookDetails.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/book_shop_app.dir/src/changeBookDetails.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/src/changeBookDetails.cpp -o CMakeFiles/book_shop_app.dir/src/changeBookDetails.cpp.s

CMakeFiles/book_shop_app.dir/src/checkInput.cpp.o: CMakeFiles/book_shop_app.dir/flags.make
CMakeFiles/book_shop_app.dir/src/checkInput.cpp.o: ../src/checkInput.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/book_shop_app.dir/src/checkInput.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/book_shop_app.dir/src/checkInput.cpp.o -c /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/src/checkInput.cpp

CMakeFiles/book_shop_app.dir/src/checkInput.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/book_shop_app.dir/src/checkInput.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/src/checkInput.cpp > CMakeFiles/book_shop_app.dir/src/checkInput.cpp.i

CMakeFiles/book_shop_app.dir/src/checkInput.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/book_shop_app.dir/src/checkInput.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/src/checkInput.cpp -o CMakeFiles/book_shop_app.dir/src/checkInput.cpp.s

CMakeFiles/book_shop_app.dir/src/existsInVector.cpp.o: CMakeFiles/book_shop_app.dir/flags.make
CMakeFiles/book_shop_app.dir/src/existsInVector.cpp.o: ../src/existsInVector.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/book_shop_app.dir/src/existsInVector.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/book_shop_app.dir/src/existsInVector.cpp.o -c /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/src/existsInVector.cpp

CMakeFiles/book_shop_app.dir/src/existsInVector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/book_shop_app.dir/src/existsInVector.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/src/existsInVector.cpp > CMakeFiles/book_shop_app.dir/src/existsInVector.cpp.i

CMakeFiles/book_shop_app.dir/src/existsInVector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/book_shop_app.dir/src/existsInVector.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/src/existsInVector.cpp -o CMakeFiles/book_shop_app.dir/src/existsInVector.cpp.s

CMakeFiles/book_shop_app.dir/src/exportBookList.cpp.o: CMakeFiles/book_shop_app.dir/flags.make
CMakeFiles/book_shop_app.dir/src/exportBookList.cpp.o: ../src/exportBookList.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/book_shop_app.dir/src/exportBookList.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/book_shop_app.dir/src/exportBookList.cpp.o -c /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/src/exportBookList.cpp

CMakeFiles/book_shop_app.dir/src/exportBookList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/book_shop_app.dir/src/exportBookList.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/src/exportBookList.cpp > CMakeFiles/book_shop_app.dir/src/exportBookList.cpp.i

CMakeFiles/book_shop_app.dir/src/exportBookList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/book_shop_app.dir/src/exportBookList.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/src/exportBookList.cpp -o CMakeFiles/book_shop_app.dir/src/exportBookList.cpp.s

CMakeFiles/book_shop_app.dir/src/importBookList.cpp.o: CMakeFiles/book_shop_app.dir/flags.make
CMakeFiles/book_shop_app.dir/src/importBookList.cpp.o: ../src/importBookList.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/book_shop_app.dir/src/importBookList.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/book_shop_app.dir/src/importBookList.cpp.o -c /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/src/importBookList.cpp

CMakeFiles/book_shop_app.dir/src/importBookList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/book_shop_app.dir/src/importBookList.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/src/importBookList.cpp > CMakeFiles/book_shop_app.dir/src/importBookList.cpp.i

CMakeFiles/book_shop_app.dir/src/importBookList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/book_shop_app.dir/src/importBookList.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/src/importBookList.cpp -o CMakeFiles/book_shop_app.dir/src/importBookList.cpp.s

CMakeFiles/book_shop_app.dir/src/printAllBooks.cpp.o: CMakeFiles/book_shop_app.dir/flags.make
CMakeFiles/book_shop_app.dir/src/printAllBooks.cpp.o: ../src/printAllBooks.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/book_shop_app.dir/src/printAllBooks.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/book_shop_app.dir/src/printAllBooks.cpp.o -c /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/src/printAllBooks.cpp

CMakeFiles/book_shop_app.dir/src/printAllBooks.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/book_shop_app.dir/src/printAllBooks.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/src/printAllBooks.cpp > CMakeFiles/book_shop_app.dir/src/printAllBooks.cpp.i

CMakeFiles/book_shop_app.dir/src/printAllBooks.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/book_shop_app.dir/src/printAllBooks.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/src/printAllBooks.cpp -o CMakeFiles/book_shop_app.dir/src/printAllBooks.cpp.s

CMakeFiles/book_shop_app.dir/src/printEditDetailsMenu.cpp.o: CMakeFiles/book_shop_app.dir/flags.make
CMakeFiles/book_shop_app.dir/src/printEditDetailsMenu.cpp.o: ../src/printEditDetailsMenu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/book_shop_app.dir/src/printEditDetailsMenu.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/book_shop_app.dir/src/printEditDetailsMenu.cpp.o -c /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/src/printEditDetailsMenu.cpp

CMakeFiles/book_shop_app.dir/src/printEditDetailsMenu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/book_shop_app.dir/src/printEditDetailsMenu.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/src/printEditDetailsMenu.cpp > CMakeFiles/book_shop_app.dir/src/printEditDetailsMenu.cpp.i

CMakeFiles/book_shop_app.dir/src/printEditDetailsMenu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/book_shop_app.dir/src/printEditDetailsMenu.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/src/printEditDetailsMenu.cpp -o CMakeFiles/book_shop_app.dir/src/printEditDetailsMenu.cpp.s

CMakeFiles/book_shop_app.dir/src/printMenu.cpp.o: CMakeFiles/book_shop_app.dir/flags.make
CMakeFiles/book_shop_app.dir/src/printMenu.cpp.o: ../src/printMenu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/book_shop_app.dir/src/printMenu.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/book_shop_app.dir/src/printMenu.cpp.o -c /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/src/printMenu.cpp

CMakeFiles/book_shop_app.dir/src/printMenu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/book_shop_app.dir/src/printMenu.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/src/printMenu.cpp > CMakeFiles/book_shop_app.dir/src/printMenu.cpp.i

CMakeFiles/book_shop_app.dir/src/printMenu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/book_shop_app.dir/src/printMenu.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/src/printMenu.cpp -o CMakeFiles/book_shop_app.dir/src/printMenu.cpp.s

CMakeFiles/book_shop_app.dir/src/run.cpp.o: CMakeFiles/book_shop_app.dir/flags.make
CMakeFiles/book_shop_app.dir/src/run.cpp.o: ../src/run.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/book_shop_app.dir/src/run.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/book_shop_app.dir/src/run.cpp.o -c /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/src/run.cpp

CMakeFiles/book_shop_app.dir/src/run.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/book_shop_app.dir/src/run.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/src/run.cpp > CMakeFiles/book_shop_app.dir/src/run.cpp.i

CMakeFiles/book_shop_app.dir/src/run.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/book_shop_app.dir/src/run.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/src/run.cpp -o CMakeFiles/book_shop_app.dir/src/run.cpp.s

CMakeFiles/book_shop_app.dir/src/searchForBook.cpp.o: CMakeFiles/book_shop_app.dir/flags.make
CMakeFiles/book_shop_app.dir/src/searchForBook.cpp.o: ../src/searchForBook.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/book_shop_app.dir/src/searchForBook.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/book_shop_app.dir/src/searchForBook.cpp.o -c /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/src/searchForBook.cpp

CMakeFiles/book_shop_app.dir/src/searchForBook.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/book_shop_app.dir/src/searchForBook.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/src/searchForBook.cpp > CMakeFiles/book_shop_app.dir/src/searchForBook.cpp.i

CMakeFiles/book_shop_app.dir/src/searchForBook.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/book_shop_app.dir/src/searchForBook.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/src/searchForBook.cpp -o CMakeFiles/book_shop_app.dir/src/searchForBook.cpp.s

# Object files for target book_shop_app
book_shop_app_OBJECTS = \
"CMakeFiles/book_shop_app.dir/main.cpp.o" \
"CMakeFiles/book_shop_app.dir/src/Book.cpp.o" \
"CMakeFiles/book_shop_app.dir/src/addBookToArray.cpp.o" \
"CMakeFiles/book_shop_app.dir/src/buyBook.cpp.o" \
"CMakeFiles/book_shop_app.dir/src/changeBookDetails.cpp.o" \
"CMakeFiles/book_shop_app.dir/src/checkInput.cpp.o" \
"CMakeFiles/book_shop_app.dir/src/existsInVector.cpp.o" \
"CMakeFiles/book_shop_app.dir/src/exportBookList.cpp.o" \
"CMakeFiles/book_shop_app.dir/src/importBookList.cpp.o" \
"CMakeFiles/book_shop_app.dir/src/printAllBooks.cpp.o" \
"CMakeFiles/book_shop_app.dir/src/printEditDetailsMenu.cpp.o" \
"CMakeFiles/book_shop_app.dir/src/printMenu.cpp.o" \
"CMakeFiles/book_shop_app.dir/src/run.cpp.o" \
"CMakeFiles/book_shop_app.dir/src/searchForBook.cpp.o"

# External object files for target book_shop_app
book_shop_app_EXTERNAL_OBJECTS =

book_shop_app: CMakeFiles/book_shop_app.dir/main.cpp.o
book_shop_app: CMakeFiles/book_shop_app.dir/src/Book.cpp.o
book_shop_app: CMakeFiles/book_shop_app.dir/src/addBookToArray.cpp.o
book_shop_app: CMakeFiles/book_shop_app.dir/src/buyBook.cpp.o
book_shop_app: CMakeFiles/book_shop_app.dir/src/changeBookDetails.cpp.o
book_shop_app: CMakeFiles/book_shop_app.dir/src/checkInput.cpp.o
book_shop_app: CMakeFiles/book_shop_app.dir/src/existsInVector.cpp.o
book_shop_app: CMakeFiles/book_shop_app.dir/src/exportBookList.cpp.o
book_shop_app: CMakeFiles/book_shop_app.dir/src/importBookList.cpp.o
book_shop_app: CMakeFiles/book_shop_app.dir/src/printAllBooks.cpp.o
book_shop_app: CMakeFiles/book_shop_app.dir/src/printEditDetailsMenu.cpp.o
book_shop_app: CMakeFiles/book_shop_app.dir/src/printMenu.cpp.o
book_shop_app: CMakeFiles/book_shop_app.dir/src/run.cpp.o
book_shop_app: CMakeFiles/book_shop_app.dir/src/searchForBook.cpp.o
book_shop_app: CMakeFiles/book_shop_app.dir/build.make
book_shop_app: CMakeFiles/book_shop_app.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Linking CXX executable book_shop_app"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/book_shop_app.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/book_shop_app.dir/build: book_shop_app

.PHONY : CMakeFiles/book_shop_app.dir/build

CMakeFiles/book_shop_app.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/book_shop_app.dir/cmake_clean.cmake
.PHONY : CMakeFiles/book_shop_app.dir/clean

CMakeFiles/book_shop_app.dir/depend:
	cd /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/build /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/build /home/myung/repos/volvo-boot-camp-2022/projects/book_shop_project_final/build/CMakeFiles/book_shop_app.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/book_shop_app.dir/depend
