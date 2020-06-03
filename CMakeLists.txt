cmake_minimum_required(VERSION 3.16)
project(minstd)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)
add_subdirectory(src)

target_link_libraries(minstd)