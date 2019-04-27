# Project definition
cmake_minimum_required(VERSION 3.13)
project(prototype)

# Source files

set(SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src")
set(LIB_DIR "${CMAKE_CURRENT_SOURCE_DIR}/libs")
set(SOURCES "${SRC_DIR}/main.cpp"
        "src/Engine/Engine.h"
        "src/Engine/Engine.cpp"
        "src/Utility/shader.cpp"
        "src/Utility/shader.h"
        "src/Utility/resourcemanager.cpp"
        "src/Utility/resourcemanager.h"
        "libs/stb_image.h"
        "libs/stb_image.cpp"
        "src/Utility/texture.cpp"
        "src/Utility/texture.h"
        "Resources/Shaders/vertexshader.vert"
        "Resources/Shaders/fragmentshader.frag"
        "Resources/Textures/container.jpg"
        src/Utility/Camera.h src/Engine/Window.h src/Engine/Window.cpp src/OpenGLearn/Application.cpp)

# Executable definitiona and properties
add_executable(${PROJECT_NAME} ${SOURCES})
target_include_directories(${PROJECT_NAME} PRIVATE "${SRC_DIR}")
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 11)

# GLFW
set(GLFW_BUILD_EXAMPLES OFF CACHE INTERNAL "Build the GLFW example programs")
set(GLFW_BUILD_TESTS OFF CACHE INTERNAL "Build the GLFW test programs")
set(GLFW_BUILD_DOCS OFF CACHE INTERNAL "Build the GLFW documentation")
set(GLFW_INSTALL OFF CACHE INTERNAL "Generate installation target")
find_package (glfw3 REQUIRED)
include_directories(${GLFW_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} "glfw" "${GLFW_LIBRARIES}")

# GLAD
set(GLAD_DIR "${LIB_DIR}/glad")
add_library("glad" "${GLAD_DIR}/src/glad.c")
target_include_directories("glad" PRIVATE "${GLAD_DIR}/include")
target_include_directories(${PROJECT_NAME} PRIVATE "${GLAD_DIR}/include")
target_link_libraries(${PROJECT_NAME} "glad" "${CMAKE_DL_LIBS}")

# GLM
include(FindPackageHandleStandardArgs)

if (WIN32)
    # Find include files
    find_path(
            GLM_INCLUDE_DIR
            NAMES glm/glm.hpp
            PATHS
            $ENV{PROGRAMFILES}/include
            ${GLM_ROOT_DIR}/include
            DOC "The directory where glm/glm.hpp resides")
else()
    # Find include files
    find_path(
            GLM_INCLUDE_DIR
            NAMES glm/glm.hpp
            PATHS
            /usr/include
            /usr/local/include
            /sw/include
            /opt/local/include
            ${GLM_ROOT_DIR}/include
            DOC "The directory where glm/glm.hpp resides")
endif()

# Handle REQUIRD argument, define *_FOUND variable
find_package_handle_standard_args(GLM DEFAULT_MSG GLM_INCLUDE_DIR)

# Define GLM_INCLUDE_DIRS
if (GLM_FOUND)
    set(GLM_INCLUDE_DIRS ${GLM_INCLUDE_DIR})
endif()

# Hide some variables
mark_as_advanced(GLM_INCLUDE_DIR)
