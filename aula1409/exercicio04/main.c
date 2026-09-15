#include <stdio.h>
#define L 3
#define C 3
int maiorValor(int vetor[], int tam);
int maiorValorMatriz(int matriz[L][C]);
int main(void) {
    int vetor[10] = {3, 5, 7, 9, 11, 21, 31, 5, 6, 15};
    int matriz[3][3] = {
        {3, 5, 8},
        {8, 21, 14},
        {21, 1, 3}
    };
    int maiorEncontrado = maiorValor(vetor, 10);
    int maiorDaMatriz = maiorValorMatriz(matriz);
    printf("Maior valor: %d \n", maiorEncontrado);
    printf("Maior valor da Matriz: %d\n", maiorDaMatriz);
    return 0;
}
int maiorValor(int vetor[], int tam) {
    int maior = vetor[0];
    for (int i=0; i<tam; i++) {
        if (vetor[i]>maior) maior = vetor[i];
    }
    return maior;
}

int maiorValorMatriz(int matriz[3][3]) {
    int maior = matriz[0][0];
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            if (matriz[i][j]> maior) maior = matriz[i][j];
        }
    }
    return maior;
}