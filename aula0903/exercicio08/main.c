#include <stdio.h>

int main(void) {
    int valor[5];
    int pos_maior, pos_menor, menor, maior;
    for (int i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &valor[i]);
        if (i==0) {
            maior = valor[0];
            menor = valor[0];
        }
        if (valor[i]> maior) {
            maior = valor[i];
        }
        if (valor[i] < menor) {
            menor = valor[i];
        }
    }
    printf("Maior valor: %d \n", maior);
    printf("O Maior aparece nas posicoes: ");
    for (int i=0; i<5; i++) {
        if (maior == valor[i]) {
            printf("[%d] ", i+1);
        }
    }
    printf("\nMenor valor: %d \n", menor);
    printf("O Menor aparece nas posicoes: ");
    for (int i=0; i<5; i++) {
        if (menor == valor[i]) {
            printf("[%d] ", i+1);
        }
    }
    printf("\n");
    return 0;
}