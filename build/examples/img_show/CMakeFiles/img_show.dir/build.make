# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/june/ssd/github/opencv/install/usr/local

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/june/ssd/github/opencv/install/usr/local/build

# Include any dependencies generated for this target.
include examples/img_show/CMakeFiles/img_show.dir/depend.make

# Include the progress variables for this target.
include examples/img_show/CMakeFiles/img_show.dir/progress.make

# Include the compile flags for this target's objects.
include examples/img_show/CMakeFiles/img_show.dir/flags.make

examples/img_show/CMakeFiles/img_show.dir/img_show.cpp.o: examples/img_show/CMakeFiles/img_show.dir/flags.make
examples/img_show/CMakeFiles/img_show.dir/img_show.cpp.o: ../examples/img_show/img_show.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/june/ssd/github/opencv/install/usr/local/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object examples/img_show/CMakeFiles/img_show.dir/img_show.cpp.o"
	cd /home/june/ssd/github/opencv/install/usr/local/build/examples/img_show && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/img_show.dir/img_show.cpp.o -c /home/june/ssd/github/opencv/install/usr/local/examples/img_show/img_show.cpp

examples/img_show/CMakeFiles/img_show.dir/img_show.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/img_show.dir/img_show.cpp.i"
	cd /home/june/ssd/github/opencv/install/usr/local/build/examples/img_show && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/june/ssd/github/opencv/install/usr/local/examples/img_show/img_show.cpp > CMakeFiles/img_show.dir/img_show.cpp.i

examples/img_show/CMakeFiles/img_show.dir/img_show.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/img_show.dir/img_show.cpp.s"
	cd /home/june/ssd/github/opencv/install/usr/local/build/examples/img_show && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/june/ssd/github/opencv/install/usr/local/examples/img_show/img_show.cpp -o CMakeFiles/img_show.dir/img_show.cpp.s

examples/img_show/CMakeFiles/img_show.dir/img_show.cpp.o.requires:

.PHONY : examples/img_show/CMakeFiles/img_show.dir/img_show.cpp.o.requires

examples/img_show/CMakeFiles/img_show.dir/img_show.cpp.o.provides: examples/img_show/CMakeFiles/img_show.dir/img_show.cpp.o.requires
	$(MAKE) -f examples/img_show/CMakeFiles/img_show.dir/build.make examples/img_show/CMakeFiles/img_show.dir/img_show.cpp.o.provides.build
.PHONY : examples/img_show/CMakeFiles/img_show.dir/img_show.cpp.o.provides

examples/img_show/CMakeFiles/img_show.dir/img_show.cpp.o.provides.build: examples/img_show/CMakeFiles/img_show.dir/img_show.cpp.o


# Object files for target img_show
img_show_OBJECTS = \
"CMakeFiles/img_show.dir/img_show.cpp.o"

# External object files for target img_show
img_show_EXTERNAL_OBJECTS =

../examples/img_show/img_show: examples/img_show/CMakeFiles/img_show.dir/img_show.cpp.o
../examples/img_show/img_show: examples/img_show/CMakeFiles/img_show.dir/build.make
../examples/img_show/img_show: examples/img_show/CMakeFiles/img_show.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/june/ssd/github/opencv/install/usr/local/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../../examples/img_show/img_show"
	cd /home/june/ssd/github/opencv/install/usr/local/build/examples/img_show && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/img_show.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/img_show/CMakeFiles/img_show.dir/build: ../examples/img_show/img_show

.PHONY : examples/img_show/CMakeFiles/img_show.dir/build

examples/img_show/CMakeFiles/img_show.dir/requires: examples/img_show/CMakeFiles/img_show.dir/img_show.cpp.o.requires

.PHONY : examples/img_show/CMakeFiles/img_show.dir/requires

examples/img_show/CMakeFiles/img_show.dir/clean:
	cd /home/june/ssd/github/opencv/install/usr/local/build/examples/img_show && $(CMAKE_COMMAND) -P CMakeFiles/img_show.dir/cmake_clean.cmake
.PHONY : examples/img_show/CMakeFiles/img_show.dir/clean

examples/img_show/CMakeFiles/img_show.dir/depend:
	cd /home/june/ssd/github/opencv/install/usr/local/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/june/ssd/github/opencv/install/usr/local /home/june/ssd/github/opencv/install/usr/local/examples/img_show /home/june/ssd/github/opencv/install/usr/local/build /home/june/ssd/github/opencv/install/usr/local/build/examples/img_show /home/june/ssd/github/opencv/install/usr/local/build/examples/img_show/CMakeFiles/img_show.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/img_show/CMakeFiles/img_show.dir/depend

