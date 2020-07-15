cmake_minimum_required(VERSION 3.14)
project(Library)
aux_source_directory(${CMAKE_SOURCE_DIR} src_list)
add_executable(${CMAKE_PROJECT_NAME} ${src_list})
