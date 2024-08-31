#include <stdio.h>
#define T 3
/*
 * Leia uma matriz 5x5 de números inteiros e
 * calcule a média dos elementos da diagonal
 * principal.
 */
int main(void) {
    int matriz[T][T];
    double soma = 0.0;
    //entrada
    printf("Digite %d valores: \n", T * T);
    for (int i = 0; i < T; ++i) {
        for (int j = 0; j < T; ++j) {
            scanf("%d", &matriz[i][j]);
        }
    }
    //calculo
    for (int i = 0; i < T; ++i) {
        soma+= matriz[i][i];
    }
    double media = soma / T;
    printf("Média da diagonal principal: %lf\n", media);
    return 0;
}
