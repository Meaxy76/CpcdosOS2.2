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
#define fb_F2I( value ) ((int32)__builtin_nearbyintf( value ))
#define fb_D2I( value ) ((int32)__builtin_nearbyint( value ))
#line 4 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
void* fb_ErrorThrowAt( int32, uint8*, void*, void* );
#line 4 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
uint8* fb_ErrorSetModName( uint8* );
#line 4 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
uint8* fb_ErrorSetFuncName( uint8* );
#line 4 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
int32 fb_GfxPut( void*, float, float, void*, int32, int32, int32, int32, int32, int32, void*, int32, void*, void* );
#line 4 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
void fb_hPutPSet( uint8*, uint8*, int32, int32, int32, int32, int32, void*, void* );
#line 4 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
void fb_hPutAlpha( uint8*, uint8*, int32, int32, int32, int32, int32, void*, void* );
#line 4 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
static void fb_ctor__bitmap( void ) __attribute__(( constructor ));

#line 4 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
void* IMG_CHANGE_SIZE_QUICK( void** SOURCE$1, void** NOUVEAU_IMG$1, int32 PX$1, int32 PY$1, int32 TAILLE_X$1, int32 TAILLE_Y$1, int32 NOUVEAU_X$1, int32 NOUVEAU_Y$1 )
#line 4 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
{
	#line 4 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	uint8* TMP$23$1;
	#line 4 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	uint8* TMP$25$1;
	#line 4 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	void* fb$result$1;
	#line 4 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	__builtin_memset( &fb$result$1, 0, 4 );
	#line 4 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	uint8* vr$1 = fb_ErrorSetModName( (uint8*)"OS2.2/Cpcdos/FBGUI/bitmap.bas" );
	#line 4 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	TMP$23$1 = vr$1;
	#line 4 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	uint8* vr$2 = fb_ErrorSetFuncName( (uint8*)"IMG_CHANGE_SIZE_QUICK" );
	#line 4 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	TMP$25$1 = vr$2;
	#line 4 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	label$2:;
	// 	' Cette fonction permet de re-tailler la taille des images sans anti-alliasing
	// 	' Source		= Image source
	// 	' Nouveau_X		= Nouvelle taille en X
	// 	' Nouveau_Y		= Nouvelle taille en Y
	// 	'  Retourne 1 = OK
	// 	'			2 = Coordonne X mauvaise
	// 	'			3 = Coordonne Y mauvaise
	// 	'			4 = Erreur source
	// 	
	// 	
	// 	' Voir pour reecrire cette fonction en assembleur
	// 	Dim Calc_X				as single
	#line 16 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	float CALC_X$1;
	#line 16 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	__builtin_memset( &CALC_X$1, 0, 4 );
	// 	Dim Calc_Y				as single
	#line 17 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	float CALC_Y$1;
	#line 17 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	__builtin_memset( &CALC_Y$1, 0, 4 );
	// 	
	// 	Dim Boucle_X			as integer
	#line 19 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	int32 BOUCLE_X$1;
	#line 19 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	__builtin_memset( &BOUCLE_X$1, 0, 4 );
	// 	Dim Boucle_Y			as integer
	#line 20 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	int32 BOUCLE_Y$1;
	#line 20 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	__builtin_memset( &BOUCLE_Y$1, 0, 4 );
	// 	Dim Action_X			as integer
	#line 21 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	int32 ACTION_X$1;
	#line 21 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	__builtin_memset( &ACTION_X$1, 0, 4 );
	// 	Dim Action_Y			as integer
	#line 22 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	int32 ACTION_Y$1;
	#line 22 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	__builtin_memset( &ACTION_Y$1, 0, 4 );
	// 	Dim Acc_X				as integer
	#line 23 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	int32 ACC_X$1;
	#line 23 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	__builtin_memset( &ACC_X$1, 0, 4 );
	// 	Dim Acc_Y				as integer
	#line 24 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	int32 ACC_Y$1;
	#line 24 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	__builtin_memset( &ACC_Y$1, 0, 4 );
	// 	Dim AccPSET_X			as integer
	#line 25 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	int32 ACCPSET_X$1;
	#line 25 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	__builtin_memset( &ACCPSET_X$1, 0, 4 );
	// 	Dim AccPSET_Y			as integer
	#line 26 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	int32 ACCPSET_Y$1;
	#line 26 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	__builtin_memset( &ACCPSET_Y$1, 0, 4 );
	// 	
	// 	' Verifier si il faut agrandir l'image ou la retrecir
	// 	IF Nouveau_X < Taille_X Then
	#line 30 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	if( NOUVEAU_X$1 >= TAILLE_X$1 ) goto label$5;
	{
		// 		' ON retrecit en X
		// 		Action_X = 1
		#line 32 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
		ACTION_X$1 = 1;
		// 	ElseIF Nouveau_X > Taille_X THEN
	}
	#line 33 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	goto label$4;
	#line 33 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	label$5:;
	#line 33 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	if( NOUVEAU_X$1 <= TAILLE_X$1 ) goto label$6;
	{
		// 		' On agrandit
		// 		Action_X = 2
		#line 35 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
		ACTION_X$1 = 2;
		// 	Else
	}
	#line 36 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	goto label$4;
	#line 36 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	label$6:;
	{
		// 		Action_X = 0
		#line 37 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
		ACTION_X$1 = 0;
		// 		' Change pas
		// 	End if
	}
	#line 39 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	label$4:;
	// 	IF Nouveau_Y < Taille_Y Then
	#line 40 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	if( NOUVEAU_Y$1 >= TAILLE_Y$1 ) goto label$8;
	{
		// 		' ON retrecit en Y
		// 		Action_Y = 1
		#line 42 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
		ACTION_Y$1 = 1;
		// 	ElseIF Nouveau_Y > Taille_Y THEN
	}
	#line 43 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	goto label$7;
	#line 43 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	label$8:;
	#line 43 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	if( NOUVEAU_Y$1 <= TAILLE_Y$1 ) goto label$9;
	{
		// 		' On agrandit en Y
		// 		Action_Y = 2
		#line 45 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
		ACTION_Y$1 = 2;
		// 	Else
	}
	#line 46 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	goto label$7;
	#line 46 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	label$9:;
	{
		// 		' Change pas
		// 		Action_Y = 0
		#line 48 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
		ACTION_Y$1 = 0;
		// 	End if
	}
	#line 49 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	label$7:;
	// 	
	// 	Calc_Y = ((Taille_Y/Nouveau_Y))
	#line 51 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	CALC_Y$1 = (float)((double)TAILLE_Y$1 / (double)NOUVEAU_Y$1);
	// 	Calc_X = ((Taille_X/Nouveau_X))
	#line 52 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	CALC_X$1 = (float)((double)TAILLE_X$1 / (double)NOUVEAU_X$1);
	// 	IF Action_X = 1 Then
	#line 53 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	if( ACTION_X$1 != 1 ) goto label$11;
	{
		// 		IF Action_Y = 1 Then
		#line 54 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
		if( ACTION_Y$1 != 1 ) goto label$13;
		{
			// 			' *** Reduction en X et Y ***
			// 			AccPSET_Y = 0
			#line 56 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
			ACCPSET_Y$1 = 0;
			// 			For Boucle_Y = 1 to Taille_Y step Calc_Y
			{
				#line 57 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				BOUCLE_Y$1 = 1;
				#line 57 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				int32 TMP$2$4;
				#line 57 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				TMP$2$4 = TAILLE_Y$1;
				#line 57 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				int32 TMP$3$4;
				#line 57 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				TMP$3$4 = fb_F2I( CALC_Y$1 );
				#line 57 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				int32 TMP$4$4;
				#line 57 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				TMP$4$4 = -(TMP$3$4 >= 0);
				#line 57 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				goto label$14;
				#line 57 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				label$17:;
				{
					// 				AccPSET_Y = AccPSET_Y + 1
					#line 58 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
					ACCPSET_Y$1 = ACCPSET_Y$1 + 1;
					// 				AccPSET_X = 0
					#line 59 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
					ACCPSET_X$1 = 0;
					// 				For Boucle_X = 1 to Taille_X step Calc_X
					{
						#line 60 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						BOUCLE_X$1 = 1;
						#line 60 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						int32 TMP$5$6;
						#line 60 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						TMP$5$6 = TAILLE_X$1;
						#line 60 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						int32 TMP$6$6;
						#line 60 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						TMP$6$6 = fb_F2I( CALC_X$1 );
						#line 60 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						int32 TMP$7$6;
						#line 60 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						TMP$7$6 = -(TMP$6$6 >= 0);
						#line 60 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						goto label$18;
						#line 60 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						label$21:;
						{
							// 					AccPSET_X = AccPSET_X + 1
							#line 61 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
							ACCPSET_X$1 = ACCPSET_X$1 + 1;
							// 					Put Nouveau_IMG, (AccPSET_X , AccPSET_Y), Source, (Boucle_X, Boucle_Y)-(Boucle_X+1, Boucle_Y+1), PSet
							#line 62 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
							label$22:;
							#line 62 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
							int32 vr$33 = fb_GfxPut( *NOUVEAU_IMG$1, (float)ACCPSET_X$1, (float)ACCPSET_Y$1, (void*)*SOURCE$1, BOUCLE_X$1, BOUCLE_Y$1, BOUCLE_X$1 + 1, BOUCLE_Y$1 + 1, 0, 1, (void*)&fb_hPutPSet, -1, (void*)0u, (void*)0u );
							#line 62 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
							if( vr$33 == 0 ) goto label$23;
							#line 62 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
							void* vr$36 = fb_ErrorThrowAt( 62, (uint8*)"OS2.2/Cpcdos/FBGUI/bitmap.bas", (void*)&&label$22, (void*)&&label$23 );
							#line 62 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
							goto *vr$36;
							#line 62 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
							label$23:;
							// 				Next Boucle_X
						}
						#line 63 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						label$19:;
						#line 63 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						BOUCLE_X$1 = BOUCLE_X$1 + TMP$6$6;
						#line 63 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						label$18:;
						#line 63 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						if( TMP$7$6 != 0 ) goto label$24;
						#line 63 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						if( BOUCLE_X$1 >= TMP$5$6 ) goto label$21;
						#line 63 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						goto label$20;
						#line 63 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						label$24:;
						#line 63 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						if( BOUCLE_X$1 <= TMP$5$6 ) goto label$21;
						#line 63 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						label$20:;
					}
					// 			Next Boucle_Y
				}
				#line 64 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				label$15:;
				#line 64 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				BOUCLE_Y$1 = BOUCLE_Y$1 + TMP$3$4;
				#line 64 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				label$14:;
				#line 64 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				if( TMP$4$4 != 0 ) goto label$25;
				#line 64 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				if( BOUCLE_Y$1 >= TMP$2$4 ) goto label$17;
				#line 64 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				goto label$16;
				#line 64 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				label$25:;
				#line 64 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				if( BOUCLE_Y$1 <= TMP$2$4 ) goto label$17;
				#line 64 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				label$16:;
			}
			// 		ElseIF Action_Y = 2 Then
		}
		#line 65 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
		goto label$12;
		#line 65 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
		label$13:;
		#line 65 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
		if( ACTION_Y$1 != 2 ) goto label$26;
		{
			// 			' Reduction en X et Agrandissement en Y
			// 			For Boucle_Y = 1 to Nouveau_Y
			{
				#line 67 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				BOUCLE_Y$1 = 1;
				#line 67 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				int32 TMP$10$4;
				#line 67 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				TMP$10$4 = NOUVEAU_Y$1;
				#line 67 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				goto label$27;
				#line 67 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				label$30:;
				{
					// 				AccPSET_X = 0
					#line 68 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
					ACCPSET_X$1 = 0;
					// 				For Boucle_X = 1 to Taille_X step Calc_X
					{
						#line 69 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						BOUCLE_X$1 = 1;
						#line 69 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						int32 TMP$11$6;
						#line 69 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						TMP$11$6 = TAILLE_X$1;
						#line 69 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						int32 TMP$12$6;
						#line 69 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						TMP$12$6 = fb_F2I( CALC_X$1 );
						#line 69 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						int32 TMP$13$6;
						#line 69 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						TMP$13$6 = -(TMP$12$6 >= 0);
						#line 69 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						goto label$31;
						#line 69 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						label$34:;
						{
							// 					AccPSET_X = AccPSET_X + 1
							#line 70 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
							ACCPSET_X$1 = ACCPSET_X$1 + 1;
							// 					Put Nouveau_IMG, (AccPSET_X , Boucle_Y), Source, (Boucle_X, Boucle_Y / (Nouveau_Y/Taille_Y))-(Boucle_X+1, Boucle_Y / (Nouveau_Y/Taille_Y) + 1), PSet
							#line 71 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
							label$35:;
							#line 71 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
							int32 vr$60 = fb_GfxPut( *NOUVEAU_IMG$1, (float)ACCPSET_X$1, (float)BOUCLE_Y$1, (void*)*SOURCE$1, BOUCLE_X$1, fb_D2I( (double)BOUCLE_Y$1 / ((double)NOUVEAU_Y$1 / (double)TAILLE_Y$1) ), BOUCLE_X$1 + 1, fb_D2I( ((double)BOUCLE_Y$1 / ((double)NOUVEAU_Y$1 / (double)TAILLE_Y$1)) + 0x1.p+0 ), 0, 1, (void*)&fb_hPutPSet, -1, (void*)0u, (void*)0u );
							#line 71 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
							if( vr$60 == 0 ) goto label$36;
							#line 71 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
							void* vr$63 = fb_ErrorThrowAt( 71, (uint8*)"OS2.2/Cpcdos/FBGUI/bitmap.bas", (void*)&&label$35, (void*)&&label$36 );
							#line 71 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
							goto *vr$63;
							#line 71 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
							label$36:;
							// 				Next Boucle_X
						}
						#line 72 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						label$32:;
						#line 72 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						BOUCLE_X$1 = BOUCLE_X$1 + TMP$12$6;
						#line 72 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						label$31:;
						#line 72 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						if( TMP$13$6 != 0 ) goto label$37;
						#line 72 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						if( BOUCLE_X$1 >= TMP$11$6 ) goto label$34;
						#line 72 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						goto label$33;
						#line 72 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						label$37:;
						#line 72 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						if( BOUCLE_X$1 <= TMP$11$6 ) goto label$34;
						#line 72 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						label$33:;
					}
					// 			Next Boucle_Y
				}
				#line 73 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				label$28:;
				#line 73 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				BOUCLE_Y$1 = BOUCLE_Y$1 + 1;
				#line 73 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				label$27:;
				#line 73 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				if( BOUCLE_Y$1 <= TMP$10$4 ) goto label$30;
				#line 73 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				label$29:;
			}
			// 		End if
		}
		#line 74 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
		label$26:;
		#line 74 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
		label$12:;
		// 	ELSEIF Action_X = 2 Then
	}
	#line 75 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	goto label$10;
	#line 75 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	label$11:;
	#line 75 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	if( ACTION_X$1 != 2 ) goto label$38;
	{
		// 		IF Action_Y = 2 Then
		#line 76 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
		if( ACTION_Y$1 != 2 ) goto label$40;
		{
			// 			' Agrandissement en X et Y
			// 			For Boucle_Y = 1 to Nouveau_Y
			{
				#line 78 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				BOUCLE_Y$1 = 1;
				#line 78 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				int32 TMP$15$4;
				#line 78 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				TMP$15$4 = NOUVEAU_Y$1;
				#line 78 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				goto label$41;
				#line 78 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				label$44:;
				{
					// 				For Boucle_X = 1 to Nouveau_X
					{
						#line 79 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						BOUCLE_X$1 = 1;
						#line 79 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						int32 TMP$16$6;
						#line 79 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						TMP$16$6 = NOUVEAU_X$1;
						#line 79 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						goto label$45;
						#line 79 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						label$48:;
						{
							// 					Put Nouveau_IMG, (Boucle_X , Boucle_Y), Source, (Boucle_X / (Nouveau_X/Taille_X), Boucle_Y / (Nouveau_Y/Taille_Y))-(Boucle_X / (Nouveau_X/Taille_X) + 1, Boucle_Y / (Nouveau_Y/Taille_Y) + 1), PSet
							#line 80 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
							label$49:;
							#line 80 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
							int32 vr$96 = fb_GfxPut( *NOUVEAU_IMG$1, (float)BOUCLE_X$1, (float)BOUCLE_Y$1, (void*)*SOURCE$1, fb_D2I( (double)BOUCLE_X$1 / ((double)NOUVEAU_X$1 / (double)TAILLE_X$1) ), fb_D2I( (double)BOUCLE_Y$1 / ((double)NOUVEAU_Y$1 / (double)TAILLE_Y$1) ), fb_D2I( ((double)BOUCLE_X$1 / ((double)NOUVEAU_X$1 / (double)TAILLE_X$1)) + 0x1.p+0 ), fb_D2I( ((double)BOUCLE_Y$1 / ((double)NOUVEAU_Y$1 / (double)TAILLE_Y$1)) + 0x1.p+0 ), 0, 1, (void*)&fb_hPutPSet, -1, (void*)0u, (void*)0u );
							#line 80 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
							if( vr$96 == 0 ) goto label$50;
							#line 80 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
							void* vr$99 = fb_ErrorThrowAt( 80, (uint8*)"OS2.2/Cpcdos/FBGUI/bitmap.bas", (void*)&&label$49, (void*)&&label$50 );
							#line 80 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
							goto *vr$99;
							#line 80 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
							label$50:;
							// 				Next Boucle_X
						}
						#line 81 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						label$46:;
						#line 81 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						BOUCLE_X$1 = BOUCLE_X$1 + 1;
						#line 81 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						label$45:;
						#line 81 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						if( BOUCLE_X$1 <= TMP$16$6 ) goto label$48;
						#line 81 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						label$47:;
					}
					// 			Next Boucle_Y
				}
				#line 82 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				label$42:;
				#line 82 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				BOUCLE_Y$1 = BOUCLE_Y$1 + 1;
				#line 82 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				label$41:;
				#line 82 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				if( BOUCLE_Y$1 <= TMP$15$4 ) goto label$44;
				#line 82 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				label$43:;
			}
			// 		ELSEIF Action_Y = 1 Then
		}
		#line 83 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
		goto label$39;
		#line 83 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
		label$40:;
		#line 83 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
		if( ACTION_Y$1 != 1 ) goto label$51;
		{
			// 			' Agrandissement en X et Reduction en Y
			// 			AccPSET_Y = 0
			#line 85 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
			ACCPSET_Y$1 = 0;
			// 			For Boucle_Y = 1 to Taille_Y Step Calc_Y
			{
				#line 86 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				BOUCLE_Y$1 = 1;
				#line 86 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				int32 TMP$18$4;
				#line 86 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				TMP$18$4 = TAILLE_Y$1;
				#line 86 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				int32 TMP$19$4;
				#line 86 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				TMP$19$4 = fb_F2I( CALC_Y$1 );
				#line 86 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				int32 TMP$20$4;
				#line 86 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				TMP$20$4 = -(TMP$19$4 >= 0);
				#line 86 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				goto label$52;
				#line 86 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				label$55:;
				{
					// 				AccPSET_Y = AccPSET_Y + 1
					#line 87 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
					ACCPSET_Y$1 = ACCPSET_Y$1 + 1;
					// 				For Boucle_X = 1 to Nouveau_X
					{
						#line 88 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						BOUCLE_X$1 = 1;
						#line 88 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						int32 TMP$21$6;
						#line 88 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						TMP$21$6 = NOUVEAU_X$1;
						#line 88 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						goto label$56;
						#line 88 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						label$59:;
						{
							// 					Put Nouveau_IMG, (Boucle_X , AccPSET_Y), Source, (Boucle_X / (Nouveau_X/Taille_X), Boucle_Y)-(Boucle_X / (Nouveau_X/Taille_X) + 1, Boucle_Y+1), alpha
							#line 89 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
							label$60:;
							#line 89 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
							int32 vr$123 = fb_GfxPut( *NOUVEAU_IMG$1, (float)BOUCLE_X$1, (float)ACCPSET_Y$1, (void*)*SOURCE$1, fb_D2I( (double)BOUCLE_X$1 / ((double)NOUVEAU_X$1 / (double)TAILLE_X$1) ), BOUCLE_Y$1, fb_D2I( ((double)BOUCLE_X$1 / ((double)NOUVEAU_X$1 / (double)TAILLE_X$1)) + 0x1.p+0 ), BOUCLE_Y$1 + 1, 0, 6, (void*)&fb_hPutAlpha, -1, (void*)0u, (void*)0u );
							#line 89 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
							if( vr$123 == 0 ) goto label$61;
							#line 89 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
							void* vr$126 = fb_ErrorThrowAt( 89, (uint8*)"OS2.2/Cpcdos/FBGUI/bitmap.bas", (void*)&&label$60, (void*)&&label$61 );
							#line 89 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
							goto *vr$126;
							#line 89 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
							label$61:;
							// 				Next Boucle_X
						}
						#line 90 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						label$57:;
						#line 90 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						BOUCLE_X$1 = BOUCLE_X$1 + 1;
						#line 90 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						label$56:;
						#line 90 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						if( BOUCLE_X$1 <= TMP$21$6 ) goto label$59;
						#line 90 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
						label$58:;
					}
					// 			Next Boucle_Y
				}
				#line 91 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				label$53:;
				#line 91 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				BOUCLE_Y$1 = BOUCLE_Y$1 + TMP$19$4;
				#line 91 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				label$52:;
				#line 91 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				if( TMP$20$4 != 0 ) goto label$62;
				#line 91 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				if( BOUCLE_Y$1 >= TMP$18$4 ) goto label$55;
				#line 91 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				goto label$54;
				#line 91 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				label$62:;
				#line 91 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				if( BOUCLE_Y$1 <= TMP$18$4 ) goto label$55;
				#line 91 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
				label$54:;
			}
			// 		End IF
		}
		#line 92 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
		label$51:;
		#line 92 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
		label$39:;
		// 	End if	
	}
	#line 93 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	label$38:;
	#line 93 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	label$10:;
	// 	Function = Nouveau_IMG
	#line 94 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	fb$result$1 = *NOUVEAU_IMG$1;
	// 	
	// 	
	#line 97 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	label$3:;
	#line 97 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	fb_ErrorSetFuncName( (uint8*)TMP$25$1 );
	#line 97 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	fb_ErrorSetModName( (uint8*)TMP$23$1 );
	#line 97 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	return fb$result$1;
#line 97 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
}

#line 1 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
__attribute__(( constructor )) static void fb_ctor__bitmap( void )
#line 1 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
{
	#line 1 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	uint8* TMP$26$0;
	#line 1 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	uint8* TMP$28$0;
	#line 1 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	label$0:;
	#line 1 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	uint8* vr$0 = fb_ErrorSetModName( (uint8*)"OS2.2/Cpcdos/FBGUI/bitmap.bas" );
	#line 1 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	TMP$26$0 = vr$0;
	#line 1 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	uint8* vr$1 = fb_ErrorSetFuncName( (uint8*)"{MODLEVEL}" );
	#line 1 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	TMP$28$0 = vr$1;
	// #include "GUI.bi"
	// end function
	#line 4 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	label$1:;
	#line 4 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	fb_ErrorSetFuncName( (uint8*)TMP$28$0 );
	#line 4 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	fb_ErrorSetModName( (uint8*)TMP$26$0 );
#line 4 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
}
