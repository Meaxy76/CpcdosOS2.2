'04 August 2008
'v 8.8.28  : Fix autolock problem [last edit 30 august 2008)
'v 10.6.17 : Support viewport now. Suport isLoaded property [last edit 17 June 2010)
'v 11.9.13 : Fix windows.bi include conflict.
'30 December 2019
'v 12.0.0 : Interface.LoadFont: Close #1 --> Close #FF
'v 12.0.0 : Many uInteger --> uLong (also in xfont_clip.bas)
'v 12.0.0 : XFONT_IMAGE_BUFFER.TargetPtr uInteger -> any ptr

#Include Once "file.bi"
#Include Once "crt/string.bi"
#Include Once "std_font_0.bas"

Namespace xfont
    
   '______________________________________________________________________________________
    Const MAX_SLOT = 8
    Const MAX_CHAR = 32767
    Const XFONT_LIBVER_MAYOR    = 12
    Const XFONT_LIBVER_MINOR    = 0
    Const XFONT_LIBVER_REVISION = 0
    Const XFONT_LIBVER_BUILD    = 0
    Const XFONT_LIBVER_MSG      = "Copyright (c) Xaviorsoft Studios"
   '______________________________________________________________________________________ 
    Const _True_ = -1
    Const _False_ = 0
   
    Enum XFONT_ERROR_CONST
        FileNotFound        = 101
        IndexOutOfBound     = 102
        InvalidFileSize     = 103
        InvalidSignature    = 104
        VersionMismatch     = 105
        InvalidHandle       = 106
    End Enum
    
   '______________________________________________________________________________________ 
        
    Type XFONT_HEADER Field = 1 '_____________________________________________________________________________________
        Signature   As uShort       'Must be XF   
        FileFormat  As uShort       'Version format of file
        CrcType     As uByte        'Redudant Method (0=OFF)
        CrcData     As String * 16  'CRC of data or file
        MsgEncode   As uByte        'Message encoding. 0=ANSI, 1=Unicode (UTF-8)
        LofMsg      As uByte        'Message Length in bytes
        Message     As String * 192 'Font message
        FontnameEnc As uByte        'Font name encoding. 0=ANSI, 1=Unicode (UTF-8)
        LofName     As uByte        'Fontname Length in bytes
        Fontname    As String * 192 'Font name
        '*************************************************************************************
        EncodeType  As uByte        '0=ANSI, 1=Unicode
        FontSize    As uShort       'Font size in integer
        FontHeight  As uShort       'Font height
        FontFlag    As uShort       'Font flag
        '*************************************************************************************
        BitQuality  As uByte        '(Reserved). Bit used for Alpha masking (valid is 1 to 8), In ver 0.0 only 8 is supported.
        '*************************************************************************************
        CharStart   As uLong 'uInteger     'Character start code
        CharRange   As uLong 'uInteger     'Number of character in use
        '*************************************************************************************
        CharComp    As uShort       'Compressor type (0=off)
        CharOffset  As uLong 'uInteger     'Offset to Chars render flag. Must be 434
        CharLength  As uLong 'uInteger     'Length of chars render flag in byte(s)
        '*************************************************************************************
        DataComp    As uShort       'Compressor type (0=off)
        DataOffset  As uLong 'uInteger     'Offset to Chars alpha data
        DataLength  As uLong 'uInteger     'Length of chars alpha data in byte(s)  
    End Type '________________________________________________________________________________________________________
    
    Type XFONT_SEQUENCE '_____________________________________________________________________________________________
        Pitch       As uShort       'Character pitch value
        Start       As Short        'Character start value
        Top         As uShort       'Character top value
        Width       As uShort       'Width of mask
        Height      As uShort       'Height of mask
        Sequence    As uByte Ptr    'Bitmap mask sequence value
    End Type '________________________________________________________________________________________________________ 
    
    Type XFONT_COLOR
        Red             As uByte
        Green           As uByte
        Blue            As uByte
        Palette         As uLong 'uInteger     'Also known as RGBA value in 16-bit or higher (mod with 2^bit)
        Alpha           As uByte
        AlphaFactor     As Single
        iAlphafactor    As Single
        'Used for render addition to final color (Component * AlphaFactor)
        AfRed           As Single
        AfGreen         As Single
        AfBlue          As Single
        'Used for fast passing beetween color depth change
        Depth           As uByte 
    End Type
    
    Type XFONT_IMAGE_BUFFER 'For Header compatibility both old and new
        Width           As Short
        Height          As Short
        Depth           As uByte    'color depth in bits
        bpp             As uByte    'byte perpixel
        OldMode         As Byte     '_True_ if use old header and _False_ if use new (only work for 8bpp or less)
        Pitch           As uShort   'Pitch of buffer image or screen. In screen target Pitch is equal to Width
        TargetPtr       As any ptr 'uInteger        
    End Type
    
    Type XFONT_DATA '_________________________________________________________________________________________________
        Header              As XFONT_HEADER
        UsedFlag(65535)     As Byte             'Char mapped Flag
        Char(65535)         As XFONT_SEQUENCE
        Loaded              As Byte    
    End Type'________________________________________________________________________________________________________
    
    Type Interface'--------------------------------------------------------------------------------------------------
        'Public
        Declare Constructor ()
        Declare Destructor ()
        
        Declare Function LoadFont Overload (ByRef Filename As String, ByVal FontIndex As uByte) As Integer
        Declare Function LoadFont Overload (ByRef DataPtr As uByte Ptr, ByVal FontIndex As uByte) As Integer
        Declare Function UnloadFont (ByVal FontIndex As uByte) As Integer
         
        Declare Sub DrawString Overload (ByVal Target As Any Ptr=0, ByRef Text As wString Ptr, ByVal X As Short, ByVal Y As Short, _
                                         ByVal ScaleX As Single=1, ByVal ScaleY As Single=1, ByVal Direction As uByte=0)
                                       
        Declare Sub DrawString Overload (ByVal Target As Any Ptr=0, ByRef Text As String, ByVal X As Short, ByVal Y As Short, _
                                         ByVal ScaleX As Single=1, ByVal ScaleY As Single=1, ByVal Direction As uByte=0)
        
'        Declare Sub DrawString Overload (ByVal Target As Any Ptr=0, ByRef Text As uInteger Ptr, ByVal X As Short, ByVal Y As Short, _
'                                         ByVal ScaleX As Single=1, ByVal ScaleY As Single=1, ByVal Direction As uByte=0)

        Declare Sub DrawString Overload (ByVal Target As Any Ptr=0, ByRef Text As uLong Ptr, ByVal X As Short, ByVal Y As Short, _
                                         ByVal ScaleX As Single=1, ByVal ScaleY As Single=1, ByVal Direction As uByte=0)
                                       
        Declare Sub Backend_DrawString (ByVal Target As Any Ptr, ByVal X As Short, ByVal Y As Short, _
                                        ByVal ScaleX As Single, ByVal ScaleY As Single, ByVal Direction As uByte)
        
        Declare Sub BackendDrawRect24   (ByVal x1 As Short, ByVal y1 As Short, ByVal x2 As Short, ByVal y2 As Short)                                
        Declare Sub Backend_Draw24Mode0 (ByVal X As Short, ByVal Y As Short)
        Declare Sub Backend_Draw24Mode1 (ByVal x As Short, ByVal y As Short, ByVal ScaleX As Double, ByVal ScaleY As Double)
        Declare Sub Backend_Draw24Mode2 (ByVal X As Short, ByVal Y As Short)
        Declare Sub Backend_Draw24Mode3 (ByVal x As Short, ByVal y As Short, ByVal ScaleX As Double, ByVal ScaleY As Double)
        
        Declare Function Backend_RGB16_555  (r As uByte, g As uByte, b As uByte) As uShort
        Declare Sub BackendDrawRect16_555   (ByVal x1 As Short, ByVal y1 As Short, ByVal x2 As Short, ByVal y2 As Short)
        Declare Sub Backend_Draw16_555Mode0 (ByVal X As Short, ByVal Y As Short)
        Declare Sub Backend_Draw16_555Mode1 (ByVal x As Short, ByVal y As Short, ByVal ScaleX As Double, ByVal ScaleY As Double)
        Declare Sub Backend_Draw16_555Mode2 (ByVal X As Short, ByVal Y As Short)
        Declare Sub Backend_Draw16_555Mode3 (ByVal x As Short, ByVal y As Short, ByVal ScaleX As Double, ByVal ScaleY As Double)
        
        Declare Sub BackendDrawRect8   (ByVal x1 As Short, ByVal y1 As Short, ByVal x2 As Short, ByVal y2 As Short)
        Declare Sub Backend_Draw8Mode0 (ByVal X As Short, ByVal Y As Short)
        Declare Sub Backend_Draw8Mode1 (ByVal x As Short, ByVal y As Short, ByVal ScaleX As Double, ByVal ScaleY As Double)
        Declare Sub Backend_Draw8Mode2 (ByVal X As Short, ByVal Y As Short)
        Declare Sub Backend_Draw8Mode3 (ByVal x As Short, ByVal y As Short, ByVal ScaleX As Double, ByVal ScaleY As Double)
        
        Declare Sub Backend_Draw24Mode0Ex (ByVal X As Short, ByVal Y As Short)
        Declare Sub Backend_Draw24Mode1Ex (ByVal x As Short, ByVal y As Short, ByVal ScaleX As Double, ByVal ScaleY As Double)
        Declare Sub Backend_Draw24Mode2Ex (ByVal X As Short, ByVal Y As Short)
        Declare Sub Backend_Draw24Mode3Ex (ByVal x As Short, ByVal y As Short, ByVal ScaleX As Double, ByVal ScaleY As Double)
        
        Declare Sub Backend_Draw16_555Mode0Ex (ByVal X As Short, ByVal Y As Short)
        Declare Sub Backend_Draw16_555Mode1Ex (ByVal x As Short, ByVal y As Short, ByVal ScaleX As Double, ByVal ScaleY As Double)
        Declare Sub Backend_Draw16_555Mode2Ex (ByVal X As Short, ByVal Y As Short)
        Declare Sub Backend_Draw16_555Mode3Ex (ByVal x As Short, ByVal y As Short, ByVal ScaleX As Double, ByVal ScaleY As Double)
        
        Declare Sub Backend_Draw8Mode0Ex (ByVal X As Short, ByVal Y As Short)
        Declare Sub Backend_Draw8Mode1Ex (ByVal x As Short, ByVal y As Short, ByVal ScaleX As Double, ByVal ScaleY As Double)
        Declare Sub Backend_Draw8Mode2Ex (ByVal X As Short, ByVal Y As Short)
        Declare Sub Backend_Draw8Mode3Ex (ByVal x As Short, ByVal y As Short, ByVal ScaleX As Double, ByVal ScaleY As Double)
        
        
        Declare Function StringWidth Overload (ByRef Text As wString Ptr)   As uShort
        Declare Function StringWidth Overload (ByRef Text As String)        As uShort
        'Declare Function StringWidth Overload (ByRef Text As uInteger Ptr)  As uShort
        Declare Function StringWidth Overload (ByRef Text As uLong Ptr)  As uShort
        
        Declare Function BackendStringWidth() As uShort
                                                                                                
        Declare Function CreateCompatibleHeader (ByRef DataPtr As Any Ptr) As XFONT_HEADER
        Declare Function QueryHeaderCompat (ByRef HeaderIn As XFONT_HEADER, ByVal FileSize As LongInt)As Integer
        Declare Function Backend_LoadFont (ByRef DataPtr As Any Ptr, DataBound As uInteger, FontIndex As uByte) As Integer
        Declare Function Backend_UnloadFont (ByVal FontIndex As uByte) As Integer
        
        'Declare Property Filtering() As uByte '0=None, 1=3x3 mean, 2=3x3 circle (not implemented yet)
        Declare Property FontIndex() As uByte '0=None, 1=3x3 mean, 2=3x3 circle
        Declare Property FontIndex(ByVal Expression As uByte)
        Declare Property TextHeight () As uShort
        Declare Property TextSize   () As uShort
        Declare Property BackColor() As uLong 'uInteger 
        Declare Property BackColor(ByVal Expression As uLong) 'uInteger
        Declare Property ForeColor() As uLong 'uInteger 
        Declare Property ForeColor(ByVal Expression As uLong) 'uInteger
        Declare Property FontName() As String
        Declare Property Bold() As Byte
        Declare Property Italic() As Byte
        Declare Property Underline() As Byte
        Declare Property Message() As String
        
        Declare Property MajorVersion() As uShort
        Declare Property MinorVersion() As uShort
        Declare Property Revision() As uShort
        Declare Property Copyright() As String
        
        'New In v 10.6.17
        Declare Property IsLoaded(ByVal Expression As uByte) As Byte 'check if Font is loaded into index.
        Declare Property UseViewport(ByVal Expression As Byte) 'using vewport or not. Default is 0.
        Declare Property UseViewport() As Byte
        
        'Error handling
        Declare Property LastError() As Integer
        Declare Sub ClearError()
        
        'fb 0.18.x compatibility support
        Declare Property AutoRedraw() As Byte
        Declare Property AutoRedraw(ByVal Expression As Byte)
        
        'Private
        As XFONT_DATA           FontCollection(MAX_SLOT)
        As Integer              LastErrorCode
        As Single               AlphaFactor255(255)  : As Single AlphaFactor31(31)
        As Single               iAlphaFactor255(255) : As Single iAlphaFactor31(31)
        As XFONT_COLOR          xForeColor, xBackColor
        As XFONT_COLOR          xForeColorCompat, xBackColorCompat  'Untuk kompatibilitas antar mode
        As uShort               CharVal(MAX_CHAR)       'Zero terminated
        As uShort               CharLen                 'Character Length
        As XFONT_IMAGE_BUFFER   ImageBuffer
        As uShort               SelectedFontIndex
        As Byte                 ColorChange
        As Byte                 UseScreenLock
        
        As Byte                 UseView
        As Integer              clipx1, clipy1, clipx2, clipy2          'Clipview coordinates   
    End Type'--------------------------------------------------------------------------------------------------------
        
End namespace


Namespace xfont
'____________________________________________________________________________________________________________________________________________________    
    
    Constructor Interface()
        
        Dim As Byte fb20x
        
        'Loading Default font
        Backend_LoadFont (@DEFAULT_FONT_0(0), UBound(DEFAULT_FONT_0)+1, 0)
        'Precalculate Alpha Blending factor
        For i As Short = 0 To 255
            AlphaFactor255(i)  = i / &hFF
            iAlphaFactor255(i) = 1 - AlphaFactor255(i)
        Next i
        For i As Short = 0 To 31
            AlphaFactor31(i)  = i / &h1F
            iAlphaFactor31(i) = 1 - AlphaFactor31(i)
        Next i
        Forecolor = Rgba(0,0,0,255) 'default forecolor
        Backcolor = Rgba(255,255,255,255) 'default backcolor
        fb20x = (__FB_VER_MAJOR__ >= 0) And (__FB_VER_MINOR__ >= 20) 'New version FB compat always use screenlock coz have internal screenlock count
        'Print Oldcompat
        UseScreenLock = fb20x
        
        'UseView = -1 'use viewport (default)
    End Constructor
'____________________________________________________________________________________________________________________________________________________    
    
    Destructor Interface()
        'Automaticly unload font
        Dim i As uByte
        For i = 0 To MAX_SLOT
            Backend_UnloadFont(i)
        Next i
    End Destructor
'____________________________________________________________________________________________________________________________________________________    
    Property Interface.IsLoaded(ByVal Expression As uByte) As Byte
        If Expression < 0  Or Expression > MAX_SLOT Then
            Return 0
        End If
        Return FontCollection(Expression).Loaded    
    End property    
'____________________________________________________________________________________________________________________________________________________    
    Property Interface.UseViewport() As Byte
        Return UseView
    End property
'____________________________________________________________________________________________________________________________________________________    
    Property Interface.UseViewport(ByVal Expression As Byte)
        If Expression = 0 Then
            UseView = _False_
        Else
            UseView = _True_
        End If
    End property
'____________________________________________________________________________________________________________________________________________________    

    Property Interface.AutoRedraw() As Byte
        Return UseScreenLock
    End property
'____________________________________________________________________________________________________________________________________________________    
    
    Property Interface.Autoredraw(ByVal Expression As Byte)
        If Expression = 0 Then
            UseScreenLock = _False_
        Else
            UseScreenLock = _True_
        End If
    End property

'____________________________________________________________________________________________________________________________________________________    
    
    Property Interface.LastError() As Integer
            Return LastErrorCode
    End Property
'____________________________________________________________________________________________________________________________________________________    

    Sub Interface.ClearError()
        LastErrorCode = 0    
    End Sub
'____________________________________________________________________________________________________________________________________________________    
    
    Property Interface.FontIndex() As uByte
        Return SelectedFontIndex
    End property
'____________________________________________________________________________________________________________________________________________________    
    
    Property Interface.FontIndex(ByVal Expression As uByte)
        If Expression < 0  Or Expression > MAX_SLOT Then
            LastErrorCode = IndexOutOfBound
            Exit property
        End If
        If Not FontCollection(Expression).Loaded Then
            LastErrorCode = InvalidHandle
            Exit Property
        End If
        SelectedFontIndex = Expression
    End property

'____________________________________________________________________________________________________________________________________________________    

    Property Interface.TextHeight() As uShort
        Return FontCollection(SelectedFontIndex).Header.FontHeight
    End property
'____________________________________________________________________________________________________________________________________________________    

    Property Interface.TextSize() As uShort
        Return FontCollection(SelectedFontIndex).Header.FontSize
    End property
'____________________________________________________________________________________________________________________________________________________    

    Property Interface.FontName() As String
        With FontCollection(SelectedFontIndex).Header
            Return Left(.FontName, .LofName)
        End With
    End property
'____________________________________________________________________________________________________________________________________________________    
    Property Interface.Bold() As Byte
        With FontCollection(SelectedFontIndex).Header
            If (.FontFlag And 1) > 0 Then
                Return _True_
            Else
                Return _False_
            End If 
        End With
    End property
'____________________________________________________________________________________________________________________________________________________    
    Property Interface.Italic() As Byte
        With FontCollection(SelectedFontIndex).Header
            If (.FontFlag And 2) > 0 Then
                Return _True_
            Else
                Return _False_
            End If 
        End With
    End property
'____________________________________________________________________________________________________________________________________________________    
    Property Interface.Underline() As Byte
        With FontCollection(SelectedFontIndex).Header
            If (.FontFlag And 4) > 0 Then
                Return _True_
            Else
                Return _False_
            End If 
        End With
    End property
'____________________________________________________________________________________________________________________________________________________    

    Property Interface.Message() As String
        With FontCollection(SelectedFontIndex).Header
            Return Left(.Message, .LofMsg)
        End With
    End property
'____________________________________________________________________________________________________________________________________________________    

    Property Interface.Copyright() As String
        Return XFONT_LIBVER_MSG
    End property
'____________________________________________________________________________________________________________________________________________________    

    Property Interface.MajorVersion() As uShort
        Return XFONT_LIBVER_MAYOR
    End property
'____________________________________________________________________________________________________________________________________________________    

    Property Interface.MinorVersion() As uShort
        Return XFONT_LIBVER_MINOR
    End property
'____________________________________________________________________________________________________________________________________________________    

    Property Interface.Revision() As uShort
        Return XFONT_LIBVER_REVISION
    End property
'____________________________________________________________________________________________________________________________________________________    

    
    Function Interface.QueryHeaderCompat(ByRef HeaderIn As XFONT_HEADER, ByVal FileSize As LongInt) As Integer
        'Mengecek kompatibilitas header. Mengembalikan _True_ jika gagal, dan _False_ jika OK
        With HeaderIn
            If .Signature <> &h4658   Then LastErrorCode = InvalidSignature   : Return _True_
            If .FileFormat <> 0       Then LastErrorCode = VersionMismatch    : Return _True_    'Only support version 0 for now
            If .MsgEncode > 1         Then LastErrorCode = InvalidHandle      : Return _True_
            If .LofMsg > 192          Then LastErrorCode = InvalidHandle      : Return _True_    'Invalid String Handle 
            If .FontnameEnc > 1       Then LastErrorCode = InvalidHandle      : Return _True_    'Invalid String Handle 
            If .LofName > 192         Then LastErrorCode = InvalidHandle      : Return _True_    'Invalid String Handle
            If .EncodeType > 1        Then LastErrorCode = InvalidHandle      : Return _True_
            If .CharStart < 1         Then LastErrorCode = InvalidHandle      : Return _True_
            If .CharComp > 0          Then LastErrorCode = InvalidHandle      : Return _True_    ' Compression not supported yet
            If (.CharOffset > 0) And (.CharOffset < 445) _
                                      Then LastErrorCode = InvalidHandle      : Return _True_
            If .CharOffset > FileSize Then LastErrorCode = InvalidHandle      : Return _True_
            
            If .CharLength > FileSize Then LastErrorCode = InvalidHandle      : Return _True_
            If (.CharOffset + .CharLength) > FileSize _
                                      Then LastErrorCode = InvalidHandle      : Return _True_
            If (.CharRange\8) > .CharLength _
                                      Then LastErrorCode = InvalidHandle      : Return _True_    ' Char Flag Size Bit not enough
            
 
            If .DataComp > 0          Then LastErrorCode = InvalidHandle      : Return _True_    ' Compression not supported yet
            If .DataOffset < 445      Then LastErrorCode = InvalidHandle      : Return _True_
            If .DataOffset > FileSize Then LastErrorCode = InvalidHandle      : Return _True_
            If .DataOffset > FileSize Then LastErrorCode = InvalidHandle      : Return _True_
            If (.DataOffset + .DataLength) > FileSize _
                                      Then LastErrorCode = InvalidHandle      : Return _True_
            If .DataLength < 445      Then LastErrorCode = InvalidHandle      : Return _True_
            If .DataOffset > (FileSize-445) _
                                      Then LastErrorCode = InvalidHandle      : Return _True_   
        End With 
    End Function
    
'____________________________________________________________________________________________________________________________________________________    

    Function Interface.Backend_LoadFont (ByRef DataPtr As Any Ptr, DataSize As uInteger, ByVal FontIdx As uByte) As Integer
    'Function Interface.Backend_LoadFont(ByRef DataPtr As Any Ptr, DataSize As uLong, ByVal FontIdx As uByte) As Integer
        
        Dim As uLong i 'uInteger
        Dim As XFONT_HEADER Ptr tmpHeader
        Dim As uByte Ptr ByteStream
        Dim As uShort BitPos, BytePos 
        Dim As uShort w, h, p, t, s
        Dim As uLong rpos 'uInteger
        Dim As uLong ret 'uInteger
        
        ByteStream = DataPtr
        
        With FontCollection(FontIdx)
            .Loaded = _True_ 'Pre flag
            
            .Header = CreateCompatibleHeader(ByteStream)
            'Processing CharFlag
            .UsedFlag(0) = _True_
            BytePos = .Header.CharOffset
            For i = .Header.CharStart To (.Header.CharStart + .Header.CharRange)-1
                .UsedFlag(i) = Bit( ByteStream[BytePos] , BitPos )
                BitPos += 1
                If BitPos >= 8 Then
                    BitPos = 0
                    BytePos += 1
                End If   
            Next i

            rpos = .Header.DataOffset
            'Aquire the Null char (0)
                If rpos+10 > DataSize Then LastErrorCode = IndexOutOfBound  : Return _True_ 'Size not enough
                memcpy(@p , DataPtr+rpos,   2)   'Pitch
                memcpy(@s , DataPtr+rpos+2, 2)   'Start
                memcpy(@t , DataPtr+rpos+4, 2)   'Top
                memcpy(@w , DataPtr+rpos+6, 2)   'Width
                memcpy(@h , DataPtr+rpos+8, 2)   'Height 
                rpos += 10
                .Char(i).Width  = w  
                .Char(i).Height = h
                .Char(i).Start  = s
                .Char(i).Top    = t
                .Char(i).Pitch  = p
                ret = w*h
                If ret > 0 Then
                  If rpos+ret > DataSize Then
                        LastErrorCode = IndexOutOfBound
                        'UnloadFont (FontIdx)
                        Return _True_ 'Size not enough 
                  End If 
                  .Char(0).Sequence = Allocate(ret)
                  memcpy(.Char(0).Sequence , DataPtr+rpos, ret)   'Char mask
                  rpos += ret
                End If       

            'Processing Other Character Mask
            'Print (CInt(.Header.CharStart) + CInt(.Header.CharRange))-1
            For i = .Header.CharStart To (CInt(.Header.CharStart) + CInt(.Header.CharRange))-1
                
                If .UsedFlag(i) Then
                    ' Print i
                    If rpos+10 > DataSize Then
                        'Print "heaaa " & rpos+10
                        LastErrorCode = IndexOutOfBound
                        'UnloadFont(FontIdx)
                        Return _True_ 'Size not enough 
                    End If
                    memcpy(@p , DataPtr+rpos,   2)   'Pitch
                    memcpy(@s , DataPtr+rpos+2, 2)   'Start
                    memcpy(@t , DataPtr+rpos+4, 2)   'Top
                    memcpy(@w , DataPtr+rpos+6, 2)   'Width  
                    memcpy(@h , DataPtr+rpos+8, 2)   'Height
                    rpos += 10
                    .Char(i).Width  = w
                    .Char(i).Height = h
                    .Char(i).Start  = s
                    .Char(i).Top    = t
                    .Char(i).Pitch  = p                
                    ret = w*h
                    If ret > 0 Then
                          If rpos+ret > DataSize Then
                                LastErrorCode = IndexOutOfBound
                                'UnloadFont(FontIdx)
                                Return _True_ 'Size not enough
                          End If 
                          .Char(i).Sequence = Allocate(ret)
                          memcpy(.Char(i).Sequence , DataPtr+rpos, ret)   'Char mask
                          rpos += ret
                    End If       
                End If
            Next i
            'Print rpos
        End With    
    End Function
'____________________________________________________________________________________________________________________________________________________    
    
    Function Interface.UnloadFont(ByVal FontIdx As uByte) As Integer
        If (FontIdx<1) Or (FontIdx>MAX_SLOT) Then LastErrorCode = IndexOutOfBound : Return _False_ 'Out of Index
        If FontIdx = SelectedFontIndex Then SelectedFontIndex=0 'Kembali ke default font
        Return Backend_UnloadFont(FontIdx)    
    End Function
'____________________________________________________________________________________________________________________________________________________    
    
    Function Interface.Backend_UnloadFont (ByVal FontIdx As uByte) As Integer
        Dim i As uLong 'uInteger
        Dim EmptyHeader As XFONT_HEADER
        With FontCollection(FontIdx)
            If Not .Loaded  Then LastErrorCode = InvalidHandle : Return _False_ 'Already unload or empty
            .Header = EmptyHeader 'sigh memset can't be used :(
            'memset(@.Header, &0, SizeOf(.header)) 'clean the header
            For i = 0 To 65535 'Unload the char
                If (.Char(i).Width > 0) And .UsedFlag(i) Then
                    Deallocate(.Char(i).Sequence)'Free memory
                    'The other char property doen't need to be cleaned
                End If
            Next i
            Erase .usedflag 'clean the flag
            .Loaded = _False_
        End With    
    End Function
'____________________________________________________________________________________________________________________________________________________    
    
    Function Interface.CreateCompatibleHeader (ByRef DataPtr As Any Ptr) As XFONT_HEADER
    'Karena FB O'on dalam membaca format file karena perbedaan Len dengan SizeOf, maka diperlukan fungsi khusus ini. :(
            
            Dim As XFONT_HEADER tmpHeader
            
            With tmpHeader
                memcpy(@.Signature , DataPtr, 2)        ': Print ".Signature : " & .Signature
                memcpy(@.FileFormat , DataPtr+2, 2)     ': Print ".FileFormat : " & .FileFormat
                memcpy(@.CrcType , DataPtr+4, 1)        ': Print ".CrcType : " & .CrcType
                memcpy(@.CrcData , DataPtr+5, 16)       ': Print ".CrcData : " & .CrcData
                memcpy(@.MsgEncode , DataPtr+21, 1)     ': Print ".MsgEncode : " & .MsgEncode
                memcpy(@.LofMsg , DataPtr+22, 1)        ': Print ".LofMsg : " & .LofMsg
                memcpy(@.Message , DataPtr+23, 192)     ': Print ".Message : " & .Message
                memcpy(@.FontnameEnc , DataPtr+215, 1)  ': Print ".FontnameEnc : " & .FontnameEnc
                memcpy(@.LofName , DataPtr+216, 1)      ': Print ".LofName : " & .LofName
                memcpy(@.Fontname , DataPtr+217, 192)   ': Print ".Fontname : " & .Fontname
                memcpy(@.EncodeType , DataPtr+409, 1)   ': Print ".EncodeType : " & .EncodeType
                memcpy(@.FontSize , DataPtr+410, 2)     ': Print ".FontSize : " & .FontSize
                memcpy(@.FontHeight , DataPtr+412, 2)   ': Print ".FontHeight : " & .FontHeight
                memcpy(@.FontFlag , DataPtr+414, 2)     ': Print ".FontFlag : " & .FontFlag
                memcpy(@.BitQuality , DataPtr+416, 1)   ': Print ".BitQuality : " & .BitQuality
                memcpy(@.CharStart , DataPtr+417, 4)    ': Print ".CharStart : " & .CharStart
                memcpy(@.CharRange , DataPtr+421, 4)    ': Print ".CharRange : " & .CharRange
                memcpy(@.CharComp , DataPtr+425, 2)     ': Print ".CharComp : " & .CharComp
                memcpy(@.CharOffset , DataPtr+427, 4)   ': Print ".CharOffset : " & .CharOffset
                memcpy(@.CharLength , DataPtr+431, 4)   ': Print ".CharLength : " & .CharLength
                memcpy(@.DataComp , DataPtr+435, 2)     ': Print ".DataComp : " & .DataComp
                memcpy(@.DataOffset , DataPtr+437, 4)   ': Print ".DataOffset : " & .DataOffset
                memcpy(@.DataLength , DataPtr+441, 4)   ': Print ".DataLength : " & .DataLength
            End With
                       
            Return tmpHeader     
    End Function
    
'____________________________________________________________________________________________________________________________________________________    
    
    Function Interface.LoadFont Overload (ByRef Filename As String, ByVal FontIdx As uByte) As Integer 
    'Akan mengembalikan _False_ Jika berhasil, dan _True_ jika tidak
            'Dim As String fname = filename
            Dim As Integer FF
            Dim As LongInt FL 'uInteger
            Dim As uByte Ptr MyPtr
            Dim As uByte tmpHeader(444)
            Dim As XFONT_HEADER retHeader 
            Dim As Integer ret
            'Print fname
            
            If (FontIdx < 1) Or (FontIdx > MAX_SLOT) Then  LastErrorCode = IndexOutOfBound : Return _True_   
            If FontCollection(FontIdx).Loaded Then LastErrorCode = InvalidHandle : Return _True_ 'Font already used
            
            'Print "exists : " & FileExists(Filename)
            'Print filename
            If Not FileExists(Filename) Then LastErrorCode = FileNotFound : Return _True_
            FL = FileLen(Filename)
            If FL <= 445 Then LastErrorCode = InvalidFileSize : Return _True_     'Size to small
            
            'Read header
            FF = FreeFile
            Open Filename For Binary As #FF 'Len=1
            Get #FF,1,tmpHeader()
            retHeader = CreateCompatibleHeader(@tmpHeader(0))
            If QueryHeaderCompat(retHeader, FL) Then  'Checking Header
                Close #FF
                LastErrorCode = InvalidHandle : Return _True_    
            End If
            
            FL = retHeader.DataOffset+retHeader.DataLength
            MyPtr=Allocate(FL)
            Get #FF,1,*MyPtr,FL
            Close #FF '#1
            ret= Backend_LoadFont(MyPtr, FL, FontIdx)                            'LoadFont
            Deallocate(MyPtr)
            Return ret
    End Function    
'____________________________________________________________________________________________________________________________________________________    
    
    Function Interface.LoadFont Overload (ByRef DataPtr As uByte Ptr, ByVal FontIdx As uByte) As Integer
            Dim As XFONT_HEADER retHeader
            Dim As LongInt FL 'uInteger
            If (FontIdx < 1) Or (FontIdx > MAX_SLOT) Then  LastErrorCode = IndexOutOfBound : Return _True_
            retHeader = CreateCompatibleHeader(DataPtr)
            FL = retHeader.DataOffset+retHeader.DataLength
            'print retHeader.DataOffset+retHeader.DataLength
            If QueryHeaderCompat(retHeader, FL) Then  'Checking Header
                LastErrorCode = InvalidHandle : Return _True_
            End If
            
            Return Backend_LoadFont(DataPtr, FL, FontIdx)    
    End Function
'___________________________________________________________________________________________________________________________________________________    
    'Function Interface.StringWidth Overload (ByRef Text As uInteger Ptr)   As uShort
    Function Interface.StringWidth Overload (ByRef Text As uLong Ptr)   As uShort
        Dim i As uShort
        Dim l As Integer
        Dim EscFlag As Byte

        If SelectedFontIndex < 0 Or SelectedFontIndex > MAX_SLOT Then
            LastErrorCode = IndexOutOfBound
            Return 0
        Else
            If Not FontCollection(SelectedFontIndex).Loaded Then
                LastErrorCode = InvalidHandle
                Return 0
            Else
                'checking font height
                If FontCollection(SelectedFontIndex).Header.FontHeight = 0 Then Return 0
            End If
        End If
        
        'Copying Text =============================================================
            While Not EscFlag
                If Text[i] > 0 Then
                    If Text[i]<= 65535 Then
                        Charval(i) = Text[i]
                    Else
                        Charval(i) = 0
                    End If
                    i += 1
                Else
                    Charval(i)=0
                    CharLen = i
                    EscFlag = _True_
                End If    
            Wend

            If CharLen = 0 Then Return 0
            Return BackendStringWidth
        '==========================================================================    
    
    End Function
'____________________________________________________________________________________________________________________________________________________    
    
'    Sub Interface.DrawString Overload (ByVal Target As Any Ptr, ByRef Text As uInteger Ptr, ByVal X As Short, ByVal Y As Short, _
'                                       ByVal ScaleX As Single=1, ByVal ScaleY As Single=1, ByVal Direction As uByte=0)
    Sub Interface.DrawString Overload (ByVal Target As Any Ptr, ByRef Text As uLong Ptr, ByVal X As Short, ByVal Y As Short, _
                                       ByVal ScaleX As Single=1, ByVal ScaleY As Single=1, ByVal Direction As uByte=0)
        Dim i As uShort
        Dim l As Integer
        Dim EscFlag As Byte

        If SelectedFontIndex < 0 Or SelectedFontIndex > MAX_SLOT Then
            LastErrorCode = IndexOutOfBound
            Exit Sub
        Else
            If Not FontCollection(SelectedFontIndex).Loaded Then
                LastErrorCode = InvalidHandle
                Exit Sub
            Else
                'checking font height
                If FontCollection(SelectedFontIndex).Header.FontHeight = 0 Then Exit Sub
            End If
        End If
        
        'Copying Text =============================================================
            While Not EscFlag
                If Text[i] > 0 Then
                    If Text[i]<= 65535 Then
                        Charval(i) = Text[i]
                    Else
                        Charval(i) = 0
                    End If
                    i += 1
                Else
                    Charval(i)=0
                    CharLen = i
                    EscFlag = _True_
                End If    
            Wend

            If CharLen = 0 Then Exit Sub
            If BackendStringWidth = 0 Then Exit Sub
        '==========================================================================
        Backend_DrawString (Target, X, Y, ScaleX, ScaleY, Direction)
    End Sub
    
'____________________________________________________________________________________________________________________________________________________    
    Function Interface.StringWidth Overload (ByRef Text As wString Ptr)   As uShort
        Dim i As uShort
        Dim l As Integer
        
        If SelectedFontIndex < 0 Or SelectedFontIndex > MAX_SLOT Then
            LastErrorCode = IndexOutOfBound
            Return 0
        Else
            If Not FontCollection(SelectedFontIndex).Loaded Then
                LastErrorCode = InvalidHandle
                Return 0
            Else
                'checking font height
                If FontCollection(SelectedFontIndex).Header.FontHeight = 0 Then Return 0
            End If
        End If
        
        'Copying Text =============================================================
            l=Len(*Text)
            'Print Len(*Text)
            If l=0 Then Return 0
            If l>MAX_CHAR Then l=MAX_CHAR
            For i = 0 To l-1
                If Text[i]<= 65535 Then
                    Charval(i) = Text[i]
                Else
                    Charval(i) = 0
                End If        
            Next i
            Charval(l)=0    'an implicit chr$(0) is added to the end of the string (no needed yet)
            CharLen=l
            If CharLen = 0 Then Return 0
            Return BackendStringWidth
    End Function
'____________________________________________________________________________________________________________________________________________________    
    
    Sub Interface.DrawString Overload (ByVal Target As Any Ptr, ByRef Text As WString Ptr, ByVal X As Short, ByVal Y As Short, _
                                       ByVal ScaleX As Single=1, ByVal ScaleY As Single=1, ByVal Direction As uByte=0)
        Dim i As uShort
        Dim l As Integer
        
        If SelectedFontIndex < 0 Or SelectedFontIndex > MAX_SLOT Then
            LastErrorCode = IndexOutOfBound
            Exit Sub
        Else
            If Not FontCollection(SelectedFontIndex).Loaded Then
                LastErrorCode = InvalidHandle
                Exit Sub
            Else
                'checking font height
                If FontCollection(SelectedFontIndex).Header.FontHeight = 0 Then Exit Sub
            End If
        End If
        
        'Copying Text =============================================================
            l=Len(*Text)
            'Print Len(*Text)
            If l=0 Then Exit Sub
            If l>MAX_CHAR Then l=MAX_CHAR
            For i = 0 To l-1
                If Text[i]<= 65535 Then
                    Charval(i) = Text[i]
                Else
                    Charval(i) = 0
                End If        
            Next i
            Charval(l)=0    'an implicit chr$(0) is added to the end of the string (no needed yet)
            CharLen=l
            If CharLen = 0 Then Exit Sub
            If BackendStringWidth = 0 Then Exit Sub
        '==========================================================================
        Backend_DrawString (Target, X, Y, ScaleX, ScaleY, Direction)
    End Sub
'____________________________________________________________________________________________________________________________________________________    
    Function Interface.StringWidth Overload (ByRef Text As String)   As uShort
        Dim i As uShort
        Dim l As Integer
        
        If SelectedFontIndex < 0 Or SelectedFontIndex > MAX_SLOT Then
            LastErrorCode = IndexOutOfBound
            Return 0
        Else
            If Not FontCollection(SelectedFontIndex).Loaded Then
                LastErrorCode = InvalidHandle
                Return 0
            Else
                'checking font height
                If FontCollection(SelectedFontIndex).Header.FontHeight = 0 Then Return 0
            End If
        End If
        
        'Copying Text =============================================================
            l=Len(Text)
            
            If l=0 Then Return 0
            If l>MAX_CHAR Then l=MAX_CHAR
            For i = 0 To l-1
                Charval(i) = Text[i]    
            Next i
            Charval(l)=0    'an implicit chr$(0) is added to the end of the string
            CharLen=l
            If CharLen = 0 Then Return 0
            Return BackendStringWidth
        '==========================================================================
    
    End Function
'____________________________________________________________________________________________________________________________________________________    
        
    Sub Interface.DrawString Overload (ByVal Target As Any Ptr, ByRef Text As String, ByVal X As Short, ByVal Y As Short, _
                                       ByVal ScaleX As Single=1, ByVal ScaleY As Single=1, ByVal Direction As uByte=0)
        Dim i As uShort
        Dim l As Integer
        
        If SelectedFontIndex < 0 Or SelectedFontIndex > MAX_SLOT Then
            LastErrorCode = IndexOutOfBound
            Exit Sub
        Else
            If Not FontCollection(SelectedFontIndex).Loaded Then
                LastErrorCode = InvalidHandle
                Exit Sub
            Else
                'checking font height
                If FontCollection(SelectedFontIndex).Header.FontHeight = 0 Then Exit Sub
            End If
        End If
        
        'Copying Text =============================================================
            l=Len(Text)
            
            If l=0 Then Exit Sub
            If l>MAX_CHAR Then l=MAX_CHAR
            For i = 0 To l-1
                Charval(i) = Text[i]    
            Next i
            Charval(l)=0    'an implicit chr$(0) is added to the end of the string
            CharLen=l
            If CharLen = 0 Then Exit Sub
            If BackendStringWidth = 0 Then Exit Sub
        '==========================================================================
        Backend_DrawString (Target, X, Y, ScaleX, ScaleY, Direction)
    End Sub
    
'____________________________________________________________________________________________________________________________________________________    
    
    Sub Interface.Backend_DrawString (ByVal Target As Any Ptr, ByVal X As Short, ByVal Y As Short, _
                                      ByVal ScaleX As Single, ByVal ScaleY As Single, ByVal Direction As uByte)
                                      
        Dim ret As uByte Ptr
        Dim retval As uByte
        Dim As Integer w, h, Depth, bpp, Pitch
        'Untuk mendeteksi header image buffer ------
        Dim As uLong Ptr chunkHeader 'uInteger
        Dim As uLong     chunkParse 'uInteger
        '-------------------------------------------
        
        If UseView Then
            screencontrol (11, clipx1, clipy1, clipx2, clipy2)
            'Use relative draw
            X += clipx1
            Y += clipy1
        End If
                
        'Checking then create compatible Color and image buffer *******************
            If Target = 0 Then
                'Create image compatibilty with screen
                With ImageBuffer
                    .TargetPtr = ScreenPtr
                    If (.TargetPtr = 0) Then Exit Sub
                    ScreenInfo w, h, Depth, bpp, Pitch
                    .Width = w
                    .Height = h
                    .Depth = Depth
                    .bpp = bpp
                    .Pitch = Pitch \ bpp
                End With
            Else
                'Create Compatibility with image buffer
                'Checking header
                chunkHeader = Target
                If *chunkHeader = &h7 Then 'Note: Seems like fb always use new header in version 0.18.5 even bpp is 8
                    'New header
                    With ImageBuffer
                        .bpp    = chunkHeader[1] 
                        .Depth  = .bpp*8       
                        .Width  = chunkHeader[2]
                        .Height = chunkHeader[3]
                        .Pitch = chunkHeader[4]\.bpp
                        .TargetPtr = Target + 32   
                    End With
                Else
                    'Old header
                    With ImageBuffer
                        'Parsing bpp & Depth --------------------------------
                        chunkParse = (*chunkHeader Shl 29 Shr 29)
                        If chunkParse >=1 And chunkParse<=4 Then
                            .bpp = chunkParse
                            .Depth = 8 * chunkParse                           
                        Else
                            LastErrorCode = InvalidHandle
                            Exit Sub
                        End If
                        '---------------------------------------------------
                        'Parsing Width
                        .Width  = (*chunkHeader Shl 16 Shr 19)
                        .Height = (*chunkHeader Shr 16)
                        .TargetPtr = chunkHeader + 4
                        .Pitch = .Width 'Since size = 4 + ( width * height * bytes_per_pixel )
                    End With
                End If
            End If
            
            'Create comaptible color
            If (xForeColorCompat.Depth <> ImageBuffer.Depth) Or ColorChange Then
                'If ColorChange Then End
                Select Case ImageBuffer.Depth
                    Case 24, 32:
                        If xForeColorCompat.Depth <24 Or ColorChange Then 'Doesn't need change beetween 24 & 32
                            xForeColorCompat = xForeColor
                            xBackColorCompat = xBackColor
                        End If
                    Case 15, 16: 'Case 16 same with case 15 at this version since doesn't know how to figure 5-6-5 mode in fb
                        With xForeColorCompat
                            .Red = xForeColor.Red And &h1f
                            .Green = xForeColor.Green And &h1f
                            .Blue = xForeColor.Blue And &h1f
                            .Alpha = xForeColor.Alpha And &h1f
                            .AlphaFactor = AlphaFactor31(.Alpha)
                            .iAlphaFactor= iAlphaFactor31(.Alpha)
                            .AfRed       = .AlphaFactor * .Red
                            .AfGreen     = .AlphaFactor * .Green
                            .AfBlue      = .AlphaFactor * .Blue
                            .Palette     = Backend_RGB16_555(.Red, .Green, .Blue)
                        End With
                        With xBackColorCompat
                            .Red = xBackColor.Red And &h1f
                            .Green = xBackColor.Green And &h1f
                            .Blue = xBackColor.Blue And &h1f
                            .Alpha = xBackColor.Alpha And &h1f
                            .AlphaFactor = AlphaFactor31(.Alpha)
                            .iAlphaFactor= iAlphaFactor31(.Alpha)
                            .AfRed       = .AlphaFactor * .Red
                            .AfGreen     = .AlphaFactor * .Green
                            .AfBlue      = .AlphaFactor * .Blue
                            .Palette     = Backend_RGB16_555(.Red, .Green, .Blue)
                        End With        
                    Case Is <=8:'Pallete mode (rgb attributes is ignored)
                        xForeColorCompat.Palette = xForeColor.Palette Mod BitSet(0, ImageBuffer.Depth)
                        xForeColorCompat.Alpha = xForeColor.Alpha
                        xBackColorCompat.Palette = xBackColor.Palette Mod BitSet(0, ImageBuffer.Depth)
                        xBackColorCompat.Alpha = xBackColor.Alpha       
                End Select
                xForeColorCompat.Depth = ImageBuffer.Depth
                xBackColorCompat.Depth = ImageBuffer.Depth
                ColorChange = _False_
            End If
        '**************************************************************************
        
        'Checking Screenlock status (Only if target is Screen +++++++++++++++++++++++
'            'Try change the first byte in
'            If target = 0 Then
'                ret = ImageBuffer.TargetPtr
'                Locate 2,1 : Print ret
'                retval = *ret
'                Locate 1,17: Print retval
'                *ret = retval Xor &hff
'                'ret = ImageBuffer.TargetPtr
'                Locate 1,20: Print *ret
'                
'                If OldCompat Then 'use fb 0.18.x test mode
'                    If *ret <> retval Then
'                        UseScreenLock = _True_
'                        '*ret = retval 'put back the value even is not screenlocked before
'                        Locate 1,1 : Print "Autolock : ON"
'                    Else
'                        *ret = retval 'put back the value even is not screenlocked before
'                        Locate 1,1 : Print "Autolock : OFF"
'                    End If
'                Else
'                    If *ret = retval Then
'                        UseScreenLock = _True_
'                        '*ret = retval 'put back the value even is not screenlocked before
'                        Locate 1,1 : Print "Autolock : ON"
'                    Else
'                        *ret = retval 'put back the value even is not screenlocked before
'                        Locate 1,1 : Print "Autolock : OFF"
'                    End If                
'                End If
'             End If 
        '++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
        
        If UseScreenLock And Target=0 Then ScreenLock
        'Choose by Selection ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
            Select Case ImageBuffer.Depth
                Case 24,32:
                    If ScaleX=1 And ScaleY=1 And Direction=0 Then           'No scale, Horizontal
                        If UseView Then
                            Backend_Draw24Mode0Ex(x,y) 'with clip
                        Else
                            Backend_Draw24Mode0(x,y)   'no clip
                        End If    
                    ElseIf (ScaleX<>1 Or ScaleY<>1) And Direction=0 Then    'Scale, Horizontal
                        If UseView Then
                            Backend_Draw24Mode1Ex(x, y, ScaleX, ScaleY)
                        Else
                            Backend_Draw24Mode1(x, y, ScaleX, ScaleY)
                        End If
                    ElseIf ScaleX=1 And ScaleY=1 And Direction<>0 Then      'No scale, Vertical
                        If UseView Then
                            Backend_Draw24Mode2Ex(x, y)
                        Else
                            Backend_Draw24Mode2(x, y)
                        End If
                    Else                                                    'Scale & Vertical
                        If UseView Then
                            Backend_Draw24Mode3Ex(x, y, ScaleX, ScaleY)
                        Else
                            Backend_Draw24Mode3(x, y, ScaleX, ScaleY)                                                
                        End If
                    End If
                Case 15, 16:
                    If ScaleX=1 And ScaleY=1 And Direction=0 Then           'No scale, Horizontal
                        If UseView Then
                            Backend_Draw16_555Mode0Ex(x,y)
                        Else
                            Backend_Draw16_555Mode0(x,y)
                        End If    
                    ElseIf (ScaleX<>1 Or ScaleY<>1) And Direction=0 Then    'Scale, Horizontal
                        If UseView Then
                            Backend_Draw16_555Mode1Ex(x, y, ScaleX, ScaleY)
                        Else
                            Backend_Draw16_555Mode1(x, y, ScaleX, ScaleY)
                        End If
                    ElseIf ScaleX=1 And ScaleY=1 And Direction<>0 Then      'No scale, Vertical
                        If UseView Then
                            Backend_Draw16_555Mode2Ex(x, y)
                        Else
                            Backend_Draw16_555Mode2(x, y)
                        End If
                    Else                                                    'Scale & Vertical
                        If UseView Then
                            Backend_Draw16_555Mode3Ex(x, y, ScaleX, ScaleY)
                        Else
                            Backend_Draw16_555Mode3(x, y, ScaleX, ScaleY)                                                
                        End If
                    End If
                Case Is <= 8:
                    If ScaleX=1 And ScaleY=1 And Direction=0 Then
                        If UseView Then
                            Backend_Draw8Mode0Ex(x,y)
                        Else
                            Backend_Draw8Mode0(x,y)
                        End If    
                    ElseIf (ScaleX<>1 Or ScaleY<>1) And Direction=0 Then    'Scale, Horizontal
                        If UseView Then
                            Backend_Draw8Mode1Ex(x, y, ScaleX, ScaleY)
                        Else
                            Backend_Draw8Mode1(x, y, ScaleX, ScaleY)
                        End If
                    ElseIf ScaleX=1 And ScaleY=1 And Direction<>0 Then      'No scale, Vertical
                        If UseView Then
                            Backend_Draw8Mode2Ex(x, y)
                        Else
                            Backend_Draw8Mode2(x, y)
                        End If
                    Else                                                    'Scale & Vertical
                        If UseView Then
                            Backend_Draw8Mode3Ex(x, y, ScaleX, ScaleY)
                        Else
                            Backend_Draw8Mode3(x, y, ScaleX, ScaleY)                                                
                        End If
                    End If
            End Select 
        '~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
        If UseScreenLock And Target=0 Then ScreenUnlock
    End Sub
'____________________________________________________________________________________________________________________________________________________    

    Function Interface.BackendStringWidth() As uShort
        'Mendapatkan width berdasarkan string yang ada kode yang ada pada buffer
        'Mendapatkan panjang text dalam pixel (sudah termasuk pitch atau width -- otomatis)
        Dim i As uShort
        Dim l As uShort
        Dim ret As uShort
        With FontCollection(SelectedFontIndex)
            While CharVal(i)>0     'Sampai null terminated
                ret=CharVal(i)
                If Not .UsedFlag(ret) Then ret=0 'Ubah menjadi Chr(0) jika karakter tidak termasuk atau merujuk pada Chr(0)
                If CharVal(i+1)>0 Then
                    l+=.Char(ret).Start + .Char(ret).Pitch   
                Else
                    If .Char(ret).pitch < (.Char(ret).Width-.Char(ret).start) Then
                        l+=(.Char(ret).Width-.Char(ret).start)        
                    Else
                        l+=.Char(ret).Start + .Char(ret).Pitch
                    End If    
                End If
                i+=1    
            Wend
        End With
        Return l    
    End Function
'____________________________________________________________________________________________________________________________________________________    
    
    Property Interface.BackColor(ByVal Expression As uLong) 'uInteger
        With xBackColor 'Selalu dalam 32-bit
            .Red         = (Expression Shr 16) And &HFF
            .Green       = (Expression Shr 8) And &HFF
            .Blue        =  Expression And &HFF
            .Alpha       = (Expression Shr 24) And &HFF
            .Palette     = Expression
            .AlphaFactor = AlphaFactor255(.Alpha)
            .iAlphaFactor= iAlphaFactor255(.Alpha)
            .AfRed       = .AlphaFactor * .Red
            .AfGreen     = .AlphaFactor * .Green
            .AfBlue      = .AlphaFactor * .Blue
        End With
        ColorChange = _True_ 
    End property
'____________________________________________________________________________________________________________________________________________________    
    
    Property Interface.BackColor() As uLong 'uInteger
        Return xBackColor.Palette    
    End property
'____________________________________________________________________________________________________________________________________________________    
    
    Property Interface.ForeColor(ByVal Expression As uLong) 'uInteger
        With xForeColor 'Selalu dalam 32-bit
            .Red         = (Expression Shr 16) And &HFF
            .Green       = (Expression Shr 8) And &HFF
            .Blue        =  Expression And &HFF
            .Alpha       = (Expression Shr 24) And &HFF
            .Palette     = Expression
            .AlphaFactor = AlphaFactor255(.Alpha)
            .iAlphaFactor= iAlphaFactor255(.Alpha)
            .AfRed       = .AlphaFactor * .Red
            .AfGreen     = .AlphaFactor * .Green
            .AfBlue      = .AlphaFactor * .Blue
        End With
        ColorChange = _True_
        'Print Expression 
    End property
'____________________________________________________________________________________________________________________________________________________    
    
    Property Interface.ForeColor() As uLong 'uInteger
        Return xForeColor.Palette    
    End property
'____________________________________________________________________________________________________________________________________________________    
    Sub Interface.BackendDrawRect24(ByVal x1 As Short, ByVal y1 As Short, ByVal x2 As Short, ByVal y2 As Short)
    'Mengisi persegi dengan warna latar belakang dan alpha latar belakang
        Dim x As Integer
        Dim y As Integer
        Dim ImagePtr As uLong ptr 'uInteger Ptr
        Dim As uInteger yp, pp 'uInteger ok  here?
        Dim Col As uLong 'uInteger 
        Dim As uByte    R,G,B
        Dim As Single   R1,G1,B1
        
        With ImageBuffer
        
            'checking draw area
                'not implemented yet ........................
            
            ImagePtr  = .TargetPtr
            'If y1<y2 Then   'Not needed yet
            '    Swap y1,y2
            '    Swap x1,x2
            'End If    
            If xBackColorCompat.Alpha=&hFF Then'opaque
                Col = xBackColorCompat.Palette
                For y = y1 To y2  'yloop
                        yp = y * .Pitch
                        For x = x1 To x2 'yloop
                            pp = x + yp
                            ImagePtr[pp]=Col    
                        Next x   
                Next y        
            ElseIf xBackColorCompat.Alpha>&h0 Then'blend
                For y = y1 To y2  'yloop
                        yp = y * .Pitch
                        For x = x1 To x2 'yloop
                            pp = x + yp
                            Col = ImagePtr[pp] And &HFFFFFF
                            With xBackColorCompat
                                R = ((Col Shr 16)*.iAlphaFactor) + .AfRed
                                G = (((Col And &HFF00) Shr 8)*.iAlphaFactor) + .AfGreen
                                B = ((Col And &hFF)*.iAlphaFactor) + .AfBlue
                            End With
                            ImagePtr[pp]=Rgb(r,g,b)    
                        Next x    
                Next y           
            End If
        End With
    End Sub

'____________________________________________________________________________________________________________________________________________________    
        
    Sub Interface.Backend_Draw24Mode0(ByVal X As Short, ByVal Y As Short)
        'No scale, no rotate
        Dim As Short w, h
        Dim i As uShort
        Dim StartPitch As Short
        Dim CharSelect As uShort
        Dim As Short xs, ys, yloop, xloop
        Dim As Integer xp, yp
        Dim As uInteger pp, yfp
        Dim fontptr As uInteger 'looks like a pointer, but is a index?
        Dim Buffer As uLong ptr 'uInteger Ptr
        Dim AlphaVal As uByte
        Dim As uByte R,G,B
        Dim As uLong Col 'uInteger
        Dim As Single Alpha1,Alpha2
        
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
                                If yp >= ImageBuffer.Height Then Exit For
                                If yp >= 0 Then
                                    yp *= ImageBuffer.Pitch
                                    yfp = (yloop - .top) * .Width
                                    For xloop = 0 To .Width -1
                                        xp = StartPitch + xloop
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
                                    Next xloop
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
                                If yp >= ImageBuffer.Height Then Exit For
                                If yp >= 0 Then
                                    yp *= ImageBuffer.Pitch
                                    yfp = (yloop - .top) * .Width
                                    For xloop = 0 To .Width -1
                                        xp = StartPitch + xloop
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
                                    Next xloop
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

    Sub Interface.Backend_Draw24Mode1(ByVal x As Short, ByVal y As Short, ByVal ScaleX As Double, ByVal ScaleY As Double)
        
        Dim Buffer As uLong ptr 'uInteger Ptr
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
        Dim As uByte  R,G,B
        Dim As Single Alpha1,Alpha2
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
                                If yp >= ImageBuffer.Height Then Exit For 
                                If yp >= 0 Then
                                    yp *= ImageBuffer.Pitch
                                    yfp = Int((yloop - ypoint)*iScaleY) * .Width
                                    For xloop = 0 To Int(.Width*ScaleX) -1
                                        xp = Spp + xloop 'NB : Belum dirotasi
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
                                    Next xloop
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
                                If yp >= ImageBuffer.Height Then Exit For
                                If yp >= 0 Then
                                    yp *= ImageBuffer.Pitch
                                    yfp = Int((yloop - ypoint)*iScaleY) * .Width
                                    For xloop = 0 To Int(.Width*ScaleX) -1
                                        xp = Spp + xloop 'NB : Belum dirotasi
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
 
                                    Next xloop
                                End If
                            Next yloop
                            StartPitch += (.Pitch*ScaleX)    
                            If StartPitch >= ImageBuffer.Width Then Exit For 'NB: belum dirotasi!    
                        End With                
                    Next i
            End If
    End Sub 
'___________________________________________________________________________________________________________________________________________________
                                                                                                      
    Sub Interface.Backend_Draw24Mode2 (ByVal X As Short, ByVal Y As Short) 'Vertical, no scale
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
                            If yp < 0 Then Exit For
                            If yp < ImageBuffer.Height-1  Then 
                                yp *= ImageBuffer.Pitch
                                'fp = '(yloop - .top) * .Width
                                For xloop = .Top To .Top + .Height -1
                                    xp =  X + xloop
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
                                Next xloop    
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
                            If yp < 0 Then Exit For
                            If yp < ImageBuffer.Height-1  Then 
                                yp *= ImageBuffer.Pitch
                                'fp = '(yloop - .top) * .Width
                                For xloop = .Top To .Top + .Height -1
                                    xp =  X + xloop
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
                                Next xloop    
                            End If    
                        Next yloop
                        StartPitch -= .Pitch
                        If StartPitch < 0 Then Exit For    
                    End With
                Next i                             
            End If        
    End Sub
'___________________________________________________________________________________________________________________________________________________

    Sub Interface.Backend_Draw24Mode3(ByVal x As Short, ByVal y As Short, ByVal ScaleX As Double, ByVal ScaleY As Double)
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
        Dim As uByte R,G,B
        Dim As uLong Col 'uInteger
        Dim As Single Alpha1,Alpha2
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
                            If yp < 0 Then Exit For
                            If yp < ImageBuffer.Height-1  Then
                                yp *= ImageBuffer.Pitch
                                yfp = Int(yloop*iScaleX)
                                xpoint = CShort(.Top*ScaleY)
                                For xloop = xpoint To Int((.Top*ScaleY) + (.Height*ScaleY)) -1
                                    xp =  X + xloop
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
                                Next xloop                            
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
                            If yp < 0 Then Exit For
                            If yp < ImageBuffer.Height-1  Then
                                yp *= ImageBuffer.Pitch
                                yfp = Int(yloop*iScaleX)
                                xpoint = CShort(.Top*ScaleY)
                                For xloop = xpoint To Int((.Top*ScaleY) + (.Height*ScaleY)) -1
                                    xp =  X + xloop
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
                                Next xloop                            
                            End If        
                        Next yloop     
                        StartPitch -= (.Pitch*ScaleX)
                        If StartPitch < 0 Then Exit For    
                    End With
                Next i
            End If    
    End Sub
        
'16-bit Draw function _________________________________________________________________________________
    
'____________________________________________________________________________________________________________________________________________________    
    Function Interface.Backend_RGB16_555(r As uByte, g As uByte, b As uByte) As uShort
        '5-R 5-G 5-B
        Dim C As uShort
        C = r Shl 11
        C = g Shl 6 Or C
        C = C Or b 
        Function = C
    End Function    

'____________________________________________________________________________________________________________________________________________________    
    Sub Interface.BackendDrawRect16_555(ByVal x1 As Short, ByVal y1 As Short, ByVal x2 As Short, ByVal y2 As Short)
    'Mengisi persegi dengan warna latar belakang dan alpha latar belakang
        Dim x As Integer
        Dim y As Integer
        Dim ImagePtr As uShort Ptr
        Dim As uInteger yp, pp
        Dim Col As uShort 
        Dim As uByte    R,G,B
        Dim As Single   R1,G1,B1
        
        With ImageBuffer
        
            'checking draw area
                'not implemented yet ........................
            
            ImagePtr  = .TargetPtr
            'If y1<y2 Then   'Not needed yet
            '    Swap y1,y2
            '    Swap x1,x2
            'End If    
            If xBackColorCompat.Alpha=&h1F Then'opaque
                Col = xBackColorCompat.Palette
                For y = y1 To y2  'yloop
                        yp = y * .Pitch
                        For x = x1 To x2 'yloop
                            pp = x + yp
                            ImagePtr[pp]=Col    
                        Next x   
                Next y        
            ElseIf xBackColorCompat.Alpha>&h0 Then'blend
                For y = y1 To y2  'yloop
                        yp = y * .Pitch
                        For x = x1 To x2 'yloop
                            pp = x + yp
                            Col = ImagePtr[pp]
                            With xBackColorCompat
                                R = ((Col Shr 11)*.iAlphaFactor) + .AfRed
                                G = (((Col And &H7E0) Shr 6)*.iAlphaFactor) + .AfGreen
                                B = ((Col And &H1F)*.iAlphaFactor) + .AfBlue
                            End With
                            ImagePtr[pp]=Backend_RGB16_555(r,g,b)    
                        Next x    
                Next y 
                'Print R,g,b, (Col And &H7E0) Shr 6, xBackColorCompat.AfBlue         
            End If
        End With
    End Sub

'____________________________________________________________________________________________________________________________________________________    
        
    Sub Interface.Backend_Draw16_555Mode0(ByVal X As Short, ByVal Y As Short)
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
                                If yp >= ImageBuffer.Height Then Exit For
                                If yp >= 0 Then
                                    yp *= ImageBuffer.Pitch
                                    yfp = (yloop - .top) * .Width
                                    For xloop = 0 To .Width -1
                                        xp = StartPitch + xloop
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
                                    Next xloop
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
                                If yp >= ImageBuffer.Height Then Exit For
                                If yp >= 0 Then
                                    yp *= ImageBuffer.Pitch
                                    yfp = (yloop - .top) * .Width
                                    For xloop = 0 To .Width -1
                                        xp = StartPitch + xloop
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
                                    Next xloop
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

    Sub Interface.Backend_Draw16_555Mode1(ByVal x As Short, ByVal y As Short, ByVal ScaleX As Double, ByVal ScaleY As Double)
        
        Dim Buffer As uShort Ptr
        Dim StartPitch As Double
        Dim Spp As Short 'Integer <- earlier comment
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
                                If yp >= ImageBuffer.Height Then Exit For 
                                If yp >= 0 Then
                                    yp *= ImageBuffer.Pitch
                                    yfp = Int((yloop - ypoint)*iScaleY) * .Width
                                    For xloop = 0 To Int(.Width*ScaleX) -1
                                        xp = Spp + xloop 'NB : Belum dirotasi
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
                                    Next xloop
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
                                If yp >= ImageBuffer.Height Then Exit For
                                If yp >= 0 Then
                                    yp *= ImageBuffer.Pitch
                                    yfp = Int((yloop - ypoint)*iScaleY) * .Width
                                    For xloop = 0 To Int(.Width*ScaleX) -1
                                        xp = Spp + xloop 'NB : Belum dirotasi
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
 
                                    Next xloop
                                End If
                            Next yloop
                            StartPitch += (.Pitch*ScaleX)    
                            If StartPitch >= ImageBuffer.Width Then Exit For 'NB: belum dirotasi!    
                        End With                
                    Next i
            End If
    End Sub 
'___________________________________________________________________________________________________________________________________________________
                                                                                                      
    Sub Interface.Backend_Draw16_555Mode2 (ByVal X As Short, ByVal Y As Short) 'Vertical, no scale
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
                            If yp < 0 Then Exit For
                            If yp < ImageBuffer.Height-1  Then 
                                yp *= ImageBuffer.Pitch
                                'fp = '(yloop - .top) * .Width
                                For xloop = .Top To .Top + .Height -1
                                    xp =  X + xloop
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
                                Next xloop    
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
                            If yp < 0 Then Exit For
                            If yp < ImageBuffer.Height-1  Then 
                                yp *= ImageBuffer.Pitch
                                'fp = '(yloop - .top) * .Width
                                For xloop = .Top To .Top + .Height -1
                                    xp =  X + xloop
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
                                Next xloop    
                            End If    
                        Next yloop
                        StartPitch -= .Pitch
                        If StartPitch < 0 Then Exit For    
                    End With
                Next i                             
            End If        
    End Sub

'___________________________________________________________________________________________________________________________________________________

    Sub Interface.Backend_Draw16_555Mode3(ByVal x As Short, ByVal y As Short, ByVal ScaleX As Double, ByVal ScaleY As Double)
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
                            If yp < 0 Then Exit For
                            If yp < ImageBuffer.Height-1  Then
                                yp *= ImageBuffer.Pitch
                                yfp = Int(yloop*iScaleX)
                                xpoint = CShort(.Top*ScaleY)
                                For xloop = xpoint To Int((.Top*ScaleY) + (.Height*ScaleY)) -1
                                    xp =  X + xloop
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
                                Next xloop                            
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
                            If yp < 0 Then Exit For
                            If yp < ImageBuffer.Height-1  Then
                                yp *= ImageBuffer.Pitch
                                yfp = Int(yloop*iScaleX)
                                xpoint = CShort(.Top*ScaleY)
                                For xloop = xpoint To Int((.Top*ScaleY) + (.Height*ScaleY)) -1
                                    xp =  X + xloop
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
                                Next xloop                            
                            End If        
                        Next yloop     
                        StartPitch -= (.Pitch*ScaleX)
                        If StartPitch < 0 Then Exit For    
                    End With
                Next i
            End If    
    End Sub

'____________________________________________________________________________________________________________________________________________________    

'______________________________________________________________________________________________________
    
    
'Palette Draw function ________________________________________________________________________________________

    Sub Interface.BackendDrawRect8(ByVal x1 As Short, ByVal y1 As Short, ByVal x2 As Short, ByVal y2 As Short)
    'Mengisi persegi dengan warna latar belakang dan alpha latar belakang
        Dim x As Integer
        Dim y As Integer
        Dim ImagePtr As uByte Ptr
        Dim As uInteger yp, pp
        Dim Col As uByte 
        Dim As uByte    R,G,B
        Dim As Single   R1,G1,B1

        With ImageBuffer
        
            'checking draw area
                'not implemented yet ........................
            
            ImagePtr  = .TargetPtr
            'If y1<y2 Then   'Not needed yet
            '    Swap y1,y2
            '    Swap x1,x2
            'End If    
            If xBackColorCompat.Alpha>127 Then'opaque
                Col = xBackColorCompat.Palette
                For y = y1 To y2  'yloop
                        yp = y * .Pitch
                        For x = x1 To x2 'yloop
                            pp = x + yp
                            ImagePtr[pp]=Col    
                        Next x   
                Next y                   
            End If
        End With
    End Sub
'____________________________________________________________________________________________________________________________________________________    
    
    Sub Interface.Backend_Draw8Mode0(ByVal X As Short, ByVal Y As Short)
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
        'Dim As uInteger Col 'not used? else uByte
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
                                If yp >= ImageBuffer.Height Then Exit For
                                If yp >= 0 Then
                                    yp *= ImageBuffer.Pitch
                                    yfp = (yloop - .top) * .Width
                                    For xloop = 0 To .Width -1
                                        xp = StartPitch + xloop
                                        If xp >= ImageBuffer.Width Then Exit For
                                        If xp >= 0 Then
                                            pp = xp + yp
                                            fontptr = xloop+yfp
                                            AlphaVal = .Sequence[fontptr]
                                            If AlphaVal <192 Then Buffer[pp]= xForeColorCompat.Palette     
                                        End If 
                                    Next xloop
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

    Sub Interface.Backend_Draw8Mode1(ByVal x As Short, ByVal y As Short, ByVal ScaleX As Double, ByVal ScaleY As Double)
        
        Dim Buffer As uByte Ptr
        Dim StartPitch As Double
        Dim Spp As Short 'Integer
        Dim As Short yloop, xloop
        Dim As Short i, CharSelect
        Dim As Integer xp, yp
        Dim As uInteger yfp, pp, fontptr ', Col 'not used
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
                                If yp >= ImageBuffer.Height Then Exit For 
                                If yp >= 0 Then
                                    yp *= ImageBuffer.Pitch
                                    yfp = Int((yloop - ypoint)*iScaleY) * .Width
                                    For xloop = 0 To Int(.Width*ScaleX) -1
                                        xp = Spp + xloop 'NB : Belum dirotasi
                                        If xp >= ImageBuffer.Width Then Exit For
                                        If xp >= 0 Then
                                            pp = xp + yp
                                            fontptr = Int(xloop * iScaleX) + yfp
                                            AlphaVal = .Sequence[fontptr]
                                            If AlphaVal <192 Then Buffer[pp]= xForeColorCompat.Palette
                                        End If 
                                    Next xloop
                                End If
                            Next yloop
                            StartPitch += (.Pitch*ScaleX)    
                            If StartPitch >= ImageBuffer.Width Then Exit For 'NB: belum dirotasi!    
                        End With
                    Next i                
            End If
    End Sub 

'___________________________________________________________________________________________________________________________________________________
                                                                                                      
    Sub Interface.Backend_Draw8Mode2 (ByVal X As Short, ByVal Y As Short) 'Vertical, no scale
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
                            If yp < 0 Then Exit For
                            If yp < ImageBuffer.Height-1  Then 
                                yp *= ImageBuffer.Pitch
                                'fp = '(yloop - .top) * .Width
                                For xloop = .Top To .Top + .Height -1
                                    xp =  X + xloop
                                    If xp >= ImageBuffer.Width Then Exit For
                                    If xp >= 0 Then
                                        pp = xp + yp
                                        fontptr = yloop + (xloop-.Top)*.Width 
                                        AlphaVal = .Sequence[fontptr]
                                        If AlphaVal <192 Then Buffer[pp]= xForeColorCompat.Palette
                                    End If            
                                Next xloop    
                            End If    
                        Next yloop
                        StartPitch -= .Pitch
                        If StartPitch < 0 Then Exit For    
                    End With
                Next i    
                                         
            End If        
    End Sub
'___________________________________________________________________________________________________________________________________________________
    Sub Interface.Backend_Draw8Mode3(ByVal x As Short, ByVal y As Short, ByVal ScaleX As Double, ByVal ScaleY As Double)
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
                            If yp < 0 Then Exit For
                            If yp < ImageBuffer.Height-1  Then
                                yp *= ImageBuffer.Pitch
                                yfp = Int(yloop*iScaleX)
                                xpoint = CShort(.Top*ScaleY)
                                For xloop = xpoint To Int((.Top*ScaleY) + (.Height*ScaleY)) -1
                                    xp =  X + xloop
                                    If xp >= ImageBuffer.Width Then Exit For
                                    If xp >= 0 Then
                                        pp = xp + yp
                                        'Print iScaleY
                                        fontptr = yfp + Int((xloop-xpoint)*iScaleY)*.Width
                                        'If fontptr> 50 Then Print fontptr
                                        AlphaVal = .Sequence[fontptr]
                                        If AlphaVal <192 Then Buffer[pp]= xForeColorCompat.Palette
                                    End If   
                                Next xloop                            
                            End If        
                        Next yloop     
                        StartPitch -= (.Pitch*ScaleX)
                        If StartPitch < 0 Then Exit For    
                    End With
                    
                Next i
            End If    
    End Sub

'___________________________________________________________________________________________________________________________________________________
    
'______________________________________________________________________________________________________
    
End namespace

#Include "xfont_clip.bas"

'Dim Shared As xfont.interface zz
'Dim As uByte gambar(65000)
'Dim As wstring * 14 kata => "Abcdefg"
'Dim As uInteger testing(12) => {97,98,99}
'Dim t As Double
'    zz.Loadfont "phetsarath.xf",1
'    zz.FontIndex = 1
'    Print zz.LastError
'    Screen 18, 16
'    'ScreenRes 640,480,16
'    Color 0,Rgb(255,255,255)'0,15'
'    Cls
'    'Sleep
'    'Print zz.BackEndStringWidth
'    zz.BackColor = 15 Or &hff000000'Rgba(255,0,0,0)
'    'Sleep
'    'ScreenLock
'    'zz.ForeColor = Rgba(31,0,0,31)'0 Or &hff000000'Rgba(0,0,255,100)
'    'Sleep
'    t=Timer
'    zz.Drawstring(0,"Hello world", 100,100)
'    'PSet(639,1)
'    Print Timer-t
    'Get (0, 0)-(260,100), gambar
    'zz.Drawstring(@gambar(0),kata,10,10)
    'Put (100,100), gambar, PSet

    'Print Timer-t
    'zz.ImageBuffer.TargetPtr = ScreenPtr
    'zz.ImageBuffer.Pitch = 640
    'zz.BackendDrawRect24 (5,5,100,50)
    'ScreenUnlock
    'zz.Backend_DrawTriangle24(0,0,15,61,200,300)
    'zz.Backend_DrawTriangle24(0,0,60,60,0,63)
'    Print zz.LastError
'Sleep 

'Dim Shared As xfont.interface font
'Dim As uInteger x => 12420 
'font.loadfont ("FreeSans.xf", 1) 'Load to FontIndex 1
'font.fontindex = 1'Use the font
'font.backcolor =0
'font.forecolor = Rgba(255,0,0,255)
'ScreenRes 640,480,32
'font.drawstring (,@x,10,10)
''Print 
'Sleep

'Dim Shared As xfont.interface font
'Dim As Integer  x1, y1, x2, y2
'ScreenRes 640,480,8
'Color 0, &hFF00FF
'Cls
'screencontrol (11,x1,y1,x2,y2)
'Print x1,y1,x2,y2
'
'ScreenLock
'Print font.IsLoaded(1)
'font.useviewport = -1
'View  (19,18)-(70,180)
'font.ForeColor = Rgba(31,0,0,31)
'font.BackColor = Rgba(80,0,80,21)
'font.ForeColor = 12 Or &hff000000
'font.BackColor = 3 Or &hff000000
'font.drawstring (,"Hello World",10,10)
'font.drawstring (,"Hello World",10,50,2,2)  '2x size
'font.drawstring (,"Hello World",10,200,,,1) 'Vertical
'font.drawstring (,"Hello World",50,200,2,2,1) 'Vertical
'ScreenUnlock
'Sleep
