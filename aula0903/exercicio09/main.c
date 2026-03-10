#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void) {
    srand(time(NULL));
    int matriz[5][5] ={{0}};
    //gerar valores para uma matriz
    //triangular superior
    for (int i = 0; i < 5; i++) {
        //segredo: comecar onde i esta parado
        for (int j = i; j < 5; j++) {
            matriz[i][j] = (rand() % 9)+1;
        }
    }
    //apresentar os valores
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("[%2d] ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}