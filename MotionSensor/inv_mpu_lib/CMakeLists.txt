include_directories(./)

add_library(inv_mpu_lib I2Cdev.cpp inv_mpu.cpp inv_mpu_dmp_motion_driver.cpp )
target_link_libraries(inv_mpu_lib)