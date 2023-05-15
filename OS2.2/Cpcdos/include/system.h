
typedef struct _STRUCT_THREAD_Cpcdos_OSx__ {
    std::string Name;

    //Function

    int Priority;

    unsigned int KERNEL_ID;
    unsigned int OS_ID;
    unsigned int USER_ID;
    unsigned int PROC_ID;
    unsigned int THREAD_ID;
    unsigned int handle;

    unsigned char ARG_CP;
    unsigned char ARG_1;
    unsigned char ARG_2;
    unsigned char ARG_3;
    unsigned char ARG_4;
    unsigned char ARG_5;
    unsigned char ARG_6;

    unsigned char eax;
    unsigned char esp;
    unsigned char ebx;
    unsigned char ecx;
    unsigned char edx;
    unsigned char eip;
    unsigned int stack_siz;
    unsigned int stack_nb;
    unsigned int page;
    //stack;
    
};