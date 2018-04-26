#ifndef _UNDISTORT_H_
#define _UNDISTORT_H_
#include <iostream>

//method to read image file
// TODO: extend this to ROS in future



static void help(){
	
	std::cout << " This program doesn't do anything special \n" <<
		   " It basically undistorts the image with parameters and aids in creation of dataset \n" <<
	std::endl;
	
	
}

void cameraCheck (cv::VideoCapture& cap);









#endif //undistort
