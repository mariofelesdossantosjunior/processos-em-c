/**
**  Exemplo de Multithread
**
**/
#include<stdio.h>
#include<pthread.h>
#include<sys/types.h>
#include<unistd.h>
#include <string.h>

int get_pid()
{
    char target[32];
    int pid;

    //lê arquivo do sistema referente ao PID (self)
    readlink("/proc/self", target, sizeof(target));
    sscanf(target, "%d", &pid);

    return (pid);
}

/**
 * Função responsavel por criar 
 * outra Thread
 * */
void * show(void * u){
    printf("Nova Thread Criada! \n");
    int cont = 0;

    while (cont < 10)
    {
        printf("Processo: %i \n",cont);
        sleep(2);
        cont++;
    }
    
}

int main()
{
    char resposta[1];

    pthread_t tid;
    printf("Meu PID é %d\n", get_pid());

    do{
        printf("Deseja criar outra thread (s)Sim, (n)Não: \n");
        scanf("%s",&resposta);

        if(strcmp(resposta,"s") == 0){
            pthread_create(&tid,NULL,&show,NULL);
            pthread_join(tid,NULL);
        }

    }while (strcmp(resposta,"n") != 0);

    printf("Thread Principal \n");
   
    return 0;
}
