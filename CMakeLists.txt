cmake_minimum_required(VERSION 3.26)
project(github-action VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(FETCHCONTENT_QUIET FALSE)
include(FetchContent)
  if(CMAKE_VERSION VERSION_LESS 3.24)
    FetchContent_Declare(
      Boost
      URL https://github.com/boostorg/boost/releases/download/boost-1.86.0/boost-1.86.0-cmake.7z
      URL_HASH SHA256=ee6e0793b5ec7d13e7181ec05d3b1aaa23615947295080e4b9930324488e078f # 1.86
      USES_TERMINAL_DOWNLOAD TRUE      
      EXCLUDE_FROM_ALL
      INACTIVITY_TIMEOUT 30)  
  else()
    FetchContent_Declare(
      Boost
      URL https://github.com/boostorg/boost/releases/download/boost-1.86.0/boost-1.86.0-cmake.7z
      URL_HASH SHA256=ee6e0793b5ec7d13e7181ec05d3b1aaa23615947295080e4b9930324488e078f # 1.86
      USES_TERMINAL_DOWNLOAD TRUE
      DOWNLOAD_EXTRACT_TIMESTAMP ON
      EXCLUDE_FROM_ALL
      INACTIVITY_TIMEOUT 30)
  endif()
  FetchContent_MakeAvailable(Boost)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE Boost::url)

