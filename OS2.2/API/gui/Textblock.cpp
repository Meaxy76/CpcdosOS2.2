#include <iostream>
#include "../includes/CpcdosAPI.h"

#include "../../Cpcdos/include/sci.h"


namespace CpcdosAPI {
    Textblock::Textblock(   std::string text = "", 
                            std::tuple<int, int> pos = std::make_tuple(0, 0),
                            std::tuple<int, int> size = std::make_tuple(100, 100), 
                            std::tuple<int, int, int> textCol = std::make_tuple(255, 255, 255), 
                            std::tuple<int, int, int> backCol = std::make_tuple(0, 0, 0), 
                            std::string sets = "",
                            Window parWin = nullptr, 
                            std::string handle = "textblock") 
    {
        textblockText = text;
        textblockPosition = pos;
        textblockSize = size;
        textColor = textCol;
        backgroundColor = backCol;
        parentWindow = parWin;
        textboxHandle = handle;
    }
}