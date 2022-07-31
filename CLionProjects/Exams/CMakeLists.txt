cmake_minimum_required(VERSION 3.22)
project(Exams)

set(CMAKE_CXX_STANDARD 14)

add_executable(Exams main.cpp dist2furthest_treasure.cpp dist2furthest_treasure.h utils.h Pos.h peaceful_kings.cpp peaceful_kings.h utils.cpp)
