# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = "/Applications/CLion 2019.1 EAP.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Applications/CLion 2019.1 EAP.app/Contents/bin/cmake/mac/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/dovydas/gitprojects/prototype

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/dovydas/gitprojects/prototype/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/prototype.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/prototype.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/prototype.dir/flags.make

CMakeFiles/prototype.dir/src/main.cpp.o: CMakeFiles/prototype.dir/flags.make
CMakeFiles/prototype.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dovydas/gitprojects/prototype/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/prototype.dir/src/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/prototype.dir/src/main.cpp.o -c /Users/dovydas/gitprojects/prototype/src/main.cpp

CMakeFiles/prototype.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/prototype.dir/src/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dovydas/gitprojects/prototype/src/main.cpp > CMakeFiles/prototype.dir/src/main.cpp.i

CMakeFiles/prototype.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/prototype.dir/src/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dovydas/gitprojects/prototype/src/main.cpp -o CMakeFiles/prototype.dir/src/main.cpp.s

CMakeFiles/prototype.dir/src/Engine/Engine.cpp.o: CMakeFiles/prototype.dir/flags.make
CMakeFiles/prototype.dir/src/Engine/Engine.cpp.o: ../src/Engine/Engine.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dovydas/gitprojects/prototype/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/prototype.dir/src/Engine/Engine.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/prototype.dir/src/Engine/Engine.cpp.o -c /Users/dovydas/gitprojects/prototype/src/Engine/Engine.cpp

CMakeFiles/prototype.dir/src/Engine/Engine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/prototype.dir/src/Engine/Engine.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dovydas/gitprojects/prototype/src/Engine/Engine.cpp > CMakeFiles/prototype.dir/src/Engine/Engine.cpp.i

CMakeFiles/prototype.dir/src/Engine/Engine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/prototype.dir/src/Engine/Engine.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dovydas/gitprojects/prototype/src/Engine/Engine.cpp -o CMakeFiles/prototype.dir/src/Engine/Engine.cpp.s

CMakeFiles/prototype.dir/src/Utility/shader.cpp.o: CMakeFiles/prototype.dir/flags.make
CMakeFiles/prototype.dir/src/Utility/shader.cpp.o: ../src/Utility/shader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dovydas/gitprojects/prototype/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/prototype.dir/src/Utility/shader.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/prototype.dir/src/Utility/shader.cpp.o -c /Users/dovydas/gitprojects/prototype/src/Utility/shader.cpp

CMakeFiles/prototype.dir/src/Utility/shader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/prototype.dir/src/Utility/shader.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dovydas/gitprojects/prototype/src/Utility/shader.cpp > CMakeFiles/prototype.dir/src/Utility/shader.cpp.i

CMakeFiles/prototype.dir/src/Utility/shader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/prototype.dir/src/Utility/shader.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dovydas/gitprojects/prototype/src/Utility/shader.cpp -o CMakeFiles/prototype.dir/src/Utility/shader.cpp.s

CMakeFiles/prototype.dir/src/Utility/resourcemanager.cpp.o: CMakeFiles/prototype.dir/flags.make
CMakeFiles/prototype.dir/src/Utility/resourcemanager.cpp.o: ../src/Utility/resourcemanager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dovydas/gitprojects/prototype/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/prototype.dir/src/Utility/resourcemanager.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/prototype.dir/src/Utility/resourcemanager.cpp.o -c /Users/dovydas/gitprojects/prototype/src/Utility/resourcemanager.cpp

CMakeFiles/prototype.dir/src/Utility/resourcemanager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/prototype.dir/src/Utility/resourcemanager.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dovydas/gitprojects/prototype/src/Utility/resourcemanager.cpp > CMakeFiles/prototype.dir/src/Utility/resourcemanager.cpp.i

CMakeFiles/prototype.dir/src/Utility/resourcemanager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/prototype.dir/src/Utility/resourcemanager.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dovydas/gitprojects/prototype/src/Utility/resourcemanager.cpp -o CMakeFiles/prototype.dir/src/Utility/resourcemanager.cpp.s

CMakeFiles/prototype.dir/libs/stb_image.cpp.o: CMakeFiles/prototype.dir/flags.make
CMakeFiles/prototype.dir/libs/stb_image.cpp.o: ../libs/stb_image.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dovydas/gitprojects/prototype/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/prototype.dir/libs/stb_image.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/prototype.dir/libs/stb_image.cpp.o -c /Users/dovydas/gitprojects/prototype/libs/stb_image.cpp

CMakeFiles/prototype.dir/libs/stb_image.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/prototype.dir/libs/stb_image.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dovydas/gitprojects/prototype/libs/stb_image.cpp > CMakeFiles/prototype.dir/libs/stb_image.cpp.i

CMakeFiles/prototype.dir/libs/stb_image.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/prototype.dir/libs/stb_image.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dovydas/gitprojects/prototype/libs/stb_image.cpp -o CMakeFiles/prototype.dir/libs/stb_image.cpp.s

CMakeFiles/prototype.dir/src/Utility/texture.cpp.o: CMakeFiles/prototype.dir/flags.make
CMakeFiles/prototype.dir/src/Utility/texture.cpp.o: ../src/Utility/texture.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dovydas/gitprojects/prototype/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/prototype.dir/src/Utility/texture.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/prototype.dir/src/Utility/texture.cpp.o -c /Users/dovydas/gitprojects/prototype/src/Utility/texture.cpp

CMakeFiles/prototype.dir/src/Utility/texture.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/prototype.dir/src/Utility/texture.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dovydas/gitprojects/prototype/src/Utility/texture.cpp > CMakeFiles/prototype.dir/src/Utility/texture.cpp.i

CMakeFiles/prototype.dir/src/Utility/texture.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/prototype.dir/src/Utility/texture.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dovydas/gitprojects/prototype/src/Utility/texture.cpp -o CMakeFiles/prototype.dir/src/Utility/texture.cpp.s

CMakeFiles/prototype.dir/src/Engine/Window.cpp.o: CMakeFiles/prototype.dir/flags.make
CMakeFiles/prototype.dir/src/Engine/Window.cpp.o: ../src/Engine/Window.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dovydas/gitprojects/prototype/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/prototype.dir/src/Engine/Window.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/prototype.dir/src/Engine/Window.cpp.o -c /Users/dovydas/gitprojects/prototype/src/Engine/Window.cpp

CMakeFiles/prototype.dir/src/Engine/Window.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/prototype.dir/src/Engine/Window.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dovydas/gitprojects/prototype/src/Engine/Window.cpp > CMakeFiles/prototype.dir/src/Engine/Window.cpp.i

CMakeFiles/prototype.dir/src/Engine/Window.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/prototype.dir/src/Engine/Window.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dovydas/gitprojects/prototype/src/Engine/Window.cpp -o CMakeFiles/prototype.dir/src/Engine/Window.cpp.s

CMakeFiles/prototype.dir/src/OpenGLearn/Application.cpp.o: CMakeFiles/prototype.dir/flags.make
CMakeFiles/prototype.dir/src/OpenGLearn/Application.cpp.o: ../src/OpenGLearn/Application.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dovydas/gitprojects/prototype/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/prototype.dir/src/OpenGLearn/Application.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/prototype.dir/src/OpenGLearn/Application.cpp.o -c /Users/dovydas/gitprojects/prototype/src/OpenGLearn/Application.cpp

CMakeFiles/prototype.dir/src/OpenGLearn/Application.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/prototype.dir/src/OpenGLearn/Application.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dovydas/gitprojects/prototype/src/OpenGLearn/Application.cpp > CMakeFiles/prototype.dir/src/OpenGLearn/Application.cpp.i

CMakeFiles/prototype.dir/src/OpenGLearn/Application.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/prototype.dir/src/OpenGLearn/Application.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dovydas/gitprojects/prototype/src/OpenGLearn/Application.cpp -o CMakeFiles/prototype.dir/src/OpenGLearn/Application.cpp.s

# Object files for target prototype
prototype_OBJECTS = \
"CMakeFiles/prototype.dir/src/main.cpp.o" \
"CMakeFiles/prototype.dir/src/Engine/Engine.cpp.o" \
"CMakeFiles/prototype.dir/src/Utility/shader.cpp.o" \
"CMakeFiles/prototype.dir/src/Utility/resourcemanager.cpp.o" \
"CMakeFiles/prototype.dir/libs/stb_image.cpp.o" \
"CMakeFiles/prototype.dir/src/Utility/texture.cpp.o" \
"CMakeFiles/prototype.dir/src/Engine/Window.cpp.o" \
"CMakeFiles/prototype.dir/src/OpenGLearn/Application.cpp.o"

# External object files for target prototype
prototype_EXTERNAL_OBJECTS =

prototype: CMakeFiles/prototype.dir/src/main.cpp.o
prototype: CMakeFiles/prototype.dir/src/Engine/Engine.cpp.o
prototype: CMakeFiles/prototype.dir/src/Utility/shader.cpp.o
prototype: CMakeFiles/prototype.dir/src/Utility/resourcemanager.cpp.o
prototype: CMakeFiles/prototype.dir/libs/stb_image.cpp.o
prototype: CMakeFiles/prototype.dir/src/Utility/texture.cpp.o
prototype: CMakeFiles/prototype.dir/src/Engine/Window.cpp.o
prototype: CMakeFiles/prototype.dir/src/OpenGLearn/Application.cpp.o
prototype: CMakeFiles/prototype.dir/build.make
prototype: /usr/local/lib/libglfw.3.2.dylib
prototype: libglad.a
prototype: CMakeFiles/prototype.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/dovydas/gitprojects/prototype/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable prototype"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/prototype.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/prototype.dir/build: prototype

.PHONY : CMakeFiles/prototype.dir/build

CMakeFiles/prototype.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/prototype.dir/cmake_clean.cmake
.PHONY : CMakeFiles/prototype.dir/clean

CMakeFiles/prototype.dir/depend:
	cd /Users/dovydas/gitprojects/prototype/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/dovydas/gitprojects/prototype /Users/dovydas/gitprojects/prototype /Users/dovydas/gitprojects/prototype/cmake-build-debug /Users/dovydas/gitprojects/prototype/cmake-build-debug /Users/dovydas/gitprojects/prototype/cmake-build-debug/CMakeFiles/prototype.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/prototype.dir/depend
