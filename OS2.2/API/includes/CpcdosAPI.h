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
        std::tuple<int, int> windowSize;
        std::tuple<int, int> windowPos;
        std::tuple<int, int, int, int> windowColor; // RGBA
        std::tuple<int, int, int> windowTitleColor;
        std::string windowHandle;

        Window(std::string name, int type, std::tuple<int, int> size, std::tuple<int, int> pos, std::tuple<int, int, int, int> wincol, std::tuple<int, int, int> titlecol, std::string handle);
    };

}


#endif

