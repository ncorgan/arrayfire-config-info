########################################################################
# Project setup
########################################################################
cmake_minimum_required(VERSION 3.5)
project(arrayfire-config-info CXX)

find_package(ArrayFire REQUIRED)

add_executable(arrayfire-config-info arrayfire-config-info.cpp)
target_link_libraries(arrayfire-config-info ArrayFire::af)

install(
    TARGETS arrayfire-config-info RUNTIME
    DESTINATION bin)
