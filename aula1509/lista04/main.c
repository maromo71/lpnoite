#include <stdio.h>
#include <string.h>
int main(void) {
    char palavra1[21] = "RODA";
    char palavra2[21] = "DORA";
    //primeiro. Verifique se possuem o mesmo tamanho
    if (strlen(palavra1)!=strlen(palavra2)) {
        printf("Nao formam ANAGRAMA\n");
        return 1;
    }
    //ordene as duas strings
    for (int i = 0; i < strlen(palavra1); i++) {
        for (int j = 0; j < strlen(palavra1); j++) {
            if (palavra1[i] < palavra2[j]) {
                char aux = palavra1[i];
                palavra1[i] = palavra1[j];
                palavra1[j] = aux;
            }
        }
    }
    for (int i = 0; i < strlen(palavra2); i++) {
        for (int j = 0; j < strlen(palavra2); j++) {
            if (palavra2[i] < palavra2[j]) {
                char aux = palavra2[i];
                palavra2[i] = palavra2[j];
                palavra2[j] = aux;
            }
        }
    }
    if (strcmp(palavra1, palavra2)==0) {
        printf("Sao anagramas\n");
    }else {
        printf("Nao sao anagramas\n");
    }
    return 0;
}