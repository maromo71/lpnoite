#include <stdio.h>
#include <string.h>
int main(void) {
    char nome[51];
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    int cont = 0;
    while (nome[cont]!='\0' && cont<51) {
        printf("%c\n", nome[cont]);
        cont++;
    }
    return 0;
}