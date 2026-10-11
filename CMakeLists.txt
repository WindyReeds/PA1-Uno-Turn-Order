cmake_minimum_required(VERSION 3.26)
project(PA1_Uno_Turn_Order)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(PA1_Uno_Turn_Order
        main.cpp
        ArrayList.h
        Data.h
        LinkedList.h
        List.h
        Node.h
        Player.h)
