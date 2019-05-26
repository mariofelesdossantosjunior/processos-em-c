#include<stdio.h> 
#include<sys/types.h>
#include <string.h>
#include<unistd.h> //Poxix (threads)

int get_pid()
{
    char target[32];
    int pid;

    //lê arquivo do sistema referente ao PID (self)
    readlink("/proc/self", target, sizeof(target));
    sscanf(target, "%d", &pid);

    return (pid);
}

int main(int argc, char const *argv[])
{
    char texto[30];

    printf("Meu PID é %d\n", get_pid());

    do{
    
        printf("Digite um texto: \n");

        scanf("%s",&texto);

    }while (strcmp(texto,"x") != 0);
    
    return 0;
}