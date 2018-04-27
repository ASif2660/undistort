/*Developed by Mohammed Asif Chand 
 * 27-02-2018 
 */
 
 
 
//main program
#include <iostream>
#include "undistort.h"
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/videoio/videoio.hpp>
#include <opencv2/core/core.hpp>

//#define TEGRA 1




int main(int argc, char* argv[]){
		
	//define varibles at runtime 
	#if CAMERA 
	cv::VideoCapture cap(0); 	//Open the default camera 
	cameraCheck(cap);
	
	
	#elif TEGRA
	const char* src = "nvcamerasrc ! video/x-raw(memory:NVMM), width=(int)1280, height=(int)720, format=(string)I420, framerate=(fraction)120/1 ! nvvidconv flip-method=6 ! video/x-raw, format=(string)BGRx ! \
			videoconvert ! video/x-raw, format=(string)BGR ! appsink";

	std::string run(src);
	std::cout << "We are running the command "<< run << std::endl;
	std::cout << " This should ideally work for OpenCV 3+ with gstreamer support " << std::endl;
	cv::VideoCapture cap;
	cap.open(src);
	cameraCheck(cap);
	
	#elif ROS_C
	
	std::cout << " ROS support is enabled " << std::endl;
	
	// TODO: capture video from publisher  
	
	
	#endif //device or method to capture the videos 
	
	
	
	// we will capture from AVI file directly
	
	const std::string AVIFileName = argv[1];
	cv::VideoCapture cap;
	cap.open(AVIFileName);
	cameraCheck(cap);
	
	
	cv::Mat frame;
	for(;;){
		
		cap >> frame;
		if( frame.empty()) break;
		cv::imshow( "Displaying image", frame );
		if( cv::waitKey(33) >= 0) break;
	}	
		
		
		
		
	
	
	
	
	
	
	
	
	
	
	
	
		
	
	
	
return 0;
	
	
		
	
	
}
