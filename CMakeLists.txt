﻿cmake_minimum_required (VERSION 3.8 FATAL_ERROR)

set(PROJECT_NAME open-gl-engine)
project (${PROJECT_NAME})

add_executable (open-gl-engine "sources/main.cpp" "sources/app.cpp" "sources/window.cpp" "sources/renderer.cpp" "sources/input.cpp")

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(GLFW_INSTALL OFF CACHE BOOL "" FORCE)

add_subdirectory(external/glfw)
target_link_libraries(${PROJECT_NAME} glfw)

add_subdirectory(external/glad)
target_link_libraries(${PROJECT_NAME} glad)
