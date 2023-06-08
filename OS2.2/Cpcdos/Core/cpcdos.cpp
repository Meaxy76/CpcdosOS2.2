#include <string>
#include<fstream>
#include<sstream>
#include<iostream>
#include <cstring>
#include <string>

#include <stdio.h>
#include <stdlib.h>
#include <map>

#include "../include/debug.h"
#include "../include/cpcdos.h"
#include "../../CPinti/include/IO.h"
#include "../include/system.h"
#include "../include/ccp_func.h"

std::map<std::string, std::string > cpcdos_oslist;
_STRUCT_THREAD_Cpcdos_OSx__ STCDOSX;
std::string Cpcdos_Update_OS_list(){

    
    const char *OS_LIST = "OS/OS.LST";

    CpcDebug("[Cpcdos] Updating informations about installed OS  ...", 1, debugstate);

    std::ifstream file(OS_LIST);


    int OSPos = 0;
    std::string ACTOS;
    std::string OSName;
    std::string line;    
    while (std::getline(file, line)) {
        //std::cout << line << std::endl;
        if(instrcpc(ucase(line), ":") > 0){
            OSName = rtrim(line, ":");
            std::cout << OSName << std::endl;
            cpcdos_oslist[ucase(OSName)] = OSName;
            OSPos++;
        }
        if(OSPos == 1){
            ACTOS = OSName;
        }
    }


    
    CpcDebug("[Cpcdos] Updating finished ...", 1, debugstate);

    return ACTOS;
}

std::string switchcpc_os(std::string name){
    return cpcdos_oslist[ucase(name)];
}

int CpcdosCP_cpc_load(std::string cmd){
    

    return 0;
}

double Generate_RND(int start, int end){
    return (rand() % end) * (end - start) + start;
}

int Generate_id_kernel(){
    //_STRUCT_THREAD_Cpcdos_OSx__->KERNEL_ID = 0;
    STCDOSX.KERNEL_ID = int(Generate_RND(1,15));
    printf("%d", STCDOSX.KERNEL_ID);
    return 0;
}

double Generate_key_lvl_1(){
    return 0;
}

double Generate_key_lvl_2(){
    return 0;
}

double Generate_key_lvl_3(){
    return 0;
}

double Generate_key_lvl_4(){
    return 0;
}

double Generate_key_lvl_5(){
    return 0;
}
