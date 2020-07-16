cmake_minimum_required( VERSION 2.8 )
set( CMAKE_CXX_FLAGS "-std=c++11 -fPIC -O3 -Wall -fno-aggressive-loop-optimizations -ffunction-sections -fdata-sections" )
#set( CMAKE_CXX_FLAGS "--std=c++11" )



add_subdirectory(examples)