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
}