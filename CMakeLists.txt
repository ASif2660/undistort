cmake_minimum_required( VERSION 3.1 )
# initial support only for CPU/ to be extended to GPU in future 

project( package_undistort )

#compact
if(WIN32)
  set(OpenCV_DIR "d:/libs/opencv-2.4.8/build")
else()
  set(OpenCV_DIR "/usr/local/lib/opencv") 
endif()


#find packages

find_package( OpenCV REQUIRED )

#library undistort 

add_library(undistortLib STATIC src/undistort.cpp )

target_include_directories (undistortLib PUBLIC include ${OpenCV_INCLUDE_DIR} )

target_link_libraries(undistortLib ${OpenCV_LIBS})


#library device 

#add_library( deviceTypeLib STATIC src/deviceType.cpp)

#target_include_directories( deviceTypeLib PUBLIC include )

#target_link_libraries( deviceTypeLib ) 





#creating executable targets
add_executable (undistort src/main.cpp )

target_link_libraries( undistort undistortLib ${OpenCV_LIBS} ) # JTx2 supports 2.4.x series 


file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/src/drop.avi
     DESTINATION ${CMAKE_CURRENT_BINARY_DIR})




