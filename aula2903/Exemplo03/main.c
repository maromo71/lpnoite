#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char nome[21] = "Marcos";
    char sobrenome[18] = "Moraes";
    char nomeCompleto[38];
    //percorrer o nome, atribuindo os primeiros ao nomeCompleto,
    //até encontar o '\0'.
    int i;
    for (i =0; i<21; i++) {
        if (nome[i] == '\0') {
            break;
        }else{
            nomeCompleto[i] = nome[i];
        }
    }

    nomeCompleto[i++] = ' ';
    for (int x=0; x<18; x++) {
        if (sobrenome[x] == '\0') {
            break;
        } else {
            nomeCompleto[i++] = sobrenome[x];
        }
    }
    nomeCompleto[i] = '\0';
    printf("Nome completo: %s \n", nomeCompleto);
    for (int i=0; i<38; i++) {
        printf("%c\n", nomeCompleto[i]);
    }
    return 0;
}
