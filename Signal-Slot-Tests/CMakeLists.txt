cmake_minimum_required(VERSION 3.5)

project(example LANGUAGES CXX)

find_package(Qt5 REQUIRED COMPONENTS Widgets)

add_executable(example Signal-Slot-Tests.cpp)
target_link_libraries(example Qt5::Widgets)

