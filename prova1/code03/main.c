#include <stdio.h>

int main(void) {
    int vetor[50];
    int N; //numero de prateleiras
    printf("Entre com o numero de prateleiras: ");
    scanf("%d", &N);
    if (N<1 || N>50) {
        printf("Invalido! Inicie novamente.");
        return 1;
    }
    double media = 0.0;
    int X; // itens por prateleira
    for (int i=0; i<N; i++) {
        printf("Digite a qtd de produtos na prateleira %d: \n", i+1);
        scanf("%d", &X);
        vetor[i] = X;
        media += X;
    }
    media /= N;
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("== Media de itens na prateleira: %10.2lf  ==\n", media);
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("=== PRATELEIRAS com estoque ABAIXO da Media:===\n");
    int total = 0; //total de prateleiras que precisa de reposicao
    for (int i=0; i<N; i++) {
        if (vetor[i]<media) {
            printf("Prateleira: %d | Total: %d\n", i+1, vetor[i]);
            total++;
        }
    }
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("TOTAL DE PRATELEIRAS PARA REPOR: %d \n", total);
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    return 0;
}
