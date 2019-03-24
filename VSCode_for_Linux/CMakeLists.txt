cmake_minimum_required(VERSION 2.8)

project(mytest)

# 编译选项 Debug模式
add_definitions("-Wall -g") 
set (CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -g")

# 选择g++11编译器
if(CMAKE_COMPILER_IS_GNUCXX)
    set(CMAKE_CXX_FLAGS "-std=c++11 ${CMAKE_CXX_FLAGS}")
    message(STATUS "optional:-std=c++11")   
endif(CMAKE_COMPILER_IS_GNUCXX) 

# 代码路径
aux_source_directory(. DIR_TOOT_SRCS)

add_executable(test ${DIR_TOOT_SRCS})