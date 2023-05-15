Namespace xfont
'____________________________________________________________________________________________________________________________________________________
    Sub Interface.Backend_Draw24Mode0Ex(ByVal X As Short, ByVal Y As Short) 'clip
        'No scale, no rotate, clipping
        Dim As Short w, h
        Dim i As uShort
        Dim StartPitch  As Short
        Dim CharSelect  As uShort
        Dim As Short xs, ys, yloop, xloop
        Dim As Integer xp, yp
        Dim As uInteger pp, yfp
        Dim fontptr As uInteger
        Dim Buffer As uLong Ptr 'uInteger Ptr
        Dim AlphaVal As uByte
        Dim As uByte    R,G,B
        Dim As uLong Col 'uInteger
        Dim As Single   Alpha1,Alpha2
        
        
        If X > ImageBuffer.Width-1 Then Exit Sub
        'Drawing background rect -----------------------------------------------
            w = BackendStringWidth
            If w>0 Then
                If w+X > ImageBuffer.Width-1 Then w = ImageBuffer.Width - x - 1
                h = FontCollection(SelectedFontIndex).Header.FontHeight            
                If Y+h> ImageBuffer.Height-1 Then h = ImageBuffer.Height - y - 1
                xs = X : If xs<0 Then xs=0
                ys = Y : If ys<0 Then ys=0
                'Print xs, ys, X+w, Y+h
                If clipx1 > xs Then xs = clipx1
                If clipy1 > ys Then ys = clipy1
                If (xs + w > clipx2) Then w = clipx2 - x
                If (ys + h > clipy2) Then h = clipy2 - y
                BackendDrawRect24(xs, ys, X+w, Y+h)
            End If

        '-----------------------------------------------------------------------
        'Draw Text +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
            If xForeColorCompat.Alpha = 0 Then
                Exit Sub 'Not draw any char
            ElseIf xForeColorCompat.Alpha = &hFF Then 
                'Draw with masking from font only -----------------------------------------
                Buffer = ImageBuffer.TargetPtr
                StartPitch = x 
                    For i = 0 To CharLen-1
                        CharSelect = CharVal(i)
                        If Not FontCollection(SelectedFontIndex).UsedFlag(CharSelect) Then
                            CharSelect = 0  'Pakai Chr 0
                        End If
                        
                        With FontCollection(SelectedFontIndex).Char(CharSelect)
                            StartPitch+=.Start
                            'Print "s = " & .Start
                            'If .Height = 0 Then Exit For
                            'Print .Width & "x" & .height
                            'Print CharSelect
                            For yloop = .Top To .Top +.Height -1
                                yp = Y + yloop
                                If (yp >= clipy1) And (yp <= clipy2) Then
                                    If yp >= ImageBuffer.Height Then Exit For
                                    If yp >= 0 Then
                                        yp *= ImageBuffer.Pitch
                                        yfp = (yloop - .top) * .Width
                                        For xloop = 0 To .Width -1
                                            xp = StartPitch + xloop
                                            If (xp >= clipx1) And (xp <= clipx2) Then
                                                If xp >= ImageBuffer.Width Then Exit For
                                                If xp >= 0 Then
                                                    pp = xp + yp
                                                    fontptr = xloop+yfp
                                                    AlphaVal = .Sequence[fontptr]
                                                    If AlphaVal = 0 Then
                                                        Buffer[pp] = xForeColorCompat.Palette
                                                    ElseIf AlphaVal <&hFF Then
                                                        'Blend
                                                        Col = buffer[pp] And &HFFFFFF
                                                        With xForeColorCompat
                                                            R = ((Col Shr 16)*AlphaFactor255(AlphaVal))    + (iAlphaFactor255(AlphaVal)*.Red)
                                                            G = (((Col And &HFF00) Shr 8) * AlphaFactor255(AlphaVal)) + (iAlphaFactor255(AlphaVal)*.Green)
                                                            B = ((Col And &hFF) * AlphaFactor255(AlphaVal)) + (iAlphaFactor255(AlphaVal)*.Blue)
                                                        End With
                                                        Buffer[pp]= Rgb(R,G,B)
                                                    End If     
                                                End If 
                                            End If    
                                        Next xloop
                                    End If
                                End If
                            Next yloop
                            StartPitch+=.Pitch    
                            If StartPitch >= ImageBuffer.Width Then Exit For     
                        End With
                    Next i
                '--------------------------------------------------------------------------        
            Else
                'Should mix/blend with background
                Buffer = ImageBuffer.TargetPtr
                StartPitch = x
                For i = 0 To CharLen-1
                    CharSelect = CharVal(i)
                    If Not FontCollection(SelectedFontIndex).UsedFlag(CharSelect) Then
                        CharSelect = 0  'Pakai Chr 0
                    End If
                    With FontCollection(SelectedFontIndex).Char(CharSelect)
                        StartPitch+=.Start
                        For yloop = .Top To .Top +.Height -1
                                yp = Y + yloop
                                If (yp >= clipy1) And (yp <= clipy2) Then
                                    If yp >= ImageBuffer.Height Then Exit For
                                    If yp >= 0 Then
                                        yp *= ImageBuffer.Pitch
                                        yfp = (yloop - .top) * .Width
                                        For xloop = 0 To .Width -1
                                            xp = StartPitch + xloop
                                            If (xp >= clipx1) And (xp <= clipx2) Then
                                                If xp >= ImageBuffer.Width Then Exit For
                                                If xp >= 0 Then
                                                    pp = xp + yp
                                                    fontptr = xloop+yfp
                                                    AlphaVal = .Sequence[fontptr]
                                                    If AlphaVal<&hff Then
                                                        Col = buffer[pp] And &HFFFFFF
                                                        If AlphaVal=0 Then
                                                            'Col = buffer[pp] And &HFFFFFF
                                                            With xForeColorCompat
                                                                R = ((Col Shr 16) * .iAlphafactor) + .AfRed
                                                                G = (((Col And &HFF00) Shr 8) * .iAlphaFactor) + .AfGreen
                                                                B = ((Col And &hFF) * .iAlphaFactor) + .AfBlue
                                                            End With
                                                            'Buffer[pp]= Rgb(R,G,B)
                                                        Else
                                                            With xForeColorCompat
                                                                Alpha1=iAlphaFactor255(AlphaVal)* .AlphaFactor
                                                                Alpha2=1-Alpha1
                                                                R = ((Col Shr 16  )*Alpha2) + (Alpha1*.Red)
                                                                G = (((Col And &HFF00) Shr 8)*Alpha2) + (Alpha1*.Green)     
                                                                B = ((Col And &hFF)*Alpha2) + (Alpha1*.Blue)
                                                            End With   
                                                        End If
                                                        Buffer[pp]= Rgb(R,G,B)
                                                    End If
                                                End If 
                                            End If
                                        Next xloop
                                    End If
                                End If
                            Next yloop
                            StartPitch+=.Pitch    
                            If StartPitch >= ImageBuffer.Width Then Exit For
                    End With
                Next i
            End If       
        '+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    End Sub
'____________________________________________________________________________________________________________________________________________________    
    Sub Interface.Backend_Draw24Mode1Ex(ByVal x As Short, ByVal y As Short, ByVal ScaleX As Double, ByVal ScaleY As Double)
        
        Dim Buffer As uLong Ptr 'uInteger Ptr
        Dim StartPitch As Double
        Dim Spp As Short'Integer
        Dim As Short yloop, xloop
        Dim As Short i, CharSelect
        Dim As Integer xp, yp
        Dim As uInteger yfp, pp, fontptr
        Dim As uLong Col 'uInteger
        Dim As uShort ypoint
        Dim As Double iScaleY, iScaleX
        Dim As uByte AlphaVal
        Dim As uByte    R,G,B
        Dim As Single   Alpha1,Alpha2
        Dim As Short w, h
        Dim As Short xs, ys
        
        If ScaleX<0 Or ScaleY<0 Then
            LastErrorCode = InvalidHandle
            Exit Sub
        End If
        
        If ScaleX=0 Or ScaleY=0 Then Exit Sub
        
        If X >= ImageBuffer.Width Then Exit Sub
        'Drawing background rect -----------------------------------------------
            w = Int(BackendStringWidth * ScaleX)
            If w>0 Then
                If w+X >= ImageBuffer.Width Then w = ImageBuffer.Width - x - 1
                h = Int(FontCollection(SelectedFontIndex).Header.FontHeight * ScaleY)            
                If Y+h>= ImageBuffer.Height Then h = ImageBuffer.Height - y - 1
                xs = X : If xs<0 Then xs=0
                ys = Y : If ys<0 Then ys=0
                If clipx1 > xs Then xs = clipx1
                If clipy1 > ys Then ys = clipy1
                If (xs + w > clipx2) Then w = clipx2 - x
                If (ys + h > clipy2) Then h = clipy2 - y
                BackendDrawRect24(xs, ys, X+w, Y+h)
            End If
        '-----------------------------------------------------------------------
        'Draw Text +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
            If xForeColorCompat.Alpha = 0 Then
                Exit Sub 'Not draw any char
            ElseIf xForeColorCompat.Alpha = &hFF Then
                'Draw with masking from font only -----------------------------------------
                Buffer = ImageBuffer.TargetPtr
                StartPitch = x
                iScaleY=1/ScaleY
                iScaleX=1/ScaleX
                    For i = 0 To CharLen-1
                        CharSelect = CharVal(i)
                        If Not FontCollection(SelectedFontIndex).UsedFlag(CharSelect) Then
                            CharSelect = 0  'Pakai Chr 0
                        End If
                        
                        With FontCollection(SelectedFontIndex).Char(CharSelect)
                            StartPitch += (.Start * ScaleX)
                            spp=Int(StartPitch)
                            'If .Height = 0 Then Exit For
                            ypoint = CShort(.Top*ScaleY)
                            For yloop = ypoint To Int((.Top*ScaleY) + (.Height*ScaleY)) -1
                                yp = Y + yloop
                                If (yp >= clipy1) And (yp <= clipy2) Then
                                    If yp >= ImageBuffer.Height Then Exit For
                                    If yp >= 0 Then
                                        yp *= ImageBuffer.Pitch
                                        yfp = Int((yloop - ypoint)*iScaleY) * .Width
                                        For xloop = 0 To Int(.Width*ScaleX) -1
                                            xp = Spp + xloop 'NB : Belum dirotasi
                                            If (xp >= clipx1) And (xp <= clipx2) Then
                                                'Print Spp , xloop, StartPitch, .Start
                                                If xp >= ImageBuffer.Width Then Exit For
                                                
                                                'Print Spp , xloop
                                                'Exit For
                                                If xp >= 0 Then
                                                    pp = xp + yp
                                                    fontptr = Int(xloop * iScaleX) + yfp
                                                    AlphaVal = .Sequence[fontptr]
                                                    If AlphaVal = 0 Then
                                                        Buffer[pp] = xForeColorCompat.Palette
                                                    ElseIf AlphaVal <&hFF Then
                                                        'Blend
                                                        Col = buffer[pp] And &HFFFFFF
                                                        With xForeColorCompat
                                                            R = ((Col Shr 16)*AlphaFactor255(AlphaVal))    + (iAlphaFactor255(AlphaVal)*.Red)
                                                            G = (((Col And &HFF00) Shr 8) * AlphaFactor255(AlphaVal)) + (iAlphaFactor255(AlphaVal)*.Green)
                                                            B = ((Col And &HFF) * AlphaFactor255(AlphaVal)) + (iAlphaFactor255(AlphaVal)*.Blue)
                                                        End With
                                                        Buffer[pp]= Rgb(R,G,B)
                                                    End If
                                                End If 
                                            End If
                                        Next xloop
                                    End If
                                End If
                            Next yloop
                            StartPitch += (.Pitch*ScaleX)    
                            If StartPitch >= ImageBuffer.Width Then Exit For 'NB: belum dirotasi!    
                        End With
                    Next i                
            Else
                'Should mix/blend with background
                Buffer = ImageBuffer.TargetPtr
                StartPitch = x
                iScaleY=1/ScaleY
                iScaleX=1/ScaleX
                    For i = 0 To CharLen-1
                        CharSelect = CharVal(i)
                        If Not FontCollection(SelectedFontIndex).UsedFlag(CharSelect) Then
                            CharSelect = 0  'Pakai Chr 0
                        End If
                        
                        With FontCollection(SelectedFontIndex).Char(CharSelect)
                            StartPitch += (.Start * ScaleX)
                            spp=Int(StartPitch)
                            'If .Height = 0 Then Exit For
                            ypoint = CShort(.Top*ScaleY)
                            For yloop = ypoint To Int((.Top*ScaleY) + (.Height*ScaleY)) -1
                                yp = Y + yloop
                                If (yp >= clipy1) And (yp <= clipy2) Then
                                    If yp >= ImageBuffer.Height Then Exit For
                                    If yp >= 0 Then
                                        yp *= ImageBuffer.Pitch
                                        yfp = Int((yloop - ypoint)*iScaleY) * .Width
                                        For xloop = 0 To Int(.Width*ScaleX) -1
                                            xp = Spp + xloop 'NB : Belum dirotasi
                                            If (xp >= clipx1) And (xp <= clipx2) Then
                                                If xp >= ImageBuffer.Width Then Exit For
                                                If xp >= 0 Then
                                                    pp = xp + yp
                                                    fontptr = Int(xloop * iScaleX) + yfp
                                                    AlphaVal = .Sequence[fontptr]
                                                    If AlphaVal<&hff Then
                                                        Col = buffer[pp] And &HFFFFFF
                                                        If AlphaVal=0 Then
                                                            'Col = buffer[pp] And &HFFFFFF
                                                            With xForeColorCompat
                                                                R = ((Col Shr 16) * .iAlphafactor) + .AfRed
                                                                G = (((Col And &HFF00) Shr 8) * .iAlphaFactor) + .AfGreen
                                                                B = ((Col And &HFF) * .iAlphaFactor) + .AfBlue
                                                            End With
                                                            'Buffer[pp]= Rgb(R,G,B)
                                                        Else
                                                            With xForeColorCompat
                                                                Alpha1=iAlphaFactor255(AlphaVal)* .AlphaFactor
                                                                Alpha2=1-Alpha1
                                                                R = ((Col Shr 16  )*Alpha2) + (Alpha1*.Red)
                                                                G = (((Col And &HFF00) Shr 8)*Alpha2) + (Alpha1*.Green)     
                                                                B = ((Col And &HFF)*Alpha2) + (Alpha1*.Blue)
                                                            End With   
                                                        End If
                                                        Buffer[pp]= Rgb(R,G,B)
                                                    End If
                                                End If
                                            End If
                                        Next xloop
                                    End If
                                End If
                            Next yloop
                            StartPitch += (.Pitch*ScaleX)    
                            If StartPitch >= ImageBuffer.Width Then Exit For 'NB: belum dirotasi!    
                        End With                
                    Next i
            End If
    End Sub 
'___________________________________________________________________________________________________________________________________________________

    Sub Interface.Backend_Draw24Mode2Ex (ByVal X As Short, ByVal Y As Short) 'Vertical, no scale
        '
        Dim As Short w, h, Ye, Xe
        Dim i As uShort
        Dim StartPitch  As Short
        Dim CharSelect  As uShort
        Dim As Short xs, ys, yloop, xloop
        Dim As Integer xp, yp
        Dim As uInteger pp ', fp
        Dim fontptr As uInteger
        Dim Buffer As uLong Ptr 'uInteger Ptr
        Dim AlphaVal As uByte
        Dim As uByte    R,G,B
        Dim As uLong Col 'uInteger
        Dim As Single   Alpha1,Alpha2
        
        If Y < 0 Then Exit Sub
        If X >= ImageBuffer.Width Then Exit Sub
        'Drawing background rect -----------------------------------------------
            w = BackendStringWidth
            If w>0 Then
                If Y-w < 0 Then w = Y
                If Y-w >= ImageBuffer.Width Then Exit Sub
                h = FontCollection(SelectedFontIndex).Header.FontHeight            
                If X+h > ImageBuffer.Width-1 Then h = ImageBuffer.Width - X - 1
                If X+h < 0 Then Exit Sub
                xs = X   : If xs<0 Then xs=0
                ys = Y-w : If ys<0 Then ys=0
                Ye = Y
                If Ye >= ImageBuffer.Height And Ys < ImageBuffer.Height Then Ye = ImageBuffer.Height-1
                Xe = X+h
                If Xe >= ImageBuffer.Width And X > 0 Then Xe = ImageBuffer.Width-1
                'Print xs, ys, Xe, Ye
                If clipx1 > xs Then xs = clipx1
                If clipy1 > ys Then ys = clipy1
                If (Xe > clipx2) Then Xe = clipx2
                If (Ye > clipy2) Then Ye = clipy2
                BackendDrawRect24(xs, ys, Xe, Ye)
            End If
        '-----------------------------------------------------------------------
        'Draw Text +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
            If xForeColorCompat.Alpha = 0 Then
                Exit Sub 'Not draw any char
            ElseIf xForeColorCompat.Alpha = &hFF Then
                'Draw with masking from font only -----------------------------------------
                Buffer = ImageBuffer.TargetPtr
                StartPitch = y
                For i = 0 To CharLen-1
                    CharSelect = CharVal(i)
                    If Not FontCollection(SelectedFontIndex).UsedFlag(CharSelect) Then
                        CharSelect = 0  'Pakai Chr 0
                    End If
                    
                    With FontCollection(SelectedFontIndex).Char(CharSelect)
                        StartPitch-=.Start
                        For yloop = 0 To .Width -1
                            yp = StartPitch - yloop
                            If (yp >= clipy1) And (yp <= clipy2) Then
                                If yp < 0 Then Exit For
                                If yp < ImageBuffer.Height-1  Then 
                                    yp *= ImageBuffer.Pitch
                                    'fp = '(yloop - .top) * .Width
                                    For xloop = .Top To .Top + .Height -1
                                        xp =  X + xloop
                                        If (xp >= clipx1) And (xp <= clipx2) Then
                                            If xp >= ImageBuffer.Width Then Exit For
                                            If xp >= 0 Then
                                                pp = xp + yp
                                                fontptr = yloop + (xloop-.Top)*.Width 
                                                AlphaVal = .Sequence[fontptr]
                                                If AlphaVal = 0 Then
                                                    Buffer[pp] = xForeColorCompat.Palette
                                                ElseIf AlphaVal <&hFF Then
                                                    'Blend
                                                    Col = buffer[pp] And &HFFFFFF
                                                    With xForeColorCompat
                                                        R = ((Col Shr 16)*AlphaFactor255(AlphaVal))    + (iAlphaFactor255(AlphaVal)*.Red)
                                                        G = (((Col And &HFF00) Shr 8) * AlphaFactor255(AlphaVal)) + (iAlphaFactor255(AlphaVal)*.Green)
                                                        B = ((Col And &HFF) * AlphaFactor255(AlphaVal)) + (iAlphaFactor255(AlphaVal)*.Blue)
                                                    End With
                                                    Buffer[pp]= Rgb(R,G,B)
                                                End If
                                            End If            
                                        End If
                                    Next xloop    
                                End If    
                            End If
                        Next yloop
                        StartPitch -= .Pitch
                        If StartPitch < 0 Then Exit For    
                    End With
                Next i    
            Else
                                Buffer = ImageBuffer.TargetPtr
                StartPitch = y
                For i = 0 To CharLen-1
                    CharSelect = CharVal(i)
                    If Not FontCollection(SelectedFontIndex).UsedFlag(CharSelect) Then
                        CharSelect = 0  'Pakai Chr 0
                    End If
                    
                    With FontCollection(SelectedFontIndex).Char(CharSelect)
                        StartPitch-=.Start
                        For yloop = 0 To .Width -1
                            yp = StartPitch - yloop
                            If (yp >= clipy1) And (yp <= clipy2) Then
                                If yp < 0 Then Exit For
                                If yp < ImageBuffer.Height-1  Then 
                                    yp *= ImageBuffer.Pitch
                                    'fp = '(yloop - .top) * .Width
                                    For xloop = .Top To .Top + .Height -1
                                        xp =  X + xloop
                                        If (xp >= clipx1) And (xp <= clipx2) Then
                                            If xp >= ImageBuffer.Width Then Exit For
                                            If xp >= 0 Then
                                                pp = xp + yp
                                                fontptr = yloop + (xloop-.Top)*.Width 
                                                AlphaVal = .Sequence[fontptr]
                                                If AlphaVal<&hff Then
                                                    Col = buffer[pp] And &HFFFFFF
                                                    If AlphaVal=0 Then
                                                        'Col = buffer[pp] And &HFFFFFF
                                                        With xForeColorCompat
                                                            R = ((Col Shr 16) * .iAlphafactor) + .AfRed
                                                            G = (((Col And &HFF00) Shr 8) * .iAlphaFactor) + .AfGreen
                                                            B = ((Col And &HFF) * .iAlphaFactor) + .AfBlue
                                                        End With
                                                        'Buffer[pp]= Rgb(R,G,B)
                                                    Else
                                                        With xForeColorCompat
                                                            Alpha1=iAlphaFactor255(AlphaVal)* .AlphaFactor
                                                            Alpha2=1-Alpha1
                                                            R = ((Col Shr 16  )*Alpha2) + (Alpha1*.Red)
                                                            G = (((Col And &HFF00) Shr 8)*Alpha2) + (Alpha1*.Green)     
                                                            B = ((Col And &HFF)*Alpha2) + (Alpha1*.Blue)
                                                        End With   
                                                    End If
                                                    Buffer[pp]= Rgb(R,G,B)
                                                End If
                                            End If            
                                        End If
                                    Next xloop    
                                End If    
                            End If
                        Next yloop
                        StartPitch -= .Pitch
                        If StartPitch < 0 Then Exit For    
                    End With
                Next i                             
            End If        
    End Sub
'___________________________________________________________________________________________________________________________________________________
    Sub Interface.Backend_Draw24Mode3Ex(ByVal x As Short, ByVal y As Short, ByVal ScaleX As Double, ByVal ScaleY As Double)
        'Scale, vertical
        Dim As Short w, h, Ye, Xe
        Dim i As uShort
        Dim StartPitch  As Double
        Dim CharSelect  As uShort
        Dim As Short xs, ys, yloop, xloop
        Dim As Integer xp, yp
        Dim As uInteger pp ', fp
        Dim fontptr As uInteger
        Dim Buffer As uLong Ptr 'uInteger Ptr
        Dim AlphaVal As uByte
        Dim As uByte    R,G,B
        Dim As uLong Col 'uInteger
        Dim As Single   Alpha1,Alpha2
        Dim Spp As Short
        Dim As uShort xpoint
        Dim As Double iScaleY, iScaleX
        Dim As uInteger yfp
        
        If ScaleX<0 Or ScaleY<0 Then
            LastErrorCode = InvalidHandle
            Exit Sub
        End If
        
        If Y < 0 Then Exit Sub
        If X >= ImageBuffer.Width Then Exit Sub
        'Drawing background rect -----------------------------------------------
            w = Int(BackendStringWidth * ScaleX)
            If w>0 Then
                If Y-w < 0 Then w = Y
                If Y-w >= ImageBuffer.Width Then Exit Sub
                h = Int(FontCollection(SelectedFontIndex).Header.FontHeight * ScaleY)            
                If X+h > ImageBuffer.Width-1 Then h = ImageBuffer.Width - X - 1
                If X+h < 0 Then Exit Sub
                xs = X   : If xs<0 Then xs=0
                ys = Y-w : If ys<0 Then ys=0
                Ye = Y
                If Ye >= ImageBuffer.Height And Ys < ImageBuffer.Height Then Ye = ImageBuffer.Height-1
                Xe = X+h
                If Xe >= ImageBuffer.Width And X > 0 Then Xe = ImageBuffer.Width-1
                'Print xs, ys, Xe, Ye
                If clipx1 > xs Then xs = clipx1
                If clipy1 > ys Then ys = clipy1
                If (Xe > clipx2) Then Xe = clipx2
                If (Ye > clipy2) Then Ye = clipy2
                BackendDrawRect24(xs, ys, Xe, Ye)
            End If
        '-----------------------------------------------------------------------
        'Draw Text +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
            If xForeColorCompat.Alpha = 0 Then
                Exit Sub 'Not draw any char
            ElseIf xForeColorCompat.Alpha = &hFF Then
                'Draw with masking from font only -----------------------------------------
                Buffer = ImageBuffer.TargetPtr
                StartPitch = y
                iScaleY=1/ScaleY
                iScaleX=1/ScaleX
                For i = 0 To CharLen-1
                    CharSelect = CharVal(i)
                    If Not FontCollection(SelectedFontIndex).UsedFlag(CharSelect) Then
                        CharSelect = 0  'Pakai Chr 0
                    End If
                    
                    With FontCollection(SelectedFontIndex).Char(CharSelect)
                        StartPitch-=.Start*ScaleX
                        Spp=Int(StartPitch)
                        For yloop = 0 To (.Width*ScaleX) -1
                            yp = Spp - yloop
                            If (yp >= clipy1) And (yp <= clipy2) Then
                                If yp < 0 Then Exit For
                                If yp < ImageBuffer.Height-1  Then
                                    yp *= ImageBuffer.Pitch
                                    yfp = Int(yloop*iScaleX)
                                    xpoint = CShort(.Top*ScaleY)
                                    For xloop = xpoint To Int((.Top*ScaleY) + (.Height*ScaleY)) -1
                                        xp =  X + xloop
                                        If (xp >= clipx1) And (xp <= clipx2) Then
                                            If xp >= ImageBuffer.Width Then Exit For
                                            If xp >= 0 Then
                                                pp = xp + yp
                                                'Print iScaleY
                                                fontptr = yfp + Int((xloop-xpoint)*iScaleY)*.Width
                                                'If fontptr> 50 Then Print fontptr
                                                AlphaVal = .Sequence[fontptr]
                                                If AlphaVal = 0 Then
                                                    Buffer[pp] = xForeColorCompat.Palette
                                                ElseIf AlphaVal <&hFF Then
                                                    'Blend
                                                    Col = buffer[pp] And &HFFFFFF
                                                    With xForeColorCompat
                                                        R = ((Col Shr 16)*AlphaFactor255(AlphaVal))    + (iAlphaFactor255(AlphaVal)*.Red)
                                                        G = (((Col And &HFF00) Shr 8) * AlphaFactor255(AlphaVal)) + (iAlphaFactor255(AlphaVal)*.Green)
                                                        B = ((Col And &HFF) * AlphaFactor255(AlphaVal)) + (iAlphaFactor255(AlphaVal)*.Blue)
                                                    End With
                                                    Buffer[pp]= Rgb(R,G,B)
                                                End If
                                            End If   
                                        End If
                                    Next xloop                            
                                End If        
                            End If
                        Next yloop     
                        StartPitch -= (.Pitch*ScaleX)
                        If StartPitch < 0 Then Exit For    
                    End With
                    
                Next i
            Else
                Buffer = ImageBuffer.TargetPtr
                StartPitch = y
                iScaleY=1/ScaleY
                iScaleX=1/ScaleX
                For i = 0 To CharLen-1
                    CharSelect = CharVal(i)
                    If Not FontCollection(SelectedFontIndex).UsedFlag(CharSelect) Then
                        CharSelect = 0  'Pakai Chr 0
                    End If
                    
                    With FontCollection(SelectedFontIndex).Char(CharSelect)
                        StartPitch-=.Start*ScaleX
                        Spp=Int(StartPitch)
                        For yloop = 0 To (.Width*ScaleX) -1
                            yp = Spp - yloop
                            If (yp >= clipy1) And (yp <= clipy2) Then
                                If yp < 0 Then Exit For
                                If yp < ImageBuffer.Height-1  Then
                                    yp *= ImageBuffer.Pitch
                                    yfp = Int(yloop*iScaleX)
                                    xpoint = CShort(.Top*ScaleY)
                                    For xloop = xpoint To Int((.Top*ScaleY) + (.Height*ScaleY)) -1
                                        xp =  X + xloop
                                        If (xp >= clipx1) And (xp <= clipx2) Then
                                            If xp >= ImageBuffer.Width Then Exit For
                                            If xp >= 0 Then
                                                pp = xp + yp
                                                fontptr = yfp + Int((xloop-xpoint)*iScaleY)*.Width
                                                AlphaVal = .Sequence[fontptr]
                                                If AlphaVal<&hff Then
                                                    Col = buffer[pp] And &HFFFFFF
                                                    If AlphaVal=0 Then
                                                        'Col = buffer[pp] And &HFFFFFF
                                                        With xForeColorCompat
                                                            R = ((Col Shr 16) * .iAlphafactor) + .AfRed
                                                            G = (((Col And &HFF00) Shr 8) * .iAlphaFactor) + .AfGreen
                                                            B = ((Col And &HFF) * .iAlphaFactor) + .AfBlue
                                                        End With
                                                        'Buffer[pp]= Rgb(R,G,B)
                                                    Else
                                                        With xForeColorCompat
                                                            Alpha1=iAlphaFactor255(AlphaVal)* .AlphaFactor
                                                            Alpha2=1-Alpha1
                                                            R = ((Col Shr 16  )*Alpha2) + (Alpha1*.Red)
                                                            G = (((Col And &HFF00) Shr 8)*Alpha2) + (Alpha1*.Green)     
                                                            B = ((Col And &HFF)*Alpha2) + (Alpha1*.Blue)
                                                        End With   
                                                    End If
                                                    Buffer[pp]= Rgb(R,G,B)
                                                End If
                                            End If   
                                        End If
                                    Next xloop                            
                                End If        
                            End If
                        Next yloop     
                        StartPitch -= (.Pitch*ScaleX)
                        If StartPitch < 0 Then Exit For    
                    End With
                Next i
            End If    
    End Sub
        
'16-bit Draw function ______________________________________________________________________________________________________________________________
    Sub Interface.Backend_Draw16_555Mode0Ex(ByVal X As Short, ByVal Y As Short)
        'No scale, no rotate
        Dim As Short w, h
        Dim i As uShort
        Dim StartPitch  As Short
        Dim CharSelect  As uShort
        Dim As Short xs, ys, yloop, xloop
        Dim As Integer xp, yp
        Dim As uInteger pp, yfp
        Dim fontptr As uInteger
        Dim Buffer As uShort Ptr
        Dim AlphaVal As uByte
        Dim As uByte    R,G,B
        Dim As uShort Col
        Dim As Single   Alpha1,Alpha2
        
        If X > ImageBuffer.Width-1 Then Exit Sub
        'Drawing background rect -----------------------------------------------
            w = BackendStringWidth
            If w>0 Then
                If w+X > ImageBuffer.Width-1 Then w = ImageBuffer.Width - x - 1
                h = FontCollection(SelectedFontIndex).Header.FontHeight            
                If Y+h> ImageBuffer.Height-1 Then h = ImageBuffer.Height - y - 1
                xs = X : If xs<0 Then xs=0
                ys = Y : If ys<0 Then ys=0
                'Print xs, ys, X+w, Y+h
                If clipx1 > xs Then xs = clipx1
                If clipy1 > ys Then ys = clipy1
                If (xs + w > clipx2) Then w = clipx2 - x
                If (ys + h > clipy2) Then h = clipy2 - y
                BackendDrawRect16_555(xs, ys, X+w, Y+h)
            End If

        '-----------------------------------------------------------------------
        'Draw Text +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
            If xForeColorCompat.Alpha = 0 Then
                Exit Sub 'Not draw any char
            ElseIf xForeColorCompat.Alpha = &h1F Then 
                'Draw with masking from font only -----------------------------------------
                Buffer = ImageBuffer.TargetPtr
                StartPitch = x 
                    For i = 0 To CharLen-1
                        CharSelect = CharVal(i)
                        If Not FontCollection(SelectedFontIndex).UsedFlag(CharSelect) Then
                            CharSelect = 0  'Pakai Chr 0
                        End If
                        
                        With FontCollection(SelectedFontIndex).Char(CharSelect)
                            StartPitch+=.Start
                            'Print "s = " & .Start
                            'If .Height = 0 Then Exit For
                            'Print .Width & "x" & .height
                            'Print CharSelect
                            For yloop = .Top To .Top +.Height -1
                                yp = Y + yloop
                                If (yp >= clipy1) And (yp <= clipy2) Then
                                    If yp >= ImageBuffer.Height Then Exit For
                                    If yp >= 0 Then
                                        yp *= ImageBuffer.Pitch
                                        yfp = (yloop - .top) * .Width
                                        For xloop = 0 To .Width -1
                                            xp = StartPitch + xloop
                                            If (xp >= clipx1) And (xp <= clipx2) Then
                                                If xp >= ImageBuffer.Width Then Exit For
                                                If xp >= 0 Then
                                                    pp = xp + yp
                                                    fontptr = xloop+yfp
                                                    AlphaVal = .Sequence[fontptr]
                                                    If AlphaVal = 0 Then
                                                        Buffer[pp] = xForeColorCompat.Palette
                                                    ElseIf AlphaVal <&hFF Then
                                                        'Blend
                                                        Col = buffer[pp]
                                                        With xForeColorCompat
                                                            R = ((Col Shr 11)*AlphaFactor255(AlphaVal))    + (iAlphaFactor255(AlphaVal)*.Red)
                                                            G = (((Col And &H7E0) Shr 6) * AlphaFactor255(AlphaVal)) + (iAlphaFactor255(AlphaVal)*.Green)
                                                            B = ((Col And &H1F) * AlphaFactor255(AlphaVal)) + (iAlphaFactor255(AlphaVal)*.Blue)
                                                        End With
                                                        Buffer[pp]= Backend_RGB16_555(r,g,b)
                                                    End If     
                                                End If 
                                            End If
                                        Next xloop
                                    End If
                                End If
                            Next yloop
                            StartPitch+=.Pitch    
                            If StartPitch >= ImageBuffer.Width Then Exit For     
                        End With
                    Next i
                '--------------------------------------------------------------------------        
            Else
                'Should mix/blend with background
                Buffer = ImageBuffer.TargetPtr
                StartPitch = x
                For i = 0 To CharLen-1
                    CharSelect = CharVal(i)
                    If Not FontCollection(SelectedFontIndex).UsedFlag(CharSelect) Then
                        CharSelect = 0  'Pakai Chr 0
                    End If
                    With FontCollection(SelectedFontIndex).Char(CharSelect)
                        StartPitch+=.Start
                        For yloop = .Top To .Top +.Height -1
                                yp = Y + yloop
                                If (yp >= clipy1) And (yp <= clipy2) Then
                                    If yp >= ImageBuffer.Height Then Exit For
                                    If yp >= 0 Then
                                        yp *= ImageBuffer.Pitch
                                        yfp = (yloop - .top) * .Width
                                        For xloop = 0 To .Width -1
                                            xp = StartPitch + xloop
                                            If (xp >= clipx1) And (xp <= clipx2) Then
                                                If xp >= ImageBuffer.Width Then Exit For
                                                If xp >= 0 Then
                                                    pp = xp + yp
                                                    fontptr = xloop+yfp
                                                    AlphaVal = .Sequence[fontptr]
                                                    If AlphaVal<&hff Then
                                                        Col = buffer[pp]
                                                        If AlphaVal=0 Then
                                                            With xForeColorCompat
                                                                R = ((Col Shr 11) * .iAlphafactor) + .AfRed
                                                                G = (((Col And &H7E0) Shr 6) * .iAlphaFactor) + .AfGreen
                                                                B = ((Col And &H1F) * .iAlphaFactor) + .AfBlue
                                                            End With
                                                        Else
                                                            With xForeColorCompat
                                                                Alpha1=iAlphaFactor255(AlphaVal)* .AlphaFactor
                                                                Alpha2=1-Alpha1
                                                                R = ((Col Shr 11  )*Alpha2) + (Alpha1*.Red)
                                                                G = (((Col And &H7E0) Shr 6)*Alpha2) + (Alpha1*.Green)     
                                                                B = ((Col And &H1F)*Alpha2) + (Alpha1*.Blue)
                                                            End With   
                                                        End If
                                                        Buffer[pp]= Backend_RGB16_555(r,g,b)
                                                    End If
                                                End If 
                                            End If
                                        Next xloop
                                    End If
                                End If
                            Next yloop
                            StartPitch+=.Pitch    
                            If StartPitch >= ImageBuffer.Width Then Exit For
                    End With
                Next i
            End If       
        '+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ 
        
    End Sub

'____________________________________________________________________________________________________________________________________________________    
    Sub Interface.Backend_Draw16_555Mode1Ex(ByVal x As Short, ByVal y As Short, ByVal ScaleX As Double, ByVal ScaleY As Double)
        
        Dim Buffer As uShort Ptr
        Dim StartPitch As Double
        Dim Spp As Short'Integer
        Dim As Short yloop, xloop
        Dim As Short i, CharSelect
        Dim As Integer xp, yp
        Dim As uInteger yfp, pp, fontptr
        Dim As uShort Col
        Dim As uShort ypoint
        Dim As Double iScaleY, iScaleX
        Dim As uByte AlphaVal
        Dim As uByte    R,G,B
        Dim As Single   Alpha1,Alpha2
        Dim As Short w, h
        Dim As Short xs, ys
        
        If ScaleX<0 Or ScaleY<0 Then
            LastErrorCode = InvalidHandle
            Exit Sub
        End If
        
        If ScaleX=0 Or ScaleY=0 Then Exit Sub
        
        If X >= ImageBuffer.Width Then Exit Sub
        'Drawing background rect -----------------------------------------------
            w = Int(BackendStringWidth * ScaleX)
            If w>0 Then
                If w+X >= ImageBuffer.Width Then w = ImageBuffer.Width - x - 1
                h = Int(FontCollection(SelectedFontIndex).Header.FontHeight * ScaleY)            
                If Y+h>= ImageBuffer.Height Then h = ImageBuffer.Height - y - 1
                xs = X : If xs<0 Then xs=0
                ys = Y : If ys<0 Then ys=0
                If clipx1 > xs Then xs = clipx1
                If clipy1 > ys Then ys = clipy1
                If (xs + w > clipx2) Then w = clipx2 - x
                If (ys + h > clipy2) Then h = clipy2 - y
                BackendDrawRect16_555(xs, ys, X+w, Y+h)
            End If
        '-----------------------------------------------------------------------
        'Draw Text +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
            If xForeColorCompat.Alpha = 0 Then
                Exit Sub 'Not draw any char
            ElseIf xForeColorCompat.Alpha = &hFF Then
                'Draw with masking from font only -----------------------------------------
                Buffer = ImageBuffer.TargetPtr
                StartPitch = x
                iScaleY=1/ScaleY
                iScaleX=1/ScaleX
                    For i = 0 To CharLen-1
                        CharSelect = CharVal(i)
                        If Not FontCollection(SelectedFontIndex).UsedFlag(CharSelect) Then
                            CharSelect = 0  'Pakai Chr 0
                        End If
                        
                        With FontCollection(SelectedFontIndex).Char(CharSelect)
                            StartPitch += (.Start * ScaleX)
                            spp=Int(StartPitch)
                            'If .Height = 0 Then Exit For
                            ypoint = CShort(.Top*ScaleY)
                            For yloop = ypoint To Int((.Top*ScaleY) + (.Height*ScaleY)) -1
                                yp = Y + yloop
                                If (yp >= clipy1) And (yp <= clipy2) Then
                                    If yp >= ImageBuffer.Height Then Exit For 
                                    If yp >= 0 Then
                                        yp *= ImageBuffer.Pitch
                                        yfp = Int((yloop - ypoint)*iScaleY) * .Width
                                        For xloop = 0 To Int(.Width*ScaleX) -1
                                            xp = Spp + xloop 'NB : Belum dirotasi
                                            If (xp >= clipx1) And (xp <= clipx2) Then
                                                'Print Spp , xloop, StartPitch, .Start
                                                If xp >= ImageBuffer.Width Then Exit For
                                                
                                                'Print Spp , xloop
                                                'Exit For
                                                If xp >= 0 Then
                                                    pp = xp + yp
                                                    fontptr = Int(xloop * iScaleX) + yfp
                                                    AlphaVal = .Sequence[fontptr]
                                                    If AlphaVal = 0 Then
                                                        Buffer[pp] = xForeColorCompat.Palette
                                                    ElseIf AlphaVal <&hFF Then
                                                        'Blend
                                                        Col = buffer[pp]
                                                        With xForeColorCompat
                                                            R = ((Col Shr 11)*AlphaFactor255(AlphaVal))    + (iAlphaFactor255(AlphaVal)*.Red)
                                                            G = (((Col And &H7E0) Shr 6) * AlphaFactor255(AlphaVal)) + (iAlphaFactor255(AlphaVal)*.Green)
                                                            B = ((Col And &H1F) * AlphaFactor255(AlphaVal)) + (iAlphaFactor255(AlphaVal)*.Blue)
                                                        End With
                                                        Buffer[pp]= Backend_RGB16_555(r,g,b)
                                                    End If
                                                End If 
                                            End If
                                        Next xloop
                                    End If
                                End If
                            Next yloop
                            StartPitch += (.Pitch*ScaleX)    
                            If StartPitch >= ImageBuffer.Width Then Exit For 'NB: belum dirotasi!    
                        End With
                    Next i                
            Else
                'Should mix/blend with background
                Buffer = ImageBuffer.TargetPtr
                StartPitch = x
                iScaleY=1/ScaleY
                iScaleX=1/ScaleX
                    For i = 0 To CharLen-1
                        CharSelect = CharVal(i)
                        If Not FontCollection(SelectedFontIndex).UsedFlag(CharSelect) Then
                            CharSelect = 0  'Pakai Chr 0
                        End If
                        
                        With FontCollection(SelectedFontIndex).Char(CharSelect)
                            StartPitch += (.Start * ScaleX)
                            spp=Int(StartPitch)
                            'If .Height = 0 Then Exit For
                            ypoint = CShort(.Top*ScaleY)
                            For yloop = ypoint To Int((.Top*ScaleY) + (.Height*ScaleY)) -1
                                yp = Y + yloop
                                If (yp >= clipy1) And (yp <= clipy2) Then
                                    If yp >= ImageBuffer.Height Then Exit For
                                    If yp >= 0 Then
                                        yp *= ImageBuffer.Pitch
                                        yfp = Int((yloop - ypoint)*iScaleY) * .Width
                                        For xloop = 0 To Int(.Width*ScaleX) -1
                                            xp = Spp + xloop 'NB : Belum dirotasi
                                            If (xp >= clipx1) And (xp <= clipx2) Then
                                                If xp >= ImageBuffer.Width Then Exit For
                                                If xp >= 0 Then
                                                    pp = xp + yp
                                                    fontptr = Int(xloop * iScaleX) + yfp
                                                    AlphaVal = .Sequence[fontptr]
                                                    If AlphaVal<&hff Then
                                                        Col = buffer[pp]
                                                        If AlphaVal=0 Then
                                                            'Col = buffer[pp] And &HFFFFFF
                                                            With xForeColorCompat
                                                                R = ((Col Shr 11) * .iAlphafactor) + .AfRed
                                                                G = (((Col And &H7E0) Shr 6) * .iAlphaFactor) + .AfGreen
                                                                B = ((Col And &H1F) * .iAlphaFactor) + .AfBlue
                                                            End With
                                                            'Buffer[pp]= Rgb(R,G,B)
                                                        Else
                                                            With xForeColorCompat
                                                                Alpha1=iAlphaFactor255(AlphaVal)* .AlphaFactor
                                                                Alpha2=1-Alpha1
                                                                R = ((Col Shr 11  )*Alpha2) + (Alpha1*.Red)
                                                                G = (((Col And &H7E0) Shr 6)*Alpha2) + (Alpha1*.Green)     
                                                                B = ((Col And &H1F)*Alpha2) + (Alpha1*.Blue)
                                                            End With   
                                                        End If
                                                        Buffer[pp]= Backend_RGB16_555(r,g,b)
                                                    End If
                                                End If
                                            End If
                                        Next xloop
                                    End If
                                End If
                            Next yloop
                            StartPitch += (.Pitch*ScaleX)    
                            If StartPitch >= ImageBuffer.Width Then Exit For 'NB: belum dirotasi!    
                        End With                
                    Next i
            End If
    End Sub 
'___________________________________________________________________________________________________________________________________________________
    Sub Interface.Backend_Draw16_555Mode2Ex (ByVal X As Short, ByVal Y As Short) 'Vertical, no scale
        '
        Dim As Short w, h, Ye, Xe
        Dim i As uShort
        Dim StartPitch  As Short
        Dim CharSelect  As uShort
        Dim As Short xs, ys, yloop, xloop
        Dim As Integer xp, yp
        Dim As uInteger pp ', fp
        Dim fontptr As uInteger
        Dim Buffer As uShort Ptr
        Dim AlphaVal As uByte
        Dim As uByte    R,G,B
        Dim As uShort Col
        Dim As Single   Alpha1,Alpha2
        
        If Y < 0 Then Exit Sub
        If X >= ImageBuffer.Width Then Exit Sub
        'Drawing background rect -----------------------------------------------
            w = BackendStringWidth
            If w>0 Then
                If Y-w < 0 Then w = Y
                If Y-w >= ImageBuffer.Width Then Exit Sub
                h = FontCollection(SelectedFontIndex).Header.FontHeight            
                If X+h > ImageBuffer.Width-1 Then h = ImageBuffer.Width - X - 1
                If X+h < 0 Then Exit Sub
                xs = X   : If xs<0 Then xs=0
                ys = Y-w : If ys<0 Then ys=0
                Ye = Y
                If Ye >= ImageBuffer.Height And Ys < ImageBuffer.Height Then Ye = ImageBuffer.Height-1
                Xe = X+h
                If Xe >= ImageBuffer.Width And X > 0 Then Xe = ImageBuffer.Width-1
                'Print xs, ys, Xe, Ye
                If clipx1 > xs Then xs = clipx1
                If clipy1 > ys Then ys = clipy1
                If (Xe > clipx2) Then Xe = clipx2
                If (Ye > clipy2) Then Ye = clipy2
                BackendDrawRect16_555(xs, ys, Xe, Ye)
            End If
        '-----------------------------------------------------------------------
        'Draw Text +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
            If xForeColorCompat.Alpha = 0 Then
                Exit Sub 'Not draw any char
            ElseIf xForeColorCompat.Alpha = &hFF Then
                'Draw with masking from font only -----------------------------------------
                Buffer = ImageBuffer.TargetPtr
                StartPitch = y
                For i = 0 To CharLen-1
                    CharSelect = CharVal(i)
                    If Not FontCollection(SelectedFontIndex).UsedFlag(CharSelect) Then
                        CharSelect = 0  'Pakai Chr 0
                    End If
                    
                    With FontCollection(SelectedFontIndex).Char(CharSelect)
                        StartPitch-=.Start
                        For yloop = 0 To .Width -1
                            yp = StartPitch - yloop
                            If (yp >= clipy1) And (yp <= clipy2) Then
                                If yp < 0 Then Exit For
                                If yp < ImageBuffer.Height-1  Then 
                                    yp *= ImageBuffer.Pitch
                                    'fp = '(yloop - .top) * .Width
                                    For xloop = .Top To .Top + .Height -1
                                        xp =  X + xloop
                                        If (xp >= clipx1) And (xp <= clipx2) Then
                                            If xp >= ImageBuffer.Width Then Exit For
                                            If xp >= 0 Then
                                                pp = xp + yp
                                                fontptr = yloop + (xloop-.Top)*.Width 
                                                AlphaVal = .Sequence[fontptr]
                                                If AlphaVal = 0 Then
                                                        Buffer[pp] = xForeColorCompat.Palette
                                                    ElseIf AlphaVal <&hFF Then
                                                        'Blend
                                                        Col = buffer[pp]
                                                        With xForeColorCompat
                                                            R = ((Col Shr 11)*AlphaFactor255(AlphaVal))    + (iAlphaFactor255(AlphaVal)*.Red)
                                                            G = (((Col And &H7E0) Shr 6) * AlphaFactor255(AlphaVal)) + (iAlphaFactor255(AlphaVal)*.Green)
                                                            B = ((Col And &H1F) * AlphaFactor255(AlphaVal)) + (iAlphaFactor255(AlphaVal)*.Blue)
                                                        End With
                                                        Buffer[pp]= Backend_RGB16_555(r,g,b)
                                                End If
                                            End If            
                                        End If
                                    Next xloop    
                                End If    
                            End If
                        Next yloop
                        StartPitch -= .Pitch
                        If StartPitch < 0 Then Exit For    
                    End With
                Next i    
            Else
                Buffer = ImageBuffer.TargetPtr
                StartPitch = y
                For i = 0 To CharLen-1
                    CharSelect = CharVal(i)
                    If Not FontCollection(SelectedFontIndex).UsedFlag(CharSelect) Then
                        CharSelect = 0  'Pakai Chr 0
                    End If
                    
                    With FontCollection(SelectedFontIndex).Char(CharSelect)
                        StartPitch-=.Start
                        For yloop = 0 To .Width -1
                            yp = StartPitch - yloop
                            If (yp >= clipy1) And (yp <= clipy2) Then
                                If yp < 0 Then Exit For
                                If yp < ImageBuffer.Height-1  Then 
                                    yp *= ImageBuffer.Pitch
                                    'fp = '(yloop - .top) * .Width
                                    For xloop = .Top To .Top + .Height -1
                                        xp =  X + xloop
                                        If (xp >= clipx1) And (xp <= clipx2) Then
                                            If xp >= ImageBuffer.Width Then Exit For
                                            If xp >= 0 Then
                                                pp = xp + yp
                                                fontptr = yloop + (xloop-.Top)*.Width 
                                                AlphaVal = .Sequence[fontptr]
                                                If AlphaVal<&hff Then
                                                    Col = buffer[pp]
                                                    If AlphaVal=0 Then
                                                        With xForeColorCompat
                                                            R = ((Col Shr 11) * .iAlphafactor) + .AfRed
                                                            G = (((Col And &H7E0) Shr 6) * .iAlphaFactor) + .AfGreen
                                                            B = ((Col And &H1F) * .iAlphaFactor) + .AfBlue
                                                        End With
                                                    Else
                                                        With xForeColorCompat
                                                            Alpha1=iAlphaFactor255(AlphaVal)* .AlphaFactor
                                                            Alpha2=1-Alpha1
                                                            R = ((Col Shr 11  )*Alpha2) + (Alpha1*.Red)
                                                            G = (((Col And &H7E0) Shr 6)*Alpha2) + (Alpha1*.Green)     
                                                            B = ((Col And &H1F)*Alpha2) + (Alpha1*.Blue)
                                                        End With   
                                                    End If
                                                    Buffer[pp]= Backend_RGB16_555(r,g,b)
                                                End If
                                            End If            
                                        End If
                                    Next xloop    
                                End If    
                            End If
                        Next yloop
                        StartPitch -= .Pitch
                        If StartPitch < 0 Then Exit For    
                    End With
                Next i                             
            End If        
    End Sub
'___________________________________________________________________________________________________________________________________________________
    Sub Interface.Backend_Draw16_555Mode3Ex(ByVal x As Short, ByVal y As Short, ByVal ScaleX As Double, ByVal ScaleY As Double)
        'Scale, vertical
        Dim As Short w, h, Ye, Xe
        Dim i As uShort
        Dim StartPitch  As Double
        Dim CharSelect  As uShort
        Dim As Short xs, ys, yloop, xloop
        Dim As Integer xp, yp
        Dim As uInteger pp ', fp
        Dim fontptr As uInteger
        Dim Buffer As uShort Ptr
        Dim AlphaVal As uByte
        Dim As uByte    R,G,B
        Dim As uShort Col
        Dim As Single   Alpha1,Alpha2
        Dim Spp As Short
        Dim As uShort xpoint
        Dim As Double iScaleY, iScaleX
        Dim As uInteger yfp
        
        If ScaleX<0 Or ScaleY<0 Then
            LastErrorCode = InvalidHandle
            Exit Sub
        End If
        
        If Y < 0 Then Exit Sub
        If X >= ImageBuffer.Width Then Exit Sub
        'Drawing background rect -----------------------------------------------
            w = Int(BackendStringWidth * ScaleX)
            If w>0 Then
                If Y-w < 0 Then w = Y
                If Y-w >= ImageBuffer.Width Then Exit Sub
                h = Int(FontCollection(SelectedFontIndex).Header.FontHeight * ScaleY)            
                If X+h > ImageBuffer.Width-1 Then h = ImageBuffer.Width - X - 1
                If X+h < 0 Then Exit Sub
                xs = X   : If xs<0 Then xs=0
                ys = Y-w : If ys<0 Then ys=0
                Ye = Y
                If Ye >= ImageBuffer.Height And Ys < ImageBuffer.Height Then Ye = ImageBuffer.Height-1
                Xe = X+h
                If Xe >= ImageBuffer.Width And X > 0 Then Xe = ImageBuffer.Width-1
                'Print xs, ys, Xe, Ye
                If clipx1 > xs Then xs = clipx1
                If clipy1 > ys Then ys = clipy1
                If (Xe > clipx2) Then Xe = clipx2
                If (Ye > clipy2) Then Ye = clipy2
                BackendDrawRect16_555(xs, ys, Xe, Ye)
            End If
        '-----------------------------------------------------------------------
        'Draw Text +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
            If xForeColorCompat.Alpha = 0 Then
                Exit Sub 'Not draw any char
            ElseIf xForeColorCompat.Alpha = &hFF Then
                'Draw with masking from font only -----------------------------------------
                Buffer = ImageBuffer.TargetPtr
                StartPitch = y
                iScaleY=1/ScaleY
                iScaleX=1/ScaleX
                For i = 0 To CharLen-1
                    CharSelect = CharVal(i)
                    If Not FontCollection(SelectedFontIndex).UsedFlag(CharSelect) Then
                        CharSelect = 0  'Pakai Chr 0
                    End If
                    
                    With FontCollection(SelectedFontIndex).Char(CharSelect)
                        StartPitch-=.Start*ScaleX
                        Spp=Int(StartPitch)
                        For yloop = 0 To (.Width*ScaleX) -1
                            yp = Spp - yloop
                            If (yp >= clipy1) And (yp <= clipy2) Then
                                If yp < 0 Then Exit For
                                If yp < ImageBuffer.Height-1  Then
                                    yp *= ImageBuffer.Pitch
                                    yfp = Int(yloop*iScaleX)
                                    xpoint = CShort(.Top*ScaleY)
                                    For xloop = xpoint To Int((.Top*ScaleY) + (.Height*ScaleY)) -1
                                        xp =  X + xloop
                                        If (xp >= clipx1) And (xp <= clipx2) Then
                                            If xp >= ImageBuffer.Width Then Exit For
                                            If xp >= 0 Then
                                                pp = xp + yp
                                                'Print iScaleY
                                                fontptr = yfp + Int((xloop-xpoint)*iScaleY)*.Width
                                                'If fontptr> 50 Then Print fontptr
                                                AlphaVal = .Sequence[fontptr]
                                                If AlphaVal = 0 Then
                                                    Buffer[pp] = xForeColorCompat.Palette
                                                ElseIf AlphaVal <&hFF Then
                                                    'Blend
                                                    Col = buffer[pp]
                                                    With xForeColorCompat
                                                        R = ((Col Shr 11)*AlphaFactor255(AlphaVal))    + (iAlphaFactor255(AlphaVal)*.Red)
                                                        G = (((Col And &H7E0) Shr 6) * AlphaFactor255(AlphaVal)) + (iAlphaFactor255(AlphaVal)*.Green)
                                                        B = ((Col And &H1F) * AlphaFactor255(AlphaVal)) + (iAlphaFactor255(AlphaVal)*.Blue)
                                                    End With
                                                    Buffer[pp]= Backend_RGB16_555(r,g,b)
                                                End If
                                            End If   
                                        End If
                                    Next xloop                            
                                End If        
                            End If
                        Next yloop     
                        StartPitch -= (.Pitch*ScaleX)
                        If StartPitch < 0 Then Exit For    
                    End With
                    
                Next i
            Else
                Buffer = ImageBuffer.TargetPtr
                StartPitch = y
                iScaleY=1/ScaleY
                iScaleX=1/ScaleX
                For i = 0 To CharLen-1
                    CharSelect = CharVal(i)
                    If Not FontCollection(SelectedFontIndex).UsedFlag(CharSelect) Then
                        CharSelect = 0  'Pakai Chr 0
                    End If
                    
                    With FontCollection(SelectedFontIndex).Char(CharSelect)
                        StartPitch-=.Start*ScaleX
                        Spp=Int(StartPitch)
                        For yloop = 0 To (.Width*ScaleX) -1
                            yp = Spp - yloop
                            If (yp >= clipy1) And (yp <= clipy2) Then
                                If yp < 0 Then Exit For
                                If yp < ImageBuffer.Height-1  Then
                                    yp *= ImageBuffer.Pitch
                                    yfp = Int(yloop*iScaleX)
                                    xpoint = CShort(.Top*ScaleY)
                                    For xloop = xpoint To Int((.Top*ScaleY) + (.Height*ScaleY)) -1
                                        xp =  X + xloop
                                        If (xp >= clipx1) And (xp <= clipx2) Then
                                            If xp >= ImageBuffer.Width Then Exit For
                                            If xp >= 0 Then
                                                pp = xp + yp
                                                fontptr = yfp + Int((xloop-xpoint)*iScaleY)*.Width
                                                AlphaVal = .Sequence[fontptr]
                                                If AlphaVal<&hff Then
                                                    Col = buffer[pp]
                                                    If AlphaVal=0 Then
                                                        With xForeColorCompat
                                                            R = ((Col Shr 11) * .iAlphafactor) + .AfRed
                                                            G = (((Col And &H7E0) Shr 6) * .iAlphaFactor) + .AfGreen
                                                            B = ((Col And &H1F) * .iAlphaFactor) + .AfBlue
                                                        End With
                                                    Else
                                                        With xForeColorCompat
                                                            Alpha1=iAlphaFactor255(AlphaVal)* .AlphaFactor
                                                            Alpha2=1-Alpha1
                                                            R = ((Col Shr 11  )*Alpha2) + (Alpha1*.Red)
                                                            G = (((Col And &H7E0) Shr 6)*Alpha2) + (Alpha1*.Green)     
                                                            B = ((Col And &H1F)*Alpha2) + (Alpha1*.Blue)
                                                        End With   
                                                    End If
                                                    Buffer[pp]= Backend_RGB16_555(r,g,b)
                                                End If
                                            End If   
                                        End If
                                    Next xloop                            
                                End If        
                            End If
                        Next yloop     
                        StartPitch -= (.Pitch*ScaleX)
                        If StartPitch < 0 Then Exit For    
                    End With
                Next i
            End If    
    End Sub

'____________________________________________________________________________________________________________________________________________________        
'Palette Draw function ______________________________________________________________________________________________________________________________
    Sub Interface.Backend_Draw8Mode0Ex(ByVal X As Short, ByVal Y As Short)
        'No scale, no rotate
        'No scale, no rotate
        Dim As Short w, h
        Dim i As uShort
        Dim StartPitch  As Short
        Dim CharSelect  As uShort
        Dim As Short xs, ys, yloop, xloop
        Dim As Integer xp, yp
        Dim As uInteger pp, yfp
        Dim fontptr As uInteger
        Dim Buffer As uByte Ptr
        Dim AlphaVal As uByte
        Dim As uByte    R,G,B
        'Dim As uInteger Col
        Dim As Single   Alpha1,Alpha2
        
        If X > ImageBuffer.Width-1 Then Exit Sub
        'Drawing background rect -----------------------------------------------
            w = BackendStringWidth
            If w>0 Then
                If w+X > ImageBuffer.Width-1 Then w = ImageBuffer.Width - x - 1
                h = FontCollection(SelectedFontIndex).Header.FontHeight            
                If Y+h> ImageBuffer.Height-1 Then h = ImageBuffer.Height - y - 1
                xs = X : If xs<0 Then xs=0
                ys = Y : If ys<0 Then ys=0
                'Print xs, ys, X+w, Y+h
                If clipx1 > xs Then xs = clipx1
                If clipy1 > ys Then ys = clipy1
                If (xs + w > clipx2) Then w = clipx2 - x
                If (ys + h > clipy2) Then h = clipy2 - y
                BackendDrawRect8(xs, ys, X+w, Y+h)
            End If

        '-----------------------------------------------------------------------
        'Draw Text +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
            If xForeColorCompat.Alpha < 128 Then
                Exit Sub 'Not draw any char
            Else 
                'Draw with masking from font only -----------------------------------------
                Buffer = ImageBuffer.TargetPtr
                StartPitch = x 
                    For i = 0 To CharLen-1
                        CharSelect = CharVal(i)
                        If Not FontCollection(SelectedFontIndex).UsedFlag(CharSelect) Then
                            CharSelect = 0  'Pakai Chr 0
                        End If
                        
                        With FontCollection(SelectedFontIndex).Char(CharSelect)
                            StartPitch+=.Start
                            For yloop = .Top To .Top +.Height -1
                                yp = Y + yloop
                                If (yp >= clipy1) And (yp <= clipy2) Then
                                    If yp >= ImageBuffer.Height Then Exit For
                                    If yp >= 0 Then
                                        yp *= ImageBuffer.Pitch
                                        yfp = (yloop - .top) * .Width
                                        For xloop = 0 To .Width -1
                                            xp = StartPitch + xloop
                                            If (xp >= clipx1) And (xp <= clipx2) Then
                                                If xp >= ImageBuffer.Width Then Exit For
                                                If xp >= 0 Then
                                                    pp = xp + yp
                                                    fontptr = xloop+yfp
                                                    AlphaVal = .Sequence[fontptr]
                                                    If AlphaVal <192 Then Buffer[pp]= xForeColorCompat.Palette     
                                                End If 
                                            End If
                                        Next xloop
                                    End If
                                End If
                            Next yloop
                            StartPitch+=.Pitch    
                            If StartPitch >= ImageBuffer.Width Then Exit For     
                        End With
                    Next i
                '--------------------------------------------------------------------------        
            End If
           '+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    End Sub
    
'____________________________________________________________________________________________________________________________________________________    
    Sub Interface.Backend_Draw8Mode1Ex(ByVal x As Short, ByVal y As Short, ByVal ScaleX As Double, ByVal ScaleY As Double)
        
        Dim Buffer As uByte Ptr
        Dim StartPitch As Double
        Dim Spp As Short'Integer
        Dim As Short yloop, xloop
        Dim As Short i, CharSelect
        Dim As Integer xp, yp
        Dim As uInteger yfp, pp, fontptr ', Col
        Dim As uShort ypoint
        Dim As Double iScaleY, iScaleX
        Dim As uByte AlphaVal
        Dim As uByte    R,G,B
        Dim As Single   Alpha1,Alpha2
        Dim As Short w, h
        Dim As Short xs, ys
        
        If ScaleX<0 Or ScaleY<0 Then
            LastErrorCode = InvalidHandle
            Exit Sub
        End If
        
        If ScaleX=0 Or ScaleY=0 Then Exit Sub
        
        If X >= ImageBuffer.Width Then Exit Sub
        'Drawing background rect -----------------------------------------------
            w = Int(BackendStringWidth * ScaleX)
            If w>0 Then
                If w+X >= ImageBuffer.Width Then w = ImageBuffer.Width - x - 1
                h = Int(FontCollection(SelectedFontIndex).Header.FontHeight * ScaleY)            
                If Y+h>= ImageBuffer.Height Then h = ImageBuffer.Height - y - 1
                xs = X : If xs<0 Then xs=0
                ys = Y : If ys<0 Then ys=0
                If clipx1 > xs Then xs = clipx1
                If clipy1 > ys Then ys = clipy1
                If (xs + w > clipx2) Then w = clipx2 - x
                If (ys + h > clipy2) Then h = clipy2 - y
                BackendDrawRect8(xs, ys, X+w, Y+h)
            End If
        '-----------------------------------------------------------------------
        'Draw Text +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
            If xForeColorCompat.Alpha < 128 Then
                Exit Sub 'Not draw any char
            Else
                'Draw with masking from font only -----------------------------------------
                Buffer = ImageBuffer.TargetPtr
                StartPitch = x
                iScaleY=1/ScaleY
                iScaleX=1/ScaleX
                    For i = 0 To CharLen-1
                        CharSelect = CharVal(i)
                        If Not FontCollection(SelectedFontIndex).UsedFlag(CharSelect) Then
                            CharSelect = 0  'Pakai Chr 0
                        End If
                        
                        With FontCollection(SelectedFontIndex).Char(CharSelect)
                            StartPitch += (.Start * ScaleX)
                            spp=Int(StartPitch)
                            'If .Height = 0 Then Exit For
                            ypoint = CShort(.Top*ScaleY)
                            For yloop = ypoint To Int((.Top*ScaleY) + (.Height*ScaleY)) -1
                                yp = Y + yloop
                                If (yp >= clipy1) And (yp <= clipy2) Then
                                    If yp >= ImageBuffer.Height Then Exit For 
                                    If yp >= 0 Then
                                        yp *= ImageBuffer.Pitch
                                        yfp = Int((yloop - ypoint)*iScaleY) * .Width
                                        For xloop = 0 To Int(.Width*ScaleX) -1
                                            xp = Spp + xloop 'NB : Belum dirotasi
                                            If (xp >= clipx1) And (xp <= clipx2) Then
                                                If xp >= ImageBuffer.Width Then Exit For
                                                If xp >= 0 Then
                                                    pp = xp + yp
                                                    fontptr = Int(xloop * iScaleX) + yfp
                                                    AlphaVal = .Sequence[fontptr]
                                                    If AlphaVal <192 Then Buffer[pp]= xForeColorCompat.Palette
                                                End If 
                                            End If
                                        Next xloop
                                    End If
                                End If
                            Next yloop
                            StartPitch += (.Pitch*ScaleX)    
                            If StartPitch >= ImageBuffer.Width Then Exit For 'NB: belum dirotasi!    
                        End With
                    Next i                
            End If
    End Sub 

'___________________________________________________________________________________________________________________________________________________
    Sub Interface.Backend_Draw8Mode2Ex (ByVal X As Short, ByVal Y As Short) 'Vertical, no scale
        '
        Dim As Short w, h, Ye, Xe
        Dim i As uShort
        Dim StartPitch  As Short
        Dim CharSelect  As uShort
        Dim As Short xs, ys, yloop, xloop
        Dim As Integer xp, yp
        Dim As uInteger pp ', fp
        Dim fontptr As uInteger
        Dim Buffer As uByte Ptr
        Dim AlphaVal As uByte
        Dim As uByte    R,G,B
        'Dim As uInteger Col
        Dim As Single   Alpha1,Alpha2
        
        If Y < 0 Then Exit Sub
        If X >= ImageBuffer.Width Then Exit Sub
        'Drawing background rect -----------------------------------------------
            w = BackendStringWidth
            If w>0 Then
                If Y-w < 0 Then w = Y
                If Y-w >= ImageBuffer.Width Then Exit Sub
                h = FontCollection(SelectedFontIndex).Header.FontHeight            
                If X+h > ImageBuffer.Width-1 Then h = ImageBuffer.Width - X - 1
                If X+h < 0 Then Exit Sub
                xs = X   : If xs<0 Then xs=0
                ys = Y-w : If ys<0 Then ys=0
                Ye = Y
                If Ye >= ImageBuffer.Height And Ys < ImageBuffer.Height Then Ye = ImageBuffer.Height-1
                Xe = X+h
                If Xe >= ImageBuffer.Width And X > 0 Then Xe = ImageBuffer.Width-1
                'Print xs, ys, Xe, Ye
                If clipx1 > xs Then xs = clipx1
                If clipy1 > ys Then ys = clipy1
                If (Xe > clipx2) Then Xe = clipx2
                If (Ye > clipy2) Then Ye = clipy2
                BackendDrawRect8(xs, ys, Xe, Ye)
            End If
        '-----------------------------------------------------------------------
        'Draw Text +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
            If xForeColorCompat.Alpha < 128 Then
                Exit Sub 'Not draw any char
            Else
                'Draw with masking from font only -----------------------------------------
                Buffer = ImageBuffer.TargetPtr
                StartPitch = y
                For i = 0 To CharLen-1
                    CharSelect = CharVal(i)
                    If Not FontCollection(SelectedFontIndex).UsedFlag(CharSelect) Then
                        CharSelect = 0  'Pakai Chr 0
                    End If
                    
                    With FontCollection(SelectedFontIndex).Char(CharSelect)
                        StartPitch-=.Start
                        For yloop = 0 To .Width -1
                            yp = StartPitch - yloop
                            If (yp >= clipy1) And (yp <= clipy2) Then
                                If yp < 0 Then Exit For
                                If yp < ImageBuffer.Height-1  Then 
                                    yp *= ImageBuffer.Pitch
                                    'fp = '(yloop - .top) * .Width
                                    For xloop = .Top To .Top + .Height -1
                                        xp =  X + xloop
                                        If (xp >= clipx1) And (xp <= clipx2) Then
                                            If xp >= ImageBuffer.Width Then Exit For
                                            If xp >= 0 Then
                                                pp = xp + yp
                                                fontptr = yloop + (xloop-.Top)*.Width 
                                                AlphaVal = .Sequence[fontptr]
                                                If AlphaVal <192 Then Buffer[pp]= xForeColorCompat.Palette
                                            End If            
                                        End If
                                    Next xloop    
                                End If    
                            End If
                        Next yloop
                        StartPitch -= .Pitch
                        If StartPitch < 0 Then Exit For    
                    End With
                Next i    
                                         
            End If        
    End Sub
'___________________________________________________________________________________________________________________________________________________
    Sub Interface.Backend_Draw8Mode3Ex(ByVal x As Short, ByVal y As Short, ByVal ScaleX As Double, ByVal ScaleY As Double)
        'Scale, vertical
        Dim As Short w, h, Ye, Xe
        Dim i As uShort
        Dim StartPitch  As Double
        Dim CharSelect  As uShort
        Dim As Short xs, ys, yloop, xloop
        Dim As Integer xp, yp
        Dim As uInteger pp ', fp
        Dim fontptr As uInteger
        Dim Buffer As uByte Ptr
        Dim AlphaVal As uByte
        Dim As uByte    R,G,B
        'Dim As uInteger Col
        Dim As Single   Alpha1,Alpha2
        Dim Spp As Short
        Dim As uShort xpoint
        Dim As Double iScaleY, iScaleX
        Dim As uInteger yfp
        
        If ScaleX<0 Or ScaleY<0 Then
            LastErrorCode = InvalidHandle
            Exit Sub
        End If
        
        If Y < 0 Then Exit Sub
        If X >= ImageBuffer.Width Then Exit Sub
        'Drawing background rect -----------------------------------------------
            w = Int(BackendStringWidth * ScaleX)
            If w>0 Then
                If Y-w < 0 Then w = Y
                If Y-w >= ImageBuffer.Width Then Exit Sub
                h = Int(FontCollection(SelectedFontIndex).Header.FontHeight * ScaleY)            
                If X+h > ImageBuffer.Width-1 Then h = ImageBuffer.Width - X - 1
                If X+h < 0 Then Exit Sub
                xs = X   : If xs<0 Then xs=0
                ys = Y-w : If ys<0 Then ys=0
                Ye = Y
                If Ye >= ImageBuffer.Height And Ys < ImageBuffer.Height Then Ye = ImageBuffer.Height-1
                Xe = X+h
                If Xe >= ImageBuffer.Width And X > 0 Then Xe = ImageBuffer.Width-1
                'Print xs, ys, Xe, Ye
                If clipx1 > xs Then xs = clipx1
                If clipy1 > ys Then ys = clipy1
                If (Xe > clipx2) Then Xe = clipx2
                If (Ye > clipy2) Then Ye = clipy2
                BackendDrawRect8(xs, ys, Xe, Ye)
            End If
        '-----------------------------------------------------------------------
        'Draw Text +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
            If xForeColorCompat.Alpha < 128 Then
                Exit Sub 'Not draw any char
            Else
                'Draw with masking from font only -----------------------------------------
                Buffer = ImageBuffer.TargetPtr
                StartPitch = y
                iScaleY=1/ScaleY
                iScaleX=1/ScaleX
                For i = 0 To CharLen-1
                    CharSelect = CharVal(i)
                    If Not FontCollection(SelectedFontIndex).UsedFlag(CharSelect) Then
                        CharSelect = 0  'Pakai Chr 0
                    End If
                    
                    With FontCollection(SelectedFontIndex).Char(CharSelect)
                        StartPitch-=.Start*ScaleX
                        Spp=Int(StartPitch)
                        For yloop = 0 To (.Width*ScaleX) -1
                            yp = Spp - yloop
                            If (yp >= clipy1) And (yp <= clipy2) Then
                                If yp < 0 Then Exit For
                                If yp < ImageBuffer.Height-1  Then
                                    yp *= ImageBuffer.Pitch
                                    yfp = Int(yloop*iScaleX)
                                    xpoint = CShort(.Top*ScaleY)
                                    For xloop = xpoint To Int((.Top*ScaleY) + (.Height*ScaleY)) -1
                                        xp =  X + xloop
                                        If (xp >= clipx1) And (xp <= clipx2) Then
                                            If xp >= ImageBuffer.Width Then Exit For
                                            If xp >= 0 Then
                                                pp = xp + yp
                                                'Print iScaleY
                                                fontptr = yfp + Int((xloop-xpoint)*iScaleY)*.Width
                                                'If fontptr> 50 Then Print fontptr
                                                AlphaVal = .Sequence[fontptr]
                                                If AlphaVal <192 Then Buffer[pp]= xForeColorCompat.Palette
                                            End If   
                                        End If
                                    Next xloop                            
                                End If        
                            End If
                        Next yloop     
                        StartPitch -= (.Pitch*ScaleX)
                        If StartPitch < 0 Then Exit For    
                    End With
                    
                Next i
            End If    
    End Sub

'___________________________________________________________________________________________________________________________________________________

End Namespace
