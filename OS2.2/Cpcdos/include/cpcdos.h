#define _CPCDOS_CREATOR "FAVIER Sebastien"
#define _CPCDOS_OS22_CREATOR "Kusama Meaxy"

// Cpcdos versions
#define _VERSION_DATEV "01-04-2023"
#define _BUILD_VERSION "2023040121"
#define _MAJOR_VERSION "2.2"
#define _STATE_VERSION "HotRelease"
//#define _STATE_VERSION "Public"

#define _VERSION_CPINTI "4.1"
#define _VERSION_CCP "3.1"
#define _VERSION_SCI "1.0"
#define _VERSION_ELIEDRAW "1.1"

#define _MINOR_VERSION "Alpha 0.3.1"
//#define _MINOR_VERSION "Beta 1.0"

#include <string>


std::string Cpcdos_Update_OS_list();
int CpcdosCP_cpc_load(std::string cmd);
int Cpc_Interpreter(std::string fb2);
std::string switchcpc_os(std::string name);
int Generate_id_kernel();


namespace CPCVAR {
    std::string CCP_Read_Var(std::string name);
    std::string CCP_Var_manager_main(std::string name, std::string content);
    int Define_CCP_Var(std::string name, std::string content);

    std::string Search_function_var(std::string var, double _KEY_);

}