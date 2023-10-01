cmake_minimum_required(VERSION 3.5)

project(assignment3_6__2_QC LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES main.cpp counter.cpp)
set(HEADERS counter.h)

add_executable(assignment3_6__2_QC ${SOURCES} ${HEADERS})
