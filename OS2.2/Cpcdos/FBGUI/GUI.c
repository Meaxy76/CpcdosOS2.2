typedef   signed char       int8;
typedef unsigned char      uint8;
typedef   signed short      int16;
typedef unsigned short     uint16;
typedef   signed int        int32;
typedef unsigned int       uint32;
typedef   signed long long  int64;
typedef unsigned long long uint64;
typedef struct { char *data; int32 len; int32 size; } FBSTRING;
typedef int8 boolean;
struct $10fb_Object$ {
	void* VPTR$;
};
#define __FB_STATIC_ASSERT( expr ) extern int __$fb_structsizecheck[(expr) ? 1 : -1]
#line 50 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
__FB_STATIC_ASSERT( sizeof( struct $10fb_Object$ ) == 4 );
struct $8HCONTROL {
	struct $10fb_Object$ BASE$;
	FBSTRING HNAME;
	int32 ID;
	int32 PID;
	int32 X;
	int32 Y;
	int32 SX;
	int32 SY;
	uint32 C;
	int32 WR;
	int32 WG;
	int32 WB;
	FBSTRING TITLE;
};
#line 50 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
__FB_STATIC_ASSERT( sizeof( struct $8HCONTROL ) == 68 );
struct $9CPCWINDOW {
	struct $8HCONTROL BASE$;
	int32 X2;
	int32 Y2;
	int32 SX2;
	int32 SY2;
	int32 TYPEW;
	boolean HASCLOSEBUTTON;
	boolean HASMINIMIZEBUTTON;
	boolean HASMAXIMIZEBUTTON;
	boolean DOCLOSEWINDOW;
	boolean DOGETFOCUS;
	boolean DOMOVEWINDOW;
	boolean DOMINIMIZEWINDOW;
	boolean DOMAXIMIZEWINDOW;
	uint32 ZORDER;
	boolean DORESTOREMINIMIZE;
	boolean DORESTOREMAXIMIZE;
};
#line 50 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
__FB_STATIC_ASSERT( sizeof( struct $9CPCWINDOW ) == 104 );
struct $16__FB_ARRAYDIMTB$ {
	int32 ELEMENTS;
	int32 LBOUND;
	int32 UBOUND;
};
#line 282 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
__FB_STATIC_ASSERT( sizeof( struct $16__FB_ARRAYDIMTB$ ) == 12 );
struct $7FBARRAYIvE {
	void* DATA;
	void* PTR;
	int32 SIZE;
	int32 ELEMENT_LEN;
	int32 DIMENSIONS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[8];
};
#line 282 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
__FB_STATIC_ASSERT( sizeof( struct $7FBARRAYIvE ) == 116 );
struct $7FBARRAYIKvE {
	void* DATA;
	void* PTR;
	int32 SIZE;
	int32 ELEMENT_LEN;
	int32 DIMENSIONS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[8];
};
#line 293 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
__FB_STATIC_ASSERT( sizeof( struct $7FBARRAYIKvE ) == 116 );
struct $8TEXTBOXH {
	struct $8HCONTROL BASE$;
	int32 X2;
	int32 Y2;
	int32 W2;
	int32 H2;
	int32 WTX1;
	int32 HTX1;
	boolean ISVISIBLE;
};
#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
__FB_STATIC_ASSERT( sizeof( struct $8TEXTBOXH ) == 96 );
struct $10TEXTBLOCKH {
	struct $8HCONTROL BASE$;
	int32 X2;
	int32 Y2;
	int32 W2;
	int32 H2;
	int32 WTX1;
	int32 HTX1;
	boolean ISVISIBLE;
};
#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
__FB_STATIC_ASSERT( sizeof( struct $10TEXTBLOCKH ) == 96 );
struct $11PICTUREBOXH {
	struct $8HCONTROL BASE$;
	int32 X2;
	int32 Y2;
	int32 W2;
	int32 H2;
	int32 WTX1;
	int32 HTX1;
	boolean ISVISIBLE;
};
#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
__FB_STATIC_ASSERT( sizeof( struct $11PICTUREBOXH ) == 96 );
struct $8CONSOLEH {
	struct $8HCONTROL BASE$;
	int32 X2;
	int32 Y2;
	int32 W2;
	int32 H2;
	int32 WTX1;
	int32 HTX1;
	boolean ISVISIBLE;
};
#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
__FB_STATIC_ASSERT( sizeof( struct $8CONSOLEH ) == 96 );
struct $6CANVAH {
	struct $8HCONTROL BASE$;
	int32 X2;
	int32 Y2;
	int32 W2;
	int32 H2;
	int32 W;
	int32 H;
	boolean ISVISIBLE;
};
#line 11 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
__FB_STATIC_ASSERT( sizeof( struct $6CANVAH ) == 96 );
struct $7BUTTONH {
	struct $8HCONTROL BASE$;
	int32 X2;
	int32 Y2;
	int32 W2;
	int32 H2;
	int32 W;
	int32 H;
	boolean ISVISIBLE;
};
#line 11 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
__FB_STATIC_ASSERT( sizeof( struct $7BUTTONH ) == 96 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void _ZN10fb_Object$C1Ev( struct $10fb_Object$* );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
int32 fb_ArrayRedimPresvEx( struct $7FBARRAYIvE*, uint32, int32, int32, uint32, ... );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
int32 fb_ArrayLBound( struct $7FBARRAYIKvE*, int32 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
int32 fb_ArrayUBound( struct $7FBARRAYIKvE*, int32 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void* fb_ArrayBoundChk( int32, int32, int32, int32, uint8* );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void fb_Cls( int32 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
int32 fb_PageCopy( int32, int32 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void* fb_ErrorThrowAt( int32, uint8*, void*, void* );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
uint8* fb_ErrorSetModName( uint8* );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
uint8* fb_ErrorSetFuncName( uint8* );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void fb_GfxLine( void*, float, float, float, float, uint32, int32, uint32, int32 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
int32 fb_GfxPut( void*, float, float, void*, int32, int32, int32, int32, int32, int32, void*, int32, void*, void* );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
int32 fb_GfxScreenRes( int32, int32, int32, int32, int32, int32 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
int32 fb_GfxFlip( int32, int32 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
int32 fb_GfxPageSet( int32, int32 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
int32 fb_GetMouse( int32*, int32*, int32*, int32*, int32* );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
int32 fb_GfxScreenList( int32 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void* fb_GfxImageCreate( int32, int32, uint32, int32, int32 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void fb_hPutPSet( uint8*, uint8*, int32, int32, int32, int32, int32, void*, void* );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void fb_hPutAlpha( uint8*, uint8*, int32, int32, int32, int32, int32, void*, void* );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void* fb_NullPtrChk( void*, int32, uint8* );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void* malloc( uint32 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void free( void* );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void fb_PrintString( int32, FBSTRING*, int32 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
FBSTRING* fb_StrAssign( void*, int32, void*, int32, int32 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void fb_StrDelete( FBSTRING* );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
FBSTRING* fb_StrConcat( FBSTRING*, void*, int32, void*, int32 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
FBSTRING* fb_StrAllocTempResult( FBSTRING* );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
FBSTRING* fb_StrAllocTempDescZEx( uint8*, int32 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
FBSTRING* fb_IntToStr( int32 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
FBSTRING* fb_UIntToStr( uint32 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
int32 fb_SleepEx( int32, int32 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static void fb_ctor__GUI( void ) __attribute__(( constructor ));
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void DOEVENTS( void );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void REPAINT( void );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void CLOSEWINDOW( void );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void CPCMOUSE( void );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
int32 _ZN7CPC_CCP14cpcdos_commandEPc( uint8* );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void* IMG_CHANGE_SIZE_QUICK( void**, void**, int32, int32, int32, int32, int32, int32 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void* CHARGER_PNG( FBSTRING*, int32, int32, int32*, int32* );
struct $N5XFONT12XFONT_HEADERE {
	uint16 SIGNATURE __attribute__((packed, aligned(1)));
	uint16 FILEFORMAT __attribute__((packed, aligned(1)));
	uint8 CRCTYPE;
	uint8 CRCDATA[17];
	uint8 MSGENCODE;
	uint8 LOFMSG;
	uint8 MESSAGE[193];
	uint8 FONTNAMEENC;
	uint8 LOFNAME;
	uint8 FONTNAME[193];
	uint8 ENCODETYPE;
	uint16 FONTSIZE __attribute__((packed, aligned(1)));
	uint16 FONTHEIGHT __attribute__((packed, aligned(1)));
	uint16 FONTFLAG __attribute__((packed, aligned(1)));
	uint8 BITQUALITY;
	uint32 CHARSTART __attribute__((packed, aligned(1)));
	uint32 CHARRANGE __attribute__((packed, aligned(1)));
	uint16 CHARCOMP __attribute__((packed, aligned(1)));
	uint32 CHAROFFSET __attribute__((packed, aligned(1)));
	uint32 CHARLENGTH __attribute__((packed, aligned(1)));
	uint16 DATACOMP __attribute__((packed, aligned(1)));
	uint32 DATAOFFSET __attribute__((packed, aligned(1)));
	uint32 DATALENGTH __attribute__((packed, aligned(1)));
};
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
__FB_STATIC_ASSERT( sizeof( struct $N5XFONT12XFONT_HEADERE ) == 448 );
struct $N5XFONT14XFONT_SEQUENCEE {
	uint16 PITCH;
	int16 START;
	uint16 TOP;
	uint16 WIDTH;
	uint16 HEIGHT;
	uint8* SEQUENCE;
};
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
__FB_STATIC_ASSERT( sizeof( struct $N5XFONT14XFONT_SEQUENCEE ) == 16 );
struct $N5XFONT10XFONT_DATAE {
	struct $N5XFONT12XFONT_HEADERE HEADER __attribute__((aligned(4)));
	int8 USEDFLAG[65536];
	struct $N5XFONT14XFONT_SEQUENCEE CHAR[65536];
	int8 LOADED;
};
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
__FB_STATIC_ASSERT( sizeof( struct $N5XFONT10XFONT_DATAE ) == 1114564 );
struct $N5XFONT11XFONT_COLORE {
	uint8 RED;
	uint8 GREEN;
	uint8 BLUE;
	uint32 PALETTE;
	uint8 ALPHA;
	float ALPHAFACTOR;
	float IALPHAFACTOR;
	float AFRED;
	float AFGREEN;
	float AFBLUE;
	uint8 DEPTH;
};
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
__FB_STATIC_ASSERT( sizeof( struct $N5XFONT11XFONT_COLORE ) == 36 );
struct $N5XFONT18XFONT_IMAGE_BUFFERE {
	int16 WIDTH;
	int16 HEIGHT;
	uint8 DEPTH;
	uint8 BPP;
	int8 OLDMODE;
	uint16 PITCH;
	uint32* TARGETPTR;
};
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
__FB_STATIC_ASSERT( sizeof( struct $N5XFONT18XFONT_IMAGE_BUFFERE ) == 16 );
struct $N5XFONT9INTERFACEE {
	struct $N5XFONT10XFONT_DATAE FONTCOLLECTION[9];
	int32 LASTERRORCODE;
	float ALPHAFACTOR255[256];
	float ALPHAFACTOR31[32];
	float IALPHAFACTOR255[256];
	float IALPHAFACTOR31[32];
	struct $N5XFONT11XFONT_COLORE XFORECOLOR;
	struct $N5XFONT11XFONT_COLORE XBACKCOLOR;
	struct $N5XFONT11XFONT_COLORE XFORECOLORCOMPAT;
	struct $N5XFONT11XFONT_COLORE XBACKCOLORCOMPAT;
	uint16 CHARVAL[32768];
	uint16 CHARLEN;
	struct $N5XFONT18XFONT_IMAGE_BUFFERE IMAGEBUFFER;
	uint16 SELECTEDFONTINDEX;
	int8 COLORCHANGE;
	int8 USESCREENLOCK;
	int8 USEVIEW;
	int32 CLIPX1;
	int32 CLIPY1;
	int32 CLIPX2;
	int32 CLIPY2;
};
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
__FB_STATIC_ASSERT( sizeof( struct $N5XFONT9INTERFACEE ) == 10099108 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void _ZN5XFONT9INTERFACEC1Ev( struct $N5XFONT9INTERFACEE* );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void _ZN5XFONT9INTERFACED1Ev( struct $N5XFONT9INTERFACEE* );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
int32 _ZN5XFONT9INTERFACE8LOADFONTER8FBSTRINGh( struct $N5XFONT9INTERFACEE*, FBSTRING*, uint8 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void _ZN5XFONT9INTERFACE10DRAWSTRINGEPvR8FBSTRINGssffh( struct $N5XFONT9INTERFACEE*, void*, FBSTRING*, int16, int16, float, float, uint8 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void _ZN5XFONT9INTERFACE16FONTINDEX__set__Eh( struct $N5XFONT9INTERFACEE*, uint8 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void _ZN5XFONT9INTERFACE16BACKCOLOR__set__Ej( struct $N5XFONT9INTERFACEE*, uint32 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void _ZN5XFONT9INTERFACE16FORECOLOR__set__Ej( struct $N5XFONT9INTERFACEE*, uint32 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static void _ZN8HCONTROLC1Ev( struct $8HCONTROL* );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static void _ZN8HCONTROLaSERKS_( struct $8HCONTROL*, struct $8HCONTROL* );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static void _ZN8HCONTROLD1Ev( struct $8HCONTROL* );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void NEWWINDOW( FBSTRING*, int32, int32, int32, int32, FBSTRING*, uint32, int32, int32, int32 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void WATCHCPCWINDOWS( void );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void _ZN9CPCWINDOWC1ER8FBSTRINGlllllS1_jlll( struct $9CPCWINDOW*, FBSTRING*, int32, int32, int32, int32, int32, FBSTRING*, uint32, int32, int32, int32 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void _ZN9CPCWINDOW6REDRAWEv( struct $9CPCWINDOW* );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void _ZN9CPCWINDOW8DOEVENTSEv( struct $9CPCWINDOW* );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void _ZN9CPCWINDOW13ONCLOSEWINDOWEv( struct $9CPCWINDOW* );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void _ZN9CPCWINDOW13ONFOCUSWINDOWEv( struct $9CPCWINDOW* );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void _ZN9CPCWINDOW12ONMOVEWINDOWEv( struct $9CPCWINDOW* );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void _ZN9CPCWINDOW16ONMINIMIZEWINDOWEv( struct $9CPCWINDOW* );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void _ZN9CPCWINDOW16ONMAXIMIZEWINDOWEv( struct $9CPCWINDOW* );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static void _ZN9CPCWINDOWaSERKS_( struct $9CPCWINDOW*, struct $9CPCWINDOW* );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static void _ZN9CPCWINDOWD1Ev( struct $9CPCWINDOW* );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void _ZN8TEXTBOXHC1ER8FBSTRINGllllll( struct $8TEXTBOXH*, FBSTRING*, int32, int32, int32, int32, int32, int32 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void _ZN8TEXTBOXH6REDRAWEv( struct $8TEXTBOXH* );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static void _ZN8TEXTBOXHaSERKS_( struct $8TEXTBOXH*, struct $8TEXTBOXH* );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void _ZN10TEXTBLOCKHC1ER8FBSTRINGllllll( struct $10TEXTBLOCKH*, FBSTRING*, int32, int32, int32, int32, int32, int32 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void _ZN10TEXTBLOCKH6REDRAWEv( struct $10TEXTBLOCKH* );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static void _ZN10TEXTBLOCKHaSERKS_( struct $10TEXTBLOCKH*, struct $10TEXTBLOCKH* );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void _ZN11PICTUREBOXHC1ER8FBSTRINGllllll( struct $11PICTUREBOXH*, FBSTRING*, int32, int32, int32, int32, int32, int32 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void _ZN11PICTUREBOXH6REDRAWEv( struct $11PICTUREBOXH* );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static void _ZN11PICTUREBOXHaSERKS_( struct $11PICTUREBOXH*, struct $11PICTUREBOXH* );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void NEWPICTUREBOX( FBSTRING*, int32, int32, int32, int32, int32 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void _ZN8CONSOLEHC1ER8FBSTRINGllllll( struct $8CONSOLEH*, FBSTRING*, int32, int32, int32, int32, int32, int32 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void _ZN8CONSOLEH6REDRAWEv( struct $8CONSOLEH* );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static void _ZN8CONSOLEHaSERKS_( struct $8CONSOLEH*, struct $8CONSOLEH* );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void NEWCONSOLE( FBSTRING*, int32, int32, int32, int32, int32 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void _ZN6CANVAHC1ER8FBSTRINGllllll( struct $6CANVAH*, FBSTRING*, int32, int32, int32, int32, int32, int32 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void _ZN6CANVAH6REDRAWEv( struct $6CANVAH* );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static void _ZN6CANVAHaSERKS_( struct $6CANVAH*, struct $6CANVAH* );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void _ZN7BUTTONHC1ER8FBSTRINGllllll( struct $7BUTTONH*, FBSTRING*, int32, int32, int32, int32, int32, int32 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void _ZN7BUTTONH6REDRAWEv( struct $7BUTTONH* );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static void _ZN7BUTTONHaSERKS_( struct $7BUTTONH*, struct $7BUTTONH* );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void BACKGROUND( FBSTRING* );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static void _GLOBAL__I( void ) __attribute__(( constructor ));
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static void _GLOBAL__D( void ) __attribute__(( destructor ));
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
struct $8fb_RTTI$;
struct $8fb_RTTI$ {
	void* STDLIBVTABLE;
	uint8* ID;
	struct $8fb_RTTI$* RTTIBASE;
};
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
__FB_STATIC_ASSERT( sizeof( struct $8fb_RTTI$ ) == 12 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
extern struct $8fb_RTTI$ __fb_ZTS6Object;
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static int32 IACTIVEWINDOW$ = 0;
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static int32 MAXW$;
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static int32 MAXH$;
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static int32 MOUSEX$;
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static int32 MOUSEY$;
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static int32 MOUSEBUTTON$;
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static FBSTRING DESIGN_IMAGE0$;
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static FBSTRING DESIGN_IMAGE1$;
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static FBSTRING DESIGN_IMAGE2$;
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static FBSTRING DESIGN_IMAGE3$;
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static FBSTRING BTN_CLOSE$;
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static FBSTRING BTN_SIZEUP$;
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static FBSTRING BTN_SIZEDOWN$;
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static FBSTRING BTN_REDUCE$;
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static struct $8fb_RTTI$ _ZTSN8HCONTROLE = { (void*)0u, (uint8*)"8HCONTROL", &__fb_ZTS6Object };
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static void* _ZTVN8HCONTROLE[3] = { (void*)0u, (void*)&_ZTSN8HCONTROLE, (void*)0u };
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static int32 EXTSX$;
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static int32 EXTSY$;
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static struct $N5XFONT9INTERFACEE FONT1$;
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static struct $8fb_RTTI$ _ZTSN9CPCWINDOWE = { (void*)0u, (uint8*)"9CPCWINDOW", &_ZTSN8HCONTROLE };
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static void* _ZTVN9CPCWINDOWE[3] = { (void*)0u, (void*)&_ZTSN9CPCWINDOWE, (void*)&_ZN9CPCWINDOW6REDRAWEv };
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static uint32 IWINDOWPOPULATION$ = 0u;
struct $7FBARRAYIP9CPCWINDOWE {
	struct $9CPCWINDOW** DATA;
	struct $9CPCWINDOW** PTR;
	int32 SIZE;
	int32 ELEMENT_LEN;
	int32 DIMENSIONS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[8];
};
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
__FB_STATIC_ASSERT( sizeof( struct $7FBARRAYIP9CPCWINDOWE ) == 116 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static struct $7FBARRAYIP9CPCWINDOWE WINDOWPTR$ = { (struct $9CPCWINDOW**)0u, (struct $9CPCWINDOW**)0u, 0, 4, 0, {  } };
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static struct $8fb_RTTI$ _ZTSN8TEXTBOXHE = { (void*)0u, (uint8*)"8TEXTBOXH", &_ZTSN8HCONTROLE };
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static void* _ZTVN8TEXTBOXHE[3] = { (void*)0u, (void*)&_ZTSN8TEXTBOXHE, (void*)&_ZN8TEXTBOXH6REDRAWEv };
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static uint32 TEXTBOXPOPULATION$ = 0u;
struct $7FBARRAYIP8TEXTBOXHE {
	struct $8TEXTBOXH** DATA;
	struct $8TEXTBOXH** PTR;
	int32 SIZE;
	int32 ELEMENT_LEN;
	int32 DIMENSIONS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[8];
};
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
__FB_STATIC_ASSERT( sizeof( struct $7FBARRAYIP8TEXTBOXHE ) == 116 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static struct $7FBARRAYIP8TEXTBOXHE TEXTBOXPTR$ = { (struct $8TEXTBOXH**)0u, (struct $8TEXTBOXH**)0u, 0, 4, 0, {  } };
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static struct $8fb_RTTI$ _ZTSN10TEXTBLOCKHE = { (void*)0u, (uint8*)"10TEXTBLOCKH", &_ZTSN8HCONTROLE };
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static void* _ZTVN10TEXTBLOCKHE[3] = { (void*)0u, (void*)&_ZTSN10TEXTBLOCKHE, (void*)&_ZN10TEXTBLOCKH6REDRAWEv };
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static uint32 TEXTBLOCKPOPULATION$ = 0u;
struct $7FBARRAYIP10TEXTBLOCKHE {
	struct $10TEXTBLOCKH** DATA;
	struct $10TEXTBLOCKH** PTR;
	int32 SIZE;
	int32 ELEMENT_LEN;
	int32 DIMENSIONS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[8];
};
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
__FB_STATIC_ASSERT( sizeof( struct $7FBARRAYIP10TEXTBLOCKHE ) == 116 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static struct $7FBARRAYIP10TEXTBLOCKHE TEXTBLOCKPTR$ = { (struct $10TEXTBLOCKH**)0u, (struct $10TEXTBLOCKH**)0u, 0, 4, 0, {  } };
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static struct $8fb_RTTI$ _ZTSN11PICTUREBOXHE = { (void*)0u, (uint8*)"11PICTUREBOXH", &_ZTSN8HCONTROLE };
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static void* _ZTVN11PICTUREBOXHE[3] = { (void*)0u, (void*)&_ZTSN11PICTUREBOXHE, (void*)&_ZN11PICTUREBOXH6REDRAWEv };
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static uint32 PICTUREBOXPOPULATION$ = 0u;
struct $7FBARRAYIP11PICTUREBOXHE {
	struct $11PICTUREBOXH** DATA;
	struct $11PICTUREBOXH** PTR;
	int32 SIZE;
	int32 ELEMENT_LEN;
	int32 DIMENSIONS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[8];
};
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
__FB_STATIC_ASSERT( sizeof( struct $7FBARRAYIP11PICTUREBOXHE ) == 116 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static struct $7FBARRAYIP11PICTUREBOXHE PICTUREBOXPTR$ = { (struct $11PICTUREBOXH**)0u, (struct $11PICTUREBOXH**)0u, 0, 4, 0, {  } };
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static struct $8fb_RTTI$ _ZTSN8CONSOLEHE = { (void*)0u, (uint8*)"8CONSOLEH", &_ZTSN8HCONTROLE };
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static void* _ZTVN8CONSOLEHE[3] = { (void*)0u, (void*)&_ZTSN8CONSOLEHE, (void*)&_ZN8CONSOLEH6REDRAWEv };
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static uint32 CONSOLEPOPULATION$ = 0u;
struct $7FBARRAYIP8CONSOLEHE {
	struct $8CONSOLEH** DATA;
	struct $8CONSOLEH** PTR;
	int32 SIZE;
	int32 ELEMENT_LEN;
	int32 DIMENSIONS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[8];
};
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
__FB_STATIC_ASSERT( sizeof( struct $7FBARRAYIP8CONSOLEHE ) == 116 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static struct $7FBARRAYIP8CONSOLEHE CONSOLEPTR$ = { (struct $8CONSOLEH**)0u, (struct $8CONSOLEH**)0u, 0, 4, 0, {  } };
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static struct $8fb_RTTI$ _ZTSN6CANVAHE = { (void*)0u, (uint8*)"6CANVAH", &_ZTSN8HCONTROLE };
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static void* _ZTVN6CANVAHE[3] = { (void*)0u, (void*)&_ZTSN6CANVAHE, (void*)&_ZN6CANVAH6REDRAWEv };
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static uint32 CANVAPOPULATION$ = 0u;
struct $7FBARRAYIP6CANVAHE {
	struct $6CANVAH** DATA;
	struct $6CANVAH** PTR;
	int32 SIZE;
	int32 ELEMENT_LEN;
	int32 DIMENSIONS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[8];
};
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
__FB_STATIC_ASSERT( sizeof( struct $7FBARRAYIP6CANVAHE ) == 116 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static struct $7FBARRAYIP6CANVAHE CANVAPTR$ = { (struct $6CANVAH**)0u, (struct $6CANVAH**)0u, 0, 4, 0, {  } };
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static struct $8fb_RTTI$ _ZTSN7BUTTONHE = { (void*)0u, (uint8*)"7BUTTONH", &_ZTSN8HCONTROLE };
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static void* _ZTVN7BUTTONHE[3] = { (void*)0u, (void*)&_ZTSN7BUTTONHE, (void*)&_ZN7BUTTONH6REDRAWEv };
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static uint32 BUTTONPOPULATION$ = 0u;
struct $7FBARRAYIP7BUTTONHE {
	struct $7BUTTONH** DATA;
	struct $7BUTTONH** PTR;
	int32 SIZE;
	int32 ELEMENT_LEN;
	int32 DIMENSIONS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[8];
};
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
__FB_STATIC_ASSERT( sizeof( struct $7FBARRAYIP7BUTTONHE ) == 116 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
static struct $7FBARRAYIP7BUTTONHE BUTTONPTR$ = { (struct $7BUTTONH**)0u, (struct $7BUTTONH**)0u, 0, 4, 0, {  } };

#line 6 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/SCI.bi"
void CPCMOUSE( void )
#line 6 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/SCI.bi"
{
	#line 6 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/SCI.bi"
	int32 TMP$16$1;
	#line 6 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/SCI.bi"
	int32 TMP$17$1;
	#line 6 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/SCI.bi"
	uint8* TMP$19$1;
	#line 6 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/SCI.bi"
	uint8* TMP$21$1;
	#line 6 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/SCI.bi"
	label$2:;
	#line 6 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/SCI.bi"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/SCI.bi" );
	#line 6 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/SCI.bi"
	TMP$19$1 = vr$0;
	#line 6 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/SCI.bi"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"CPCMOUSE" );
	#line 6 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/SCI.bi"
	TMP$21$1 = vr$1;
	#line 7 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/SCI.bi"
	TMP$17$1 = 0;
	#line 7 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/SCI.bi"
	TMP$16$1 = 0;
	#line 7 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/SCI.bi"
	fb_GetMouse( (int32*)&MOUSEX$, (int32*)&MOUSEY$, &TMP$16$1, (int32*)&MOUSEBUTTON$, &TMP$17$1 );
	#line 8 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/SCI.bi"
	label$3:;
	#line 8 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/SCI.bi"
	fb_ErrorSetFuncName( (uint8*)TMP$21$1 );
	#line 8 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/SCI.bi"
	fb_ErrorSetModName( (uint8*)TMP$19$1 );
#line 8 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/SCI.bi"
}

#line 50 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
void _ZN9CPCWINDOWC1Ev( struct $9CPCWINDOW* THIS$1 )
#line 50 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
{
	#line 50 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* TMP$43$1;
	#line 50 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* TMP$44$1;
	#line 50 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	_ZN8HCONTROLC1Ev( (struct $8HCONTROL*)THIS$1 );
	#line 50 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 68), 0, 4 );
	#line 50 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 72), 0, 4 );
	#line 50 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 76), 0, 4 );
	#line 50 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 80), 0, 4 );
	#line 50 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 84), 0, 4 );
	#line 50 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( (boolean*)((uint8*)THIS$1 + 88), 0, 1 );
	#line 50 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( (boolean*)((uint8*)THIS$1 + 89), 0, 1 );
	#line 50 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( (boolean*)((uint8*)THIS$1 + 90), 0, 1 );
	#line 50 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( (boolean*)((uint8*)THIS$1 + 91), 0, 1 );
	#line 50 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( (boolean*)((uint8*)THIS$1 + 92), 0, 1 );
	#line 50 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( (boolean*)((uint8*)THIS$1 + 93), 0, 1 );
	#line 50 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( (boolean*)((uint8*)THIS$1 + 94), 0, 1 );
	#line 50 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( (boolean*)((uint8*)THIS$1 + 95), 0, 1 );
	#line 50 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( (uint32*)((uint8*)THIS$1 + 96), 0, 4 );
	#line 50 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( (boolean*)((uint8*)THIS$1 + 100), 0, 1 );
	#line 50 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( (boolean*)((uint8*)THIS$1 + 101), 0, 1 );
	#line 50 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(void**)THIS$1 = (void*)((uint8*)_ZTVN9CPCWINDOWE + 8);
	#line 50 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* vr$35 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
	#line 50 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$43$1 = vr$35;
	#line 50 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* vr$36 = fb_ErrorSetFuncName( (uint8*)"" );
	#line 50 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$44$1 = vr$36;
	#line 50 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$18:;
	#line 51 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$19:;
	#line 51 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	fb_ErrorSetFuncName( (uint8*)TMP$44$1 );
	#line 51 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	fb_ErrorSetModName( (uint8*)TMP$43$1 );
#line 51 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
}

#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
void _ZN9CPCWINDOWC1ER8FBSTRINGlllllS1_jlll( struct $9CPCWINDOW* THIS$1, FBSTRING* HNAME1$1, int32 ID1$1, int32 X1$1, int32 Y1$1, int32 SX1$1, int32 SY1$1, FBSTRING* T1$1, uint32 C1$1, int32 WR1$1, int32 WG1$1, int32 WB1$1 )
#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
{
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* TMP$45$1;
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* TMP$46$1;
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$20:;
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$45$1 = vr$0;
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"" );
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$46$1 = vr$1;
	#line 54 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	_ZN8HCONTROLC1Ev( (struct $8HCONTROL*)THIS$1 );
	#line 54 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 68), 0, 4 );
	#line 54 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 72), 0, 4 );
	#line 54 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 76), 0, 4 );
	#line 54 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 80), 0, 4 );
	#line 54 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 84), 0, 4 );
	#line 54 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( (boolean*)((uint8*)THIS$1 + 88), 0, 1 );
	#line 54 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( (boolean*)((uint8*)THIS$1 + 89), 0, 1 );
	#line 54 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( (boolean*)((uint8*)THIS$1 + 90), 0, 1 );
	#line 54 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( (boolean*)((uint8*)THIS$1 + 91), 0, 1 );
	#line 54 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( (boolean*)((uint8*)THIS$1 + 92), 0, 1 );
	#line 54 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( (boolean*)((uint8*)THIS$1 + 93), 0, 1 );
	#line 54 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( (boolean*)((uint8*)THIS$1 + 94), 0, 1 );
	#line 54 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( (boolean*)((uint8*)THIS$1 + 95), 0, 1 );
	#line 54 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( (uint32*)((uint8*)THIS$1 + 96), 0, 4 );
	#line 54 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( (boolean*)((uint8*)THIS$1 + 100), 0, 1 );
	#line 54 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( (boolean*)((uint8*)THIS$1 + 101), 0, 1 );
	#line 54 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(void**)THIS$1 = (void*)((uint8*)_ZTVN9CPCWINDOWE + 8);
	#line 54 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	FBSTRING* vr$39 = fb_StrAssign( (void*)((uint8*)THIS$1 + 4), -1, (void*)HNAME1$1, -1, 0 );
	#line 55 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(int32*)((uint8*)THIS$1 + 16) = ID1$1;
	#line 56 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(int32*)((uint8*)THIS$1 + 24) = X1$1;
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(int32*)((uint8*)THIS$1 + 28) = Y1$1;
	#line 58 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(int32*)((uint8*)THIS$1 + 32) = SX1$1;
	#line 59 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(int32*)((uint8*)THIS$1 + 36) = SY1$1;
	#line 61 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(int32*)((uint8*)THIS$1 + 68) = X1$1;
	#line 62 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(int32*)((uint8*)THIS$1 + 72) = Y1$1;
	#line 63 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(int32*)((uint8*)THIS$1 + 76) = SX1$1;
	#line 64 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(int32*)((uint8*)THIS$1 + 80) = SY1$1;
	#line 66 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	FBSTRING* vr$51 = fb_StrAssign( (void*)((uint8*)THIS$1 + 56), -1, (void*)T1$1, -1, 0 );
	#line 67 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(uint32*)((uint8*)THIS$1 + 40) = C1$1;
	#line 68 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(int32*)((uint8*)THIS$1 + 44) = WR1$1;
	#line 69 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(int32*)((uint8*)THIS$1 + 48) = WG1$1;
	#line 70 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(int32*)((uint8*)THIS$1 + 52) = WB1$1;
	#line 72 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(boolean*)((uint8*)THIS$1 + 88) = (boolean)1;
	#line 73 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(boolean*)((uint8*)THIS$1 + 90) = (boolean)1;
	#line 74 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(boolean*)((uint8*)THIS$1 + 89) = (boolean)1;
	#line 75 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(boolean*)((uint8*)THIS$1 + 91) = (boolean)0;
	#line 76 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(boolean*)((uint8*)THIS$1 + 92) = (boolean)0;
	#line 77 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(boolean*)((uint8*)THIS$1 + 93) = (boolean)0;
	#line 78 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(boolean*)((uint8*)THIS$1 + 94) = (boolean)0;
	#line 79 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(boolean*)((uint8*)THIS$1 + 100) = (boolean)0;
	#line 80 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(boolean*)((uint8*)THIS$1 + 95) = (boolean)0;
	#line 81 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(boolean*)((uint8*)THIS$1 + 101) = (boolean)0;
	#line 83 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(int32*)((uint8*)THIS$1 + 84) = 0;
	#line 85 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(uint32*)((uint8*)THIS$1 + 96) = 0u;
	#line 86 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	_ZN9CPCWINDOW6REDRAWEv( THIS$1 );
	#line 87 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$21:;
	#line 87 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	fb_ErrorSetFuncName( (uint8*)TMP$46$1 );
	#line 87 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	fb_ErrorSetModName( (uint8*)TMP$45$1 );
#line 87 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
}

#line 89 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
void _ZN9CPCWINDOW8DOEVENTSEv( struct $9CPCWINDOW* THIS$1 )
#line 89 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
{
	#line 89 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* TMP$47$1;
	#line 89 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* TMP$49$1;
	#line 89 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$22:;
	#line 89 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
	#line 89 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$47$1 = vr$0;
	#line 89 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"DOEVENTS" );
	#line 89 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$49$1 = vr$1;
	#line 90 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	_ZN9CPCWINDOW13ONCLOSEWINDOWEv( THIS$1 );
	#line 91 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	_ZN9CPCWINDOW13ONFOCUSWINDOWEv( THIS$1 );
	#line 92 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	_ZN9CPCWINDOW12ONMOVEWINDOWEv( THIS$1 );
	#line 93 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	_ZN9CPCWINDOW16ONMINIMIZEWINDOWEv( THIS$1 );
	#line 94 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	_ZN9CPCWINDOW16ONMAXIMIZEWINDOWEv( THIS$1 );
	#line 95 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$23:;
	#line 95 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	fb_ErrorSetFuncName( (uint8*)TMP$49$1 );
	#line 95 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	fb_ErrorSetModName( (uint8*)TMP$47$1 );
#line 95 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
}

#line 97 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
void _ZN9CPCWINDOW12ONMOVEWINDOWEv( struct $9CPCWINDOW* THIS$1 )
#line 97 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
{
	#line 97 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 TMP$50$1;
	#line 97 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 TMP$51$1;
	#line 97 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* TMP$52$1;
	#line 97 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* TMP$54$1;
	#line 97 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$24:;
	#line 97 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
	#line 97 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$52$1 = vr$0;
	#line 97 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"ONMOVEWINDOW" );
	#line 97 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$54$1 = vr$1;
	#line 98 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 MOUSEX$1;
	#line 98 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( &MOUSEX$1, 0, 4 );
	#line 98 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 MOUSEY$1;
	#line 98 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( &MOUSEY$1, 0, 4 );
	#line 98 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 MOUSEBUTTON$1;
	#line 98 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( &MOUSEBUTTON$1, 0, 4 );
	#line 100 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$51$1 = 0;
	#line 100 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$50$1 = 0;
	#line 100 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	fb_GetMouse( (int32*)&MOUSEX$1, (int32*)&MOUSEY$1, &TMP$50$1, (int32*)&MOUSEBUTTON$1, &TMP$51$1 );
	#line 101 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	if( *(int32*)((uint8*)THIS$1 + 84) != 0 ) goto label$27;
	{
		#line 102 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		if( MOUSEBUTTON$1 != 1 ) goto label$29;
		{
			#line 103 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			if( (((-(MOUSEX$1 > *(int32*)((uint8*)THIS$1 + 24)) & -(MOUSEX$1 < (*(int32*)((uint8*)THIS$1 + 24) + *(int32*)((uint8*)THIS$1 + 32)))) & -(MOUSEY$1 > *(int32*)((uint8*)THIS$1 + 28))) & -(MOUSEY$1 < (*(int32*)((uint8*)THIS$1 + 28) + 25))) == 0 ) goto label$31;
			{
				#line 104 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				*(boolean*)((uint8*)THIS$1 + 93) = (boolean)1;
				#line 105 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				IACTIVEWINDOW$ = *(int32*)((uint8*)THIS$1 + 16);
			}
			#line 106 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			label$31:;
			#line 106 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			label$30:;
		}
		#line 107 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		label$29:;
		#line 107 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		label$28:;
	}
	#line 108 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$27:;
	#line 108 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$26:;
	#line 109 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$25:;
	#line 109 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	fb_ErrorSetFuncName( (uint8*)TMP$54$1 );
	#line 109 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	fb_ErrorSetModName( (uint8*)TMP$52$1 );
#line 109 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
}

#line 111 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
void _ZN9CPCWINDOW16ONMAXIMIZEWINDOWEv( struct $9CPCWINDOW* THIS$1 )
#line 111 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
{
	#line 111 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 TMP$55$1;
	#line 111 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 TMP$56$1;
	#line 111 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* TMP$57$1;
	#line 111 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* TMP$59$1;
	#line 111 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$32:;
	#line 111 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
	#line 111 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$57$1 = vr$0;
	#line 111 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"ONMAXIMIZEWINDOW" );
	#line 111 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$59$1 = vr$1;
	#line 112 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 MOUSEX$1;
	#line 112 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( &MOUSEX$1, 0, 4 );
	#line 112 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 MOUSEY$1;
	#line 112 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( &MOUSEY$1, 0, 4 );
	#line 112 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 MOUSEBUTTON$1;
	#line 112 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( &MOUSEBUTTON$1, 0, 4 );
	#line 114 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$56$1 = 0;
	#line 114 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$55$1 = 0;
	#line 114 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	fb_GetMouse( (int32*)&MOUSEX$1, (int32*)&MOUSEY$1, &TMP$55$1, (int32*)&MOUSEBUTTON$1, &TMP$56$1 );
	#line 115 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	if( MOUSEBUTTON$1 != 1 ) goto label$35;
	{
		#line 116 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		if( (((-(MOUSEX$1 > ((*(int32*)((uint8*)THIS$1 + 24) + *(int32*)((uint8*)THIS$1 + 32)) + -41)) & -(MOUSEX$1 < ((*(int32*)((uint8*)THIS$1 + 24) + *(int32*)((uint8*)THIS$1 + 32)) + -35))) & -((double)MOUSEY$1 > ((double)*(int32*)((uint8*)THIS$1 + 28) + 0x1.3p+3))) & -(MOUSEY$1 < (*(int32*)((uint8*)THIS$1 + 28) + 25))) == 0 ) goto label$37;
		{
			#line 118 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			*(boolean*)((uint8*)THIS$1 + 94) = (boolean)0;
			#line 119 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			if( *(boolean*)((uint8*)THIS$1 + 95) != (boolean)0 ) goto label$39;
			{
				#line 120 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				*(boolean*)((uint8*)THIS$1 + 95) = (boolean)1;
				#line 121 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				*(int32*)((uint8*)THIS$1 + 68) = *(int32*)((uint8*)THIS$1 + 24);
				#line 122 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				*(int32*)((uint8*)THIS$1 + 72) = *(int32*)((uint8*)THIS$1 + 28);
				#line 123 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				*(int32*)((uint8*)THIS$1 + 76) = *(int32*)((uint8*)THIS$1 + 32);
				#line 124 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				*(int32*)((uint8*)THIS$1 + 80) = *(int32*)((uint8*)THIS$1 + 36);
			}
			#line 125 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			goto label$38;
			#line 125 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			label$39:;
			{
				#line 126 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				*(boolean*)((uint8*)THIS$1 + 95) = (boolean)0;
				#line 127 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				*(boolean*)((uint8*)THIS$1 + 101) = (boolean)1;
				#line 128 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				*(int32*)((uint8*)THIS$1 + 24) = *(int32*)((uint8*)THIS$1 + 68);
				#line 129 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				*(int32*)((uint8*)THIS$1 + 28) = *(int32*)((uint8*)THIS$1 + 72);
				#line 130 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				*(int32*)((uint8*)THIS$1 + 32) = *(int32*)((uint8*)THIS$1 + 76);
				#line 131 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				*(int32*)((uint8*)THIS$1 + 36) = *(int32*)((uint8*)THIS$1 + 80);
			}
			#line 132 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			label$38:;
			#line 133 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			IACTIVEWINDOW$ = *(int32*)((uint8*)THIS$1 + 16);
			#line 134 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			*(boolean*)((uint8*)THIS$1 + 92) = (boolean)1;
			#line 135 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			_ZN9CPCWINDOW13ONFOCUSWINDOWEv( THIS$1 );
		}
		#line 136 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		label$37:;
		#line 136 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		label$36:;
	}
	#line 137 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$35:;
	#line 137 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$34:;
	#line 138 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$33:;
	#line 138 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	fb_ErrorSetFuncName( (uint8*)TMP$59$1 );
	#line 138 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	fb_ErrorSetModName( (uint8*)TMP$57$1 );
#line 138 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
}

#line 140 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
void _ZN9CPCWINDOW16ONMINIMIZEWINDOWEv( struct $9CPCWINDOW* THIS$1 )
#line 140 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
{
	#line 140 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 TMP$60$1;
	#line 140 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 TMP$61$1;
	#line 140 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* TMP$62$1;
	#line 140 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* TMP$64$1;
	#line 140 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$40:;
	#line 140 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
	#line 140 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$62$1 = vr$0;
	#line 140 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"ONMINIMIZEWINDOW" );
	#line 140 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$64$1 = vr$1;
	#line 141 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 MOUSEX$1;
	#line 141 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( &MOUSEX$1, 0, 4 );
	#line 141 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 MOUSEY$1;
	#line 141 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( &MOUSEY$1, 0, 4 );
	#line 141 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 MOUSEBUTTON$1;
	#line 141 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( &MOUSEBUTTON$1, 0, 4 );
	#line 143 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$61$1 = 0;
	#line 143 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$60$1 = 0;
	#line 143 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	fb_GetMouse( (int32*)&MOUSEX$1, (int32*)&MOUSEY$1, &TMP$60$1, (int32*)&MOUSEBUTTON$1, &TMP$61$1 );
	#line 144 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	if( MOUSEBUTTON$1 != 1 ) goto label$43;
	{
		#line 145 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		if( (((-(MOUSEX$1 > ((*(int32*)((uint8*)THIS$1 + 24) + *(int32*)((uint8*)THIS$1 + 32)) + -27)) & -(MOUSEX$1 < ((*(int32*)((uint8*)THIS$1 + 24) + *(int32*)((uint8*)THIS$1 + 32)) + -21))) & -((double)MOUSEY$1 > ((double)*(int32*)((uint8*)THIS$1 + 28) + 0x1.3p+3))) & -(MOUSEY$1 < (*(int32*)((uint8*)THIS$1 + 28) + 25))) == 0 ) goto label$45;
		{
			#line 147 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			*(boolean*)((uint8*)THIS$1 + 95) = (boolean)0;
			#line 148 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			if( *(boolean*)((uint8*)THIS$1 + 94) != (boolean)0 ) goto label$47;
			{
				#line 149 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				*(boolean*)((uint8*)THIS$1 + 94) = (boolean)1;
				#line 150 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				*(int32*)((uint8*)THIS$1 + 80) = *(int32*)((uint8*)THIS$1 + 36);
			}
			#line 151 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			goto label$46;
			#line 151 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			label$47:;
			{
				#line 152 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				*(boolean*)((uint8*)THIS$1 + 94) = (boolean)0;
				#line 153 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				*(boolean*)((uint8*)THIS$1 + 100) = (boolean)1;
				#line 154 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				*(int32*)((uint8*)THIS$1 + 36) = *(int32*)((uint8*)THIS$1 + 80);
			}
			#line 155 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			label$46:;
			#line 156 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			IACTIVEWINDOW$ = *(int32*)((uint8*)THIS$1 + 16);
		}
		#line 157 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		label$45:;
		#line 157 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		label$44:;
	}
	#line 158 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$43:;
	#line 158 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$42:;
	#line 159 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$41:;
	#line 159 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	fb_ErrorSetFuncName( (uint8*)TMP$64$1 );
	#line 159 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	fb_ErrorSetModName( (uint8*)TMP$62$1 );
#line 159 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
}

#line 161 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
void _ZN9CPCWINDOW13ONFOCUSWINDOWEv( struct $9CPCWINDOW* THIS$1 )
#line 161 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
{
	#line 161 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 TMP$65$1;
	#line 161 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 TMP$66$1;
	#line 161 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* TMP$67$1;
	#line 161 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* TMP$69$1;
	#line 161 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$48:;
	#line 161 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
	#line 161 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$67$1 = vr$0;
	#line 161 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"ONFOCUSWINDOW" );
	#line 161 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$69$1 = vr$1;
	#line 162 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 MOUSEX$1;
	#line 162 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( &MOUSEX$1, 0, 4 );
	#line 162 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 MOUSEY$1;
	#line 162 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( &MOUSEY$1, 0, 4 );
	#line 162 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 MOUSEBUTTON$1;
	#line 162 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( &MOUSEBUTTON$1, 0, 4 );
	#line 164 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$66$1 = 0;
	#line 164 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$65$1 = 0;
	#line 164 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	fb_GetMouse( (int32*)&MOUSEX$1, (int32*)&MOUSEY$1, &TMP$65$1, (int32*)&MOUSEBUTTON$1, &TMP$66$1 );
	#line 165 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	if( MOUSEBUTTON$1 != 1 ) goto label$51;
	{
		#line 166 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		if( (((-(MOUSEX$1 > *(int32*)((uint8*)THIS$1 + 24)) & -(MOUSEX$1 < (*(int32*)((uint8*)THIS$1 + 24) + *(int32*)((uint8*)THIS$1 + 32)))) & -(MOUSEY$1 > *(int32*)((uint8*)THIS$1 + 28))) & -(MOUSEY$1 < (*(int32*)((uint8*)THIS$1 + 28) + *(int32*)((uint8*)THIS$1 + 36)))) == 0 ) goto label$53;
		{
			#line 167 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			*(boolean*)((uint8*)THIS$1 + 92) = (boolean)1;
			#line 168 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			IACTIVEWINDOW$ = *(int32*)((uint8*)THIS$1 + 16);
		}
		#line 169 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		label$53:;
		#line 169 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		label$52:;
	}
	#line 170 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$51:;
	#line 170 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$50:;
	#line 171 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$49:;
	#line 171 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	fb_ErrorSetFuncName( (uint8*)TMP$69$1 );
	#line 171 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	fb_ErrorSetModName( (uint8*)TMP$67$1 );
#line 171 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
}

#line 173 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
void _ZN9CPCWINDOW13ONCLOSEWINDOWEv( struct $9CPCWINDOW* THIS$1 )
#line 173 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
{
	#line 173 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 TMP$70$1;
	#line 173 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 TMP$71$1;
	#line 173 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* TMP$72$1;
	#line 173 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* TMP$74$1;
	#line 173 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$54:;
	#line 173 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
	#line 173 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$72$1 = vr$0;
	#line 173 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"ONCLOSEWINDOW" );
	#line 173 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$74$1 = vr$1;
	#line 174 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 MOUSEX$1;
	#line 174 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( &MOUSEX$1, 0, 4 );
	#line 174 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 MOUSEY$1;
	#line 174 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( &MOUSEY$1, 0, 4 );
	#line 174 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 MOUSEBUTTON$1;
	#line 174 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( &MOUSEBUTTON$1, 0, 4 );
	#line 176 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$71$1 = 0;
	#line 176 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$70$1 = 0;
	#line 176 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	fb_GetMouse( (int32*)&MOUSEX$1, (int32*)&MOUSEY$1, &TMP$70$1, (int32*)&MOUSEBUTTON$1, &TMP$71$1 );
	#line 177 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	if( MOUSEBUTTON$1 != 1 ) goto label$57;
	{
		#line 178 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		if( (((-(MOUSEX$1 > ((*(int32*)((uint8*)THIS$1 + 24) + *(int32*)((uint8*)THIS$1 + 32)) + -13)) & -(MOUSEX$1 < ((*(int32*)((uint8*)THIS$1 + 24) + *(int32*)((uint8*)THIS$1 + 32)) + -7))) & -((double)MOUSEY$1 > ((double)*(int32*)((uint8*)THIS$1 + 28) + 0x1.3p+3))) & -(MOUSEY$1 < (*(int32*)((uint8*)THIS$1 + 28) + 25))) == 0 ) goto label$59;
		{
			#line 180 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			*(boolean*)((uint8*)THIS$1 + 91) = (boolean)1;
			#line 181 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			IACTIVEWINDOW$ = *(int32*)((uint8*)THIS$1 + 16);
		}
		#line 182 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		label$59:;
		#line 182 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		label$58:;
	}
	#line 183 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$57:;
	#line 183 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$56:;
	#line 184 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$55:;
	#line 184 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	fb_ErrorSetFuncName( (uint8*)TMP$74$1 );
	#line 184 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	fb_ErrorSetModName( (uint8*)TMP$72$1 );
#line 184 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
}

#line 186 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
void _ZN9CPCWINDOW6REDRAWEv( struct $9CPCWINDOW* THIS$1 )
#line 186 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
{
	#line 186 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	FBSTRING TMP$76$1;
	#line 186 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	FBSTRING TMP$78$1;
	#line 186 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 TMP$79$1;
	#line 186 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 TMP$80$1;
	#line 186 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	FBSTRING TMP$82$1;
	#line 186 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 TMP$83$1;
	#line 186 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 TMP$84$1;
	#line 186 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	FBSTRING TMP$86$1;
	#line 186 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 TMP$87$1;
	#line 186 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 TMP$88$1;
	#line 186 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	FBSTRING TMP$90$1;
	#line 186 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 TMP$91$1;
	#line 186 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 TMP$92$1;
	#line 186 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* TMP$98$1;
	#line 186 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* TMP$100$1;
	#line 186 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$60:;
	#line 186 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
	#line 186 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$98$1 = vr$0;
	#line 186 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"REDRAW" );
	#line 186 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$100$1 = vr$1;
	#line 188 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	EXTSX$ = *(int32*)((uint8*)THIS$1 + 32);
	#line 189 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	EXTSY$ = *(int32*)((uint8*)THIS$1 + 36);
	#line 192 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( &TMP$76$1, 0, 12 );
	#line 192 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	FBSTRING* vr$6 = fb_StrAssign( (void*)&TMP$76$1, -1, (void*)"bahns.xf", 9, 0 );
	#line 192 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	_ZN5XFONT9INTERFACE8LOADFONTER8FBSTRINGh( &FONT1$, &TMP$76$1, (uint8)1u );
	#line 192 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	fb_StrDelete( (FBSTRING*)&TMP$76$1 );
	#line 193 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	void* IMG_TEST$1;
	#line 193 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( &IMG_TEST$1, 0, 4 );
	#line 194 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	void* CORNER_LEFT$1;
	#line 194 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( &CORNER_LEFT$1, 0, 4 );
	#line 195 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	void* CORNER_RIGHT$1;
	#line 195 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( &CORNER_RIGHT$1, 0, 4 );
	#line 196 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	void* BETWEEN_CORNER$1;
	#line 196 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( &BETWEEN_CORNER$1, 0, 4 );
	#line 197 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	void* UNDER_CORNERS$1;
	#line 197 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( &UNDER_CORNERS$1, 0, 4 );
	#line 198 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	void* BETWEEN_CORNER1$1;
	#line 198 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( &BETWEEN_CORNER1$1, 0, 4 );
	#line 199 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	void* UNDER_CORNERS1$1;
	#line 199 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( &UNDER_CORNERS1$1, 0, 4 );
	#line 201 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	void* CLOSE_BTN$1;
	#line 201 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( &CLOSE_BTN$1, 0, 4 );
	#line 205 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$80$1 = 7;
	#line 205 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$79$1 = 7;
	#line 205 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( &TMP$78$1, 0, 12 );
	#line 205 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	FBSTRING* vr$21 = fb_StrAssign( (void*)&TMP$78$1, -1, (void*)"OS/MEDIA/GUI/WIN/WIN_TL.png", 28, 0 );
	#line 205 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	void* vr$23 = CHARGER_PNG( &TMP$78$1, 32, 5, &TMP$79$1, &TMP$80$1 );
	#line 205 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	CORNER_LEFT$1 = vr$23;
	#line 205 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	fb_StrDelete( (FBSTRING*)&TMP$78$1 );
	#line 206 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$84$1 = 7;
	#line 206 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$83$1 = 7;
	#line 206 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( &TMP$82$1, 0, 12 );
	#line 206 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	FBSTRING* vr$29 = fb_StrAssign( (void*)&TMP$82$1, -1, (void*)"OS/MEDIA/GUI/WIN/WIN_TR.png", 28, 0 );
	#line 206 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	void* vr$31 = CHARGER_PNG( &TMP$82$1, 32, 5, &TMP$83$1, &TMP$84$1 );
	#line 206 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	CORNER_RIGHT$1 = vr$31;
	#line 206 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	fb_StrDelete( (FBSTRING*)&TMP$82$1 );
	#line 207 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$88$1 = 8;
	#line 207 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$87$1 = 4;
	#line 207 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( &TMP$86$1, 0, 12 );
	#line 207 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	FBSTRING* vr$37 = fb_StrAssign( (void*)&TMP$86$1, -1, (void*)"OS/MEDIA/GUI/WIN/WIN_TM.png", 28, 0 );
	#line 207 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	void* vr$39 = CHARGER_PNG( &TMP$86$1, 32, 5, &TMP$87$1, &TMP$88$1 );
	#line 207 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	BETWEEN_CORNER$1 = vr$39;
	#line 207 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	fb_StrDelete( (FBSTRING*)&TMP$86$1 );
	#line 209 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	if( CORNER_LEFT$1 != (void*)0u ) goto label$63;
	{
		#line 210 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		FBSTRING* vr$41 = fb_StrAllocTempDescZEx( (uint8*)"ERROR", 5 );
		#line 210 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		fb_PrintString( 0, (FBSTRING*)vr$41, 1 );
	}
	#line 211 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$63:;
	#line 211 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$62:;
	#line 213 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$92$1 = 8;
	#line 213 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$91$1 = 4;
	#line 213 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( &TMP$90$1, 0, 12 );
	#line 213 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	FBSTRING* vr$46 = fb_StrAssign( (void*)&TMP$90$1, -1, (void*)"OS/MEDIA/GUI/WIN/WIN_TM.png", 28, 0 );
	#line 213 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	void* vr$48 = CHARGER_PNG( &TMP$90$1, 32, 5, &TMP$91$1, &TMP$92$1 );
	#line 213 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	UNDER_CORNERS$1 = vr$48;
	#line 213 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	fb_StrDelete( (FBSTRING*)&TMP$90$1 );
	#line 215 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	void* vr$52 = fb_GfxImageCreate( *(int32*)((uint8*)THIS$1 + 32) + 2, 19, 0u, 0, 0 );
	#line 215 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	UNDER_CORNERS1$1 = vr$52;
	#line 216 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	IMG_CHANGE_SIZE_QUICK( &UNDER_CORNERS$1, &UNDER_CORNERS1$1, *(int32*)((uint8*)THIS$1 + 24), *(int32*)((uint8*)THIS$1 + 24), 4, 8, *(int32*)((uint8*)THIS$1 + 32) + 2, 19 );
	#line 218 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	void* vr$61 = fb_GfxImageCreate( *(int32*)((uint8*)THIS$1 + 32) + -13, 9, 0u, 0, 0 );
	#line 218 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	BETWEEN_CORNER1$1 = vr$61;
	#line 219 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	IMG_CHANGE_SIZE_QUICK( &BETWEEN_CORNER$1, &BETWEEN_CORNER1$1, *(int32*)((uint8*)THIS$1 + 24) + 7, *(int32*)((uint8*)THIS$1 + 24), 4, 8, *(int32*)((uint8*)THIS$1 + 32) + -12, 9 );
	#line 220 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$64:;
	#line 220 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 vr$75 = fb_GfxPut( (void*)0u, (float)(*(int32*)((uint8*)THIS$1 + 24) + 6), (float)(*(int32*)((uint8*)THIS$1 + 28) + -1), (void*)BETWEEN_CORNER1$1, -65536, -65536, -65536, -65536, 0, 6, (void*)&fb_hPutAlpha, -1, (void*)0u, (void*)0u );
	#line 220 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	if( vr$75 == 0 ) goto label$65;
	#line 220 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	void* vr$78 = fb_ErrorThrowAt( 220, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas", (void*)&&label$64, (void*)&&label$65 );
	#line 220 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	goto *vr$78;
	#line 220 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$65:;
	#line 225 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	if( *(int32*)((uint8*)THIS$1 + 16) != IACTIVEWINDOW$ ) goto label$67;
	{
		#line 226 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		fb_GfxLine( (void*)0u, (float)*(int32*)((uint8*)THIS$1 + 24), (float)(*(int32*)((uint8*)THIS$1 + 28) + 25), (float)(*(int32*)((uint8*)THIS$1 + 24) + *(int32*)((uint8*)THIS$1 + 32)), (float)((*(int32*)((uint8*)THIS$1 + 28) + *(int32*)((uint8*)THIS$1 + 36)) + -25), (((*(uint32*)((uint8*)THIS$1 + 44) << (16 & 31)) | (*(uint32*)((uint8*)THIS$1 + 48) << (8 & 31))) | *(uint32*)((uint8*)THIS$1 + 52)) | 4278190080u, 2, 65535u, 0 );
	}
	#line 228 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	goto label$66;
	#line 228 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$67:;
	{
		#line 229 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		fb_GfxLine( (void*)0u, (float)*(int32*)((uint8*)THIS$1 + 24), (float)(*(int32*)((uint8*)THIS$1 + 28) + 25), (float)(*(int32*)((uint8*)THIS$1 + 24) + *(int32*)((uint8*)THIS$1 + 32)), (float)((*(int32*)((uint8*)THIS$1 + 28) + *(int32*)((uint8*)THIS$1 + 36)) + -25), (((*(uint32*)((uint8*)THIS$1 + 44) << (16 & 31)) | (*(uint32*)((uint8*)THIS$1 + 48) << (8 & 31))) | *(uint32*)((uint8*)THIS$1 + 52)) | 4278190080u, 2, 65535u, 0 );
	}
	#line 230 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$66:;
	#line 233 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$68:;
	#line 233 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 vr$128 = fb_GfxPut( (void*)0u, (float)*(int32*)((uint8*)THIS$1 + 24), (float)*(int32*)((uint8*)THIS$1 + 28), (void*)CORNER_LEFT$1, -65536, -65536, -65536, -65536, 0, 6, (void*)&fb_hPutAlpha, -1, (void*)0u, (void*)0u );
	#line 233 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	if( vr$128 == 0 ) goto label$69;
	#line 233 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	void* vr$131 = fb_ErrorThrowAt( 233, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas", (void*)&&label$68, (void*)&&label$69 );
	#line 233 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	goto *vr$131;
	#line 233 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$69:;
	#line 234 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$70:;
	#line 234 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 vr$139 = fb_GfxPut( (void*)0u, (float)((*(int32*)((uint8*)THIS$1 + 24) + *(int32*)((uint8*)THIS$1 + 32)) + -7), (float)*(int32*)((uint8*)THIS$1 + 28), (void*)CORNER_RIGHT$1, -65536, -65536, -65536, -65536, 0, 6, (void*)&fb_hPutAlpha, -1, (void*)0u, (void*)0u );
	#line 234 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	if( vr$139 == 0 ) goto label$71;
	#line 234 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	void* vr$142 = fb_ErrorThrowAt( 234, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas", (void*)&&label$70, (void*)&&label$71 );
	#line 234 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	goto *vr$142;
	#line 234 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$71:;
	#line 235 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$72:;
	#line 235 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 vr$149 = fb_GfxPut( (void*)0u, (float)(*(int32*)((uint8*)THIS$1 + 24) + -1), (float)(*(int32*)((uint8*)THIS$1 + 28) + 6), (void*)UNDER_CORNERS1$1, -65536, -65536, -65536, -65536, 0, 6, (void*)&fb_hPutAlpha, -1, (void*)0u, (void*)0u );
	#line 235 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	if( vr$149 == 0 ) goto label$73;
	#line 235 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	void* vr$152 = fb_ErrorThrowAt( 235, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas", (void*)&&label$72, (void*)&&label$73 );
	#line 235 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	goto *vr$152;
	#line 235 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$73:;
	#line 236 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$74:;
	#line 236 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 vr$158 = fb_GfxPut( (void*)0u, (float)(*(int32*)((uint8*)THIS$1 + 24) + 7), (float)*(int32*)((uint8*)THIS$1 + 28), (void*)BETWEEN_CORNER1$1, -65536, -65536, -65536, -65536, 0, 6, (void*)&fb_hPutAlpha, -1, (void*)0u, (void*)0u );
	#line 236 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	if( vr$158 == 0 ) goto label$75;
	#line 236 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	void* vr$161 = fb_ErrorThrowAt( 236, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas", (void*)&&label$74, (void*)&&label$75 );
	#line 236 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	goto *vr$161;
	#line 236 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$75:;
	#line 246 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	_ZN5XFONT9INTERFACE16FONTINDEX__set__Eh( &FONT1$, (uint8)1u );
	#line 247 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	_ZN5XFONT9INTERFACE16BACKCOLOR__set__Ej( &FONT1$, 0u );
	#line 248 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	_ZN5XFONT9INTERFACE16FORECOLOR__set__Ej( &FONT1$, 4294967295u );
	#line 249 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	_ZN5XFONT9INTERFACE10DRAWSTRINGEPvR8FBSTRINGssffh( &FONT1$, (void*)0u, (FBSTRING*)((uint8*)THIS$1 + 56), (int16)(*(int32*)((uint8*)THIS$1 + 24) + 4), (int16)(*(int32*)((uint8*)THIS$1 + 28) + 2), 0x1.p+0f, 0x1.p+0f, (uint8)0u );
	#line 255 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	if( *(boolean*)((uint8*)THIS$1 + 88) != (boolean)1 ) goto label$77;
	{
		#line 255 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		FBSTRING TMP$95$2;
		#line 255 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		int32 TMP$96$2;
		#line 255 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		int32 TMP$97$2;
		#line 260 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		TMP$97$2 = 20;
		#line 260 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		TMP$96$2 = 20;
		#line 260 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		__builtin_memset( &TMP$95$2, 0, 12 );
		#line 260 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		FBSTRING* vr$175 = fb_StrAssign( (void*)&TMP$95$2, -1, (void*)"OS/MEDIA/GUI/WIN/B_CLOSE.png", 29, 0 );
		#line 260 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		void* vr$177 = CHARGER_PNG( &TMP$95$2, 32, 5, &TMP$96$2, &TMP$97$2 );
		#line 260 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		CLOSE_BTN$1 = vr$177;
		#line 260 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		fb_StrDelete( (FBSTRING*)&TMP$95$2 );
		#line 262 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		label$78:;
		#line 262 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		int32 vr$187 = fb_GfxPut( (void*)0u, (float)((*(int32*)((uint8*)THIS$1 + 24) + *(int32*)((uint8*)THIS$1 + 32)) + -27), (float)(*(int32*)((uint8*)THIS$1 + 28) + 2), (void*)CLOSE_BTN$1, -65536, -65536, -65536, -65536, 0, 6, (void*)&fb_hPutAlpha, -1, (void*)0u, (void*)0u );
		#line 262 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		if( vr$187 == 0 ) goto label$79;
		#line 262 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		void* vr$190 = fb_ErrorThrowAt( 262, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas", (void*)&&label$78, (void*)&&label$79 );
		#line 262 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		goto *vr$190;
		#line 262 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		label$79:;
	}
	#line 263 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$77:;
	#line 263 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$76:;
	#line 277 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$61:;
	#line 277 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	fb_ErrorSetFuncName( (uint8*)TMP$100$1 );
	#line 277 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	fb_ErrorSetModName( (uint8*)TMP$98$1 );
#line 277 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
}

#line 279 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
void NEWWINDOW( FBSTRING* HNAME$1, int32 X$1, int32 Y$1, int32 SX$1, int32 SY$1, FBSTRING* TITLE$1, uint32 C$1, int32 WR$1, int32 WG$1, int32 WB$1 )
#line 279 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
{
	#line 279 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 TMP$101$1;
	#line 279 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	struct $9CPCWINDOW* TMP$102$1;
	#line 279 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* TMP$104$1;
	#line 279 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* TMP$106$1;
	#line 279 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$80:;
	#line 279 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
	#line 279 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$104$1 = vr$0;
	#line 279 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"NEWWINDOW" );
	#line 279 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$106$1 = vr$1;
	#line 281 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	IWINDOWPOPULATION$ = IWINDOWPOPULATION$ + 1u;
	#line 282 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$82:;
	#line 282 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 vr$3 = fb_ArrayRedimPresvEx( (struct $7FBARRAYIvE*)&WINDOWPTR$, 4u, -1, 0, 1u, 1, (int32)IWINDOWPOPULATION$ );
	#line 282 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	if( vr$3 == 0 ) goto label$83;
	#line 282 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	void* vr$6 = fb_ErrorThrowAt( 282, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas", (void*)&&label$82, (void*)&&label$83 );
	#line 282 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	goto *vr$6;
	#line 282 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$83:;
	#line 283 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	void* vr$7 = malloc( 104u );
	#line 283 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$102$1 = (struct $9CPCWINDOW*)vr$7;
	#line 283 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	if( TMP$102$1 == (struct $9CPCWINDOW*)0u ) goto label$84;
	#line 283 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	_ZN9CPCWINDOWC1ER8FBSTRINGlllllS1_jlll( TMP$102$1, HNAME$1, (int32)IWINDOWPOPULATION$, X$1, Y$1, SX$1, SY$1, TITLE$1, C$1, WR$1, WG$1, WB$1 );
	#line 283 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$84:;
	#line 283 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$101$1 = (int32)IWINDOWPOPULATION$;
	#line 283 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	void* vr$10 = fb_ArrayBoundChk( TMP$101$1, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 283, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
	#line 283 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	if( vr$10 == 0 ) goto label$85;
	#line 283 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	goto *vr$10;
	#line 283 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$85:;
	#line 283 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(struct $9CPCWINDOW**)((TMP$101$1 << (2 & 31)) + *(int32*)&WINDOWPTR$) = TMP$102$1;
	#line 284 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$81:;
	#line 284 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	fb_ErrorSetFuncName( (uint8*)TMP$106$1 );
	#line 284 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	fb_ErrorSetModName( (uint8*)TMP$104$1 );
#line 284 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
}

#line 286 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
void WATCHCPCWINDOWS( void )
#line 286 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
{
	#line 286 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 TMP$107$1;
	#line 286 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 TMP$108$1;
	#line 286 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* TMP$153$1;
	#line 286 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* TMP$155$1;
	#line 286 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$86:;
	#line 286 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
	#line 286 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$153$1 = vr$0;
	#line 286 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"WATCHCPCWINDOWS" );
	#line 286 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$155$1 = vr$1;
	#line 288 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 MOUSEX$1;
	#line 288 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( &MOUSEX$1, 0, 4 );
	#line 288 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 MOUSEY$1;
	#line 288 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( &MOUSEY$1, 0, 4 );
	#line 288 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 MOUSEBUTTON$1;
	#line 288 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( &MOUSEBUTTON$1, 0, 4 );
	#line 288 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 X1$1;
	#line 288 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( &X1$1, 0, 4 );
	#line 288 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 Y1$1;
	#line 288 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( &Y1$1, 0, 4 );
	#line 289 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$108$1 = 0;
	#line 289 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$107$1 = 0;
	#line 289 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	fb_GetMouse( (int32*)&MOUSEX$1, (int32*)&MOUSEY$1, &TMP$107$1, (int32*)&MOUSEBUTTON$1, &TMP$108$1 );
	#line 290 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	X1$1 = MOUSEX$1;
	#line 291 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	Y1$1 = MOUSEY$1;
	#line 292 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	if( MOUSEBUTTON$1 != 1 ) goto label$89;
	{
		{
			#line 293 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			int32 I$3;
			#line 293 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			int32 vr$12 = fb_ArrayUBound( (struct $7FBARRAYIKvE*)&WINDOWPTR$, 1 );
			#line 293 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			I$3 = vr$12;
			#line 293 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			int32 TMP$109$3;
			#line 293 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			int32 vr$13 = fb_ArrayLBound( (struct $7FBARRAYIKvE*)&WINDOWPTR$, 1 );
			#line 293 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			TMP$109$3 = vr$13;
			#line 293 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			goto label$90;
			#line 293 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			label$93:;
			{
				#line 293 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				int32 TMP$110$4;
				#line 293 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				int32 TMP$111$4;
				#line 293 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				struct $9CPCWINDOW* TMP$112$4;
				#line 293 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				int32 TMP$137$4;
				#line 293 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				struct $9CPCWINDOW* TMP$138$4;
				#line 294 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				TMP$110$4 = I$3;
				#line 294 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				void* vr$16 = fb_ArrayBoundChk( TMP$110$4, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 294, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
				#line 294 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				if( vr$16 == 0 ) goto label$118;
				#line 294 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				goto *vr$16;
				#line 294 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				label$118:;
				#line 294 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				if( *(struct $9CPCWINDOW**)((TMP$110$4 << (2 & 31)) + *(int32*)&WINDOWPTR$) != (struct $9CPCWINDOW*)0u ) goto label$95;
				{
					#line 294 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					goto label$91;
					#line 294 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					label$95:;
				}
				#line 297 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				TMP$111$4 = I$3;
				#line 297 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				void* vr$21 = fb_ArrayBoundChk( TMP$111$4, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 297, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
				#line 297 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				if( vr$21 == 0 ) goto label$119;
				#line 297 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				goto *vr$21;
				#line 297 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				label$119:;
				#line 297 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				TMP$112$4 = *(struct $9CPCWINDOW**)((TMP$111$4 << (2 & 31)) + *(int32*)&WINDOWPTR$);
				#line 297 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				void* vr$24 = fb_NullPtrChk( (void*)TMP$112$4, 297, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
				#line 297 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				if( vr$24 == 0 ) goto label$120;
				#line 297 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				goto *vr$24;
				#line 297 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				label$120:;
				#line 297 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				if( *(boolean*)((uint8*)TMP$112$4 + 93) != (boolean)1 ) goto label$97;
				{
					#line 297 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					int32 TMP$113$5;
					#line 297 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					struct $9CPCWINDOW* TMP$114$5;
					#line 297 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					int32 TMP$115$5;
					#line 297 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					struct $9CPCWINDOW* TMP$116$5;
					#line 298 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					TMP$113$5 = I$3;
					#line 298 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					void* vr$28 = fb_ArrayBoundChk( TMP$113$5, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 298, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
					#line 298 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					if( vr$28 == 0 ) goto label$121;
					#line 298 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					goto *vr$28;
					#line 298 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					label$121:;
					#line 298 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					TMP$114$5 = *(struct $9CPCWINDOW**)((TMP$113$5 << (2 & 31)) + *(int32*)&WINDOWPTR$);
					#line 298 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					void* vr$31 = fb_NullPtrChk( (void*)TMP$114$5, 298, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
					#line 298 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					if( vr$31 == 0 ) goto label$122;
					#line 298 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					goto *vr$31;
					#line 298 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					label$122:;
					#line 298 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					*(boolean*)((uint8*)TMP$114$5 + 93) = (boolean)0;
					#line 299 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					TMP$115$5 = I$3;
					#line 299 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					void* vr$35 = fb_ArrayBoundChk( TMP$115$5, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 299, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
					#line 299 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					if( vr$35 == 0 ) goto label$123;
					#line 299 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					goto *vr$35;
					#line 299 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					label$123:;
					#line 299 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					TMP$116$5 = *(struct $9CPCWINDOW**)((TMP$115$5 << (2 & 31)) + *(int32*)&WINDOWPTR$);
					#line 299 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					void* vr$38 = fb_NullPtrChk( (void*)TMP$116$5, 299, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
					#line 299 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					if( vr$38 == 0 ) goto label$124;
					#line 299 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					goto *vr$38;
					#line 299 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					label$124:;
					#line 299 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					if( *(int32*)((uint8*)TMP$116$5 + 16) != IACTIVEWINDOW$ ) goto label$99;
					{
						{
							#line 300 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							int32 TMP$117$7;
							#line 300 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							int32 TMP$118$7;
							#line 300 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							struct $9CPCWINDOW** TMP$119$7;
							#line 300 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							struct $9CPCWINDOW* TMP$120$7;
							#line 300 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							int32 vr$40 = fb_ArrayUBound( (struct $7FBARRAYIKvE*)&WINDOWPTR$, 1 );
							#line 300 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							TMP$118$7 = vr$40;
							#line 300 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							void* vr$43 = fb_ArrayBoundChk( TMP$118$7, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 300, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
							#line 300 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							if( vr$43 == 0 ) goto label$125;
							#line 300 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							goto *vr$43;
							#line 300 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							label$125:;
							#line 300 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							TMP$119$7 = (struct $9CPCWINDOW**)((TMP$118$7 << (2 & 31)) + *(int32*)&WINDOWPTR$);
							#line 300 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							TMP$117$7 = I$3;
							#line 300 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							void* vr$49 = fb_ArrayBoundChk( TMP$117$7, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 300, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
							#line 300 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							if( vr$49 == 0 ) goto label$126;
							#line 300 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							goto *vr$49;
							#line 300 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							label$126:;
							#line 300 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							TMP$120$7 = *(struct $9CPCWINDOW**)((TMP$117$7 << (2 & 31)) + *(int32*)&WINDOWPTR$);
							#line 300 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							TMP$117$7 = I$3;
							#line 300 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							void* vr$55 = fb_ArrayBoundChk( TMP$117$7, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 300, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
							#line 300 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							if( vr$55 == 0 ) goto label$127;
							#line 300 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							goto *vr$55;
							#line 300 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							label$127:;
							#line 300 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							*(struct $9CPCWINDOW**)((TMP$117$7 << (2 & 31)) + *(int32*)&WINDOWPTR$) = *TMP$119$7;
							#line 300 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							*TMP$119$7 = TMP$120$7;
						}
						#line 301 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
						label$100:;
						{
							#line 301 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							int32 TMP$121$7;
							#line 301 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							int32 TMP$122$7;
							#line 301 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							int32 TMP$123$7;
							#line 301 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							struct $9CPCWINDOW* TMP$124$7;
							#line 301 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							int32* TMP$125$7;
							#line 301 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							int32 TMP$126$7;
							#line 301 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							struct $9CPCWINDOW* TMP$127$7;
							#line 301 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							int32* TMP$128$7;
							#line 301 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							int32 TMP$129$7;
							#line 301 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							struct $9CPCWINDOW* TMP$130$7;
							#line 301 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							int32 TMP$131$7;
							#line 301 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							struct $9CPCWINDOW* TMP$132$7;
							#line 301 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							int32 TMP$133$7;
							#line 301 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							struct $9CPCWINDOW* TMP$134$7;
							#line 301 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							int32 TMP$135$7;
							#line 301 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							struct $9CPCWINDOW* TMP$136$7;
							#line 302 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							TMP$122$7 = 0;
							#line 302 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							TMP$121$7 = 0;
							#line 302 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							fb_GetMouse( (int32*)&MOUSEX$1, (int32*)&MOUSEY$1, &TMP$121$7, (int32*)&MOUSEBUTTON$1, &TMP$122$7 );
							#line 303 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							int32 vr$64 = fb_ArrayUBound( (struct $7FBARRAYIKvE*)&WINDOWPTR$, 1 );
							#line 303 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							TMP$123$7 = vr$64;
							#line 303 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							void* vr$67 = fb_ArrayBoundChk( TMP$123$7, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 303, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
							#line 303 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							if( vr$67 == 0 ) goto label$128;
							#line 303 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							goto *vr$67;
							#line 303 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							label$128:;
							#line 303 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							TMP$125$7 = (int32*)((uint8*)*(struct $9CPCWINDOW**)((TMP$123$7 << (2 & 31)) + *(int32*)&WINDOWPTR$) + 24);
							#line 303 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							*TMP$125$7 = (*TMP$125$7 + MOUSEX$1) - X1$1;
							#line 304 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							int32 vr$76 = fb_ArrayUBound( (struct $7FBARRAYIKvE*)&WINDOWPTR$, 1 );
							#line 304 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							TMP$126$7 = vr$76;
							#line 304 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							void* vr$79 = fb_ArrayBoundChk( TMP$126$7, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 304, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
							#line 304 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							if( vr$79 == 0 ) goto label$129;
							#line 304 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							goto *vr$79;
							#line 304 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							label$129:;
							#line 304 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							TMP$128$7 = (int32*)((uint8*)*(struct $9CPCWINDOW**)((TMP$126$7 << (2 & 31)) + *(int32*)&WINDOWPTR$) + 28);
							#line 304 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							*TMP$128$7 = (*TMP$128$7 + MOUSEY$1) - Y1$1;
							#line 305 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							TMP$131$7 = I$3;
							#line 305 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							void* vr$90 = fb_ArrayBoundChk( TMP$131$7, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 305, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
							#line 305 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							if( vr$90 == 0 ) goto label$130;
							#line 305 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							goto *vr$90;
							#line 305 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							label$130:;
							#line 305 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							TMP$132$7 = *(struct $9CPCWINDOW**)((TMP$131$7 << (2 & 31)) + *(int32*)&WINDOWPTR$);
							#line 305 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							void* vr$93 = fb_NullPtrChk( (void*)TMP$132$7, 305, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
							#line 305 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							if( vr$93 == 0 ) goto label$131;
							#line 305 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							goto *vr$93;
							#line 305 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							label$131:;
							#line 305 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							TMP$129$7 = I$3;
							#line 305 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							void* vr$97 = fb_ArrayBoundChk( TMP$129$7, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 305, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
							#line 305 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							if( vr$97 == 0 ) goto label$132;
							#line 305 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							goto *vr$97;
							#line 305 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							label$132:;
							#line 305 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							TMP$130$7 = *(struct $9CPCWINDOW**)((TMP$129$7 << (2 & 31)) + *(int32*)&WINDOWPTR$);
							#line 305 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							void* vr$100 = fb_NullPtrChk( (void*)TMP$130$7, 305, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
							#line 305 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							if( vr$100 == 0 ) goto label$133;
							#line 305 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							goto *vr$100;
							#line 305 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							label$133:;
							#line 305 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							*(int32*)((uint8*)TMP$130$7 + 32) = *(int32*)((uint8*)TMP$132$7 + 32);
							#line 306 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							TMP$135$7 = I$3;
							#line 306 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							void* vr$104 = fb_ArrayBoundChk( TMP$135$7, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 306, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
							#line 306 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							if( vr$104 == 0 ) goto label$134;
							#line 306 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							goto *vr$104;
							#line 306 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							label$134:;
							#line 306 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							TMP$136$7 = *(struct $9CPCWINDOW**)((TMP$135$7 << (2 & 31)) + *(int32*)&WINDOWPTR$);
							#line 306 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							void* vr$107 = fb_NullPtrChk( (void*)TMP$136$7, 306, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
							#line 306 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							if( vr$107 == 0 ) goto label$135;
							#line 306 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							goto *vr$107;
							#line 306 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							label$135:;
							#line 306 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							TMP$133$7 = I$3;
							#line 306 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							void* vr$111 = fb_ArrayBoundChk( TMP$133$7, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 306, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
							#line 306 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							if( vr$111 == 0 ) goto label$136;
							#line 306 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							goto *vr$111;
							#line 306 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							label$136:;
							#line 306 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							TMP$134$7 = *(struct $9CPCWINDOW**)((TMP$133$7 << (2 & 31)) + *(int32*)&WINDOWPTR$);
							#line 306 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							void* vr$114 = fb_NullPtrChk( (void*)TMP$134$7, 306, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
							#line 306 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							if( vr$114 == 0 ) goto label$137;
							#line 306 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							goto *vr$114;
							#line 306 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							label$137:;
							#line 306 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							*(int32*)((uint8*)TMP$134$7 + 36) = *(int32*)((uint8*)TMP$136$7 + 36);
							#line 309 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							X1$1 = MOUSEX$1;
							#line 310 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							Y1$1 = MOUSEY$1;
							#line 311 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							REPAINT(  );
							#line 312 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							label$103:;
							#line 312 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							int32 vr$116 = fb_SleepEx( 1, 1 );
							#line 312 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							if( vr$116 == 0 ) goto label$104;
							#line 312 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							void* vr$119 = fb_ErrorThrowAt( 312, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas", (void*)&&label$103, (void*)&&label$104 );
							#line 312 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							goto *vr$119;
							#line 312 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							label$104:;
						}
						#line 313 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
						label$102:;
						#line 313 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
						if( MOUSEBUTTON$1 != 0 ) goto label$100;
						#line 313 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
						label$101:;
						#line 314 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
						goto label$92;
					}
					#line 315 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					label$99:;
					#line 315 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					label$98:;
				}
				#line 316 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				label$97:;
				#line 316 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				label$96:;
				#line 318 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				TMP$137$4 = I$3;
				#line 318 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				void* vr$122 = fb_ArrayBoundChk( TMP$137$4, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 318, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
				#line 318 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				if( vr$122 == 0 ) goto label$138;
				#line 318 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				goto *vr$122;
				#line 318 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				label$138:;
				#line 318 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				TMP$138$4 = *(struct $9CPCWINDOW**)((TMP$137$4 << (2 & 31)) + *(int32*)&WINDOWPTR$);
				#line 318 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				void* vr$125 = fb_NullPtrChk( (void*)TMP$138$4, 318, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
				#line 318 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				if( vr$125 == 0 ) goto label$139;
				#line 318 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				goto *vr$125;
				#line 318 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				label$139:;
				#line 318 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				if( *(boolean*)((uint8*)TMP$138$4 + 92) != (boolean)1 ) goto label$106;
				{
					#line 318 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					int32 TMP$139$5;
					#line 318 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					struct $9CPCWINDOW* TMP$140$5;
					#line 318 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					int32 TMP$141$5;
					#line 318 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					struct $9CPCWINDOW* TMP$142$5;
					#line 319 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					TMP$139$5 = I$3;
					#line 319 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					void* vr$129 = fb_ArrayBoundChk( TMP$139$5, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 319, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
					#line 319 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					if( vr$129 == 0 ) goto label$140;
					#line 319 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					goto *vr$129;
					#line 319 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					label$140:;
					#line 319 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					TMP$140$5 = *(struct $9CPCWINDOW**)((TMP$139$5 << (2 & 31)) + *(int32*)&WINDOWPTR$);
					#line 319 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					void* vr$132 = fb_NullPtrChk( (void*)TMP$140$5, 319, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
					#line 319 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					if( vr$132 == 0 ) goto label$141;
					#line 319 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					goto *vr$132;
					#line 319 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					label$141:;
					#line 319 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					*(boolean*)((uint8*)TMP$140$5 + 92) = (boolean)0;
					#line 320 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					TMP$141$5 = I$3;
					#line 320 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					void* vr$136 = fb_ArrayBoundChk( TMP$141$5, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 320, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
					#line 320 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					if( vr$136 == 0 ) goto label$142;
					#line 320 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					goto *vr$136;
					#line 320 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					label$142:;
					#line 320 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					TMP$142$5 = *(struct $9CPCWINDOW**)((TMP$141$5 << (2 & 31)) + *(int32*)&WINDOWPTR$);
					#line 320 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					void* vr$139 = fb_NullPtrChk( (void*)TMP$142$5, 320, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
					#line 320 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					if( vr$139 == 0 ) goto label$143;
					#line 320 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					goto *vr$139;
					#line 320 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					label$143:;
					#line 320 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					if( *(int32*)((uint8*)TMP$142$5 + 16) != IACTIVEWINDOW$ ) goto label$108;
					{
						{
							#line 321 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							int32 TMP$143$7;
							#line 321 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							int32 TMP$144$7;
							#line 321 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							struct $9CPCWINDOW** TMP$145$7;
							#line 321 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							struct $9CPCWINDOW* TMP$146$7;
							#line 321 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							int32 vr$141 = fb_ArrayUBound( (struct $7FBARRAYIKvE*)&WINDOWPTR$, 1 );
							#line 321 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							TMP$144$7 = vr$141;
							#line 321 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							void* vr$144 = fb_ArrayBoundChk( TMP$144$7, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 321, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
							#line 321 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							if( vr$144 == 0 ) goto label$144;
							#line 321 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							goto *vr$144;
							#line 321 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							label$144:;
							#line 321 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							TMP$145$7 = (struct $9CPCWINDOW**)((TMP$144$7 << (2 & 31)) + *(int32*)&WINDOWPTR$);
							#line 321 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							TMP$143$7 = I$3;
							#line 321 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							void* vr$150 = fb_ArrayBoundChk( TMP$143$7, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 321, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
							#line 321 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							if( vr$150 == 0 ) goto label$145;
							#line 321 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							goto *vr$150;
							#line 321 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							label$145:;
							#line 321 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							TMP$146$7 = *(struct $9CPCWINDOW**)((TMP$143$7 << (2 & 31)) + *(int32*)&WINDOWPTR$);
							#line 321 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							TMP$143$7 = I$3;
							#line 321 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							void* vr$156 = fb_ArrayBoundChk( TMP$143$7, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 321, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
							#line 321 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							if( vr$156 == 0 ) goto label$146;
							#line 321 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							goto *vr$156;
							#line 321 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							label$146:;
							#line 321 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							*(struct $9CPCWINDOW**)((TMP$143$7 << (2 & 31)) + *(int32*)&WINDOWPTR$) = *TMP$145$7;
							#line 321 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
							*TMP$145$7 = TMP$146$7;
						}
						#line 323 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
						goto label$92;
					}
					#line 324 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					label$108:;
					#line 324 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
					label$107:;
				}
				#line 325 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				label$106:;
				#line 325 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				label$105:;
			}
			#line 326 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			label$91:;
			#line 326 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			I$3 = I$3 + -1;
			#line 326 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			label$90:;
			#line 326 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			if( I$3 >= TMP$109$3 ) goto label$93;
			#line 326 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			label$92:;
		}
	}
	#line 327 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$89:;
	#line 327 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$88:;
	{
		#line 329 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		int32 I$2;
		#line 329 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		I$2 = 1;
		#line 329 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		int32 TMP$147$2;
		#line 329 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		int32 vr$161 = fb_ArrayUBound( (struct $7FBARRAYIKvE*)&WINDOWPTR$, 1 );
		#line 329 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		TMP$147$2 = vr$161;
		#line 329 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		goto label$109;
		#line 329 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		label$112:;
		{
			#line 329 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			int32 TMP$148$3;
			#line 329 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			int32 TMP$149$3;
			#line 329 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			struct $9CPCWINDOW* TMP$150$3;
			#line 331 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			TMP$148$3 = I$2;
			#line 331 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			void* vr$164 = fb_ArrayBoundChk( TMP$148$3, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 331, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
			#line 331 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			if( vr$164 == 0 ) goto label$147;
			#line 331 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			goto *vr$164;
			#line 331 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			label$147:;
			#line 331 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			if( *(struct $9CPCWINDOW**)((TMP$148$3 << (2 & 31)) + *(int32*)&WINDOWPTR$) != (struct $9CPCWINDOW*)0u ) goto label$114;
			{
				#line 331 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				goto label$110;
				#line 331 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				label$114:;
			}
			#line 333 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			TMP$149$3 = I$2;
			#line 333 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			void* vr$169 = fb_ArrayBoundChk( TMP$149$3, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 333, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
			#line 333 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			if( vr$169 == 0 ) goto label$148;
			#line 333 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			goto *vr$169;
			#line 333 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			label$148:;
			#line 333 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			TMP$150$3 = *(struct $9CPCWINDOW**)((TMP$149$3 << (2 & 31)) + *(int32*)&WINDOWPTR$);
			#line 333 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			void* vr$172 = fb_NullPtrChk( (void*)TMP$150$3, 333, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
			#line 333 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			if( vr$172 == 0 ) goto label$149;
			#line 333 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			goto *vr$172;
			#line 333 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			label$149:;
			#line 333 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			if( *(boolean*)((uint8*)TMP$150$3 + 91) != (boolean)1 ) goto label$116;
			{
				#line 333 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				int32 TMP$151$4;
				#line 333 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				int32 TMP$152$4;
				#line 334 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				TMP$151$4 = I$2;
				#line 334 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				void* vr$176 = fb_ArrayBoundChk( TMP$151$4, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 334, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
				#line 334 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				if( vr$176 == 0 ) goto label$150;
				#line 334 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				goto *vr$176;
				#line 334 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				label$150:;
				#line 334 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				if( *(struct $9CPCWINDOW**)((TMP$151$4 << (2 & 31)) + *(int32*)&WINDOWPTR$) == (struct $9CPCWINDOW*)0u ) goto label$117;
				#line 334 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				TMP$151$4 = I$2;
				#line 334 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				void* vr$181 = fb_ArrayBoundChk( TMP$151$4, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 334, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
				#line 334 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				if( vr$181 == 0 ) goto label$151;
				#line 334 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				goto *vr$181;
				#line 334 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				label$151:;
				#line 334 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				_ZN9CPCWINDOWD1Ev( *(struct $9CPCWINDOW**)((TMP$151$4 << (2 & 31)) + *(int32*)&WINDOWPTR$) );
				#line 334 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				TMP$151$4 = I$2;
				#line 334 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				void* vr$186 = fb_ArrayBoundChk( TMP$151$4, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 334, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
				#line 334 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				if( vr$186 == 0 ) goto label$152;
				#line 334 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				goto *vr$186;
				#line 334 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				label$152:;
				#line 334 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				free( *(void**)((TMP$151$4 << (2 & 31)) + *(int32*)&WINDOWPTR$) );
				#line 334 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				label$117:;
				#line 335 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				TMP$152$4 = I$2;
				#line 335 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				void* vr$191 = fb_ArrayBoundChk( TMP$152$4, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 335, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
				#line 335 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				if( vr$191 == 0 ) goto label$153;
				#line 335 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				goto *vr$191;
				#line 335 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				label$153:;
				#line 335 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
				*(struct $9CPCWINDOW**)((TMP$152$4 << (2 & 31)) + *(int32*)&WINDOWPTR$) = (struct $9CPCWINDOW*)0u;
			}
			#line 336 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			label$116:;
			#line 336 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
			label$115:;
		}
		#line 361 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		label$110:;
		#line 361 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		I$2 = I$2 + 1;
		#line 361 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		label$109:;
		#line 361 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		if( I$2 <= TMP$147$2 ) goto label$112;
		#line 361 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
		label$111:;
	}
	#line 362 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	REPAINT(  );
	#line 363 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$87:;
	#line 363 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	fb_ErrorSetFuncName( (uint8*)TMP$155$1 );
	#line 363 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	fb_ErrorSetModName( (uint8*)TMP$153$1 );
#line 363 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
}

#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
void _ZN8TEXTBOXHC1Ev( struct $8TEXTBOXH* THIS$1 )
#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
{
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	uint8* TMP$166$1;
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	uint8* TMP$167$1;
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	_ZN8HCONTROLC1Ev( (struct $8HCONTROL*)THIS$1 );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 68), 0, 4 );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 72), 0, 4 );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 76), 0, 4 );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 80), 0, 4 );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 84), 0, 4 );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 88), 0, 4 );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	__builtin_memset( (boolean*)((uint8*)THIS$1 + 92), 0, 1 );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	*(void**)THIS$1 = (void*)((uint8*)_ZTVN8TEXTBOXHE + 8);
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	uint8* vr$17 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas" );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	TMP$166$1 = vr$17;
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	uint8* vr$18 = fb_ErrorSetFuncName( (uint8*)"" );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	TMP$167$1 = vr$18;
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	label$160:;
	#line 15 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	label$161:;
	#line 15 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	fb_ErrorSetFuncName( (uint8*)TMP$167$1 );
	#line 15 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	fb_ErrorSetModName( (uint8*)TMP$166$1 );
#line 15 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
}

#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
void _ZN8TEXTBOXHC1ER8FBSTRINGllllll( struct $8TEXTBOXH* THIS$1, FBSTRING* HNAME1$1, int32 ID1$1, int32 PID1$1, int32 X1$1, int32 Y1$1, int32 W1$1, int32 H1$1 )
#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
{
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	int32 TMP$168$1;
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	struct $9CPCWINDOW* TMP$169$1;
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	int32 TMP$170$1;
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	struct $9CPCWINDOW* TMP$171$1;
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	uint8* TMP$172$1;
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	uint8* TMP$173$1;
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	label$162:;
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas" );
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	TMP$172$1 = vr$0;
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"" );
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	TMP$173$1 = vr$1;
	#line 18 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	_ZN8HCONTROLC1Ev( (struct $8HCONTROL*)THIS$1 );
	#line 18 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 68), 0, 4 );
	#line 18 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 72), 0, 4 );
	#line 18 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 76), 0, 4 );
	#line 18 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 80), 0, 4 );
	#line 18 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 84), 0, 4 );
	#line 18 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 88), 0, 4 );
	#line 18 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	__builtin_memset( (boolean*)((uint8*)THIS$1 + 92), 0, 1 );
	#line 18 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	*(void**)THIS$1 = (void*)((uint8*)_ZTVN8TEXTBOXHE + 8);
	#line 18 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	FBSTRING* vr$21 = fb_StrAssign( (void*)((uint8*)THIS$1 + 4), -1, (void*)HNAME1$1, -1, 0 );
	#line 19 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	*(int32*)((uint8*)THIS$1 + 16) = ID1$1;
	#line 20 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	*(int32*)((uint8*)THIS$1 + 20) = PID1$1;
	#line 21 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	*(int32*)((uint8*)THIS$1 + 68) = X1$1;
	#line 22 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	*(int32*)((uint8*)THIS$1 + 72) = Y1$1;
	#line 23 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	*(int32*)((uint8*)THIS$1 + 84) = W1$1;
	#line 24 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	*(int32*)((uint8*)THIS$1 + 88) = H1$1;
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	TMP$168$1 = *(int32*)((uint8*)THIS$1 + 20);
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	void* vr$31 = fb_ArrayBoundChk( TMP$168$1, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 27, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas" );
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	if( vr$31 == 0 ) goto label$164;
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	goto *vr$31;
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	label$164:;
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	TMP$169$1 = *(struct $9CPCWINDOW**)((TMP$168$1 << (2 & 31)) + *(int32*)&WINDOWPTR$);
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	void* vr$34 = fb_NullPtrChk( (void*)TMP$169$1, 27, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas" );
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	if( vr$34 == 0 ) goto label$165;
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	goto *vr$34;
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	label$165:;
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	*(int32*)((uint8*)THIS$1 + 24) = (*(int32*)((uint8*)TMP$169$1 + 24) + X1$1) + 4;
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	TMP$170$1 = *(int32*)((uint8*)THIS$1 + 20);
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	void* vr$42 = fb_ArrayBoundChk( TMP$170$1, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 28, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas" );
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	if( vr$42 == 0 ) goto label$166;
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	goto *vr$42;
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	label$166:;
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	TMP$171$1 = *(struct $9CPCWINDOW**)((TMP$170$1 << (2 & 31)) + *(int32*)&WINDOWPTR$);
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	void* vr$45 = fb_NullPtrChk( (void*)TMP$171$1, 28, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas" );
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	if( vr$45 == 0 ) goto label$167;
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	goto *vr$45;
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	label$167:;
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	*(int32*)((uint8*)THIS$1 + 28) = (*(int32*)((uint8*)TMP$171$1 + 28) + Y1$1) + 25;
	#line 30 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	*(boolean*)((uint8*)THIS$1 + 92) = (boolean)1;
	#line 31 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	_ZN8TEXTBOXH6REDRAWEv( THIS$1 );
	#line 32 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	label$163:;
	#line 32 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	fb_ErrorSetFuncName( (uint8*)TMP$173$1 );
	#line 32 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	fb_ErrorSetModName( (uint8*)TMP$172$1 );
#line 32 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
}

#line 35 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
void _ZN8TEXTBOXH6REDRAWEv( struct $8TEXTBOXH* THIS$1 )
#line 35 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
{
	#line 35 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	FBSTRING TMP$175$1;
	#line 35 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	uint8* TMP$176$1;
	#line 35 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	uint8* TMP$177$1;
	#line 35 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	label$168:;
	#line 35 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas" );
	#line 35 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	TMP$176$1 = vr$0;
	#line 35 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"REDRAW" );
	#line 35 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	TMP$177$1 = vr$1;
	#line 37 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	fb_GfxLine( (void*)0u, (float)*(int32*)((uint8*)THIS$1 + 24), (float)*(int32*)((uint8*)THIS$1 + 28), (float)(*(int32*)((uint8*)THIS$1 + 24) + *(int32*)((uint8*)THIS$1 + 84)), (float)(*(int32*)((uint8*)THIS$1 + 28) + *(int32*)((uint8*)THIS$1 + 88)), 4294967294u, 2, 65535u, 0 );
	#line 38 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	fb_GfxLine( (void*)0u, (float)*(int32*)((uint8*)THIS$1 + 24), (float)*(int32*)((uint8*)THIS$1 + 28), (float)(*(int32*)((uint8*)THIS$1 + 24) + *(int32*)((uint8*)THIS$1 + 84)), (float)*(int32*)((uint8*)THIS$1 + 28), 4278190080u, 1, 65535u, 0 );
	#line 39 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	fb_GfxLine( (void*)0u, (float)(*(int32*)((uint8*)THIS$1 + 24) + *(int32*)((uint8*)THIS$1 + 84)), (float)*(int32*)((uint8*)THIS$1 + 28), (float)*(int32*)((uint8*)THIS$1 + 24), (float)(*(int32*)((uint8*)THIS$1 + 28) + *(int32*)((uint8*)THIS$1 + 88)), 4278190080u, 1, 65535u, 0 );
	#line 41 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	_ZN5XFONT9INTERFACE16BACKCOLOR__set__Ej( &FONT1$, 0u );
	#line 42 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	_ZN5XFONT9INTERFACE16FORECOLOR__set__Ej( &FONT1$, 4278190080u );
	#line 43 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	__builtin_memset( &TMP$175$1, 0, 12 );
	#line 43 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	FBSTRING* vr$44 = fb_StrAssign( (void*)&TMP$175$1, -1, (void*)"Textbox!!!", 11, 0 );
	#line 43 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	_ZN5XFONT9INTERFACE10DRAWSTRINGEPvR8FBSTRINGssffh( &FONT1$, (void*)0u, &TMP$175$1, (int16)(*(int32*)((uint8*)THIS$1 + 24) + 4), (int16)(*(int32*)((uint8*)THIS$1 + 28) + 2), 0x1.p+0f, 0x1.p+0f, (uint8)0u );
	#line 43 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	fb_StrDelete( (FBSTRING*)&TMP$175$1 );
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	label$169:;
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	fb_ErrorSetFuncName( (uint8*)TMP$177$1 );
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	fb_ErrorSetModName( (uint8*)TMP$176$1 );
#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
}

#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
void NEWTEXTBOX( FBSTRING* HNAME$1, int32 PID$1, int32 X$1, int32 Y$1, int32 W$1, int32 H$1 )
#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
{
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	int32 TMP$178$1;
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	struct $8TEXTBOXH* TMP$179$1;
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	uint8* TMP$181$1;
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	uint8* TMP$183$1;
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	label$170:;
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas" );
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	TMP$181$1 = vr$0;
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"NEWTEXTBOX" );
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	TMP$183$1 = vr$1;
	#line 55 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	TEXTBOXPOPULATION$ = TEXTBOXPOPULATION$ + 1u;
	#line 56 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	label$172:;
	#line 56 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	int32 vr$3 = fb_ArrayRedimPresvEx( (struct $7FBARRAYIvE*)&TEXTBOXPTR$, 4u, -1, 0, 1u, 1, (int32)TEXTBOXPOPULATION$ );
	#line 56 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	if( vr$3 == 0 ) goto label$173;
	#line 56 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	void* vr$6 = fb_ErrorThrowAt( 56, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas", (void*)&&label$172, (void*)&&label$173 );
	#line 56 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	goto *vr$6;
	#line 56 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	label$173:;
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	void* vr$7 = malloc( 96u );
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	TMP$179$1 = (struct $8TEXTBOXH*)vr$7;
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	if( TMP$179$1 == (struct $8TEXTBOXH*)0u ) goto label$174;
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	_ZN8TEXTBOXHC1ER8FBSTRINGllllll( TMP$179$1, HNAME$1, (int32)TEXTBOXPOPULATION$, PID$1, X$1, Y$1, W$1, H$1 );
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	label$174:;
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	TMP$178$1 = (int32)TEXTBOXPOPULATION$;
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	void* vr$10 = fb_ArrayBoundChk( TMP$178$1, *(int32*)((uint8*)&TEXTBOXPTR$ + 24), *(int32*)((uint8*)&TEXTBOXPTR$ + 28), 57, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas" );
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	if( vr$10 == 0 ) goto label$175;
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	goto *vr$10;
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	label$175:;
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	*(struct $8TEXTBOXH**)((TMP$178$1 << (2 & 31)) + *(int32*)&TEXTBOXPTR$) = TMP$179$1;
	#line 58 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	label$171:;
	#line 58 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	fb_ErrorSetFuncName( (uint8*)TMP$183$1 );
	#line 58 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	fb_ErrorSetModName( (uint8*)TMP$181$1 );
#line 58 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
}

#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
void _ZN10TEXTBLOCKHC1Ev( struct $10TEXTBLOCKH* THIS$1 )
#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
{
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	uint8* TMP$194$1;
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	uint8* TMP$195$1;
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	_ZN8HCONTROLC1Ev( (struct $8HCONTROL*)THIS$1 );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 68), 0, 4 );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 72), 0, 4 );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 76), 0, 4 );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 80), 0, 4 );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 84), 0, 4 );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 88), 0, 4 );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	__builtin_memset( (boolean*)((uint8*)THIS$1 + 92), 0, 1 );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	*(void**)THIS$1 = (void*)((uint8*)_ZTVN10TEXTBLOCKHE + 8);
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	uint8* vr$17 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas" );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	TMP$194$1 = vr$17;
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	uint8* vr$18 = fb_ErrorSetFuncName( (uint8*)"" );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	TMP$195$1 = vr$18;
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	label$182:;
	#line 15 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	label$183:;
	#line 15 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	fb_ErrorSetFuncName( (uint8*)TMP$195$1 );
	#line 15 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	fb_ErrorSetModName( (uint8*)TMP$194$1 );
#line 15 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
}

#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
void _ZN10TEXTBLOCKHC1ER8FBSTRINGllllll( struct $10TEXTBLOCKH* THIS$1, FBSTRING* HNAME1$1, int32 ID1$1, int32 PID1$1, int32 X1$1, int32 Y1$1, int32 W1$1, int32 H1$1 )
#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
{
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	int32 TMP$196$1;
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	struct $9CPCWINDOW* TMP$197$1;
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	int32 TMP$198$1;
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	struct $9CPCWINDOW* TMP$199$1;
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	uint8* TMP$200$1;
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	uint8* TMP$201$1;
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	label$184:;
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas" );
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	TMP$200$1 = vr$0;
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"" );
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	TMP$201$1 = vr$1;
	#line 18 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	_ZN8HCONTROLC1Ev( (struct $8HCONTROL*)THIS$1 );
	#line 18 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 68), 0, 4 );
	#line 18 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 72), 0, 4 );
	#line 18 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 76), 0, 4 );
	#line 18 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 80), 0, 4 );
	#line 18 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 84), 0, 4 );
	#line 18 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 88), 0, 4 );
	#line 18 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	__builtin_memset( (boolean*)((uint8*)THIS$1 + 92), 0, 1 );
	#line 18 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	*(void**)THIS$1 = (void*)((uint8*)_ZTVN10TEXTBLOCKHE + 8);
	#line 18 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	FBSTRING* vr$21 = fb_StrAssign( (void*)((uint8*)THIS$1 + 4), -1, (void*)HNAME1$1, -1, 0 );
	#line 19 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	*(int32*)((uint8*)THIS$1 + 16) = ID1$1;
	#line 20 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	*(int32*)((uint8*)THIS$1 + 20) = PID1$1;
	#line 21 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	*(int32*)((uint8*)THIS$1 + 68) = X1$1;
	#line 22 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	*(int32*)((uint8*)THIS$1 + 72) = Y1$1;
	#line 23 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	*(int32*)((uint8*)THIS$1 + 84) = W1$1;
	#line 24 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	*(int32*)((uint8*)THIS$1 + 88) = H1$1;
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	TMP$196$1 = *(int32*)((uint8*)THIS$1 + 20);
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	void* vr$31 = fb_ArrayBoundChk( TMP$196$1, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 27, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas" );
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	if( vr$31 == 0 ) goto label$186;
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	goto *vr$31;
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	label$186:;
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	TMP$197$1 = *(struct $9CPCWINDOW**)((TMP$196$1 << (2 & 31)) + *(int32*)&WINDOWPTR$);
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	void* vr$34 = fb_NullPtrChk( (void*)TMP$197$1, 27, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas" );
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	if( vr$34 == 0 ) goto label$187;
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	goto *vr$34;
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	label$187:;
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	*(int32*)((uint8*)THIS$1 + 24) = (*(int32*)((uint8*)TMP$197$1 + 24) + X1$1) + 4;
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	TMP$198$1 = *(int32*)((uint8*)THIS$1 + 20);
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	void* vr$42 = fb_ArrayBoundChk( TMP$198$1, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 28, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas" );
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	if( vr$42 == 0 ) goto label$188;
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	goto *vr$42;
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	label$188:;
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	TMP$199$1 = *(struct $9CPCWINDOW**)((TMP$198$1 << (2 & 31)) + *(int32*)&WINDOWPTR$);
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	void* vr$45 = fb_NullPtrChk( (void*)TMP$199$1, 28, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas" );
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	if( vr$45 == 0 ) goto label$189;
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	goto *vr$45;
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	label$189:;
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	*(int32*)((uint8*)THIS$1 + 28) = (*(int32*)((uint8*)TMP$199$1 + 28) + Y1$1) + 25;
	#line 30 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	*(boolean*)((uint8*)THIS$1 + 92) = (boolean)1;
	#line 31 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	_ZN10TEXTBLOCKH6REDRAWEv( THIS$1 );
	#line 32 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	label$185:;
	#line 32 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	fb_ErrorSetFuncName( (uint8*)TMP$201$1 );
	#line 32 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	fb_ErrorSetModName( (uint8*)TMP$200$1 );
#line 32 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
}

#line 35 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
void _ZN10TEXTBLOCKH6REDRAWEv( struct $10TEXTBLOCKH* THIS$1 )
#line 35 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
{
	#line 35 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	FBSTRING TMP$203$1;
	#line 35 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	uint8* TMP$204$1;
	#line 35 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	uint8* TMP$205$1;
	#line 35 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	label$190:;
	#line 35 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas" );
	#line 35 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	TMP$204$1 = vr$0;
	#line 35 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"REDRAW" );
	#line 35 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	TMP$205$1 = vr$1;
	#line 37 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	fb_GfxLine( (void*)0u, (float)*(int32*)((uint8*)THIS$1 + 24), (float)*(int32*)((uint8*)THIS$1 + 28), (float)(*(int32*)((uint8*)THIS$1 + 24) + *(int32*)((uint8*)THIS$1 + 84)), (float)(*(int32*)((uint8*)THIS$1 + 28) + *(int32*)((uint8*)THIS$1 + 88)), 4294967294u, 2, 65535u, 0 );
	#line 38 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	fb_GfxLine( (void*)0u, (float)*(int32*)((uint8*)THIS$1 + 24), (float)*(int32*)((uint8*)THIS$1 + 28), (float)(*(int32*)((uint8*)THIS$1 + 24) + *(int32*)((uint8*)THIS$1 + 84)), (float)*(int32*)((uint8*)THIS$1 + 28), 4278190080u, 1, 65535u, 0 );
	#line 39 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	fb_GfxLine( (void*)0u, (float)(*(int32*)((uint8*)THIS$1 + 24) + *(int32*)((uint8*)THIS$1 + 84)), (float)*(int32*)((uint8*)THIS$1 + 28), (float)*(int32*)((uint8*)THIS$1 + 24), (float)(*(int32*)((uint8*)THIS$1 + 28) + *(int32*)((uint8*)THIS$1 + 88)), 4278190080u, 1, 65535u, 0 );
	#line 41 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	_ZN5XFONT9INTERFACE16BACKCOLOR__set__Ej( &FONT1$, 0u );
	#line 42 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	_ZN5XFONT9INTERFACE16FORECOLOR__set__Ej( &FONT1$, 4278190080u );
	#line 43 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	__builtin_memset( &TMP$203$1, 0, 12 );
	#line 43 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	FBSTRING* vr$44 = fb_StrAssign( (void*)&TMP$203$1, -1, (void*)"Textblock!!!", 13, 0 );
	#line 43 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	_ZN5XFONT9INTERFACE10DRAWSTRINGEPvR8FBSTRINGssffh( &FONT1$, (void*)0u, &TMP$203$1, (int16)(*(int32*)((uint8*)THIS$1 + 24) + 4), (int16)(*(int32*)((uint8*)THIS$1 + 28) + 2), 0x1.p+0f, 0x1.p+0f, (uint8)0u );
	#line 43 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	fb_StrDelete( (FBSTRING*)&TMP$203$1 );
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	label$191:;
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	fb_ErrorSetFuncName( (uint8*)TMP$205$1 );
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	fb_ErrorSetModName( (uint8*)TMP$204$1 );
#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
}

#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
void NEWTEXTBLOCK( FBSTRING* HNAME$1, int32 PID$1, int32 X$1, int32 Y$1, int32 W$1, int32 H$1 )
#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
{
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	int32 TMP$206$1;
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	struct $10TEXTBLOCKH* TMP$207$1;
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	uint8* TMP$209$1;
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	uint8* TMP$211$1;
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	label$192:;
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas" );
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	TMP$209$1 = vr$0;
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"NEWTEXTBLOCK" );
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	TMP$211$1 = vr$1;
	#line 55 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	TEXTBLOCKPOPULATION$ = TEXTBLOCKPOPULATION$ + 1u;
	#line 56 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	label$194:;
	#line 56 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	int32 vr$3 = fb_ArrayRedimPresvEx( (struct $7FBARRAYIvE*)&TEXTBLOCKPTR$, 4u, -1, 0, 1u, 1, (int32)TEXTBLOCKPOPULATION$ );
	#line 56 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	if( vr$3 == 0 ) goto label$195;
	#line 56 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	void* vr$6 = fb_ErrorThrowAt( 56, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas", (void*)&&label$194, (void*)&&label$195 );
	#line 56 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	goto *vr$6;
	#line 56 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	label$195:;
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	void* vr$7 = malloc( 96u );
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	TMP$207$1 = (struct $10TEXTBLOCKH*)vr$7;
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	if( TMP$207$1 == (struct $10TEXTBLOCKH*)0u ) goto label$196;
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	_ZN10TEXTBLOCKHC1ER8FBSTRINGllllll( TMP$207$1, HNAME$1, (int32)TEXTBLOCKPOPULATION$, PID$1, X$1, Y$1, W$1, H$1 );
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	label$196:;
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	TMP$206$1 = (int32)TEXTBLOCKPOPULATION$;
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	void* vr$10 = fb_ArrayBoundChk( TMP$206$1, *(int32*)((uint8*)&TEXTBLOCKPTR$ + 24), *(int32*)((uint8*)&TEXTBLOCKPTR$ + 28), 57, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas" );
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	if( vr$10 == 0 ) goto label$197;
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	goto *vr$10;
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	label$197:;
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	*(struct $10TEXTBLOCKH**)((TMP$206$1 << (2 & 31)) + *(int32*)&TEXTBLOCKPTR$) = TMP$207$1;
	#line 58 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	label$193:;
	#line 58 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	fb_ErrorSetFuncName( (uint8*)TMP$211$1 );
	#line 58 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	fb_ErrorSetModName( (uint8*)TMP$209$1 );
#line 58 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
}

#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
void _ZN11PICTUREBOXHC1Ev( struct $11PICTUREBOXH* THIS$1 )
#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
{
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	uint8* TMP$222$1;
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	uint8* TMP$223$1;
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	_ZN8HCONTROLC1Ev( (struct $8HCONTROL*)THIS$1 );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 68), 0, 4 );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 72), 0, 4 );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 76), 0, 4 );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 80), 0, 4 );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 84), 0, 4 );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 88), 0, 4 );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	__builtin_memset( (boolean*)((uint8*)THIS$1 + 92), 0, 1 );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	*(void**)THIS$1 = (void*)((uint8*)_ZTVN11PICTUREBOXHE + 8);
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	uint8* vr$17 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas" );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	TMP$222$1 = vr$17;
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	uint8* vr$18 = fb_ErrorSetFuncName( (uint8*)"" );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	TMP$223$1 = vr$18;
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	label$204:;
	#line 15 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	label$205:;
	#line 15 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	fb_ErrorSetFuncName( (uint8*)TMP$223$1 );
	#line 15 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	fb_ErrorSetModName( (uint8*)TMP$222$1 );
#line 15 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
}

#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
void _ZN11PICTUREBOXHC1ER8FBSTRINGllllll( struct $11PICTUREBOXH* THIS$1, FBSTRING* HNAME1$1, int32 ID1$1, int32 PID1$1, int32 X1$1, int32 Y1$1, int32 W1$1, int32 H1$1 )
#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
{
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	int32 TMP$224$1;
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	struct $9CPCWINDOW* TMP$225$1;
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	int32 TMP$226$1;
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	struct $9CPCWINDOW* TMP$227$1;
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	uint8* TMP$228$1;
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	uint8* TMP$229$1;
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	label$206:;
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas" );
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	TMP$228$1 = vr$0;
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"" );
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	TMP$229$1 = vr$1;
	#line 18 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	_ZN8HCONTROLC1Ev( (struct $8HCONTROL*)THIS$1 );
	#line 18 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 68), 0, 4 );
	#line 18 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 72), 0, 4 );
	#line 18 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 76), 0, 4 );
	#line 18 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 80), 0, 4 );
	#line 18 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 84), 0, 4 );
	#line 18 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 88), 0, 4 );
	#line 18 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	__builtin_memset( (boolean*)((uint8*)THIS$1 + 92), 0, 1 );
	#line 18 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	*(void**)THIS$1 = (void*)((uint8*)_ZTVN11PICTUREBOXHE + 8);
	#line 18 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	FBSTRING* vr$21 = fb_StrAssign( (void*)((uint8*)THIS$1 + 4), -1, (void*)HNAME1$1, -1, 0 );
	#line 19 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	*(int32*)((uint8*)THIS$1 + 16) = ID1$1;
	#line 20 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	*(int32*)((uint8*)THIS$1 + 20) = PID1$1;
	#line 21 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	*(int32*)((uint8*)THIS$1 + 68) = X1$1;
	#line 22 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	*(int32*)((uint8*)THIS$1 + 72) = Y1$1;
	#line 23 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	*(int32*)((uint8*)THIS$1 + 84) = W1$1;
	#line 24 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	*(int32*)((uint8*)THIS$1 + 88) = H1$1;
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	TMP$224$1 = *(int32*)((uint8*)THIS$1 + 20);
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	void* vr$31 = fb_ArrayBoundChk( TMP$224$1, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 27, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas" );
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	if( vr$31 == 0 ) goto label$208;
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	goto *vr$31;
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	label$208:;
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	TMP$225$1 = *(struct $9CPCWINDOW**)((TMP$224$1 << (2 & 31)) + *(int32*)&WINDOWPTR$);
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	void* vr$34 = fb_NullPtrChk( (void*)TMP$225$1, 27, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas" );
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	if( vr$34 == 0 ) goto label$209;
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	goto *vr$34;
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	label$209:;
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	*(int32*)((uint8*)THIS$1 + 24) = (*(int32*)((uint8*)TMP$225$1 + 24) + X1$1) + 4;
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	TMP$226$1 = *(int32*)((uint8*)THIS$1 + 20);
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	void* vr$42 = fb_ArrayBoundChk( TMP$226$1, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 28, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas" );
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	if( vr$42 == 0 ) goto label$210;
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	goto *vr$42;
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	label$210:;
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	TMP$227$1 = *(struct $9CPCWINDOW**)((TMP$226$1 << (2 & 31)) + *(int32*)&WINDOWPTR$);
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	void* vr$45 = fb_NullPtrChk( (void*)TMP$227$1, 28, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas" );
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	if( vr$45 == 0 ) goto label$211;
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	goto *vr$45;
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	label$211:;
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	*(int32*)((uint8*)THIS$1 + 28) = (*(int32*)((uint8*)TMP$227$1 + 28) + Y1$1) + 25;
	#line 30 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	*(boolean*)((uint8*)THIS$1 + 92) = (boolean)1;
	#line 31 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	_ZN11PICTUREBOXH6REDRAWEv( THIS$1 );
	#line 32 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	label$207:;
	#line 32 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	fb_ErrorSetFuncName( (uint8*)TMP$229$1 );
	#line 32 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	fb_ErrorSetModName( (uint8*)TMP$228$1 );
#line 32 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
}

#line 35 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
void _ZN11PICTUREBOXH6REDRAWEv( struct $11PICTUREBOXH* THIS$1 )
#line 35 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
{
	#line 35 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	FBSTRING TMP$231$1;
	#line 35 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	int32 TMP$232$1;
	#line 35 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	int32 TMP$233$1;
	#line 35 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	uint8* TMP$235$1;
	#line 35 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	uint8* TMP$236$1;
	#line 35 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	label$212:;
	#line 35 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas" );
	#line 35 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	TMP$235$1 = vr$0;
	#line 35 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"REDRAW" );
	#line 35 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	TMP$236$1 = vr$1;
	#line 37 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	void* MYPICEND$1;
	#line 37 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	__builtin_memset( &MYPICEND$1, 0, 4 );
	#line 38 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	void* MYPIC$1;
	#line 38 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	__builtin_memset( &MYPIC$1, 0, 4 );
	#line 40 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	void* vr$6 = fb_GfxImageCreate( *(int32*)((uint8*)THIS$1 + 84), *(int32*)((uint8*)THIS$1 + 88), 0u, 0, 0 );
	#line 40 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	MYPICEND$1 = vr$6;
	#line 42 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	TMP$233$1 = 128;
	#line 42 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	TMP$232$1 = 128;
	#line 42 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	__builtin_memset( &TMP$231$1, 0, 12 );
	#line 42 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	FBSTRING* vr$11 = fb_StrAssign( (void*)&TMP$231$1, -1, (void*)"cmd.png", 8, 0 );
	#line 42 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	void* vr$13 = CHARGER_PNG( &TMP$231$1, 32, 5, &TMP$232$1, &TMP$233$1 );
	#line 42 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	MYPIC$1 = vr$13;
	#line 42 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	fb_StrDelete( (FBSTRING*)&TMP$231$1 );
	#line 44 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	IMG_CHANGE_SIZE_QUICK( &MYPIC$1, &MYPICEND$1, *(int32*)((uint8*)THIS$1 + 24), *(int32*)((uint8*)THIS$1 + 24), 128, 128, *(int32*)((uint8*)THIS$1 + 84), *(int32*)((uint8*)THIS$1 + 88) );
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	label$214:;
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	int32 vr$25 = fb_GfxPut( (void*)0u, (float)*(int32*)((uint8*)THIS$1 + 24), (float)*(int32*)((uint8*)THIS$1 + 28), (void*)MYPICEND$1, -65536, -65536, -65536, -65536, 0, 6, (void*)&fb_hPutAlpha, -1, (void*)0u, (void*)0u );
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	if( vr$25 == 0 ) goto label$215;
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	void* vr$28 = fb_ErrorThrowAt( 45, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas", (void*)&&label$214, (void*)&&label$215 );
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	goto *vr$28;
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	label$215:;
	#line 47 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	label$213:;
	#line 47 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	fb_ErrorSetFuncName( (uint8*)TMP$236$1 );
	#line 47 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	fb_ErrorSetModName( (uint8*)TMP$235$1 );
#line 47 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
}

#line 55 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
void NEWPICTUREBOX( FBSTRING* HNAME$1, int32 PID$1, int32 X$1, int32 Y$1, int32 W$1, int32 H$1 )
#line 55 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
{
	#line 55 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	int32 TMP$237$1;
	#line 55 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	struct $11PICTUREBOXH* TMP$238$1;
	#line 55 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	uint8* TMP$240$1;
	#line 55 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	uint8* TMP$242$1;
	#line 55 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	label$216:;
	#line 55 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas" );
	#line 55 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	TMP$240$1 = vr$0;
	#line 55 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"NEWPICTUREBOX" );
	#line 55 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	TMP$242$1 = vr$1;
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	PICTUREBOXPOPULATION$ = PICTUREBOXPOPULATION$ + 1u;
	#line 58 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	label$218:;
	#line 58 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	int32 vr$3 = fb_ArrayRedimPresvEx( (struct $7FBARRAYIvE*)&PICTUREBOXPTR$, 4u, -1, 0, 1u, 1, (int32)PICTUREBOXPOPULATION$ );
	#line 58 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	if( vr$3 == 0 ) goto label$219;
	#line 58 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	void* vr$6 = fb_ErrorThrowAt( 58, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas", (void*)&&label$218, (void*)&&label$219 );
	#line 58 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	goto *vr$6;
	#line 58 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	label$219:;
	#line 59 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	void* vr$7 = malloc( 96u );
	#line 59 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	TMP$238$1 = (struct $11PICTUREBOXH*)vr$7;
	#line 59 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	if( TMP$238$1 == (struct $11PICTUREBOXH*)0u ) goto label$220;
	#line 59 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	_ZN11PICTUREBOXHC1ER8FBSTRINGllllll( TMP$238$1, HNAME$1, (int32)PICTUREBOXPOPULATION$, PID$1, X$1, Y$1, W$1, H$1 );
	#line 59 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	label$220:;
	#line 59 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	TMP$237$1 = (int32)PICTUREBOXPOPULATION$;
	#line 59 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	void* vr$10 = fb_ArrayBoundChk( TMP$237$1, *(int32*)((uint8*)&PICTUREBOXPTR$ + 24), *(int32*)((uint8*)&PICTUREBOXPTR$ + 28), 59, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas" );
	#line 59 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	if( vr$10 == 0 ) goto label$221;
	#line 59 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	goto *vr$10;
	#line 59 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	label$221:;
	#line 59 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	*(struct $11PICTUREBOXH**)((TMP$237$1 << (2 & 31)) + *(int32*)&PICTUREBOXPTR$) = TMP$238$1;
	#line 60 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	label$217:;
	#line 60 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	fb_ErrorSetFuncName( (uint8*)TMP$242$1 );
	#line 60 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	fb_ErrorSetModName( (uint8*)TMP$240$1 );
#line 60 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
}

#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
void _ZN8CONSOLEHC1Ev( struct $8CONSOLEH* THIS$1 )
#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
{
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	uint8* TMP$253$1;
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	uint8* TMP$254$1;
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	_ZN8HCONTROLC1Ev( (struct $8HCONTROL*)THIS$1 );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 68), 0, 4 );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 72), 0, 4 );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 76), 0, 4 );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 80), 0, 4 );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 84), 0, 4 );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 88), 0, 4 );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	__builtin_memset( (boolean*)((uint8*)THIS$1 + 92), 0, 1 );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	*(void**)THIS$1 = (void*)((uint8*)_ZTVN8CONSOLEHE + 8);
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	uint8* vr$17 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas" );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	TMP$253$1 = vr$17;
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	uint8* vr$18 = fb_ErrorSetFuncName( (uint8*)"" );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	TMP$254$1 = vr$18;
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	label$228:;
	#line 15 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	label$229:;
	#line 15 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	fb_ErrorSetFuncName( (uint8*)TMP$254$1 );
	#line 15 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	fb_ErrorSetModName( (uint8*)TMP$253$1 );
#line 15 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
}

#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
void _ZN8CONSOLEHC1ER8FBSTRINGllllll( struct $8CONSOLEH* THIS$1, FBSTRING* HNAME1$1, int32 ID1$1, int32 PID1$1, int32 X1$1, int32 Y1$1, int32 W1$1, int32 H1$1 )
#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
{
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	int32 TMP$255$1;
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	struct $9CPCWINDOW* TMP$256$1;
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	int32 TMP$257$1;
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	struct $9CPCWINDOW* TMP$258$1;
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	uint8* TMP$259$1;
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	uint8* TMP$260$1;
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	label$230:;
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas" );
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	TMP$259$1 = vr$0;
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"" );
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	TMP$260$1 = vr$1;
	#line 18 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	_ZN8HCONTROLC1Ev( (struct $8HCONTROL*)THIS$1 );
	#line 18 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 68), 0, 4 );
	#line 18 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 72), 0, 4 );
	#line 18 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 76), 0, 4 );
	#line 18 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 80), 0, 4 );
	#line 18 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 84), 0, 4 );
	#line 18 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 88), 0, 4 );
	#line 18 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	__builtin_memset( (boolean*)((uint8*)THIS$1 + 92), 0, 1 );
	#line 18 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	*(void**)THIS$1 = (void*)((uint8*)_ZTVN8CONSOLEHE + 8);
	#line 18 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	FBSTRING* vr$21 = fb_StrAssign( (void*)((uint8*)THIS$1 + 4), -1, (void*)HNAME1$1, -1, 0 );
	#line 19 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	*(int32*)((uint8*)THIS$1 + 16) = ID1$1;
	#line 20 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	*(int32*)((uint8*)THIS$1 + 20) = PID1$1;
	#line 21 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	*(int32*)((uint8*)THIS$1 + 68) = X1$1;
	#line 22 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	*(int32*)((uint8*)THIS$1 + 72) = Y1$1;
	#line 23 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	*(int32*)((uint8*)THIS$1 + 84) = W1$1;
	#line 24 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	*(int32*)((uint8*)THIS$1 + 88) = H1$1;
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	TMP$255$1 = *(int32*)((uint8*)THIS$1 + 20);
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	void* vr$31 = fb_ArrayBoundChk( TMP$255$1, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 27, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas" );
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	if( vr$31 == 0 ) goto label$232;
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	goto *vr$31;
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	label$232:;
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	TMP$256$1 = *(struct $9CPCWINDOW**)((TMP$255$1 << (2 & 31)) + *(int32*)&WINDOWPTR$);
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	void* vr$34 = fb_NullPtrChk( (void*)TMP$256$1, 27, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas" );
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	if( vr$34 == 0 ) goto label$233;
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	goto *vr$34;
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	label$233:;
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	*(int32*)((uint8*)THIS$1 + 24) = (*(int32*)((uint8*)TMP$256$1 + 24) + X1$1) + 4;
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	TMP$257$1 = *(int32*)((uint8*)THIS$1 + 20);
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	void* vr$42 = fb_ArrayBoundChk( TMP$257$1, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 28, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas" );
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	if( vr$42 == 0 ) goto label$234;
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	goto *vr$42;
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	label$234:;
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	TMP$258$1 = *(struct $9CPCWINDOW**)((TMP$257$1 << (2 & 31)) + *(int32*)&WINDOWPTR$);
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	void* vr$45 = fb_NullPtrChk( (void*)TMP$258$1, 28, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas" );
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	if( vr$45 == 0 ) goto label$235;
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	goto *vr$45;
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	label$235:;
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	*(int32*)((uint8*)THIS$1 + 28) = (*(int32*)((uint8*)TMP$258$1 + 28) + Y1$1) + 25;
	#line 30 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	*(boolean*)((uint8*)THIS$1 + 92) = (boolean)1;
	#line 31 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	_ZN8CONSOLEH6REDRAWEv( THIS$1 );
	#line 32 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	label$231:;
	#line 32 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	fb_ErrorSetFuncName( (uint8*)TMP$260$1 );
	#line 32 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	fb_ErrorSetModName( (uint8*)TMP$259$1 );
#line 32 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
}

#line 35 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
void _ZN8CONSOLEH6REDRAWEv( struct $8CONSOLEH* THIS$1 )
#line 35 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
{
	#line 35 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	FBSTRING TMP$262$1;
	#line 35 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	uint8* TMP$263$1;
	#line 35 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	uint8* TMP$264$1;
	#line 35 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	label$236:;
	#line 35 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas" );
	#line 35 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	TMP$263$1 = vr$0;
	#line 35 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"REDRAW" );
	#line 35 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	TMP$264$1 = vr$1;
	#line 37 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	fb_GfxLine( (void*)0u, (float)*(int32*)((uint8*)THIS$1 + 24), (float)*(int32*)((uint8*)THIS$1 + 28), (float)(*(int32*)((uint8*)THIS$1 + 24) + *(int32*)((uint8*)THIS$1 + 84)), (float)(*(int32*)((uint8*)THIS$1 + 28) + *(int32*)((uint8*)THIS$1 + 88)), 4294967294u, 2, 65535u, 0 );
	#line 38 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	fb_GfxLine( (void*)0u, (float)*(int32*)((uint8*)THIS$1 + 24), (float)*(int32*)((uint8*)THIS$1 + 28), (float)(*(int32*)((uint8*)THIS$1 + 24) + *(int32*)((uint8*)THIS$1 + 84)), (float)*(int32*)((uint8*)THIS$1 + 28), 4278190080u, 1, 65535u, 0 );
	#line 39 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	fb_GfxLine( (void*)0u, (float)(*(int32*)((uint8*)THIS$1 + 24) + *(int32*)((uint8*)THIS$1 + 84)), (float)*(int32*)((uint8*)THIS$1 + 28), (float)*(int32*)((uint8*)THIS$1 + 24), (float)(*(int32*)((uint8*)THIS$1 + 28) + *(int32*)((uint8*)THIS$1 + 88)), 4278190080u, 1, 65535u, 0 );
	#line 41 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	_ZN5XFONT9INTERFACE16BACKCOLOR__set__Ej( &FONT1$, 0u );
	#line 42 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	_ZN5XFONT9INTERFACE16FORECOLOR__set__Ej( &FONT1$, 4278190080u );
	#line 43 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	__builtin_memset( &TMP$262$1, 0, 12 );
	#line 43 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	FBSTRING* vr$44 = fb_StrAssign( (void*)&TMP$262$1, -1, (void*)"Console!!!", 11, 0 );
	#line 43 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	_ZN5XFONT9INTERFACE10DRAWSTRINGEPvR8FBSTRINGssffh( &FONT1$, (void*)0u, &TMP$262$1, (int16)(*(int32*)((uint8*)THIS$1 + 24) + 4), (int16)(*(int32*)((uint8*)THIS$1 + 28) + 2), 0x1.p+0f, 0x1.p+0f, (uint8)0u );
	#line 43 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	fb_StrDelete( (FBSTRING*)&TMP$262$1 );
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	label$237:;
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	fb_ErrorSetFuncName( (uint8*)TMP$264$1 );
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	fb_ErrorSetModName( (uint8*)TMP$263$1 );
#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
}

#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
void NEWCONSOLE( FBSTRING* HNAME$1, int32 PID$1, int32 X$1, int32 Y$1, int32 W$1, int32 H$1 )
#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
{
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	int32 TMP$265$1;
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	struct $8CONSOLEH* TMP$266$1;
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	uint8* TMP$268$1;
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	uint8* TMP$270$1;
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	label$238:;
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas" );
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	TMP$268$1 = vr$0;
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"NEWCONSOLE" );
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	TMP$270$1 = vr$1;
	#line 55 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	CONSOLEPOPULATION$ = CONSOLEPOPULATION$ + 1u;
	#line 56 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	label$240:;
	#line 56 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	int32 vr$3 = fb_ArrayRedimPresvEx( (struct $7FBARRAYIvE*)&CONSOLEPTR$, 4u, -1, 0, 1u, 1, (int32)CONSOLEPOPULATION$ );
	#line 56 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	if( vr$3 == 0 ) goto label$241;
	#line 56 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	void* vr$6 = fb_ErrorThrowAt( 56, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas", (void*)&&label$240, (void*)&&label$241 );
	#line 56 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	goto *vr$6;
	#line 56 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	label$241:;
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	void* vr$7 = malloc( 96u );
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	TMP$266$1 = (struct $8CONSOLEH*)vr$7;
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	if( TMP$266$1 == (struct $8CONSOLEH*)0u ) goto label$242;
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	_ZN8CONSOLEHC1ER8FBSTRINGllllll( TMP$266$1, HNAME$1, (int32)CONSOLEPOPULATION$, PID$1, X$1, Y$1, W$1, H$1 );
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	label$242:;
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	TMP$265$1 = (int32)CONSOLEPOPULATION$;
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	void* vr$10 = fb_ArrayBoundChk( TMP$265$1, *(int32*)((uint8*)&CONSOLEPTR$ + 24), *(int32*)((uint8*)&CONSOLEPTR$ + 28), 57, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas" );
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	if( vr$10 == 0 ) goto label$243;
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	goto *vr$10;
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	label$243:;
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	*(struct $8CONSOLEH**)((TMP$265$1 << (2 & 31)) + *(int32*)&CONSOLEPTR$) = TMP$266$1;
	#line 58 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	label$239:;
	#line 58 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	fb_ErrorSetFuncName( (uint8*)TMP$270$1 );
	#line 58 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	fb_ErrorSetModName( (uint8*)TMP$268$1 );
#line 58 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
}

#line 11 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
void _ZN6CANVAHC1Ev( struct $6CANVAH* THIS$1 )
#line 11 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
{
	#line 11 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	uint8* TMP$281$1;
	#line 11 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	uint8* TMP$282$1;
	#line 11 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	_ZN8HCONTROLC1Ev( (struct $8HCONTROL*)THIS$1 );
	#line 11 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 68), 0, 4 );
	#line 11 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 72), 0, 4 );
	#line 11 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 76), 0, 4 );
	#line 11 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 80), 0, 4 );
	#line 11 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 84), 0, 4 );
	#line 11 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 88), 0, 4 );
	#line 11 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	__builtin_memset( (boolean*)((uint8*)THIS$1 + 92), 0, 1 );
	#line 11 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	*(void**)THIS$1 = (void*)((uint8*)_ZTVN6CANVAHE + 8);
	#line 11 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	uint8* vr$17 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi" );
	#line 11 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	TMP$281$1 = vr$17;
	#line 11 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	uint8* vr$18 = fb_ErrorSetFuncName( (uint8*)"" );
	#line 11 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	TMP$282$1 = vr$18;
	#line 11 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	label$250:;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	label$251:;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	fb_ErrorSetFuncName( (uint8*)TMP$282$1 );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	fb_ErrorSetModName( (uint8*)TMP$281$1 );
#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
}

#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
void _ZN6CANVAHC1ER8FBSTRINGllllll( struct $6CANVAH* THIS$1, FBSTRING* HNAME1$1, int32 ID1$1, int32 PID1$1, int32 X1$1, int32 Y1$1, int32 W1$1, int32 H1$1 )
#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
{
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	int32 TMP$283$1;
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	struct $9CPCWINDOW* TMP$284$1;
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	int32 TMP$285$1;
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	struct $9CPCWINDOW* TMP$286$1;
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	uint8* TMP$287$1;
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	uint8* TMP$288$1;
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	label$252:;
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi" );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	TMP$287$1 = vr$0;
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"" );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	TMP$288$1 = vr$1;
	#line 15 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	_ZN8HCONTROLC1Ev( (struct $8HCONTROL*)THIS$1 );
	#line 15 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 68), 0, 4 );
	#line 15 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 72), 0, 4 );
	#line 15 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 76), 0, 4 );
	#line 15 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 80), 0, 4 );
	#line 15 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 84), 0, 4 );
	#line 15 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 88), 0, 4 );
	#line 15 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	__builtin_memset( (boolean*)((uint8*)THIS$1 + 92), 0, 1 );
	#line 15 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	*(void**)THIS$1 = (void*)((uint8*)_ZTVN6CANVAHE + 8);
	#line 15 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	FBSTRING* vr$21 = fb_StrAssign( (void*)((uint8*)THIS$1 + 4), -1, (void*)HNAME1$1, -1, 0 );
	#line 16 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	*(int32*)((uint8*)THIS$1 + 16) = ID1$1;
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	*(int32*)((uint8*)THIS$1 + 20) = PID1$1;
	#line 18 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	*(int32*)((uint8*)THIS$1 + 68) = X1$1;
	#line 19 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	*(int32*)((uint8*)THIS$1 + 72) = Y1$1;
	#line 20 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	*(int32*)((uint8*)THIS$1 + 84) = W1$1;
	#line 21 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	*(int32*)((uint8*)THIS$1 + 88) = H1$1;
	#line 24 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	TMP$283$1 = *(int32*)((uint8*)THIS$1 + 20);
	#line 24 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	void* vr$31 = fb_ArrayBoundChk( TMP$283$1, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 24, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi" );
	#line 24 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	if( vr$31 == 0 ) goto label$254;
	#line 24 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	goto *vr$31;
	#line 24 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	label$254:;
	#line 24 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	TMP$284$1 = *(struct $9CPCWINDOW**)((TMP$283$1 << (2 & 31)) + *(int32*)&WINDOWPTR$);
	#line 24 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	void* vr$34 = fb_NullPtrChk( (void*)TMP$284$1, 24, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi" );
	#line 24 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	if( vr$34 == 0 ) goto label$255;
	#line 24 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	goto *vr$34;
	#line 24 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	label$255:;
	#line 24 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	*(int32*)((uint8*)THIS$1 + 24) = (*(int32*)((uint8*)TMP$284$1 + 24) + X1$1) + 4;
	#line 25 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	TMP$285$1 = *(int32*)((uint8*)THIS$1 + 20);
	#line 25 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	void* vr$42 = fb_ArrayBoundChk( TMP$285$1, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 25, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi" );
	#line 25 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	if( vr$42 == 0 ) goto label$256;
	#line 25 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	goto *vr$42;
	#line 25 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	label$256:;
	#line 25 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	TMP$286$1 = *(struct $9CPCWINDOW**)((TMP$285$1 << (2 & 31)) + *(int32*)&WINDOWPTR$);
	#line 25 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	void* vr$45 = fb_NullPtrChk( (void*)TMP$286$1, 25, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi" );
	#line 25 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	if( vr$45 == 0 ) goto label$257;
	#line 25 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	goto *vr$45;
	#line 25 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	label$257:;
	#line 25 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	*(int32*)((uint8*)THIS$1 + 28) = (*(int32*)((uint8*)TMP$286$1 + 28) + Y1$1) + 25;
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	*(boolean*)((uint8*)THIS$1 + 92) = (boolean)1;
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	_ZN6CANVAH6REDRAWEv( THIS$1 );
	#line 29 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	label$253:;
	#line 29 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	fb_ErrorSetFuncName( (uint8*)TMP$288$1 );
	#line 29 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	fb_ErrorSetModName( (uint8*)TMP$287$1 );
#line 29 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
}

#line 32 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
void _ZN6CANVAH6REDRAWEv( struct $6CANVAH* THIS$1 )
#line 32 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
{
	#line 32 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	uint8* TMP$290$1;
	#line 32 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	uint8* TMP$291$1;
	#line 32 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	label$258:;
	#line 32 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi" );
	#line 32 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	TMP$290$1 = vr$0;
	#line 32 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"REDRAW" );
	#line 32 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	TMP$291$1 = vr$1;
	#line 39 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	void* IMAGE_SET111$1;
	#line 39 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	__builtin_memset( &IMAGE_SET111$1, 0, 4 );
	#line 40 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	void* vr$5 = fb_GfxImageCreate( *(int32*)((uint8*)THIS$1 + 84), *(int32*)((uint8*)THIS$1 + 88), 4294967294u, 0, 0 );
	#line 40 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	IMAGE_SET111$1 = vr$5;
	#line 42 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	label$260:;
	#line 42 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	int32 vr$10 = fb_GfxPut( (void*)0u, (float)*(int32*)((uint8*)THIS$1 + 24), (float)*(int32*)((uint8*)THIS$1 + 28), (void*)IMAGE_SET111$1, -65536, -65536, -65536, -65536, 0, 1, (void*)&fb_hPutPSet, -1, (void*)0u, (void*)0u );
	#line 42 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	if( vr$10 == 0 ) goto label$261;
	#line 42 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	void* vr$13 = fb_ErrorThrowAt( 42, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi", (void*)&&label$260, (void*)&&label$261 );
	#line 42 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	goto *vr$13;
	#line 42 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	label$261:;
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	label$259:;
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	fb_ErrorSetFuncName( (uint8*)TMP$291$1 );
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	fb_ErrorSetModName( (uint8*)TMP$290$1 );
#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
}

#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
void NEWCANVA( FBSTRING* HNAME$1, int32 PID$1, int32 X$1, int32 Y$1, int32 W$1, int32 H$1 )
#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
{
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	int32 TMP$292$1;
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	struct $6CANVAH* TMP$293$1;
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	uint8* TMP$295$1;
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	uint8* TMP$297$1;
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	label$262:;
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi" );
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	TMP$295$1 = vr$0;
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"NEWCANVA" );
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	TMP$297$1 = vr$1;
	#line 55 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	CANVAPOPULATION$ = CANVAPOPULATION$ + 1u;
	#line 56 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	label$264:;
	#line 56 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	int32 vr$3 = fb_ArrayRedimPresvEx( (struct $7FBARRAYIvE*)&CANVAPTR$, 4u, -1, 0, 1u, 1, (int32)CANVAPOPULATION$ );
	#line 56 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	if( vr$3 == 0 ) goto label$265;
	#line 56 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	void* vr$6 = fb_ErrorThrowAt( 56, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi", (void*)&&label$264, (void*)&&label$265 );
	#line 56 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	goto *vr$6;
	#line 56 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	label$265:;
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	void* vr$7 = malloc( 96u );
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	TMP$293$1 = (struct $6CANVAH*)vr$7;
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	if( TMP$293$1 == (struct $6CANVAH*)0u ) goto label$266;
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	_ZN6CANVAHC1ER8FBSTRINGllllll( TMP$293$1, HNAME$1, (int32)CANVAPOPULATION$, PID$1, X$1, Y$1, W$1, H$1 );
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	label$266:;
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	TMP$292$1 = (int32)CANVAPOPULATION$;
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	void* vr$10 = fb_ArrayBoundChk( TMP$292$1, *(int32*)((uint8*)&CANVAPTR$ + 24), *(int32*)((uint8*)&CANVAPTR$ + 28), 57, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi" );
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	if( vr$10 == 0 ) goto label$267;
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	goto *vr$10;
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	label$267:;
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	*(struct $6CANVAH**)((TMP$292$1 << (2 & 31)) + *(int32*)&CANVAPTR$) = TMP$293$1;
	#line 58 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	label$263:;
	#line 58 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	fb_ErrorSetFuncName( (uint8*)TMP$297$1 );
	#line 58 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	fb_ErrorSetModName( (uint8*)TMP$295$1 );
#line 58 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
}

#line 11 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
void _ZN7BUTTONHC1Ev( struct $7BUTTONH* THIS$1 )
#line 11 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
{
	#line 11 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	uint8* TMP$308$1;
	#line 11 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	uint8* TMP$309$1;
	#line 11 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	_ZN8HCONTROLC1Ev( (struct $8HCONTROL*)THIS$1 );
	#line 11 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 68), 0, 4 );
	#line 11 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 72), 0, 4 );
	#line 11 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 76), 0, 4 );
	#line 11 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 80), 0, 4 );
	#line 11 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 84), 0, 4 );
	#line 11 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 88), 0, 4 );
	#line 11 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	__builtin_memset( (boolean*)((uint8*)THIS$1 + 92), 0, 1 );
	#line 11 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	*(void**)THIS$1 = (void*)((uint8*)_ZTVN7BUTTONHE + 8);
	#line 11 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	uint8* vr$17 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi" );
	#line 11 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	TMP$308$1 = vr$17;
	#line 11 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	uint8* vr$18 = fb_ErrorSetFuncName( (uint8*)"" );
	#line 11 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	TMP$309$1 = vr$18;
	#line 11 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	label$274:;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	label$275:;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	fb_ErrorSetFuncName( (uint8*)TMP$309$1 );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	fb_ErrorSetModName( (uint8*)TMP$308$1 );
#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
}

#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
void _ZN7BUTTONHC1ER8FBSTRINGllllll( struct $7BUTTONH* THIS$1, FBSTRING* HNAME1$1, int32 ID1$1, int32 PID1$1, int32 X1$1, int32 Y1$1, int32 W1$1, int32 H1$1 )
#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
{
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	int32 TMP$310$1;
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	struct $9CPCWINDOW* TMP$311$1;
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	int32 TMP$312$1;
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	struct $9CPCWINDOW* TMP$313$1;
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	uint8* TMP$314$1;
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	uint8* TMP$315$1;
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	label$276:;
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi" );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	TMP$314$1 = vr$0;
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"" );
	#line 14 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	TMP$315$1 = vr$1;
	#line 15 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	_ZN8HCONTROLC1Ev( (struct $8HCONTROL*)THIS$1 );
	#line 15 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 68), 0, 4 );
	#line 15 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 72), 0, 4 );
	#line 15 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 76), 0, 4 );
	#line 15 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 80), 0, 4 );
	#line 15 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 84), 0, 4 );
	#line 15 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 88), 0, 4 );
	#line 15 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	__builtin_memset( (boolean*)((uint8*)THIS$1 + 92), 0, 1 );
	#line 15 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	*(void**)THIS$1 = (void*)((uint8*)_ZTVN7BUTTONHE + 8);
	#line 15 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	FBSTRING* vr$21 = fb_StrAssign( (void*)((uint8*)THIS$1 + 4), -1, (void*)HNAME1$1, -1, 0 );
	#line 16 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	*(int32*)((uint8*)THIS$1 + 16) = ID1$1;
	#line 17 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	*(int32*)((uint8*)THIS$1 + 20) = PID1$1;
	#line 18 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	*(int32*)((uint8*)THIS$1 + 68) = X1$1;
	#line 19 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	*(int32*)((uint8*)THIS$1 + 72) = Y1$1;
	#line 20 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	*(int32*)((uint8*)THIS$1 + 84) = W1$1;
	#line 21 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	*(int32*)((uint8*)THIS$1 + 88) = H1$1;
	#line 24 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	TMP$310$1 = *(int32*)((uint8*)THIS$1 + 20);
	#line 24 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	void* vr$31 = fb_ArrayBoundChk( TMP$310$1, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 24, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi" );
	#line 24 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	if( vr$31 == 0 ) goto label$278;
	#line 24 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	goto *vr$31;
	#line 24 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	label$278:;
	#line 24 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	TMP$311$1 = *(struct $9CPCWINDOW**)((TMP$310$1 << (2 & 31)) + *(int32*)&WINDOWPTR$);
	#line 24 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	void* vr$34 = fb_NullPtrChk( (void*)TMP$311$1, 24, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi" );
	#line 24 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	if( vr$34 == 0 ) goto label$279;
	#line 24 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	goto *vr$34;
	#line 24 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	label$279:;
	#line 24 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	*(int32*)((uint8*)THIS$1 + 24) = (*(int32*)((uint8*)TMP$311$1 + 24) + X1$1) + 4;
	#line 25 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	TMP$312$1 = *(int32*)((uint8*)THIS$1 + 20);
	#line 25 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	void* vr$42 = fb_ArrayBoundChk( TMP$312$1, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 25, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi" );
	#line 25 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	if( vr$42 == 0 ) goto label$280;
	#line 25 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	goto *vr$42;
	#line 25 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	label$280:;
	#line 25 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	TMP$313$1 = *(struct $9CPCWINDOW**)((TMP$312$1 << (2 & 31)) + *(int32*)&WINDOWPTR$);
	#line 25 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	void* vr$45 = fb_NullPtrChk( (void*)TMP$313$1, 25, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi" );
	#line 25 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	if( vr$45 == 0 ) goto label$281;
	#line 25 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	goto *vr$45;
	#line 25 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	label$281:;
	#line 25 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	*(int32*)((uint8*)THIS$1 + 28) = (*(int32*)((uint8*)TMP$313$1 + 28) + Y1$1) + 25;
	#line 27 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	*(boolean*)((uint8*)THIS$1 + 92) = (boolean)1;
	#line 28 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	_ZN7BUTTONH6REDRAWEv( THIS$1 );
	#line 29 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	label$277:;
	#line 29 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	fb_ErrorSetFuncName( (uint8*)TMP$315$1 );
	#line 29 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	fb_ErrorSetModName( (uint8*)TMP$314$1 );
#line 29 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
}

#line 32 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
void _ZN7BUTTONH6REDRAWEv( struct $7BUTTONH* THIS$1 )
#line 32 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
{
	#line 32 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	uint8* TMP$317$1;
	#line 32 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	uint8* TMP$318$1;
	#line 32 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	label$282:;
	#line 32 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi" );
	#line 32 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	TMP$317$1 = vr$0;
	#line 32 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"REDRAW" );
	#line 32 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	TMP$318$1 = vr$1;
	#line 39 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	void* IMAGE_SET111$1;
	#line 39 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	__builtin_memset( &IMAGE_SET111$1, 0, 4 );
	#line 40 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	void* vr$5 = fb_GfxImageCreate( *(int32*)((uint8*)THIS$1 + 84), *(int32*)((uint8*)THIS$1 + 88), 4294967294u, 0, 0 );
	#line 40 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	IMAGE_SET111$1 = vr$5;
	#line 42 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	label$284:;
	#line 42 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	int32 vr$10 = fb_GfxPut( (void*)0u, (float)*(int32*)((uint8*)THIS$1 + 24), (float)*(int32*)((uint8*)THIS$1 + 28), (void*)IMAGE_SET111$1, -65536, -65536, -65536, -65536, 0, 1, (void*)&fb_hPutPSet, -1, (void*)0u, (void*)0u );
	#line 42 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	if( vr$10 == 0 ) goto label$285;
	#line 42 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	void* vr$13 = fb_ErrorThrowAt( 42, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi", (void*)&&label$284, (void*)&&label$285 );
	#line 42 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	goto *vr$13;
	#line 42 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	label$285:;
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	label$283:;
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	fb_ErrorSetFuncName( (uint8*)TMP$318$1 );
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	fb_ErrorSetModName( (uint8*)TMP$317$1 );
#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
}

#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
void NEWBUTTON( FBSTRING* HNAME$1, int32 PID$1, int32 X$1, int32 Y$1, int32 W$1, int32 H$1 )
#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
{
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	int32 TMP$319$1;
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	struct $7BUTTONH* TMP$320$1;
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	uint8* TMP$322$1;
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	uint8* TMP$324$1;
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	label$286:;
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi" );
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	TMP$322$1 = vr$0;
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"NEWBUTTON" );
	#line 53 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	TMP$324$1 = vr$1;
	#line 55 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	BUTTONPOPULATION$ = BUTTONPOPULATION$ + 1u;
	#line 56 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	label$288:;
	#line 56 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	int32 vr$3 = fb_ArrayRedimPresvEx( (struct $7FBARRAYIvE*)&BUTTONPTR$, 4u, -1, 0, 1u, 1, (int32)BUTTONPOPULATION$ );
	#line 56 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	if( vr$3 == 0 ) goto label$289;
	#line 56 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	void* vr$6 = fb_ErrorThrowAt( 56, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi", (void*)&&label$288, (void*)&&label$289 );
	#line 56 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	goto *vr$6;
	#line 56 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	label$289:;
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	void* vr$7 = malloc( 96u );
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	TMP$320$1 = (struct $7BUTTONH*)vr$7;
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	if( TMP$320$1 == (struct $7BUTTONH*)0u ) goto label$290;
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	_ZN7BUTTONHC1ER8FBSTRINGllllll( TMP$320$1, HNAME$1, (int32)BUTTONPOPULATION$, PID$1, X$1, Y$1, W$1, H$1 );
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	label$290:;
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	TMP$319$1 = (int32)BUTTONPOPULATION$;
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	void* vr$10 = fb_ArrayBoundChk( TMP$319$1, *(int32*)((uint8*)&BUTTONPTR$ + 24), *(int32*)((uint8*)&BUTTONPTR$ + 28), 57, (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi" );
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	if( vr$10 == 0 ) goto label$291;
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	goto *vr$10;
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	label$291:;
	#line 57 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	*(struct $7BUTTONH**)((TMP$319$1 << (2 & 31)) + *(int32*)&BUTTONPTR$) = TMP$320$1;
	#line 58 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	label$287:;
	#line 58 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	fb_ErrorSetFuncName( (uint8*)TMP$324$1 );
	#line 58 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	fb_ErrorSetModName( (uint8*)TMP$322$1 );
#line 58 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
}

#line 38 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
int32 Cpcdos_Mouse( void )
#line 38 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
{
	#line 38 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	FBSTRING TMP$326$1;
	#line 38 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	FBSTRING TMP$328$1;
	#line 38 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	FBSTRING TMP$330$1;
	#line 38 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* TMP$332$1;
	#line 38 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* TMP$334$1;
	#line 38 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	int32 fb$result$1;
	#line 38 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	__builtin_memset( &fb$result$1, 0, 4 );
	#line 38 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* vr$1 = fb_ErrorSetModName( (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
	#line 38 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	TMP$332$1 = vr$1;
	#line 38 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* vr$2 = fb_ErrorSetFuncName( (uint8*)"CPCDOS_MOUSE" );
	#line 38 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	TMP$334$1 = vr$2;
	#line 38 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	label$292:;
	// ' Will read vars from the C++ side
	// 	' Need to add functions for MouseEnter, MouseLeave, MouseClick, Click
	// 	'Cls
	// 	'PCopy 1, 0
	// 	CpcMouse()
	#line 43 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	CPCMOUSE(  );
	// 	print "X: " & MouseX
	#line 44 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	FBSTRING* vr$3 = fb_IntToStr( MOUSEX$ );
	#line 44 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	__builtin_memset( &TMP$326$1, 0, 12 );
	#line 44 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	FBSTRING* vr$6 = fb_StrConcat( &TMP$326$1, (void*)"X: ", 4, (void*)vr$3, -1 );
	#line 44 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_PrintString( 0, (FBSTRING*)vr$6, 1 );
	// 	print "Y: " & MouseY
	#line 45 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	FBSTRING* vr$7 = fb_IntToStr( MOUSEY$ );
	#line 45 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	__builtin_memset( &TMP$328$1, 0, 12 );
	#line 45 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	FBSTRING* vr$10 = fb_StrConcat( &TMP$328$1, (void*)"Y: ", 4, (void*)vr$7, -1 );
	#line 45 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_PrintString( 0, (FBSTRING*)vr$10, 1 );
	// 	print "Button: " & MouseButton
	#line 46 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	FBSTRING* vr$11 = fb_IntToStr( MOUSEBUTTON$ );
	#line 46 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	__builtin_memset( &TMP$330$1, 0, 12 );
	#line 46 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	FBSTRING* vr$14 = fb_StrConcat( &TMP$330$1, (void*)"Button: ", 9, (void*)vr$11, -1 );
	#line 46 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_PrintString( 0, (FBSTRING*)vr$14, 1 );
	// 	
	// 	Flip()
	#line 48 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_GfxFlip( -1, -1 );
	// 	'Sleep( 1, 1 )
	#line 50 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	label$293:;
	#line 50 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_ErrorSetFuncName( (uint8*)TMP$334$1 );
	#line 50 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_ErrorSetModName( (uint8*)TMP$332$1 );
	#line 50 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	return fb$result$1;
#line 50 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
}

#line 55 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
FBSTRING* READ_CPC_VAR( void )
#line 55 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
{
	#line 55 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* TMP$335$1;
	#line 55 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* TMP$337$1;
	#line 55 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	FBSTRING fb$result$1;
	#line 55 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	__builtin_memset( &fb$result$1, 0, 12 );
	#line 55 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* vr$1 = fb_ErrorSetModName( (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
	#line 55 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	TMP$335$1 = vr$1;
	#line 55 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* vr$2 = fb_ErrorSetFuncName( (uint8*)"READ_CPC_VAR" );
	#line 55 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	TMP$337$1 = vr$2;
	#line 55 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	label$294:;
	// ' Will read vars from the C++ side
	#line 57 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	label$295:;
	#line 57 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_ErrorSetFuncName( (uint8*)TMP$337$1 );
	#line 57 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_ErrorSetModName( (uint8*)TMP$335$1 );
	#line 57 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	FBSTRING* vr$4 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	#line 57 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	return vr$4;
#line 57 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
}

#line 62 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void BACKGROUND( FBSTRING* BACK$1 )
#line 62 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
{
	#line 62 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	FBSTRING TMP$338$1;
	#line 62 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* TMP$340$1;
	#line 62 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* TMP$342$1;
	#line 62 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	label$296:;
	#line 62 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
	#line 62 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	TMP$340$1 = vr$0;
	#line 62 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"BACKGROUND" );
	#line 62 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	TMP$342$1 = vr$1;
	// 	'SCR_IMG_MODE VALUE TO SET
	// Dim As Any Ptr IMG_TEST1
	#line 64 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	void* IMG_TEST1$1;
	#line 64 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	__builtin_memset( &IMG_TEST1$1, 0, 4 );
	// 	ScreenSet( 1, 1 )
	#line 66 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_GfxPageSet( 1, 1 );
	// IMG_TEST1 = Imagecreate(800,600, 0)  'save image while screen is being worked on
	#line 68 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	void* vr$3 = fb_GfxImageCreate( 800, 600, 0u, 0, 0 );
	#line 68 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	IMG_TEST1$1 = vr$3;
	// 	
	// IMG_TEST1 = charger_PNG(back, 32, 5, MAXW,MAXH)
	#line 70 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	__builtin_memset( &TMP$338$1, 0, 12 );
	#line 70 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	FBSTRING* vr$6 = fb_StrAssign( (void*)&TMP$338$1, -1, (void*)BACK$1, -1, 0 );
	#line 70 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	void* vr$8 = CHARGER_PNG( &TMP$338$1, 32, 5, &MAXW$, &MAXH$ );
	#line 70 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	IMG_TEST1$1 = vr$8;
	#line 70 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_StrDelete( (FBSTRING*)&TMP$338$1 );
	// 	
	// put (0,0), IMG_TEST1, Pset
	#line 72 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	label$298:;
	#line 72 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	int32 vr$10 = fb_GfxPut( (void*)0u, 0x0p+0f, 0x0p+0f, (void*)IMG_TEST1$1, -65536, -65536, -65536, -65536, 0, 1, (void*)&fb_hPutPSet, -1, (void*)0u, (void*)0u );
	#line 72 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	if( vr$10 == 0 ) goto label$299;
	#line 72 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	void* vr$13 = fb_ErrorThrowAt( 72, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS", (void*)&&label$298, (void*)&&label$299 );
	#line 72 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	goto *vr$13;
	#line 72 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	label$299:;
	// 	
	// 	ScreenSet( 0, 0 )
	#line 74 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_GfxPageSet( 0, 0 );
	// 	PCopy 1, 0
	#line 76 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_PageCopy( 1, 0 );
	#line 77 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	label$297:;
	#line 77 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_ErrorSetFuncName( (uint8*)TMP$342$1 );
	#line 77 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_ErrorSetModName( (uint8*)TMP$340$1 );
#line 77 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
}

#line 85 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void TEST_DESKTOP( void )
#line 85 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
{
	#line 85 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	FBSTRING TMP$343$1;
	#line 85 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	int32 TMP$344$1;
	#line 85 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	int32 TMP$345$1;
	#line 85 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* TMP$346$1;
	#line 85 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* TMP$348$1;
	#line 85 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	label$300:;
	#line 85 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
	#line 85 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	TMP$346$1 = vr$0;
	#line 85 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"TEST_DESKTOP" );
	#line 85 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	TMP$348$1 = vr$1;
	// 	Dim As any Ptr ConsoleIcon
	#line 86 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	void* CONSOLEICON$1;
	#line 86 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	__builtin_memset( &CONSOLEICON$1, 0, 4 );
	// 	Dim As any Ptr ConsoleIconR
	#line 87 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	void* CONSOLEICONR$1;
	#line 87 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	__builtin_memset( &CONSOLEICONR$1, 0, 4 );
	// 	Dim As any Ptr CpcApp
	#line 88 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	void* CPCAPP$1;
	#line 88 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	__builtin_memset( &CPCAPP$1, 0, 4 );
	// 	ScreenSet(3, 1)
	#line 90 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_GfxPageSet( 3, 1 );
	// 	ConsoleIconR = Imagecreate(64, 64, RGBA(0, 0, 0, 0) [Macro Expansion: ((cuint(0) shl 16) or (cuint(0) shl 8) or cuint(0) or (cuint(0) shl 24)) ] )	
	#line 91 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	void* vr$5 = fb_GfxImageCreate( 64, 64, 0u, 0, 0 );
	#line 91 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	CONSOLEICONR$1 = vr$5;
	// 	ConsoleIcon = charger_PNG("cmd.png", 32, 5, 128, 128)
	#line 93 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	TMP$345$1 = 128;
	#line 93 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	TMP$344$1 = 128;
	#line 93 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	__builtin_memset( &TMP$343$1, 0, 12 );
	#line 93 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	FBSTRING* vr$10 = fb_StrAssign( (void*)&TMP$343$1, -1, (void*)"cmd.png", 8, 0 );
	#line 93 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	void* vr$12 = CHARGER_PNG( &TMP$343$1, 32, 5, &TMP$344$1, &TMP$345$1 );
	#line 93 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	CONSOLEICON$1 = vr$12;
	#line 93 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_StrDelete( (FBSTRING*)&TMP$343$1 );
	// 'IMG_change_size_quick(ConsoleIcon, ConsoleIconR,64, 64, 128, 128, 64, 64)
	// 'put(25, 25),ConsoleIconR, alpha
	// 	ScreenSet(0,0)
	#line 96 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_GfxPageSet( 0, 0 );
	// 	PCopy 3, 1
	#line 97 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_PageCopy( 3, 1 );
	#line 99 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	label$301:;
	#line 99 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_ErrorSetFuncName( (uint8*)TMP$348$1 );
	#line 99 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_ErrorSetModName( (uint8*)TMP$346$1 );
#line 99 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
}

#line 101 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
int32 eliedraw_gui( int32 SX$1, int32 SY$1, FBSTRING* BACKGR$1 )
#line 101 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
{
	#line 101 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	FBSTRING TMP$350$1;
	#line 101 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	FBSTRING TMP$352$1;
	#line 101 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	FBSTRING TMP$354$1;
	#line 101 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	FBSTRING TMP$357$1;
	#line 101 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* TMP$358$1;
	#line 101 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* TMP$360$1;
	#line 101 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	int32 fb$result$1;
	#line 101 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	__builtin_memset( &fb$result$1, 0, 4 );
	#line 101 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* vr$1 = fb_ErrorSetModName( (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
	#line 101 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	TMP$358$1 = vr$1;
	#line 101 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* vr$2 = fb_ErrorSetFuncName( (uint8*)"ELIEDRAW_GUI" );
	#line 101 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	TMP$360$1 = vr$2;
	#line 101 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	label$302:;
	// 'We load background
	// Background(backgr)
	#line 103 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	BACKGROUND( BACKGR$1 );
	// ScreenSet(0,2)
	#line 104 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_GfxPageSet( 0, 2 );
	// 	'Test_Desktop()
	// NewWindow("Win1", 10, 10, 400, 340, "CC+ Console", &h9e9e9e, 39, 232, 247)
	#line 106 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	__builtin_memset( &TMP$352$1, 0, 12 );
	#line 106 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	FBSTRING* vr$5 = fb_StrAssign( (void*)&TMP$352$1, -1, (void*)"CC+ Console", 12, 0 );
	#line 106 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	__builtin_memset( &TMP$350$1, 0, 12 );
	#line 106 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	FBSTRING* vr$9 = fb_StrAssign( (void*)&TMP$350$1, -1, (void*)"Win1", 5, 0 );
	#line 106 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	NEWWINDOW( &TMP$350$1, 10, 10, 400, 340, &TMP$352$1, 10395294u, 39, 232, 247 );
	#line 106 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_StrDelete( (FBSTRING*)&TMP$352$1 );
	#line 106 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_StrDelete( (FBSTRING*)&TMP$350$1 );
	// 	NewPicturebox("icon", 1, 10, 10, 64, 64)
	#line 107 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	__builtin_memset( &TMP$354$1, 0, 12 );
	#line 107 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	FBSTRING* vr$15 = fb_StrAssign( (void*)&TMP$354$1, -1, (void*)"icon", 5, 0 );
	#line 107 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	NEWPICTUREBOX( &TMP$354$1, 1, 10, 10, 64, 64 );
	#line 107 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_StrDelete( (FBSTRING*)&TMP$354$1 );
	// 'ScreenSet(0,2)
	// 	cpcccp_.cpcdos_command("exe/ window.cpc")
	#line 109 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	_ZN7CPC_CCP14cpcdos_commandEPc( (uint8*)"exe/ window.cpc" );
	// 	
	// 	'NewTextbox("btn3", 1, 10, 10, 100, 50)
	// 	'NewTextblock("bdddd", 1, 100, 90, 100, 50)
	// 	NewConsole("bdddd", 1, 100, 90, 100, 50)
	#line 113 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	__builtin_memset( &TMP$357$1, 0, 12 );
	#line 113 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	FBSTRING* vr$20 = fb_StrAssign( (void*)&TMP$357$1, -1, (void*)"bdddd", 6, 0 );
	#line 113 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	NEWCONSOLE( &TMP$357$1, 1, 100, 90, 100, 50 );
	#line 113 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_StrDelete( (FBSTRING*)&TMP$357$1 );
	// 	
	#line 115 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	label$303:;
	#line 115 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_ErrorSetFuncName( (uint8*)TMP$360$1 );
	#line 115 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_ErrorSetModName( (uint8*)TMP$358$1 );
	#line 115 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	return fb$result$1;
#line 115 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
}

#line 117 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
int32 Create_Window( FBSTRING* TITLE$1, FBSTRING* NAME_WIN$1, int32 TYPEWIN$1, int32 SX$1, int32 SY$1, int32 PX$1, int32 PY$1, int32 OPACITY$1, int32 WINDOWCR$1, int32 WINDOWCG$1, int32 WINDOWCB$1 )
#line 117 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
{
	#line 117 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* TMP$361$1;
	#line 117 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* TMP$363$1;
	#line 117 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	int32 fb$result$1;
	#line 117 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	__builtin_memset( &fb$result$1, 0, 4 );
	#line 117 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* vr$1 = fb_ErrorSetModName( (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
	#line 117 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	TMP$361$1 = vr$1;
	#line 117 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* vr$2 = fb_ErrorSetFuncName( (uint8*)"CREATE_WINDOW" );
	#line 117 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	TMP$363$1 = vr$2;
	#line 117 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	label$304:;
	// 'print title
	// 'print name_win
	// 'print settings
	// ' We declare all the window environment
	// 	' iActiveWindow += 1
	// 	NewWindow(name_win, PX, PY, SX, SY, title, &h9e9e9e, WindowCR, WindowCG, WindowCB)
	#line 123 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	NEWWINDOW( NAME_WIN$1, PX$1, PY$1, SX$1, SY$1, TITLE$1, 10395294u, WINDOWCR$1, WINDOWCG$1, WINDOWCB$1 );
	#line 124 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	label$305:;
	#line 124 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_ErrorSetFuncName( (uint8*)TMP$363$1 );
	#line 124 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_ErrorSetModName( (uint8*)TMP$361$1 );
	#line 124 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	return fb$result$1;
#line 124 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
}

#line 126 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void DOEVENTS( void )
#line 126 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
{
	#line 126 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* TMP$368$1;
	#line 126 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* TMP$369$1;
	#line 126 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	label$306:;
	#line 126 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
	#line 126 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	TMP$368$1 = vr$0;
	#line 126 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"DOEVENTS" );
	#line 126 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	TMP$369$1 = vr$1;
	// 'Background()
	// 	For i As Integer = 1 To UBound(WindowPTR)	'doevents of every window
	{
		#line 128 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		int32 I$2;
		#line 128 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		I$2 = 1;
		#line 128 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		int32 TMP$364$2;
		#line 128 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		int32 vr$2 = fb_ArrayUBound( (struct $7FBARRAYIKvE*)&WINDOWPTR$, 1 );
		#line 128 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		TMP$364$2 = vr$2;
		#line 128 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		goto label$308;
		#line 128 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		label$311:;
		{
			#line 128 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			int32 TMP$365$3;
			#line 128 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			int32 TMP$366$3;
			#line 128 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			struct $9CPCWINDOW* TMP$367$3;
			// 		If WindowPTR(i) = 0 Then Continue For	'skip deleted windows
			#line 129 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			TMP$365$3 = I$2;
			#line 129 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			void* vr$5 = fb_ArrayBoundChk( TMP$365$3, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 129, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
			#line 129 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			if( vr$5 == 0 ) goto label$314;
			#line 129 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			goto *vr$5;
			#line 129 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			label$314:;
			#line 129 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			if( *(struct $9CPCWINDOW**)((TMP$365$3 << (2 & 31)) + *(int32*)&WINDOWPTR$) != (struct $9CPCWINDOW*)0u ) goto label$313;
			{
				#line 129 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				goto label$309;
				#line 129 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				label$313:;
			}
			// 		WindowPTR(i)->DoEvents
			#line 130 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			TMP$366$3 = I$2;
			#line 130 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			void* vr$10 = fb_ArrayBoundChk( TMP$366$3, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 130, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
			#line 130 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			if( vr$10 == 0 ) goto label$315;
			#line 130 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			goto *vr$10;
			#line 130 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			label$315:;
			#line 130 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			_ZN9CPCWINDOW8DOEVENTSEv( *(struct $9CPCWINDOW**)((TMP$366$3 << (2 & 31)) + *(int32*)&WINDOWPTR$) );
			// 	Next
		}
		#line 131 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		label$309:;
		#line 131 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		I$2 = I$2 + 1;
		#line 131 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		label$308:;
		#line 131 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		if( I$2 <= TMP$364$2 ) goto label$311;
		#line 131 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		label$310:;
	}
	// 	
	// 	'Cpcdos_Mouse()
	// 	WatchCPCWindows()
	#line 134 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	WATCHCPCWINDOWS(  );
	// 	CloseWindow()
	#line 135 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	CLOSEWINDOW(  );
	// 	
	#line 137 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	label$307:;
	#line 137 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_ErrorSetFuncName( (uint8*)TMP$369$1 );
	#line 137 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_ErrorSetModName( (uint8*)TMP$368$1 );
#line 137 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
}

#line 139 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void MAINLOOP( void )
#line 139 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
{
	#line 139 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* TMP$370$1;
	#line 139 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* TMP$372$1;
	#line 139 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	label$316:;
	#line 139 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
	#line 139 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	TMP$370$1 = vr$0;
	#line 139 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"MAINLOOP" );
	#line 139 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	TMP$372$1 = vr$1;
	// 	DoEvents()
	#line 140 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	DOEVENTS(  );
	// '	Sleep( 1, 1 )
	#line 143 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	label$317:;
	#line 143 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_ErrorSetFuncName( (uint8*)TMP$372$1 );
	#line 143 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_ErrorSetModName( (uint8*)TMP$370$1 );
#line 143 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
}

#line 145 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
int32 CpcLoop( void )
#line 145 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
{
	#line 145 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* TMP$373$1;
	#line 145 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* TMP$375$1;
	#line 145 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	int32 fb$result$1;
	#line 145 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	__builtin_memset( &fb$result$1, 0, 4 );
	#line 145 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* vr$1 = fb_ErrorSetModName( (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
	#line 145 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	TMP$373$1 = vr$1;
	#line 145 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* vr$2 = fb_ErrorSetFuncName( (uint8*)"CPCLOOP" );
	#line 145 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	TMP$375$1 = vr$2;
	#line 145 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	label$318:;
	// DoEvents()
	#line 146 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	DOEVENTS(  );
	#line 147 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	label$319:;
	#line 147 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_ErrorSetFuncName( (uint8*)TMP$375$1 );
	#line 147 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_ErrorSetModName( (uint8*)TMP$373$1 );
	#line 147 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	return fb$result$1;
#line 147 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
}

#line 149 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void REPAINT( void )
#line 149 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
{
	#line 149 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* TMP$610$1;
	#line 149 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* TMP$612$1;
	#line 149 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	label$320:;
	#line 149 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
	#line 149 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	TMP$610$1 = vr$0;
	#line 149 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"REPAINT" );
	#line 149 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	TMP$612$1 = vr$1;
	// 	Cls
	#line 150 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_Cls( -65536 );
	// 	'for each window
	// 'Background()
	// 	PCopy 1, 0
	#line 154 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_PageCopy( 1, 0 );
	// 	'PCopy 3,1
	// 	For i As Integer = 1 To UBound(WindowPTR)
	{
		#line 156 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		int32 I$2;
		#line 156 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		I$2 = 1;
		#line 156 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		int32 TMP$376$2;
		#line 156 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		int32 vr$2 = fb_ArrayUBound( (struct $7FBARRAYIKvE*)&WINDOWPTR$, 1 );
		#line 156 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		TMP$376$2 = vr$2;
		#line 156 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		goto label$322;
		#line 156 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		label$325:;
		{
			#line 156 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			int32 TMP$377$3;
			#line 156 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			int32 TMP$378$3;
			#line 156 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			struct $9CPCWINDOW* TMP$379$3;
			#line 156 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			int32 TMP$380$3;
			#line 156 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			struct $9CPCWINDOW* TMP$381$3;
			// 		If WindowPTR(i) = 0 Then Continue For
			#line 157 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			TMP$377$3 = I$2;
			#line 157 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			void* vr$5 = fb_ArrayBoundChk( TMP$377$3, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 157, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
			#line 157 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			if( vr$5 == 0 ) goto label$402;
			#line 157 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			goto *vr$5;
			#line 157 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			label$402:;
			#line 157 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			if( *(struct $9CPCWINDOW**)((TMP$377$3 << (2 & 31)) + *(int32*)&WINDOWPTR$) != (struct $9CPCWINDOW*)0u ) goto label$327;
			{
				#line 157 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				goto label$323;
				#line 157 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				label$327:;
			}
			// 		WindowPTR(i)->redraw()
			#line 158 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			TMP$378$3 = I$2;
			#line 158 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			void* vr$10 = fb_ArrayBoundChk( TMP$378$3, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 158, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
			#line 158 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			if( vr$10 == 0 ) goto label$403;
			#line 158 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			goto *vr$10;
			#line 158 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			label$403:;
			#line 158 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			_ZN9CPCWINDOW6REDRAWEv( *(struct $9CPCWINDOW**)((TMP$378$3 << (2 & 31)) + *(int32*)&WINDOWPTR$) );
			// 		WindowPTR(i)->Zorder = i
			#line 159 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			TMP$380$3 = I$2;
			#line 159 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			void* vr$15 = fb_ArrayBoundChk( TMP$380$3, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 159, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
			#line 159 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			if( vr$15 == 0 ) goto label$404;
			#line 159 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			goto *vr$15;
			#line 159 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			label$404:;
			#line 159 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			TMP$381$3 = *(struct $9CPCWINDOW**)((TMP$380$3 << (2 & 31)) + *(int32*)&WINDOWPTR$);
			#line 159 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			void* vr$18 = fb_NullPtrChk( (void*)TMP$381$3, 159, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
			#line 159 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			if( vr$18 == 0 ) goto label$405;
			#line 159 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			goto *vr$18;
			#line 159 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			label$405:;
			#line 159 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			*(uint32*)((uint8*)TMP$381$3 + 96) = (uint32)I$2;
			// 		For a As Integer = 1 To UBound(CanvaPTR)
			{
				#line 160 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				int32 A$4;
				#line 160 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				A$4 = 1;
				#line 160 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				int32 TMP$382$4;
				#line 160 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				int32 vr$20 = fb_ArrayUBound( (struct $7FBARRAYIKvE*)&CANVAPTR$, 1 );
				#line 160 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				TMP$382$4 = vr$20;
				#line 160 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				goto label$328;
				#line 160 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				label$331:;
				{
					#line 160 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					int32 TMP$383$5;
					#line 160 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					int32 TMP$384$5;
					#line 160 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					struct $6CANVAH* TMP$385$5;
					#line 160 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					int32 TMP$386$5;
					#line 160 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					struct $9CPCWINDOW* TMP$387$5;
					// 			If CanvaPTR(a) = 0 Then Continue For
					#line 161 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					TMP$383$5 = A$4;
					#line 161 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					void* vr$23 = fb_ArrayBoundChk( TMP$383$5, *(int32*)((uint8*)&CANVAPTR$ + 24), *(int32*)((uint8*)&CANVAPTR$ + 28), 161, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
					#line 161 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					if( vr$23 == 0 ) goto label$406;
					#line 161 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					goto *vr$23;
					#line 161 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					label$406:;
					#line 161 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					if( *(struct $6CANVAH**)((TMP$383$5 << (2 & 31)) + *(int32*)&CANVAPTR$) != (struct $6CANVAH*)0u ) goto label$333;
					{
						#line 161 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto label$329;
						#line 161 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$333:;
					}
					// 				If CanvaPTR(a)->pid = WindowPTR(i)->id Then	'if window has buttons Then
					#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					TMP$384$5 = A$4;
					#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					void* vr$28 = fb_ArrayBoundChk( TMP$384$5, *(int32*)((uint8*)&CANVAPTR$ + 24), *(int32*)((uint8*)&CANVAPTR$ + 28), 162, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
					#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					if( vr$28 == 0 ) goto label$407;
					#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					goto *vr$28;
					#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					label$407:;
					#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					TMP$385$5 = *(struct $6CANVAH**)((TMP$384$5 << (2 & 31)) + *(int32*)&CANVAPTR$);
					#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					void* vr$31 = fb_NullPtrChk( (void*)TMP$385$5, 162, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
					#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					if( vr$31 == 0 ) goto label$408;
					#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					goto *vr$31;
					#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					label$408:;
					#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					TMP$386$5 = I$2;
					#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					void* vr$35 = fb_ArrayBoundChk( TMP$386$5, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 162, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
					#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					if( vr$35 == 0 ) goto label$409;
					#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					goto *vr$35;
					#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					label$409:;
					#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					TMP$387$5 = *(struct $9CPCWINDOW**)((TMP$386$5 << (2 & 31)) + *(int32*)&WINDOWPTR$);
					#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					void* vr$38 = fb_NullPtrChk( (void*)TMP$387$5, 162, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
					#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					if( vr$38 == 0 ) goto label$410;
					#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					goto *vr$38;
					#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					label$410:;
					#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					if( *(int32*)((uint8*)TMP$385$5 + 20) != *(int32*)((uint8*)TMP$387$5 + 16) ) goto label$335;
					{
						#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$388$6;
						#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $6CANVAH* TMP$389$6;
						#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$390$6;
						#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $6CANVAH* TMP$391$6;
						#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$392$6;
						#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $9CPCWINDOW* TMP$393$6;
						#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$396$6;
						#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $6CANVAH* TMP$397$6;
						#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$398$6;
						#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $6CANVAH* TMP$399$6;
						#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$400$6;
						#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $9CPCWINDOW* TMP$401$6;
						#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$404$6;
						#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $6CANVAH* TMP$405$6;
						#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$406$6;
						#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $9CPCWINDOW* TMP$407$6;
						#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$408$6;
						#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $6CANVAH* TMP$409$6;
						#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$410$6;
						#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $6CANVAH* TMP$411$6;
						#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$412$6;
						#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $9CPCWINDOW* TMP$413$6;
						#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$414$6;
						#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $6CANVAH* TMP$415$6;
						#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$416$6;
						#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $6CANVAH* TMP$417$6;
						#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$418$6;
						#line 162 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $6CANVAH* TMP$419$6;
						// 					'if window width is smaller than buttons position hide them
						// 					If (CanvaPTR(a)->x2 + CanvaPTR(a)->sx + 8) >= WindowPTR(i)->sx Then
						#line 164 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$388$6 = A$4;
						#line 164 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$42 = fb_ArrayBoundChk( TMP$388$6, *(int32*)((uint8*)&CANVAPTR$ + 24), *(int32*)((uint8*)&CANVAPTR$ + 28), 164, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 164 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$42 == 0 ) goto label$411;
						#line 164 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$42;
						#line 164 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$411:;
						#line 164 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$389$6 = *(struct $6CANVAH**)((TMP$388$6 << (2 & 31)) + *(int32*)&CANVAPTR$);
						#line 164 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$45 = fb_NullPtrChk( (void*)TMP$389$6, 164, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 164 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$45 == 0 ) goto label$412;
						#line 164 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$45;
						#line 164 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$412:;
						#line 164 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$390$6 = A$4;
						#line 164 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$49 = fb_ArrayBoundChk( TMP$390$6, *(int32*)((uint8*)&CANVAPTR$ + 24), *(int32*)((uint8*)&CANVAPTR$ + 28), 164, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 164 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$49 == 0 ) goto label$413;
						#line 164 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$49;
						#line 164 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$413:;
						#line 164 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$391$6 = *(struct $6CANVAH**)((TMP$390$6 << (2 & 31)) + *(int32*)&CANVAPTR$);
						#line 164 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$52 = fb_NullPtrChk( (void*)TMP$391$6, 164, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 164 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$52 == 0 ) goto label$414;
						#line 164 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$52;
						#line 164 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$414:;
						#line 164 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$392$6 = I$2;
						#line 164 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$58 = fb_ArrayBoundChk( TMP$392$6, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 164, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 164 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$58 == 0 ) goto label$415;
						#line 164 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$58;
						#line 164 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$415:;
						#line 164 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$393$6 = *(struct $9CPCWINDOW**)((TMP$392$6 << (2 & 31)) + *(int32*)&WINDOWPTR$);
						#line 164 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$61 = fb_NullPtrChk( (void*)TMP$393$6, 164, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 164 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$61 == 0 ) goto label$416;
						#line 164 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$61;
						#line 164 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$416:;
						#line 164 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( ((*(int32*)((uint8*)TMP$389$6 + 68) + *(int32*)((uint8*)TMP$391$6 + 32)) + 8) < *(int32*)((uint8*)TMP$393$6 + 32) ) goto label$337;
						{
							#line 164 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							int32 TMP$394$7;
							#line 164 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							struct $6CANVAH* TMP$395$7;
							// 						CanvaPTR(a)->IsVisible = False
							#line 165 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							TMP$394$7 = A$4;
							#line 165 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							void* vr$65 = fb_ArrayBoundChk( TMP$394$7, *(int32*)((uint8*)&CANVAPTR$ + 24), *(int32*)((uint8*)&CANVAPTR$ + 28), 165, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
							#line 165 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							if( vr$65 == 0 ) goto label$417;
							#line 165 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							goto *vr$65;
							#line 165 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							label$417:;
							#line 165 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							TMP$395$7 = *(struct $6CANVAH**)((TMP$394$7 << (2 & 31)) + *(int32*)&CANVAPTR$);
							#line 165 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							void* vr$68 = fb_NullPtrChk( (void*)TMP$395$7, 165, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
							#line 165 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							if( vr$68 == 0 ) goto label$418;
							#line 165 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							goto *vr$68;
							#line 165 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							label$418:;
							#line 165 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							*(boolean*)((uint8*)TMP$395$7 + 92) = (boolean)0;
							// 						Continue For
							#line 166 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							goto label$329;
							// 					End If
						}
						#line 167 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$337:;
						#line 167 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$336:;
						// 					'if window height is smaller than buttons position hide them
						// 					If (CanvaPTR(a)->y2 + CanvaPTR(a)->sy + TBH  [Macro Expansion: 25  ]  + 4) >= WindowPTR(i)->sy Then
						#line 169 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$396$6 = A$4;
						#line 169 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$72 = fb_ArrayBoundChk( TMP$396$6, *(int32*)((uint8*)&CANVAPTR$ + 24), *(int32*)((uint8*)&CANVAPTR$ + 28), 169, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 169 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$72 == 0 ) goto label$419;
						#line 169 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$72;
						#line 169 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$419:;
						#line 169 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$397$6 = *(struct $6CANVAH**)((TMP$396$6 << (2 & 31)) + *(int32*)&CANVAPTR$);
						#line 169 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$75 = fb_NullPtrChk( (void*)TMP$397$6, 169, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 169 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$75 == 0 ) goto label$420;
						#line 169 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$75;
						#line 169 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$420:;
						#line 169 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$398$6 = A$4;
						#line 169 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$79 = fb_ArrayBoundChk( TMP$398$6, *(int32*)((uint8*)&CANVAPTR$ + 24), *(int32*)((uint8*)&CANVAPTR$ + 28), 169, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 169 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$79 == 0 ) goto label$421;
						#line 169 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$79;
						#line 169 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$421:;
						#line 169 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$399$6 = *(struct $6CANVAH**)((TMP$398$6 << (2 & 31)) + *(int32*)&CANVAPTR$);
						#line 169 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$82 = fb_NullPtrChk( (void*)TMP$399$6, 169, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 169 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$82 == 0 ) goto label$422;
						#line 169 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$82;
						#line 169 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$422:;
						#line 169 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$400$6 = I$2;
						#line 169 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$88 = fb_ArrayBoundChk( TMP$400$6, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 169, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 169 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$88 == 0 ) goto label$423;
						#line 169 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$88;
						#line 169 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$423:;
						#line 169 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$401$6 = *(struct $9CPCWINDOW**)((TMP$400$6 << (2 & 31)) + *(int32*)&WINDOWPTR$);
						#line 169 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$91 = fb_NullPtrChk( (void*)TMP$401$6, 169, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 169 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$91 == 0 ) goto label$424;
						#line 169 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$91;
						#line 169 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$424:;
						#line 169 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( ((*(int32*)((uint8*)TMP$397$6 + 72) + *(int32*)((uint8*)TMP$399$6 + 36)) + 29) < *(int32*)((uint8*)TMP$401$6 + 36) ) goto label$339;
						{
							#line 169 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							int32 TMP$402$7;
							#line 169 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							struct $6CANVAH* TMP$403$7;
							// 						CanvaPTR(a)->IsVisible = False
							#line 170 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							TMP$402$7 = A$4;
							#line 170 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							void* vr$95 = fb_ArrayBoundChk( TMP$402$7, *(int32*)((uint8*)&CANVAPTR$ + 24), *(int32*)((uint8*)&CANVAPTR$ + 28), 170, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
							#line 170 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							if( vr$95 == 0 ) goto label$425;
							#line 170 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							goto *vr$95;
							#line 170 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							label$425:;
							#line 170 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							TMP$403$7 = *(struct $6CANVAH**)((TMP$402$7 << (2 & 31)) + *(int32*)&CANVAPTR$);
							#line 170 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							void* vr$98 = fb_NullPtrChk( (void*)TMP$403$7, 170, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
							#line 170 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							if( vr$98 == 0 ) goto label$426;
							#line 170 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							goto *vr$98;
							#line 170 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							label$426:;
							#line 170 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							*(boolean*)((uint8*)TMP$403$7 + 92) = (boolean)0;
							// 						Continue For
							#line 171 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							goto label$329;
							// 					End If
						}
						#line 172 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$339:;
						#line 172 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$338:;
						// 					CanvaPTR(a)->x = WindowPTR(i)->x + CanvaPTR(a)->x2 + 4
						#line 173 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$406$6 = I$2;
						#line 173 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$102 = fb_ArrayBoundChk( TMP$406$6, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 173, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 173 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$102 == 0 ) goto label$427;
						#line 173 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$102;
						#line 173 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$427:;
						#line 173 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$407$6 = *(struct $9CPCWINDOW**)((TMP$406$6 << (2 & 31)) + *(int32*)&WINDOWPTR$);
						#line 173 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$105 = fb_NullPtrChk( (void*)TMP$407$6, 173, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 173 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$105 == 0 ) goto label$428;
						#line 173 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$105;
						#line 173 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$428:;
						#line 173 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$408$6 = A$4;
						#line 173 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$109 = fb_ArrayBoundChk( TMP$408$6, *(int32*)((uint8*)&CANVAPTR$ + 24), *(int32*)((uint8*)&CANVAPTR$ + 28), 173, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 173 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$109 == 0 ) goto label$429;
						#line 173 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$109;
						#line 173 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$429:;
						#line 173 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$409$6 = *(struct $6CANVAH**)((TMP$408$6 << (2 & 31)) + *(int32*)&CANVAPTR$);
						#line 173 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$112 = fb_NullPtrChk( (void*)TMP$409$6, 173, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 173 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$112 == 0 ) goto label$430;
						#line 173 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$112;
						#line 173 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$430:;
						#line 173 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$404$6 = A$4;
						#line 173 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$118 = fb_ArrayBoundChk( TMP$404$6, *(int32*)((uint8*)&CANVAPTR$ + 24), *(int32*)((uint8*)&CANVAPTR$ + 28), 173, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 173 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$118 == 0 ) goto label$431;
						#line 173 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$118;
						#line 173 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$431:;
						#line 173 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$405$6 = *(struct $6CANVAH**)((TMP$404$6 << (2 & 31)) + *(int32*)&CANVAPTR$);
						#line 173 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$121 = fb_NullPtrChk( (void*)TMP$405$6, 173, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 173 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$121 == 0 ) goto label$432;
						#line 173 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$121;
						#line 173 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$432:;
						#line 173 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						*(int32*)((uint8*)TMP$405$6 + 24) = (*(int32*)((uint8*)TMP$407$6 + 24) + *(int32*)((uint8*)TMP$409$6 + 68)) + 4;
						// 					CanvaPTR(a)->y = WindowPTR(i)->y + CanvaPTR(a)->y2 + TBH [Macro Expansion: 25  ]
						#line 174 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$412$6 = I$2;
						#line 174 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$125 = fb_ArrayBoundChk( TMP$412$6, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 174, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 174 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$125 == 0 ) goto label$433;
						#line 174 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$125;
						#line 174 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$433:;
						#line 174 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$413$6 = *(struct $9CPCWINDOW**)((TMP$412$6 << (2 & 31)) + *(int32*)&WINDOWPTR$);
						#line 174 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$128 = fb_NullPtrChk( (void*)TMP$413$6, 174, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 174 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$128 == 0 ) goto label$434;
						#line 174 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$128;
						#line 174 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$434:;
						#line 174 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$414$6 = A$4;
						#line 174 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$132 = fb_ArrayBoundChk( TMP$414$6, *(int32*)((uint8*)&CANVAPTR$ + 24), *(int32*)((uint8*)&CANVAPTR$ + 28), 174, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 174 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$132 == 0 ) goto label$435;
						#line 174 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$132;
						#line 174 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$435:;
						#line 174 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$415$6 = *(struct $6CANVAH**)((TMP$414$6 << (2 & 31)) + *(int32*)&CANVAPTR$);
						#line 174 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$135 = fb_NullPtrChk( (void*)TMP$415$6, 174, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 174 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$135 == 0 ) goto label$436;
						#line 174 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$135;
						#line 174 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$436:;
						#line 174 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$410$6 = A$4;
						#line 174 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$141 = fb_ArrayBoundChk( TMP$410$6, *(int32*)((uint8*)&CANVAPTR$ + 24), *(int32*)((uint8*)&CANVAPTR$ + 28), 174, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 174 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$141 == 0 ) goto label$437;
						#line 174 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$141;
						#line 174 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$437:;
						#line 174 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$411$6 = *(struct $6CANVAH**)((TMP$410$6 << (2 & 31)) + *(int32*)&CANVAPTR$);
						#line 174 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$144 = fb_NullPtrChk( (void*)TMP$411$6, 174, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 174 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$144 == 0 ) goto label$438;
						#line 174 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$144;
						#line 174 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$438:;
						#line 174 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						*(int32*)((uint8*)TMP$411$6 + 28) = (*(int32*)((uint8*)TMP$413$6 + 28) + *(int32*)((uint8*)TMP$415$6 + 72)) + 25;
						// 					CanvaPTR(a)->IsVisible = True
						#line 175 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$416$6 = A$4;
						#line 175 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$148 = fb_ArrayBoundChk( TMP$416$6, *(int32*)((uint8*)&CANVAPTR$ + 24), *(int32*)((uint8*)&CANVAPTR$ + 28), 175, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 175 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$148 == 0 ) goto label$439;
						#line 175 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$148;
						#line 175 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$439:;
						#line 175 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$417$6 = *(struct $6CANVAH**)((TMP$416$6 << (2 & 31)) + *(int32*)&CANVAPTR$);
						#line 175 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$151 = fb_NullPtrChk( (void*)TMP$417$6, 175, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 175 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$151 == 0 ) goto label$440;
						#line 175 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$151;
						#line 175 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$440:;
						#line 175 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						*(boolean*)((uint8*)TMP$417$6 + 92) = (boolean)1;
						// 					CanvaPTR(a)->redraw()
						#line 176 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$418$6 = A$4;
						#line 176 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$155 = fb_ArrayBoundChk( TMP$418$6, *(int32*)((uint8*)&CANVAPTR$ + 24), *(int32*)((uint8*)&CANVAPTR$ + 28), 176, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 176 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$155 == 0 ) goto label$441;
						#line 176 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$155;
						#line 176 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$441:;
						#line 176 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						_ZN6CANVAH6REDRAWEv( *(struct $6CANVAH**)((TMP$418$6 << (2 & 31)) + *(int32*)&CANVAPTR$) );
						// 				End If
					}
					#line 177 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					label$335:;
					#line 177 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					label$334:;
					// 		Next
				}
				#line 178 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				label$329:;
				#line 178 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				A$4 = A$4 + 1;
				#line 178 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				label$328:;
				#line 178 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				if( A$4 <= TMP$382$4 ) goto label$331;
				#line 178 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				label$330:;
			}
			// For a As Integer = 1 To UBound(ButtonPTR)
			{
				#line 180 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				int32 A$4;
				#line 180 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				A$4 = 1;
				#line 180 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				int32 TMP$420$4;
				#line 180 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				int32 vr$159 = fb_ArrayUBound( (struct $7FBARRAYIKvE*)&BUTTONPTR$, 1 );
				#line 180 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				TMP$420$4 = vr$159;
				#line 180 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				goto label$340;
				#line 180 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				label$343:;
				{
					#line 180 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					int32 TMP$421$5;
					#line 180 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					int32 TMP$422$5;
					#line 180 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					struct $7BUTTONH* TMP$423$5;
					#line 180 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					int32 TMP$424$5;
					#line 180 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					struct $9CPCWINDOW* TMP$425$5;
					// 			If ButtonPTR(a) = 0 Then Continue For
					#line 181 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					TMP$421$5 = A$4;
					#line 181 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					void* vr$162 = fb_ArrayBoundChk( TMP$421$5, *(int32*)((uint8*)&BUTTONPTR$ + 24), *(int32*)((uint8*)&BUTTONPTR$ + 28), 181, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
					#line 181 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					if( vr$162 == 0 ) goto label$442;
					#line 181 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					goto *vr$162;
					#line 181 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					label$442:;
					#line 181 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					if( *(struct $7BUTTONH**)((TMP$421$5 << (2 & 31)) + *(int32*)&BUTTONPTR$) != (struct $7BUTTONH*)0u ) goto label$345;
					{
						#line 181 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto label$341;
						#line 181 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$345:;
					}
					// 				If ButtonPTR(a)->pid = WindowPTR(i)->id Then	'if window has buttons Then
					#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					TMP$422$5 = A$4;
					#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					void* vr$167 = fb_ArrayBoundChk( TMP$422$5, *(int32*)((uint8*)&BUTTONPTR$ + 24), *(int32*)((uint8*)&BUTTONPTR$ + 28), 182, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
					#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					if( vr$167 == 0 ) goto label$443;
					#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					goto *vr$167;
					#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					label$443:;
					#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					TMP$423$5 = *(struct $7BUTTONH**)((TMP$422$5 << (2 & 31)) + *(int32*)&BUTTONPTR$);
					#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					void* vr$170 = fb_NullPtrChk( (void*)TMP$423$5, 182, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
					#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					if( vr$170 == 0 ) goto label$444;
					#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					goto *vr$170;
					#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					label$444:;
					#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					TMP$424$5 = I$2;
					#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					void* vr$174 = fb_ArrayBoundChk( TMP$424$5, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 182, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
					#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					if( vr$174 == 0 ) goto label$445;
					#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					goto *vr$174;
					#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					label$445:;
					#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					TMP$425$5 = *(struct $9CPCWINDOW**)((TMP$424$5 << (2 & 31)) + *(int32*)&WINDOWPTR$);
					#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					void* vr$177 = fb_NullPtrChk( (void*)TMP$425$5, 182, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
					#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					if( vr$177 == 0 ) goto label$446;
					#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					goto *vr$177;
					#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					label$446:;
					#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					if( *(int32*)((uint8*)TMP$423$5 + 20) != *(int32*)((uint8*)TMP$425$5 + 16) ) goto label$347;
					{
						#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$426$6;
						#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $7BUTTONH* TMP$427$6;
						#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$428$6;
						#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $7BUTTONH* TMP$429$6;
						#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$430$6;
						#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $9CPCWINDOW* TMP$431$6;
						#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$434$6;
						#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $7BUTTONH* TMP$435$6;
						#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$436$6;
						#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $7BUTTONH* TMP$437$6;
						#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$438$6;
						#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $9CPCWINDOW* TMP$439$6;
						#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$442$6;
						#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $7BUTTONH* TMP$443$6;
						#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$444$6;
						#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $9CPCWINDOW* TMP$445$6;
						#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$446$6;
						#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $7BUTTONH* TMP$447$6;
						#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$448$6;
						#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $7BUTTONH* TMP$449$6;
						#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$450$6;
						#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $9CPCWINDOW* TMP$451$6;
						#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$452$6;
						#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $7BUTTONH* TMP$453$6;
						#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$454$6;
						#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $7BUTTONH* TMP$455$6;
						#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$456$6;
						#line 182 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $7BUTTONH* TMP$457$6;
						// 					'if window width is smaller than buttons position hide them
						// 					If (ButtonPTR(a)->x2 + ButtonPTR(a)->sx + 8) >= WindowPTR(i)->sx Then
						#line 184 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$426$6 = A$4;
						#line 184 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$181 = fb_ArrayBoundChk( TMP$426$6, *(int32*)((uint8*)&BUTTONPTR$ + 24), *(int32*)((uint8*)&BUTTONPTR$ + 28), 184, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 184 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$181 == 0 ) goto label$447;
						#line 184 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$181;
						#line 184 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$447:;
						#line 184 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$427$6 = *(struct $7BUTTONH**)((TMP$426$6 << (2 & 31)) + *(int32*)&BUTTONPTR$);
						#line 184 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$184 = fb_NullPtrChk( (void*)TMP$427$6, 184, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 184 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$184 == 0 ) goto label$448;
						#line 184 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$184;
						#line 184 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$448:;
						#line 184 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$428$6 = A$4;
						#line 184 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$188 = fb_ArrayBoundChk( TMP$428$6, *(int32*)((uint8*)&BUTTONPTR$ + 24), *(int32*)((uint8*)&BUTTONPTR$ + 28), 184, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 184 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$188 == 0 ) goto label$449;
						#line 184 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$188;
						#line 184 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$449:;
						#line 184 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$429$6 = *(struct $7BUTTONH**)((TMP$428$6 << (2 & 31)) + *(int32*)&BUTTONPTR$);
						#line 184 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$191 = fb_NullPtrChk( (void*)TMP$429$6, 184, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 184 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$191 == 0 ) goto label$450;
						#line 184 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$191;
						#line 184 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$450:;
						#line 184 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$430$6 = I$2;
						#line 184 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$197 = fb_ArrayBoundChk( TMP$430$6, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 184, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 184 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$197 == 0 ) goto label$451;
						#line 184 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$197;
						#line 184 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$451:;
						#line 184 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$431$6 = *(struct $9CPCWINDOW**)((TMP$430$6 << (2 & 31)) + *(int32*)&WINDOWPTR$);
						#line 184 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$200 = fb_NullPtrChk( (void*)TMP$431$6, 184, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 184 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$200 == 0 ) goto label$452;
						#line 184 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$200;
						#line 184 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$452:;
						#line 184 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( ((*(int32*)((uint8*)TMP$427$6 + 68) + *(int32*)((uint8*)TMP$429$6 + 32)) + 8) < *(int32*)((uint8*)TMP$431$6 + 32) ) goto label$349;
						{
							#line 184 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							int32 TMP$432$7;
							#line 184 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							struct $7BUTTONH* TMP$433$7;
							// 						ButtonPTR(a)->IsVisible = False
							#line 185 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							TMP$432$7 = A$4;
							#line 185 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							void* vr$204 = fb_ArrayBoundChk( TMP$432$7, *(int32*)((uint8*)&BUTTONPTR$ + 24), *(int32*)((uint8*)&BUTTONPTR$ + 28), 185, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
							#line 185 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							if( vr$204 == 0 ) goto label$453;
							#line 185 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							goto *vr$204;
							#line 185 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							label$453:;
							#line 185 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							TMP$433$7 = *(struct $7BUTTONH**)((TMP$432$7 << (2 & 31)) + *(int32*)&BUTTONPTR$);
							#line 185 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							void* vr$207 = fb_NullPtrChk( (void*)TMP$433$7, 185, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
							#line 185 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							if( vr$207 == 0 ) goto label$454;
							#line 185 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							goto *vr$207;
							#line 185 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							label$454:;
							#line 185 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							*(boolean*)((uint8*)TMP$433$7 + 92) = (boolean)0;
							// 						Continue For
							#line 186 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							goto label$341;
							// 					End If
						}
						#line 187 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$349:;
						#line 187 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$348:;
						// 					'if window height is smaller than buttons position hide them
						// 					If (ButtonPTR(a)->y2 + ButtonPTR(a)->sy + TBH  [Macro Expansion: 25  ]  + 4) >= WindowPTR(i)->sy Then
						#line 189 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$434$6 = A$4;
						#line 189 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$211 = fb_ArrayBoundChk( TMP$434$6, *(int32*)((uint8*)&BUTTONPTR$ + 24), *(int32*)((uint8*)&BUTTONPTR$ + 28), 189, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 189 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$211 == 0 ) goto label$455;
						#line 189 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$211;
						#line 189 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$455:;
						#line 189 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$435$6 = *(struct $7BUTTONH**)((TMP$434$6 << (2 & 31)) + *(int32*)&BUTTONPTR$);
						#line 189 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$214 = fb_NullPtrChk( (void*)TMP$435$6, 189, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 189 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$214 == 0 ) goto label$456;
						#line 189 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$214;
						#line 189 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$456:;
						#line 189 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$436$6 = A$4;
						#line 189 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$218 = fb_ArrayBoundChk( TMP$436$6, *(int32*)((uint8*)&BUTTONPTR$ + 24), *(int32*)((uint8*)&BUTTONPTR$ + 28), 189, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 189 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$218 == 0 ) goto label$457;
						#line 189 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$218;
						#line 189 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$457:;
						#line 189 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$437$6 = *(struct $7BUTTONH**)((TMP$436$6 << (2 & 31)) + *(int32*)&BUTTONPTR$);
						#line 189 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$221 = fb_NullPtrChk( (void*)TMP$437$6, 189, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 189 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$221 == 0 ) goto label$458;
						#line 189 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$221;
						#line 189 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$458:;
						#line 189 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$438$6 = I$2;
						#line 189 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$227 = fb_ArrayBoundChk( TMP$438$6, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 189, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 189 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$227 == 0 ) goto label$459;
						#line 189 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$227;
						#line 189 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$459:;
						#line 189 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$439$6 = *(struct $9CPCWINDOW**)((TMP$438$6 << (2 & 31)) + *(int32*)&WINDOWPTR$);
						#line 189 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$230 = fb_NullPtrChk( (void*)TMP$439$6, 189, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 189 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$230 == 0 ) goto label$460;
						#line 189 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$230;
						#line 189 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$460:;
						#line 189 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( ((*(int32*)((uint8*)TMP$435$6 + 72) + *(int32*)((uint8*)TMP$437$6 + 36)) + 29) < *(int32*)((uint8*)TMP$439$6 + 36) ) goto label$351;
						{
							#line 189 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							int32 TMP$440$7;
							#line 189 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							struct $7BUTTONH* TMP$441$7;
							// 						ButtonPTR(a)->IsVisible = False
							#line 190 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							TMP$440$7 = A$4;
							#line 190 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							void* vr$234 = fb_ArrayBoundChk( TMP$440$7, *(int32*)((uint8*)&BUTTONPTR$ + 24), *(int32*)((uint8*)&BUTTONPTR$ + 28), 190, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
							#line 190 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							if( vr$234 == 0 ) goto label$461;
							#line 190 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							goto *vr$234;
							#line 190 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							label$461:;
							#line 190 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							TMP$441$7 = *(struct $7BUTTONH**)((TMP$440$7 << (2 & 31)) + *(int32*)&BUTTONPTR$);
							#line 190 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							void* vr$237 = fb_NullPtrChk( (void*)TMP$441$7, 190, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
							#line 190 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							if( vr$237 == 0 ) goto label$462;
							#line 190 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							goto *vr$237;
							#line 190 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							label$462:;
							#line 190 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							*(boolean*)((uint8*)TMP$441$7 + 92) = (boolean)0;
							// 						Continue For
							#line 191 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							goto label$341;
							// 					End If
						}
						#line 192 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$351:;
						#line 192 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$350:;
						// 					ButtonPTR(a)->x = WindowPTR(i)->x + ButtonPTR(a)->x2 + 4
						#line 193 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$444$6 = I$2;
						#line 193 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$241 = fb_ArrayBoundChk( TMP$444$6, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 193, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 193 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$241 == 0 ) goto label$463;
						#line 193 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$241;
						#line 193 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$463:;
						#line 193 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$445$6 = *(struct $9CPCWINDOW**)((TMP$444$6 << (2 & 31)) + *(int32*)&WINDOWPTR$);
						#line 193 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$244 = fb_NullPtrChk( (void*)TMP$445$6, 193, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 193 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$244 == 0 ) goto label$464;
						#line 193 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$244;
						#line 193 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$464:;
						#line 193 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$446$6 = A$4;
						#line 193 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$248 = fb_ArrayBoundChk( TMP$446$6, *(int32*)((uint8*)&BUTTONPTR$ + 24), *(int32*)((uint8*)&BUTTONPTR$ + 28), 193, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 193 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$248 == 0 ) goto label$465;
						#line 193 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$248;
						#line 193 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$465:;
						#line 193 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$447$6 = *(struct $7BUTTONH**)((TMP$446$6 << (2 & 31)) + *(int32*)&BUTTONPTR$);
						#line 193 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$251 = fb_NullPtrChk( (void*)TMP$447$6, 193, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 193 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$251 == 0 ) goto label$466;
						#line 193 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$251;
						#line 193 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$466:;
						#line 193 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$442$6 = A$4;
						#line 193 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$257 = fb_ArrayBoundChk( TMP$442$6, *(int32*)((uint8*)&BUTTONPTR$ + 24), *(int32*)((uint8*)&BUTTONPTR$ + 28), 193, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 193 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$257 == 0 ) goto label$467;
						#line 193 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$257;
						#line 193 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$467:;
						#line 193 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$443$6 = *(struct $7BUTTONH**)((TMP$442$6 << (2 & 31)) + *(int32*)&BUTTONPTR$);
						#line 193 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$260 = fb_NullPtrChk( (void*)TMP$443$6, 193, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 193 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$260 == 0 ) goto label$468;
						#line 193 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$260;
						#line 193 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$468:;
						#line 193 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						*(int32*)((uint8*)TMP$443$6 + 24) = (*(int32*)((uint8*)TMP$445$6 + 24) + *(int32*)((uint8*)TMP$447$6 + 68)) + 4;
						// 					ButtonPTR(a)->y = WindowPTR(i)->y + ButtonPTR(a)->y2 + TBH [Macro Expansion: 25  ]
						#line 194 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$450$6 = I$2;
						#line 194 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$264 = fb_ArrayBoundChk( TMP$450$6, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 194, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 194 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$264 == 0 ) goto label$469;
						#line 194 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$264;
						#line 194 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$469:;
						#line 194 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$451$6 = *(struct $9CPCWINDOW**)((TMP$450$6 << (2 & 31)) + *(int32*)&WINDOWPTR$);
						#line 194 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$267 = fb_NullPtrChk( (void*)TMP$451$6, 194, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 194 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$267 == 0 ) goto label$470;
						#line 194 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$267;
						#line 194 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$470:;
						#line 194 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$452$6 = A$4;
						#line 194 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$271 = fb_ArrayBoundChk( TMP$452$6, *(int32*)((uint8*)&BUTTONPTR$ + 24), *(int32*)((uint8*)&BUTTONPTR$ + 28), 194, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 194 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$271 == 0 ) goto label$471;
						#line 194 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$271;
						#line 194 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$471:;
						#line 194 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$453$6 = *(struct $7BUTTONH**)((TMP$452$6 << (2 & 31)) + *(int32*)&BUTTONPTR$);
						#line 194 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$274 = fb_NullPtrChk( (void*)TMP$453$6, 194, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 194 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$274 == 0 ) goto label$472;
						#line 194 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$274;
						#line 194 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$472:;
						#line 194 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$448$6 = A$4;
						#line 194 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$280 = fb_ArrayBoundChk( TMP$448$6, *(int32*)((uint8*)&BUTTONPTR$ + 24), *(int32*)((uint8*)&BUTTONPTR$ + 28), 194, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 194 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$280 == 0 ) goto label$473;
						#line 194 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$280;
						#line 194 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$473:;
						#line 194 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$449$6 = *(struct $7BUTTONH**)((TMP$448$6 << (2 & 31)) + *(int32*)&BUTTONPTR$);
						#line 194 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$283 = fb_NullPtrChk( (void*)TMP$449$6, 194, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 194 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$283 == 0 ) goto label$474;
						#line 194 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$283;
						#line 194 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$474:;
						#line 194 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						*(int32*)((uint8*)TMP$449$6 + 28) = (*(int32*)((uint8*)TMP$451$6 + 28) + *(int32*)((uint8*)TMP$453$6 + 72)) + 25;
						// 					ButtonPTR(a)->IsVisible = True
						#line 195 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$454$6 = A$4;
						#line 195 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$287 = fb_ArrayBoundChk( TMP$454$6, *(int32*)((uint8*)&BUTTONPTR$ + 24), *(int32*)((uint8*)&BUTTONPTR$ + 28), 195, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 195 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$287 == 0 ) goto label$475;
						#line 195 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$287;
						#line 195 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$475:;
						#line 195 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$455$6 = *(struct $7BUTTONH**)((TMP$454$6 << (2 & 31)) + *(int32*)&BUTTONPTR$);
						#line 195 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$290 = fb_NullPtrChk( (void*)TMP$455$6, 195, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 195 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$290 == 0 ) goto label$476;
						#line 195 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$290;
						#line 195 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$476:;
						#line 195 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						*(boolean*)((uint8*)TMP$455$6 + 92) = (boolean)1;
						// 					ButtonPTR(a)->redraw()
						#line 196 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$456$6 = A$4;
						#line 196 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$294 = fb_ArrayBoundChk( TMP$456$6, *(int32*)((uint8*)&BUTTONPTR$ + 24), *(int32*)((uint8*)&BUTTONPTR$ + 28), 196, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 196 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$294 == 0 ) goto label$477;
						#line 196 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$294;
						#line 196 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$477:;
						#line 196 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						_ZN7BUTTONH6REDRAWEv( *(struct $7BUTTONH**)((TMP$456$6 << (2 & 31)) + *(int32*)&BUTTONPTR$) );
						// 				End If
					}
					#line 197 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					label$347:;
					#line 197 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					label$346:;
					// 		Next
				}
				#line 199 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				label$341:;
				#line 199 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				A$4 = A$4 + 1;
				#line 199 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				label$340:;
				#line 199 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				if( A$4 <= TMP$420$4 ) goto label$343;
				#line 199 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				label$342:;
			}
			// For b As Integer = 1 To UBound(TextboxPTR)
			{
				#line 201 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				int32 B$4;
				#line 201 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				B$4 = 1;
				#line 201 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				int32 TMP$458$4;
				#line 201 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				int32 vr$298 = fb_ArrayUBound( (struct $7FBARRAYIKvE*)&TEXTBOXPTR$, 1 );
				#line 201 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				TMP$458$4 = vr$298;
				#line 201 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				goto label$352;
				#line 201 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				label$355:;
				{
					#line 201 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					int32 TMP$459$5;
					#line 201 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					int32 TMP$460$5;
					#line 201 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					struct $8TEXTBOXH* TMP$461$5;
					#line 201 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					int32 TMP$462$5;
					#line 201 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					struct $9CPCWINDOW* TMP$463$5;
					// 			If TextboxPTR(b) = 0 Then Continue For
					#line 202 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					TMP$459$5 = B$4;
					#line 202 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					void* vr$301 = fb_ArrayBoundChk( TMP$459$5, *(int32*)((uint8*)&TEXTBOXPTR$ + 24), *(int32*)((uint8*)&TEXTBOXPTR$ + 28), 202, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
					#line 202 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					if( vr$301 == 0 ) goto label$478;
					#line 202 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					goto *vr$301;
					#line 202 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					label$478:;
					#line 202 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					if( *(struct $8TEXTBOXH**)((TMP$459$5 << (2 & 31)) + *(int32*)&TEXTBOXPTR$) != (struct $8TEXTBOXH*)0u ) goto label$357;
					{
						#line 202 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto label$353;
						#line 202 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$357:;
					}
					// 				If TextboxPTR(b)->pid = WindowPTR(i)->id Then	'if window has buttons Then
					#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					TMP$460$5 = B$4;
					#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					void* vr$306 = fb_ArrayBoundChk( TMP$460$5, *(int32*)((uint8*)&TEXTBOXPTR$ + 24), *(int32*)((uint8*)&TEXTBOXPTR$ + 28), 203, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
					#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					if( vr$306 == 0 ) goto label$479;
					#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					goto *vr$306;
					#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					label$479:;
					#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					TMP$461$5 = *(struct $8TEXTBOXH**)((TMP$460$5 << (2 & 31)) + *(int32*)&TEXTBOXPTR$);
					#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					void* vr$309 = fb_NullPtrChk( (void*)TMP$461$5, 203, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
					#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					if( vr$309 == 0 ) goto label$480;
					#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					goto *vr$309;
					#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					label$480:;
					#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					TMP$462$5 = I$2;
					#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					void* vr$313 = fb_ArrayBoundChk( TMP$462$5, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 203, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
					#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					if( vr$313 == 0 ) goto label$481;
					#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					goto *vr$313;
					#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					label$481:;
					#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					TMP$463$5 = *(struct $9CPCWINDOW**)((TMP$462$5 << (2 & 31)) + *(int32*)&WINDOWPTR$);
					#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					void* vr$316 = fb_NullPtrChk( (void*)TMP$463$5, 203, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
					#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					if( vr$316 == 0 ) goto label$482;
					#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					goto *vr$316;
					#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					label$482:;
					#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					if( *(int32*)((uint8*)TMP$461$5 + 20) != *(int32*)((uint8*)TMP$463$5 + 16) ) goto label$359;
					{
						#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$464$6;
						#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $8TEXTBOXH* TMP$465$6;
						#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$466$6;
						#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $8TEXTBOXH* TMP$467$6;
						#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$468$6;
						#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $9CPCWINDOW* TMP$469$6;
						#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$472$6;
						#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $8TEXTBOXH* TMP$473$6;
						#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$474$6;
						#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $8TEXTBOXH* TMP$475$6;
						#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$476$6;
						#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $9CPCWINDOW* TMP$477$6;
						#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$480$6;
						#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $8TEXTBOXH* TMP$481$6;
						#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$482$6;
						#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $9CPCWINDOW* TMP$483$6;
						#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$484$6;
						#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $8TEXTBOXH* TMP$485$6;
						#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$486$6;
						#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $8TEXTBOXH* TMP$487$6;
						#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$488$6;
						#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $9CPCWINDOW* TMP$489$6;
						#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$490$6;
						#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $8TEXTBOXH* TMP$491$6;
						#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$492$6;
						#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $8TEXTBOXH* TMP$493$6;
						#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$494$6;
						#line 203 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $8TEXTBOXH* TMP$495$6;
						// 					'if window width is smaller than buttons position hide them
						// 					If (TextboxPTR(b)->x2 + TextboxPTR(b)->sx + 8) >= WindowPTR(i)->sx Then
						#line 205 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$464$6 = B$4;
						#line 205 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$320 = fb_ArrayBoundChk( TMP$464$6, *(int32*)((uint8*)&TEXTBOXPTR$ + 24), *(int32*)((uint8*)&TEXTBOXPTR$ + 28), 205, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 205 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$320 == 0 ) goto label$483;
						#line 205 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$320;
						#line 205 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$483:;
						#line 205 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$465$6 = *(struct $8TEXTBOXH**)((TMP$464$6 << (2 & 31)) + *(int32*)&TEXTBOXPTR$);
						#line 205 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$323 = fb_NullPtrChk( (void*)TMP$465$6, 205, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 205 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$323 == 0 ) goto label$484;
						#line 205 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$323;
						#line 205 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$484:;
						#line 205 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$466$6 = B$4;
						#line 205 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$327 = fb_ArrayBoundChk( TMP$466$6, *(int32*)((uint8*)&TEXTBOXPTR$ + 24), *(int32*)((uint8*)&TEXTBOXPTR$ + 28), 205, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 205 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$327 == 0 ) goto label$485;
						#line 205 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$327;
						#line 205 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$485:;
						#line 205 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$467$6 = *(struct $8TEXTBOXH**)((TMP$466$6 << (2 & 31)) + *(int32*)&TEXTBOXPTR$);
						#line 205 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$330 = fb_NullPtrChk( (void*)TMP$467$6, 205, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 205 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$330 == 0 ) goto label$486;
						#line 205 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$330;
						#line 205 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$486:;
						#line 205 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$468$6 = I$2;
						#line 205 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$336 = fb_ArrayBoundChk( TMP$468$6, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 205, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 205 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$336 == 0 ) goto label$487;
						#line 205 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$336;
						#line 205 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$487:;
						#line 205 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$469$6 = *(struct $9CPCWINDOW**)((TMP$468$6 << (2 & 31)) + *(int32*)&WINDOWPTR$);
						#line 205 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$339 = fb_NullPtrChk( (void*)TMP$469$6, 205, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 205 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$339 == 0 ) goto label$488;
						#line 205 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$339;
						#line 205 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$488:;
						#line 205 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( ((*(int32*)((uint8*)TMP$465$6 + 68) + *(int32*)((uint8*)TMP$467$6 + 32)) + 8) < *(int32*)((uint8*)TMP$469$6 + 32) ) goto label$361;
						{
							#line 205 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							int32 TMP$470$7;
							#line 205 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							struct $8TEXTBOXH* TMP$471$7;
							// 						TextboxPTR(b)->IsVisible = False
							#line 206 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							TMP$470$7 = B$4;
							#line 206 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							void* vr$343 = fb_ArrayBoundChk( TMP$470$7, *(int32*)((uint8*)&TEXTBOXPTR$ + 24), *(int32*)((uint8*)&TEXTBOXPTR$ + 28), 206, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
							#line 206 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							if( vr$343 == 0 ) goto label$489;
							#line 206 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							goto *vr$343;
							#line 206 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							label$489:;
							#line 206 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							TMP$471$7 = *(struct $8TEXTBOXH**)((TMP$470$7 << (2 & 31)) + *(int32*)&TEXTBOXPTR$);
							#line 206 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							void* vr$346 = fb_NullPtrChk( (void*)TMP$471$7, 206, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
							#line 206 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							if( vr$346 == 0 ) goto label$490;
							#line 206 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							goto *vr$346;
							#line 206 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							label$490:;
							#line 206 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							*(boolean*)((uint8*)TMP$471$7 + 92) = (boolean)0;
							// 						Continue For
							#line 207 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							goto label$353;
							// 					End If
						}
						#line 208 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$361:;
						#line 208 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$360:;
						// 					'if window height is smaller than buttons position hide them
						// 					If (TextboxPTR(b)->y2 + TextboxPTR(b)->sy + TBH  [Macro Expansion: 25  ]  + 4) >= WindowPTR(i)->sy Then
						#line 210 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$472$6 = B$4;
						#line 210 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$350 = fb_ArrayBoundChk( TMP$472$6, *(int32*)((uint8*)&TEXTBOXPTR$ + 24), *(int32*)((uint8*)&TEXTBOXPTR$ + 28), 210, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 210 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$350 == 0 ) goto label$491;
						#line 210 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$350;
						#line 210 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$491:;
						#line 210 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$473$6 = *(struct $8TEXTBOXH**)((TMP$472$6 << (2 & 31)) + *(int32*)&TEXTBOXPTR$);
						#line 210 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$353 = fb_NullPtrChk( (void*)TMP$473$6, 210, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 210 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$353 == 0 ) goto label$492;
						#line 210 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$353;
						#line 210 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$492:;
						#line 210 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$474$6 = B$4;
						#line 210 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$357 = fb_ArrayBoundChk( TMP$474$6, *(int32*)((uint8*)&TEXTBOXPTR$ + 24), *(int32*)((uint8*)&TEXTBOXPTR$ + 28), 210, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 210 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$357 == 0 ) goto label$493;
						#line 210 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$357;
						#line 210 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$493:;
						#line 210 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$475$6 = *(struct $8TEXTBOXH**)((TMP$474$6 << (2 & 31)) + *(int32*)&TEXTBOXPTR$);
						#line 210 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$360 = fb_NullPtrChk( (void*)TMP$475$6, 210, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 210 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$360 == 0 ) goto label$494;
						#line 210 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$360;
						#line 210 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$494:;
						#line 210 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$476$6 = I$2;
						#line 210 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$366 = fb_ArrayBoundChk( TMP$476$6, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 210, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 210 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$366 == 0 ) goto label$495;
						#line 210 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$366;
						#line 210 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$495:;
						#line 210 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$477$6 = *(struct $9CPCWINDOW**)((TMP$476$6 << (2 & 31)) + *(int32*)&WINDOWPTR$);
						#line 210 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$369 = fb_NullPtrChk( (void*)TMP$477$6, 210, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 210 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$369 == 0 ) goto label$496;
						#line 210 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$369;
						#line 210 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$496:;
						#line 210 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( ((*(int32*)((uint8*)TMP$473$6 + 72) + *(int32*)((uint8*)TMP$475$6 + 36)) + 29) < *(int32*)((uint8*)TMP$477$6 + 36) ) goto label$363;
						{
							#line 210 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							int32 TMP$478$7;
							#line 210 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							struct $8TEXTBOXH* TMP$479$7;
							// 						TextboxPTR(b)->IsVisible = False
							#line 211 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							TMP$478$7 = B$4;
							#line 211 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							void* vr$373 = fb_ArrayBoundChk( TMP$478$7, *(int32*)((uint8*)&TEXTBOXPTR$ + 24), *(int32*)((uint8*)&TEXTBOXPTR$ + 28), 211, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
							#line 211 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							if( vr$373 == 0 ) goto label$497;
							#line 211 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							goto *vr$373;
							#line 211 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							label$497:;
							#line 211 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							TMP$479$7 = *(struct $8TEXTBOXH**)((TMP$478$7 << (2 & 31)) + *(int32*)&TEXTBOXPTR$);
							#line 211 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							void* vr$376 = fb_NullPtrChk( (void*)TMP$479$7, 211, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
							#line 211 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							if( vr$376 == 0 ) goto label$498;
							#line 211 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							goto *vr$376;
							#line 211 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							label$498:;
							#line 211 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							*(boolean*)((uint8*)TMP$479$7 + 92) = (boolean)0;
							// 						Continue For
							#line 212 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							goto label$353;
							// 					End If
						}
						#line 213 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$363:;
						#line 213 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$362:;
						// 					TextboxPTR(b)->x = WindowPTR(i)->x + TextboxPTR(b)->x2 + 4
						#line 214 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$482$6 = I$2;
						#line 214 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$380 = fb_ArrayBoundChk( TMP$482$6, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 214, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 214 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$380 == 0 ) goto label$499;
						#line 214 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$380;
						#line 214 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$499:;
						#line 214 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$483$6 = *(struct $9CPCWINDOW**)((TMP$482$6 << (2 & 31)) + *(int32*)&WINDOWPTR$);
						#line 214 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$383 = fb_NullPtrChk( (void*)TMP$483$6, 214, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 214 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$383 == 0 ) goto label$500;
						#line 214 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$383;
						#line 214 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$500:;
						#line 214 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$484$6 = B$4;
						#line 214 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$387 = fb_ArrayBoundChk( TMP$484$6, *(int32*)((uint8*)&TEXTBOXPTR$ + 24), *(int32*)((uint8*)&TEXTBOXPTR$ + 28), 214, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 214 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$387 == 0 ) goto label$501;
						#line 214 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$387;
						#line 214 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$501:;
						#line 214 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$485$6 = *(struct $8TEXTBOXH**)((TMP$484$6 << (2 & 31)) + *(int32*)&TEXTBOXPTR$);
						#line 214 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$390 = fb_NullPtrChk( (void*)TMP$485$6, 214, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 214 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$390 == 0 ) goto label$502;
						#line 214 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$390;
						#line 214 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$502:;
						#line 214 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$480$6 = B$4;
						#line 214 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$396 = fb_ArrayBoundChk( TMP$480$6, *(int32*)((uint8*)&TEXTBOXPTR$ + 24), *(int32*)((uint8*)&TEXTBOXPTR$ + 28), 214, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 214 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$396 == 0 ) goto label$503;
						#line 214 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$396;
						#line 214 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$503:;
						#line 214 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$481$6 = *(struct $8TEXTBOXH**)((TMP$480$6 << (2 & 31)) + *(int32*)&TEXTBOXPTR$);
						#line 214 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$399 = fb_NullPtrChk( (void*)TMP$481$6, 214, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 214 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$399 == 0 ) goto label$504;
						#line 214 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$399;
						#line 214 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$504:;
						#line 214 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						*(int32*)((uint8*)TMP$481$6 + 24) = (*(int32*)((uint8*)TMP$483$6 + 24) + *(int32*)((uint8*)TMP$485$6 + 68)) + 4;
						// 					TextboxPTR(b)->y = WindowPTR(i)->y + TextboxPTR(b)->y2 + TBH [Macro Expansion: 25  ]
						#line 215 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$488$6 = I$2;
						#line 215 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$403 = fb_ArrayBoundChk( TMP$488$6, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 215, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 215 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$403 == 0 ) goto label$505;
						#line 215 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$403;
						#line 215 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$505:;
						#line 215 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$489$6 = *(struct $9CPCWINDOW**)((TMP$488$6 << (2 & 31)) + *(int32*)&WINDOWPTR$);
						#line 215 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$406 = fb_NullPtrChk( (void*)TMP$489$6, 215, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 215 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$406 == 0 ) goto label$506;
						#line 215 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$406;
						#line 215 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$506:;
						#line 215 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$490$6 = B$4;
						#line 215 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$410 = fb_ArrayBoundChk( TMP$490$6, *(int32*)((uint8*)&TEXTBOXPTR$ + 24), *(int32*)((uint8*)&TEXTBOXPTR$ + 28), 215, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 215 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$410 == 0 ) goto label$507;
						#line 215 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$410;
						#line 215 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$507:;
						#line 215 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$491$6 = *(struct $8TEXTBOXH**)((TMP$490$6 << (2 & 31)) + *(int32*)&TEXTBOXPTR$);
						#line 215 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$413 = fb_NullPtrChk( (void*)TMP$491$6, 215, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 215 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$413 == 0 ) goto label$508;
						#line 215 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$413;
						#line 215 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$508:;
						#line 215 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$486$6 = B$4;
						#line 215 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$419 = fb_ArrayBoundChk( TMP$486$6, *(int32*)((uint8*)&TEXTBOXPTR$ + 24), *(int32*)((uint8*)&TEXTBOXPTR$ + 28), 215, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 215 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$419 == 0 ) goto label$509;
						#line 215 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$419;
						#line 215 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$509:;
						#line 215 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$487$6 = *(struct $8TEXTBOXH**)((TMP$486$6 << (2 & 31)) + *(int32*)&TEXTBOXPTR$);
						#line 215 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$422 = fb_NullPtrChk( (void*)TMP$487$6, 215, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 215 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$422 == 0 ) goto label$510;
						#line 215 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$422;
						#line 215 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$510:;
						#line 215 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						*(int32*)((uint8*)TMP$487$6 + 28) = (*(int32*)((uint8*)TMP$489$6 + 28) + *(int32*)((uint8*)TMP$491$6 + 72)) + 25;
						// 					TextboxPTR(b)->IsVisible = True
						#line 216 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$492$6 = B$4;
						#line 216 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$426 = fb_ArrayBoundChk( TMP$492$6, *(int32*)((uint8*)&TEXTBOXPTR$ + 24), *(int32*)((uint8*)&TEXTBOXPTR$ + 28), 216, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 216 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$426 == 0 ) goto label$511;
						#line 216 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$426;
						#line 216 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$511:;
						#line 216 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$493$6 = *(struct $8TEXTBOXH**)((TMP$492$6 << (2 & 31)) + *(int32*)&TEXTBOXPTR$);
						#line 216 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$429 = fb_NullPtrChk( (void*)TMP$493$6, 216, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 216 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$429 == 0 ) goto label$512;
						#line 216 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$429;
						#line 216 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$512:;
						#line 216 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						*(boolean*)((uint8*)TMP$493$6 + 92) = (boolean)1;
						// 					TextboxPTR(b)->redraw()
						#line 217 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$494$6 = B$4;
						#line 217 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$433 = fb_ArrayBoundChk( TMP$494$6, *(int32*)((uint8*)&TEXTBOXPTR$ + 24), *(int32*)((uint8*)&TEXTBOXPTR$ + 28), 217, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 217 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$433 == 0 ) goto label$513;
						#line 217 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$433;
						#line 217 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$513:;
						#line 217 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						_ZN8TEXTBOXH6REDRAWEv( *(struct $8TEXTBOXH**)((TMP$494$6 << (2 & 31)) + *(int32*)&TEXTBOXPTR$) );
						// 				End If
					}
					#line 218 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					label$359:;
					#line 218 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					label$358:;
					// 		Next
				}
				#line 220 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				label$353:;
				#line 220 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				B$4 = B$4 + 1;
				#line 220 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				label$352:;
				#line 220 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				if( B$4 <= TMP$458$4 ) goto label$355;
				#line 220 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				label$354:;
			}
			// For c As Integer = 1 To UBound(TextblockPTR)
			{
				#line 222 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				int32 C$4;
				#line 222 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				C$4 = 1;
				#line 222 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				int32 TMP$496$4;
				#line 222 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				int32 vr$437 = fb_ArrayUBound( (struct $7FBARRAYIKvE*)&TEXTBLOCKPTR$, 1 );
				#line 222 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				TMP$496$4 = vr$437;
				#line 222 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				goto label$364;
				#line 222 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				label$367:;
				{
					#line 222 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					int32 TMP$497$5;
					#line 222 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					int32 TMP$498$5;
					#line 222 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					struct $10TEXTBLOCKH* TMP$499$5;
					#line 222 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					int32 TMP$500$5;
					#line 222 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					struct $9CPCWINDOW* TMP$501$5;
					// 			If TextblockPTR(c) = 0 Then Continue For
					#line 223 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					TMP$497$5 = C$4;
					#line 223 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					void* vr$440 = fb_ArrayBoundChk( TMP$497$5, *(int32*)((uint8*)&TEXTBLOCKPTR$ + 24), *(int32*)((uint8*)&TEXTBLOCKPTR$ + 28), 223, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
					#line 223 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					if( vr$440 == 0 ) goto label$514;
					#line 223 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					goto *vr$440;
					#line 223 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					label$514:;
					#line 223 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					if( *(struct $10TEXTBLOCKH**)((TMP$497$5 << (2 & 31)) + *(int32*)&TEXTBLOCKPTR$) != (struct $10TEXTBLOCKH*)0u ) goto label$369;
					{
						#line 223 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto label$365;
						#line 223 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$369:;
					}
					// 				If TextblockPTR(c)->pid = WindowPTR(i)->id Then	'if window has buttons Then
					#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					TMP$498$5 = C$4;
					#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					void* vr$445 = fb_ArrayBoundChk( TMP$498$5, *(int32*)((uint8*)&TEXTBLOCKPTR$ + 24), *(int32*)((uint8*)&TEXTBLOCKPTR$ + 28), 224, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
					#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					if( vr$445 == 0 ) goto label$515;
					#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					goto *vr$445;
					#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					label$515:;
					#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					TMP$499$5 = *(struct $10TEXTBLOCKH**)((TMP$498$5 << (2 & 31)) + *(int32*)&TEXTBLOCKPTR$);
					#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					void* vr$448 = fb_NullPtrChk( (void*)TMP$499$5, 224, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
					#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					if( vr$448 == 0 ) goto label$516;
					#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					goto *vr$448;
					#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					label$516:;
					#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					TMP$500$5 = I$2;
					#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					void* vr$452 = fb_ArrayBoundChk( TMP$500$5, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 224, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
					#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					if( vr$452 == 0 ) goto label$517;
					#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					goto *vr$452;
					#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					label$517:;
					#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					TMP$501$5 = *(struct $9CPCWINDOW**)((TMP$500$5 << (2 & 31)) + *(int32*)&WINDOWPTR$);
					#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					void* vr$455 = fb_NullPtrChk( (void*)TMP$501$5, 224, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
					#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					if( vr$455 == 0 ) goto label$518;
					#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					goto *vr$455;
					#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					label$518:;
					#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					if( *(int32*)((uint8*)TMP$499$5 + 20) != *(int32*)((uint8*)TMP$501$5 + 16) ) goto label$371;
					{
						#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$502$6;
						#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $10TEXTBLOCKH* TMP$503$6;
						#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$504$6;
						#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $10TEXTBLOCKH* TMP$505$6;
						#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$506$6;
						#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $9CPCWINDOW* TMP$507$6;
						#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$510$6;
						#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $10TEXTBLOCKH* TMP$511$6;
						#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$512$6;
						#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $10TEXTBLOCKH* TMP$513$6;
						#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$514$6;
						#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $9CPCWINDOW* TMP$515$6;
						#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$518$6;
						#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $10TEXTBLOCKH* TMP$519$6;
						#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$520$6;
						#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $9CPCWINDOW* TMP$521$6;
						#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$522$6;
						#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $10TEXTBLOCKH* TMP$523$6;
						#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$524$6;
						#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $10TEXTBLOCKH* TMP$525$6;
						#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$526$6;
						#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $9CPCWINDOW* TMP$527$6;
						#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$528$6;
						#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $10TEXTBLOCKH* TMP$529$6;
						#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$530$6;
						#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $10TEXTBLOCKH* TMP$531$6;
						#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$532$6;
						#line 224 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $10TEXTBLOCKH* TMP$533$6;
						// 					'if window width is smaller than buttons position hide them
						// 					If (TextblockPTR(c)->x2 + TextblockPTR(c)->sx + 8) >= WindowPTR(i)->sx Then
						#line 226 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$502$6 = C$4;
						#line 226 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$459 = fb_ArrayBoundChk( TMP$502$6, *(int32*)((uint8*)&TEXTBLOCKPTR$ + 24), *(int32*)((uint8*)&TEXTBLOCKPTR$ + 28), 226, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 226 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$459 == 0 ) goto label$519;
						#line 226 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$459;
						#line 226 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$519:;
						#line 226 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$503$6 = *(struct $10TEXTBLOCKH**)((TMP$502$6 << (2 & 31)) + *(int32*)&TEXTBLOCKPTR$);
						#line 226 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$462 = fb_NullPtrChk( (void*)TMP$503$6, 226, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 226 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$462 == 0 ) goto label$520;
						#line 226 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$462;
						#line 226 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$520:;
						#line 226 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$504$6 = C$4;
						#line 226 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$466 = fb_ArrayBoundChk( TMP$504$6, *(int32*)((uint8*)&TEXTBLOCKPTR$ + 24), *(int32*)((uint8*)&TEXTBLOCKPTR$ + 28), 226, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 226 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$466 == 0 ) goto label$521;
						#line 226 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$466;
						#line 226 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$521:;
						#line 226 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$505$6 = *(struct $10TEXTBLOCKH**)((TMP$504$6 << (2 & 31)) + *(int32*)&TEXTBLOCKPTR$);
						#line 226 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$469 = fb_NullPtrChk( (void*)TMP$505$6, 226, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 226 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$469 == 0 ) goto label$522;
						#line 226 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$469;
						#line 226 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$522:;
						#line 226 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$506$6 = I$2;
						#line 226 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$475 = fb_ArrayBoundChk( TMP$506$6, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 226, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 226 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$475 == 0 ) goto label$523;
						#line 226 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$475;
						#line 226 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$523:;
						#line 226 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$507$6 = *(struct $9CPCWINDOW**)((TMP$506$6 << (2 & 31)) + *(int32*)&WINDOWPTR$);
						#line 226 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$478 = fb_NullPtrChk( (void*)TMP$507$6, 226, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 226 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$478 == 0 ) goto label$524;
						#line 226 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$478;
						#line 226 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$524:;
						#line 226 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( ((*(int32*)((uint8*)TMP$503$6 + 68) + *(int32*)((uint8*)TMP$505$6 + 32)) + 8) < *(int32*)((uint8*)TMP$507$6 + 32) ) goto label$373;
						{
							#line 226 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							int32 TMP$508$7;
							#line 226 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							struct $10TEXTBLOCKH* TMP$509$7;
							// 						TextblockPTR(c)->IsVisible = False
							#line 227 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							TMP$508$7 = C$4;
							#line 227 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							void* vr$482 = fb_ArrayBoundChk( TMP$508$7, *(int32*)((uint8*)&TEXTBLOCKPTR$ + 24), *(int32*)((uint8*)&TEXTBLOCKPTR$ + 28), 227, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
							#line 227 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							if( vr$482 == 0 ) goto label$525;
							#line 227 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							goto *vr$482;
							#line 227 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							label$525:;
							#line 227 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							TMP$509$7 = *(struct $10TEXTBLOCKH**)((TMP$508$7 << (2 & 31)) + *(int32*)&TEXTBLOCKPTR$);
							#line 227 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							void* vr$485 = fb_NullPtrChk( (void*)TMP$509$7, 227, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
							#line 227 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							if( vr$485 == 0 ) goto label$526;
							#line 227 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							goto *vr$485;
							#line 227 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							label$526:;
							#line 227 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							*(boolean*)((uint8*)TMP$509$7 + 92) = (boolean)0;
							// 						Continue For
							#line 228 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							goto label$365;
							// 					End If
						}
						#line 229 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$373:;
						#line 229 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$372:;
						// 					'if window height is smaller than buttons position hide them
						// 					If (TextblockPTR(c)->y2 + TextblockPTR(c)->sy + TBH  [Macro Expansion: 25  ]  + 4) >= WindowPTR(i)->sy Then
						#line 231 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$510$6 = C$4;
						#line 231 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$489 = fb_ArrayBoundChk( TMP$510$6, *(int32*)((uint8*)&TEXTBLOCKPTR$ + 24), *(int32*)((uint8*)&TEXTBLOCKPTR$ + 28), 231, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 231 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$489 == 0 ) goto label$527;
						#line 231 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$489;
						#line 231 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$527:;
						#line 231 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$511$6 = *(struct $10TEXTBLOCKH**)((TMP$510$6 << (2 & 31)) + *(int32*)&TEXTBLOCKPTR$);
						#line 231 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$492 = fb_NullPtrChk( (void*)TMP$511$6, 231, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 231 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$492 == 0 ) goto label$528;
						#line 231 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$492;
						#line 231 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$528:;
						#line 231 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$512$6 = C$4;
						#line 231 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$496 = fb_ArrayBoundChk( TMP$512$6, *(int32*)((uint8*)&TEXTBLOCKPTR$ + 24), *(int32*)((uint8*)&TEXTBLOCKPTR$ + 28), 231, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 231 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$496 == 0 ) goto label$529;
						#line 231 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$496;
						#line 231 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$529:;
						#line 231 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$513$6 = *(struct $10TEXTBLOCKH**)((TMP$512$6 << (2 & 31)) + *(int32*)&TEXTBLOCKPTR$);
						#line 231 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$499 = fb_NullPtrChk( (void*)TMP$513$6, 231, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 231 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$499 == 0 ) goto label$530;
						#line 231 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$499;
						#line 231 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$530:;
						#line 231 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$514$6 = I$2;
						#line 231 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$505 = fb_ArrayBoundChk( TMP$514$6, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 231, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 231 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$505 == 0 ) goto label$531;
						#line 231 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$505;
						#line 231 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$531:;
						#line 231 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$515$6 = *(struct $9CPCWINDOW**)((TMP$514$6 << (2 & 31)) + *(int32*)&WINDOWPTR$);
						#line 231 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$508 = fb_NullPtrChk( (void*)TMP$515$6, 231, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 231 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$508 == 0 ) goto label$532;
						#line 231 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$508;
						#line 231 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$532:;
						#line 231 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( ((*(int32*)((uint8*)TMP$511$6 + 72) + *(int32*)((uint8*)TMP$513$6 + 36)) + 29) < *(int32*)((uint8*)TMP$515$6 + 36) ) goto label$375;
						{
							#line 231 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							int32 TMP$516$7;
							#line 231 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							struct $10TEXTBLOCKH* TMP$517$7;
							// 						TextblockPTR(c)->IsVisible = False
							#line 232 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							TMP$516$7 = C$4;
							#line 232 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							void* vr$512 = fb_ArrayBoundChk( TMP$516$7, *(int32*)((uint8*)&TEXTBLOCKPTR$ + 24), *(int32*)((uint8*)&TEXTBLOCKPTR$ + 28), 232, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
							#line 232 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							if( vr$512 == 0 ) goto label$533;
							#line 232 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							goto *vr$512;
							#line 232 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							label$533:;
							#line 232 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							TMP$517$7 = *(struct $10TEXTBLOCKH**)((TMP$516$7 << (2 & 31)) + *(int32*)&TEXTBLOCKPTR$);
							#line 232 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							void* vr$515 = fb_NullPtrChk( (void*)TMP$517$7, 232, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
							#line 232 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							if( vr$515 == 0 ) goto label$534;
							#line 232 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							goto *vr$515;
							#line 232 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							label$534:;
							#line 232 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							*(boolean*)((uint8*)TMP$517$7 + 92) = (boolean)0;
							// 						Continue For
							#line 233 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							goto label$365;
							// 					End If
						}
						#line 234 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$375:;
						#line 234 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$374:;
						// 					TextblockPTR(c)->x = WindowPTR(i)->x + TextblockPTR(c)->x2 + 4
						#line 235 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$520$6 = I$2;
						#line 235 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$519 = fb_ArrayBoundChk( TMP$520$6, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 235, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 235 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$519 == 0 ) goto label$535;
						#line 235 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$519;
						#line 235 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$535:;
						#line 235 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$521$6 = *(struct $9CPCWINDOW**)((TMP$520$6 << (2 & 31)) + *(int32*)&WINDOWPTR$);
						#line 235 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$522 = fb_NullPtrChk( (void*)TMP$521$6, 235, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 235 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$522 == 0 ) goto label$536;
						#line 235 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$522;
						#line 235 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$536:;
						#line 235 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$522$6 = C$4;
						#line 235 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$526 = fb_ArrayBoundChk( TMP$522$6, *(int32*)((uint8*)&TEXTBLOCKPTR$ + 24), *(int32*)((uint8*)&TEXTBLOCKPTR$ + 28), 235, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 235 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$526 == 0 ) goto label$537;
						#line 235 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$526;
						#line 235 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$537:;
						#line 235 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$523$6 = *(struct $10TEXTBLOCKH**)((TMP$522$6 << (2 & 31)) + *(int32*)&TEXTBLOCKPTR$);
						#line 235 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$529 = fb_NullPtrChk( (void*)TMP$523$6, 235, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 235 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$529 == 0 ) goto label$538;
						#line 235 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$529;
						#line 235 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$538:;
						#line 235 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$518$6 = C$4;
						#line 235 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$535 = fb_ArrayBoundChk( TMP$518$6, *(int32*)((uint8*)&TEXTBLOCKPTR$ + 24), *(int32*)((uint8*)&TEXTBLOCKPTR$ + 28), 235, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 235 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$535 == 0 ) goto label$539;
						#line 235 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$535;
						#line 235 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$539:;
						#line 235 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$519$6 = *(struct $10TEXTBLOCKH**)((TMP$518$6 << (2 & 31)) + *(int32*)&TEXTBLOCKPTR$);
						#line 235 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$538 = fb_NullPtrChk( (void*)TMP$519$6, 235, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 235 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$538 == 0 ) goto label$540;
						#line 235 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$538;
						#line 235 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$540:;
						#line 235 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						*(int32*)((uint8*)TMP$519$6 + 24) = (*(int32*)((uint8*)TMP$521$6 + 24) + *(int32*)((uint8*)TMP$523$6 + 68)) + 4;
						// 					TextblockPTR(c)->y = WindowPTR(i)->y + TextblockPTR(c)->y2 + TBH [Macro Expansion: 25  ]
						#line 236 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$526$6 = I$2;
						#line 236 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$542 = fb_ArrayBoundChk( TMP$526$6, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 236, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 236 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$542 == 0 ) goto label$541;
						#line 236 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$542;
						#line 236 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$541:;
						#line 236 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$527$6 = *(struct $9CPCWINDOW**)((TMP$526$6 << (2 & 31)) + *(int32*)&WINDOWPTR$);
						#line 236 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$545 = fb_NullPtrChk( (void*)TMP$527$6, 236, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 236 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$545 == 0 ) goto label$542;
						#line 236 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$545;
						#line 236 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$542:;
						#line 236 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$528$6 = C$4;
						#line 236 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$549 = fb_ArrayBoundChk( TMP$528$6, *(int32*)((uint8*)&TEXTBLOCKPTR$ + 24), *(int32*)((uint8*)&TEXTBLOCKPTR$ + 28), 236, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 236 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$549 == 0 ) goto label$543;
						#line 236 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$549;
						#line 236 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$543:;
						#line 236 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$529$6 = *(struct $10TEXTBLOCKH**)((TMP$528$6 << (2 & 31)) + *(int32*)&TEXTBLOCKPTR$);
						#line 236 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$552 = fb_NullPtrChk( (void*)TMP$529$6, 236, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 236 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$552 == 0 ) goto label$544;
						#line 236 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$552;
						#line 236 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$544:;
						#line 236 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$524$6 = C$4;
						#line 236 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$558 = fb_ArrayBoundChk( TMP$524$6, *(int32*)((uint8*)&TEXTBLOCKPTR$ + 24), *(int32*)((uint8*)&TEXTBLOCKPTR$ + 28), 236, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 236 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$558 == 0 ) goto label$545;
						#line 236 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$558;
						#line 236 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$545:;
						#line 236 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$525$6 = *(struct $10TEXTBLOCKH**)((TMP$524$6 << (2 & 31)) + *(int32*)&TEXTBLOCKPTR$);
						#line 236 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$561 = fb_NullPtrChk( (void*)TMP$525$6, 236, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 236 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$561 == 0 ) goto label$546;
						#line 236 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$561;
						#line 236 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$546:;
						#line 236 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						*(int32*)((uint8*)TMP$525$6 + 28) = (*(int32*)((uint8*)TMP$527$6 + 28) + *(int32*)((uint8*)TMP$529$6 + 72)) + 25;
						// 					TextblockPTR(c)->IsVisible = True
						#line 237 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$530$6 = C$4;
						#line 237 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$565 = fb_ArrayBoundChk( TMP$530$6, *(int32*)((uint8*)&TEXTBLOCKPTR$ + 24), *(int32*)((uint8*)&TEXTBLOCKPTR$ + 28), 237, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 237 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$565 == 0 ) goto label$547;
						#line 237 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$565;
						#line 237 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$547:;
						#line 237 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$531$6 = *(struct $10TEXTBLOCKH**)((TMP$530$6 << (2 & 31)) + *(int32*)&TEXTBLOCKPTR$);
						#line 237 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$568 = fb_NullPtrChk( (void*)TMP$531$6, 237, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 237 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$568 == 0 ) goto label$548;
						#line 237 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$568;
						#line 237 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$548:;
						#line 237 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						*(boolean*)((uint8*)TMP$531$6 + 92) = (boolean)1;
						// 					TextblockPTR(c)->redraw()
						#line 238 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$532$6 = C$4;
						#line 238 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$572 = fb_ArrayBoundChk( TMP$532$6, *(int32*)((uint8*)&TEXTBLOCKPTR$ + 24), *(int32*)((uint8*)&TEXTBLOCKPTR$ + 28), 238, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 238 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$572 == 0 ) goto label$549;
						#line 238 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$572;
						#line 238 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$549:;
						#line 238 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						_ZN10TEXTBLOCKH6REDRAWEv( *(struct $10TEXTBLOCKH**)((TMP$532$6 << (2 & 31)) + *(int32*)&TEXTBLOCKPTR$) );
						// 				End If
					}
					#line 239 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					label$371:;
					#line 239 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					label$370:;
					// 		Next
				}
				#line 241 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				label$365:;
				#line 241 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				C$4 = C$4 + 1;
				#line 241 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				label$364:;
				#line 241 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				if( C$4 <= TMP$496$4 ) goto label$367;
				#line 241 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				label$366:;
			}
			// For d As Integer = 1 To UBound(PictureboxPTR)
			{
				#line 243 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				int32 D$4;
				#line 243 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				D$4 = 1;
				#line 243 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				int32 TMP$534$4;
				#line 243 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				int32 vr$576 = fb_ArrayUBound( (struct $7FBARRAYIKvE*)&PICTUREBOXPTR$, 1 );
				#line 243 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				TMP$534$4 = vr$576;
				#line 243 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				goto label$376;
				#line 243 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				label$379:;
				{
					#line 243 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					int32 TMP$535$5;
					#line 243 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					int32 TMP$536$5;
					#line 243 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					struct $11PICTUREBOXH* TMP$537$5;
					#line 243 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					int32 TMP$538$5;
					#line 243 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					struct $9CPCWINDOW* TMP$539$5;
					// 			If PictureboxPTR(d) = 0 Then Continue For
					#line 244 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					TMP$535$5 = D$4;
					#line 244 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					void* vr$579 = fb_ArrayBoundChk( TMP$535$5, *(int32*)((uint8*)&PICTUREBOXPTR$ + 24), *(int32*)((uint8*)&PICTUREBOXPTR$ + 28), 244, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
					#line 244 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					if( vr$579 == 0 ) goto label$550;
					#line 244 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					goto *vr$579;
					#line 244 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					label$550:;
					#line 244 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					if( *(struct $11PICTUREBOXH**)((TMP$535$5 << (2 & 31)) + *(int32*)&PICTUREBOXPTR$) != (struct $11PICTUREBOXH*)0u ) goto label$381;
					{
						#line 244 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto label$377;
						#line 244 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$381:;
					}
					// 				If PictureboxPTR(d)->pid = WindowPTR(i)->id Then	'if window has buttons Then
					#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					TMP$536$5 = D$4;
					#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					void* vr$584 = fb_ArrayBoundChk( TMP$536$5, *(int32*)((uint8*)&PICTUREBOXPTR$ + 24), *(int32*)((uint8*)&PICTUREBOXPTR$ + 28), 245, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
					#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					if( vr$584 == 0 ) goto label$551;
					#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					goto *vr$584;
					#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					label$551:;
					#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					TMP$537$5 = *(struct $11PICTUREBOXH**)((TMP$536$5 << (2 & 31)) + *(int32*)&PICTUREBOXPTR$);
					#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					void* vr$587 = fb_NullPtrChk( (void*)TMP$537$5, 245, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
					#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					if( vr$587 == 0 ) goto label$552;
					#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					goto *vr$587;
					#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					label$552:;
					#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					TMP$538$5 = I$2;
					#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					void* vr$591 = fb_ArrayBoundChk( TMP$538$5, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 245, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
					#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					if( vr$591 == 0 ) goto label$553;
					#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					goto *vr$591;
					#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					label$553:;
					#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					TMP$539$5 = *(struct $9CPCWINDOW**)((TMP$538$5 << (2 & 31)) + *(int32*)&WINDOWPTR$);
					#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					void* vr$594 = fb_NullPtrChk( (void*)TMP$539$5, 245, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
					#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					if( vr$594 == 0 ) goto label$554;
					#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					goto *vr$594;
					#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					label$554:;
					#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					if( *(int32*)((uint8*)TMP$537$5 + 20) != *(int32*)((uint8*)TMP$539$5 + 16) ) goto label$383;
					{
						#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$540$6;
						#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $11PICTUREBOXH* TMP$541$6;
						#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$542$6;
						#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $11PICTUREBOXH* TMP$543$6;
						#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$544$6;
						#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $9CPCWINDOW* TMP$545$6;
						#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$548$6;
						#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $11PICTUREBOXH* TMP$549$6;
						#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$550$6;
						#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $11PICTUREBOXH* TMP$551$6;
						#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$552$6;
						#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $9CPCWINDOW* TMP$553$6;
						#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$556$6;
						#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $11PICTUREBOXH* TMP$557$6;
						#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$558$6;
						#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $9CPCWINDOW* TMP$559$6;
						#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$560$6;
						#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $11PICTUREBOXH* TMP$561$6;
						#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$562$6;
						#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $11PICTUREBOXH* TMP$563$6;
						#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$564$6;
						#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $9CPCWINDOW* TMP$565$6;
						#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$566$6;
						#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $11PICTUREBOXH* TMP$567$6;
						#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$568$6;
						#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $11PICTUREBOXH* TMP$569$6;
						#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$570$6;
						#line 245 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $11PICTUREBOXH* TMP$571$6;
						// 					'if window width is smaller than buttons position hide them
						// 					If (PictureboxPTR(d)->x2 + PictureboxPTR(d)->sx + 8) >= WindowPTR(i)->sx Then
						#line 247 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$540$6 = D$4;
						#line 247 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$598 = fb_ArrayBoundChk( TMP$540$6, *(int32*)((uint8*)&PICTUREBOXPTR$ + 24), *(int32*)((uint8*)&PICTUREBOXPTR$ + 28), 247, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 247 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$598 == 0 ) goto label$555;
						#line 247 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$598;
						#line 247 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$555:;
						#line 247 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$541$6 = *(struct $11PICTUREBOXH**)((TMP$540$6 << (2 & 31)) + *(int32*)&PICTUREBOXPTR$);
						#line 247 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$601 = fb_NullPtrChk( (void*)TMP$541$6, 247, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 247 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$601 == 0 ) goto label$556;
						#line 247 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$601;
						#line 247 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$556:;
						#line 247 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$542$6 = D$4;
						#line 247 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$605 = fb_ArrayBoundChk( TMP$542$6, *(int32*)((uint8*)&PICTUREBOXPTR$ + 24), *(int32*)((uint8*)&PICTUREBOXPTR$ + 28), 247, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 247 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$605 == 0 ) goto label$557;
						#line 247 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$605;
						#line 247 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$557:;
						#line 247 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$543$6 = *(struct $11PICTUREBOXH**)((TMP$542$6 << (2 & 31)) + *(int32*)&PICTUREBOXPTR$);
						#line 247 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$608 = fb_NullPtrChk( (void*)TMP$543$6, 247, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 247 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$608 == 0 ) goto label$558;
						#line 247 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$608;
						#line 247 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$558:;
						#line 247 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$544$6 = I$2;
						#line 247 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$614 = fb_ArrayBoundChk( TMP$544$6, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 247, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 247 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$614 == 0 ) goto label$559;
						#line 247 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$614;
						#line 247 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$559:;
						#line 247 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$545$6 = *(struct $9CPCWINDOW**)((TMP$544$6 << (2 & 31)) + *(int32*)&WINDOWPTR$);
						#line 247 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$617 = fb_NullPtrChk( (void*)TMP$545$6, 247, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 247 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$617 == 0 ) goto label$560;
						#line 247 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$617;
						#line 247 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$560:;
						#line 247 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( ((*(int32*)((uint8*)TMP$541$6 + 68) + *(int32*)((uint8*)TMP$543$6 + 32)) + 8) < *(int32*)((uint8*)TMP$545$6 + 32) ) goto label$385;
						{
							#line 247 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							int32 TMP$546$7;
							#line 247 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							struct $11PICTUREBOXH* TMP$547$7;
							// 						PictureboxPTR(d)->IsVisible = False
							#line 248 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							TMP$546$7 = D$4;
							#line 248 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							void* vr$621 = fb_ArrayBoundChk( TMP$546$7, *(int32*)((uint8*)&PICTUREBOXPTR$ + 24), *(int32*)((uint8*)&PICTUREBOXPTR$ + 28), 248, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
							#line 248 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							if( vr$621 == 0 ) goto label$561;
							#line 248 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							goto *vr$621;
							#line 248 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							label$561:;
							#line 248 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							TMP$547$7 = *(struct $11PICTUREBOXH**)((TMP$546$7 << (2 & 31)) + *(int32*)&PICTUREBOXPTR$);
							#line 248 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							void* vr$624 = fb_NullPtrChk( (void*)TMP$547$7, 248, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
							#line 248 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							if( vr$624 == 0 ) goto label$562;
							#line 248 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							goto *vr$624;
							#line 248 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							label$562:;
							#line 248 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							*(boolean*)((uint8*)TMP$547$7 + 92) = (boolean)0;
							// 						Continue For
							#line 249 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							goto label$377;
							// 					End If
						}
						#line 250 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$385:;
						#line 250 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$384:;
						// 					'if window height is smaller than buttons position hide them
						// 					If (PictureboxPTR(d)->y2 + PictureboxPTR(d)->sy + TBH  [Macro Expansion: 25  ]  + 4) >= WindowPTR(i)->sy Then
						#line 252 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$548$6 = D$4;
						#line 252 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$628 = fb_ArrayBoundChk( TMP$548$6, *(int32*)((uint8*)&PICTUREBOXPTR$ + 24), *(int32*)((uint8*)&PICTUREBOXPTR$ + 28), 252, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 252 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$628 == 0 ) goto label$563;
						#line 252 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$628;
						#line 252 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$563:;
						#line 252 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$549$6 = *(struct $11PICTUREBOXH**)((TMP$548$6 << (2 & 31)) + *(int32*)&PICTUREBOXPTR$);
						#line 252 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$631 = fb_NullPtrChk( (void*)TMP$549$6, 252, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 252 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$631 == 0 ) goto label$564;
						#line 252 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$631;
						#line 252 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$564:;
						#line 252 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$550$6 = D$4;
						#line 252 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$635 = fb_ArrayBoundChk( TMP$550$6, *(int32*)((uint8*)&PICTUREBOXPTR$ + 24), *(int32*)((uint8*)&PICTUREBOXPTR$ + 28), 252, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 252 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$635 == 0 ) goto label$565;
						#line 252 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$635;
						#line 252 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$565:;
						#line 252 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$551$6 = *(struct $11PICTUREBOXH**)((TMP$550$6 << (2 & 31)) + *(int32*)&PICTUREBOXPTR$);
						#line 252 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$638 = fb_NullPtrChk( (void*)TMP$551$6, 252, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 252 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$638 == 0 ) goto label$566;
						#line 252 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$638;
						#line 252 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$566:;
						#line 252 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$552$6 = I$2;
						#line 252 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$644 = fb_ArrayBoundChk( TMP$552$6, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 252, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 252 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$644 == 0 ) goto label$567;
						#line 252 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$644;
						#line 252 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$567:;
						#line 252 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$553$6 = *(struct $9CPCWINDOW**)((TMP$552$6 << (2 & 31)) + *(int32*)&WINDOWPTR$);
						#line 252 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$647 = fb_NullPtrChk( (void*)TMP$553$6, 252, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 252 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$647 == 0 ) goto label$568;
						#line 252 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$647;
						#line 252 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$568:;
						#line 252 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( ((*(int32*)((uint8*)TMP$549$6 + 72) + *(int32*)((uint8*)TMP$551$6 + 36)) + 29) < *(int32*)((uint8*)TMP$553$6 + 36) ) goto label$387;
						{
							#line 252 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							int32 TMP$554$7;
							#line 252 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							struct $11PICTUREBOXH* TMP$555$7;
							// 						PictureboxPTR(d)->IsVisible = False
							#line 253 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							TMP$554$7 = D$4;
							#line 253 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							void* vr$651 = fb_ArrayBoundChk( TMP$554$7, *(int32*)((uint8*)&PICTUREBOXPTR$ + 24), *(int32*)((uint8*)&PICTUREBOXPTR$ + 28), 253, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
							#line 253 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							if( vr$651 == 0 ) goto label$569;
							#line 253 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							goto *vr$651;
							#line 253 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							label$569:;
							#line 253 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							TMP$555$7 = *(struct $11PICTUREBOXH**)((TMP$554$7 << (2 & 31)) + *(int32*)&PICTUREBOXPTR$);
							#line 253 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							void* vr$654 = fb_NullPtrChk( (void*)TMP$555$7, 253, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
							#line 253 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							if( vr$654 == 0 ) goto label$570;
							#line 253 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							goto *vr$654;
							#line 253 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							label$570:;
							#line 253 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							*(boolean*)((uint8*)TMP$555$7 + 92) = (boolean)0;
							// 						Continue For
							#line 254 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							goto label$377;
							// 					End If
						}
						#line 255 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$387:;
						#line 255 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$386:;
						// 					PictureboxPTR(d)->x = WindowPTR(i)->x + PictureboxPTR(d)->x2 + 4
						#line 256 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$558$6 = I$2;
						#line 256 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$658 = fb_ArrayBoundChk( TMP$558$6, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 256, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 256 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$658 == 0 ) goto label$571;
						#line 256 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$658;
						#line 256 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$571:;
						#line 256 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$559$6 = *(struct $9CPCWINDOW**)((TMP$558$6 << (2 & 31)) + *(int32*)&WINDOWPTR$);
						#line 256 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$661 = fb_NullPtrChk( (void*)TMP$559$6, 256, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 256 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$661 == 0 ) goto label$572;
						#line 256 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$661;
						#line 256 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$572:;
						#line 256 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$560$6 = D$4;
						#line 256 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$665 = fb_ArrayBoundChk( TMP$560$6, *(int32*)((uint8*)&PICTUREBOXPTR$ + 24), *(int32*)((uint8*)&PICTUREBOXPTR$ + 28), 256, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 256 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$665 == 0 ) goto label$573;
						#line 256 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$665;
						#line 256 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$573:;
						#line 256 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$561$6 = *(struct $11PICTUREBOXH**)((TMP$560$6 << (2 & 31)) + *(int32*)&PICTUREBOXPTR$);
						#line 256 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$668 = fb_NullPtrChk( (void*)TMP$561$6, 256, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 256 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$668 == 0 ) goto label$574;
						#line 256 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$668;
						#line 256 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$574:;
						#line 256 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$556$6 = D$4;
						#line 256 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$674 = fb_ArrayBoundChk( TMP$556$6, *(int32*)((uint8*)&PICTUREBOXPTR$ + 24), *(int32*)((uint8*)&PICTUREBOXPTR$ + 28), 256, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 256 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$674 == 0 ) goto label$575;
						#line 256 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$674;
						#line 256 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$575:;
						#line 256 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$557$6 = *(struct $11PICTUREBOXH**)((TMP$556$6 << (2 & 31)) + *(int32*)&PICTUREBOXPTR$);
						#line 256 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$677 = fb_NullPtrChk( (void*)TMP$557$6, 256, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 256 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$677 == 0 ) goto label$576;
						#line 256 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$677;
						#line 256 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$576:;
						#line 256 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						*(int32*)((uint8*)TMP$557$6 + 24) = (*(int32*)((uint8*)TMP$559$6 + 24) + *(int32*)((uint8*)TMP$561$6 + 68)) + 4;
						// 					PictureboxPTR(d)->y = WindowPTR(i)->y + PictureboxPTR(d)->y2 + TBH [Macro Expansion: 25  ]
						#line 257 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$564$6 = I$2;
						#line 257 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$681 = fb_ArrayBoundChk( TMP$564$6, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 257, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 257 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$681 == 0 ) goto label$577;
						#line 257 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$681;
						#line 257 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$577:;
						#line 257 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$565$6 = *(struct $9CPCWINDOW**)((TMP$564$6 << (2 & 31)) + *(int32*)&WINDOWPTR$);
						#line 257 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$684 = fb_NullPtrChk( (void*)TMP$565$6, 257, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 257 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$684 == 0 ) goto label$578;
						#line 257 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$684;
						#line 257 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$578:;
						#line 257 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$566$6 = D$4;
						#line 257 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$688 = fb_ArrayBoundChk( TMP$566$6, *(int32*)((uint8*)&PICTUREBOXPTR$ + 24), *(int32*)((uint8*)&PICTUREBOXPTR$ + 28), 257, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 257 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$688 == 0 ) goto label$579;
						#line 257 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$688;
						#line 257 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$579:;
						#line 257 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$567$6 = *(struct $11PICTUREBOXH**)((TMP$566$6 << (2 & 31)) + *(int32*)&PICTUREBOXPTR$);
						#line 257 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$691 = fb_NullPtrChk( (void*)TMP$567$6, 257, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 257 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$691 == 0 ) goto label$580;
						#line 257 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$691;
						#line 257 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$580:;
						#line 257 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$562$6 = D$4;
						#line 257 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$697 = fb_ArrayBoundChk( TMP$562$6, *(int32*)((uint8*)&PICTUREBOXPTR$ + 24), *(int32*)((uint8*)&PICTUREBOXPTR$ + 28), 257, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 257 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$697 == 0 ) goto label$581;
						#line 257 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$697;
						#line 257 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$581:;
						#line 257 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$563$6 = *(struct $11PICTUREBOXH**)((TMP$562$6 << (2 & 31)) + *(int32*)&PICTUREBOXPTR$);
						#line 257 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$700 = fb_NullPtrChk( (void*)TMP$563$6, 257, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 257 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$700 == 0 ) goto label$582;
						#line 257 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$700;
						#line 257 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$582:;
						#line 257 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						*(int32*)((uint8*)TMP$563$6 + 28) = (*(int32*)((uint8*)TMP$565$6 + 28) + *(int32*)((uint8*)TMP$567$6 + 72)) + 25;
						// 					PictureboxPTR(d)->IsVisible = True
						#line 258 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$568$6 = D$4;
						#line 258 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$704 = fb_ArrayBoundChk( TMP$568$6, *(int32*)((uint8*)&PICTUREBOXPTR$ + 24), *(int32*)((uint8*)&PICTUREBOXPTR$ + 28), 258, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 258 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$704 == 0 ) goto label$583;
						#line 258 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$704;
						#line 258 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$583:;
						#line 258 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$569$6 = *(struct $11PICTUREBOXH**)((TMP$568$6 << (2 & 31)) + *(int32*)&PICTUREBOXPTR$);
						#line 258 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$707 = fb_NullPtrChk( (void*)TMP$569$6, 258, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 258 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$707 == 0 ) goto label$584;
						#line 258 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$707;
						#line 258 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$584:;
						#line 258 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						*(boolean*)((uint8*)TMP$569$6 + 92) = (boolean)1;
						// 					PictureboxPTR(d)->redraw()
						#line 259 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$570$6 = D$4;
						#line 259 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$711 = fb_ArrayBoundChk( TMP$570$6, *(int32*)((uint8*)&PICTUREBOXPTR$ + 24), *(int32*)((uint8*)&PICTUREBOXPTR$ + 28), 259, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 259 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$711 == 0 ) goto label$585;
						#line 259 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$711;
						#line 259 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$585:;
						#line 259 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						_ZN11PICTUREBOXH6REDRAWEv( *(struct $11PICTUREBOXH**)((TMP$570$6 << (2 & 31)) + *(int32*)&PICTUREBOXPTR$) );
						// 				End If
					}
					#line 260 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					label$383:;
					#line 260 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					label$382:;
					// 		Next
				}
				#line 262 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				label$377:;
				#line 262 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				D$4 = D$4 + 1;
				#line 262 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				label$376:;
				#line 262 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				if( D$4 <= TMP$534$4 ) goto label$379;
				#line 262 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				label$378:;
			}
			// For e As Integer = 1 To UBound(ConsolePTR)
			{
				#line 264 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				int32 E$4;
				#line 264 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				E$4 = 1;
				#line 264 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				int32 TMP$572$4;
				#line 264 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				int32 vr$715 = fb_ArrayUBound( (struct $7FBARRAYIKvE*)&CONSOLEPTR$, 1 );
				#line 264 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				TMP$572$4 = vr$715;
				#line 264 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				goto label$388;
				#line 264 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				label$391:;
				{
					#line 264 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					int32 TMP$573$5;
					#line 264 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					int32 TMP$574$5;
					#line 264 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					struct $8CONSOLEH* TMP$575$5;
					#line 264 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					int32 TMP$576$5;
					#line 264 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					struct $9CPCWINDOW* TMP$577$5;
					// 			If ConsolePTR(e) = 0 Then Continue For
					#line 265 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					TMP$573$5 = E$4;
					#line 265 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					void* vr$718 = fb_ArrayBoundChk( TMP$573$5, *(int32*)((uint8*)&CONSOLEPTR$ + 24), *(int32*)((uint8*)&CONSOLEPTR$ + 28), 265, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
					#line 265 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					if( vr$718 == 0 ) goto label$586;
					#line 265 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					goto *vr$718;
					#line 265 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					label$586:;
					#line 265 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					if( *(struct $8CONSOLEH**)((TMP$573$5 << (2 & 31)) + *(int32*)&CONSOLEPTR$) != (struct $8CONSOLEH*)0u ) goto label$393;
					{
						#line 265 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto label$389;
						#line 265 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$393:;
					}
					// 				If ConsolePTR(e)->pid = WindowPTR(i)->id Then	'if window has buttons Then
					#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					TMP$574$5 = E$4;
					#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					void* vr$723 = fb_ArrayBoundChk( TMP$574$5, *(int32*)((uint8*)&CONSOLEPTR$ + 24), *(int32*)((uint8*)&CONSOLEPTR$ + 28), 266, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
					#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					if( vr$723 == 0 ) goto label$587;
					#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					goto *vr$723;
					#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					label$587:;
					#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					TMP$575$5 = *(struct $8CONSOLEH**)((TMP$574$5 << (2 & 31)) + *(int32*)&CONSOLEPTR$);
					#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					void* vr$726 = fb_NullPtrChk( (void*)TMP$575$5, 266, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
					#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					if( vr$726 == 0 ) goto label$588;
					#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					goto *vr$726;
					#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					label$588:;
					#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					TMP$576$5 = I$2;
					#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					void* vr$730 = fb_ArrayBoundChk( TMP$576$5, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 266, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
					#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					if( vr$730 == 0 ) goto label$589;
					#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					goto *vr$730;
					#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					label$589:;
					#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					TMP$577$5 = *(struct $9CPCWINDOW**)((TMP$576$5 << (2 & 31)) + *(int32*)&WINDOWPTR$);
					#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					void* vr$733 = fb_NullPtrChk( (void*)TMP$577$5, 266, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
					#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					if( vr$733 == 0 ) goto label$590;
					#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					goto *vr$733;
					#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					label$590:;
					#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					if( *(int32*)((uint8*)TMP$575$5 + 20) != *(int32*)((uint8*)TMP$577$5 + 16) ) goto label$395;
					{
						#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$578$6;
						#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $8CONSOLEH* TMP$579$6;
						#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$580$6;
						#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $8CONSOLEH* TMP$581$6;
						#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$582$6;
						#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $9CPCWINDOW* TMP$583$6;
						#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$586$6;
						#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $8CONSOLEH* TMP$587$6;
						#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$588$6;
						#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $8CONSOLEH* TMP$589$6;
						#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$590$6;
						#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $9CPCWINDOW* TMP$591$6;
						#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$594$6;
						#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $8CONSOLEH* TMP$595$6;
						#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$596$6;
						#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $9CPCWINDOW* TMP$597$6;
						#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$598$6;
						#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $8CONSOLEH* TMP$599$6;
						#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$600$6;
						#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $8CONSOLEH* TMP$601$6;
						#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$602$6;
						#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $9CPCWINDOW* TMP$603$6;
						#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$604$6;
						#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $8CONSOLEH* TMP$605$6;
						#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$606$6;
						#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $8CONSOLEH* TMP$607$6;
						#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						int32 TMP$608$6;
						#line 266 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						struct $8CONSOLEH* TMP$609$6;
						// 					'if window width is smaller than buttons position hide them
						// 					If (ConsolePTR(e)->x2 + ConsolePTR(e)->sx + 8) >= WindowPTR(i)->sx Then
						#line 268 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$578$6 = E$4;
						#line 268 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$737 = fb_ArrayBoundChk( TMP$578$6, *(int32*)((uint8*)&CONSOLEPTR$ + 24), *(int32*)((uint8*)&CONSOLEPTR$ + 28), 268, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 268 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$737 == 0 ) goto label$591;
						#line 268 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$737;
						#line 268 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$591:;
						#line 268 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$579$6 = *(struct $8CONSOLEH**)((TMP$578$6 << (2 & 31)) + *(int32*)&CONSOLEPTR$);
						#line 268 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$740 = fb_NullPtrChk( (void*)TMP$579$6, 268, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 268 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$740 == 0 ) goto label$592;
						#line 268 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$740;
						#line 268 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$592:;
						#line 268 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$580$6 = E$4;
						#line 268 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$744 = fb_ArrayBoundChk( TMP$580$6, *(int32*)((uint8*)&CONSOLEPTR$ + 24), *(int32*)((uint8*)&CONSOLEPTR$ + 28), 268, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 268 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$744 == 0 ) goto label$593;
						#line 268 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$744;
						#line 268 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$593:;
						#line 268 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$581$6 = *(struct $8CONSOLEH**)((TMP$580$6 << (2 & 31)) + *(int32*)&CONSOLEPTR$);
						#line 268 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$747 = fb_NullPtrChk( (void*)TMP$581$6, 268, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 268 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$747 == 0 ) goto label$594;
						#line 268 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$747;
						#line 268 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$594:;
						#line 268 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$582$6 = I$2;
						#line 268 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$753 = fb_ArrayBoundChk( TMP$582$6, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 268, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 268 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$753 == 0 ) goto label$595;
						#line 268 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$753;
						#line 268 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$595:;
						#line 268 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$583$6 = *(struct $9CPCWINDOW**)((TMP$582$6 << (2 & 31)) + *(int32*)&WINDOWPTR$);
						#line 268 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$756 = fb_NullPtrChk( (void*)TMP$583$6, 268, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 268 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$756 == 0 ) goto label$596;
						#line 268 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$756;
						#line 268 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$596:;
						#line 268 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( ((*(int32*)((uint8*)TMP$579$6 + 68) + *(int32*)((uint8*)TMP$581$6 + 32)) + 8) < *(int32*)((uint8*)TMP$583$6 + 32) ) goto label$397;
						{
							#line 268 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							int32 TMP$584$7;
							#line 268 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							struct $8CONSOLEH* TMP$585$7;
							// 						ConsolePTR(e)->IsVisible = False
							#line 269 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							TMP$584$7 = E$4;
							#line 269 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							void* vr$760 = fb_ArrayBoundChk( TMP$584$7, *(int32*)((uint8*)&CONSOLEPTR$ + 24), *(int32*)((uint8*)&CONSOLEPTR$ + 28), 269, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
							#line 269 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							if( vr$760 == 0 ) goto label$597;
							#line 269 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							goto *vr$760;
							#line 269 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							label$597:;
							#line 269 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							TMP$585$7 = *(struct $8CONSOLEH**)((TMP$584$7 << (2 & 31)) + *(int32*)&CONSOLEPTR$);
							#line 269 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							void* vr$763 = fb_NullPtrChk( (void*)TMP$585$7, 269, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
							#line 269 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							if( vr$763 == 0 ) goto label$598;
							#line 269 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							goto *vr$763;
							#line 269 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							label$598:;
							#line 269 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							*(boolean*)((uint8*)TMP$585$7 + 92) = (boolean)0;
							// 						Continue For
							#line 270 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							goto label$389;
							// 					End If
						}
						#line 271 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$397:;
						#line 271 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$396:;
						// 					'if window height is smaller than buttons position hide them
						// 					If (ConsolePTR(e)->y2 + ConsolePTR(e)->sy + TBH  [Macro Expansion: 25  ]  + 4) >= WindowPTR(i)->sy Then
						#line 273 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$586$6 = E$4;
						#line 273 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$767 = fb_ArrayBoundChk( TMP$586$6, *(int32*)((uint8*)&CONSOLEPTR$ + 24), *(int32*)((uint8*)&CONSOLEPTR$ + 28), 273, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 273 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$767 == 0 ) goto label$599;
						#line 273 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$767;
						#line 273 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$599:;
						#line 273 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$587$6 = *(struct $8CONSOLEH**)((TMP$586$6 << (2 & 31)) + *(int32*)&CONSOLEPTR$);
						#line 273 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$770 = fb_NullPtrChk( (void*)TMP$587$6, 273, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 273 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$770 == 0 ) goto label$600;
						#line 273 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$770;
						#line 273 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$600:;
						#line 273 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$588$6 = E$4;
						#line 273 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$774 = fb_ArrayBoundChk( TMP$588$6, *(int32*)((uint8*)&CONSOLEPTR$ + 24), *(int32*)((uint8*)&CONSOLEPTR$ + 28), 273, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 273 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$774 == 0 ) goto label$601;
						#line 273 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$774;
						#line 273 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$601:;
						#line 273 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$589$6 = *(struct $8CONSOLEH**)((TMP$588$6 << (2 & 31)) + *(int32*)&CONSOLEPTR$);
						#line 273 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$777 = fb_NullPtrChk( (void*)TMP$589$6, 273, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 273 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$777 == 0 ) goto label$602;
						#line 273 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$777;
						#line 273 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$602:;
						#line 273 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$590$6 = I$2;
						#line 273 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$783 = fb_ArrayBoundChk( TMP$590$6, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 273, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 273 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$783 == 0 ) goto label$603;
						#line 273 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$783;
						#line 273 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$603:;
						#line 273 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$591$6 = *(struct $9CPCWINDOW**)((TMP$590$6 << (2 & 31)) + *(int32*)&WINDOWPTR$);
						#line 273 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$786 = fb_NullPtrChk( (void*)TMP$591$6, 273, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 273 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$786 == 0 ) goto label$604;
						#line 273 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$786;
						#line 273 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$604:;
						#line 273 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( ((*(int32*)((uint8*)TMP$587$6 + 72) + *(int32*)((uint8*)TMP$589$6 + 36)) + 29) < *(int32*)((uint8*)TMP$591$6 + 36) ) goto label$399;
						{
							#line 273 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							int32 TMP$592$7;
							#line 273 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							struct $8CONSOLEH* TMP$593$7;
							// 						ConsolePTR(e)->IsVisible = False
							#line 274 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							TMP$592$7 = E$4;
							#line 274 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							void* vr$790 = fb_ArrayBoundChk( TMP$592$7, *(int32*)((uint8*)&CONSOLEPTR$ + 24), *(int32*)((uint8*)&CONSOLEPTR$ + 28), 274, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
							#line 274 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							if( vr$790 == 0 ) goto label$605;
							#line 274 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							goto *vr$790;
							#line 274 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							label$605:;
							#line 274 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							TMP$593$7 = *(struct $8CONSOLEH**)((TMP$592$7 << (2 & 31)) + *(int32*)&CONSOLEPTR$);
							#line 274 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							void* vr$793 = fb_NullPtrChk( (void*)TMP$593$7, 274, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
							#line 274 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							if( vr$793 == 0 ) goto label$606;
							#line 274 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							goto *vr$793;
							#line 274 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							label$606:;
							#line 274 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							*(boolean*)((uint8*)TMP$593$7 + 92) = (boolean)0;
							// 						Continue For
							#line 275 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
							goto label$389;
							// 					End If
						}
						#line 276 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$399:;
						#line 276 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$398:;
						// 					ConsolePTR(e)->x = WindowPTR(i)->x + ConsolePTR(e)->x2 + 4
						#line 277 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$596$6 = I$2;
						#line 277 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$797 = fb_ArrayBoundChk( TMP$596$6, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 277, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 277 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$797 == 0 ) goto label$607;
						#line 277 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$797;
						#line 277 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$607:;
						#line 277 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$597$6 = *(struct $9CPCWINDOW**)((TMP$596$6 << (2 & 31)) + *(int32*)&WINDOWPTR$);
						#line 277 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$800 = fb_NullPtrChk( (void*)TMP$597$6, 277, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 277 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$800 == 0 ) goto label$608;
						#line 277 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$800;
						#line 277 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$608:;
						#line 277 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$598$6 = E$4;
						#line 277 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$804 = fb_ArrayBoundChk( TMP$598$6, *(int32*)((uint8*)&CONSOLEPTR$ + 24), *(int32*)((uint8*)&CONSOLEPTR$ + 28), 277, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 277 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$804 == 0 ) goto label$609;
						#line 277 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$804;
						#line 277 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$609:;
						#line 277 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$599$6 = *(struct $8CONSOLEH**)((TMP$598$6 << (2 & 31)) + *(int32*)&CONSOLEPTR$);
						#line 277 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$807 = fb_NullPtrChk( (void*)TMP$599$6, 277, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 277 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$807 == 0 ) goto label$610;
						#line 277 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$807;
						#line 277 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$610:;
						#line 277 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$594$6 = E$4;
						#line 277 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$813 = fb_ArrayBoundChk( TMP$594$6, *(int32*)((uint8*)&CONSOLEPTR$ + 24), *(int32*)((uint8*)&CONSOLEPTR$ + 28), 277, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 277 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$813 == 0 ) goto label$611;
						#line 277 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$813;
						#line 277 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$611:;
						#line 277 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$595$6 = *(struct $8CONSOLEH**)((TMP$594$6 << (2 & 31)) + *(int32*)&CONSOLEPTR$);
						#line 277 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$816 = fb_NullPtrChk( (void*)TMP$595$6, 277, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 277 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$816 == 0 ) goto label$612;
						#line 277 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$816;
						#line 277 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$612:;
						#line 277 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						*(int32*)((uint8*)TMP$595$6 + 24) = (*(int32*)((uint8*)TMP$597$6 + 24) + *(int32*)((uint8*)TMP$599$6 + 68)) + 4;
						// 					ConsolePTR(e)->y = WindowPTR(i)->y + ConsolePTR(e)->y2 + TBH [Macro Expansion: 25  ]
						#line 278 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$602$6 = I$2;
						#line 278 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$820 = fb_ArrayBoundChk( TMP$602$6, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 278, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 278 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$820 == 0 ) goto label$613;
						#line 278 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$820;
						#line 278 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$613:;
						#line 278 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$603$6 = *(struct $9CPCWINDOW**)((TMP$602$6 << (2 & 31)) + *(int32*)&WINDOWPTR$);
						#line 278 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$823 = fb_NullPtrChk( (void*)TMP$603$6, 278, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 278 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$823 == 0 ) goto label$614;
						#line 278 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$823;
						#line 278 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$614:;
						#line 278 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$604$6 = E$4;
						#line 278 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$827 = fb_ArrayBoundChk( TMP$604$6, *(int32*)((uint8*)&CONSOLEPTR$ + 24), *(int32*)((uint8*)&CONSOLEPTR$ + 28), 278, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 278 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$827 == 0 ) goto label$615;
						#line 278 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$827;
						#line 278 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$615:;
						#line 278 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$605$6 = *(struct $8CONSOLEH**)((TMP$604$6 << (2 & 31)) + *(int32*)&CONSOLEPTR$);
						#line 278 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$830 = fb_NullPtrChk( (void*)TMP$605$6, 278, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 278 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$830 == 0 ) goto label$616;
						#line 278 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$830;
						#line 278 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$616:;
						#line 278 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$600$6 = E$4;
						#line 278 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$836 = fb_ArrayBoundChk( TMP$600$6, *(int32*)((uint8*)&CONSOLEPTR$ + 24), *(int32*)((uint8*)&CONSOLEPTR$ + 28), 278, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 278 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$836 == 0 ) goto label$617;
						#line 278 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$836;
						#line 278 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$617:;
						#line 278 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$601$6 = *(struct $8CONSOLEH**)((TMP$600$6 << (2 & 31)) + *(int32*)&CONSOLEPTR$);
						#line 278 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$839 = fb_NullPtrChk( (void*)TMP$601$6, 278, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 278 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$839 == 0 ) goto label$618;
						#line 278 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$839;
						#line 278 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$618:;
						#line 278 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						*(int32*)((uint8*)TMP$601$6 + 28) = (*(int32*)((uint8*)TMP$603$6 + 28) + *(int32*)((uint8*)TMP$605$6 + 72)) + 25;
						// 					ConsolePTR(e)->IsVisible = True
						#line 279 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$606$6 = E$4;
						#line 279 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$843 = fb_ArrayBoundChk( TMP$606$6, *(int32*)((uint8*)&CONSOLEPTR$ + 24), *(int32*)((uint8*)&CONSOLEPTR$ + 28), 279, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 279 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$843 == 0 ) goto label$619;
						#line 279 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$843;
						#line 279 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$619:;
						#line 279 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$607$6 = *(struct $8CONSOLEH**)((TMP$606$6 << (2 & 31)) + *(int32*)&CONSOLEPTR$);
						#line 279 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$846 = fb_NullPtrChk( (void*)TMP$607$6, 279, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 279 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$846 == 0 ) goto label$620;
						#line 279 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$846;
						#line 279 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$620:;
						#line 279 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						*(boolean*)((uint8*)TMP$607$6 + 92) = (boolean)1;
						// 					ConsolePTR(e)->redraw()
						#line 280 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						TMP$608$6 = E$4;
						#line 280 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						void* vr$850 = fb_ArrayBoundChk( TMP$608$6, *(int32*)((uint8*)&CONSOLEPTR$ + 24), *(int32*)((uint8*)&CONSOLEPTR$ + 28), 280, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
						#line 280 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						if( vr$850 == 0 ) goto label$621;
						#line 280 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						goto *vr$850;
						#line 280 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						label$621:;
						#line 280 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
						_ZN8CONSOLEH6REDRAWEv( *(struct $8CONSOLEH**)((TMP$608$6 << (2 & 31)) + *(int32*)&CONSOLEPTR$) );
						// 				End If
					}
					#line 281 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					label$395:;
					#line 281 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
					label$394:;
					// 		Next
				}
				#line 283 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				label$389:;
				#line 283 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				E$4 = E$4 + 1;
				#line 283 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				label$388:;
				#line 283 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				if( E$4 <= TMP$572$4 ) goto label$391;
				#line 283 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				label$390:;
			}
			// 	Next
		}
		#line 285 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		label$323:;
		#line 285 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		I$2 = I$2 + 1;
		#line 285 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		label$322:;
		#line 285 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		if( I$2 <= TMP$376$2 ) goto label$325;
		#line 285 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		label$324:;
	}
	// 	
	// 	Flip()
	#line 287 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_GfxFlip( -1, -1 );
	// 	Sleep( 1, 1 )
	#line 288 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	label$400:;
	#line 288 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	int32 vr$855 = fb_SleepEx( 1, 1 );
	#line 288 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	if( vr$855 == 0 ) goto label$401;
	#line 288 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	void* vr$858 = fb_ErrorThrowAt( 288, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS", (void*)&&label$400, (void*)&&label$401 );
	#line 288 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	goto *vr$858;
	#line 288 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	label$401:;
	#line 289 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	label$321:;
	#line 289 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_ErrorSetFuncName( (uint8*)TMP$612$1 );
	#line 289 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_ErrorSetModName( (uint8*)TMP$610$1 );
#line 289 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
}

#line 291 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
void CLOSEWINDOW( void )
#line 291 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
{
	#line 291 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* TMP$619$1;
	#line 291 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* TMP$621$1;
	#line 291 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	label$622:;
	#line 291 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
	#line 291 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	TMP$619$1 = vr$0;
	#line 291 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"CLOSEWINDOW" );
	#line 291 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	TMP$621$1 = vr$1;
	// 	For i As Integer = 1 To UBound(WindowPTR) 'for every window
	{
		#line 292 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		int32 I$2;
		#line 292 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		I$2 = 1;
		#line 292 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		int32 TMP$613$2;
		#line 292 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		int32 vr$2 = fb_ArrayUBound( (struct $7FBARRAYIKvE*)&WINDOWPTR$, 1 );
		#line 292 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		TMP$613$2 = vr$2;
		#line 292 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		goto label$624;
		#line 292 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		label$627:;
		{
			#line 292 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			int32 TMP$614$3;
			#line 292 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			int32 TMP$615$3;
			#line 292 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			struct $9CPCWINDOW* TMP$616$3;
			// 			If WindowPTR(i) = 0 Then Continue For	'skip deleted windows
			#line 293 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			TMP$614$3 = I$2;
			#line 293 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			void* vr$5 = fb_ArrayBoundChk( TMP$614$3, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 293, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
			#line 293 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			if( vr$5 == 0 ) goto label$633;
			#line 293 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			goto *vr$5;
			#line 293 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			label$633:;
			#line 293 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			if( *(struct $9CPCWINDOW**)((TMP$614$3 << (2 & 31)) + *(int32*)&WINDOWPTR$) != (struct $9CPCWINDOW*)0u ) goto label$629;
			{
				#line 293 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				goto label$625;
				#line 293 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				label$629:;
			}
			// 			'---- Close -------------------------------------------------------------
			// 			'if close window
			// 			If WindowPTR(i)->doCloseWindow = True Then
			#line 296 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			TMP$615$3 = I$2;
			#line 296 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			void* vr$10 = fb_ArrayBoundChk( TMP$615$3, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 296, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
			#line 296 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			if( vr$10 == 0 ) goto label$634;
			#line 296 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			goto *vr$10;
			#line 296 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			label$634:;
			#line 296 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			TMP$616$3 = *(struct $9CPCWINDOW**)((TMP$615$3 << (2 & 31)) + *(int32*)&WINDOWPTR$);
			#line 296 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			void* vr$13 = fb_NullPtrChk( (void*)TMP$616$3, 296, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
			#line 296 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			if( vr$13 == 0 ) goto label$635;
			#line 296 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			goto *vr$13;
			#line 296 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			label$635:;
			#line 296 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			if( *(boolean*)((uint8*)TMP$616$3 + 91) != (boolean)1 ) goto label$631;
			{
				#line 296 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				int32 TMP$617$4;
				#line 296 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				int32 TMP$618$4;
				// 				'delete each control
				// 				'delete CanvaPTR ----------------------------
				// 				'---------------------------------------------
				// 				'delete window
				// 				Delete WindowPTR(i)
				#line 301 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				TMP$617$4 = I$2;
				#line 301 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				void* vr$17 = fb_ArrayBoundChk( TMP$617$4, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 301, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
				#line 301 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				if( vr$17 == 0 ) goto label$636;
				#line 301 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				goto *vr$17;
				#line 301 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				label$636:;
				#line 301 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				if( *(struct $9CPCWINDOW**)((TMP$617$4 << (2 & 31)) + *(int32*)&WINDOWPTR$) == (struct $9CPCWINDOW*)0u ) goto label$632;
				#line 301 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				TMP$617$4 = I$2;
				#line 301 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				void* vr$22 = fb_ArrayBoundChk( TMP$617$4, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 301, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
				#line 301 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				if( vr$22 == 0 ) goto label$637;
				#line 301 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				goto *vr$22;
				#line 301 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				label$637:;
				#line 301 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				_ZN9CPCWINDOWD1Ev( *(struct $9CPCWINDOW**)((TMP$617$4 << (2 & 31)) + *(int32*)&WINDOWPTR$) );
				#line 301 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				TMP$617$4 = I$2;
				#line 301 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				void* vr$27 = fb_ArrayBoundChk( TMP$617$4, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 301, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
				#line 301 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				if( vr$27 == 0 ) goto label$638;
				#line 301 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				goto *vr$27;
				#line 301 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				label$638:;
				#line 301 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				free( *(void**)((TMP$617$4 << (2 & 31)) + *(int32*)&WINDOWPTR$) );
				#line 301 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				label$632:;
				// 				WindowPTR(i) = 0
				#line 302 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				TMP$618$4 = I$2;
				#line 302 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				void* vr$32 = fb_ArrayBoundChk( TMP$618$4, *(int32*)((uint8*)&WINDOWPTR$ + 24), *(int32*)((uint8*)&WINDOWPTR$ + 28), 302, (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
				#line 302 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				if( vr$32 == 0 ) goto label$639;
				#line 302 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				goto *vr$32;
				#line 302 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				label$639:;
				#line 302 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
				*(struct $9CPCWINDOW**)((TMP$618$4 << (2 & 31)) + *(int32*)&WINDOWPTR$) = (struct $9CPCWINDOW*)0u;
				// 			End If
			}
			#line 303 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			label$631:;
			#line 303 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
			label$630:;
			// 	Next
		}
		#line 304 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		label$625:;
		#line 304 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		I$2 = I$2 + 1;
		#line 304 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		label$624:;
		#line 304 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		if( I$2 <= TMP$613$2 ) goto label$627;
		#line 304 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		label$626:;
	}
	// 	RePaint()
	#line 305 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	REPAINT(  );
	#line 306 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	label$623:;
	#line 306 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_ErrorSetFuncName( (uint8*)TMP$621$1 );
	#line 306 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_ErrorSetModName( (uint8*)TMP$619$1 );
#line 306 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
}

#line 311 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
int32 Test_CPC_resolution( int32 SCRX$1, int32 SCRY$1 )
#line 311 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
{
	#line 311 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* TMP$636$1;
	#line 311 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* TMP$638$1;
	#line 311 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	int32 fb$result$1;
	#line 311 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	__builtin_memset( &fb$result$1, 0, 4 );
	#line 311 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* vr$1 = fb_ErrorSetModName( (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
	#line 311 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	TMP$636$1 = vr$1;
	#line 311 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* vr$2 = fb_ErrorSetFuncName( (uint8*)"TEST_CPC_RESOLUTION" );
	#line 311 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	TMP$638$1 = vr$2;
	#line 311 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	label$640:;
	// Dim Test as integer
	#line 312 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	int32 TEST$1;
	#line 312 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	__builtin_memset( &TEST$1, 0, 4 );
	// Test = Screenres (SCRX,SCRY,32,5)
	#line 313 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	int32 vr$4 = fb_GfxScreenRes( SCRX$1, SCRY$1, 32, 5, 0, 0 );
	#line 313 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	TEST$1 = vr$4;
	// if Test = 0 then
	#line 314 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	if( TEST$1 != 0 ) goto label$643;
	{
		#line 314 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		FBSTRING TMP$624$2;
		#line 314 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		FBSTRING TMP$625$2;
		#line 314 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		FBSTRING TMP$626$2;
		#line 314 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		FBSTRING TMP$628$2;
		#line 314 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		FBSTRING TMP$629$2;
		#line 314 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		FBSTRING TMP$631$2;
		#line 314 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		FBSTRING TMP$632$2;
		// print "Resolution is set to : " & SCRX & "x" & SCRY
		#line 315 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		FBSTRING* vr$5 = fb_IntToStr( SCRY$1 );
		#line 315 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		FBSTRING* vr$6 = fb_IntToStr( SCRX$1 );
		#line 315 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		__builtin_memset( &TMP$624$2, 0, 12 );
		#line 315 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		FBSTRING* vr$9 = fb_StrConcat( &TMP$624$2, (void*)"Resolution is set to : ", 24, (void*)vr$6, -1 );
		#line 315 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		__builtin_memset( &TMP$625$2, 0, 12 );
		#line 315 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		FBSTRING* vr$12 = fb_StrConcat( &TMP$625$2, (void*)vr$9, -1, (void*)"x", 2 );
		#line 315 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		__builtin_memset( &TMP$626$2, 0, 12 );
		#line 315 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		FBSTRING* vr$15 = fb_StrConcat( &TMP$626$2, (void*)vr$12, -1, (void*)vr$5, -1 );
		#line 315 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		fb_PrintString( 0, (FBSTRING*)vr$15, 1 );
		// 		cpcccp_.cpcdos_command("set/ CPC.SCR.X = " & SCRX)
		#line 316 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		__builtin_memset( &TMP$629$2, 0, 12 );
		#line 316 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		FBSTRING* vr$17 = fb_IntToStr( SCRX$1 );
		#line 316 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		__builtin_memset( &TMP$628$2, 0, 12 );
		#line 316 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		FBSTRING* vr$20 = fb_StrConcat( &TMP$628$2, (void*)"set/ CPC.SCR.X = ", 18, (void*)vr$17, -1 );
		#line 316 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		FBSTRING* vr$22 = fb_StrAssign( (void*)&TMP$629$2, -1, (void*)vr$20, -1, 0 );
		#line 316 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		_ZN7CPC_CCP14cpcdos_commandEPc( (uint8*)*(uint8**)&TMP$629$2 );
		#line 316 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		fb_StrDelete( (FBSTRING*)&TMP$629$2 );
		// 		cpcccp_.cpcdos_command("set/ CPC.SCR.Y = " & SCRY)
		#line 317 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		__builtin_memset( &TMP$632$2, 0, 12 );
		#line 317 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		FBSTRING* vr$25 = fb_IntToStr( SCRY$1 );
		#line 317 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		__builtin_memset( &TMP$631$2, 0, 12 );
		#line 317 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		FBSTRING* vr$28 = fb_StrConcat( &TMP$631$2, (void*)"set/ CPC.SCR.Y = ", 18, (void*)vr$25, -1 );
		#line 317 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		FBSTRING* vr$30 = fb_StrAssign( (void*)&TMP$632$2, -1, (void*)vr$28, -1, 0 );
		#line 317 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		_ZN7CPC_CCP14cpcdos_commandEPc( (uint8*)*(uint8**)&TMP$632$2 );
		#line 317 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		fb_StrDelete( (FBSTRING*)&TMP$632$2 );
		// MAXW = SCRX
		#line 318 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		MAXW$ = SCRX$1;
		// MAXH = SCRY
		#line 319 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		MAXH$ = SCRY$1;
		// else
	}
	#line 320 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	goto label$642;
	#line 320 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	label$643:;
	{
		// print "Error! Resolution will be set to 800x600"
		#line 321 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		FBSTRING* vr$32 = fb_StrAllocTempDescZEx( (uint8*)"Error! Resolution will be set to 800x600", 40 );
		#line 321 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		fb_PrintString( 0, (FBSTRING*)vr$32, 1 );
		// MAXW = 800
		#line 322 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		MAXW$ = 800;
		// MAXH = 600
		#line 323 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		MAXH$ = 600;
		// 		cpcccp_.cpcdos_command("set/ CPC.SCR.X = 800")
		#line 324 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		_ZN7CPC_CCP14cpcdos_commandEPc( (uint8*)"set/ CPC.SCR.X = 800" );
		// 		cpcccp_.cpcdos_command("set/ CPC.SCR.Y = 600")
		#line 325 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		_ZN7CPC_CCP14cpcdos_commandEPc( (uint8*)"set/ CPC.SCR.Y = 600" );
		// end if
	}
	#line 326 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	label$642:;
	// function = Test
	#line 327 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb$result$1 = TEST$1;
	#line 328 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	label$641:;
	#line 328 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_ErrorSetFuncName( (uint8*)TMP$638$1 );
	#line 328 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_ErrorSetModName( (uint8*)TMP$636$1 );
	#line 328 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	return fb$result$1;
#line 328 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
}

#line 330 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
int32 Set_Window_GUI_Value( int32 SCRX$1, int32 SCRY$1 )
#line 330 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
{
	#line 330 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* TMP$640$1;
	#line 330 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* TMP$642$1;
	#line 330 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	int32 fb$result$1;
	#line 330 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	__builtin_memset( &fb$result$1, 0, 4 );
	#line 330 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* vr$1 = fb_ErrorSetModName( (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
	#line 330 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	TMP$640$1 = vr$1;
	#line 330 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* vr$2 = fb_ErrorSetFuncName( (uint8*)"SET_WINDOW_GUI_VALUE" );
	#line 330 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	TMP$642$1 = vr$2;
	#line 330 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	label$644:;
	// print "Window GUI Value"
	#line 331 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	FBSTRING* vr$3 = fb_StrAllocTempDescZEx( (uint8*)"Window GUI Value", 16 );
	#line 331 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_PrintString( 0, (FBSTRING*)vr$3, 1 );
	// ' Position titre XY
	// ' Couleur titre
	// ' hauteur barre haute = 7 px alors bar bas depend du haut
	// ' design_Image_sx[3] = 7
	// ' design_Image_sy[3] = 7
	// ' taille fenetre
	// ' type fenetre > CCP
	#line 341 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	label$645:;
	#line 341 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_ErrorSetFuncName( (uint8*)TMP$642$1 );
	#line 341 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_ErrorSetModName( (uint8*)TMP$640$1 );
	#line 341 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	return fb$result$1;
#line 341 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
}

#line 343 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
FBSTRING* sci_list_screen( int32 SX$1, int32 SY$1 )
#line 343 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
{
	#line 343 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	FBSTRING TMP$649$1;
	#line 343 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* TMP$650$1;
	#line 343 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* TMP$652$1;
	#line 343 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	FBSTRING fb$result$1;
	#line 343 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	__builtin_memset( &fb$result$1, 0, 12 );
	#line 343 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* vr$1 = fb_ErrorSetModName( (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
	#line 343 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	TMP$650$1 = vr$1;
	#line 343 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* vr$2 = fb_ErrorSetFuncName( (uint8*)"SCI_LIST_SCREEN" );
	#line 343 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	TMP$652$1 = vr$2;
	#line 343 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	label$646:;
	// 	Dim ModeBpp 	as integer = ScreenList(32)
	#line 345 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	int32 MODEBPP$1;
	#line 345 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	int32 vr$3 = fb_GfxScreenList( 32 );
	#line 345 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	MODEBPP$1 = vr$3;
	// 	Dim Retour 		as String
	#line 346 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	FBSTRING RETOUR$1;
	#line 346 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	__builtin_memset( &RETOUR$1, 0, 12 );
	// 	While (ModeBpp <> 0)
	#line 348 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	label$648:;
	#line 348 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	if( MODEBPP$1 == 0 ) goto label$649;
	{
		#line 348 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		FBSTRING TMP$644$2;
		#line 348 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		FBSTRING TMP$645$2;
		#line 348 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		FBSTRING TMP$646$2;
		#line 348 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		FBSTRING TMP$647$2;
		// 		Retour = Retour & HiWord(ModeBpp) [Macro Expansion: (cuint(ModeBpp) shr 16) ]  & "x" & LoWord(ModeBpp) [Macro Expansion: (cuint(ModeBpp) and &h0000FFFF) ]  & " "
		#line 349 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		FBSTRING* vr$6 = fb_UIntToStr( (uint32)MODEBPP$1 & 65535u );
		#line 349 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		FBSTRING* vr$8 = fb_UIntToStr( (uint32)MODEBPP$1 >> (16 & 31) );
		#line 349 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		__builtin_memset( &TMP$644$2, 0, 12 );
		#line 349 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		FBSTRING* vr$12 = fb_StrConcat( &TMP$644$2, (void*)&RETOUR$1, -1, (void*)vr$8, -1 );
		#line 349 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		__builtin_memset( &TMP$645$2, 0, 12 );
		#line 349 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		FBSTRING* vr$15 = fb_StrConcat( &TMP$645$2, (void*)vr$12, -1, (void*)"x", 2 );
		#line 349 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		__builtin_memset( &TMP$646$2, 0, 12 );
		#line 349 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		FBSTRING* vr$18 = fb_StrConcat( &TMP$646$2, (void*)vr$15, -1, (void*)vr$6, -1 );
		#line 349 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		__builtin_memset( &TMP$647$2, 0, 12 );
		#line 349 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		FBSTRING* vr$21 = fb_StrConcat( &TMP$647$2, (void*)vr$18, -1, (void*)" ", 2 );
		#line 349 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		FBSTRING* vr$23 = fb_StrAssign( (void*)&RETOUR$1, -1, (void*)vr$21, -1, 0 );
		// 		ModeBpp = ScreenList()
		#line 350 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		int32 vr$24 = fb_GfxScreenList( 0 );
		#line 350 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
		MODEBPP$1 = vr$24;
		// 	Wend
	}
	#line 351 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	goto label$648;
	#line 351 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	label$649:;
	// 	print "Available resolution in 32 bits: " & Retour
	#line 352 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	__builtin_memset( &TMP$649$1, 0, 12 );
	#line 352 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	FBSTRING* vr$28 = fb_StrConcat( &TMP$649$1, (void*)"Available resolution in 32 bits: ", 34, (void*)&RETOUR$1, -1 );
	#line 352 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_PrintString( 0, (FBSTRING*)vr$28, 1 );
	// 	
	#line 354 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_StrDelete( (FBSTRING*)&RETOUR$1 );
	#line 354 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	label$647:;
	#line 354 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_ErrorSetFuncName( (uint8*)TMP$652$1 );
	#line 354 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_ErrorSetModName( (uint8*)TMP$650$1 );
	#line 354 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	FBSTRING* vr$31 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	#line 354 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	return vr$31;
#line 354 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
}

#line 1 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
__attribute__(( constructor )) static void fb_ctor__GUI( void )
#line 1 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
{
	#line 1 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* TMP$653$0;
	#line 1 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* TMP$655$0;
	#line 1 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	label$0:;
	#line 1 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
	#line 1 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	TMP$653$0 = vr$0;
	#line 1 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"{MODLEVEL}" );
	#line 1 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	TMP$655$0 = vr$1;
	// #include "fbgfx.bi"
	// #Include "vbcompat.bi"
	// Using FB
	// Dim Shared iActiveWindow As Integer = 0
	// Dim Shared MAXW as Integer
	// Dim Shared MAXH as Integer
	// Declare Sub MAINLOOP()
	// Declare Sub DoEvents()
	// Declare Sub RePaint()
	// Declare Sub CloseWindow()
	// #include "SCI.bi"
	#line 19 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	int32 RESULT$0;
	#line 19 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	__builtin_memset( &RESULT$0, 0, 4 );
	// #include "ElieDraw_Win.bas"
	// #include "ElieDraw_textbox.bas"
	// #include "ElieDraw_textblock.bas"
	// #include "ElieDraw_picturebox.bas"
	// #include "ElieDraw_console.bas"
	// #include once "drawingbox.bi"
	// #include once "button_obj.bi"
	// declare Function Test_CPC_resolution Alias "Test_CPC_resolution" (SCRX as integer, SCRY as integer) as integer
	// declare Function Cpcdos_Mouse Alias "Cpcdos_Mouse" () as integer
	// declare Function eliedraw_gui cdecl Alias "eliedraw_gui" (SX as integer, SY as integer, backgr as string) as integer
	// declare Function Set_Window_GUI_Value cdecl Alias "Set_Window_GUI_Value" (SX as integer, SY as integer) as integer
	// declare Function sci_list_screen cdecl Alias "sci_list_screen" (SX as integer, SY as integer) as string
	// declare Function Create_Window cdecl Alias "Create_Window" (title as String, name_win as string, typewin as integer, SX as integer , SY as integer, PX as integer, PY as integer, opacity as integer, WindowCR as integer, WindowCG as integer, WindowCB as integer) as integer
	// ''============================================================================================================================================================================================================================================================================================================================================================''
	// '' Variables ElieDraw for Cpcdos OS2.2
	// end function
	// ''============================================================================================================================================================================================================================================================================================================================================================''
	// '' Variables ElieDraw for Cpcdos OS2.2
	// end function
	// ''============================================================================================================================================================================================================================================================================================================================================================''
	// '' Background ElieDraw for Cpcdos OS2.2
	// end sub
	// ''============================================================================================================================================================================================================================================================================================================================================================''
	// '' GUI ElieDraw for Cpcdos OS2.2
	// ''============================================================================================================================================================================================================================================================================================================================================================''
	// '' Desktop ElieDraw for Cpcdos OS2.2
	// end sub
	// end function
	// end function
	// End Sub
	// End Sub
	// end function
	// End Sub
	// End Sub
	// ''============================================================================================================================================================================================================================================================================================================================================================''
	// '' Resolution ElieDraw for Cpcdos OS2.2
	// end function
	// end function
	// end function
	#line 343 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	label$1:;
	#line 343 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_ErrorSetFuncName( (uint8*)TMP$655$0 );
	#line 343 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_ErrorSetModName( (uint8*)TMP$653$0 );
#line 343 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
}

#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
static void _ZN8HCONTROLC1Ev( struct $8HCONTROL* THIS$1 )
#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
{
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	uint8* TMP$25$1;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	uint8* TMP$26$1;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	_ZN10fb_Object$C1Ev( (struct $10fb_Object$*)THIS$1 );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	__builtin_memset( (FBSTRING*)((uint8*)THIS$1 + 4), 0, 12 );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 16), 0, 4 );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 20), 0, 4 );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 24), 0, 4 );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 28), 0, 4 );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 32), 0, 4 );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 36), 0, 4 );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	__builtin_memset( (uint32*)((uint8*)THIS$1 + 40), 0, 4 );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 44), 0, 4 );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 48), 0, 4 );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	__builtin_memset( (int32*)((uint8*)THIS$1 + 52), 0, 4 );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	__builtin_memset( (FBSTRING*)((uint8*)THIS$1 + 56), 0, 12 );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	*(void**)THIS$1 = (void*)((uint8*)_ZTVN8HCONTROLE + 8);
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	uint8* vr$27 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi" );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	TMP$25$1 = vr$27;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	uint8* vr$28 = fb_ErrorSetFuncName( (uint8*)"" );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	TMP$26$1 = vr$28;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	label$4:;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	label$5:;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	fb_ErrorSetFuncName( (uint8*)TMP$26$1 );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	fb_ErrorSetModName( (uint8*)TMP$25$1 );
#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
}

#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
static void _ZN8HCONTROLaSERKS_( struct $8HCONTROL* THIS$1, struct $8HCONTROL* __FB_RHS__$1 )
#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
{
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	uint8* TMP$27$1;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	uint8* TMP$28$1;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	label$6:;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi" );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	TMP$27$1 = vr$0;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"" );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	TMP$28$1 = vr$1;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	FBSTRING* vr$6 = fb_StrAssign( (void*)((uint8*)THIS$1 + 4), -1, (void*)((uint8*)__FB_RHS__$1 + 4), -1, 0 );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	*(int32*)((uint8*)THIS$1 + 16) = *(int32*)((uint8*)__FB_RHS__$1 + 16);
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	*(int32*)((uint8*)THIS$1 + 20) = *(int32*)((uint8*)__FB_RHS__$1 + 20);
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	*(int32*)((uint8*)THIS$1 + 24) = *(int32*)((uint8*)__FB_RHS__$1 + 24);
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	*(int32*)((uint8*)THIS$1 + 28) = *(int32*)((uint8*)__FB_RHS__$1 + 28);
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	*(int32*)((uint8*)THIS$1 + 32) = *(int32*)((uint8*)__FB_RHS__$1 + 32);
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	*(int32*)((uint8*)THIS$1 + 36) = *(int32*)((uint8*)__FB_RHS__$1 + 36);
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	*(uint32*)((uint8*)THIS$1 + 40) = *(uint32*)((uint8*)__FB_RHS__$1 + 40);
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	*(int32*)((uint8*)THIS$1 + 44) = *(int32*)((uint8*)__FB_RHS__$1 + 44);
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	*(int32*)((uint8*)THIS$1 + 48) = *(int32*)((uint8*)__FB_RHS__$1 + 48);
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	*(int32*)((uint8*)THIS$1 + 52) = *(int32*)((uint8*)__FB_RHS__$1 + 52);
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	FBSTRING* vr$31 = fb_StrAssign( (void*)((uint8*)THIS$1 + 56), -1, (void*)((uint8*)__FB_RHS__$1 + 56), -1, 0 );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	label$7:;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	fb_ErrorSetFuncName( (uint8*)TMP$28$1 );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	fb_ErrorSetModName( (uint8*)TMP$27$1 );
#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
}

#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
static void _ZN8HCONTROLD1Ev( struct $8HCONTROL* THIS$1 )
#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
{
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	uint8* TMP$31$1;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	uint8* TMP$32$1;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	*(void**)THIS$1 = (void*)((uint8*)_ZTVN8HCONTROLE + 8);
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	uint8* vr$1 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi" );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	TMP$31$1 = vr$1;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	uint8* vr$2 = fb_ErrorSetFuncName( (uint8*)"" );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	TMP$32$1 = vr$2;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	label$10:;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	label$11:;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	fb_StrDelete( (FBSTRING*)((uint8*)THIS$1 + 56) );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	fb_StrDelete( (FBSTRING*)((uint8*)THIS$1 + 4) );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	fb_ErrorSetFuncName( (uint8*)TMP$32$1 );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
	fb_ErrorSetModName( (uint8*)TMP$31$1 );
#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_ctrl.bi"
}

#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
static void _ZN9CPCWINDOWaSERKS_( struct $9CPCWINDOW* THIS$1, struct $9CPCWINDOW* __FB_RHS__$1 )
#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
{
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* TMP$37$1;
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* TMP$38$1;
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$12:;
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$37$1 = vr$0;
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"" );
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$38$1 = vr$1;
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	_ZN8HCONTROLaSERKS_( (struct $8HCONTROL*)THIS$1, (struct $8HCONTROL*)__FB_RHS__$1 );
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(int32*)((uint8*)THIS$1 + 68) = *(int32*)((uint8*)__FB_RHS__$1 + 68);
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(int32*)((uint8*)THIS$1 + 72) = *(int32*)((uint8*)__FB_RHS__$1 + 72);
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(int32*)((uint8*)THIS$1 + 76) = *(int32*)((uint8*)__FB_RHS__$1 + 76);
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(int32*)((uint8*)THIS$1 + 80) = *(int32*)((uint8*)__FB_RHS__$1 + 80);
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(int32*)((uint8*)THIS$1 + 84) = *(int32*)((uint8*)__FB_RHS__$1 + 84);
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(boolean*)((uint8*)THIS$1 + 88) = *(boolean*)((uint8*)__FB_RHS__$1 + 88);
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(boolean*)((uint8*)THIS$1 + 89) = *(boolean*)((uint8*)__FB_RHS__$1 + 89);
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(boolean*)((uint8*)THIS$1 + 90) = *(boolean*)((uint8*)__FB_RHS__$1 + 90);
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(boolean*)((uint8*)THIS$1 + 91) = *(boolean*)((uint8*)__FB_RHS__$1 + 91);
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(boolean*)((uint8*)THIS$1 + 92) = *(boolean*)((uint8*)__FB_RHS__$1 + 92);
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(boolean*)((uint8*)THIS$1 + 93) = *(boolean*)((uint8*)__FB_RHS__$1 + 93);
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(boolean*)((uint8*)THIS$1 + 94) = *(boolean*)((uint8*)__FB_RHS__$1 + 94);
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(boolean*)((uint8*)THIS$1 + 95) = *(boolean*)((uint8*)__FB_RHS__$1 + 95);
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(uint32*)((uint8*)THIS$1 + 96) = *(uint32*)((uint8*)__FB_RHS__$1 + 96);
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(boolean*)((uint8*)THIS$1 + 100) = *(boolean*)((uint8*)__FB_RHS__$1 + 100);
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(boolean*)((uint8*)THIS$1 + 101) = *(boolean*)((uint8*)__FB_RHS__$1 + 101);
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$13:;
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	fb_ErrorSetFuncName( (uint8*)TMP$38$1 );
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	fb_ErrorSetModName( (uint8*)TMP$37$1 );
#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
}

#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
static void _ZN9CPCWINDOWD1Ev( struct $9CPCWINDOW* THIS$1 )
#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
{
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* TMP$41$1;
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* TMP$42$1;
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	*(void**)THIS$1 = (void*)((uint8*)_ZTVN9CPCWINDOWE + 8);
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* vr$1 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas" );
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$41$1 = vr$1;
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	uint8* vr$2 = fb_ErrorSetFuncName( (uint8*)"" );
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	TMP$42$1 = vr$2;
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$16:;
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	label$17:;
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	_ZN8HCONTROLD1Ev( (struct $8HCONTROL*)THIS$1 );
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	fb_ErrorSetFuncName( (uint8*)TMP$42$1 );
	#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
	fb_ErrorSetModName( (uint8*)TMP$41$1 );
#line 45 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_Win.bas"
}

#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
static void _ZN8TEXTBOXHaSERKS_( struct $8TEXTBOXH* THIS$1, struct $8TEXTBOXH* __FB_RHS__$1 )
#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
{
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	uint8* TMP$160$1;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	uint8* TMP$161$1;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	label$154:;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas" );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	TMP$160$1 = vr$0;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"" );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	TMP$161$1 = vr$1;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	_ZN8HCONTROLaSERKS_( (struct $8HCONTROL*)THIS$1, (struct $8HCONTROL*)__FB_RHS__$1 );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	*(int32*)((uint8*)THIS$1 + 68) = *(int32*)((uint8*)__FB_RHS__$1 + 68);
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	*(int32*)((uint8*)THIS$1 + 72) = *(int32*)((uint8*)__FB_RHS__$1 + 72);
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	*(int32*)((uint8*)THIS$1 + 76) = *(int32*)((uint8*)__FB_RHS__$1 + 76);
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	*(int32*)((uint8*)THIS$1 + 80) = *(int32*)((uint8*)__FB_RHS__$1 + 80);
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	*(int32*)((uint8*)THIS$1 + 84) = *(int32*)((uint8*)__FB_RHS__$1 + 84);
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	*(int32*)((uint8*)THIS$1 + 88) = *(int32*)((uint8*)__FB_RHS__$1 + 88);
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	*(boolean*)((uint8*)THIS$1 + 92) = *(boolean*)((uint8*)__FB_RHS__$1 + 92);
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	label$155:;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	fb_ErrorSetFuncName( (uint8*)TMP$161$1 );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
	fb_ErrorSetModName( (uint8*)TMP$160$1 );
#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textbox.bas"
}

#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
static void _ZN10TEXTBLOCKHaSERKS_( struct $10TEXTBLOCKH* THIS$1, struct $10TEXTBLOCKH* __FB_RHS__$1 )
#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
{
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	uint8* TMP$188$1;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	uint8* TMP$189$1;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	label$176:;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas" );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	TMP$188$1 = vr$0;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"" );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	TMP$189$1 = vr$1;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	_ZN8HCONTROLaSERKS_( (struct $8HCONTROL*)THIS$1, (struct $8HCONTROL*)__FB_RHS__$1 );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	*(int32*)((uint8*)THIS$1 + 68) = *(int32*)((uint8*)__FB_RHS__$1 + 68);
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	*(int32*)((uint8*)THIS$1 + 72) = *(int32*)((uint8*)__FB_RHS__$1 + 72);
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	*(int32*)((uint8*)THIS$1 + 76) = *(int32*)((uint8*)__FB_RHS__$1 + 76);
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	*(int32*)((uint8*)THIS$1 + 80) = *(int32*)((uint8*)__FB_RHS__$1 + 80);
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	*(int32*)((uint8*)THIS$1 + 84) = *(int32*)((uint8*)__FB_RHS__$1 + 84);
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	*(int32*)((uint8*)THIS$1 + 88) = *(int32*)((uint8*)__FB_RHS__$1 + 88);
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	*(boolean*)((uint8*)THIS$1 + 92) = *(boolean*)((uint8*)__FB_RHS__$1 + 92);
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	label$177:;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	fb_ErrorSetFuncName( (uint8*)TMP$189$1 );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
	fb_ErrorSetModName( (uint8*)TMP$188$1 );
#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_textblock.bas"
}

#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
static void _ZN11PICTUREBOXHaSERKS_( struct $11PICTUREBOXH* THIS$1, struct $11PICTUREBOXH* __FB_RHS__$1 )
#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
{
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	uint8* TMP$216$1;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	uint8* TMP$217$1;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	label$198:;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas" );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	TMP$216$1 = vr$0;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"" );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	TMP$217$1 = vr$1;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	_ZN8HCONTROLaSERKS_( (struct $8HCONTROL*)THIS$1, (struct $8HCONTROL*)__FB_RHS__$1 );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	*(int32*)((uint8*)THIS$1 + 68) = *(int32*)((uint8*)__FB_RHS__$1 + 68);
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	*(int32*)((uint8*)THIS$1 + 72) = *(int32*)((uint8*)__FB_RHS__$1 + 72);
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	*(int32*)((uint8*)THIS$1 + 76) = *(int32*)((uint8*)__FB_RHS__$1 + 76);
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	*(int32*)((uint8*)THIS$1 + 80) = *(int32*)((uint8*)__FB_RHS__$1 + 80);
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	*(int32*)((uint8*)THIS$1 + 84) = *(int32*)((uint8*)__FB_RHS__$1 + 84);
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	*(int32*)((uint8*)THIS$1 + 88) = *(int32*)((uint8*)__FB_RHS__$1 + 88);
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	*(boolean*)((uint8*)THIS$1 + 92) = *(boolean*)((uint8*)__FB_RHS__$1 + 92);
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	label$199:;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	fb_ErrorSetFuncName( (uint8*)TMP$217$1 );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
	fb_ErrorSetModName( (uint8*)TMP$216$1 );
#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_picturebox.bas"
}

#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
static void _ZN8CONSOLEHaSERKS_( struct $8CONSOLEH* THIS$1, struct $8CONSOLEH* __FB_RHS__$1 )
#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
{
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	uint8* TMP$247$1;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	uint8* TMP$248$1;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	label$222:;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas" );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	TMP$247$1 = vr$0;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"" );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	TMP$248$1 = vr$1;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	_ZN8HCONTROLaSERKS_( (struct $8HCONTROL*)THIS$1, (struct $8HCONTROL*)__FB_RHS__$1 );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	*(int32*)((uint8*)THIS$1 + 68) = *(int32*)((uint8*)__FB_RHS__$1 + 68);
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	*(int32*)((uint8*)THIS$1 + 72) = *(int32*)((uint8*)__FB_RHS__$1 + 72);
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	*(int32*)((uint8*)THIS$1 + 76) = *(int32*)((uint8*)__FB_RHS__$1 + 76);
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	*(int32*)((uint8*)THIS$1 + 80) = *(int32*)((uint8*)__FB_RHS__$1 + 80);
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	*(int32*)((uint8*)THIS$1 + 84) = *(int32*)((uint8*)__FB_RHS__$1 + 84);
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	*(int32*)((uint8*)THIS$1 + 88) = *(int32*)((uint8*)__FB_RHS__$1 + 88);
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	*(boolean*)((uint8*)THIS$1 + 92) = *(boolean*)((uint8*)__FB_RHS__$1 + 92);
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	label$223:;
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	fb_ErrorSetFuncName( (uint8*)TMP$248$1 );
	#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
	fb_ErrorSetModName( (uint8*)TMP$247$1 );
#line 12 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/ElieDraw_console.bas"
}

#line 9 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
static void _ZN6CANVAHaSERKS_( struct $6CANVAH* THIS$1, struct $6CANVAH* __FB_RHS__$1 )
#line 9 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
{
	#line 9 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	uint8* TMP$275$1;
	#line 9 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	uint8* TMP$276$1;
	#line 9 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	label$244:;
	#line 9 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi" );
	#line 9 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	TMP$275$1 = vr$0;
	#line 9 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"" );
	#line 9 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	TMP$276$1 = vr$1;
	#line 9 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	_ZN8HCONTROLaSERKS_( (struct $8HCONTROL*)THIS$1, (struct $8HCONTROL*)__FB_RHS__$1 );
	#line 9 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	*(int32*)((uint8*)THIS$1 + 68) = *(int32*)((uint8*)__FB_RHS__$1 + 68);
	#line 9 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	*(int32*)((uint8*)THIS$1 + 72) = *(int32*)((uint8*)__FB_RHS__$1 + 72);
	#line 9 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	*(int32*)((uint8*)THIS$1 + 76) = *(int32*)((uint8*)__FB_RHS__$1 + 76);
	#line 9 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	*(int32*)((uint8*)THIS$1 + 80) = *(int32*)((uint8*)__FB_RHS__$1 + 80);
	#line 9 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	*(int32*)((uint8*)THIS$1 + 84) = *(int32*)((uint8*)__FB_RHS__$1 + 84);
	#line 9 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	*(int32*)((uint8*)THIS$1 + 88) = *(int32*)((uint8*)__FB_RHS__$1 + 88);
	#line 9 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	*(boolean*)((uint8*)THIS$1 + 92) = *(boolean*)((uint8*)__FB_RHS__$1 + 92);
	#line 9 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	label$245:;
	#line 9 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	fb_ErrorSetFuncName( (uint8*)TMP$276$1 );
	#line 9 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
	fb_ErrorSetModName( (uint8*)TMP$275$1 );
#line 9 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/drawingbox.bi"
}

#line 9 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
static void _ZN7BUTTONHaSERKS_( struct $7BUTTONH* THIS$1, struct $7BUTTONH* __FB_RHS__$1 )
#line 9 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
{
	#line 9 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	uint8* TMP$302$1;
	#line 9 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	uint8* TMP$303$1;
	#line 9 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	label$268:;
	#line 9 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi" );
	#line 9 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	TMP$302$1 = vr$0;
	#line 9 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"" );
	#line 9 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	TMP$303$1 = vr$1;
	#line 9 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	_ZN8HCONTROLaSERKS_( (struct $8HCONTROL*)THIS$1, (struct $8HCONTROL*)__FB_RHS__$1 );
	#line 9 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	*(int32*)((uint8*)THIS$1 + 68) = *(int32*)((uint8*)__FB_RHS__$1 + 68);
	#line 9 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	*(int32*)((uint8*)THIS$1 + 72) = *(int32*)((uint8*)__FB_RHS__$1 + 72);
	#line 9 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	*(int32*)((uint8*)THIS$1 + 76) = *(int32*)((uint8*)__FB_RHS__$1 + 76);
	#line 9 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	*(int32*)((uint8*)THIS$1 + 80) = *(int32*)((uint8*)__FB_RHS__$1 + 80);
	#line 9 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	*(int32*)((uint8*)THIS$1 + 84) = *(int32*)((uint8*)__FB_RHS__$1 + 84);
	#line 9 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	*(int32*)((uint8*)THIS$1 + 88) = *(int32*)((uint8*)__FB_RHS__$1 + 88);
	#line 9 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	*(boolean*)((uint8*)THIS$1 + 92) = *(boolean*)((uint8*)__FB_RHS__$1 + 92);
	#line 9 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	label$269:;
	#line 9 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	fb_ErrorSetFuncName( (uint8*)TMP$303$1 );
	#line 9 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
	fb_ErrorSetModName( (uint8*)TMP$302$1 );
#line 9 "/home/pi/cpcdos/OS2.2/Cpcdos/FBGUI/button_obj.bi"
}

#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
__attribute__(( constructor )) static void _GLOBAL__I( void )
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
{
	#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* TMP$656$1;
	#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* TMP$658$1;
	#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	label$651:;
	#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
	#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	TMP$656$1 = vr$0;
	#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"LABEL$650" );
	#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	TMP$658$1 = vr$1;
	#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	_ZN5XFONT9INTERFACEC1Ev( &FONT1$ );
	#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	label$652:;
	#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_ErrorSetFuncName( (uint8*)TMP$658$1 );
	#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_ErrorSetModName( (uint8*)TMP$656$1 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
}

#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
__attribute__(( destructor )) static void _GLOBAL__D( void )
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
{
	#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* TMP$659$1;
	#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* TMP$661$1;
	#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	label$654:;
	#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"OS2.2/Cpcdos/FBGUI/GUI.BAS" );
	#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	TMP$659$1 = vr$0;
	#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"LABEL$653" );
	#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	TMP$661$1 = vr$1;
	#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	_ZN5XFONT9INTERFACED1Ev( &FONT1$ );
	#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	label$655:;
	#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_ErrorSetFuncName( (uint8*)TMP$661$1 );
	#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
	fb_ErrorSetModName( (uint8*)TMP$659$1 );
#line 355 "OS2.2/Cpcdos/FBGUI/GUI.BAS"
}
