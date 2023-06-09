#include <iostream>
#include "../includes/CpcdosAPI.h"

#include "../../Cpcdos/include/sci.h"


namespace CpcdosAPI {
    Textblock::Textblock(std::string text, std::tuple<int, int> pos, std::tuple<int, int> size, std::tuple<int, int, int> textCol, std::tuple<int, int, int> backCol, Window parWin, std::string handle) {
        textblockText = text;
        textblockPosition = pos;
        textblockSize = size;
        textColor = textCol;
        backgroundColor = backCol;
        parentWindow = parWin;
        textboxHandle = handle;
    }
}