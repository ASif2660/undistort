#ifndef _DEVICETYPE_H
#define _DEVICETYPE_H

#include <iostream>
#include <fstream>
#include <string>



/*Looks for device type taking the output from shell script
 *compatible with TX2, TK1, TX1
 * runs the script of dev.sh
 */
 
 
class DeviceType{
	
	public:
	
	void createScript();
	void runScript();
	
	


       private:
	std::string _DeviceName; 
	bool THROW_ERROR; 

};



#endif //device type
