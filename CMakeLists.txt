cmake_minimum_required(VERSION 3.14)
project(Data_Algo)

set(CMAKE_CXX_STANDARD 17)

add_executable(Data_Algo main.cpp algorithms/SearchAlgorithms.cpp algorithms/SearchAlgorithms.h algorithms/SortAlgorithms.cpp algorithms/SortAlgorithms.h algorithms/MathAlgorithms.cpp algorithms/MathAlgorithms.h)