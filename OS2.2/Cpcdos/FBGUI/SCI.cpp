
#include <string>
#include <iostream>
//#include "../include/sci.h"
#include "../include/cpcdos.h"

#include "../include/ccp_func.h"
/*
 SCI: Service Creation Initialisation
 Version 1.0 
 running in C++ and ElieDraw in FreeBASIC
*/
int resx;
int resy;

extern "C" int CpcLoop();
extern "C" int eliedraw_gui(int SX, int SY, std::string background);

extern "C" int sci_list_screen(int SX, int SY);
extern "C" int Cpcdos_Mouse();

extern "C" int Test_CPC_resolution(int SCRX, int SCRY);

extern "C" int Set_Window_GUI_Value(int SCRX, int SCY);

extern "C" int Create_Window(std::string title, std::string name_win, int typewin, int SX, int SY, int PX, int PY, int opacity, int WindowCR, int WindowCG, int WindowCB);
// extern "C" int Create_PictureBox();
// extern "C" int Create_Button();
// extern "C" int Set_Background();
// extern "C" int Refresh_ElieDraw();



int CPC_screen_list(){
    sci_list_screen(1,1);
    return 0;
}

std::string Set_Resolution_Value(std::string resolution){
    // we use the var to look in ElieDraw if it's possible to get that resolution, if yes then the value will 
    // be changed and Cpcdos will load at the new resolution, if not it will load at the basic resolution
    int reslen;
    int xpos;
    int result;
    if(instrcpc(resolution, "x") > 0){
        
        reslen = len(resolution);
        xpos = find(resolution, "x");
        resx = stoi(rtrim(resolution, xpos));
        resy = stoi(ltrim(resolution, 0, xpos + 1));
        //CPCVAR::Define_CCP_Var("CPC.SCR.X", std::to_string(resx));
        //CPCVAR::Define_CCP_Var("CPC.SCR.Y", std::to_string(resy));
        result = Test_CPC_resolution(resx, resy);
        std::cout << result;
        if(result == 0){
            return "OK";
        } else {
            CPCVAR::Define_CCP_Var("SCR_RES", "800x600");
            resx = 800;
            resy = 600;
        }
        
    }

    return "ok";
}

int Window_Value(){

    std::string topleft = CPCVAR::CCP_Read_Var("design_Image[0]");

    return 0;
}

int Picturebox_Value(){

    std::string topleft = CPCVAR::CCP_Read_Var("design_Image[0]");

    return 0;
}

int textblock_Value(){

    std::string topleft = CPCVAR::CCP_Read_Var("design_Image[0]");

    return 0;
}

int textbox_Value(){

    std::string topleft = CPCVAR::CCP_Read_Var("design_Image[0]");

    return 0;
}

int drawingbox_Value(){

    std::string topleft = CPCVAR::CCP_Read_Var("design_Image[0]");

    return 0;
}

int Explorer_Value(){

    std::string topleft = CPCVAR::CCP_Read_Var("design_Image[0]");

    return 0;
}

int Checkbox_Value(){

    std::string topleft = CPCVAR::CCP_Read_Var("design_Image[0]");

    return 0;
}

int radiobutton_Value(){

    std::string topleft = CPCVAR::CCP_Read_Var("design_Image[0]");

    return 0;
}
int Progressbar_Value(){

    std::string topleft = CPCVAR::CCP_Read_Var("design_Image[0]");

    return 0;
}

int Button_Value(){

    std::string topleft = CPCVAR::CCP_Read_Var("design_Image[0]");

    return 0;
}

int Cpc_Create_Window(std::string wtitle, int type, int r, int g, int b, int a, int sx, int sy, int px, int py, std::string handlename){
    Create_Window(wtitle, "MyWin2", type, sx, sy, px, py, 255, r,g,b);
    return 0;
}

int _CPC_SCI(){
    int status = 1;
    std::string Resol_var = CPCVAR::CCP_Read_Var("SCR_RES");
    std::string Back_Value = CPCVAR::CCP_Read_Var("SCR_IMG");

    Set_Resolution_Value(Resol_var);
    
    //Window_Value();

    eliedraw_gui(800, 600, Back_Value);

        //Create_Window("My Second App!", "MyWin2", 0, 300, 200, 125, 150, 255, 39,232,247);
    do{
        
        //Cpcdos_Mouse();
        CpcLoop();
    } while(status);

    return 0;
}