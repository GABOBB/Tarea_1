cmake_minimum_required(VERSION 3.28)
project(sorter)

set(CMAKE_CXX_STANDARD 17)

add_executable(sorter main.cpp
        QS.cpp
        QS.h
        BS.cpp
        BS.h
        MM.cpp
        MM.h
        IS.cpp
        IS.h)
