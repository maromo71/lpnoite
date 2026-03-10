#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
    int matriz[9][9] = {{0}};
    int vetor[81] = {0};
    srand(time(NULL));
    //gerando os valores aleatorios para a matriz
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            matriz[i][j] = (rand() % 999) + 1;
        }
    }
    //transferindo para o vetor
    int cont = 0;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            vetor[cont] = matriz[i][j];
            cont++;
        }
    }
    //ordenando o vetor por algoritmo de troca
    for (int i = 0; i < 81; i++) {
        for (int j = 0; j < 81; j++) {
            if (vetor[i] < vetor[j]) {
                int troca = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = troca;
            }
        }
    }
    //apresentar os dados ordenados
    for (int i = 0; i < 81; i++) {
        printf("%d \n", vetor[i]);
    }
    return 0;
}