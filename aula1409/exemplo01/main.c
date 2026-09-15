#include <stdio.h>
#include "calculadora.h"

int main() {
    int x, y;
    printf("Digite valores inteiros \n");
    scanf("%d %d", &x, &y);
    printf("Soma: %d \n", somar(x,y));
    printf("Subtracao: %d \n", subtrair(x,y));
    printf("Multiplicacao: %d \n", multiplicar(x,y));
    printf("Divisao: %d \n", dividir(x,y));
    return 0;
}

