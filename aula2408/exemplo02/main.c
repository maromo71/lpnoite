#include <stdio.h>
#include <string.h>
int main(void) {
    char nome[21] = "Roberto";
    char sobrenome[21] = "Souza";
    char nome_completo[41] = {'\0'};
    //concatenar
    strcat(nome_completo, nome);
    strcat(nome_completo, " ");
    strcat(nome_completo, sobrenome);
    puts(nome_completo);
    char copia[41];
    strcpy(copia, nome_completo);
    puts(copia);
    return 0;
}
