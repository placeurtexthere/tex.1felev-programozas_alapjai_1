# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/illyes/Desktop/prog/kis_zh_anyad

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/illyes/Desktop/prog/kis_zh_anyad/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/kis_zh_anyad.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/kis_zh_anyad.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/kis_zh_anyad.dir/flags.make

CMakeFiles/kis_zh_anyad.dir/main.c.o: CMakeFiles/kis_zh_anyad.dir/flags.make
CMakeFiles/kis_zh_anyad.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/illyes/Desktop/prog/kis_zh_anyad/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/kis_zh_anyad.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/kis_zh_anyad.dir/main.c.o -c /Users/illyes/Desktop/prog/kis_zh_anyad/main.c

CMakeFiles/kis_zh_anyad.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/kis_zh_anyad.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/illyes/Desktop/prog/kis_zh_anyad/main.c > CMakeFiles/kis_zh_anyad.dir/main.c.i

CMakeFiles/kis_zh_anyad.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/kis_zh_anyad.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/illyes/Desktop/prog/kis_zh_anyad/main.c -o CMakeFiles/kis_zh_anyad.dir/main.c.s

# Object files for target kis_zh_anyad
kis_zh_anyad_OBJECTS = \
"CMakeFiles/kis_zh_anyad.dir/main.c.o"

# External object files for target kis_zh_anyad
kis_zh_anyad_EXTERNAL_OBJECTS =

kis_zh_anyad: CMakeFiles/kis_zh_anyad.dir/main.c.o
kis_zh_anyad: CMakeFiles/kis_zh_anyad.dir/build.make
kis_zh_anyad: CMakeFiles/kis_zh_anyad.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/illyes/Desktop/prog/kis_zh_anyad/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable kis_zh_anyad"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kis_zh_anyad.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/kis_zh_anyad.dir/build: kis_zh_anyad
.PHONY : CMakeFiles/kis_zh_anyad.dir/build

CMakeFiles/kis_zh_anyad.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/kis_zh_anyad.dir/cmake_clean.cmake
.PHONY : CMakeFiles/kis_zh_anyad.dir/clean

CMakeFiles/kis_zh_anyad.dir/depend:
	cd /Users/illyes/Desktop/prog/kis_zh_anyad/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/illyes/Desktop/prog/kis_zh_anyad /Users/illyes/Desktop/prog/kis_zh_anyad /Users/illyes/Desktop/prog/kis_zh_anyad/cmake-build-debug /Users/illyes/Desktop/prog/kis_zh_anyad/cmake-build-debug /Users/illyes/Desktop/prog/kis_zh_anyad/cmake-build-debug/CMakeFiles/kis_zh_anyad.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/kis_zh_anyad.dir/depend

