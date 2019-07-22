cmake_minimum_required(VERSION 3.0)

project(FileSystemW09)

set(CMAKE_CXX_COMPILER "clang++")
set(CMAKE_CXX_STANDARD 17)
set(source_dir "${PROJECT_SOURCE_DIR}/src")

file(GLOB source_files ${source_dir}/*.cpp)

add_executable(Output ${source_files})