#include <stdio.h>

int main(void)
{
    int valor1 = 21;
    int valor2 = 5;
    int x = 10;
    int v = ++x + 5; //Retorna 16
    //int v = x++ + 5; //Retorna 15
    double resultado = (double)valor1 / valor2;
    printf("O resultado eh %lf \n", resultado);
    printf("Valor de v: %d \n", v);
    printf("Valor de x: %d \n", x);
    return 0;
}