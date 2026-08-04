#include <stdio.h>

int main(void) {
    char letra;
    printf("Entre com uma letra: \n");
    letra = getchar();

    getchar(); //limpar o buffer, ler uma entrada sem atribuir
    printf("Digite outra letra: \n");
    char outra = getchar();
    printf("Letra digitada: %c \n", letra);
    printf("Outra letra digitada: %c \n", outra);
    return 0;
}
