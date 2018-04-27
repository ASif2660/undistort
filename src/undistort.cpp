#include "undistort.h"






void cameraCheck(cv::VideoCapture& cap){
	
	try {
	
	if(!cap.isOpened()){
		
	std::cout << " Cannot open the camera " << std::endl;	
		
	throw ("Exception: cannot proceed, please check your camera ");
	
	}
}
	catch( std::string e ){   // check the string e  later ? 
		
		std::cout <<  e <<  std::endl;
	}	
	
      

}



void captureImages( cv::VideoCapture& cap, size_t ImageCount, imageVector& images) {
	
	
	cv::Mat frame; 
	for(size_t i = 0; i <ImageCount; i++ ){
		cap >> frame; //gets the frame from camera 
		cv::imshow("Image", frame);
		cv::waitKey(1);
		

	}
}
	
	
