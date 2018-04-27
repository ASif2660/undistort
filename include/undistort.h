#ifndef _UNDISTORT_H_
#define _UNDISTORT_H_
#include "opencv2/opencv.hpp"
#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/videoio/videoio.hpp>
#include <opencv2/core/core.hpp>
#include <iostream>

//method to read image file
// TODO: extend this to ROS in future


typedef std::vector<std::vector <cv::Mat> > imageVector; 
static void help(){
	
	std::cout << " This program doesn't do anything special \n" <<
		   " It basically undistorts the image with parameters and aids in creation of dataset \n" <<
	std::endl;
	
	
}

void cameraCheck (cv::VideoCapture& cap);

void captureImages( cv::VideoCapture& cap, size_t ImageCount, imageVector& images) ;










#endif //undistort
