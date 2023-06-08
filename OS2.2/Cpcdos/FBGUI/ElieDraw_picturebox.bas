'#include "xfont.bi"
'Dim Shared As xfont.interface font1
'Dim As Integer result
'result = font1.loadfont("freesans.xf",1) 'Load to FontIndex 1

Type PictureboxH Extends hControl
	Declare Constructor()
	Declare Constructor(as String, As Integer, As Integer, As Integer, As Integer, As Integer, As Integer)
	Declare Sub redraw()
	As Integer x2,y2,w2,h2,wtx1,htx1
	As Boolean IsVisible
End Type

Constructor PictureboxH()
End Constructor

Constructor PictureboxH(hName1 As String, id1 As Integer, pid1 As Integer, x1 As Integer, y1 As Integer, w1 As Integer, h1 As Integer)
  This.hName = hName1
  This.id = id1
  This.pid = pid1
  This.x2 = x1
  This.y2 = y1
  This.wtx1 = w1
  This.htx1 = h1
  'This.w2 = w1
  'This.h2 = h1
  This.x = WindowPTR(pid)->x + x1 + 4
  This.y = WindowPTR(pid)->y + y1 + TBH

  This.IsVisible = True
  redraw()
End Constructor


Sub PictureboxH.redraw()

  Dim As Any Ptr MyPicEnd
  Dim As Any Ptr MyPic

  MyPicEnd = imagecreate(wtx1, htx1, RGBA(0, 0, 0, 0))
  
  MyPic = charger_PNG("cmd.png", 32, 5, 128,128)
  
  IMG_change_size_quick(MyPic, MyPicEnd, x, x, 128, 128, wtx1 , htx1)
  put(x, y),MyPicEnd, alpha

End Sub


Dim Shared PictureboxPopulation As UInteger = 0	'holds the number of created Pictureboxs
Dim Shared PictureboxPTR() As PictureboxH Ptr			'array of ptr PictureboxH

Declare Sub NewPicturebox(hName As String, pid As Integer, x As Integer, y As Integer, w As Integer, h As Integer)

Sub NewPicturebox(hName As String, pid As Integer, x As Integer, y As Integer, w As Integer, h As Integer)
	'new Picturebox
	PictureboxPopulation += 1
	ReDim Preserve PictureboxPTR(1 To PictureboxPopulation)
	PictureboxPTR(PictureboxPopulation) = New PictureboxH(hName, PictureboxPopulation, pid, x, y, w, h)
End Sub
