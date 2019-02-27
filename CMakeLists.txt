cmake_minimum_required(VERSION 3.2)
PROJECT(Test)

ADD_EXECUTABLE(${PROJECT_NAME} mappath.cpp)

#find_package(Threads)
#TARGET_LINK_LIBRARIES(${PROJECT_NAME} ${CMAKE_THREAD_LIBS_INIT})