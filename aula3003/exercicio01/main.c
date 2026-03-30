#include <stdio.h>

float calcularMediaEspecial(int vet[], int n);

int main() {
    int n;
    printf("Tamanho do vetor: ");
    scanf("%d", &n);

    int vet[n];
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i);
        scanf("%d", &vet[i]);
    }

    printf("Media : %.2f\n", calcularMediaEspecial(vet, n));
    return 0;
}

float calcularMediaEspecial(int vetor[], int n) {
    int maior = vetor[0], menor = vetor[0];
    float soma = 0;

    for (int i = 0; i < n; i++) {
        if (vetor[i] > maior) maior = vetor[i];
        if (vetor[i] < menor) menor = vetor[i];
        soma += vetor[i];
    }

    return (soma - maior - menor) / (n - 2);
}