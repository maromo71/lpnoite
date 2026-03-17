#include <stdio.h>
#include "calculadora.h"
int main(void) {
    int resultSoma = somar(3, 4);
    printf("Soma: %d \n", resultSoma);

    int resultSubtrair = subtrair(3, 4);
    printf("Subtrair: %d \n", resultSubtrair);

    int resultMultiplicar = multiplicar(3, 4);
    printf("Multiplicar: %d \n", resultMultiplicar);

    int resultDividir = dividir(3, 4);
    printf("Dividir: %d \n", resultDividir);
    return 0;
}