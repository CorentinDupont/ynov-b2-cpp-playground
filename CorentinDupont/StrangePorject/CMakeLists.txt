cmake_minimum_required(VERSION 3.9)
project(StrangePorject)

set(CMAKE_CXX_STANDARD 11)

add_executable(StrangePorject main.cpp Game.cpp Game.h cmake-build-debug/Player.cpp cmake-build-debug/Player.h cmake-build-debug/Direction.cpp cmake-build-debug/Direction.h)