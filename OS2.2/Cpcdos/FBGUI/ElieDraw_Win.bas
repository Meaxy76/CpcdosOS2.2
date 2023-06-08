
#include once "GUI.bi"
#include once "ElieDraw_Win.bi"


#define TBH 25   'titlebar height
#define MINW 80 'min width
#define MINH 30 'min height

#include once "xfont.bi"
#include once "ElieDraw_ctrl.bi"
#include once "GUI.bi"

Declare Sub NewWindow(hName As String, x As Integer, y As Integer, sx As Integer, sy As Integer, title As String, c As ULong, WR as Integer, WG as Integer, WB as Integer)
Declare Sub WatchCPCWindows()
dim shared extsx as integer 
dim shared extsy as integer 
Dim Shared As xfont.interface font1
Dim As Integer result

Type CPCWindow Extends hControl '...'
    As Integer x2, y2, sx2, sy2		'hold old x,y,width,heigt
    As integer typew
    As Boolean hasCloseButton
    As Boolean hasMinimizeButton
    As Boolean hasMaximizeButton
    Declare Constructor()
    Declare Constructor(As String, As Integer, As Integer, As Integer, As Integer, As Integer, As String, As ULong, as Integer, as Integer, as Integer)
    Declare Sub redraw()
    Declare Sub DoEvents()
    Declare Sub onCloseWindow()
    As Boolean doCloseWindow
    Declare Sub onFocusWindow()
    As Boolean doGetFocus
    Declare Sub onMoveWindow()
    As Boolean doMoveWindow
    Declare Sub onMinimizeWindow()
    As Boolean doMinimizeWindow
    Declare Sub onMaximizeWindow()
    As Boolean doMaximizeWindow
    As UInteger Zorder
    As Boolean doRestoreMinimize
    As Boolean doRestoreMaximize
    
End Type

Dim Shared iWindowPopulation As UInteger = 0	'holds the nuMouseButtoner of created windows
Dim Shared WindowPTR() As CPCWindow Ptr			'array of ptr windows

Constructor CPCWindow() '...'
End Constructor

Constructor CPCWindow(hName1 As String, id1 As Integer, X1 As Integer, Y1 As Integer, sX1 As Integer, sY1 As Integer, t1 As String, c1 As ULong, WR1 as Integer, WG1 as Integer, WB1 as Integer)
  This.hName = hName1
  This.id = id1
  This.x = X1
  This.y = Y1
  This.sx = sX1
  This.sy = sY1
  
  This.x2 = X1
  This.y2 = Y1
  This.sx2 = sX1
  This.sy2 = sY1
  
  This.title = t1
  This.c = c1
  This.WR = WR1
  This.WG = WG1
  This.WB = WB1

  This.hasCloseButton = True
  This.hasMaximizeButton = True
  This.hasMinimizeButton = True
  This.doCloseWindow = False
  This.doGetFocus = False
  This.doMoveWindow = False
  This.doMinimizeWindow = False
  This.doRestoreMinimize = False 
  This.doMaximizeWindow = False
  This.doRestoreMaximize = False 

  This.typew = 0
  
  This.Zorder = 0
  redraw()
End Constructor

Sub CPCWindow.DoEvents() '...'
	This.onCloseWindow()
	This.onFocusWindow()
	This.onMoveWindow()
	This.onMinimizeWindow()
	This.onMaximizeWindow()
End Sub

Sub CPCWindow.onMoveWindow()
	Dim As Integer MouseX, MouseY, MouseButton

    GetMouse MouseX, MouseY, , MouseButton
    if typew = 0 then
        If MouseButton = 1 Then
            If MouseX > This.x And MouseX < This.x + This.sx And MouseY > This.y And MouseY < This.y + TBH Then
                This.doMoveWindow = True
                iActiveWindow = This.id
            End If
        End If
    end if
End Sub

Sub CPCWindow.onMaximizeWindow() '...'
	Dim As Integer MouseX, MouseY, MouseButton

    GetMouse MouseX, MouseY, , MouseButton
    If MouseButton = 1 Then
		If MouseX > x + sx - 41 And MouseX < x + sx - 41 + 6 And MouseY > y + TBH / 2 - 3 And MouseY < y + TBH Then
'			title = "Window " & id & " " & Str(MouseX) & " " & Str(MouseY)
			This.doMinimizeWindow = False 
    		If This.doMaximizeWindow = False Then 
    			This.doMaximizeWindow = True
    			This.x2 = This.x
    			This.y2 = This.y
    			This.sx2 = This.sx
    			This.sy2 = This.sy
    		Else
    			This.doMaximizeWindow = False
    			This.doRestoreMaximize = True 
    			This.x = This.x2
    			This.y = This.y2
    			This.sx = This.sx2
    			This.sy = This.sy2
    		End If
    		iActiveWindow = This.id
    		This.doGetFocus = True
    		This.onFocusWindow()
    	End If
    End If
End Sub

Sub CPCWindow.onMinimizeWindow() '...'
	Dim As Integer MouseX, MouseY, MouseButton

    GetMouse MouseX, MouseY, , MouseButton
    If MouseButton = 1 Then
		If MouseX > x + sx - 27 And MouseX < x + sx - 27 + 6 And MouseY > y + TBH / 2 - 3 And MouseY < y + TBH Then
'			title = "Window " & id & " " & Str(MouseX) & " " & Str(MouseY)
			This.doMaximizeWindow = False 
    		If This.doMinimizeWindow = False Then 
    			This.doMinimizeWindow = True
    			This.sy2 = This.sy
    		Else
    			This.doMinimizeWindow = False
    			This.doRestoreMinimize = True 
    			This.sy = This.sy2
    		End If
    		iActiveWindow = This.id
    	End If
    End If
End Sub

Sub CPCWindow.onFocusWindow() '...'
	Dim As Integer MouseX, MouseY, MouseButton

    GetMouse MouseX, MouseY, , MouseButton
    If MouseButton = 1 Then
    	If MouseX > This.x And MouseX < This.x + This.sx And MouseY > This.y And MouseY < This.y + This.sy Then
    		This.doGetFocus = True
    		iActiveWindow = This.id
    	End If
    End If
End Sub

Sub CPCWindow.onCloseWindow() '...'
	Dim As Integer MouseX, MouseY, MouseButton

	GetMouse MouseX, MouseY, , MouseButton
	If MouseButton = 1 Then
		If MouseX > x + sx - 13 And MouseX < x + sx - 13 + 6 And MouseY > y + TBH / 2 - 3 And MouseY < y + TBH Then
			'title = "Window " & id & " " & Str(MouseX) & " " & Str(MouseY)
			doCloseWindow = True
			iActiveWindow = This.id 
		End If
	End If
End Sub

Sub CPCWindow.redraw() '...'
    
    extsx = sx
    extsy = sy
   'TYPE:0

    font1.loadfont("bahns.xf",1) 'Load to FontIndex 1
    Dim As Any Ptr IMG_TEST
    Dim As Any Ptr CORNER_LEFT
    Dim As Any Ptr CORNER_RIGHT
    Dim As Any Ptr BETWEEN_CORNER
    Dim As Any Ptr UNDER_CORNERS
    Dim As Any Ptr BETWEEN_CORNER1
    Dim As Any Ptr UNDER_CORNERS1

    Dim as any ptr Close_Btn

    'IMG_TEST = charger_PNG("title.png", 32, 5, 200,25)

    CORNER_LEFT = charger_PNG("OS/MEDIA/GUI/WIN/WIN_TL.png", 32, 5, 7,7)
    CORNER_RIGHT = charger_PNG("OS/MEDIA/GUI/WIN/WIN_TR.png", 32, 5, 7,7)
    BETWEEN_CORNER = charger_PNG("OS/MEDIA/GUI/WIN/WIN_TM.png", 32, 5, 4,8)

    if CORNER_LEFT = false then
	print "ERROR"
    end if
    '
    UNDER_CORNERS = charger_PNG("OS/MEDIA/GUI/WIN/WIN_TM.png", 32, 5, 4,8)
    '
    UNDER_CORNERS1 = imagecreate(sx + 2, 19, RGBA(0, 0, 0, 0))
    IMG_change_size_quick(UNDER_CORNERS, UNDER_CORNERS1, x, x, 4, 8, sx + 2 , 19)

    BETWEEN_CORNER1 = imagecreate( sx - 13, 9 , RGBA(0, 0, 0, 0))
    IMG_change_size_quick(BETWEEN_CORNER, BETWEEN_CORNER1,x + 7, x, 4, 8, sx - 12, 9)
    put(x + 6, y - 1),BETWEEN_CORNER1, alpha


	'Line(x + 8, y + 8) - (x + 8 + sx, y + 8 + sy), RGB(10, 10, 10), BF		'non active frame

	If This.id = iActiveWindow Then
		Line(x , y + 25) - (x + sx, y + sy - 25), RGB(WR, WG, WB), BF		'non active frame

	Else
            Line(x, y + 25) - (x + sx, y + sy -25), RGB(WR, WG, WB), BF		'non active frame
	EndIf
    
    'put (x,y), IMG_TEST, Alpha
    put(x,y),CORNER_LEFT,Alpha
    put(x + sx - 7, y),CORNER_RIGHT,Alpha
    put(x - 1, y + 6), UNDER_CORNERS1, Alpha
    put(x + 7, y), BETWEEN_CORNER1, Alpha


	'Line(x + sx - 10, y + sy - 10) - (x + w, y + h), 0, BF	'angle
	'Line(x + 4, y + TBH) - (x + sx - 4, y + sy - 4), RGB(WR, WG, WB), BF	'box
    
	'line (x + 3, y + 3)-(x + 3, sy - 3), RGB(255, 255, 255), BF
	'line (x + 4, y + 4)-(x + 4, sy - 4), RGB(255, 255, 255), B

	'Draw String(x + 6, y + 9), title						'title
    font1.fontindex = 1
    font1.backcolor = 0
    font1.forecolor = Rgba(255,255,255,255)
    font1.drawstring(,title, x + 4, y + 2)



     
	
	If This.hasCloseButton = True Then
	'	'close window button
	'	Circle (x + sx - 10, (y + TBH / 2)), 6, RGB(255, 0, 0), , , , F
	'	Draw String(x + sx - 13, y + TBH / 2 - 3), "X", RGB(255, 255, 255)
        
        Close_Btn = charger_PNG("OS/MEDIA/GUI/WIN/B_CLOSE.png", 32, 5, 20,20)
    
        put(x + sx - 27, y + 2),Close_Btn,Alpha
	End If
	
	'If This.hasMinimizeButton = True Then 
	'	'minimize window button
	'	Circle (x + sx - 24, (y + TBH / 2)), 6, RGB(0, 255, 0), , , , F
	'	Draw String(x + sx - 27, y + TBH / 2 - 3), "-", RGB(255, 255, 255)
	'EndIf
	
	'If This.hasMaximizeButton = True Then 
	'	'maximize window button
	'	Circle (x + sx - 38, (y + TBH / 2)), 6, RGB(0, 0, 255), , , , F
	'	Draw String(x + sx - 41, y + TBH / 2 - 3), "+", RGB(255, 255, 255)
	'EndIf
	
End Sub

Sub NewWindow(hName As String, x As Integer, y As Integer, sx As Integer, sy As Integer, title As String, c As ULong, WR as Integer, WG as Integer, WB as Integer) '...'
	'new window
	iWindowPopulation += 1
	ReDim Preserve WindowPTR(1 To iWindowPopulation)
	WindowPTR(iWindowPopulation) = New CPCWindow(hName, iWindowPopulation, x, y, sx, sy, title, c, WR, WG, WB)
End Sub

Sub WatchCPCWindows()

	Dim As Integer MouseX, MouseY, MouseButton, X1, Y1
    GetMouse MouseX, MouseY, , MouseButton
    X1 = MouseX
    Y1 = MouseY
    If MouseButton = 1 Then
		For i As Integer = UBound(WindowPTR) To LBound(WindowPTR) Step -1
			If WindowPTR(i) = 0 Then Continue For
			
			'----- Move -------------------------------------------------------------
			If WindowPTR(i)->doMoveWindow = True Then
				WindowPTR(i)->doMoveWindow = False
				If WindowPTR(i)->id = CInt(iActiveWindow) Then
	                Swap WindowPTR(i), WindowPTR(UBound(WindowPTR))
                    Do
                        GetMouse MouseX,MouseY,,MouseButton
                        WindowPTR(UBound(WindowPTR))->x += MouseX - X1
                        WindowPTR(UBound(WindowPTR))->y += MouseY - Y1
				        WindowPTR(i)->sx = WindowPTR(i)->sx
				        WindowPTR(i)->sy = WindowPTR(i)->sy
                        

                        X1 = MouseX
                        Y1 = MouseY
                        Repaint()
                        Sleep(1, 1)
                    Loop Until MouseButton = 0
					Exit For
				EndIf
			End If
			'----Get Focus --------------------------------------------------
			If WindowPTR(i)->doGetFocus = True Then
				WindowPTR(i)->doGetFocus = False
				If WindowPTR(i)->id = CInt(iActiveWindow) Then
					Swap WindowPTR(i), WindowPTR(UBound(WindowPTR))
'					RePaint()
					Exit For
				EndIf
			End If
		Next
    End If

	For i As Integer = 1 To UBound(WindowPTR) 'doevents of every window
    		''---- Close -------------------------------------------------------------
			If WindowPTR(i) = 0 Then Continue For	'skip deleted windows    
			''if close window
			If WindowPTR(i)->doCloseWindow = True Then
				Delete WindowPTR(i)
				WindowPTR(i) = 0
			End If
			'--- Minimize ------------------------------------------------------
			'if minimize window
			'If WindowPTR(i) = 0 Then Continue For	'skip deleted windows    
			'If WindowPTR(i)->doMinimizeWindow = True Then
			'	WindowPTR(i)->sy = MINH
			'ElseIf WindowPTR(i)->doRestoreMinimize = True Then 
			'	WindowPTR(i)->sy = WindowPTR(i)->sy2
			'	WindowPTR(i)->doRestoreMinimize = False 
			'End If
			'------ Maximize ------------------------------------------------------
			'if maximize window
			'If WindowPTR(i) = 0 Then Continue For	'skip deleted windows    
			'If WindowPTR(i)->doMaximizeWindow = True Then
			'	WindowPTR(i)->x = 0
			'	WindowPTR(i)->y = 0
			'	WindowPTR(i)->sx = MAXW
			'	WindowPTR(i)->sy = MAXH
			'ElseIf WindowPTR(i)->doRestoreMaximize = True Then 
			'	WindowPTR(i)->x = WindowPTR(i)->x2
			'	WindowPTR(i)->y = WindowPTR(i)->y2
			'	WindowPTR(i)->sx = WindowPTR(i)->sx2
			'	WindowPTR(i)->sy = WindowPTR(i)->sy2
			'	WindowPTR(i)->doRestoreMaximize = False 
			'End If
	Next
	Repaint()
End Sub
