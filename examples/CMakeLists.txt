cmake_minimum_required( VERSION 2.8 )
set( CMAKE_CXX_FLAGS "-std=c++11 -fPIC -O3 -Wall -fno-aggressive-loop-optimizations -ffunction-sections -fdata-sections" )
#set( CMAKE_CXX_FLAGS "--std=c++11" )



add_subdirectory(img_show)
add_subdirectory(img_resize)
add_subdirectory(img_binaryzation)
add_subdirectory(img_hog)

add_subdirectory(img_histogram)

add_subdirectory(img_face)
add_subdirectory(img_gradient)