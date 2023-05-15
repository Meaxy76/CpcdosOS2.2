#include once "png.bi"
#include once "fbgfx.bi"
#include once "crt/errno.bi"
#include once "crt/string.bi"
#include "GUI.bi"
'function charger_PNG(byval Fichier as String, byval Bits  as integer, prio as integer) as any ptr
'	Dim Hauteur as integer
'	Dim Largeur as integer
'	function = charger_PNG(Fichier, Bits, prio, Hauteur, Largeur) 
'End function

private sub libpng_error_callback cdecl _
	( _
		byval png as png_structp, _
		byval p as png_const_charp _
	)

	print "libpng failed to load the image (" & *p & ")"
	end 1

end sub

function charger_PNG(byval Fichier as String, byval Bits  as integer, prio as integer, byref Hauteur as integer, byref Largeur as integer) as any ptr
	dim as ubyte header(0 to 7)

	dim as FILE ptr PtrFichier = fopen( Fichier, "rb" )
	
	
	dim as integer profondeurbits, canaux, profondeurPixelleuumeuhmeuuuh, typecouleur, rowbytes
	
	Dim PNG_Largeur as integer
	Dim PNG_Hauteur as integer
	Dim TestR as integer
	Dim TestV as integer
	Dim TestB as integer
	Dim TestA as integer
	Dim pitch as integer
	Dim PassageDoEvents as integer
	Dim Message_erreur as string
	Dim RetourVAR as string
	
	dim RetourVAR_PNG as String = ""
	dim imgPNG as FB.IMAGE ptr  
	

	
	

	if( PtrFichier = NULL ) then
		' Fichier introuvable !	
        PRINT "ERROR"
		Exit function
	end if
	
	if( fread( @header(0), 1, 8, PtrFichier ) <> 8 ) then ' 17-02-2017 : A revoir sur la fonction fread() pour utiliser celui de CPinti Core
		fclose(PtrFichier)
		Exit function
	end if

	if(png_sig_cmp( @header(0), 0, 8 )) then
		fclose(PtrFichier) 
		Exit function
	end if

	dim as png_structp png = png_create_read_struct( PNG_LIBPNG_VER_STRING, NULL, @libpng_error_callback, NULL )
	if(png = NULL) then
        fclose(PtrFichier)
		Exit function
	end if
	
	dim info as png_infop = png_create_info_struct(png)
	if(info = NULL) then
        fclose(PtrFichier)
		Exit function
	end if
	

	png_init_io( png, PtrFichier )
	png_set_sig_bytes( png, 8 )

	png_read_info( png, info )

	Dim debbug as boolean
	
	largeur = png_get_image_width( png, info )
	hauteur = png_get_image_height( png, info )
	
	
	profondeurbits = png_get_bit_depth( png, info )
	canaux = png_get_channels( png, info )
	profondeurPixelleuumeuhmeuuuh = profondeurbits * canaux
	typecouleur = png_get_color_type( png, info )

	select case( typecouleur )
		case PNG_COLOR_TYPE_RGB
        
		case PNG_COLOR_TYPE_RGB_ALPHA
        
		case PNG_COLOR_TYPE_GRAY
        
		case else
        
			
			return null
	end select



		imgPNG = imagecreate( largeur, hauteur, RGBA(0, 0, 0, 255))

		dim as ubyte ptr dst = cptr( ubyte ptr, imgPNG + 1 )

		png_read_update_info( png, info )

		rowbytes = png_get_rowbytes( png, info )
	

		dim as ubyte ptr src = callocate( rowbytes )





		for y as integer = 0 to hauteur-1
		
			' Forcer le contexte switching
			PassageDoEvents += 1
			if PassageDoEvents > (hauteur*largeur / 6) Then
				PassageDoEvents = 0
			end if
		
			png_read_row( png, src, NULL )

			select case(typecouleur)

			case PNG_COLOR_TYPE_RGB
				imageconvertrow( src, 24, dst, Bits, largeur )
				dst += imgPNG->pitch
				
			case PNG_COLOR_TYPE_RGB_ALPHA
				select case(Bits)

				case 32

					for i as integer = 0 to rowbytes-1 step 4
						dst[0] = src[i+2]
						dst[1] = src[i+1]
						dst[2] = src[i+0]
						dst[3] = src[i+3]
						
						dst += 4
					next

					' Rewind pointer to begin
					for i as integer = 0 to rowbytes-1 step 4
						dst -= 4
					next i

					' Jump to next pointer line
					dst += imgPNG->pitch

				case 24
					for i as integer = 0 to rowbytes-1 step 4
						dst[0] = src[i+2]
						dst[1] = src[i+1]
						dst[2] = src[i+0]
						dst[3] = src[i+3]
	
						dst += 4
					next
					
					' rewind pointer to begin
					for i as integer = 0 to rowbytes-1 step 4
						dst -= 4
					next i

					' Jump to next pointer line
					dst += imgPNG->pitch
				case 15, 16
					For i as integer = 0 to rowbytes-1 step 4

						dst[0] = src[i+2]
						dst[1] = src[i+1]
						dst[2] = src[i+0]
						dst[3] = src[i+3]

					next
					imageconvertrow( src, 32, dst, Bits, largeur )

					' Jump to next pointer line
					dst += imgPNG->pitch
				end select

			case PNG_COLOR_TYPE_GRAY
				select case( Bits )
				case 24, 32
					for i as integer = 0 to rowbytes-1
						*cptr( ulong ptr, dst ) = rgb( src[i], src[i], src[i] )
						dst += 4
					next
				case 15, 16
					For i as integer = 0 to rowbytes-1 step 4
						dst[0] = src[i+2]
						dst[1] = src[i+1]
						dst[2] = src[i+0]
						dst[3] = src[i+3]

						
						dst += 4
					next
					for i as integer = 0 to rowbytes-1
						pset imgPNG, (i, y), rgb( src[i], src[i], src[i] )
					next
				case else ' Image RAW
					memcpy( dst, src, rowbytes )
					dst += pitch
				end select
			end select
		next


		deallocate( src )
	
	png_read_end( png, info )
	png_destroy_read_struct( @png, @info, 0 )
	fclose( PtrFichier )
	function = imgPNG
	
    

		
end function