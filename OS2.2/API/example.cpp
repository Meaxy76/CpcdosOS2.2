/*

    Not complete. An approbation is necessary.

    Incomplet. Une approbation est nécessaire.

*/


#include <tuple>
#include <string>

/* CPCDOS API Window*/

namespace CpcdosAPI
{
    class Window
    {
    public:
      std::string windowName;
      int windowType;
      std::tuple<int, int> windowPosition;
      std::tuple<int, int> windowSize;
      std::tuple<int, int, int> windowColor;
      std::tuple<int, int, int> windowTitleColor;
      std::string windowHandle; 
        // Constructor
        Window(std::string name, int type, std::tuple<int, int> pos, std::tuple<int, int> size, std::tuple<int, int, int> wincol, std::tuple<int, int, int> titlecol, std::string handle)
        {
            windowName = name;
            windowType = type;
            windowPosition = pos;
            windowSize = size;
            windowColor = wincol;
            windowTitleColor = titlecol;
            windowHandle = handle;
        }
    };
    
    class Textblock {
    public:
        std::string textblockText;
        std::tuple<int, int> textblockPosition;
        std::tuple<int, int> textblockSize;
        std::tuple<int, int, int> textColor;
        std::tuple<int, int, int> backgroundColor;
        std::string textboxHandle;
        
        Textblock(std::string text, std::tuple<int, int> pos, std::tuple<int, int> size, std::tuple<int, int, int> textCol, std::tuple<int, int, int> backCol, std::string handle) {
            textblockText = text;
            textblockPosition = pos;
            textblockSize = size;
            textColor = textCol;
            backgroundColor = backCol;
            textboxHandle = handle;
        }
    };
} // namespace CpcdosAPI

int main()
{
    CpcdosAPI::Window myWindow("My Window", 0, std::make_tuple(100, 100), std::make_tuple(300, 200), std::make_tuple(197,197,197), std::make_tuple(000,000,000), "WindowHandle");
    CpcdosAPI::Textblock myTextblock("This is my textblock!\nHello world!", std::make_tuple(200, 100), std::make_tuple(100, 100), std::make_tuple(255, 255, 255), std::make_tuple(000, 000, 000), "TextboxHandle");
    
    return 0;
}

