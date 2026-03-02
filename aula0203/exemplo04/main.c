#include <stdio.h>

int main(void) {
    char letra;
    char nome[51], outro[51];
    printf("Digite o seu nome: \n");
    gets(nome);
    printf("Seu nome: %s \n", nome);

    fflush(stdin);
    printf("digite uma letra: \n");
    letra = getchar();

    fflush(stdin);
    printf("Digite o outro nome completo: \n");
    gets(outro);
    printf("Outro nome: %s \n", outro);
    return 0;
}