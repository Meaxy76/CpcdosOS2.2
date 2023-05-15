/*	
	======================================
	==    CPinti ---> wrapper processus ==
	======================================
	
	Developpe entierement par Sebastien FAVIER

	Description
		Module permettant l'acces aux fonctionnalites de gestion
		 des processus
	
	Creation 
		19/10/2016


	Mise a jour
		22/01/2019
		
	16-10-2018	: Adaption 2.1 beta 1.1
	07-12-2017	: AMELIORATION du code en suivant une procedure sticte de GCC
	23-08-2017	: cpinti_get_nom_processus() pour recuperer les noms des Processus
	
*/




#include <string.h>
#include <string>

#include "../../CPinti/include/process.h"
#include "../../CPinti/include/core.h"
//#include "debug.h"

// #include "leakchk.h"


extern "C" unsigned long xe_cpinti_get_pid_from_tid()
{
	return cpinti::task_manager::cpinti_get_pid_from_tid();
}

extern "C" unsigned long xe_cpinti_get_pid_from_tid_val(unsigned long time_ms)
{
	return cpinti::task_manager::cpinti_get_pid_from_tid(time_ms);
}

namespace cpinti
{
	

	namespace task_manager
	{	
		unsigned long cpinti_creer_processus(unsigned long ID_KERNEL, unsigned long ID_OS, unsigned long ID_USER, 
												unsigned long PID_Parent, const char* NomProcessus)
		{
			// Cette fonction va permettre de creer un nouveau processus vierge (Qui hebergera vos threads)
			//  Etant vierge, et sans thread main, le processus sera inactif.
			// 	ID_KERNEL		: Identificateur unique de l'instance du noyau
			//	NomProcessus	: Nom de processus
			
			// Retourne	< 0 : Erreur
			//			> 0 : Numero de PID
			
			// On ajoute un thread depuis le CORE
			unsigned long Resultat = task_manager::ajouter_Processus(NomProcessus);
			
			
			// Si la creation est un succes, on remplit les informations du thread
			if (Resultat > 0)
			{
				/** Identifiant NOYAU **/
				task_manager::Liste_Processus[Resultat].KID = ID_KERNEL;
				
				/** Identifiant OS **/
				task_manager::Liste_Processus[Resultat].OID = ID_OS;
				
				/** Identifiant Utilisateur **/
				task_manager::Liste_Processus[Resultat].UID = ID_USER;
				
				/** Identifiant Processus **/
				task_manager::Liste_Processus[Resultat].PID = Resultat;
				
				/** Identifiant Processus parent **/
				task_manager::Liste_Processus[Resultat].PID_Parent = PID_Parent;
				
				/** Identifiant Thread parent (Celui qui le cree) **/
				task_manager::Liste_Processus[Resultat].TID_Parent = task_manager::Thread_en_cours;
				
				/** Nom du processus **/				
				strncpy((char*) task_manager::Liste_Processus[Resultat].Nom_Processus, NomProcessus, strlen(NomProcessus));
			}
			else
			{
				std::string Resultat_STR = std::to_string((unsigned long) Resultat);
				//cpinti_dbg::CPINTI_DEBUG("[ERREUR] Impossible de creer un thread. Retour:" + Resultat_STR, 
				//						 "[ERROR] Unable to create thread. Return:" + Resultat_STR,
				//					 "core::task_manager", "Creer_Processus()",
				//		Ligne_saute, Alerte_ok, Date_avec, Ligne_r_normal);
			}
			

			// Retourner son PID
			return Resultat;
		}
		
		bool cpinti_arreter_processus(unsigned long ID_KERNEL, unsigned long PID)
		{
			// Cette fonction permet d'arreter un processus correctement.
			//  A utiliser sur un autre thread
			// 	ID_KERNEL		: Identificateur unique de l'instance du noyau
			//  PID				: Numero de processus

			// Si le processus existe
			if(task_manager::Liste_Processus[PID].PID > 0)
				return task_manager::supprimer_Processus(PID, false);
			else
			{
				std::string PID_STR = std::to_string((unsigned long) PID);
				//cpinti_dbg::CPINTI_DEBUG("[ERREUR] Impossible d'arreter le processus. Le PID " + PID_STR + " n'existe pas.", 
				//						 "[ERROR] Unable to stop the process. PID " + PID_STR + " not exist.",
				//						"core::task_manager", "Arreter_Processus()",
				//		Ligne_saute, Alerte_ok, Date_avec, Ligne_r_normal);
						
				return false;
			}

		}
		
		void cpinti_set_etat_processus(unsigned long ID_KERNEL, unsigned long PID, unsigned long ACTION)
		{
			// Cette fonction permet de modifier d'etat d'un processus
			// 	ID_KERNEL		: Identificateur unique de l'instance du noyau
			//  PID				: Numero de processus
			//	ACTION			: Action a appliquer sur le thread

			task_manager::set_EtatProcessus(PID, ACTION);
		}
		
		unsigned long cpinti_get_etat_processus(unsigned long ID_KERNEL, unsigned long PID)
		{
			// Cette fonction permet de connaitre l'etat du processus
			// 	ID_KERNEL		: Identificateur unique de l'instance du noyau
			//  PID				: Numero de processus

			return task_manager::get_EtatProcessus(PID);
		}
		
		
		
		const char* cpinti_get_nom_processus(unsigned long PID)
		{
			// Cette fonction permet de recuperer le nom du processus via son ID
			// 	ID_KERNEL		: Identificateur unique de l'instance du noyau
			//  PID				: Numero de processus
			//  NomProcessus	: Variable NULL ou sera stocke le nom de variable


			int etat_processus = cpinti_get_etat_processus(0, PID);


			if ((etat_processus != _ARRETE) && (etat_processus != _EN_ARRET) && (etat_processus != _ZOMBIE))
				return (const char*) task_manager::Liste_Processus[PID].Nom_Processus;
			else
			{
				//cpinti_dbg::CPINTI_DEBUG("[AVERTISSEMENT] Le processus [PID:" + std::to_string(PID) + "] n'existe pas (" + std::to_string(etat_processus) + ")", 
				//						"[WARNING] Process [PID:" + std::to_string(PID) + "] not exist (" + std::to_string(etat_processus) + ")",
				//						"core::task_manager", "cpinti_get_nom_processus()",
				//			Ligne_saute, Alerte_avertissement, Date_avec, Ligne_r_normal);
				return "";
			}
		}
		
		
		unsigned long cpinti_get_nombre_processus()
		{
			// Cette fonction permet d'obtenir le nombre de proccessus en cours
			unsigned long NombreProcess = task_manager::get_NombreProcessus();
			
			// Corriger
			if (NombreProcess > MAX_PROCESSUS) 
				NombreProcess = MAX_PROCESSUS;
			
			return NombreProcess;
		}

		unsigned long cpinti_get_nombre_thread_in_processus(unsigned long PID)
		{
			// Cette fonction permet d'obtenir le nombre de thread dans un processus
			
			return task_manager::Liste_Processus[PID].NB_Thread;
		}

		unsigned long cpinti_get_pid_from_tid()
		{
			// Cette fonction permet d'obtenir le numero du PID du thread

			return task_manager::Liste_Threads[get_ThreadEnCours()].PID;

		}

		unsigned long cpinti_get_pid_from_tid(unsigned tid)
		{
			// Cette fonction permet d'obtenir le numero du PID du thread

			return task_manager::Liste_Threads[tid].PID;

		}
		
	}
}