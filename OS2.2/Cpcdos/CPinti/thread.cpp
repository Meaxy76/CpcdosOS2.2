/* WIP do not edit thanks */
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

namespace CpcTask {

	/* Threading */
	Create_Thread(){
	}

	Kill_Thread(){
	}
	
	Thread_List(){
	}

	/* Processing */
	Create_Process(){
	}

	Kill_Process(){
	}

	Process_List(){

	}
}

void *PrintMSG(void *ptr){
    char *msg;
    msg = (char *) ptr;
    printf("%s \n", msg);
}

int CreateThread( pthread_t threadnum, char *message ){
    pthread_t threade;
    threade = threadnum;
    pthread_create(&threade, NULL, PrintMSG, (void*) message);
    pthread_join(threade, NULL);
}

int CpcTask_Main(){
    /* Setting up multitasking and process in ElieOS */
    printf("[CPINTI]-> ThreadXT_Main function\n");
    pthread_t MonThread;
    pthread_t MonThread2;
    while(1){
            // haha
        CreateThread(MonThread, "Heya from thread 1\n");
        CreateThread(MonThread2, "Heya from thread 2\n");
    }
    return 0;
}

/* For test only 
int main(){
    CpcTask_Main();
    return 0;
}*/