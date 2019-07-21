cmake_minimum_required(VERSION 3.0)

project(PrincessW08)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -std=c++17")
set(source_dir "${PROJECT_SOURCE_DIR}/src/")

file(GLOB source_files ${source_dir}/*.cpp)

add_executable(Output ${source_files})
