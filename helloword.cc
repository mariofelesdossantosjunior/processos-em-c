#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    char nome[30];

    printf("Digite seu nome: \n");

    scanf("%s",&nome);

    printf("Seu nome: %s \n", nome);
 
    return 0;
}