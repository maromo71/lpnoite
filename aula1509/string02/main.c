#include <stdio.h>
#include <string.h>
int main(void) {
    char nome[21] = "Andre";
    char sobrenome[21] = "Santos";
    char nomeCompleto[41];
    char nomeCompleto2[41];
    strcpy(nomeCompleto, nome);
    strcat(nomeCompleto, " ");
    strcat(nomeCompleto, sobrenome);

    printf("%s\n", nomeCompleto);
    sprintf(nomeCompleto2, "%s %s", nome, sobrenome);
    puts(nomeCompleto2);
    return 0;
}