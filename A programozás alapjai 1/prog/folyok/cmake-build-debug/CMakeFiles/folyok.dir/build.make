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
CMAKE_SOURCE_DIR = /Users/illyes/Desktop/prog/folyok

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/illyes/Desktop/prog/folyok/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/folyok.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/folyok.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/folyok.dir/flags.make

CMakeFiles/folyok.dir/main.c.o: CMakeFiles/folyok.dir/flags.make
CMakeFiles/folyok.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/illyes/Desktop/prog/folyok/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/folyok.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/folyok.dir/main.c.o -c /Users/illyes/Desktop/prog/folyok/main.c

CMakeFiles/folyok.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/folyok.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/illyes/Desktop/prog/folyok/main.c > CMakeFiles/folyok.dir/main.c.i

CMakeFiles/folyok.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/folyok.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/illyes/Desktop/prog/folyok/main.c -o CMakeFiles/folyok.dir/main.c.s

# Object files for target folyok
folyok_OBJECTS = \
"CMakeFiles/folyok.dir/main.c.o"

# External object files for target folyok
folyok_EXTERNAL_OBJECTS =

folyok: CMakeFiles/folyok.dir/main.c.o
folyok: CMakeFiles/folyok.dir/build.make
folyok: CMakeFiles/folyok.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/illyes/Desktop/prog/folyok/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable folyok"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/folyok.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/folyok.dir/build: folyok
.PHONY : CMakeFiles/folyok.dir/build

CMakeFiles/folyok.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/folyok.dir/cmake_clean.cmake
.PHONY : CMakeFiles/folyok.dir/clean

CMakeFiles/folyok.dir/depend:
	cd /Users/illyes/Desktop/prog/folyok/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/illyes/Desktop/prog/folyok /Users/illyes/Desktop/prog/folyok /Users/illyes/Desktop/prog/folyok/cmake-build-debug /Users/illyes/Desktop/prog/folyok/cmake-build-debug /Users/illyes/Desktop/prog/folyok/cmake-build-debug/CMakeFiles/folyok.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/folyok.dir/depend

