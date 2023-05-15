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

    FILE *fptr;
    
    CpcDebug("[Cpcdos] Updating informations about installed OS  ...", 1, debugstate);

    std::ifstream in_file(OS_LIST, std::ios::binary);
    in_file.seekg(0, std::ios::end);
    unsigned long file_size = in_file.tellg();

    int s(1);
    int total = s * file_size;
    std::string temp_str;
    temp_str.push_back(total);
    char *result = (char*) temp_str.c_str();
    
	std::string file_buffer = cpinti::file_manager::Read_file_full(OS_LIST, "rb", result, file_size);

    int OSPos = 0;
    std::string ACTOS;
    std::string OSName;
    std::istringstream f(file_buffer);
    std::string line;    
    while (std::getline(f, line)) {
        //std::cout << line << std::endl;
        if(instr(ucase(line), ":") > 0){
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
    
    const char *CPCPROG = cmd.c_str();
    
    CpcDebug("Opening file  ...", 1, debugstate);
    
    std::ifstream in_file(CPCPROG, std::ios::binary);
    in_file.seekg(0, std::ios::end);
    unsigned long file_size = in_file.tellg();
    int sa(1);
    int total1 = sa * file_size;
    std::string s2 = std::to_string(file_size);

    std::string temp_str2;
    temp_str2.push_back(total1);
    char *result2 = (char*) temp_str2.c_str();
    
	std::string file_buffer2 = cpinti::file_manager::Read_file_full(CPCPROG, "rb", result2, file_size);
    Cpc_Interpreter(file_buffer2);

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