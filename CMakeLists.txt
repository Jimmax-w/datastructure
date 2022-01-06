cmake_minimum_required(VERSION 3.21)
project(datastructure)

set(CMAKE_CXX_STANDARD 17)

include_directories(btree)

add_executable(datastructure
        btree/traverseBtree.cpp
        btree/traverseBtree.h
        btree/btree.cpp
        btree/btree.h
        main.cpp)
