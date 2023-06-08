
#include <iostream>
#include <stdio.h>
#include <cstring> 	
#include <unistd.h>
#include <stdlib.h>
#include "../include/debug.h"
#include "../include/CpcdosCP.h"

#include "../include/cpcdos.h"

#include "../../CPinti/include/core.h"

using namespace std;
#include "../include/system.h"



int debugstate = NULL;
void __CPCDOS_INIT_1(char* argcpc){

    CpcDebug("Cpcdos OS2.2 is starting...", 4, 3);

    
		/*' Mettre a jour les disques presents
		CPCDOS_INSTANCE.SYSTEME_INSTANCE.update_drives()

		' Afficher les disques presents
		CPCDOS_INSTANCE.SYSTEME_INSTANCE.Display_all_drives()*/

        
		/*ZERO_FILL = String(128, 0)
		
		' Definir repertoires
		CPCDOS_INSTANCE._REPERTOIRE_EXEC = ExePath & "\"
		CPCDOS_INSTANCE._REPERTOIRE_NOYAU = Curdir & "\"*/
    /*DOSBOX OPTIONS*/
    if(strcmp(argcpc, "/DOSBOX") == 0){
        CpcDebug("Dosbox mode", 1, 1);
    }
    if(strcmp(argcpc, "/DEFAULT") == 0){
        CpcDebug("No argument, loading in default mode", 1, 1);
    }
    if(strcmp(argcpc, "/NONET") == 0){
        CpcDebug("NONET Mode", 1, 1);
    }
    if(strcmp(argcpc, "/NONETWORK") == 0){
        CpcDebug("No network mode", 1, 1);
    }

    /*DEBUG OPTIONS*/
    if(strcmp(argcpc, "/NODBG") == 0){
        debugstate = 1;
        CpcDebug("No debug", 1, debugstate);
        cout << "No debug mode" << endl;
    }
    if(strcmp(argcpc, "/LOG") == 0){
        debugstate = 3;
        CpcDebug("Text log mode", 1, debugstate);
    }
    if(strcmp(argcpc, "/LOGALL") == 0){
        debugstate = 2;
        CpcDebug("File log and text", 1, debugstate);
    }
    if(strcmp(argcpc, "/NOGUI") == 0){
        CpcDebug("Console only mode", 1, 1);
    }

    //cout << "cpinti.task_manager.init_multitask()" << endl;

    
	/*' Mettre a jour les informations de CPU
	
    Update_CPUINFO()*/
    
    CpcDebug("Update_CPUINFO", 1, debugstate);
	sleep(1); // ' Laisser l'utilisateur visualiser
		
	//	' Mettre a jours les informations BIOS APM
	//	Maj_APM_info()
    
    CpcDebug("Update_APM_Info", 1, debugstate);
	sleep(1); // ' Laisser l'utilisateur visualiser*/
    CpcDebug("Init Multitask ...", 1, debugstate);
    bool testMT;
    //testMT = cpinti::task_manager::initialiser_Multitache();
    //if(testMT == true){
    //    CpcDebug("done ...", 1, debugstate);
    //} else { 
    //    CpcDebug("Multitask not loaded", 1, debugstate);
    //}



    //_CPC_SCI();

    
	//' Cette procedure SUB permet d'afficher le logo cpcdos et reste en pause 1 seconde
	cout << "                                                         " << endl;
	cout << "	  _____              _____            			 " << endl;
	cout << "	 / ____|            |  __ \\           			 " << endl;
	cout << "	| |     _ __   ___  | |  | | ___  ___ 			 " << endl;
	cout << "	| |    | '_ \\ / __| | |  | |/ _ \\/ __|			 " << endl;
	cout << "	| |____| |_) | (__  | |__| | (_) \\__ \\			 " << endl;
	cout << "	 \\_____| .__/ \\___| |_____/ \\___/|___/			 " << endl;
	cout << "	       | |                            			 " << endl;
	cout << "	       |_|    						             " << endl;
	cout << "								                     " << endl;
	cout << "    CPCDOS OSx                                    " << endl;
	cout << "                       Cree pour concevoir des OS " << endl;
	cout << "                            Created to develop OS " << endl;
	cout << " Version :                                        " << endl;
	cout << "  - Date        : " << _VERSION_DATEV << endl;
	cout << "  - Kernel base : OS" << _MAJOR_VERSION << endl;
	cout << "  - CPinti core : " << _VERSION_CPINTI << endl;
	cout << "  - CpcdosC+    : " << _VERSION_CCP << endl;               
	cout << "  - SCI & ElieDraw   : " << _VERSION_SCI << " & " << _VERSION_ELIEDRAW << endl;     
	sleep(3); // ' Laisser l'utilisateur visualiser*/

    Generate_id_kernel();
    CpcDebug("The system is correctly started", 1, debugstate);

}
namespace cpc_init {
    
    int cpcdos_loader(char *s){
        CpcDebug("Cpcdos entry point", 4, 3);
        __CPCDOS_INIT_1(s);
		unsigned long CMD_PID;
        unsigned long CMD_TID;
        //CMD_PID = cpinti::task_manager::ajouter_Processus("CpcdosC+ Console");
        /*CMD_TID = cpinti::task_manager::ajouter_Thread(cmdloop, "CpcdosC+ Console", CMD_PID, 2, 0);
        cpinti::task_manager::SAUVEGARDER_CONTEXTE(CMD_TID);
        cout << CMD_TID;
        cpinti::task_manager::RESTAURER_CONTEXTE(CMD_TID);*/
        CpcdosCP_Shell("exe/ KRNL/KRNL.CPC");

        cmdloop();
       
        return 0;
    }
}
