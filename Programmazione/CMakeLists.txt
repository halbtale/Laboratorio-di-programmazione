cmake_minimum_required(VERSION 3.28)
project(Programmazione)

set(CMAKE_CXX_STANDARD 11)

add_executable(Script1 script1.cpp)
add_executable(Script2 script2.cpp)
add_executable(Script3 script3.cpp
        Complex.cpp
        Complex.h)
add_executable(Script4 script4.cpp
        Vector.cpp
        Vector.h)
add_executable(Script8 script8.cpp
        Point.cpp
        Point.h
        Shape.cpp
        Shape.h
        Circle.cpp
        Circle.h)
