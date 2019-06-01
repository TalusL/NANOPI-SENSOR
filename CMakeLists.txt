cmake_minimum_required(VERSION 3.5)
project(Main)

include_directories(PCA9685/include)
include_directories(MotionSensor)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(MotionSensor)
add_subdirectory(PCA9685)

add_executable(Main main.cpp)
target_link_libraries(Main  PCA9685 MotionSensor)







