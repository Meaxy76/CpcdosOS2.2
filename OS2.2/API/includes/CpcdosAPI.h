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

namespace CpcdosAPI {
    class Window {
    public:
        std::string windowName;
        int windowType;
        std::tuple<int, int> windowPos;
        std::tuple<int, int> windowSize;
        std::tuple<int, int, int, int> windowColor; // RGBA
        std::tuple<int, int, int> windowTitleColor;
        std::string windowSettings;
        std::string windowHandle;

        Window(std::string name = "Window", 
               int type = 0, 
               std::tuple<int, int> pos = std::make_tuple(0, 0),
               std::tuple<int, int> size = std::make_tuple(300, 200), 
               std::tuple<int, int, int> wincol = std::make_tuple(255, 255, 255),
               std::tuple<int, int, int> titlecol = std::make_tuple(100, 100, 100),
               std::string sets = "",
               std::string handle = "window"
        );
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

    void terminal_print(std::string str);
}


#endif

