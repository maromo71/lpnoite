#include <stdio.h>

int main(void) {
    int maior =0, menor=0;
    double media=0.0, soma=0.0;
    int vetor[5]={0};
    for(int i=0;i<5;i++) {
        printf("Digite um numero: ");
        scanf("%d",&vetor[i]);
        if (i==0) {
            maior=vetor[0];
            menor=vetor[0];
        }
        if (vetor[i]>maior) {
            maior=vetor[i];
        }
        if (vetor[i]<menor) {
            menor=vetor[i];
        }
        soma+=vetor[i];
    }
    media=soma/5.0;
    printf("Valores do vetor: ");
    for(int i=0;i<5;i++) {
        printf("[%2d] ",vetor[i]);
    }
    printf("\nMedia: %.2lf\n",media);
    printf("Maior: %d\n",maior);
    printf("Menor: %d\n",menor);

    return 0;
}