declare function IMG_change_size_quick(byref Source as any ptr, byref Nouveau_IMG as any ptr,PX as integer, PY as integer, Taille_X as integer, Taille_Y as integer, Nouveau_X as integer, Nouveau_Y as integer) as any ptr
declare function charger_PNG(byval Fichier as String, byval Bits  as integer, prio as integer, byref Hauteur as integer, byref Largeur as integer) as any ptr
declare sub font()