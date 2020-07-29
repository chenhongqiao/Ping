cmake_minimum_required(VERSION 3.16)
project(Ping)

set(CMAKE_CXX_STANDARD 14)

add_executable(Ping main.cpp streamop.h streamop.cpp message.h message.cpp streamio.h streamio.cpp)