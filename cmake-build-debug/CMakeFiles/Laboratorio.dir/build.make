# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/tommasobucaioni/CLionProject/Laboratorio

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/tommasobucaioni/CLionProject/Laboratorio/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Laboratorio.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Laboratorio.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Laboratorio.dir/flags.make

CMakeFiles/Laboratorio.dir/main.cpp.o: CMakeFiles/Laboratorio.dir/flags.make
CMakeFiles/Laboratorio.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tommasobucaioni/CLionProject/Laboratorio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Laboratorio.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Laboratorio.dir/main.cpp.o -c /Users/tommasobucaioni/CLionProject/Laboratorio/main.cpp

CMakeFiles/Laboratorio.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Laboratorio.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tommasobucaioni/CLionProject/Laboratorio/main.cpp > CMakeFiles/Laboratorio.dir/main.cpp.i

CMakeFiles/Laboratorio.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Laboratorio.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tommasobucaioni/CLionProject/Laboratorio/main.cpp -o CMakeFiles/Laboratorio.dir/main.cpp.s

# Object files for target Laboratorio
Laboratorio_OBJECTS = \
"CMakeFiles/Laboratorio.dir/main.cpp.o"

# External object files for target Laboratorio
Laboratorio_EXTERNAL_OBJECTS =

Laboratorio: CMakeFiles/Laboratorio.dir/main.cpp.o
Laboratorio: CMakeFiles/Laboratorio.dir/build.make
Laboratorio: libcore.a
Laboratorio: CMakeFiles/Laboratorio.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/tommasobucaioni/CLionProject/Laboratorio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Laboratorio"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Laboratorio.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Laboratorio.dir/build: Laboratorio

.PHONY : CMakeFiles/Laboratorio.dir/build

CMakeFiles/Laboratorio.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Laboratorio.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Laboratorio.dir/clean

CMakeFiles/Laboratorio.dir/depend:
	cd /Users/tommasobucaioni/CLionProject/Laboratorio/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/tommasobucaioni/CLionProject/Laboratorio /Users/tommasobucaioni/CLionProject/Laboratorio /Users/tommasobucaioni/CLionProject/Laboratorio/cmake-build-debug /Users/tommasobucaioni/CLionProject/Laboratorio/cmake-build-debug /Users/tommasobucaioni/CLionProject/Laboratorio/cmake-build-debug/CMakeFiles/Laboratorio.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Laboratorio.dir/depend

