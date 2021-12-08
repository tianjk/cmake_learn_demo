#cmake_minimum_required(VERSION 3.16)
#project(demo2)
#include_directories(/home/tjk/CLionProjects/cmake_demo/demo2/include)
#
#add_executable(demo_2 main.cpp src/say_hello.cpp)
cmake_minimum_required(VERSION 3.16)
project(demo2)
include_directories(/home/tjk/CLionProjects/cmake_demo/demo2/include)
file(GLOB src_all src/*.cpp)
add_executable(demo_2 main.cpp ${src_all})
cmake_minimum_required(VERSION 3.16)
project(demo2)
set(CMAKE_CXX_STANDARD 11)

include_directories(/home/tjk/CLionProjects/cmake_demo/demo2/include)
aux_source_directory(/home/tjk/CLionProjects/cmake_demo/demo2/src SRC_ALL)

add_executable(demo_2 main.cpp ${SRC_ALL})