cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(Pellarudo VERSION 0.1 LANGUAGES CXX)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

enable_testing()
add_subdirectory("googletest")
add_subdirectory("pellarudo")
