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
CMAKE_SOURCE_DIR = /Users/illyes/Desktop/prog/halmazok_metszete

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/illyes/Desktop/prog/halmazok_metszete/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/halmazok_metszete.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/halmazok_metszete.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/halmazok_metszete.dir/flags.make

CMakeFiles/halmazok_metszete.dir/main.c.o: CMakeFiles/halmazok_metszete.dir/flags.make
CMakeFiles/halmazok_metszete.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/illyes/Desktop/prog/halmazok_metszete/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/halmazok_metszete.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/halmazok_metszete.dir/main.c.o -c /Users/illyes/Desktop/prog/halmazok_metszete/main.c

CMakeFiles/halmazok_metszete.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/halmazok_metszete.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/illyes/Desktop/prog/halmazok_metszete/main.c > CMakeFiles/halmazok_metszete.dir/main.c.i

CMakeFiles/halmazok_metszete.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/halmazok_metszete.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/illyes/Desktop/prog/halmazok_metszete/main.c -o CMakeFiles/halmazok_metszete.dir/main.c.s

# Object files for target halmazok_metszete
halmazok_metszete_OBJECTS = \
"CMakeFiles/halmazok_metszete.dir/main.c.o"

# External object files for target halmazok_metszete
halmazok_metszete_EXTERNAL_OBJECTS =

halmazok_metszete: CMakeFiles/halmazok_metszete.dir/main.c.o
halmazok_metszete: CMakeFiles/halmazok_metszete.dir/build.make
halmazok_metszete: CMakeFiles/halmazok_metszete.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/illyes/Desktop/prog/halmazok_metszete/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable halmazok_metszete"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/halmazok_metszete.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/halmazok_metszete.dir/build: halmazok_metszete
.PHONY : CMakeFiles/halmazok_metszete.dir/build

CMakeFiles/halmazok_metszete.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/halmazok_metszete.dir/cmake_clean.cmake
.PHONY : CMakeFiles/halmazok_metszete.dir/clean

CMakeFiles/halmazok_metszete.dir/depend:
	cd /Users/illyes/Desktop/prog/halmazok_metszete/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/illyes/Desktop/prog/halmazok_metszete /Users/illyes/Desktop/prog/halmazok_metszete /Users/illyes/Desktop/prog/halmazok_metszete/cmake-build-debug /Users/illyes/Desktop/prog/halmazok_metszete/cmake-build-debug /Users/illyes/Desktop/prog/halmazok_metszete/cmake-build-debug/CMakeFiles/halmazok_metszete.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/halmazok_metszete.dir/depend

