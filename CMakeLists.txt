cmake_minimum_required(VERSION 3.12)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(264_UglyNumber-II VERSION 1.0.0)

set(SRC_FILES src/solution.cpp)
add_executable(264_UglyNumber-II src/main.cpp ${SRC_FILES})

target_include_directories(264_UglyNumber-II PUBLIC inc)

