'xfont.bi
'Start      : 21 August 2008, 1:35 AM
'Last Edit  : 13 September 2011, 3:20 PM

#Include Once "file.bi"
#Include Once "crt/string.bi"
#IncLib "xfont"

Namespace xfont
    
   '______________________________________________________________________________________
    Const MAX_SLOT = 8
    Const MAX_CHAR = 32767
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
        Signature   As uShort          
        FileFormat  As uShort       
        CrcType     As uByte        
        CrcData     As String * 16  
        MsgEncode   As uByte        
        LofMsg      As uByte        
        Message     As String * 192 
        FontnameEnc As uByte        
        LofName     As uByte        
        Fontname    As String * 192 
        EncodeType  As uByte        
        FontSize    As uShort       
        FontHeight  As uShort       
        FontFlag    As uShort       
        BitQuality  As uByte        
        CharStart   As uLong 'uInteger     
        CharRange   As uLong 'uInteger     
        CharComp    As uShort       
        CharOffset  As uLong 'uInteger     
        CharLength  As uLong 'uInteger     
        DataComp    As uShort       
        DataOffset  As uLong 'uInteger     
        DataLength  As uLong 'uInteger     
    End Type '________________________________________________________________________________________________________
    
    Type XFONT_SEQUENCE '_____________________________________________________________________________________________
        Pitch       As uShort       
        Start       As Short        
        Top         As uShort       
        Width       As uShort       
        Height      As uShort       
        Sequence    As uByte Ptr    
    End Type '________________________________________________________________________________________________________ 
    
    Type XFONT_COLOR
        Red             As uByte
        Green           As uByte
        Blue            As uByte
        Palette         As uLong 'uInteger
        Alpha           As uByte
        AlphaFactor     As Single
        iAlphafactor    As Single
        AfRed           As Single
        AfGreen         As Single
        AfBlue          As Single
        Depth           As uByte 
    End Type
    
    Type XFONT_IMAGE_BUFFER 
        Width           As Short
        Height          As Short
        Depth           As uByte 
        bpp             As uByte
        OldMode         As Byte
        Pitch           As uShort
        TargetPtr       As uLong ptr'uInteger        
    End Type
    
    Type XFONT_DATA '_________________________________________________________________________________________________
        Header              As XFONT_HEADER
        UsedFlag(65535)     As Byte
        Char(65535)         As XFONT_SEQUENCE
        Loaded              As Byte    
    End Type'________________________________________________________________________________________________________
    
    Type Interface'--------------------------------------------------------------------------------------------------
        Declare Constructor ()
        Declare Destructor ()
        
        Declare Function LoadFont Overload  (ByRef Filename As String, ByVal FontIndex As uByte) As Integer
        Declare Function LoadFont Overload  (ByRef DataPtr As uByte Ptr, ByVal FontIndex As uByte) As Integer
        Declare Function UnloadFont         (ByVal FontIndex As uByte) As Integer
         
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
                
        Declare Function BackendStringWidth     () As uShort
                                                                                                
        Declare Function CreateCompatibleHeader (ByRef DataPtr As Any Ptr) As XFONT_HEADER
        Declare Function QueryHeaderCompat      (ByRef HeaderIn As XFONT_HEADER, ByVal FileSize As LongInt)As Integer
        Declare Function Backend_LoadFont       (ByRef DataPtr As Any Ptr, DataBound As uInteger, FontIndex As uByte) As Integer
        'Declare Function Backend_LoadFont       (ByRef DataPtr As Any Ptr, DataBound As uLong, ByVal FontIndex As uByte) As Integer
        Declare Function Backend_UnloadFont     (ByVal FontIndex As uByte) As Integer
        
        Declare Property FontIndex  () As uByte
        Declare Property FontIndex  (ByVal Expression As uByte)
        Declare Property TextHeight () As uShort
        Declare Property TextSize   () As uShort
        Declare Property BackColor  () As uLong 'uInteger 
        Declare Property BackColor  (ByVal Expression As uLong) 'uInteger
        Declare Property ForeColor  () As uLong 'uInteger 
        Declare Property ForeColor  (ByVal Expression As uLong) 'uInteger
        Declare Property FontName   () As String
        Declare Property Bold       () As Byte
        Declare Property Italic     () As Byte
        Declare Property Underline  () As Byte
        Declare Property Message    () As String
        
        Declare Property MajorVersion   () As uShort
        Declare Property MinorVersion   () As uShort
        Declare Property Revision       () As uShort
        Declare Property Copyright      () As String
        
        'New In v 10.6.17
        Declare Property IsLoaded(ByVal Expression As uByte) As Byte 'check if Font is loaded into index.
        Declare Property UseViewport(ByVal Expression As Byte) 'using vewport or not. Default is 0.
        Declare Property UseViewport() As Byte
        
        'Error handling
        Declare Property LastError  () As Integer
        Declare Sub ClearError      ()
        
        'fb 0.18.x compatibility support
        Declare Property AutoRedraw() As Byte
        Declare Property AutoRedraw(ByVal Expression As Byte)
        
        'Private
        As XFONT_DATA           FontCollection(MAX_SLOT)
        As Integer              LastErrorCode
        As Single               AlphaFactor255(255), AlphaFactor31(31)
        As Single               iAlphaFactor255(255), iAlphaFactor31(31)
        As XFONT_COLOR          xForeColor, xBackColor
        As XFONT_COLOR          xForeColorCompat, xBackColorCompat
        As uShort               CharVal(MAX_CHAR)
        As uShort               CharLen
        As XFONT_IMAGE_BUFFER   ImageBuffer
        As uShort               SelectedFontIndex
        As Byte                 ColorChange
        As Byte                 UseScreenLock
        
        As Byte                 UseView
        As Integer              clipx1, clipy1, clipx2, clipy2
        
    End Type'--------------------------------------------------------------------------------------------------------
        
End namespace
