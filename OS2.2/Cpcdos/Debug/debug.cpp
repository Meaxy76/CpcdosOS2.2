#include "../include/debug.h"
#include <conio.h>
#include <iostream>
#include <time.h>
#include <fstream>
#define SYSDEBUG false

const std::string DebugFileName = "debug.log";
std::ofstream Logfile("debug.log");
void Log(const char * format, ...)
{

}

    // Get current date/time, format is YYYY-MM-DD.HH:mm:ss
const std::string CurrentDateTime() {
    time_t     now = time(NULL);
    struct tm  tstruct;
    char       buf[80];
    localtime(&now);
    strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);
    return buf;
}
// CpcDebug(sMessage, type, arg)
/*
    Si nodbg au demarrage alors arg retourne aucun affichage 1
    si logall au demarrafe alors log + ecriture 2
    si log au demarrage alors log 3
    si sys/ /debug = 1 then log 4
    si sys/ /debug = 2 then log + ecriture 5

*/
int CpcDebug(const char *sMessage, int error_type, int state)
{
    if(state == 1){
        // we do nothing
        return 0;

    } else if(state = 2){        
        Logfile << "[CpcdosC+ Logger] : " << sMessage << std::endl;
        //Logfile.close();
        switch(error_type){
            case 1:
                textcolor(GREEN);
                cprintf("%s", sMessage);
                std::cout << "" << std::endl;
                break;
            case 2:
                textcolor(YELLOW);
                cprintf("%s", sMessage);
                std::cout << "" << std::endl;
                break;
            case 3:
                textcolor(RED);
                cprintf("%s", sMessage);
                std::cout << "" << std::endl;
                break;
            case 4:
                textcolor(LIGHTGRAY);
                cprintf("%s", sMessage);
                std::cout << "" << std::endl;
                break;
            default:
                textcolor(GREEN);
                cprintf("%s", sMessage);
                std::cout << "" << std::endl;
                break;
        }

    } else if(state = 3) {
        switch(error_type){
            case 1:
                textcolor(GREEN);
                cprintf("%s", sMessage);
                std::cout << "" << std::endl;
                break;
            case 2:
                textcolor(YELLOW);
                cprintf("%s", sMessage);
                std::cout << "" << std::endl;
                break;
            case 3:
                textcolor(RED);
                cprintf("%s", sMessage);
                std::cout << "" << std::endl;
                break;
            case 4:
                textcolor(LIGHTGRAY);
                cprintf("%s", sMessage);
                std::cout << "" << std::endl;
                break;
            default:
                textcolor(GREEN);
                cprintf("%s", sMessage);
                std::cout << "" << std::endl;
                break;

        } 
    } else if(state == 4){
        switch(error_type){
            case 1:
                textcolor(GREEN);
                cprintf("%s", sMessage);
                std::cout << "" << std::endl;
                break;
            case 2:
                textcolor(YELLOW);
                cprintf("%s", sMessage);
                std::cout << "" << std::endl;
                break;
            case 3:
                textcolor(RED);
                cprintf("%s", sMessage);
                std::cout << "" << std::endl;
                break;
            case 4:
                textcolor(LIGHTGRAY);
                cprintf("%s", sMessage);
                std::cout << "" << std::endl;
                break;
            default:
                textcolor(GREEN);
                cprintf("%s", sMessage);
                std::cout << "" << std::endl;
                break;
            

        } 
    } else if(state == 5){        
        Logfile << "[CpcdosC+ Logger] : " << sMessage << std::endl;
        //Logfile.close();
        switch(error_type){
            case 1:
                textcolor(GREEN);
                cprintf("%s", sMessage);
                std::cout << "" << std::endl;
                break;
            case 2:
                textcolor(YELLOW);
                cprintf("%s", sMessage);
                std::cout << "" << std::endl;
                break;
            case 3:
                textcolor(RED);
                cprintf("%s", sMessage);
                std::cout << "" << std::endl;
                break;
            case 4:
                textcolor(LIGHTGRAY);
                cprintf("%s", sMessage);
                std::cout << "" << std::endl;
                break;
            default:
                textcolor(GREEN);
                cprintf("%s", sMessage);
                std::cout << "" << std::endl;
                break;

        }
    }
    return 0;
}
int CpcPrompt(const char *sMessage, int color, int background)
{
        switch(color){
            case 0:
                textcolor(BLACK);
                cprintf("%s", sMessage);
                break;
            case 1:
                textcolor(BLUE);
                cprintf("%s", sMessage);
                break;
            case 2:
                textcolor(GREEN);
                cprintf("%s", sMessage);
                break;
            case 3:
                textcolor(CYAN);
                cprintf("%s", sMessage);
                break;
            case 4:
                textcolor(RED);
                cprintf("%s", sMessage);
                break;
            case 5:
                textcolor(MAGENTA);
                cprintf("%s", sMessage);
                break;
            case 6:
                textcolor(BROWN);
                cprintf("%s", sMessage);
                break;
            case 7:
                textcolor(LIGHTGRAY);
                cprintf("%s", sMessage);
                break;
            case 8:
                textcolor(DARKGRAY);
                cprintf("%s", sMessage);
                break;
            case 9:
                textcolor(LIGHTBLUE);
                cprintf("%s", sMessage);
                break;
            case 10:
                textcolor(LIGHTGREEN);
                cprintf("%s", sMessage);
                break;
            case 11:
                textcolor(LIGHTCYAN);
                cprintf("%s", sMessage);
                break;
            case 12:
                textcolor(LIGHTRED);
                cprintf("%s", sMessage);
                break;
            case 13:
                textcolor(LIGHTMAGENTA);
                cprintf("%s", sMessage);
                break;
            case 14:
                textcolor(YELLOW);
                cprintf("%s", sMessage);
                break;
            case 15:
                textcolor(WHITE);
                cprintf("%s", sMessage);
                break;
            default:
                textcolor(GREEN);
                cprintf("%s", sMessage);
                break;

        }
        return 0;
}