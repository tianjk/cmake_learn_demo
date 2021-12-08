#cmake_minimum_required(VERSION 3.16)
#project(demo2)
#
#include_directories(/home/tjk/CLionProjects/cmake_demo/demo2/include)

#add_executable(demo2 main.cpp src/say_hello.cpp)

cmake_minimum_required(VERSION 3.16)
project(demo2)

include_directories(/home/tjk/CLionProjects/cmake_demo/demo2/include)
set(SOURCE "src/say_hello.cpp" "main.cpp")
add_executable(demo2 ${SOURCE})