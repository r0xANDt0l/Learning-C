# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /home/rodriguetos/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/221.5921.27/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/rodriguetos/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/221.5921.27/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/rodriguetos/Github-Repos/Learning-C

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rodriguetos/Github-Repos/Learning-C/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/C_Learning.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/C_Learning.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/C_Learning.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/C_Learning.dir/flags.make

CMakeFiles/C_Learning.dir/FirstProject/main.c.o: CMakeFiles/C_Learning.dir/flags.make
CMakeFiles/C_Learning.dir/FirstProject/main.c.o: ../FirstProject/main.c
CMakeFiles/C_Learning.dir/FirstProject/main.c.o: CMakeFiles/C_Learning.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rodriguetos/Github-Repos/Learning-C/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/C_Learning.dir/FirstProject/main.c.o"
	/usr/lib64/ccache/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/C_Learning.dir/FirstProject/main.c.o -MF CMakeFiles/C_Learning.dir/FirstProject/main.c.o.d -o CMakeFiles/C_Learning.dir/FirstProject/main.c.o -c /home/rodriguetos/Github-Repos/Learning-C/FirstProject/main.c

CMakeFiles/C_Learning.dir/FirstProject/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/C_Learning.dir/FirstProject/main.c.i"
	/usr/lib64/ccache/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rodriguetos/Github-Repos/Learning-C/FirstProject/main.c > CMakeFiles/C_Learning.dir/FirstProject/main.c.i

CMakeFiles/C_Learning.dir/FirstProject/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/C_Learning.dir/FirstProject/main.c.s"
	/usr/lib64/ccache/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rodriguetos/Github-Repos/Learning-C/FirstProject/main.c -o CMakeFiles/C_Learning.dir/FirstProject/main.c.s

# Object files for target C_Learning
C_Learning_OBJECTS = \
"CMakeFiles/C_Learning.dir/FirstProject/main.c.o"

# External object files for target C_Learning
C_Learning_EXTERNAL_OBJECTS =

C_Learning: CMakeFiles/C_Learning.dir/FirstProject/main.c.o
C_Learning: CMakeFiles/C_Learning.dir/build.make
C_Learning: CMakeFiles/C_Learning.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rodriguetos/Github-Repos/Learning-C/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable C_Learning"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/C_Learning.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/C_Learning.dir/build: C_Learning
.PHONY : CMakeFiles/C_Learning.dir/build

CMakeFiles/C_Learning.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/C_Learning.dir/cmake_clean.cmake
.PHONY : CMakeFiles/C_Learning.dir/clean

CMakeFiles/C_Learning.dir/depend:
	cd /home/rodriguetos/Github-Repos/Learning-C/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rodriguetos/Github-Repos/Learning-C /home/rodriguetos/Github-Repos/Learning-C /home/rodriguetos/Github-Repos/Learning-C/cmake-build-debug /home/rodriguetos/Github-Repos/Learning-C/cmake-build-debug /home/rodriguetos/Github-Repos/Learning-C/cmake-build-debug/CMakeFiles/C_Learning.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/C_Learning.dir/depend
