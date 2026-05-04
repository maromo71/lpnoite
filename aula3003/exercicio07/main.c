#include <stdio.h>

int buscarMaior(int v[], int n);

int main(void) {
    int v[] = {2, 15, 4, 14, 3, 10 }; // Teste com 03 valores, depois mude para 10
    printf("Maior valor: %d\n", buscarMaior(v, 6));
    return 0;
}

int buscarMaior(int v[], int n) {
    if (n == 1) return v[0]; // valor da primeira posicao
    int maior = buscarMaior(v, n - 1);
    return (v[n - 1] > maior) ? v[n - 1] : maior;
}
