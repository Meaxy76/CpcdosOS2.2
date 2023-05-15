

extern "c++" lib "cpcdos"
	namespace cpcinit_ alias "cpc_init"
		declare function cpcdos_loader( byval inout_str as zstring ptr ) as integer     
	end namespace   
end extern

'Print "program launched via: " & Command(0)

    
Dim As Long i = 1
Do
    Dim As String arg = Command(i)
    If Len(arg) = 0 Then
        cpcinit_.cpcdos_loader("/DEFAULT")
        exit do

    else
        if Len(arg) > 0 Then
            cpcinit_.cpcdos_loader(Command(i))
            exit do
        end if
    End If

    ' Print "command line argument " & i & " = """ & arg & """"
    'i += 1
    
Loop
