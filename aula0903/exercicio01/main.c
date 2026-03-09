#include <stdio.h>

int main(void) {
    //variaveis para soma dos pares e impares, contagem de pares e impares
    int pares =0, impares=0, contp=0, contimp=0;
    int vetor_a[5]; //vetor de 5 posicoes de inteiros
    for (int i = 0; i < 5; i++) {
        printf("Digite um valor inteiro: ");
        scanf("%d", &vetor_a[i]);
        if (vetor_a[i] % 2 == 0) {
            pares+= vetor_a[i];
            contp++;
        }else {
            impares+= vetor_a[i];
            contimp++;
        }
    }
    int total = pares + impares;
    printf("Soma dos pares: %d \n", pares);
    printf("Soma dos impares: %d \n", impares);
    printf("Soma total dos valores: %d \n", total);
    double ppar = contp / 5.0 * 100; //percentual de pares
    double pimpar = contimp / 5.0 * 100; //percentual de impares
    printf("%% de pares %.2lf e %% de impares %.2lf \n", ppar, pimpar);
    return 0;
}