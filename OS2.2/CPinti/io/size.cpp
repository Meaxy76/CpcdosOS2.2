
/*	
	======================================
	==      CPinti ---> Input/Output    ==
	==                        Taille    ==
	======================================
	
	Developpe entierement par Sebastien FAVIER
	
	Description
		Module de calcul taille CPinti Core(tm) pour Cpcdos OSx.
	
	Creation 
		02/10/2017
	
	Mise a jour
		11/MAR/2020
		
	10/MAR/2020	: reeutilisation des anciennes methodes d'allocation memoire
		
*/
#include <stdio.h>
#include <errno.h>
#include <string.h>

#include "io.h"
//#include "core.h"


#include "../../Cpcdos/include/debug.h"


namespace cpinti 
{
	namespace file_manager
	{

		// ===========================================================================
		// ============================ TAILLE FICHIER ===============================
		// ===========================================================================
		
		unsigned long File_Size(const char* Chemin)
		{
			// Cette fonction retourne la taille en octets
			// -1 	: Probleme
			// => 0 : OK
			// Ouvrir fichier
			FILE* Instance_Fichier = fopen(Chemin, "r");
			
			// Tester si le fichier s'est ouvert sans problemes
			if (Instance_Fichier != NULL) 
			{
				// aller a la fin du fichier
				fseek(Instance_Fichier, 0L, SEEK_END);

				// Recuperer la position et donc la taille
				unsigned long Taille = (unsigned long) ftell(Instance_Fichier);
				// Fermer le fichier
				fclose(Instance_Fichier);

				// Retourner la taille
				return (unsigned long) Taille;
			}
			else
			{
				// asm("sti");
				// Erreur
				return 0;
			}
		}
	}
}