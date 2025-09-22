#include <stdio.h>
#include <stdlib.h>
void alimentarVetor(int v[], int t);
void imprimirVetor(int v[], int t);
void reverso(int v[], int t);
int main(void) {
    int vetor[5];
    int vetor2[30];
    alimentarVetor(vetor, 5);
    printf("\n");
    imprimirVetor(vetor, 5);
    printf("\n");
    reverso(vetor, 5);
    printf("\n");
    alimentarVetor(vetor2, 30);
    printf("\n");
    imprimirVetor(vetor2, 30);
    printf("\n");
    reverso(vetor2, 30);
    printf("\n");
    return 0;
}
void alimentarVetor(int v[], int t) {
    for (int i = 0; i < t; i++) {
        v[i] = rand() % 100;
    }
}
void imprimirVetor(int v[], int t) {
    for (int i = 0; i < t; i++) {
        printf("%d\t", v[i]);
    }
}
void reverso(int v[], int t) {
    for (int i = t-1; i>=0; i--) {
        printf("%d\t", v[i]);
    }
}