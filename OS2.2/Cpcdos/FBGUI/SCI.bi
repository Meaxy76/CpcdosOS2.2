' Just getting the vars from the C++ side for ElieDraw

Declare Sub CpcMouse()
Dim Shared As Integer MouseX,MouseY,MouseButton

Sub CpcMouse()
	Getmouse MouseX,MouseY,,MouseButton
End Sub

extern "c++" lib "cpcdos"
	namespace cpcccp_ alias "CPC_CCP"
		declare function cpcdos_command( byval inout_str as zstring ptr ) as integer     
	end namespace   
end extern

extern "c++" lib "cpcdos"
	namespace CPCVAR_ alias "CPCVAR"
		declare function Define_CCP_Var( byval inout_str as zstring ptr, byval inout_str2 as zstring ptr ) as string
		declare function CCP_Read_Var( byval inout_str3 as zstring ptr ) as string     
	end namespace   
end extern

extern "c++" lib "cpcdos"
	namespace SVC_CPC_ alias "SVC_CPC"
		declare function CpcSleep( byval valuesleep as uinteger ptr ) as integer
	end namespace   
end extern