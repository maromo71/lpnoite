#include <stdio.h>
void trocarValor(int *p_a, int *p_b);
void imprimirVetor(int *p_v, int t);
void ordenarVetor(int v[], int t);
int main(void) {
    int v[] = {11, 2, 7, 1, 14, 9};
    imprimirVetor(v, 6);
    ordenarVetor(v, 6);
    imprimirVetor(v, 6);
    return 0;
}

void trocarValor(int *p_a, int *p_b) {
    int aux = *p_a;
    *p_a = *p_b;
    *p_b = aux;
}
void imprimirVetor(int *p_v, int t) {
    printf("[ ");
    //percorrer usando ponteiro
    for (int i = 0; i < t; i++) {
        printf("%d ", *p_v++);
    }
    printf(" ]\n");
}
void ordenarVetor(int v[], int t) {
    for (int i = 0; i < t; ++i) {
        for(int j = i+1; j < t; j++) {
            if(v[i] > v[j]) {
                trocarValor(&v[i], &v[j]);
            }
        }
    }
}