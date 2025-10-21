#include <stdio.h>

void imprimir_Vetor(int * p_valor, int tam);
void imprimir_Vetor_Reverso(int * p_valor, int tam);

int main(void) {
    int vetor[] = {1, 3, 5, 7, 9};
    imprimir_Vetor(vetor, 5);
    printf("\n");
    imprimir_Vetor_Reverso(vetor, 5);
    return 0;
}
void imprimir_Vetor(int * p_valor, int tam) {
    for (int i = 0; i < tam; i++) {
        printf("%d ", *p_valor++);
    }
}
void imprimir_Vetor_Reverso(int * p_valor, int tam) {
    for (int i=tam-1; i>=0; i--) {
        printf("%d ", *(p_valor + i));
    }
}