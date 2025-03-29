#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char nome[21] = "Marcos";
    char sobrenome[18] = "Moraes";
    char nomeCompleto[38] = {'\0'};
    strcpy(nomeCompleto, nome);
    strcat(nomeCompleto, " ");
    strcat(nomeCompleto, sobrenome);

    printf("Nome completo: %s\n", nomeCompleto);
    return 0;
}
