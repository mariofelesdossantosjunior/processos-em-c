#include<stdio.h> 
#include<sys/types.h>
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
    unsigned a, b, i, j, k, l;

    printf("Meu PID é %d\n", get_pid());
    a = b = i = j = k = l = 0;

    while(i < 200000000000){
        i++;

         char texto[30];

    printf("Digite um texto: \n");

    scanf("%s",&nome);

        while(j < 200000000000){
            j++;
            while(k < 200000000000){
                k++;
                while(l < 200000000000){
                    l++;
                    a = (int)(i % j);
                    b = (int)(k % l);
                }
            }
        }
    }
    return 0;
}