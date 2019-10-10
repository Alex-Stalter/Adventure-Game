cmake_minimum_required(VERSION 3.14)
project(Adventure_Game)

set(CMAKE_CXX_STANDARD 17)

add_executable(Adventure_Game main.cpp Run.cpp Run.h Player.cpp Player.h Room.cpp Room.h Map.cpp Map.h)