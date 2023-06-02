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
      std::tuple<int, int> windowSize;
      std::tuple<int, int> windowPosition;
      std::tuple<int, int, int> windowColor;
      std::tuple<int, int, int> windowTitleColor;
      std::string windowHandle; 
        // Constructor
        Window(std::string name, int type, std::tuple<int, int> size, std::tuple<int, int> pos, std::tuple<int, int, int> wincol, std::tuple<int, int, int> titlecol, std::string handle)
        {
            windowName = name;
            windowType = type;
            windowSize = size;
            windowPosition = pos;
            windowColor = wincol;
            windowTitleColor = titlecol;
            windowHandle = handle;
        }
    };
} // namespace CpcdosAPI

int main()
{
    CpcdosAPI::Window myWindow("My Window", 0, std::make_tuple(300, 200), std::make_tuple(100, 100), std::make_tuple(197,197,197), std::make_tuple(000,000,000), "WindowHandle");
    return 0;
}

