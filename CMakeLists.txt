cmake_minimum_required(VERSION 3.5)
project(GTGeneralLogSystem)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp GTGeneralLogSystem.h)

link_directories(${PROJECT_SOURCE_DIR}/lib)

add_executable(GTGeneralLogSystem ${SOURCE_FILES})
target_link_libraries(GTGeneralLogSystem GTGeneralLogSys)