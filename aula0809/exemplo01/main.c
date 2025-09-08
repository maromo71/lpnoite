#include <stdio.h>
#define L 3
#define C 2

int main(void) {
    int matriz[L][C] = {{0}};
    //Pedir para o usuario os dados da matriz
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            printf("Digite um valor inteiro: ");
            scanf("%d", &matriz[i][j]);
        }
    }
    //Vamos apresentar os valores
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            printf("[%d ]", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}