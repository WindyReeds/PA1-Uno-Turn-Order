cmake_minimum_required(VERSION 4.3)
project(PA1_Uno_Turn_Order)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)

add_executable(PA1_Uno_Turn_Order main.cpp
        ArrayList.h
        Data.h
        LinkedList.h
        List.h
        Node.h
        Player.h)
