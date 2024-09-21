#include <stdio.h>
#include "calculadora.h"
int main(void) {
    int x = 10, y=0;
    printf("Resultado da Soma: %d \n", somar(x, y));
    printf("Resultado da Subtração: %d \n", subtrair(x, y));
    printf("Resultado da Multiplicacao: %d \n", multiplicar(x, y));
    printf("Resultado da Divisao: %d \n", dividir(x, y));
    return 0;
}
