cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(SuperPointPretrainC++)

set(CMAKE_PREFIX_PATH "/home/robin/libtorch")
find_package(Torch REQUIRED)
find_package( OpenCV REQUIRED )

include_directories( ${OpenCV_INCLUDE_DIRS})    
add_executable(SuperPointPretrainC++ SuperPointPretrainC++.cpp)
target_link_libraries(SuperPointPretrainC++ "${TORCH_LIBRARIES}")
target_link_libraries(SuperPointPretrainC++ ${OpenCV_LIBS})
set_property(TARGET SuperPointPretrainC++ PROPERTY CXX_STANDARD 14)


