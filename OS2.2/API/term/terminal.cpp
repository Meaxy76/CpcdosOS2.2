#include "../includes/CpcdosAPI.h"
#include "../../Cpcdos/include/sci.h"
#include "../../Cpcdos/include/cpcdos.h"

#include <string>

namespace CpcdosAPI {
    void terminal_print(std::string str) {
        std::cout << str;
    }
}