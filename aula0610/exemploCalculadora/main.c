#include <stdio.h>
#include "calculadora.h"

int main(void) {
    int x, y;
    printf("Digite dois valores inteiros \n");
    scanf("%d %d", &x, &y);
    printf("Resultado Soma = %d\n", somar(x, y));
    printf("Resultado Subt = %d\n", subtrair(x, y));
    printf("Resultado Mult = %d\n", multiplicar(x, y));
    printf("Resultado Div  = %d\n", dividir(x, y));
    return 0;
}