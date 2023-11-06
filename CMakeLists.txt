cmake_minimum_required(VERSION 3.5.0)
project(opencv_cpp)

#set(CMAKE_CXX_COMPILER Dmingw64bing++)
#set(BUILD_SHARED_LIBS ON)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(opencv_cpp main.cpp)

target_link_libraries( opencv_cpp ${OpenCV_LIBS} )

