

#include "GUI.bi"
Function IMG_change_size_quick(byref Source as any ptr, byref Nouveau_IMG as any ptr,PX as integer, PY as integer, Taille_X as integer, Taille_Y as integer, Nouveau_X as integer, Nouveau_Y as integer) as any ptr
	' Cette fonction permet de re-tailler la taille des images sans anti-alliasing
	' Source		= Image source
	' Nouveau_X		= Nouvelle taille en X
	' Nouveau_Y		= Nouvelle taille en Y
	'  Retourne 1 = OK
	'			2 = Coordonne X mauvaise
	'			3 = Coordonne Y mauvaise
	'			4 = Erreur source
	
	
	' Voir pour reecrire cette fonction en assembleur
	Dim Calc_X				as single
	Dim Calc_Y				as single
	
	Dim Boucle_X			as integer
	Dim Boucle_Y			as integer
	Dim Action_X			as integer
	Dim Action_Y			as integer
	Dim Acc_X				as integer
	Dim Acc_Y				as integer
	Dim AccPSET_X			as integer
	Dim AccPSET_Y			as integer

	
	' Verifier si il faut agrandir l'image ou la retrecir
	IF Nouveau_X < Taille_X Then
		' ON retrecit en X
		Action_X = 1
	ElseIF Nouveau_X > Taille_X THEN
		' On agrandit
		Action_X = 2
	Else
		Action_X = 0
		' Change pas
	End if
	IF Nouveau_Y < Taille_Y Then
		' ON retrecit en Y
		Action_Y = 1
	ElseIF Nouveau_Y > Taille_Y THEN
		' On agrandit en Y
		Action_Y = 2
	Else
		' Change pas
		Action_Y = 0
	End if
	
	Calc_Y = ((Taille_Y/Nouveau_Y))
	Calc_X = ((Taille_X/Nouveau_X))
	IF Action_X = 1 Then
		IF Action_Y = 1 Then
			' *** Reduction en X et Y ***
			AccPSET_Y = 0
			For Boucle_Y = 1 to Taille_Y step Calc_Y
				AccPSET_Y = AccPSET_Y + 1
				AccPSET_X = 0
				For Boucle_X = 1 to Taille_X step Calc_X
					AccPSET_X = AccPSET_X + 1
					Put Nouveau_IMG, (AccPSET_X , AccPSET_Y), Source, (Boucle_X, Boucle_Y)-(Boucle_X+1, Boucle_Y+1), PSet
				Next Boucle_X
			Next Boucle_Y
		ElseIF Action_Y = 2 Then 
			' Reduction en X et Agrandissement en Y
			For Boucle_Y = 1 to Nouveau_Y
				AccPSET_X = 0
				For Boucle_X = 1 to Taille_X step Calc_X
					AccPSET_X = AccPSET_X + 1
					Put Nouveau_IMG, (AccPSET_X , Boucle_Y), Source, (Boucle_X, Boucle_Y / (Nouveau_Y/Taille_Y))-(Boucle_X+1, Boucle_Y / (Nouveau_Y/Taille_Y) + 1), PSet
				Next Boucle_X
			Next Boucle_Y
		End if
	ELSEIF Action_X = 2 Then
		IF Action_Y = 2 Then
			' Agrandissement en X et Y
			For Boucle_Y = 1 to Nouveau_Y
				For Boucle_X = 1 to Nouveau_X
					Put Nouveau_IMG, (Boucle_X , Boucle_Y), Source, (Boucle_X / (Nouveau_X/Taille_X), Boucle_Y / (Nouveau_Y/Taille_Y))-(Boucle_X / (Nouveau_X/Taille_X) + 1, Boucle_Y / (Nouveau_Y/Taille_Y) + 1), PSet
				Next Boucle_X
			Next Boucle_Y
		ELSEIF Action_Y = 1 Then
			' Agrandissement en X et Reduction en Y
			AccPSET_Y = 0
			For Boucle_Y = 1 to Taille_Y Step Calc_Y
				AccPSET_Y = AccPSET_Y + 1
				For Boucle_X = 1 to Nouveau_X
					Put Nouveau_IMG, (Boucle_X , AccPSET_Y), Source, (Boucle_X / (Nouveau_X/Taille_X), Boucle_Y)-(Boucle_X / (Nouveau_X/Taille_X) + 1, Boucle_Y+1), PSet
				Next Boucle_X
			Next Boucle_Y
		End IF
	End if	
	Function = Nouveau_IMG
	
	
end function