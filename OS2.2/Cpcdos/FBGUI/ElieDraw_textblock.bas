'#include "xfont.bi"
'Dim Shared As xfont.interface font1
'Dim As Integer result
'result = font1.loadfont("freesans.xf",1) 'Load to FontIndex 1

Type TextblockH Extends hControl
	Declare Constructor()
	Declare Constructor(as String, As Integer, As Integer, As Integer, As Integer, As Integer, As Integer)
	Declare Sub redraw()
	As Integer x2,y2,w2,h2,wtx1,htx1
	As Boolean IsVisible
End Type

Constructor TextblockH()
End Constructor

Constructor TextblockH(hName1 As String, id1 As Integer, pid1 As Integer, x1 As Integer, y1 As Integer, w1 As Integer, h1 As Integer)
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


Sub TextblockH.redraw()

	Line(x , y) - (x + wtx1, y + htx1), RGB(255, 255, 254), BF		'non active frame
    Line(x, y) - (x + wtx1, y), RGB(0, 0, 0), B
    Line(x + wtx1, y) - (x, y+htx1), RGB(0, 0, 0), B

    font1.backcolor = 0
    font1.forecolor = Rgba(0,0,0,255)
    font1.drawstring(,"Textblock!!!", x + 4, y + 2)
    
End Sub


Dim Shared TextblockPopulation As UInteger = 0	'holds the number of created Textblocks
Dim Shared TextblockPTR() As TextblockH Ptr			'array of ptr TextblockH

Declare Sub NewTextblock(hName As String, pid As Integer, x As Integer, y As Integer, w As Integer, h As Integer)

Sub NewTextblock(hName As String, pid As Integer, x As Integer, y As Integer, w As Integer, h As Integer)
	'new Textblock
	TextblockPopulation += 1
	ReDim Preserve TextblockPTR(1 To TextblockPopulation)
	TextblockPTR(TextblockPopulation) = New TextblockH(hName, TextblockPopulation, pid, x, y, w, h)
End Sub