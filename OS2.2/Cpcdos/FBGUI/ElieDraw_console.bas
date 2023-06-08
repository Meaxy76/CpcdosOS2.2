'#include "xfont.bi"
'Dim Shared As xfont.interface font1
'Dim As Integer result
'result = font1.loadfont("freesans.xf",1) 'Load to FontIndex 1

Type ConsoleH Extends hControl
	Declare Constructor()
	Declare Constructor(as String, As Integer, As Integer, As Integer, As Integer, As Integer, As Integer)
	Declare Sub redraw()
	As Integer x2,y2,w2,h2,wtx1,htx1
	As Boolean IsVisible
End Type

Constructor ConsoleH()
End Constructor

Constructor ConsoleH(hName1 As String, id1 As Integer, pid1 As Integer, x1 As Integer, y1 As Integer, w1 As Integer, h1 As Integer)
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

    Declare Sub DoEvents()
    This.IsVisible = True
    redraw()
End Constructor

sub ConsoleH.DoEvents()
    print "OK"
end sub

'Sub ConsoleH.MouseEnter()
' end sub

'Sub ConsoleH.MouseClick()
'end sub

'Sub ConsoleH.MouseLeave()
'end sub

' To get CpcdosCP console buffer in gui
'Function ConsoleBuffer()

Sub ConsoleH.redraw()

	Line(x , y) - (x + wtx1, y + htx1), RGB(255, 255, 254), BF		'non active frame
    Line(x, y) - (x + wtx1, y), RGB(0, 0, 0), B
    Line(x + wtx1, y) - (x, y+htx1), RGB(0, 0, 0), B

    font1.backcolor = 0
    font1.forecolor = Rgba(0,0,0,255)
    font1.drawstring(,"Console!!!", x + 4, y + 2)
    
End Sub


Dim Shared ConsolePopulation As UInteger = 0	'holds the number of created Consoles
Dim Shared ConsolePTR() As ConsoleH Ptr			'array of ptr ConsoleH

Declare Sub NewConsole(hName As String, pid As Integer, x As Integer, y As Integer, w As Integer, h As Integer)

Sub NewConsole(hName As String, pid As Integer, x As Integer, y As Integer, w As Integer, h As Integer)
	'new Console
	ConsolePopulation += 1
	ReDim Preserve ConsolePTR(1 To ConsolePopulation)
	ConsolePTR(ConsolePopulation) = New ConsoleH(hName, ConsolePopulation, pid, x, y, w, h)
End Sub