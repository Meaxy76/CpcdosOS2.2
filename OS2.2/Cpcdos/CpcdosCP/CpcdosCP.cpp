
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <cstring>
#include <cctype>
#include <unistd.h>
#include <algorithm>
#include <map>
#include <stdio.h>

/*Linux headers*/
#include <ncurses.h>

#include "../include/debug.h"
#include "../include/ccp_func.h"
#include "../include/sci.h"
#include "../include/cpcdos.h"
#include "../include/txt_ccp.h"
#include "../../Cpcdos/include/sound.h"

//#include "../../CPinti/include/IO.h"

std::string ActiveOS;

//SoundDevice mainsound;
//struct WaveData Voice;

using namespace std;
using namespace CPCVAR;

#define CPINTI_RL_BUFSIZE 1024
#define CPINTI_TOK_BUFSIZE 64
#define CPINTI_TOK_DELIM " \t\r\n\a"

void header_console(){
    unsigned char a = 201;
    unsigned char b = 205;
    unsigned char c = 187;
    unsigned char d = 186;
    unsigned char e = 200;
    unsigned char f = 188;
    
    cout << a << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << c;
    cout << d << " Cpcdos OS2.2 " << _MINOR_VERSION << " ARM                                      CPU : N/A %" << d;
    cout << d << "                               CpcdosC+ Console                    RAM : N/A %" << d;
    cout << e << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << b << f;
}

char *cpinti_read_line(void)
{
  int bufsize = CPINTI_RL_BUFSIZE;
  int position = 0;
  char *buffer = (char*)malloc(sizeof(char) * bufsize);
  int c;
    //fflush(stdin);
  if (!buffer) {
    cout << "Cpcdos error" << endl;
    exit(EXIT_FAILURE);
  }

    while (1) {
    // Read a character
        c = getch();

    // If we hit EOF, replace it with a null character and return.
        if (c == EOF || c == '\n') {
            buffer[position] = '\0';
            return buffer;
        } else {
            buffer[position] = c;
        }
        position++;

    // If we have exceeded the buffer, reallocate.
        if (position >= bufsize) {
            bufsize += CPINTI_RL_BUFSIZE;
            buffer = (char*)realloc(buffer, bufsize);
            if (!buffer) {
                cout << "Cpcdos error" << endl;
                exit(EXIT_FAILURE);
        }
    }
  }
}

int CpcdosCP_Shell(string cmd){


    if(instrcpc(ucase(cmd), "//") > 0){
        // code comment
    } else if(instrcpc(ucase(cmd), "REM/") > 0){
        // code comment
    } else if(instrcpc(ucase(cmd), "' ") > 0){
        // code comment
    } else if(instrcpc(ucase(cmd), "STOPK/") > 0){
        CpcDebug("Stopping Cpcdos OS2.2 kernel...", 1, 3);
        system("cls");
        exit(1);
    } else if(instrcpc(ucase(cmd), "STOP/") > 0){
        return 0;
    } else if(instrcpc(ucase(cmd), "HELP/") > 0){
        CpcDebug("*List of CpcdosC+ Commands*", 4, 3);
        CpcDebug("TXT/", 4, 3);
        //we have help command!!
    } else if(instrcpc(ucase(cmd), "START/") > 0){
        
        string buf;
        string buf2;
        string varname;
        string gettext;
        
        buf = ltrim(cmd, 0, 7);

        if(len(buf) > 0){
            // starting a new os uuuuh
            ActiveOS = switchcpc_os(buf);
            CpcdosCP_Shell("exe/ OS/" + ActiveOS + "/OS.CPC");
        } else {
            // start the first OS or active OS
            CpcdosCP_Shell("exe/ OS/" + ActiveOS + "/OS.CPC");
        }
        //we have help command!!
    } else if(instrcpc(ucase(cmd), "TXT/") > 0){

        string buf;
        string buf2;
        
        buf = ltrim(cmd, 0, 5);
        cout << Cpc_txt_exec::CCP_Parse_Text(buf) << endl;
        
    } else if(instrcpc(ucase(cmd), "COLORC/") > 0){
        //we have text command!!
        //CpcDebug("Command to set characters color", 1, debugstate);
        string buf;
        buf = ltrim(cmd, 0, 8);
        cout << buf << endl;
    } else if(instrcpc(ucase(cmd), "COLORB/") > 0){
        //CpcDebug("Command to set characters color", 1, debugstate);
        string buf;
        buf = ltrim(cmd, 0, 8);
        cout << buf << endl;
    } else if(instrcpc(ucase(cmd), "@#") > 0){
        CpcDebug("We have to create a variable!", 1, debugstate);
        string buf;
        buf = ltrim(cmd, 0, 2);
    } else if(instrcpc(ucase(cmd), "SET/") > 0){
        /*
        /s
        /q
        /key
        /wkey
        /extern
        /os:
        */

        string buf;
        string varname;
        string varcontent;

        buf = ltrim(cmd, 0, 5);



        varname = rtrim(buf, " ");
        varcontent = ltrim(buf, 0, "=");
        CPCVAR::Define_CCP_Var(varname, varcontent);

    } else if(instrcpc(ucase(cmd), "CCP/") > 0){
        
        //CpcDebug("CCP/ command detected", 1, debugstate);
        string buf;
        buf = ltrim(cmd, 0, 5);

        if(instrcpc(ucase(buf), "/SLEEP") > 0){
            CpcDebug("Sleep command detected", 1, debugstate);
        } else if(instrcpc(ucase(buf), "/OPTIMIZATION") > 0){
            CpcDebug("COM command detected", 1, debugstate);
        } else if(instrcpc(ucase(buf), "/CHANGE:") > 0){
            CpcDebug("COM command detected", 1, debugstate);
        }


        /*
        /begin_critical_section
        /end_critical_section
        */
    } else if(instrcpc(ucase(cmd), "IF/") > 0){
        /*
            then:
            else:
            or
            and
        */

        CpcDebug("IF/ command detected", 1, debugstate);
        // CPCIF::Parse_if_statement(blabla);

    } else if(instrcpc(ucase(cmd), "OPEN/") > 0){
        //we have exe command!!
        CpcDebug("OPEN/ command detected", 1, debugstate);
        // CPCOPEN::Open_file(MyFile);

    } else if(instrcpc(ucase(cmd), "WRITE/") > 0){
        /*
            /BIN
            /APP
            /BINAPP
        */

        CpcDebug("OPEN/ command detected", 1, debugstate);
        // CPCWRITE::Write_file(file, content, mode);

    } else if(instrcpc(ucase(cmd), "SYS/") > 0){
        
        string buf2;
        string buf3;
        string buf4;

        buf2 = ltrim(cmd, 0, 5);
        if(instrcpc(ucase(buf2), "/COM1") > 0){
            CpcDebug("COM command detected", 1, debugstate);
        } else if(instrcpc(ucase(buf2), "/COM2") > 0){
            CpcDebug("COM command detected", 1, debugstate);
        } else if(instrcpc(ucase(buf2), "/COM3") > 0){
            CpcDebug("COM command detected", 1, debugstate);
        } else if(instrcpc(ucase(buf2), "/COM4") > 0){
            CpcDebug("COM command detected", 1, debugstate);
        } else if(instrcpc(ucase(buf2), "/SB16") > 0){

            //mainsound = SBDMA_device;
            buf3 = ltrim(buf2, 0, 6);
            if(instrcpc(ucase(buf3), "/PLAY") > 0){
                buf4 = ltrim(buf3, 0, 6);
                CpcDebug(buf4.c_str(), 1, debugstate);
	            //mainsound.Sound_Load(buf4.c_str(), &Voice);
                
                //mainsound.Sound_Play(&Voice);

	            
            }
            if(instrcpc(ucase(buf3), "/STOP") > 0){
                buf4 = ltrim(buf3, 0, 6);
                CpcDebug("Stop playing the file.", 1, debugstate);
	            //mainsound.Sound_Unload(&Voice);
	            //mainsound.Sound_Close();
            }
            if(instrcpc(ucase(buf3), "= 1") > 0){
                CpcDebug("Init SoundBlaster 16.", 1, debugstate);
	            //mainsound.Sound_Init();
            }
        } else if(instrcpc(ucase(buf2), "/OS:") > 0){

            buf3 = ltrim(buf2, 0, 4);
            ActiveOS = switchcpc_os(buf3);

        } else if(instrcpc(ucase(buf2), "/DEBUG") > 0){
            buf3 = ltrim(buf2, 0, 7);
            if(instrcpc(ucase(buf3), "= 0") > 0){
                debugstate = 1;
            } else if(instrcpc(ucase(buf3), "= 1") > 0){
                debugstate = 4;
            } else if(instrcpc(ucase(buf3), "= 2") > 0){
                debugstate = 5;
            }
        } else if(instrcpc(ucase(buf2), "/SCREEN") > 0){
            CPC_screen_list();
        }

    } else if(instrcpc(ucase(cmd), "GOTO/") > 0){
        //we have exe command!!
        CpcDebug("Exe/ command detected", 1, debugstate);

    } else if(instrcpc(ucase(cmd), "DIR/") > 0){

        CpcDebug("DIR command", 1, debugstate);
        // CPCDIR::Get_Dir(arg);

    } else if(instrcpc(ucase(cmd), "COPY/") > 0){

        CpcDebug("COPY command", 1, debugstate);
        // CPCCOPY::Copy_File(source, destination);

    } else if(instrcpc(ucase(cmd), "EXE/") > 0){
        
        string buf2;
        string buf3;

        buf2 = ltrim(cmd, 0, 5);
        
        if(instrcpc(ucase(buf2), "&+") > 0){
            CpcDebug("&+ command detected", 1, debugstate);
            buf3 = ltrim(buf2, 0, 3);
            Cpc_Interpreter(buf3);
            return 0;
        } else if(instrcpc(ucase(buf2), "&") > 0){
            CpcDebug("& command detected", 1, debugstate);
            buf3 = ltrim(buf2, 0, 2);
            Cpc_Interpreter(buf3);
            return 0;
        } else if(instrcpc(ucase(buf2), "/WIN32") > 0){
            CpcDebug("/WIN32 command detected", 1, debugstate);
            CpcDebug("Need XE-Loader!", 3, 1);
            return 0;
        } else {
            // No settings
            Cpc_Interpreter(buf2);
            return 0;
        }
        //CpcdosCP_cpc_load(buf2);
    } else if(instrcpc(ucase(cmd), "RENAME/") > 0){
        
        CpcDebug("Exe/ command detected", 1, debugstate);
        // CPCRENAME::Rename_file(old, new);

    } else if(instrcpc(ucase(cmd), "DELETE/") > 0){

        CpcDebug("Exe/ command detected", 1, debugstate);
        //CPCDEL::Delete_File(file);

    } else if(instrcpc(ucase(cmd), "FOLDER/") > 0){

        CpcDebug("Exe/ command detected", 1, debugstate);
        //CPCFOLDER::Create_Folder(foldername);

    } else if(instrcpc(ucase(cmd), "DECOMPRESS/") > 0){

        CpcDebug("Exe/ command detected", 1, debugstate);
        //CPCARCH::decompress_zip(source, destination);

    } else if(instrcpc(ucase(cmd), "COMPRESS/") > 0){

        CpcDebug("Exe/ command detected", 1, debugstate);
        //CPCARCH::compress_zip(source, destination);

    } else if(instrcpc(ucase(cmd), "OSLIST/") > 0){
        
        ActiveOS = Cpcdos_Update_OS_list();

    } else if(instrcpc(ucase(cmd), "DOS/") > 0){
        string buf2;
        // Need to implement MXDOS for loading dos program in GUI
        buf2 = ltrim(cmd, 0, 5);
        system(buf2.c_str());

    } else if(instrcpc(ucase(cmd), "GUI/") > 0){

        CpcDebug("[CpcdosC+] : Warning! Cpcdos GUI is unstable for this version, it can cause crash of the shell", 2, debugstate);
        CpcDebug("Launching GUI...", 1, debugstate);
	    sleep(2); // ' Laisser l'utilisateur visualiser*/
        GUI_MODE = true;
        _CPC_SCI();
        

    } else if(instrcpc(ucase(cmd), "FUNCTION/") > 0){

        CpcDebug("[CpcdosC+] : Under construction", 2, debugstate);

        /* Locate Mouse event functions / custom functions of Cpcdos */

    } else if(instrcpc(ucase(cmd), "DECLARE/") > 0){

        CpcDebug("[CpcdosC+] : Under construction", 2, debugstate);
        /* Declare functions in memory */

    } else if(instrcpc(ucase(cmd), "DRAWINGBOX/") > 0){
        

    } else if(instrcpc(ucase(cmd), "WINDOW/") > 0){
        WIN_CREATE = true;

        string WindowOBJ;
        WindowOBJ = ltrim(cmd, 0, 8);
        CpcDebug(WindowOBJ.c_str(), 1, debugstate);

    } else if(instrcpc(ucase(cmd), ".TITLE") > 0){
        string titlewin;
        int textpos;
        string buf;

        textpos = find(cmd, ".");
        buf = ltrim(cmd, 0, textpos + 10);
        titlewin = rtrim(buf, "\"");
        
            CpcDebug(titlewin.c_str(), 1, debugstate);
            //CpcDebug("TITLE", 1, debugstate);
            // Window Title of app
        if(WIN_CREATE == true){
            wintitle = titlewin;
        }
        
    } else if(instrcpc(ucase(cmd), ".SETTINGS") > 0){
        //CpcDebug("SETTINGS", 1, debugstate);
            // Getting the settings of the windows
        if(instrcpc(ucase(cmd), "TYPE:0") > 0){
                    // CpcDebug("Window of type 0!", 1, debugstate);
                    typewindow = 0;
                    // Getting the settings of the windows
        } else if(instrcpc(ucase(cmd), "TYPE:1") > 0){
                    // CpcDebug("Window of type 1!", 1, debugstate);
                    typewindow = 1;
                    // Getting the settings of the windows
        }else if(instrcpc(ucase(cmd), "TYPE:2") > 0){
                    // CpcDebug("Window of type 2!", 1, debugstate);
                    typewindow = 2;
                    // Getting the settings of the windows
        }else if(instrcpc(ucase(cmd), "TYPE:3") > 0){
                    // CpcDebug("Window of type 3!", 1, debugstate);
                    typewindow = 3;
                    // Getting the settings of the windows
        }else if(instrcpc(ucase(cmd), "TYPE:4") > 0){
                    // CpcDebug("Window of type 4!", 1, debugstate);
                    typewindow = 4;
                    // Getting the settings of the windows
        }else if(instrcpc(ucase(cmd), "TYPE:5") > 0){
                    // CpcDebug("Window of type 5!", 1, debugstate);
                    typewindow = 5;
                    // Getting the settings of the windows
        }

    } else if(instrcpc(ucase(cmd), ".WINDOWCOLOR") > 0){
        string rgbcolor;
        string buf;
        int textpos;
        string r;
        string gt;
        string g;
        string b;
        
        textpos = find(cmd, ".");
        buf = ltrim(cmd, 0, textpos + 16);
        rgbcolor = rtrim(buf, "\"");
        r = rtrim(buf, ",");
        gt = ltrim(buf, 0, 4);
        g = rtrim(gt, ",");
        b = ltrim(buf, 0, 8);
        // cout << "R:" << r << " G:" << g << " B:" << b << endl;
        //CpcDebug("WINDOWCOLOR", 1, debugstate);
        if(WIN_CREATE == true){
            WinR = stoi(r);
            WinG = stoi(g);
            WinB = stoi(b);
        }
        

    } else if(instrcpc(ucase(cmd), ".OPACITY") > 0){
        int textpos;
        string buf;
        string opacity;
        
        textpos = find(cmd, ".");
        buf = ltrim(cmd, 0, textpos + 12);
        opacity = rtrim(buf, "\"");

            //CpcDebug(opacity.c_str(), 1, debugstate);
            //CpcDebug("OPACITY", 1, debugstate);
        if(WIN_CREATE == true){
            alphaopacity = stoi(opacity);
        }
        

    } else if(instrcpc(ucase(cmd), ".SX") > 0){
        int textpos;
        string buf;
        string ObjSX;
        
        textpos = find(cmd, ".");
        buf = ltrim(cmd, 0, textpos + 7);
        ObjSX = rtrim(buf, "\"");
        //CpcDebug(ObjSX.c_str(), 1, debugstate);
            //CpcDebug("SX", 1, debugstate);
        if(WIN_CREATE == true){
            WinSX = stoi(ObjSX);
        }
        

    } else if(instrcpc(ucase(cmd), ".SY") > 0){
        int textpos;
        string buf;
        string ObjSY;
        
        textpos = find(cmd, ".");
        buf = ltrim(cmd, 0, textpos + 7);
        ObjSY = rtrim(buf, "\"");
        //CpcDebug(ObjSY.c_str(), 1, debugstate);
            //CpcDebug("SY", 1, debugstate);
            
        if(WIN_CREATE == true){
            WinSY = stoi(ObjSY);
        }
        

    } else if(instrcpc(ucase(cmd), ".PX") > 0){
        int textpos;
        string buf;
        string ObjPX;
            
        textpos = find(cmd, ".");
        buf = ltrim(cmd, 0, textpos + 7);
        ObjPX = rtrim(buf, "\"");
            //CpcDebug(ObjPX.c_str(), 1, debugstate);
                //CpcDebug("PX", 1, debugstate);

        if(WIN_CREATE == true){
            WinPX = stoi(ObjPX);
        }
        

    } else if(instrcpc(ucase(cmd), ".PY") > 0){
        int textpos;
        string buf;
        string ObjPY;
        
        textpos = find(cmd, ".");
        buf = ltrim(cmd, 0, textpos + 7);
        ObjPY = rtrim(buf, "\"");
        //CpcDebug(ObjPY.c_str(), 1, debugstate);
            //CpcDebug("PY", 1, debugstate);
            
        if(WIN_CREATE == true){
            WinPY = stoi(ObjPY);
        }
        

    } else if(instrcpc(ucase(cmd), ".ICON") > 0){
            CpcDebug("ICON", 1, debugstate);

    } else if(instrcpc(ucase(cmd), "CREATE/") > 0){
            CpcDebug("CREATE", 1, debugstate);
            // get the window handle here -> send var name to FB and FB store the var + handle num to C++

    } else if(instrcpc(ucase(cmd), "END/ WINDOW") > 0){
            //CpcDebug("END/ WINDOW", 1, debugstate);

        if(GUI_MODE == true){
            string hdl = "test";
            Cpc_Create_Window(wintitle, typewindow, WinR, WinG, WinB, alphaopacity, WinSX, WinSY, WinPX, WinPY, hdl);
                // we end the creation of the window here
            WIN_CREATE = false; 
        } else {
            
            CpcDebug("[CpcdosC+] : GUI must be loaded to create a Window", 2, 3);
        }

    } else if(instrcpc(ucase(cmd), "CLS/") > 0){
        
        system("clear");
        //header_console();
        cout << endl;

    } else if(instrcpc(ucase(cmd), ":") > 0){

        CpcDebug("We have a label", 1, debugstate);

    } else {

        CpcDebug("[CpcdosC+] : ERROR! Command not found ...", 2, 3);
    }

    return 0;
}

int Cpc_Interpreter(string fb2){

    std::string str; 
    std::ifstream file(fb2.c_str());
    while (getline(file, str))
    {
        // Process str
        CpcdosCP_Shell(str);
    }
    return 0;
}

//void *cmdloop(void* ptr)
int cmdloop(){
    GUI_MODE = false;
    char *line;
    char **args;
    initscr();
    //raw();
    //noecho();

    unsigned char func;
    int status;
    status = 1;
        //CpcdosCP_Shell("cls/");
    system("clear");
    
    
    //header_console();
    cout<<endl;

    if(GUI_MODE == false){
        do {
            if(GUI_MODE == false){
                cout << "> ";
                //CpcPrompt("> ", 15, 0);
                //cout << endl;
                line = cpinti_read_line();
                CpcdosCP_Shell(line);

                free(line);

            } else if(GUI_MODE == true){
                //GUILoop();
                func = getchar();
                if(func == 196){
                    CpcdosCP_Shell("cls/");
                    GUI_MODE = false;
                }
            }
        } while (status);

    } else if(GUI_MODE == true) {
        while(GUI_MODE == true){

        }
    }


    return 0;
}

namespace CPC_CCP {
    /* Just a function to use the Shell interpreter from GUI easily */
    int cpcdos_command(char *s){       
        CpcdosCP_Shell(s);
        return 0;
    }
}
