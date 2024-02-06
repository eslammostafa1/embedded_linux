cmake_minimum_required(VERSION 3.22)
project(introCmake VERSION 1.2)
set(SRC_FILE 
    main.cpp 
    src/sum.cpp)
# or 
# set(SRC_FILE "main.cpp;src/sum.cpp")
message(STATUS "source files is ${SRC_FILE}") # WARNING FATAL_ERROR 

if(EXISTS ${CMAKE_SOURCE_DIR}/main.cpp)
    message(STATUS "file ${CMAKE_SOURCE_DIR}/main.cpp exists.")  
else()
    message(FATAL_ERROR "file ${CMAKE_SOURCE_DIR}/main.cpp not exists.")  
endif()

add_subdirectory(${CMAKE_SOURCE_DIR}/lib)
add_executable(a.exe ${SRC_FILE})
target_include_directories(a.exe PUBLIC include/ lib/) # for header files 
target_link_libraries(a.exe PUBLIC WIFI_LIB )  # because link library get WIFI_LIB from lib/CMakeLists.txt add_library function

message(STATUS "CMAKE_SOURCE_DIR is ${CMAKE_SOURCE_DIR}")  
message(STATUS "CMAKE_CURRENT_SOURCE_DIR is ${CMAKE_CURRENT_SOURCE_DIR}")  

message(STATUS "CMAKE_SOURCE_DIR is ${CMAKE_BINARY_DIR}")  
message(STATUS "CMAKE_CURRENT_SOURCE_DIR is ${CMAKE_CURRENT_BINARY_DIR}")  

message(STATUS "CMAKE_GENERATOR is ${CMAKE_GENERATOR}")  

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED true)

message(STATUS "CMAKE_CXX_STANDARD is ${CMAKE_CXX_STANDARD}")  
message(STATUS "CMAKE_CXX_STANDARD_REQUIRED (TRUE / FALSE) is ${CMAKE_CXX_STANDARD_REQUIRED}")  

set(p $ENV(PATH))
message(${p})
message(STATUS "PATH : $ENV{PATH}")

# on terminal 
# cmake .. -DCMAKE_CXX_STANDARD=17

set(PRODUCT_YEAR "2024")
configure_file(defaultconfig.h.in defaultconfig.h)
target_include_directories(a.exe PUBLIC ${PROJECT_BINARY_DIR})

if(DEBUG)    # while compile make file   => make .. -DEBUG=1
    set(DEBUGINFO " AUTHER ESLAM MOSTAFA")
endif()

