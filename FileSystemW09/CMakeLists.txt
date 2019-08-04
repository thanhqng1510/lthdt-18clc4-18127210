cmake_minimum_required(VERSION 3.0)

project(FileSystemW09)

set(CMAKE_CXX_COMPILER "clang++")
set(CMAKE_CXX_STANDARD 17)
set(source_dir "${PROJECT_SOURCE_DIR}/src")

file(GLOB source_file_system ${source_dir}/FileSystem/*.cpp)
file(GLOB source_logger ${source_dir}/Logger/*.cpp)

add_executable(Output ${source_dir}/Main.cpp ${source_file_system} ${source_logger})