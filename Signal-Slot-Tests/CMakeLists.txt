cmake_minimum_required(VERSION 3.5)

project(Signal-Slot-Tests LANGUAGES CXX)

find_package(Qt5 REQUIRED COMPONENTS Widgets)

add_executable(Signal-Slot-Tests Signal-Slot-Tests.cpp)
target_link_libraries(Signal-Slot-Tests Qt5::Widgets)

