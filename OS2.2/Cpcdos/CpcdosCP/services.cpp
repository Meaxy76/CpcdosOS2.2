#include <string>
#include <string.h>
#include <iostream>
#include <unistd.h>
#include "../include/ccp_func.h"
#include "../include/cpcdos.h"
#include "../include/debug.h"
using namespace std;

namespace SVC_CPC {
    int CpcSleep(unsigned int tms){
        return usleep(tms * 1000);
    }

    /* Get time value */

	int GetTime(int mode){
	
   		// current date/time based on current system
      		time_t rawtime;

     		struct tm *info;
    		char buffer[80];
    		time( &rawtime );
    		info = localtime( &rawtime );

    		switch(mode){
    			case 12:
    				std::cout << "12 hours selected" << std::endl;

        			strftime(buffer,80,"%I:%M%p", info);
         			std::cout << buffer << std::endl;
    				return 0;
      			case 24:
      				std::cout << "24 hours selected" << std::endl;	
    			
          			strftime(buffer,80,"%H:%M", info);
          			std::cout << buffer << std::endl;
          			return 0;
    		}
    	}
}