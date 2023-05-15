#include "fbgfx.bi"
#include "dos/dpmi.bi"
#Include "vbcompat.bi"

Using FB

Dim Shared iActiveWindow As Integer = 0
Dim Shared MAXW as Integer
Dim Shared MAXH as Integer


Declare Sub MAINLOOP()
Declare Sub DoEvents()
Declare Sub RePaint()
Declare Sub CloseWindow()

#include "SCI.bi"
#include "ElieDraw_Win.bas"
#include "ElieDraw_textbox.bas"
#include "ElieDraw_textblock.bas"
#include "ElieDraw_picturebox.bas"
#include once "drawingbox.bi"
#include once "button_obj.bi"

declare Function Test_CPC_resolution Alias "Test_CPC_resolution" (SCRX as integer, SCRY as integer) as integer

declare Function Cpcdos_Mouse Alias "Cpcdos_Mouse" () as integer

declare Function eliedraw_gui cdecl Alias "eliedraw_gui" (SX as integer, SY as integer, backgr as string) as integer
declare Function Set_Window_GUI_Value cdecl Alias "Set_Window_GUI_Value" (SX as integer, SY as integer) as integer
declare Function sci_list_screen cdecl Alias "sci_list_screen" (SX as integer, SY as integer) as string
declare Function Create_Window cdecl Alias "Create_Window" (title as String, name_win as string, typewin as integer, SX as integer , SY as integer, PX as integer, PY as integer, opacity as integer, WindowCR as integer, WindowCG as integer, WindowCB as integer) as integer

''============================================================================================================================================================================================================================================================================================================================================================''
'' Variables ElieDraw for Cpcdos OS2.2

Public Function Cpcdos_Mouse cdecl Alias "Cpcdos_Mouse" as integer
    ' Will read vars from the C++ side 
	' Need to add functions for MouseEnter, MouseLeave, MouseClick, Click
	'Cls
	'PCopy 1, 0
	CpcMouse()
	print "X: " & MouseX
	print "Y: " & MouseY 
	print "Button: " & MouseButton
	
	Flip()
	'Sleep( 1, 1 )
end function

''============================================================================================================================================================================================================================================================================================================================================================''
'' Variables ElieDraw for Cpcdos OS2.2

function Read_CPC_Var() as string
    ' Will read vars from the C++ side 
end function

''============================================================================================================================================================================================================================================================================================================================================================''
'' Background ElieDraw for Cpcdos OS2.2

Sub Background(back as string)
	'SCR_IMG_MODE VALUE TO SET
    Dim As Any Ptr IMG_TEST1

	ScreenSet( 1, 1 )

    IMG_TEST1 = Imagecreate(800,600, 0)  'save image while screen is being worked on
	
    IMG_TEST1 = charger_PNG(back, 32, 5, MAXW,MAXH)
	
    put (0,0), IMG_TEST1, Pset
	
	ScreenSet( 0, 0 )

	PCopy 1, 0
end sub

''============================================================================================================================================================================================================================================================================================================================================================''
'' GUI ElieDraw for Cpcdos OS2.2

''============================================================================================================================================================================================================================================================================================================================================================''
'' Desktop ElieDraw for Cpcdos OS2.2

sub Test_Desktop()
	Dim As any Ptr ConsoleIcon
	Dim As any Ptr ConsoleIconR
	Dim As any Ptr CpcApp

	ScreenSet(3, 1)
	ConsoleIconR = Imagecreate(64, 64, RGBA(0, 0, 0, 0))	

	ConsoleIcon = charger_PNG("cmd.png", 32, 5, 128, 128)
    IMG_change_size_quick(ConsoleIcon, ConsoleIconR,64, 64, 128, 128, 64, 64)
    put(25, 25),ConsoleIconR, alpha
	ScreenSet(0,0)
	PCopy 3, 1

end sub

Public Function eliedraw_gui cdecl Alias "eliedraw_gui" (SX as integer, SY as integer, backgr as string) as integer
    'We load background
    Background(backgr)
    ScreenSet(0,2)
	'Test_Desktop()
    NewWindow("Win1", 10, 10, 400, 340, "My first app!", &h9e9e9e, 39, 232, 247) 
	NewPicturebox("icon", 1, 10, 10, 64, 64)
    'ScreenSet(0,2)
	cpcccp_.cpcdos_command("exe/ window.cpc")
	
	'NewTextbox("btn3", 1, 10, 10, 100, 50)
	NewTextblock("bdddd", 1, 100, 90, 100, 50)
	
end function

Public Function Create_Window cdecl Alias "Create_Window" (title as String, name_win as string, typewin as integer, SX as integer , SY as integer, PX as integer, PY as integer, opacity as integer, WindowCR as integer, WindowCG as integer, WindowCB as integer) as integer
    'print title
    'print name_win
    'print settings
    ' We declare all the window environment    
	' iActiveWindow += 1 
	NewWindow(name_win, PX, PY, SX, SY, title, &h9e9e9e, WindowCR, WindowCG, WindowCB)
end function 

Sub DoEvents() '...'
'Background()
	For i As Integer = 1 To UBound(WindowPTR)	'doevents of every window
		If WindowPTR(i) = 0 Then Continue For	'skip deleted windows
		WindowPTR(i)->DoEvents
	Next
	
	'Cpcdos_Mouse()
	WatchCPCWindows()
	CloseWindow()
	
End Sub

Sub MAINLOOP() '...'
	DoEvents()
'	Sleep( 1, 1 )

End Sub

Public function CpcLoop cdecl Alias "CpcLoop" () as integer
    DoEvents()
end function

Sub RePaint() '...'
	Cls
	'for each window
    'Background()
    
	PCopy 1, 0
	'PCopy 3,1
	For i As Integer = 1 To UBound(WindowPTR)
		If WindowPTR(i) = 0 Then Continue For
		WindowPTR(i)->redraw()
		WindowPTR(i)->Zorder = i
		For a As Integer = 1 To UBound(CanvaPTR)
			If CanvaPTR(a) = 0 Then Continue For
				If CanvaPTR(a)->pid = WindowPTR(i)->id Then	'if window has buttons Then
					'if window width is smaller than buttons position hide them
					If (CanvaPTR(a)->x2 + CanvaPTR(a)->sx + 8) >= WindowPTR(i)->sx Then
						CanvaPTR(a)->IsVisible = False 
						Continue For
					End If
					'if window height is smaller than buttons position hide them
					If (CanvaPTR(a)->y2 + CanvaPTR(a)->sy + TBH + 4) >= WindowPTR(i)->sy Then 
						CanvaPTR(a)->IsVisible = False 
						Continue For
					End If
					CanvaPTR(a)->x = WindowPTR(i)->x + CanvaPTR(a)->x2 + 4
					CanvaPTR(a)->y = WindowPTR(i)->y + CanvaPTR(a)->y2 + TBH
					CanvaPTR(a)->IsVisible = True 
					CanvaPTR(a)->redraw()
				End If
		Next

        For a As Integer = 1 To UBound(ButtonPTR)
			If ButtonPTR(a) = 0 Then Continue For
				If ButtonPTR(a)->pid = WindowPTR(i)->id Then	'if window has buttons Then
					'if window width is smaller than buttons position hide them
					If (ButtonPTR(a)->x2 + ButtonPTR(a)->sx + 8) >= WindowPTR(i)->sx Then
						ButtonPTR(a)->IsVisible = False 
						Continue For
					End If
					'if window height is smaller than buttons position hide them
					If (ButtonPTR(a)->y2 + ButtonPTR(a)->sy + TBH + 4) >= WindowPTR(i)->sy Then 
						ButtonPTR(a)->IsVisible = False 
						Continue For
					End If
					ButtonPTR(a)->x = WindowPTR(i)->x + ButtonPTR(a)->x2 + 4
					ButtonPTR(a)->y = WindowPTR(i)->y + ButtonPTR(a)->y2 + TBH
					ButtonPTR(a)->IsVisible = True 
					ButtonPTR(a)->redraw()
				End If
            
		Next

        For b As Integer = 1 To UBound(TextboxPTR)
			If TextboxPTR(b) = 0 Then Continue For
				If TextboxPTR(b)->pid = WindowPTR(i)->id Then	'if window has buttons Then
					'if window width is smaller than buttons position hide them
					If (TextboxPTR(b)->x2 + TextboxPTR(b)->sx + 8) >= WindowPTR(i)->sx Then
						TextboxPTR(b)->IsVisible = False 
						Continue For
					End If
					'if window height is smaller than buttons position hide them
					If (TextboxPTR(b)->y2 + TextboxPTR(b)->sy + TBH + 4) >= WindowPTR(i)->sy Then 
						TextboxPTR(b)->IsVisible = False 
						Continue For
					End If
					TextboxPTR(b)->x = WindowPTR(i)->x + TextboxPTR(b)->x2 + 4
					TextboxPTR(b)->y = WindowPTR(i)->y + TextboxPTR(b)->y2 + TBH
					TextboxPTR(b)->IsVisible = True 
					TextboxPTR(b)->redraw()
				End If
            
		Next

        For c As Integer = 1 To UBound(TextblockPTR)
			If TextblockPTR(c) = 0 Then Continue For
				If TextblockPTR(c)->pid = WindowPTR(i)->id Then	'if window has buttons Then
					'if window width is smaller than buttons position hide them
					If (TextblockPTR(c)->x2 + TextblockPTR(c)->sx + 8) >= WindowPTR(i)->sx Then
						TextblockPTR(c)->IsVisible = False 
						Continue For
					End If
					'if window height is smaller than buttons position hide them
					If (TextblockPTR(c)->y2 + TextblockPTR(c)->sy + TBH + 4) >= WindowPTR(i)->sy Then 
						TextblockPTR(c)->IsVisible = False 
						Continue For
					End If
					TextblockPTR(c)->x = WindowPTR(i)->x + TextblockPTR(c)->x2 + 4
					TextblockPTR(c)->y = WindowPTR(i)->y + TextblockPTR(c)->y2 + TBH
					TextblockPTR(c)->IsVisible = True 
					TextblockPTR(c)->redraw()
				End If
            
		Next

        For d As Integer = 1 To UBound(PictureboxPTR)
			If PictureboxPTR(d) = 0 Then Continue For
				If PictureboxPTR(d)->pid = WindowPTR(i)->id Then	'if window has buttons Then
					'if window width is smaller than buttons position hide them
					If (PictureboxPTR(d)->x2 + PictureboxPTR(d)->sx + 8) >= WindowPTR(i)->sx Then
						PictureboxPTR(d)->IsVisible = False 
						Continue For
					End If
					'if window height is smaller than buttons position hide them
					If (PictureboxPTR(d)->y2 + PictureboxPTR(d)->sy + TBH + 4) >= WindowPTR(i)->sy Then 
						PictureboxPTR(d)->IsVisible = False 
						Continue For
					End If
					PictureboxPTR(d)->x = WindowPTR(i)->x + PictureboxPTR(d)->x2 + 4
					PictureboxPTR(d)->y = WindowPTR(i)->y + PictureboxPTR(d)->y2 + TBH
					PictureboxPTR(d)->IsVisible = True 
					PictureboxPTR(d)->redraw()
				End If
            
		Next

	Next
	
	Flip()
	Sleep( 1, 1 )
End Sub

Sub CloseWindow()
	For i As Integer = 1 To UBound(WindowPTR) 'for every window
			If WindowPTR(i) = 0 Then Continue For	'skip deleted windows    
    			'---- Close -------------------------------------------------------------
			'if close window
			If WindowPTR(i)->doCloseWindow = True Then
				'delete each control
				'delete CanvaPTR ----------------------------
				'---------------------------------------------
				'delete window
				Delete WindowPTR(i)
				WindowPTR(i) = 0
			End If
	Next
	RePaint()
End Sub

''============================================================================================================================================================================================================================================================================================================================================================''
'' Resolution ElieDraw for Cpcdos OS2.2

Public function Test_CPC_resolution cdecl Alias "Test_CPC_resolution" (SCRX as integer, SCRY as integer) as integer
    Dim Test as integer
    Test = Screenres (SCRX,SCRY,32,5)
    if Test = 0 then 
        print "Resolution is set to : " & SCRX & "x" & SCRY
		cpcccp_.cpcdos_command("set/ CPC.SCR.X = " & SCRX)
		cpcccp_.cpcdos_command("set/ CPC.SCR.Y = " & SCRY)
        MAXW = SCRX
        MAXH = SCRY
    else 
        print "Error! Resolution will be set to 800x600"
        MAXW = 800
        MAXH = 600
		cpcccp_.cpcdos_command("set/ CPC.SCR.X = 800")
		cpcccp_.cpcdos_command("set/ CPC.SCR.Y = 600")
    end if
    function = Test
end function

Public function Set_Window_GUI_Value cdecl Alias "Set_Window_GUI_Value" (SCRX as integer, SCRY as integer) as integer
        print "Window GUI Value"
        ' Position titre XY
        ' Couleur titre
        ' hauteur barre haute = 7 px alors bar bas depend du haut
        ' design_Image_sx[3] = 7
        ' design_Image_sy[3] = 7
        ' taille fenetre
        ' type fenetre > CCP


end function

Public Function sci_list_screen cdecl Alias "sci_list_screen" (SX as integer, SY as integer) as string
    
	Dim ModeBpp 	as integer = ScreenList(32)
	Dim Retour 		as String
    
	While (ModeBpp <> 0)
		Retour = Retour & HiWord(ModeBpp) & "x" & LoWord(ModeBpp) & " "
		ModeBpp = ScreenList()
	Wend
	print "Available resolution in 32 bits: " & Retour
	
end function