#include <stdio.h>
#include <string.h>
#define T 15
#define C 30
int main(void) {
    char nome[T];
    char sobrenome[T];
    char completo[C]={'\0'};
    printf("Digite seu nome: ");
    scanf("%s", nome);
    fflush(stdin);
    printf("Digite seu sobrenome: ");
    scanf("%s", sobrenome);
    strcat(completo, nome);
    strcat(completo, " ");
    strcat(completo, sobrenome);
    printf("nome completo: %s \n", completo);
    return 0;
}