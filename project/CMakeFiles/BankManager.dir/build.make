# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/ubuntu/basiccpp/project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubuntu/basiccpp/project

# Include any dependencies generated for this target.
include CMakeFiles/BankManager.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BankManager.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BankManager.dir/flags.make

CMakeFiles/BankManager.dir/main.cpp.o: CMakeFiles/BankManager.dir/flags.make
CMakeFiles/BankManager.dir/main.cpp.o: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/basiccpp/project/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BankManager.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BankManager.dir/main.cpp.o -c /home/ubuntu/basiccpp/project/main.cpp

CMakeFiles/BankManager.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BankManager.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/basiccpp/project/main.cpp > CMakeFiles/BankManager.dir/main.cpp.i

CMakeFiles/BankManager.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BankManager.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/basiccpp/project/main.cpp -o CMakeFiles/BankManager.dir/main.cpp.s

CMakeFiles/BankManager.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/BankManager.dir/main.cpp.o.requires

CMakeFiles/BankManager.dir/main.cpp.o.provides: CMakeFiles/BankManager.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/BankManager.dir/build.make CMakeFiles/BankManager.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/BankManager.dir/main.cpp.o.provides

CMakeFiles/BankManager.dir/main.cpp.o.provides.build: CMakeFiles/BankManager.dir/main.cpp.o


# Object files for target BankManager
BankManager_OBJECTS = \
"CMakeFiles/BankManager.dir/main.cpp.o"

# External object files for target BankManager
BankManager_EXTERNAL_OBJECTS =

BankManager: CMakeFiles/BankManager.dir/main.cpp.o
BankManager: CMakeFiles/BankManager.dir/build.make
BankManager: CMakeFiles/BankManager.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ubuntu/basiccpp/project/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable BankManager"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BankManager.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BankManager.dir/build: BankManager

.PHONY : CMakeFiles/BankManager.dir/build

CMakeFiles/BankManager.dir/requires: CMakeFiles/BankManager.dir/main.cpp.o.requires

.PHONY : CMakeFiles/BankManager.dir/requires

CMakeFiles/BankManager.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/BankManager.dir/cmake_clean.cmake
.PHONY : CMakeFiles/BankManager.dir/clean

CMakeFiles/BankManager.dir/depend:
	cd /home/ubuntu/basiccpp/project && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/basiccpp/project /home/ubuntu/basiccpp/project /home/ubuntu/basiccpp/project /home/ubuntu/basiccpp/project /home/ubuntu/basiccpp/project/CMakeFiles/BankManager.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BankManager.dir/depend

