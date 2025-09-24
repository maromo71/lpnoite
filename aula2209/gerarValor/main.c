#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define T 10
void gerarValor(int *p_vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        *p_vetor = rand() % 100;
        p_vetor++;
    }
}
void imprimirVetor(int *p_vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", *p_vetor++);
    }
}
int main(void) {
    srand(time(NULL));
    int vetor[T] = {0};
    gerarValor(vetor, 5);
    imprimirVetor(vetor, 10);

    return 0;
}