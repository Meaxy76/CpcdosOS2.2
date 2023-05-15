#include <string>
#include <string.h>
#include <iostream>
#include <map>
#include "../include/ccp_func.h"
#include "../include/cpcdos.h"
#include "../include/debug.h"
#include "../include/variables.h"
using namespace std;

namespace CPCVAR {

    map<string, string > cpcdos_varmap;
    /* Read and parse variable */
    string CCP_Read_Var(string name){

        string value = Search_function_var(name, 1111);
        if(strcmp(value.c_str(), "#NULL") == 0){
            return cpcdos_varmap[name];
        } else {
            return value;

        }
    }

    /* Define variable */
    int Define_CCP_Var(string name, string content){
        if(name == "SCR_IMG"){
            SCR_IMG = content;
        } else if(name == "SCR_RES"){
            SCR_RESOLUTION = content;
        } else {
            cpcdos_varmap[name] = content;
        }
        return 0;

    }
    /* Look for System only var*/
    string Search_function_var(string var, double _KEY_){

        // Cpcdos Variable //
        
        if(var == "CPC.VER"){
            string version = _MAJOR_VERSION;
            return version;
        } else if(var == "ELIEDRAW.VER"){
            string version = _VERSION_ELIEDRAW;
            return version;
        } else if(var == "CPINTI.VER"){
            string version = _VERSION_CPINTI;
            return version;
        } else if(var == "SCI.VER"){
            string version = _VERSION_SCI;
            return version;
        } else if(var == "STATE.VER"){
            string version = _STATE_VERSION;
            return version;
        } else if(var == "DATE.VER"){
            string version = _VERSION_DATEV;
            return version;
        } else if(var == "ELIEDRAW.VER"){
            string version = _VERSION_ELIEDRAW;
            return version;
        } else if(var == "SCR_IMG"){
            return SCR_IMG;
        } else if(var == "SCR_RES"){
            return SCR_RESOLUTION;
        } else {
            return "#NULL";

        }
    }
    //else if (CCP_Read_Var(var) != "#NULL"){
    //        string var2show;
    //        return var2show;
    //    } 

    /* Look if the var exist in the system*/
    double CCP_Check_var_exist(){

        return 0;

    }

        
    string CCP_Var_manager_main(string name, string content){
        //cout << name << " = " << content << endl;
        Define_CCP_Var(name, content);
        return "ok";
    }

}
