#include <stdio.h>

int main(void) {
    char nome[21];
    char sobrenome[21];
    fflush(stdin);
    printf("Digite o primeiro nome: \n");
    gets(nome);
    fflush(stdin);
    printf("Digite o ultimo nome: \n");
    gets(sobrenome);
    printf("Nome completo %s %s\n", nome, sobrenome);

    return 0;
}