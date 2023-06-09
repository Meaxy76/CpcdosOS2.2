#include <iostream>
#include "../includes/CpcdosAPI.h"

#include "../../Cpcdos/include/sci.h"


namespace CpcdosAPI {
    Window::Window(std::string name, int type, std::tuple<int, int> pos, std::tuple<int, int> size, std::tuple<int, int, int, int> wincol, std::tuple<int, int, int> titlecol, std::string handle) {
        windowName = name;
        windowType = type;
        windowPos = pos;
        windowSize = size;
        windowColor = wincol;
        windowTitleColor = titlecol;
        windowHandle = handle;
    }
}