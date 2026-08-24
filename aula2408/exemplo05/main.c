#include <stdio.h>
#include <string.h>

int main(void) {
    char nomes[10][51];
    //entrada pelo usuario
    printf("Digite dez nome, teclando enter: ");
    int letra;
    for (int i = 0; i < 10; i++) {
        fgets(nomes[i], 51, stdin);
        nomes[i][strlen(nomes[i]) - 1] = '\0';
    }
    //Imprimir na ordem que o usuario entrou
    printf("Nome entrados\n");
    for (int i = 0; i < 10; i++) {
        printf("%s\n", nomes[i]);
    }
    //Ordenar os dez nome
    char aux[51];
    for (int i = 0; i < 10; i++) {
        for (int j = i+1; j < 10; j++) {
            if (strcmp(nomes[i], nomes[j]) == 1) {
                strcpy(aux, nomes[i]);
                strcpy(nomes[i], nomes[j]);
                strcpy(nomes[j], aux);
            }
        }
    }
    printf("Nomes ordenados\n");
    for (int i = 0; i < 10; i++) {
        printf("%s\n", nomes[i]);
    }
    return 0;
}
