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
CMAKE_SOURCE_DIR = /Users/illyes/Desktop/prog/hexa_to_dec

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/illyes/Desktop/prog/hexa_to_dec/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/hexa_to_dec.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/hexa_to_dec.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hexa_to_dec.dir/flags.make

CMakeFiles/hexa_to_dec.dir/main.c.o: CMakeFiles/hexa_to_dec.dir/flags.make
CMakeFiles/hexa_to_dec.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/illyes/Desktop/prog/hexa_to_dec/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/hexa_to_dec.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/hexa_to_dec.dir/main.c.o -c /Users/illyes/Desktop/prog/hexa_to_dec/main.c

CMakeFiles/hexa_to_dec.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hexa_to_dec.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/illyes/Desktop/prog/hexa_to_dec/main.c > CMakeFiles/hexa_to_dec.dir/main.c.i

CMakeFiles/hexa_to_dec.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hexa_to_dec.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/illyes/Desktop/prog/hexa_to_dec/main.c -o CMakeFiles/hexa_to_dec.dir/main.c.s

# Object files for target hexa_to_dec
hexa_to_dec_OBJECTS = \
"CMakeFiles/hexa_to_dec.dir/main.c.o"

# External object files for target hexa_to_dec
hexa_to_dec_EXTERNAL_OBJECTS =

hexa_to_dec: CMakeFiles/hexa_to_dec.dir/main.c.o
hexa_to_dec: CMakeFiles/hexa_to_dec.dir/build.make
hexa_to_dec: CMakeFiles/hexa_to_dec.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/illyes/Desktop/prog/hexa_to_dec/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable hexa_to_dec"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hexa_to_dec.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hexa_to_dec.dir/build: hexa_to_dec
.PHONY : CMakeFiles/hexa_to_dec.dir/build

CMakeFiles/hexa_to_dec.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hexa_to_dec.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hexa_to_dec.dir/clean

CMakeFiles/hexa_to_dec.dir/depend:
	cd /Users/illyes/Desktop/prog/hexa_to_dec/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/illyes/Desktop/prog/hexa_to_dec /Users/illyes/Desktop/prog/hexa_to_dec /Users/illyes/Desktop/prog/hexa_to_dec/cmake-build-debug /Users/illyes/Desktop/prog/hexa_to_dec/cmake-build-debug /Users/illyes/Desktop/prog/hexa_to_dec/cmake-build-debug/CMakeFiles/hexa_to_dec.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hexa_to_dec.dir/depend

