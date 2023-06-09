#include <iostream>
#include "../includes/CpcdosAPI.h"

#include "../../Cpcdos/include/sci.h"


namespace CpcdosAPI {
    Window::Window( std::string name = "Window", 
                    int type = 0, 
                    std::tuple<int, int> pos = std::make_tuple(0, 0),
                    std::tuple<int, int> size = std::make_tuple(300, 200), 
                    std::tuple<int, int, int> wincol = std::make_tuple(255, 255, 255),
                    std::tuple<int, int, int> titlecol = std::make_tuple(100, 100, 100),
                    std::string sets = "",
                    std::string handle = "window") 
    {
        windowName = name;
        windowType = type;
        windowPos = pos;
        windowSize = size;
        windowColor = wincol;
        windowTitleColor = titlecol;
        windowSettings = sets;
        windowHandle = handle;
    }
}