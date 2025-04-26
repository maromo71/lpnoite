/*
 *
1). Crie um programa em C que realize a soma dos restos da divisão por 3 de 200 números
entrados pelo usuário (estes números devem ser positivos, valide-os). [2 pontos]
 *
 */
#include <stdio.h>

int main(void) {
    int n=0;
    int soma_resto = 0;
    for (int i = 0; i < 200; ++i) { //testem com menos (10) por exemplo
        do {
            printf("digite um numero positivo: ");
            scanf("%d", &n);
        }while (n<1);
        if (n % 3 ==0) {
            soma_resto += n;
        }
    }
    printf("Soma dos restos de N por 3 de -> 200 numeros validos ==> %d \n", soma_resto);
    return 0;
}
