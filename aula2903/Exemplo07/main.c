#include <stdio.h>
#include <string.h>
int main(void) {
    char palavra[51] = "Cervaja";
    char outra[51] = "Quente";

    char destino[101];
    strncpy(destino, palavra, 5);
    destino[5] = '\0';
    strcat(destino, " ");
    strcat(destino, outra);
    printf("Destino: %s\n", destino);
    return 0;
}