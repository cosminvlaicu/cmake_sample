# this is for STATIC LIBRARY
# add_library(CUSTOM_LIB STATIC src/custom_lib.cpp)
# target_include_directories(CUSTOM_LIB PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

###################################################################################
### SHARED LIBRARY ###
cmake_minimum_required (VERSION 2.8.11)
set(CMAKE_CXX_STANDARD 17)

project (shared_lib)
set(CMAKE_BUILD_TYPE Release)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
add_library(shared_lib SHARED src/custom_lib.cpp)