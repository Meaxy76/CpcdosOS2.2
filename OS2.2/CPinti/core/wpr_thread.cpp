/*	
	======================================
	==     CPinti ---> wrapper threads  ==
	======================================
	
	Developpe entierement par Sebastien FAVIER

	Description
		Module permettant d'utiliser les fonctionnalites de gestion
		 des threads
	
	Creation 
		19/10/2016


	Mise a jour
		16/10/2018
		
	16-10-2018	: Adaption 2.1 beta 1.1
	07-12-2017	: AMELIORATION du code en suivant une procedure sticte de GCC
	23-08-2017	: Ajout de cpinti_get_nom_thread() pour recuperer les noms des threads
	08-05-2017	: Ajout des arguments d'entre pour les threads crees

	
*/

#include <string.h>
#include <stdio.h>
#include "../../CPinti/include/func_cpi.h" // doevents
#include "../../CPinti/include/threads.h"
#include "../../CPinti/include/core.h"
//#include "debug.h"

// #include "leakchk.h"


extern "C" unsigned long xe_cpinti_creer_thread(void* (* Fonction) (void * arg), unsigned long stackSize, void* threadParam, bool ExecuteThreadNow)
{
	return cpinti::task_manager::cpinti_creer_thread(0, 0, 0, 1, "external_thread", 0, Fonction, NULL, (unsigned long) threadParam, ExecuteThreadNow);
}

extern "C" void xe_cpinti_doevents(unsigned long time_ms)
{
	cpinti::cpinti_doevents(time_ms);
}

extern "C" void xe_cpinti_ENTRER_SectionCritique()
{
	cpinti::task_manager::begin_SectionCritique();
}

extern "C" void xe_cpinti_SORTIR_SectionCritique()
{
	cpinti::task_manager::end_SectionCritique();
}

namespace cpinti
{
	
	namespace task_manager
	{
		
		unsigned long cpinti_creer_thread(unsigned long ID_KERNEL, unsigned long ID_OS, unsigned long ID_USER, unsigned long PID, const char* NomThread, 
																		long Priorite, void* (* Fonction) (void * arg), void* ARG_CP, unsigned long ARG_TH)
		{
			return cpinti_creer_thread(0, 0, 0, 1, NomThread, 0, Fonction, NULL, (unsigned long) ARG_TH, true);
		}

		unsigned long cpinti_creer_thread(unsigned long ID_KERNEL, unsigned long ID_OS, unsigned long ID_USER, unsigned long PID, const char* NomThread, 
																		long Priorite, void* (* Fonction) (void * arg), void* ARG_CP, unsigned long ARG_TH, bool ExecuteThreadNow)
		{
			

			// Cette fonction va permettre de creer un nouveau processus vierge (Qui hebergera vos threads)
			// 	ID_KERNEL		: Identificateur unique de l'instance du noyau
			//	NomProcessus	: Nom de processus
			
			// Retourne	<=0 : Erreur
			//			> 0 : Numero de PID

			ENTRER_SectionCritique();


			// On ajoute un thread depuis le CORE
			unsigned long Resultat = task_manager::ajouter_Thread(Fonction, NomThread, PID, Priorite, ARG_TH);

			// Si la creation est un succes, on remplit les informations du thread
			if (Resultat > 0)
			{
				/** Identifiant NOYAU **/
				task_manager::Liste_Threads[Resultat].KID = ID_KERNEL;
				
				/** Identifiant OS **/
				task_manager::Liste_Threads[Resultat].OID = ID_OS;
				
				/** Identifiant Utilisateur **/
				task_manager::Liste_Threads[Resultat].UID = ID_USER;
				
				/** Identifiant Processus **/
				task_manager::Liste_Threads[Resultat].PID = PID;
				
				/** Nom du thread **/
				// strncpy((char*) task_manager::Liste_Threads[Resultat].Nom_Thread, NomThread, 30);

				SORTIR_SectionCritique();


				// Executer le thread maintenant
				if(ExecuteThreadNow == true)
					doevents(10000);
			}
			else
			{
				std::string Resultat_STR = std::to_string((unsigned long) Resultat);
				//cpinti_dbg::CPINTI_DEBUG("[ERREUR] Impossible de creer un thread. Retour:" + Resultat_STR, 
				//						 "[ERROR] Unable to create thread. Return:" + Resultat_STR,
				//					 "core::task_manager", "free_Thread_zombie()",
				//		Ligne_saute, Alerte_ok, Date_avec, Ligne_r_normal);
						
				SORTIR_SectionCritique();

			}


			// Retourner son PID
			return Resultat;
		}

		
		long cpinti_fin_thread(unsigned long ID_KERNEL, unsigned long PID, unsigned long TID)
		{
			// Cette fonction permet de finaliser l'execution d'un thread, fermeture forcee
			return (long) task_manager::supprimer_Thread(TID, true);
		}
		
		long cpinti_arreter_thread(unsigned long ID_KERNEL, unsigned long PID, unsigned long TID)
		{
			// Fermeture non forcee (signal)
			return cpinti_arreter_thread(ID_KERNEL, PID, TID, false);
		}
		
		long cpinti_arreter_thread(unsigned long ID_KERNEL, unsigned long PID, unsigned long TID, bool force)
		{
			// Cette fonction permet d'arreter un thread correctement.
			//  A utiliser sur un autre thread
			// 	ID_KERNEL		: Identificateur unique de l'instance du noyau
			//  PID				: Numero de processus
			//	TID				: Numero du thread
			//	force			: Force la fermeture du thread zombie
			
			
			
			bool Resultat = false;
			
			Resultat = task_manager::supprimer_Thread(TID, force);
		
			if(Resultat == true)
				return 1;
			else 
				return 0;
		}
		
		bool _exit()
		{
			// return task_manager::fermer_core();
			return true;
		}
		
		unsigned long cpinti_joindre_thread(unsigned long ID_KERNEL, unsigned long PID, unsigned long TID, long CYCLES)
		{
			// Cette fonction permet d'executer directement un thread sans passer par l'ordonanceur
			// 	ID_KERNEL		: Identificateur unique de l'instance du noyau
			//  PID				: Numero de processus
			//	TID				: Numero du thread
			//	CYCLES			: Nombre de cycles a executer (1 par defaut)

			unsigned long Resultat = 0;
			
			
			// Retourner le resultat
			return Resultat;
			
		}
		
		long cpinti_sortir_thread(unsigned long ID_KERNEL, unsigned long PID, unsigned long TID)
		{
			// Cette fonction permet de sortir du thread
			// 	ID_KERNEL		: Identificateur unique de l'instance du noyau
			//  PID				: Numero de processus
			//	TID				: Numero du thread
			
			long Resultat = 0;
			
			
			return Resultat;
		}
		
		
		void* cpinti_thread_args(long NoARG)
		{
			// Cette fonction permet de retourner un argument pour les threads venant d'etre crees
			//	NoARG	: Numero d'argument
			
			// Retourne	une valeur ANY PTR
			
			// if(NoARG == 0)
				// return (void*) NP_cpinti_task_manager::thread_args::ARG1;
			// else if(NoARG == 1)
				// return (void*) NP_cpinti_task_manager::thread_args::ARG2;
			// else if(NoARG == 2)
				// return (void*) (long) NP_cpinti_task_manager::thread_args::ARG3;
			// else if(NoARG == 3)
				// return (void*) (long) NP_cpinti_task_manager::thread_args::ARG4;
			// else if(NoARG == 4)
				// return (void*) (long) NP_cpinti_task_manager::thread_args::ARG5;
			// else if(NoARG == 1995)
				// return (void*) NP_cpinti_task_manager::thread_args::TID; 	/* ID du thread */
			// else if(NoARG == 2803)
				// return (void*) NP_cpinti_task_manager::thread_args::PID; 	/* ID du processus */
			// else if(NoARG == 2912)
				// return (void*) NP_cpinti_task_manager::thread_args::USER_ID; /* ID du USER */
			// else if(NoARG == 1909)
				// return (void*) NP_cpinti_task_manager::thread_args::OS_ID; 	/* ID de l'OS */
			// else if(NoARG == 1507)
				// return (void*) NP_cpinti_task_manager::thread_args::KERNEL_ID; /* ID du kernel */
			// else if(NoARG == 2011)
				// return (void*) (long) NP_cpinti_task_manager::thread_args::NomThread; /* Nom du thread */

			// Aucun argument correspond
			return NULL;
		}
		
		
		long cpinti_gerer_thread(unsigned long ID_KERNEL, unsigned long PID, unsigned long TID, unsigned long ACTION)
		{
			// Cette fonction permet de modifier l'etat d'un thread
			// 	ID_KERNEL		: Identificateur unique de l'instance du noyau
			//  PID				: Numero de processus
			//	TID				: Numero du thread
			//	ACTION			: Action a appliquer sur le thread
			
			long Resultat = 0;
			
			// Gerer le thread
			// Resultat = this->CPintiCore_task_managers->Gerer_Threads(ID_KERNEL, PID, TID, ACTION);
			
			// doevents(_THREAD_ATTENTE_ORD);
			
			return Resultat;
		}
		
		unsigned long cpinti_etat_thread(unsigned long ID_KERNEL, unsigned long PID, unsigned long TID)
		{
			// Cette fonction permet de connaitre l'etat d'un thread
			//	TID				: Numero du thread
			
			return get_EtatThread(TID);
		}
		
		const char* cpinti_get_nom_thread(unsigned long TID)
		{
			// Cette fonction permet de recuperer le nom du thread via son ID
			//  NomThread		: Variable NULL ou sera stocke le nom de variable
			
			/* NON UTILISE */
			
			return task_manager::get_NomThread(TID);
		}
		
		
		unsigned long cpinti_get_nombre_threads()
		{
			// Cette fonction permet d'obtenir le nombre de threads total en cours
			unsigned long NombreThread = task_manager::get_NombreThreads();
			
			// Corriger
			if (NombreThread > MAX_THREAD) 
				NombreThread = MAX_THREAD;
			
			return NombreThread;
		}
		
	}
} // Namespace cpinti