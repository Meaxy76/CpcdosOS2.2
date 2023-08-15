#ifndef _CPCDOS_API_H_
#define MAJ_VER 1
#define MIN_VER 0
#define PATCH_VER 0

#include <tuple>
#include <string>
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstring>
#include <cctype>
// #include <unistd.h>
#include <algorithm>

/*
==============================================
=== CPCDOS C++ API
=== WRITE BY CHRAPATI AND IPLUX
==============================================
=== CPCDOSAPI.H
==============================================
=== In this file, we set a possibility
=== to use Cpcdos OSx co-kernel features
=== in C++ for ehanced developpers.
==============================================
=== NO WARANTY TO GET A STABLE PROGRAM DURING
=== THE FIRST TRY!
==============================================
*/

namespace CpcdosAPI 
{
    // SHELL FUNCTIONS
    void terminal_print(std::string str);

    // CPCDOS VARIABLES

    // GETTERS
    void get_cpuid();
    void get_ram();
    void get_hour();
    void get_date();
    void get_globalTime();
    void get_processList();
    void get_threadList();

    // SETTERS
    void set_activeOS(std::string active_os);
    
    // THREADS AND PROCESS

    // CREATING
    void create_newThread(std::string threadTID, std::string parent_process);
    void create_newProcess(std::string processPID);
}


#endif

