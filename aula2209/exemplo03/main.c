#include <stdio.h>
#include "calculadora.h"
int main(void) {
    int x, y;
    printf("Digite dois valores: \n");
    scanf("%d %d", &x, &y);
    printf("Soma: %d + %d = %d \n", x, y, somar(x, y));
    printf("Subtrair: %d - %d = %d \n", x, y, subtrair(x, y));
    printf("Mult: %d X %d = %d \n", x, y, multiplicar(x, y));
    printf("Dividir: %d / %d = %d \n", x, y, dividir(x, y));
    return 0;
}