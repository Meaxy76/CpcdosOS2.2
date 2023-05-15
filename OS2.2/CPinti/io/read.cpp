/*	
	======================================
	==      CPinti ---> Input/Output    ==
	==                         Lecture  ==
	======================================
	
	Developpe entierement par Sebastien FAVIER
	Contributeurs
		Johann GRAF
		Leo VACHET
	
	Description
		Module lecture CPinti Core(tm) pour Cpcdos OSx.
	
	Creation 
		05/02/2015
	
	Reecriture complete 
		No.1 28/06/2015
		No.2 12/02/2016
		No.3 01/04/2016 (C98 --> C++14)
		No.4 18/10/2016 (C++14 --> C++17)
		
	Optimisation/Perfectionnements
		31 Mai 2016
		18 Octobre 2016
	Mise a jour
		02/10/2017
		
		02/10/2017	- Deplacement du code lecture/ecriture dans 2 fichiers separes
		08/05/2017 	- Petites correction et ajout du doevents
		25/01/2017 	- Ajout fonction d'ecriture de fichier 
		13/01/2017	- Fichier existe renvoie un BOOL au lieu d'un long. std::ios::fail etant un BOOL

        30/03/2023  - Adding CPinti Read function to Cpcdos OS2.2
	
*/
#include <stdio.h>
#include <errno.h>
#include <cstring>
#include <string>
#include "io.h"
//#include "func_cpi.h" // doevent
//#include "core.h"

#include <iostream>

#include "../../Cpcdos/include/debug.h"


namespace cpinti 
{
	namespace file_manager
	{ 
		
		// ===========================================================================
		// ================================= LECTURE =================================
		// ===========================================================================
		
		std::string Read_file_full(const char* Source, const char* MODE, char *_DONNEES, unsigned long TailleFichier)
		{
			// Lire tout le contenu d'un fichier uniquement
			// Retourne :
			//	Si ok = Le contenu texte du fichier
			//	Sinon = 0
			
			// fprintf(stdout, " ****** p2\n\r");
			// fprintf(stdout, " ****** P2 _DONNEES '%s' [0x%x8]\n\r", (char*) _DONNEES), (void*) _DONNEES;
			// fflush(stdout);
			
			
			//ENTRER_SectionCritique();
			
			// Definit les attributs temporaires		
			long CompteurDoevents = 0;
			unsigned long Position = 0;
			char data = 0;
			FILE* Instance_Fichier;

			// Ouvrir un canal du fichier
			Instance_Fichier = fopen (Source, MODE);
			
			// Si c'est OPEN
			if (Instance_Fichier != NULL) 
			{
				
				// Boucler jusqu'a la fin du fichier
				/*while (Position <= TailleFichier) 
				{ 

					// Cette partie va permettre d'alleger le CPU
					if(CompteurDoevents >= 8192)
					{
						CompteurDoevents = 0;
						//SORTIR_SectionCritique();
						//doevents(0);
						//ENTRER_SectionCritique();
					} else
						CompteurDoevents++;
					
					
					// Recuperer le caractere
					data = fgetc(Instance_Fichier);

					// Merge le caractere avec les donnees
					_DONNEES[Position] = data;
					
					// Avancer d'une position
					
				}*/
                //int len = strlen(Instance_Fichier);
                char data2 = TailleFichier + 1;
                do {
                    data2 = fgetc(Instance_Fichier);
                    //printf("%c", ch);
                    _DONNEES[Position] = data2;
					Position++;
 
                     // Checking if character is not EOF.
                    // If it is EOF stop reading.
                } while (data2 != EOF);

				
			    _DONNEES[Position] = ' ';
			    _DONNEES[Position + 1] = '\0';

				// Fermer le fichier
				fclose(Instance_Fichier);
				
				//SORTIR_SectionCritique();
                //std::string filedata;
                //char str1[] = _DONNEES;
                //std::cout<<str1<<std::endl;
                //char c = _DONNEES[Position];
                //filedata.push_back(_DONNEES[Position]);
                //
                //std::cout << _DONNEES << std::endl;
                
                //std::cout << filedata << std::endl;
				std::string _DATA = _DONNEES;
				return _DATA;
			}
			else
			{
				// Sinon probleme
				std::string Erreur_STR = std::to_string((unsigned long) strerror(errno));
					/*cpinti_dbg::CPINTI_DEBUG("[ERREUR] Impossible d'ouvrir le fichier '" + std::string(Source) + "'. Raison:" + std::string(strerror(errno)), 
											 "[ERROR] Unable to open file '" + std::string(Source) + "'. Raison:" + std::string(strerror(errno)),
										 "gestionnaire_fichier", "Lire_Fichier_complet()",
							Ligne_saute, Alerte_erreur, Date_avec, Ligne_r_normal);*/
                            
                CpcDebug("[ERROR] Unable to open file", 3, 1);
				return "";
			}
			//return "";
		}
	}
}