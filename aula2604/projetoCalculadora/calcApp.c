#include <stdio.h>
#include "calculadora.h"

int main(void) {
    int x, y;

    x = 10;
    y = 0;

    int teste = verificarPerfeito(28);
    teste ? printf("eh perfeito\n") : printf("nao perfeito\n");

    printf("Resultado da soma: %d \n", somar(x, y));
    printf("Resultado da sub: %d \n", subtrair(x, y));
    printf("Resultado da mult: %d \n", multiplicar(x, y));
    printf("Resultado da div: %d \n", dividir(x, y));
    return 0;
}