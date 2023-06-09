/*

    Not complete. An approbation is necessary.

    Incomplet. Une approbation est nécessaire.

*/

#include <tuple>
#include <string>

#include "includes/CpcdosAPI.h"

void main() {
    CpcdosAPI::Window myWindow(
        "My Window", // Window title / name.
        0, // Window type.
        std::make_tuple(100, 100), // Window position.
        std::make_tuple(300, 200), // Window size.
        std::make_tuple(197,197,197), // Window color.
        std::make_tuple(000,000,000), // Title color.
        "", // Settings.
        "WindowHandle" // Window handle name.
    );

    CpcdosAPI::Textblock myTextblock(
        "This is my textblock!\nHello world!", // Textblock text.
        std::make_tuple(200, 100), // Textblock position in the window.
        std::make_tuple(100, 100), // Textblock size.
        std::make_tuple(255, 255, 255), // Text color.
        std::make_tuple(000, 000, 000), // Background color.
        myWindow, // Parent window.
        "", // Settings.
        "TextboxHandle" // Textblock handle name.
    );
    
    std::get<0>(myWindow.windowPos) += 1; // X position.
    std::get<1>(myWindow.windowPos) = 200; // Y position.

    myTextblock.textblockText = "My NEW text!"; // Setting text.
    std::get<0>(myTextblock.textblockSize) = 125; // Changing the textblock size.
}

