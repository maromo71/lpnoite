#include <stdio.h>
void gerarMatriz(int matriz[][4], int t);
void imprimirMatriz(int matriz[][4], int t);
int main(void) {
    int t = 4;
    int matriz[t][t];
    gerarMatriz(matriz, t);

    imprimirMatriz(matriz, t);
    return 0;
}
void gerarMatriz(int matriz[][4], int t) {
    for (int i=0; i < t; i++) {
        for (int j=0; j < t; j++) {
            if ( (i+j)%2 == 0) {
                matriz[i][j] = 1;
            }else {
                matriz[i][j] = 0;
            }
        }
    }
}
void imprimirMatriz(int matriz[][4], int t) {
    for (int i=0; i < t; i++) {
        for (int j=0; j < t; j++) {
            printf("[%2d] ", matriz[i][j]);
        }
        printf("\n");
    }
}