#include <stdio.h>

int main(void) {
    char texto[51];
    fflush(stdin);
    printf("Digite um texto pequeno\n");
    gets(texto);
    printf("Seu texto: %s \n", texto);
    return 0;
}