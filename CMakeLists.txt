########################################################################
# Project setup
########################################################################
cmake_minimum_required(VERSION 3.5)
project(arrayfire-list-devices CXX)

find_package(ArrayFire REQUIRED)

add_executable(arrayfire-list-devices arrayfire-list-devices.cpp)
target_link_libraries(arrayfire-list-devices ArrayFire::af)

install(
    TARGETS arrayfire-list-devices RUNTIME
    DESTINATION bin)
