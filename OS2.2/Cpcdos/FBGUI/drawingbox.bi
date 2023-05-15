

Type CanvaH Extends hControl
	Declare Constructor()
	Declare Constructor(as String, As Integer, As Integer, As Integer, As Integer, As Integer, As Integer)
	Declare Sub redraw()
	As Integer x2,y2,w2,h2,w,h
	As Boolean IsVisible
End Type

Constructor CanvaH()
End Constructor

Constructor CanvaH(hName1 As String, id1 As Integer, pid1 As Integer, x1 As Integer, y1 As Integer, w1 As Integer, h1 As Integer)
  This.hName = hName1
  This.id = id1
  This.pid = pid1
  This.x2 = x1
  This.y2 = y1
  This.w = w1
  This.h = h1
  'This.w2 = w1
  'This.h2 = h1
  This.x = WindowPTR(pid)->x + x1 + 4
  This.y = WindowPTR(pid)->y + y1 + TBH

  This.IsVisible = True
  redraw()
End Constructor


Sub CanvaH.redraw()
'	This.x = pWindows(This.pid)->x + 4
'	This.y = pWindows(This.pid)->y + TBH

'	This.x = pWindows(pid)->x + This.x2 + 4
'	This.y = pWindows(pid)->y + This.y2 + TBH

    Dim As Any Ptr Image_set111  'displayed image
    Image_set111 = Imagecreate(w, h ,Rgb(255,255,254))  'save image while screen is being worked on

	Put (x,y),Image_set111,Pset  'copy to screen
	'Line(x, y) - (x + w, y + h), c, BF		'active frame
	'Draw String(x + 4, y + 8), title		'title
End Sub


Dim Shared CanvaPopulation As UInteger = 0	'holds the number of created buttons
Dim Shared CanvaPTR() As CanvaH Ptr			'array of ptr CanvaH

Declare Sub NewCanva(hName As String, pid As Integer, x As Integer, y As Integer, w As Integer, h As Integer)

Sub NewCanva(hName As String, pid As Integer, x As Integer, y As Integer, w As Integer, h As Integer)
	'new button
	CanvaPopulation += 1
	ReDim Preserve CanvaPTR(1 To CanvaPopulation)
	CanvaPTR(CanvaPopulation) = New CanvaH(hName, CanvaPopulation, pid, x, y, w, h)
End Sub