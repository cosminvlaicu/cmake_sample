### STATIC LIBRARY ###
# cmake_minimum_required (VERSION 2.8.11)
# set(CMAKE_CXX_STANDARD 17)

# project(STD)

# add_subdirectory(custom_library)

# file(GLOB_RECURSE SRC_FILES src/*.cpp)
# add_executable(STD ${SRC_FILES})
# target_include_directories(STD PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# target_link_libraries(STD PUBLIC CUSTOM_LIB)
###

cmake_minimum_required (VERSION 2.8.11)
set(CMAKE_CXX_STANDARD 17)

project(STD)

find_library(SHARED_LIB shared_lib PATHS ${CMAKE_CURRENT_SOURCE_DIR}/custom_library/build)

file(GLOB_RECURSE SRC_FILES src/*.cpp)
add_executable(STD ${SRC_FILES})
target_include_directories(STD PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include ${CMAKE_CURRENT_SOURCE_DIR}/custom_library/include)

target_link_libraries(STD PRIVATE ${SHARED_LIB})
