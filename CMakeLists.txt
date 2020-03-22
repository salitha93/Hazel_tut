cmake_minimum_required(VERSION 3.17)
project(Hazel VERSION 1.0.0)

add_library(
sayHello
Hello.hpp
Hello.cpp
)

add_executable(hazel main.cpp Hello.cpp)

target_link_libraries(hazel PRIVATE sayHello)
