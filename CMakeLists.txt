cmake_minimum_required( VERSION 3.1 )
# initial support only for CPU/ to be extended to GPU in future 

project( package_undistort )


#find packages

find_package( OpenCV REQUIRED )

#craete libraries 


#create target libs 



#creating executable targets
add_executable (undistort src/main.cpp )

target_link_libraries( undistort ${OpenCV_LIBS} ) # JTx2 supports 2.4.x series 







