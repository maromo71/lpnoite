#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char nome[5][51];
    char troca[51];
    for (int i = 0; i < 5; i++) {
        printf("Digite o nome: \n");
        scanf("%s", nome[i]);
    }

    //ordenar a lista
    for (int i = 0; i < 5; i++) {
        for (int j = i+1; j < 5; j++) {
            if (strcmp(nome[i], nome[j]) == 1) {
                strcpy(troca, nome[i]);
                strcpy(nome[i], nome[j]);
                strcpy(nome[j], troca);
            }
        }
    }
    //imprimir os nomes
    for (int i = 0; i < 5; i++) {
        printf("%s\n", nome[i]);
    }
    return 0;
}