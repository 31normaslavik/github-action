cmake_minimum_required(VERSION 3.26)
project(github-action VERSION 0.0.1 LANGUAGE CXX)

set(CMAKE_CXX_STANDARD_REQUIRED 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(${PROJECT_NAME} main.cpp)

