#include <stdio.h>

void processarVetor(int *p_vetor, int tamanho);
void exibirVetor(int vetor[], int tamanho, char *titulo);

int main() {
    int vetor[] = {10, 3, 4, 7, 20};
    int tamanho = 5;

    exibirVetor(vetor, tamanho, "Valores Originais");

    processarVetor(vetor, tamanho);

    exibirVetor(vetor, tamanho, "Valores Alterados");

    return 0;
}
void processarVetor(int *p_vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        int valorAtual = *(p_vetor + i);

        if (valorAtual % 2 == 0) {
            *(p_vetor + i) = valorAtual * -1;
        }
        else {
            *(p_vetor + i) = valorAtual * 2;
        }
    }
}

void exibirVetor(int vetor[], int tamanho, char *titulo) {
    printf("%s: ", titulo);
    for (int i = 0; i < tamanho; i++) {
        printf("%d", vetor[i]);
        if (i < tamanho - 1) {
            printf(", ");
        }
    }
    printf("\n");
}
