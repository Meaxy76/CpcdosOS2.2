#ifndef _CPCGUI_API_H_

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
=== CPCGUIAPI.H
==============================================
=== In this file, you can use GUI features
=== in C++.
==============================================
=== NO WARANTY TO GET A STABLE PROGRAM DURING
=== THE FIRST TRY!
==============================================
*/

namespace CpcGuiAPI 
{
    // Coding style : plase use 'CpcdosAPI::component' in your code. Or you can use 'using namespace CpcdosAPI;'

    class Window {
    public:
        std::string windowName;
        int windowType; // Type of window (with/out titlebar, resizeable or not, etc.)
        std::tuple<int, int> windowPos;
        std::tuple<int, int> windowSize;
        std::tuple<int, int, int, int> windowColor; // RGBA
        std::tuple<int, int, int> windowTitleColor;
        std::string windowSettings;
        std::string windowHandle; // Use this variable for all of GUI components in your window. Reference in Cpcdos source-code.

        Window(std::string name = "Window", 
               int type = 0, 
               std::tuple<int, int> pos = std::make_tuple(0, 0),
               std::tuple<int, int> size = std::make_tuple(300, 200), 
               std::tuple<int, int, int> wincol = std::make_tuple(255, 255, 255),
               std::tuple<int, int, int> titlecol = std::make_tuple(100, 100, 100),
               std::string sets = "",
               std::string handle = "window"
        ); // by default
    };

    class Textblock {
    public:
        std::string textblockText;
        std::tuple<int, int> textblockPosition;
        std::tuple<int, int> textblockSize;
        std::tuple<int, int, int> textColor;
        std::tuple<int, int, int> backgroundColor;
        std::string textblockSettings;
        Window parentWindow;
        std::string textboxHandle;
        
        Textblock(std::string text = "", 
                  std::tuple<int, int> pos = std::make_tuple(0, 0),
                  std::tuple<int, int> size = std::make_tuple(100, 100), 
                  std::tuple<int, int, int> textCol = std::make_tuple(255, 255, 255), 
                  std::tuple<int, int, int> backCol = std::make_tuple(0, 0, 0), 
                  std::string sets = "",
                  Window parWin = nullptr, 
                  std::string handle = "textblock"
        );
    };

    class Picturebox {
    public:
        std::string pictureboxHandle;
        std::string pictureboxFilePath;
        std::tuple<int, int> pictureboxPosition;
        std::tuple<int, int> pictureboxSize;
        int pictureboxDisplayType;
        Window parentWindow;
    };
}

#endif

