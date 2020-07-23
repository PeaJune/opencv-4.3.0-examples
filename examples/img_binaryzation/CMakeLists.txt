cmake_minimum_required( VERSION 2.8 )
set( CMAKE_CXX_FLAGS "-std=c++11 -fPIC -O3 -Wall -fno-aggressive-loop-optimizations -ffunction-sections -fdata-sections" )
#set( CMAKE_CXX_FLAGS "--std=c++11" )


set(PROJECT_NAME "img_binaryzation")


include_directories(
${CMAKE_SOURCE_DIR}/include/opencv4/
)

set(SRC
${CMAKE_SOURCE_DIR}/examples/img_binaryzation/img_binaryzation.cpp
)

link_directories(${CMAKE_SOURCE_DIR}/lib)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/examples/img_binaryzation)
set(OPENCVLIBS libopencv_core.so libopencv_highgui.so libopencv_imgcodecs.so libopencv_imgproc.so libopencv_videoio.so libopencv_features2d.so)
add_executable(${PROJECT_NAME} ${SRC})

target_link_libraries(${PROJECT_NAME} ${OPENCVLIBS})
