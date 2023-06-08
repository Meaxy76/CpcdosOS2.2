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
#line 29 "OS2.2/CPCDOS_INIT.BAS"
FBSTRING* fb_StrInit( void*, int32, void*, int32, int32 );
#line 29 "OS2.2/CPCDOS_INIT.BAS"
FBSTRING* fb_StrAssign( void*, int32, void*, int32, int32 );
#line 29 "OS2.2/CPCDOS_INIT.BAS"
void fb_StrDelete( FBSTRING* );
#line 29 "OS2.2/CPCDOS_INIT.BAS"
int32 fb_StrLen( void*, int32 );
#line 29 "OS2.2/CPCDOS_INIT.BAS"
void fb_Init( int32, uint8**, int32 );
#line 29 "OS2.2/CPCDOS_INIT.BAS"
void fb_End( int32 );
#line 29 "OS2.2/CPCDOS_INIT.BAS"
FBSTRING* fb_Command( int32 );
#line 29 "OS2.2/CPCDOS_INIT.BAS"
int32 _ZN8cpc_init13cpcdos_loaderEPc( uint8* );

#line 1 "OS2.2/CPCDOS_INIT.BAS"
int32 main( int32 __FB_ARGC__$0, char** __FB_ARGV__$0 )
#line 1 "OS2.2/CPCDOS_INIT.BAS"
{
	#line 1 "OS2.2/CPCDOS_INIT.BAS"
	int32 fb$result$0;
	#line 1 "OS2.2/CPCDOS_INIT.BAS"
	__builtin_memset( &fb$result$0, 0, 4 );
	#line 1 "OS2.2/CPCDOS_INIT.BAS"
	fb_Init( __FB_ARGC__$0, (uint8**)__FB_ARGV__$0, 0 );
	#line 1 "OS2.2/CPCDOS_INIT.BAS"
	label$0:;
	// extern "c++" lib "cpcdos"
	// 	namespace cpcinit_ alias "cpc_init"
	// 		declare function cpcdos_loader( byval inout_str as zstring ptr ) as integer
	// 	end namespace
	// end extern
	// 'Print "program launched via: " & Command(0)
	// Dim As Long i = 1
	#line 12 "OS2.2/CPCDOS_INIT.BAS"
	int32 I$0;
	#line 12 "OS2.2/CPCDOS_INIT.BAS"
	I$0 = 1;
	// Do
	#line 13 "OS2.2/CPCDOS_INIT.BAS"
	label$2:;
	{
		// Dim As String arg = Command(i)
		#line 14 "OS2.2/CPCDOS_INIT.BAS"
		FBSTRING ARG$1;
		#line 14 "OS2.2/CPCDOS_INIT.BAS"
		FBSTRING* vr$1 = fb_Command( I$0 );
		#line 14 "OS2.2/CPCDOS_INIT.BAS"
		FBSTRING* vr$3 = fb_StrInit( (void*)&ARG$1, -1, (void*)vr$1, -1, 0 );
		// If Len(arg) = 0 Then
		#line 15 "OS2.2/CPCDOS_INIT.BAS"
		int32 vr$5 = fb_StrLen( (void*)&ARG$1, -1 );
		#line 15 "OS2.2/CPCDOS_INIT.BAS"
		if( vr$5 != 0 ) goto label$6;
		{
			// cpcinit_.cpcdos_loader("/DEFAULT")
			#line 16 "OS2.2/CPCDOS_INIT.BAS"
			_ZN8cpc_init13cpcdos_loaderEPc( (uint8*)"/DEFAULT" );
			// exit do
			#line 17 "OS2.2/CPCDOS_INIT.BAS"
			fb_StrDelete( (FBSTRING*)&ARG$1 );
			#line 17 "OS2.2/CPCDOS_INIT.BAS"
			goto label$3;
			// else
		}
		#line 19 "OS2.2/CPCDOS_INIT.BAS"
		goto label$5;
		#line 19 "OS2.2/CPCDOS_INIT.BAS"
		label$6:;
		{
			// if Len(arg) > 0 Then
			#line 20 "OS2.2/CPCDOS_INIT.BAS"
			int32 vr$8 = fb_StrLen( (void*)&ARG$1, -1 );
			#line 20 "OS2.2/CPCDOS_INIT.BAS"
			if( vr$8 <= 0 ) goto label$8;
			{
				#line 20 "OS2.2/CPCDOS_INIT.BAS"
				FBSTRING TMP$3$3;
				// cpcinit_.cpcdos_loader(Command(i))
				#line 21 "OS2.2/CPCDOS_INIT.BAS"
				__builtin_memset( &TMP$3$3, 0, 12 );
				#line 21 "OS2.2/CPCDOS_INIT.BAS"
				FBSTRING* vr$10 = fb_Command( I$0 );
				#line 21 "OS2.2/CPCDOS_INIT.BAS"
				FBSTRING* vr$12 = fb_StrAssign( (void*)&TMP$3$3, -1, (void*)vr$10, -1, 0 );
				#line 21 "OS2.2/CPCDOS_INIT.BAS"
				_ZN8cpc_init13cpcdos_loaderEPc( (uint8*)*(uint8**)&TMP$3$3 );
				#line 21 "OS2.2/CPCDOS_INIT.BAS"
				fb_StrDelete( (FBSTRING*)&TMP$3$3 );
				// exit do
				#line 22 "OS2.2/CPCDOS_INIT.BAS"
				fb_StrDelete( (FBSTRING*)&ARG$1 );
				#line 22 "OS2.2/CPCDOS_INIT.BAS"
				goto label$3;
				// end if
			}
			#line 23 "OS2.2/CPCDOS_INIT.BAS"
			label$8:;
			#line 23 "OS2.2/CPCDOS_INIT.BAS"
			label$7:;
			// End If
		}
		#line 24 "OS2.2/CPCDOS_INIT.BAS"
		label$5:;
		// ' Print "command line argument " & i & " = """ & arg & """"
		// 'i += 1
		// Loop
		#line 29 "OS2.2/CPCDOS_INIT.BAS"
		fb_StrDelete( (FBSTRING*)&ARG$1 );
	}
	#line 29 "OS2.2/CPCDOS_INIT.BAS"
	label$4:;
	#line 29 "OS2.2/CPCDOS_INIT.BAS"
	goto label$2;
	#line 29 "OS2.2/CPCDOS_INIT.BAS"
	label$3:;
	#line 29 "OS2.2/CPCDOS_INIT.BAS"
	label$1:;
	#line 29 "OS2.2/CPCDOS_INIT.BAS"
	fb_End( 0 );
	#line 29 "OS2.2/CPCDOS_INIT.BAS"
	return fb$result$0;
#line 29 "OS2.2/CPCDOS_INIT.BAS"
}
