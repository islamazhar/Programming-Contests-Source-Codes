# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /snap/clion/81/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/81/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mazharul/Dropbox/Contest-Programming/Programming-Contests-Source-Codes/CodeForces

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mazharul/Dropbox/Contest-Programming/Programming-Contests-Source-Codes/CodeForces/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CodeFroces.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CodeFroces.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CodeFroces.dir/flags.make

CMakeFiles/CodeFroces.dir/Rounds/Codeforces-Round-576-Div-2/C.cpp.o: CMakeFiles/CodeFroces.dir/flags.make
CMakeFiles/CodeFroces.dir/Rounds/Codeforces-Round-576-Div-2/C.cpp.o: ../Rounds/Codeforces-Round-576-Div-2/C.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mazharul/Dropbox/Contest-Programming/Programming-Contests-Source-Codes/CodeForces/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CodeFroces.dir/Rounds/Codeforces-Round-576-Div-2/C.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CodeFroces.dir/Rounds/Codeforces-Round-576-Div-2/C.cpp.o -c /home/mazharul/Dropbox/Contest-Programming/Programming-Contests-Source-Codes/CodeForces/Rounds/Codeforces-Round-576-Div-2/C.cpp

CMakeFiles/CodeFroces.dir/Rounds/Codeforces-Round-576-Div-2/C.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CodeFroces.dir/Rounds/Codeforces-Round-576-Div-2/C.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mazharul/Dropbox/Contest-Programming/Programming-Contests-Source-Codes/CodeForces/Rounds/Codeforces-Round-576-Div-2/C.cpp > CMakeFiles/CodeFroces.dir/Rounds/Codeforces-Round-576-Div-2/C.cpp.i

CMakeFiles/CodeFroces.dir/Rounds/Codeforces-Round-576-Div-2/C.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CodeFroces.dir/Rounds/Codeforces-Round-576-Div-2/C.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mazharul/Dropbox/Contest-Programming/Programming-Contests-Source-Codes/CodeForces/Rounds/Codeforces-Round-576-Div-2/C.cpp -o CMakeFiles/CodeFroces.dir/Rounds/Codeforces-Round-576-Div-2/C.cpp.s

# Object files for target CodeFroces
CodeFroces_OBJECTS = \
"CMakeFiles/CodeFroces.dir/Rounds/Codeforces-Round-576-Div-2/C.cpp.o"

# External object files for target CodeFroces
CodeFroces_EXTERNAL_OBJECTS =

CodeFroces: CMakeFiles/CodeFroces.dir/Rounds/Codeforces-Round-576-Div-2/C.cpp.o
CodeFroces: CMakeFiles/CodeFroces.dir/build.make
CodeFroces: CMakeFiles/CodeFroces.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mazharul/Dropbox/Contest-Programming/Programming-Contests-Source-Codes/CodeForces/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CodeFroces"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CodeFroces.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CodeFroces.dir/build: CodeFroces

.PHONY : CMakeFiles/CodeFroces.dir/build

CMakeFiles/CodeFroces.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CodeFroces.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CodeFroces.dir/clean

CMakeFiles/CodeFroces.dir/depend:
	cd /home/mazharul/Dropbox/Contest-Programming/Programming-Contests-Source-Codes/CodeForces/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mazharul/Dropbox/Contest-Programming/Programming-Contests-Source-Codes/CodeForces /home/mazharul/Dropbox/Contest-Programming/Programming-Contests-Source-Codes/CodeForces /home/mazharul/Dropbox/Contest-Programming/Programming-Contests-Source-Codes/CodeForces/cmake-build-debug /home/mazharul/Dropbox/Contest-Programming/Programming-Contests-Source-Codes/CodeForces/cmake-build-debug /home/mazharul/Dropbox/Contest-Programming/Programming-Contests-Source-Codes/CodeForces/cmake-build-debug/CMakeFiles/CodeFroces.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CodeFroces.dir/depend

