cmake_minimum_required(VERSION 2.8)

set(CMAKE_MODULE_PATH
  ${CMAKE_CURRENT_SOURCE_DIR}/cmake/Modules
)

project(note2pgsql CXX)


find_package(Boost 1.41 REQUIRED COMPONENTS program_options)
include_directories(${Boost_INCLUDE_DIR})

find_package(BZip2)
include_directories(${BZIP2_INCLUDE_DIR})

add_subdirectory(src)


