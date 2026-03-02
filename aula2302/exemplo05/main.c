#include <stdio.h>

int main(void) {
    double valor;
    printf("Digite um valor: \n");
    scanf("%lf", &valor);
    valor *= valor < 1000.0? 1.15: 1.10;
    printf("Valor corrigido: %lf\n", valor);
    return 0;
}