cmake_minimum_required(VERSION 3.23)
project(RSA_Encryption)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(RSA_Encryption
        main.cpp
        main.h
        rsa.cpp
        main_functions.cpp
        )