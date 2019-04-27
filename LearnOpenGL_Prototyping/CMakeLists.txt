# Project definition
cmake_minimum_required(VERSION 3.13)
project(LearnOpenGL)

# Source files

set(SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src")
set(LIB_DIR "${CMAKE_CURRENT_SOURCE_DIR}/dependencies")
set(RES_DIR "cmake-build-debug/res")
# Add source files
file(GLOB_RECURSE SOURCE_FILES
        ${CMAKE_SOURCE_DIR}/src/*.c
        ${CMAKE_SOURCE_DIR}/src/*.cpp)

# Add header files
file(GLOB_RECURSE HEADER_FILES
        ${CMAKE_SOURCE_DIR}/src/*.h
        ${CMAKE_SOURCE_DIR}/src/*.hpp)

# Add shader files
file(GLOB_RECURSE SHADER_FILES
        ${RES_DIR}/shaders/*.shader)

# Executable definitiona and properties
add_executable(${PROJECT_NAME} ${HEADER_FILES} ${SOURCE_FILES} ${SHADER_FILES} src/Input.h src/Camera.cpp src/Camera.h)
target_include_directories(${PROJECT_NAME} PRIVATE "${SRC_DIR}")
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 17)

# GLAD
set(GLAD_DIR "${LIB_DIR}/glad")
add_library("glad" "${GLAD_DIR}/src/glad.c")
target_include_directories("glad" PRIVATE "${GLAD_DIR}/include")
target_include_directories(${PROJECT_NAME} PRIVATE "${GLAD_DIR}/include")
target_link_libraries(${PROJECT_NAME} "glad" "${CMAKE_DL_LIBS}")

# GLFW
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(GLFW_INSTALL OFF CACHE INTERNAL "Generate installation target")
set(GLFW_DIR "${LIB_DIR}/glfw")
add_subdirectory(${GLFW_DIR})
target_link_libraries(${PROJECT_NAME} glfw ${GLFW_LIBRARIES})

# GLM
include_directories("${SRC_DIR}/vendor/glm")

# ImGui
include_directories("${SRC_DIR}/vendor/imgui")

# Assimp

#set(ZLIB_LIBRARIES zlibstatic)
#set(ENABLE_BOOST_WORKAROUND ON)
#set(BUILD_STATIC_LIB ON)
#set(BUILD_ASSIMP_TOOLS  ON)
#set(ASSIMP_BUILD_STATIC_LIB ON)

# set any variables you might need to set for your app and assimp
#set(BUILD_ASSIMP_TOOLS  ON)
#set(ASSIMP_BUILD_STATIC_LIB ON)

# add assimp source dir as a subdirectory, effectively making
# assimp's CMakeLists.txt part of your build
#include_directories("${LIB_DIR}/assimp-4.1.0/include")
#add_subdirectory("${LIB_DIR}/assimp-4.1.0" ${CMAKE_BINARY_DIR}/assimp)
#include_directories("${CMAKE_BINARY_DIR}/assimp/include")

# be sure to link in assimp, use platform-agnostic syntax for the linker
#target_link_libraries(${PROJECT_NAME} assimp)

