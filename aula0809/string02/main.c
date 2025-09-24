#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) {
    char palavra[15] = "marcos";
    char copia[15];
    strcpy(copia, palavra);
    if (strcmp(copia, strrev(palavra)) == 0) {
        printf("Eh palindromo");
    }else {
        printf("Nao eh palindromo");
    }
    return 0;
}