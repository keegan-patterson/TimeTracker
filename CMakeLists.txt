cmake_minimum_required(VERSION 3.31.0)
project(TimeTracker)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(TimeTrackerConfig.hpp.in TimeTrackerConfig.hpp)

add_executable(TimeTracker timetracker.cpp)

target_include_directories(TimeTracker PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           )