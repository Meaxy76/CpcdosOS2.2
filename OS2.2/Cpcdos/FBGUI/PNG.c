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
struct $16__FB_ARRAYDIMTB$ {
	int32 ELEMENTS;
	int32 LBOUND;
	int32 UBOUND;
};
#define __FB_STATIC_ASSERT( expr ) extern int __$fb_structsizecheck[(expr) ? 1 : -1]
#line 24 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
__FB_STATIC_ASSERT( sizeof( struct $16__FB_ARRAYDIMTB$ ) == 12 );
struct $N2FB11_OLD_HEADERE {
	uint8 __fb_struct_body[4];
};
#line 43 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
__FB_STATIC_ASSERT( sizeof( struct $N2FB11_OLD_HEADERE ) == 4 );
struct $N2FB5IMAGEE {
	union {
		struct $N2FB11_OLD_HEADERE OLD;
		uint32 TYPE __attribute__((packed, aligned(1)));
	};
	int32 BPP __attribute__((packed, aligned(1)));
	uint32 WIDTH __attribute__((packed, aligned(1)));
	uint32 HEIGHT __attribute__((packed, aligned(1)));
	uint32 PITCH __attribute__((packed, aligned(1)));
	uint8 _RESERVED[12];
};
#line 43 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
__FB_STATIC_ASSERT( sizeof( struct $N2FB5IMAGEE ) == 32 );
#line 65 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
typedef void (*tmp$2)( void*, uint8* );
#line 21 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
uint8* fb_ErrorSetModName( uint8* );
#line 21 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
uint8* fb_ErrorSetFuncName( uint8* );
#line 21 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
void fb_GfxPset( void*, float, float, uint32, int32, int32 );
#line 21 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
void* fb_GfxImageCreate( int32, int32, uint32, int32, int32 );
#line 21 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
void fb_GfxImageConvertRow( void*, int32, void*, int32, int32, int32 );
#line 21 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
void* fb_NullPtrChk( void*, int32, uint8* );
#line 21 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
void* calloc( uint32, uint32 );
#line 21 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
void free( void* );
#line 21 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
void fb_PrintString( int32, FBSTRING*, int32 );
#line 21 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
FBSTRING* fb_StrInit( void*, int32, void*, int32, int32 );
#line 21 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
void fb_StrDelete( FBSTRING* );
#line 21 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
FBSTRING* fb_StrConcat( FBSTRING*, void*, int32, void*, int32 );
#line 21 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
FBSTRING* fb_StrAllocTempDescZEx( uint8*, int32 );
#line 21 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
void fb_End( int32 );
#line 21 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
static void fb_ctor__PNG( void ) __attribute__(( constructor ));
#line 21 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
void* fopen( uint8*, uint8* );
#line 21 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
int32 fclose( void* );
#line 21 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
uint32 fread( void*, uint32, uint32, void* );
#line 21 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
void png_set_sig_bytes( void*, int32 );
#line 21 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
int32 png_sig_cmp( uint8*, uint32, uint32 );
#line 21 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
void* png_create_read_struct( uint8*, void*, tmp$2, tmp$2 );
#line 21 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
void* png_create_info_struct( void* );
#line 21 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
void png_read_info( void*, void* );
#line 21 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
void png_read_update_info( void*, void* );
#line 21 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
void png_read_row( void*, uint8*, uint8* );
#line 21 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
void png_read_end( void*, void* );
#line 21 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
void png_destroy_read_struct( void**, void**, void** );
#line 21 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
void png_init_io( void*, void* );
#line 21 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
uint32 png_get_rowbytes( void*, void* );
#line 21 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
uint8 png_get_channels( void*, void* );
#line 21 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
uint32 png_get_image_width( void*, void* );
#line 21 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
uint32 png_get_image_height( void*, void* );
#line 21 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
uint8 png_get_bit_depth( void*, void* );
#line 21 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
uint8 png_get_color_type( void*, void* );
#line 21 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
void* memcpy( void*, void*, uint32 );
#line 21 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
static void LIBPNG_ERROR_CALLBACK( void*, uint8* );

#line 23 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
void* CHARGER_PNG( FBSTRING* FICHIER$1, int32 BITS$1, int32 PRIO$1, int32* HAUTEUR$1, int32* LARGEUR$1 )
#line 23 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
{
	#line 23 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	uint8* TMP$84$1;
	#line 23 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	uint8* TMP$86$1;
	#line 23 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	void* fb$result$1;
	#line 23 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	__builtin_memset( &fb$result$1, 0, 4 );
	#line 23 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	uint8* vr$1 = fb_ErrorSetModName( (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
	#line 23 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	TMP$84$1 = vr$1;
	#line 23 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	uint8* vr$2 = fb_ErrorSetFuncName( (uint8*)"CHARGER_PNG" );
	#line 23 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	TMP$86$1 = vr$2;
	#line 23 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	label$4:;
	// 	dim as ubyte header(0 to 7)
	#line 24 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	uint8 HEADER$1[8];
	#line 24 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	__builtin_memset( (uint8*)HEADER$1, 0, 8 );
	struct $8FBARRAY1IhE {
		uint8* DATA;
		uint8* PTR;
		int32 SIZE;
		int32 ELEMENT_LEN;
		int32 DIMENSIONS;
		struct $16__FB_ARRAYDIMTB$ DIMTB[1];
	};
	#line 24 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1IhE ) == 32 );
	#line 24 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	struct $8FBARRAY1IhE tmp$28$1;
	#line 24 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	*(uint8**)&tmp$28$1 = (uint8*)HEADER$1;
	#line 24 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	*(uint8**)((uint8*)&tmp$28$1 + 4) = (uint8*)HEADER$1;
	#line 24 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	*(int32*)((uint8*)&tmp$28$1 + 8) = 8;
	#line 24 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	*(int32*)((uint8*)&tmp$28$1 + 12) = 1;
	#line 24 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	*(int32*)((uint8*)&tmp$28$1 + 16) = 1;
	#line 24 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	*(int32*)((uint8*)&tmp$28$1 + 20) = 8;
	#line 24 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	*(int32*)((uint8*)&tmp$28$1 + 24) = 0;
	#line 24 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	*(int32*)((uint8*)&tmp$28$1 + 28) = 7;
	// 	dim as FILE ptr PtrFichier = fopen( Fichier, "rb" )
	#line 26 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	void* PTRFICHIER$1;
	#line 26 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	void* vr$7 = fopen( (uint8*)*(uint8**)FICHIER$1, (uint8*)"rb" );
	#line 26 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	PTRFICHIER$1 = vr$7;
	// 	
	// 	
	// 	dim as integer profondeurbits, canaux, profondeurPixelleuumeuhmeuuuh, typecouleur, rowbytes
	#line 29 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	int32 PROFONDEURBITS$1;
	#line 29 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	__builtin_memset( &PROFONDEURBITS$1, 0, 4 );
	#line 29 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	int32 CANAUX$1;
	#line 29 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	__builtin_memset( &CANAUX$1, 0, 4 );
	#line 29 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	int32 PROFONDEURPIXELLEUUMEUHMEUUUH$1;
	#line 29 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	__builtin_memset( &PROFONDEURPIXELLEUUMEUHMEUUUH$1, 0, 4 );
	#line 29 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	int32 TYPECOULEUR$1;
	#line 29 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	__builtin_memset( &TYPECOULEUR$1, 0, 4 );
	#line 29 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	int32 ROWBYTES$1;
	#line 29 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	__builtin_memset( &ROWBYTES$1, 0, 4 );
	// 	
	// 	Dim PNG_Largeur as integer
	#line 31 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	int32 PNG_LARGEUR$1;
	#line 31 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	__builtin_memset( &PNG_LARGEUR$1, 0, 4 );
	// 	Dim PNG_Hauteur as integer
	#line 32 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	int32 PNG_HAUTEUR$1;
	#line 32 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	__builtin_memset( &PNG_HAUTEUR$1, 0, 4 );
	// 	Dim TestR as integer
	#line 33 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	int32 TESTR$1;
	#line 33 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	__builtin_memset( &TESTR$1, 0, 4 );
	// 	Dim TestV as integer
	#line 34 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	int32 TESTV$1;
	#line 34 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	__builtin_memset( &TESTV$1, 0, 4 );
	// 	Dim TestB as integer
	#line 35 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	int32 TESTB$1;
	#line 35 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	__builtin_memset( &TESTB$1, 0, 4 );
	// 	Dim TestA as integer
	#line 36 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	int32 TESTA$1;
	#line 36 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	__builtin_memset( &TESTA$1, 0, 4 );
	// 	Dim pitch as integer
	#line 37 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	int32 PITCH$1;
	#line 37 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	__builtin_memset( &PITCH$1, 0, 4 );
	// 	Dim PassageDoEvents as integer
	#line 38 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	int32 PASSAGEDOEVENTS$1;
	#line 38 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	__builtin_memset( &PASSAGEDOEVENTS$1, 0, 4 );
	// 	Dim Message_erreur as string
	#line 39 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	FBSTRING MESSAGE_ERREUR$1;
	#line 39 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	__builtin_memset( &MESSAGE_ERREUR$1, 0, 12 );
	// 	Dim RetourVAR as string
	#line 40 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	FBSTRING RETOURVAR$1;
	#line 40 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	__builtin_memset( &RETOURVAR$1, 0, 12 );
	// 	
	// 	dim RetourVAR_PNG as String = ""
	#line 42 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	FBSTRING RETOURVAR_PNG$1;
	#line 42 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	FBSTRING* vr$24 = fb_StrInit( (void*)&RETOURVAR_PNG$1, -1, (void*)"", 1, 0 );
	// 	dim imgPNG as FB.IMAGE ptr
	#line 43 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	struct $N2FB5IMAGEE* IMGPNG$1;
	#line 43 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	__builtin_memset( &IMGPNG$1, 0, 4 );
	// 	
	// 	
	// 	
	// 	if( PtrFichier = NULL  [Macro Expansion: 0 ]  ) then
	#line 49 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	if( PTRFICHIER$1 != (void*)0u ) goto label$7;
	{
		// 		' Fichier introuvable !	
		// PRINT "ERROR"
		#line 51 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		FBSTRING* vr$26 = fb_StrAllocTempDescZEx( (uint8*)"ERROR", 5 );
		#line 51 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		fb_PrintString( 0, (FBSTRING*)vr$26, 1 );
		// 		Exit function
		#line 52 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		fb_StrDelete( (FBSTRING*)&RETOURVAR_PNG$1 );
		#line 52 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		fb_StrDelete( (FBSTRING*)&RETOURVAR$1 );
		#line 52 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		fb_StrDelete( (FBSTRING*)&MESSAGE_ERREUR$1 );
		#line 52 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		goto label$5;
		// 	end if
	}
	#line 53 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	label$7:;
	#line 53 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	label$6:;
	// 	
	// 	if( fread( @header(0), 1, 8, PtrFichier ) <> 8 ) then ' 17-02-2017 : A revoir sur la fonction fread() pour utiliser celui de CPinti Core
	#line 55 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	uint32 vr$31 = fread( (void*)HEADER$1, 1u, 8u, PTRFICHIER$1 );
	#line 55 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	if( vr$31 == 8u ) goto label$9;
	{
		// 		fclose(PtrFichier)
		#line 56 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		fclose( PTRFICHIER$1 );
		// 		Exit function
		#line 57 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		fb_StrDelete( (FBSTRING*)&RETOURVAR_PNG$1 );
		#line 57 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		fb_StrDelete( (FBSTRING*)&RETOURVAR$1 );
		#line 57 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		fb_StrDelete( (FBSTRING*)&MESSAGE_ERREUR$1 );
		#line 57 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		goto label$5;
		// 	end if
	}
	#line 58 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	label$9:;
	#line 58 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	label$8:;
	// 	if(png_sig_cmp( @header(0), 0, 8 )) then
	#line 60 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	int32 vr$36 = png_sig_cmp( (uint8*)HEADER$1, 0u, 8u );
	#line 60 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	if( vr$36 == 0 ) goto label$11;
	{
		// 		fclose(PtrFichier)
		#line 61 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		fclose( PTRFICHIER$1 );
		// 		Exit function
		#line 62 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		fb_StrDelete( (FBSTRING*)&RETOURVAR_PNG$1 );
		#line 62 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		fb_StrDelete( (FBSTRING*)&RETOURVAR$1 );
		#line 62 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		fb_StrDelete( (FBSTRING*)&MESSAGE_ERREUR$1 );
		#line 62 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		goto label$5;
		// 	end if
	}
	#line 63 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	label$11:;
	#line 63 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	label$10:;
	// 	dim as png_structp png = png_create_read_struct( PNG_LIBPNG_VER_STRING, [Macro Expansion: "1.6.18" ] , NULL, [Macro Expansion: 0 ] , @libpng_error_callback, NULL  [Macro Expansion: 0 ]  )
	#line 65 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	void* PNG$1;
	#line 65 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	void* vr$40 = png_create_read_struct( (uint8*)"1.6.18", (void*)0u, (tmp$2)&LIBPNG_ERROR_CALLBACK, (tmp$2)0u );
	#line 65 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	PNG$1 = vr$40;
	// 	if(png = NULL) [Macro Expansion: 0 ] ) then
	#line 66 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	if( PNG$1 != (void*)0u ) goto label$13;
	{
		// fclose(PtrFichier)
		#line 67 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		fclose( PTRFICHIER$1 );
		// 		Exit function
		#line 68 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		fb_StrDelete( (FBSTRING*)&RETOURVAR_PNG$1 );
		#line 68 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		fb_StrDelete( (FBSTRING*)&RETOURVAR$1 );
		#line 68 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		fb_StrDelete( (FBSTRING*)&MESSAGE_ERREUR$1 );
		#line 68 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		goto label$5;
		// 	end if
	}
	#line 69 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	label$13:;
	#line 69 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	label$12:;
	// 	
	// 	dim info as png_infop = png_create_info_struct(png)
	#line 71 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	void* INFO$1;
	#line 71 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	void* vr$44 = png_create_info_struct( (void*)PNG$1 );
	#line 71 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	INFO$1 = vr$44;
	// 	if(info = NULL) [Macro Expansion: 0 ] ) then
	#line 72 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	if( INFO$1 != (void*)0u ) goto label$15;
	{
		// fclose(PtrFichier)
		#line 73 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		fclose( PTRFICHIER$1 );
		// 		Exit function
		#line 74 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		fb_StrDelete( (FBSTRING*)&RETOURVAR_PNG$1 );
		#line 74 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		fb_StrDelete( (FBSTRING*)&RETOURVAR$1 );
		#line 74 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		fb_StrDelete( (FBSTRING*)&MESSAGE_ERREUR$1 );
		#line 74 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		goto label$5;
		// 	end if
	}
	#line 75 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	label$15:;
	#line 75 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	label$14:;
	// 	
	// 	png_init_io( png, PtrFichier )
	#line 78 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	png_init_io( PNG$1, PTRFICHIER$1 );
	// 	png_set_sig_bytes( png, 8 )
	#line 79 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	png_set_sig_bytes( PNG$1, 8 );
	// 	png_read_info( png, info )
	#line 81 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	png_read_info( PNG$1, INFO$1 );
	// 	Dim debbug as boolean
	#line 83 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	boolean DEBBUG$1;
	#line 83 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	__builtin_memset( &DEBBUG$1, 0, 1 );
	// 	
	// 	largeur = png_get_image_width( png, info )
	#line 85 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	uint32 vr$49 = png_get_image_width( (void*)PNG$1, (void*)INFO$1 );
	#line 85 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	*LARGEUR$1 = (int32)vr$49;
	// 	hauteur = png_get_image_height( png, info )
	#line 86 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	uint32 vr$51 = png_get_image_height( (void*)PNG$1, (void*)INFO$1 );
	#line 86 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	*HAUTEUR$1 = (int32)vr$51;
	// 	
	// 	
	// 	profondeurbits = png_get_bit_depth( png, info )
	#line 89 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	uint8 vr$53 = png_get_bit_depth( (void*)PNG$1, (void*)INFO$1 );
	#line 89 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	PROFONDEURBITS$1 = (int32)vr$53;
	// 	canaux = png_get_channels( png, info )
	#line 90 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	uint8 vr$55 = png_get_channels( (void*)PNG$1, (void*)INFO$1 );
	#line 90 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	CANAUX$1 = (int32)vr$55;
	// 	profondeurPixelleuumeuhmeuuuh = profondeurbits * canaux
	#line 91 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	PROFONDEURPIXELLEUUMEUHMEUUUH$1 = PROFONDEURBITS$1 * CANAUX$1;
	// 	typecouleur = png_get_color_type( png, info )
	#line 92 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	uint8 vr$58 = png_get_color_type( (void*)PNG$1, (void*)INFO$1 );
	#line 92 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	TYPECOULEUR$1 = (int32)vr$58;
	// 	select case( typecouleur )
	{
		// 		case PNG_COLOR_TYPE_RGB
		#line 95 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		if( TYPECOULEUR$1 != 2 ) goto label$17;
		#line 95 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		label$18:;
		{
			// 		case PNG_COLOR_TYPE_RGB_ALPHA
		}
		#line 97 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		goto label$16;
		#line 97 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		label$17:;
		#line 97 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		if( TYPECOULEUR$1 != 6 ) goto label$19;
		#line 97 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		label$20:;
		{
			// 		case PNG_COLOR_TYPE_GRAY
		}
		#line 99 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		goto label$16;
		#line 99 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		label$19:;
		#line 99 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		if( TYPECOULEUR$1 != 0 ) goto label$21;
		#line 99 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		label$22:;
		{
			// 		case else
		}
		#line 101 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		goto label$16;
		#line 101 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		label$21:;
		{
			// 			
			// 			return null [Macro Expansion: 0 ]
			#line 104 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
			fb$result$1 = (void*)0u;
			#line 104 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
			fb_StrDelete( (FBSTRING*)&RETOURVAR_PNG$1 );
			#line 104 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
			fb_StrDelete( (FBSTRING*)&RETOURVAR$1 );
			#line 104 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
			fb_StrDelete( (FBSTRING*)&MESSAGE_ERREUR$1 );
			#line 104 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
			goto label$5;
			// 	end select
		}
		#line 105 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		label$23:;
		#line 105 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		label$16:;
	}
	// 		imgPNG = imagecreate( largeur, hauteur, RGBA(0, 0, 0, 255) [Macro Expansion: ((cuint(0) shl 16) or (cuint(0) shl 8) or cuint(0) or (cuint(255) shl 24)) ] )
	#line 109 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	void* vr$65 = fb_GfxImageCreate( *(int32*)LARGEUR$1, *(int32*)HAUTEUR$1, 4278190080u, 0, 0 );
	#line 109 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	IMGPNG$1 = (struct $N2FB5IMAGEE*)vr$65;
	// 		dim as ubyte ptr dst = cptr( ubyte ptr, imgPNG + 1 )
	#line 111 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	uint8* DST$1;
	#line 111 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	DST$1 = (uint8*)((uint8*)IMGPNG$1 + 32);
	// 		png_read_update_info( png, info )
	#line 113 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	png_read_update_info( PNG$1, INFO$1 );
	// 		rowbytes = png_get_rowbytes( png, info )
	#line 115 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	uint32 vr$67 = png_get_rowbytes( (void*)PNG$1, (void*)INFO$1 );
	#line 115 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	ROWBYTES$1 = (int32)vr$67;
	// 	
	// 		dim as ubyte ptr src = callocate( rowbytes )
	#line 118 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	uint8* SRC$1;
	#line 118 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	void* vr$68 = calloc( (uint32)ROWBYTES$1, 1u );
	#line 118 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	SRC$1 = (uint8*)vr$68;
	// 		for y as integer = 0 to hauteur-1
	{
		#line 124 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		int32 Y$2;
		#line 124 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		Y$2 = 0;
		#line 124 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		int32 TMP$32$2;
		#line 124 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		TMP$32$2 = *HAUTEUR$1 + -1;
		#line 124 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		goto label$24;
		#line 124 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		label$27:;
		{
			// 		
			// 			' Forcer le contexte switching
			// 			PassageDoEvents += 1
			#line 127 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
			PASSAGEDOEVENTS$1 = PASSAGEDOEVENTS$1 + 1;
			// 			if PassageDoEvents > (hauteur*largeur / 6) Then
			#line 128 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
			if( (double)PASSAGEDOEVENTS$1 <= ((double)(*HAUTEUR$1 * *LARGEUR$1) / 0x1.8p+2) ) goto label$29;
			{
				// 				PassageDoEvents = 0
				#line 129 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
				PASSAGEDOEVENTS$1 = 0;
				// 			end if
			}
			#line 130 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
			label$29:;
			#line 130 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
			label$28:;
			// 		
			// 			png_read_row( png, src, NULL  [Macro Expansion: 0 ]  )
			#line 132 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
			png_read_row( PNG$1, SRC$1, (uint8*)0u );
			// 			select case(typecouleur)
			{
				// 			case PNG_COLOR_TYPE_RGB
				#line 136 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
				if( TYPECOULEUR$1 != 2 ) goto label$31;
				#line 136 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
				label$32:;
				{
					#line 136 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
					struct $N2FB5IMAGEE* TMP$33$5;
					// 				imageconvertrow( src, 24, dst, Bits, largeur )
					#line 137 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
					fb_GfxImageConvertRow( (void*)SRC$1, 24, (void*)DST$1, BITS$1, *(int32*)LARGEUR$1, 1 );
					// 				dst += imgPNG->pitch
					#line 138 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
					TMP$33$5 = IMGPNG$1;
					#line 138 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
					void* vr$79 = fb_NullPtrChk( (void*)TMP$33$5, 138, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
					#line 138 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
					if( vr$79 == 0 ) goto label$85;
					#line 138 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
					goto *vr$79;
					#line 138 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
					label$85:;
					#line 138 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
					DST$1 = (uint8*)(DST$1 + *(int32*)((uint8*)TMP$33$5 + 16));
					// 				
					// 			case PNG_COLOR_TYPE_RGB_ALPHA
				}
				#line 140 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
				goto label$30;
				#line 140 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
				label$31:;
				#line 140 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
				if( TYPECOULEUR$1 != 6 ) goto label$33;
				#line 140 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
				label$34:;
				{
					// 				select case(Bits)
					{
						// 				case 32
						#line 143 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
						if( BITS$1 != 32 ) goto label$36;
						#line 143 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
						label$37:;
						{
							#line 143 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
							struct $N2FB5IMAGEE* TMP$44$7;
							// 					for i as integer = 0 to rowbytes-1 step 4
							{
								#line 145 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								int32 I$8;
								#line 145 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								I$8 = 0;
								#line 145 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								int32 TMP$34$8;
								#line 145 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								TMP$34$8 = ROWBYTES$1 + -1;
								#line 145 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								goto label$38;
								#line 145 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								label$41:;
								{
									#line 145 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									uint8* TMP$35$9;
									#line 145 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									uint8* TMP$36$9;
									#line 145 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									uint8* TMP$37$9;
									#line 145 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									uint8* TMP$38$9;
									#line 145 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									uint8* TMP$39$9;
									#line 145 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									uint8* TMP$40$9;
									#line 145 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									uint8* TMP$41$9;
									#line 145 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									uint8* TMP$42$9;
									// 						dst[0] = src[i+2]
									#line 146 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									TMP$36$9 = SRC$1;
									#line 146 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									void* vr$83 = fb_NullPtrChk( (void*)TMP$36$9, 146, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
									#line 146 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									if( vr$83 == 0 ) goto label$86;
									#line 146 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									goto *vr$83;
									#line 146 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									label$86:;
									#line 146 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									TMP$35$9 = DST$1;
									#line 146 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									void* vr$85 = fb_NullPtrChk( (void*)TMP$35$9, 146, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
									#line 146 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									if( vr$85 == 0 ) goto label$87;
									#line 146 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									goto *vr$85;
									#line 146 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									label$87:;
									#line 146 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									*TMP$35$9 = *(uint8*)((uint8*)(TMP$36$9 + I$8) + 2);
									// 						dst[1] = src[i+1]
									#line 147 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									TMP$38$9 = SRC$1;
									#line 147 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									void* vr$87 = fb_NullPtrChk( (void*)TMP$38$9, 147, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
									#line 147 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									if( vr$87 == 0 ) goto label$88;
									#line 147 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									goto *vr$87;
									#line 147 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									label$88:;
									#line 147 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									TMP$37$9 = DST$1;
									#line 147 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									void* vr$89 = fb_NullPtrChk( (void*)TMP$37$9, 147, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
									#line 147 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									if( vr$89 == 0 ) goto label$89;
									#line 147 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									goto *vr$89;
									#line 147 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									label$89:;
									#line 147 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									*(uint8*)(TMP$37$9 + 1) = *(uint8*)((uint8*)(TMP$38$9 + I$8) + 1);
									// 						dst[2] = src[i+0]
									#line 148 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									TMP$40$9 = SRC$1;
									#line 148 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									void* vr$91 = fb_NullPtrChk( (void*)TMP$40$9, 148, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
									#line 148 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									if( vr$91 == 0 ) goto label$90;
									#line 148 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									goto *vr$91;
									#line 148 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									label$90:;
									#line 148 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									TMP$39$9 = DST$1;
									#line 148 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									void* vr$93 = fb_NullPtrChk( (void*)TMP$39$9, 148, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
									#line 148 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									if( vr$93 == 0 ) goto label$91;
									#line 148 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									goto *vr$93;
									#line 148 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									label$91:;
									#line 148 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									*(uint8*)(TMP$39$9 + 2) = *(uint8*)(TMP$40$9 + I$8);
									// 						dst[3] = src[i+3]
									#line 149 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									TMP$42$9 = SRC$1;
									#line 149 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									void* vr$95 = fb_NullPtrChk( (void*)TMP$42$9, 149, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
									#line 149 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									if( vr$95 == 0 ) goto label$92;
									#line 149 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									goto *vr$95;
									#line 149 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									label$92:;
									#line 149 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									TMP$41$9 = DST$1;
									#line 149 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									void* vr$97 = fb_NullPtrChk( (void*)TMP$41$9, 149, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
									#line 149 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									if( vr$97 == 0 ) goto label$93;
									#line 149 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									goto *vr$97;
									#line 149 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									label$93:;
									#line 149 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									*(uint8*)(TMP$41$9 + 3) = *(uint8*)((uint8*)(TMP$42$9 + I$8) + 3);
									// 						
									// 						dst += 4
									#line 151 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									DST$1 = (uint8*)(DST$1 + 4);
									// 					next
								}
								#line 152 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								label$39:;
								#line 152 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								I$8 = I$8 + 4;
								#line 152 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								label$38:;
								#line 152 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								if( I$8 <= TMP$34$8 ) goto label$41;
								#line 152 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								label$40:;
							}
							// 					' Rewind pointer to begin
							// 					for i as integer = 0 to rowbytes-1 step 4
							{
								#line 155 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								int32 I$8;
								#line 155 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								I$8 = 0;
								#line 155 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								int32 TMP$43$8;
								#line 155 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								TMP$43$8 = ROWBYTES$1 + -1;
								#line 155 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								goto label$42;
								#line 155 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								label$45:;
								{
									// 						dst -= 4
									#line 156 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									DST$1 = (uint8*)(DST$1 + -4);
									// 					next i
								}
								#line 157 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								label$43:;
								#line 157 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								I$8 = I$8 + 4;
								#line 157 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								label$42:;
								#line 157 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								if( I$8 <= TMP$43$8 ) goto label$45;
								#line 157 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								label$44:;
							}
							// 					' Jump to next pointer line
							// 					dst += imgPNG->pitch
							#line 160 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
							TMP$44$7 = IMGPNG$1;
							#line 160 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
							void* vr$104 = fb_NullPtrChk( (void*)TMP$44$7, 160, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
							#line 160 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
							if( vr$104 == 0 ) goto label$94;
							#line 160 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
							goto *vr$104;
							#line 160 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
							label$94:;
							#line 160 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
							DST$1 = (uint8*)(DST$1 + *(int32*)((uint8*)TMP$44$7 + 16));
							// 				case 24
						}
						#line 162 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
						goto label$35;
						#line 162 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
						label$36:;
						#line 162 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
						if( BITS$1 != 24 ) goto label$46;
						#line 162 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
						label$47:;
						{
							#line 162 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
							struct $N2FB5IMAGEE* TMP$55$7;
							// 					for i as integer = 0 to rowbytes-1 step 4
							{
								#line 163 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								int32 I$8;
								#line 163 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								I$8 = 0;
								#line 163 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								int32 TMP$45$8;
								#line 163 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								TMP$45$8 = ROWBYTES$1 + -1;
								#line 163 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								goto label$48;
								#line 163 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								label$51:;
								{
									#line 163 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									uint8* TMP$46$9;
									#line 163 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									uint8* TMP$47$9;
									#line 163 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									uint8* TMP$48$9;
									#line 163 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									uint8* TMP$49$9;
									#line 163 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									uint8* TMP$50$9;
									#line 163 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									uint8* TMP$51$9;
									#line 163 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									uint8* TMP$52$9;
									#line 163 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									uint8* TMP$53$9;
									// 						dst[0] = src[i+2]
									#line 164 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									TMP$47$9 = SRC$1;
									#line 164 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									void* vr$108 = fb_NullPtrChk( (void*)TMP$47$9, 164, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
									#line 164 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									if( vr$108 == 0 ) goto label$95;
									#line 164 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									goto *vr$108;
									#line 164 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									label$95:;
									#line 164 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									TMP$46$9 = DST$1;
									#line 164 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									void* vr$110 = fb_NullPtrChk( (void*)TMP$46$9, 164, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
									#line 164 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									if( vr$110 == 0 ) goto label$96;
									#line 164 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									goto *vr$110;
									#line 164 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									label$96:;
									#line 164 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									*TMP$46$9 = *(uint8*)((uint8*)(TMP$47$9 + I$8) + 2);
									// 						dst[1] = src[i+1]
									#line 165 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									TMP$49$9 = SRC$1;
									#line 165 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									void* vr$112 = fb_NullPtrChk( (void*)TMP$49$9, 165, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
									#line 165 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									if( vr$112 == 0 ) goto label$97;
									#line 165 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									goto *vr$112;
									#line 165 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									label$97:;
									#line 165 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									TMP$48$9 = DST$1;
									#line 165 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									void* vr$114 = fb_NullPtrChk( (void*)TMP$48$9, 165, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
									#line 165 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									if( vr$114 == 0 ) goto label$98;
									#line 165 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									goto *vr$114;
									#line 165 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									label$98:;
									#line 165 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									*(uint8*)(TMP$48$9 + 1) = *(uint8*)((uint8*)(TMP$49$9 + I$8) + 1);
									// 						dst[2] = src[i+0]
									#line 166 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									TMP$51$9 = SRC$1;
									#line 166 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									void* vr$116 = fb_NullPtrChk( (void*)TMP$51$9, 166, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
									#line 166 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									if( vr$116 == 0 ) goto label$99;
									#line 166 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									goto *vr$116;
									#line 166 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									label$99:;
									#line 166 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									TMP$50$9 = DST$1;
									#line 166 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									void* vr$118 = fb_NullPtrChk( (void*)TMP$50$9, 166, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
									#line 166 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									if( vr$118 == 0 ) goto label$100;
									#line 166 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									goto *vr$118;
									#line 166 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									label$100:;
									#line 166 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									*(uint8*)(TMP$50$9 + 2) = *(uint8*)(TMP$51$9 + I$8);
									// 						dst[3] = src[i+3]
									#line 167 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									TMP$53$9 = SRC$1;
									#line 167 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									void* vr$120 = fb_NullPtrChk( (void*)TMP$53$9, 167, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
									#line 167 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									if( vr$120 == 0 ) goto label$101;
									#line 167 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									goto *vr$120;
									#line 167 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									label$101:;
									#line 167 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									TMP$52$9 = DST$1;
									#line 167 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									void* vr$122 = fb_NullPtrChk( (void*)TMP$52$9, 167, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
									#line 167 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									if( vr$122 == 0 ) goto label$102;
									#line 167 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									goto *vr$122;
									#line 167 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									label$102:;
									#line 167 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									*(uint8*)(TMP$52$9 + 3) = *(uint8*)((uint8*)(TMP$53$9 + I$8) + 3);
									// 	
									// 						dst += 4
									#line 169 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									DST$1 = (uint8*)(DST$1 + 4);
									// 					next
								}
								#line 170 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								label$49:;
								#line 170 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								I$8 = I$8 + 4;
								#line 170 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								label$48:;
								#line 170 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								if( I$8 <= TMP$45$8 ) goto label$51;
								#line 170 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								label$50:;
							}
							// 					
							// 					' rewind pointer to begin
							// 					for i as integer = 0 to rowbytes-1 step 4
							{
								#line 173 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								int32 I$8;
								#line 173 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								I$8 = 0;
								#line 173 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								int32 TMP$54$8;
								#line 173 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								TMP$54$8 = ROWBYTES$1 + -1;
								#line 173 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								goto label$52;
								#line 173 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								label$55:;
								{
									// 						dst -= 4
									#line 174 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									DST$1 = (uint8*)(DST$1 + -4);
									// 					next i
								}
								#line 175 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								label$53:;
								#line 175 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								I$8 = I$8 + 4;
								#line 175 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								label$52:;
								#line 175 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								if( I$8 <= TMP$54$8 ) goto label$55;
								#line 175 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								label$54:;
							}
							// 					' Jump to next pointer line
							// 					dst += imgPNG->pitch
							#line 178 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
							TMP$55$7 = IMGPNG$1;
							#line 178 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
							void* vr$129 = fb_NullPtrChk( (void*)TMP$55$7, 178, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
							#line 178 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
							if( vr$129 == 0 ) goto label$103;
							#line 178 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
							goto *vr$129;
							#line 178 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
							label$103:;
							#line 178 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
							DST$1 = (uint8*)(DST$1 + *(int32*)((uint8*)TMP$55$7 + 16));
							// 				case 15, 16
						}
						#line 179 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
						goto label$35;
						#line 179 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
						label$46:;
						#line 179 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
						if( BITS$1 == 15 ) goto label$57;
						#line 179 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
						label$58:;
						#line 179 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
						if( BITS$1 != 16 ) goto label$56;
						#line 179 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
						label$57:;
						{
							#line 179 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
							struct $N2FB5IMAGEE* TMP$65$7;
							// 					For i as integer = 0 to rowbytes-1 step 4
							{
								#line 180 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								int32 I$8;
								#line 180 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								I$8 = 0;
								#line 180 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								int32 TMP$56$8;
								#line 180 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								TMP$56$8 = ROWBYTES$1 + -1;
								#line 180 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								goto label$59;
								#line 180 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								label$62:;
								{
									#line 180 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									uint8* TMP$57$9;
									#line 180 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									uint8* TMP$58$9;
									#line 180 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									uint8* TMP$59$9;
									#line 180 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									uint8* TMP$60$9;
									#line 180 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									uint8* TMP$61$9;
									#line 180 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									uint8* TMP$62$9;
									#line 180 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									uint8* TMP$63$9;
									#line 180 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									uint8* TMP$64$9;
									// 						dst[0] = src[i+2]
									#line 182 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									TMP$58$9 = SRC$1;
									#line 182 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									void* vr$133 = fb_NullPtrChk( (void*)TMP$58$9, 182, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
									#line 182 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									if( vr$133 == 0 ) goto label$104;
									#line 182 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									goto *vr$133;
									#line 182 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									label$104:;
									#line 182 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									TMP$57$9 = DST$1;
									#line 182 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									void* vr$135 = fb_NullPtrChk( (void*)TMP$57$9, 182, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
									#line 182 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									if( vr$135 == 0 ) goto label$105;
									#line 182 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									goto *vr$135;
									#line 182 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									label$105:;
									#line 182 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									*TMP$57$9 = *(uint8*)((uint8*)(TMP$58$9 + I$8) + 2);
									// 						dst[1] = src[i+1]
									#line 183 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									TMP$60$9 = SRC$1;
									#line 183 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									void* vr$137 = fb_NullPtrChk( (void*)TMP$60$9, 183, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
									#line 183 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									if( vr$137 == 0 ) goto label$106;
									#line 183 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									goto *vr$137;
									#line 183 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									label$106:;
									#line 183 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									TMP$59$9 = DST$1;
									#line 183 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									void* vr$139 = fb_NullPtrChk( (void*)TMP$59$9, 183, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
									#line 183 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									if( vr$139 == 0 ) goto label$107;
									#line 183 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									goto *vr$139;
									#line 183 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									label$107:;
									#line 183 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									*(uint8*)(TMP$59$9 + 1) = *(uint8*)((uint8*)(TMP$60$9 + I$8) + 1);
									// 						dst[2] = src[i+0]
									#line 184 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									TMP$62$9 = SRC$1;
									#line 184 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									void* vr$141 = fb_NullPtrChk( (void*)TMP$62$9, 184, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
									#line 184 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									if( vr$141 == 0 ) goto label$108;
									#line 184 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									goto *vr$141;
									#line 184 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									label$108:;
									#line 184 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									TMP$61$9 = DST$1;
									#line 184 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									void* vr$143 = fb_NullPtrChk( (void*)TMP$61$9, 184, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
									#line 184 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									if( vr$143 == 0 ) goto label$109;
									#line 184 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									goto *vr$143;
									#line 184 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									label$109:;
									#line 184 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									*(uint8*)(TMP$61$9 + 2) = *(uint8*)(TMP$62$9 + I$8);
									// 						dst[3] = src[i+3]
									#line 185 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									TMP$64$9 = SRC$1;
									#line 185 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									void* vr$145 = fb_NullPtrChk( (void*)TMP$64$9, 185, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
									#line 185 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									if( vr$145 == 0 ) goto label$110;
									#line 185 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									goto *vr$145;
									#line 185 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									label$110:;
									#line 185 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									TMP$63$9 = DST$1;
									#line 185 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									void* vr$147 = fb_NullPtrChk( (void*)TMP$63$9, 185, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
									#line 185 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									if( vr$147 == 0 ) goto label$111;
									#line 185 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									goto *vr$147;
									#line 185 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									label$111:;
									#line 185 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									*(uint8*)(TMP$63$9 + 3) = *(uint8*)((uint8*)(TMP$64$9 + I$8) + 3);
									// 					next
								}
								#line 187 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								label$60:;
								#line 187 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								I$8 = I$8 + 4;
								#line 187 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								label$59:;
								#line 187 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								if( I$8 <= TMP$56$8 ) goto label$62;
								#line 187 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								label$61:;
							}
							// 					imageconvertrow( src, 32, dst, Bits, largeur )
							#line 188 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
							fb_GfxImageConvertRow( (void*)SRC$1, 32, (void*)DST$1, BITS$1, *(int32*)LARGEUR$1, 1 );
							// 					' Jump to next pointer line
							// 					dst += imgPNG->pitch
							#line 191 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
							TMP$65$7 = IMGPNG$1;
							#line 191 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
							void* vr$151 = fb_NullPtrChk( (void*)TMP$65$7, 191, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
							#line 191 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
							if( vr$151 == 0 ) goto label$112;
							#line 191 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
							goto *vr$151;
							#line 191 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
							label$112:;
							#line 191 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
							DST$1 = (uint8*)(DST$1 + *(int32*)((uint8*)TMP$65$7 + 16));
							// 				end select
						}
						#line 192 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
						label$56:;
						#line 192 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
						label$35:;
					}
					// 			case PNG_COLOR_TYPE_GRAY
				}
				#line 194 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
				goto label$30;
				#line 194 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
				label$33:;
				#line 194 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
				if( TYPECOULEUR$1 != 0 ) goto label$63;
				#line 194 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
				label$64:;
				{
					// 				select case( Bits )
					{
						// 				case 24, 32
						#line 196 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
						if( BITS$1 == 24 ) goto label$67;
						#line 196 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
						label$68:;
						#line 196 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
						if( BITS$1 != 32 ) goto label$66;
						#line 196 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
						label$67:;
						{
							// 					for i as integer = 0 to rowbytes-1
							{
								#line 197 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								int32 I$8;
								#line 197 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								I$8 = 0;
								#line 197 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								int32 TMP$66$8;
								#line 197 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								TMP$66$8 = ROWBYTES$1 + -1;
								#line 197 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								goto label$69;
								#line 197 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								label$72:;
								{
									#line 197 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									uint32* TMP$67$9;
									#line 197 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									uint8* TMP$68$9;
									#line 197 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									uint8* TMP$69$9;
									#line 197 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									uint8* TMP$70$9;
									// 						*cptr( ulong ptr, dst ) = rgb( src[i], src[i], src[i] ) [Macro Expansion: ((cuint(src[i]) shl 16) or (cuint(src[i]) shl 8) or cuint(src[i]) or &hFF000000) ]
									#line 198 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									TMP$68$9 = SRC$1;
									#line 198 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									void* vr$155 = fb_NullPtrChk( (void*)TMP$68$9, 198, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
									#line 198 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									if( vr$155 == 0 ) goto label$113;
									#line 198 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									goto *vr$155;
									#line 198 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									label$113:;
									#line 198 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									TMP$69$9 = SRC$1;
									#line 198 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									void* vr$159 = fb_NullPtrChk( (void*)TMP$69$9, 198, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
									#line 198 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									if( vr$159 == 0 ) goto label$114;
									#line 198 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									goto *vr$159;
									#line 198 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									label$114:;
									#line 198 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									TMP$70$9 = SRC$1;
									#line 198 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									void* vr$164 = fb_NullPtrChk( (void*)TMP$70$9, 198, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
									#line 198 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									if( vr$164 == 0 ) goto label$115;
									#line 198 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									goto *vr$164;
									#line 198 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									label$115:;
									#line 198 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									TMP$67$9 = (uint32*)DST$1;
									#line 198 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									void* vr$169 = fb_NullPtrChk( (void*)TMP$67$9, 198, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
									#line 198 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									if( vr$169 == 0 ) goto label$116;
									#line 198 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									goto *vr$169;
									#line 198 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									label$116:;
									#line 198 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									*TMP$67$9 = ((((uint32)*(uint8*)(TMP$68$9 + I$8) << (16 & 31)) | ((uint32)*(uint8*)(TMP$69$9 + I$8) << (8 & 31))) | (uint32)*(uint8*)(TMP$70$9 + I$8)) | 4278190080u;
									// 						dst += 4
									#line 199 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									DST$1 = (uint8*)(DST$1 + 4);
									// 					next
								}
								#line 200 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								label$70:;
								#line 200 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								I$8 = I$8 + 1;
								#line 200 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								label$69:;
								#line 200 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								if( I$8 <= TMP$66$8 ) goto label$72;
								#line 200 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								label$71:;
							}
							// 				case 15, 16
						}
						#line 201 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
						goto label$65;
						#line 201 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
						label$66:;
						#line 201 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
						if( BITS$1 == 15 ) goto label$74;
						#line 201 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
						label$75:;
						#line 201 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
						if( BITS$1 != 16 ) goto label$73;
						#line 201 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
						label$74:;
						{
							// 					For i as integer = 0 to rowbytes-1 step 4
							{
								#line 202 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								int32 I$8;
								#line 202 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								I$8 = 0;
								#line 202 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								int32 TMP$71$8;
								#line 202 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								TMP$71$8 = ROWBYTES$1 + -1;
								#line 202 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								goto label$76;
								#line 202 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								label$79:;
								{
									#line 202 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									uint8* TMP$72$9;
									#line 202 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									uint8* TMP$73$9;
									#line 202 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									uint8* TMP$74$9;
									#line 202 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									uint8* TMP$75$9;
									#line 202 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									uint8* TMP$76$9;
									#line 202 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									uint8* TMP$77$9;
									#line 202 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									uint8* TMP$78$9;
									#line 202 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									uint8* TMP$79$9;
									// 						dst[0] = src[i+2]
									#line 203 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									TMP$73$9 = SRC$1;
									#line 203 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									void* vr$174 = fb_NullPtrChk( (void*)TMP$73$9, 203, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
									#line 203 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									if( vr$174 == 0 ) goto label$117;
									#line 203 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									goto *vr$174;
									#line 203 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									label$117:;
									#line 203 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									TMP$72$9 = DST$1;
									#line 203 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									void* vr$176 = fb_NullPtrChk( (void*)TMP$72$9, 203, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
									#line 203 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									if( vr$176 == 0 ) goto label$118;
									#line 203 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									goto *vr$176;
									#line 203 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									label$118:;
									#line 203 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									*TMP$72$9 = *(uint8*)((uint8*)(TMP$73$9 + I$8) + 2);
									// 						dst[1] = src[i+1]
									#line 204 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									TMP$75$9 = SRC$1;
									#line 204 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									void* vr$178 = fb_NullPtrChk( (void*)TMP$75$9, 204, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
									#line 204 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									if( vr$178 == 0 ) goto label$119;
									#line 204 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									goto *vr$178;
									#line 204 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									label$119:;
									#line 204 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									TMP$74$9 = DST$1;
									#line 204 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									void* vr$180 = fb_NullPtrChk( (void*)TMP$74$9, 204, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
									#line 204 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									if( vr$180 == 0 ) goto label$120;
									#line 204 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									goto *vr$180;
									#line 204 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									label$120:;
									#line 204 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									*(uint8*)(TMP$74$9 + 1) = *(uint8*)((uint8*)(TMP$75$9 + I$8) + 1);
									// 						dst[2] = src[i+0]
									#line 205 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									TMP$77$9 = SRC$1;
									#line 205 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									void* vr$182 = fb_NullPtrChk( (void*)TMP$77$9, 205, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
									#line 205 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									if( vr$182 == 0 ) goto label$121;
									#line 205 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									goto *vr$182;
									#line 205 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									label$121:;
									#line 205 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									TMP$76$9 = DST$1;
									#line 205 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									void* vr$184 = fb_NullPtrChk( (void*)TMP$76$9, 205, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
									#line 205 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									if( vr$184 == 0 ) goto label$122;
									#line 205 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									goto *vr$184;
									#line 205 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									label$122:;
									#line 205 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									*(uint8*)(TMP$76$9 + 2) = *(uint8*)(TMP$77$9 + I$8);
									// 						dst[3] = src[i+3]
									#line 206 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									TMP$79$9 = SRC$1;
									#line 206 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									void* vr$186 = fb_NullPtrChk( (void*)TMP$79$9, 206, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
									#line 206 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									if( vr$186 == 0 ) goto label$123;
									#line 206 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									goto *vr$186;
									#line 206 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									label$123:;
									#line 206 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									TMP$78$9 = DST$1;
									#line 206 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									void* vr$188 = fb_NullPtrChk( (void*)TMP$78$9, 206, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
									#line 206 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									if( vr$188 == 0 ) goto label$124;
									#line 206 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									goto *vr$188;
									#line 206 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									label$124:;
									#line 206 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									*(uint8*)(TMP$78$9 + 3) = *(uint8*)((uint8*)(TMP$79$9 + I$8) + 3);
									// 						
									// 						dst += 4
									#line 209 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									DST$1 = (uint8*)(DST$1 + 4);
									// 					next
								}
								#line 210 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								label$77:;
								#line 210 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								I$8 = I$8 + 4;
								#line 210 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								label$76:;
								#line 210 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								if( I$8 <= TMP$71$8 ) goto label$79;
								#line 210 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								label$78:;
							}
							// 					for i as integer = 0 to rowbytes-1
							{
								#line 211 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								int32 I$8;
								#line 211 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								I$8 = 0;
								#line 211 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								int32 TMP$80$8;
								#line 211 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								TMP$80$8 = ROWBYTES$1 + -1;
								#line 211 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								goto label$80;
								#line 211 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								label$83:;
								{
									#line 211 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									uint8* TMP$81$9;
									#line 211 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									uint8* TMP$82$9;
									#line 211 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									uint8* TMP$83$9;
									// 						pset imgPNG, (i, y), rgb( src[i], src[i], src[i] ) [Macro Expansion: ((cuint(src[i]) shl 16) or (cuint(src[i]) shl 8) or cuint(src[i]) or &hFF000000) ]
									#line 212 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									TMP$81$9 = SRC$1;
									#line 212 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									void* vr$193 = fb_NullPtrChk( (void*)TMP$81$9, 212, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
									#line 212 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									if( vr$193 == 0 ) goto label$125;
									#line 212 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									goto *vr$193;
									#line 212 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									label$125:;
									#line 212 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									TMP$82$9 = SRC$1;
									#line 212 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									void* vr$197 = fb_NullPtrChk( (void*)TMP$82$9, 212, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
									#line 212 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									if( vr$197 == 0 ) goto label$126;
									#line 212 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									goto *vr$197;
									#line 212 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									label$126:;
									#line 212 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									TMP$83$9 = SRC$1;
									#line 212 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									void* vr$202 = fb_NullPtrChk( (void*)TMP$83$9, 212, (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
									#line 212 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									if( vr$202 == 0 ) goto label$127;
									#line 212 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									goto *vr$202;
									#line 212 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									label$127:;
									#line 212 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
									fb_GfxPset( (void*)IMGPNG$1, (float)I$8, (float)Y$2, ((((uint32)*(uint8*)(TMP$81$9 + I$8) << (16 & 31)) | ((uint32)*(uint8*)(TMP$82$9 + I$8) << (8 & 31))) | (uint32)*(uint8*)(TMP$83$9 + I$8)) | 4278190080u, 4, 0 );
									// 					next
								}
								#line 213 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								label$81:;
								#line 213 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								I$8 = I$8 + 1;
								#line 213 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								label$80:;
								#line 213 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								if( I$8 <= TMP$80$8 ) goto label$83;
								#line 213 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
								label$82:;
							}
							// 				case else ' Image RAW
						}
						#line 214 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
						goto label$65;
						#line 214 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
						label$73:;
						{
							// 					memcpy( dst, src, rowbytes )
							#line 215 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
							memcpy( (void*)DST$1, (void*)SRC$1, (uint32)ROWBYTES$1 );
							// 					dst += pitch
							#line 216 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
							DST$1 = (uint8*)(DST$1 + PITCH$1);
							// 				end select
						}
						#line 217 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
						label$84:;
						#line 217 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
						label$65:;
					}
					// 			end select
				}
				#line 218 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
				label$63:;
				#line 218 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
				label$30:;
			}
			// 		next
		}
		#line 219 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		label$25:;
		#line 219 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		Y$2 = Y$2 + 1;
		#line 219 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		label$24:;
		#line 219 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		if( Y$2 <= TMP$32$2 ) goto label$27;
		#line 219 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
		label$26:;
	}
	// 		deallocate( src )
	#line 222 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	free( (void*)SRC$1 );
	// 	
	// 	png_read_end( png, info )
	#line 224 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	png_read_end( PNG$1, INFO$1 );
	// 	png_destroy_read_struct( @png, @info, 0 )
	#line 225 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	png_destroy_read_struct( &PNG$1, &INFO$1, (void**)0u );
	// 	fclose( PtrFichier )
	#line 226 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	fclose( PTRFICHIER$1 );
	// 	function = imgPNG
	#line 227 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	fb$result$1 = (void*)IMGPNG$1;
	// 	
	// 		
	#line 232 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	fb_StrDelete( (FBSTRING*)&RETOURVAR_PNG$1 );
	#line 232 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	fb_StrDelete( (FBSTRING*)&RETOURVAR$1 );
	#line 232 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	fb_StrDelete( (FBSTRING*)&MESSAGE_ERREUR$1 );
	#line 232 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	label$5:;
	#line 232 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	fb_ErrorSetFuncName( (uint8*)TMP$86$1 );
	#line 232 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	fb_ErrorSetModName( (uint8*)TMP$84$1 );
	#line 232 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	return fb$result$1;
#line 232 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
}

#line 1 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
__attribute__(( constructor )) static void fb_ctor__PNG( void )
#line 1 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
{
	#line 1 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	uint8* TMP$87$0;
	#line 1 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	uint8* TMP$89$0;
	#line 1 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	label$0:;
	#line 1 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
	#line 1 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	TMP$87$0 = vr$0;
	#line 1 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"{MODLEVEL}" );
	#line 1 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	TMP$89$0 = vr$1;
	// #include once "png.bi"
	// #include once "fbgfx.bi"
	// #include once "crt/errno.bi"
	// #include once "crt/string.bi"
	// #include "GUI.bi"
	// 'function charger_PNG(byval Fichier as String, byval Bits  as integer, prio as integer) as any ptr
	// '	Dim Hauteur as integer
	// '	Dim Largeur as integer
	// '	function = charger_PNG(Fichier, Bits, prio, Hauteur, Largeur)
	// 'End function
	// end sub
	// end function
	#line 23 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	label$1:;
	#line 23 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	fb_ErrorSetFuncName( (uint8*)TMP$89$0 );
	#line 23 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	fb_ErrorSetModName( (uint8*)TMP$87$0 );
#line 23 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
}

#line 16 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
static void LIBPNG_ERROR_CALLBACK( void* PNG$1, uint8* P$1 )
#line 16 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
{
	#line 16 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	uint8* TMP$20$1;
	#line 16 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	FBSTRING TMP$23$1;
	#line 16 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	FBSTRING TMP$24$1;
	#line 16 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	uint8* TMP$25$1;
	#line 16 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	uint8* TMP$27$1;
	#line 16 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	label$2:;
	#line 16 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"OS2.2/Cpcdos/FBGUI/PNG.BAS" );
	#line 16 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	TMP$25$1 = vr$0;
	#line 16 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"LIBPNG_ERROR_CALLBACK" );
	#line 16 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	TMP$27$1 = vr$1;
	// 	print "libpng failed to load the image (" & *p & ")"
	#line 18 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	__builtin_memset( &TMP$23$1, 0, 12 );
	#line 18 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	FBSTRING* vr$4 = fb_StrConcat( &TMP$23$1, (void*)"libpng failed to load the image (", 34, (void*)P$1, 0 );
	#line 18 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	__builtin_memset( &TMP$24$1, 0, 12 );
	#line 18 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	FBSTRING* vr$7 = fb_StrConcat( &TMP$24$1, (void*)vr$4, -1, (void*)")", 2 );
	#line 18 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	fb_PrintString( 0, (FBSTRING*)vr$7, 1 );
	// 	end 1
	#line 19 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	fb_End( 1 );
	#line 21 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	label$3:;
	#line 21 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	fb_ErrorSetFuncName( (uint8*)TMP$27$1 );
	#line 21 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
	fb_ErrorSetModName( (uint8*)TMP$25$1 );
#line 21 "OS2.2/Cpcdos/FBGUI/PNG.BAS"
}
