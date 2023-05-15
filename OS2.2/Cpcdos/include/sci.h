/* Look if GUI mode is on or not */
bool GUI_MODE = false;

/* GUI Object creation bool */

/* Window related */
bool WIN_CREATE = false;
std::string wintitle;
int typewindow = 0;
int shadowwindow = 0;
int alphaopacity = 255;
int WinPX = 0;
int WinPY = 0;
int WinSX = 0;
int WinSY = 0;
int WinR = 0;
int WinG = 0;
int WinB = 0;

/* Picturebox related */
bool PICTUREBOX_CREATE = false;

/* GUI console */
bool GUI_CONSOLE_CREATE = false;

/* Button */
bool BUTTON_CREATE = false;

/* Drawingbox */
bool DRAWINGBOX_CREATE = false;

/* Textblock */
bool TEXTBLOCK_CREATE = false;

/* Textbox */
bool TEXTBOX_CREATE = false;

/* Explorer */
bool EXPLORER_CREATE = false;

/* Listbox */
bool LISTBOX_CREATE = false;

/* Checkbox */
bool CHECKBOX_VALUE = false;

/* Radiobutton */
bool RADIOBUTTON_CREATE = false;

/* Progressbar */
bool PROGRESSBAR_CREATE = false;

/* ElieWWW */
bool ELIEWWW_ENGINE_CREATE = false;

/* Cpcdos SCI functions */
int Cpc_Create_Window(std::string wtitle, int type, int r, int g, int b, int a, int sx, int sy, int px, int py, std::string handlename);
int _CPC_SCI();
int CPC_screen_list();
int GUILoop();