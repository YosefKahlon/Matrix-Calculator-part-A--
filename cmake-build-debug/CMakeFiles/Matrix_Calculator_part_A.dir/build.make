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
CMAKE_SOURCE_DIR = /mnt/c/Users/97252/Documents/GitHub/Matrix-Calculator-part-A

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/97252/Documents/GitHub/Matrix-Calculator-part-A/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Matrix_Calculator_part_A.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Matrix_Calculator_part_A.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Matrix_Calculator_part_A.dir/flags.make

CMakeFiles/Matrix_Calculator_part_A.dir/main.cpp.o: CMakeFiles/Matrix_Calculator_part_A.dir/flags.make
CMakeFiles/Matrix_Calculator_part_A.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/97252/Documents/GitHub/Matrix-Calculator-part-A/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Matrix_Calculator_part_A.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Matrix_Calculator_part_A.dir/main.cpp.o -c /mnt/c/Users/97252/Documents/GitHub/Matrix-Calculator-part-A/main.cpp

CMakeFiles/Matrix_Calculator_part_A.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Matrix_Calculator_part_A.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/97252/Documents/GitHub/Matrix-Calculator-part-A/main.cpp > CMakeFiles/Matrix_Calculator_part_A.dir/main.cpp.i

CMakeFiles/Matrix_Calculator_part_A.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Matrix_Calculator_part_A.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/97252/Documents/GitHub/Matrix-Calculator-part-A/main.cpp -o CMakeFiles/Matrix_Calculator_part_A.dir/main.cpp.s

CMakeFiles/Matrix_Calculator_part_A.dir/yossi.cpp.o: CMakeFiles/Matrix_Calculator_part_A.dir/flags.make
CMakeFiles/Matrix_Calculator_part_A.dir/yossi.cpp.o: ../yossi.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/97252/Documents/GitHub/Matrix-Calculator-part-A/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Matrix_Calculator_part_A.dir/yossi.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Matrix_Calculator_part_A.dir/yossi.cpp.o -c /mnt/c/Users/97252/Documents/GitHub/Matrix-Calculator-part-A/yossi.cpp

CMakeFiles/Matrix_Calculator_part_A.dir/yossi.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Matrix_Calculator_part_A.dir/yossi.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/97252/Documents/GitHub/Matrix-Calculator-part-A/yossi.cpp > CMakeFiles/Matrix_Calculator_part_A.dir/yossi.cpp.i

CMakeFiles/Matrix_Calculator_part_A.dir/yossi.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Matrix_Calculator_part_A.dir/yossi.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/97252/Documents/GitHub/Matrix-Calculator-part-A/yossi.cpp -o CMakeFiles/Matrix_Calculator_part_A.dir/yossi.cpp.s

# Object files for target Matrix_Calculator_part_A
Matrix_Calculator_part_A_OBJECTS = \
"CMakeFiles/Matrix_Calculator_part_A.dir/main.cpp.o" \
"CMakeFiles/Matrix_Calculator_part_A.dir/yossi.cpp.o"

# External object files for target Matrix_Calculator_part_A
Matrix_Calculator_part_A_EXTERNAL_OBJECTS =

Matrix_Calculator_part_A: CMakeFiles/Matrix_Calculator_part_A.dir/main.cpp.o
Matrix_Calculator_part_A: CMakeFiles/Matrix_Calculator_part_A.dir/yossi.cpp.o
Matrix_Calculator_part_A: CMakeFiles/Matrix_Calculator_part_A.dir/build.make
Matrix_Calculator_part_A: CMakeFiles/Matrix_Calculator_part_A.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/97252/Documents/GitHub/Matrix-Calculator-part-A/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Matrix_Calculator_part_A"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Matrix_Calculator_part_A.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Matrix_Calculator_part_A.dir/build: Matrix_Calculator_part_A

.PHONY : CMakeFiles/Matrix_Calculator_part_A.dir/build

CMakeFiles/Matrix_Calculator_part_A.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Matrix_Calculator_part_A.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Matrix_Calculator_part_A.dir/clean

CMakeFiles/Matrix_Calculator_part_A.dir/depend:
	cd /mnt/c/Users/97252/Documents/GitHub/Matrix-Calculator-part-A/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/97252/Documents/GitHub/Matrix-Calculator-part-A /mnt/c/Users/97252/Documents/GitHub/Matrix-Calculator-part-A /mnt/c/Users/97252/Documents/GitHub/Matrix-Calculator-part-A/cmake-build-debug /mnt/c/Users/97252/Documents/GitHub/Matrix-Calculator-part-A/cmake-build-debug /mnt/c/Users/97252/Documents/GitHub/Matrix-Calculator-part-A/cmake-build-debug/CMakeFiles/Matrix_Calculator_part_A.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Matrix_Calculator_part_A.dir/depend

