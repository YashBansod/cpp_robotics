cmake_minimum_required(VERSION 3.15)
project(graph_sandbox)

set(CMAKE_CXX_STANDARD 17)

include_directories(${CMAKE_SOURCE_DIR})

set(BOOST_ROOT "/home/yashb/cpp_libs/boost_1_75_0")

find_package(Boost 1.75.0 COMPONENTS graph REQUIRED)
INCLUDE_DIRECTORIES( ${Boost_INCLUDE_DIR} )

add_executable(adj_list_basics_1 adj_list_basics_1.cpp)

add_executable(adj_list_basics_2 adj_list_basics_2.cpp)

add_executable(adj_list_basics_3 adj_list_basics_3.cpp)