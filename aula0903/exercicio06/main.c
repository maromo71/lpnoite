#include <stdio.h>

int main(void) {
    double valor[10];
    int qtd_negativos=0, soma_positivos=0.0;
    for (int i = 0; i < 10; i++) {
        printf("Digite um valor: \n");
        scanf("%lf", &valor[i]);
        if ( valor[i] < 0) {
            qtd_negativos++;
        }else {
            soma_positivos += valor[i];
        }
    }
    printf("Qtd de negativos: %d \n", qtd_negativos);
    printf("Soma dos positivos: %d \n", soma_positivos);
    return 0;
}