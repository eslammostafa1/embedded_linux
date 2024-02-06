cmake_minimum_required(VERSION 3.22)
project(introCmake)
set(SRC_FILE 
    main.cpp 
    src/sum.cpp)
message(STATUS "source files is ${SRC_FILE}") # WARNING FATAL_ERROR 
message(STATUS "CMAKE_CURRENT_SOURCE_DIR is ${CMAKE_SOURCE_DIR}")  
add_executable(a.exe ${SRC_FILE})

if(EXISTS ${CMAKE_SOURCE_DIR}/main.cpp)
    message(STATUS "file ${CMAKE_SOURCE_DIR}/main.cpp exists.")  
else()
    message(FATAL_ERROR "file ${CMAKE_SOURCE_DIR}/main.cpp not exists.")  
endif()

target_include_directories(a.exe PUBLIC include/) # for header files 
