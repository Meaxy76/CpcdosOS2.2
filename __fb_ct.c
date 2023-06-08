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
#line 1 "__fb_ct.inf.bas"
uint8* fb_ErrorSetModName( uint8* );
#line 1 "__fb_ct.inf.bas"
uint8* fb_ErrorSetFuncName( uint8* );
#line 1 "__fb_ct.inf.bas"
static void fb_ctor____fb_ct( void ) __attribute__(( constructor ));

#line 1 "__fb_ct.inf.bas"
__attribute__(( constructor )) static void fb_ctor____fb_ct( void )
#line 1 "__fb_ct.inf.bas"
{
	#line 1 "__fb_ct.inf.bas"
	uint8* TMP$3$0;
	#line 1 "__fb_ct.inf.bas"
	uint8* TMP$5$0;
	#line 1 "__fb_ct.inf.bas"
	label$0:;
	#line 1 "__fb_ct.inf.bas"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"__fb_ct.inf.bas" );
	#line 1 "__fb_ct.inf.bas"
	TMP$3$0 = vr$0;
	#line 1 "__fb_ct.inf.bas"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"{MODLEVEL}" );
	#line 1 "__fb_ct.inf.bas"
	TMP$5$0 = vr$1;
	#line 1 "__fb_ct.inf.bas"
	label$1:;
	#line 1 "__fb_ct.inf.bas"
	fb_ErrorSetFuncName( (uint8*)TMP$5$0 );
	#line 1 "__fb_ct.inf.bas"
	fb_ErrorSetModName( (uint8*)TMP$3$0 );
#line 1 "__fb_ct.inf.bas"
}

static const char __attribute__((used, section(".fbctinf"))) __fbctinf[] = "-l\0pthread\0-l\0fbgfx\0-l\0png\0-l\0X11\0-l\0Xext\0-l\0Xpm\0-l\0Xrandr\0-l\0Xrender\0-l\0cpcdos\0-l\0xfont\0-l\0z\0-p\0/usr/local/lib/freebasic/linux-arm\0-p\0/usr/X11R6/lib\0-gfx";
