#include "undistort.h"
#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/videoio/videoio.hpp>
#include <opencv2/core/core.hpp>



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

