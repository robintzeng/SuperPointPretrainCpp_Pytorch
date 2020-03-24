cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(SuperPointPretrain)

set(CMAKE_PREFIX_PATH "/home/robin/libtorch")
find_package(Torch REQUIRED)
find_package( OpenCV REQUIRED )

include_directories( 
${OpenCV_INCLUDE_DIRS}
${PROJECT_SOURCE_DIR}/include
)
add_library(${PROJECT_NAME}
src/SPextractor.cc
src/SuperPoint.cc
)
target_link_libraries(${PROJECT_NAME}
${TORCH_LIBRARIES}
${OpenCV_LIBS}
${EIGEN3_LIBS}
)
add_executable(SuperPointPretrainC++ SuperPointPretrainC++.cpp)
target_link_libraries(SuperPointPretrainC++ ${PROJECT_NAME})

target_link_libraries(SuperPointPretrainC++ "${TORCH_LIBRARIES}")
target_link_libraries(SuperPointPretrainC++ ${OpenCV_LIBS})

set_property(TARGET SuperPointPretrainC++ PROPERTY CXX_STANDARD 14)


