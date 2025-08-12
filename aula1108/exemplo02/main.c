#include <stdio.h>

/**
 * Função para realizar a soma de dois valores
 * @param a Valor do primeiro argumento
 * @param b Valor do segundo argumento
 * @return a soma dos dois argumentos
 */
int somar(int a, int b)
{
    return a + b;
}
int main(void)
{
    printf("Somar dois valores \n");
    int x = 10;
    int y = 20;
    int resultado = somar(x, y);
    printf("Resultado = %d \n", resultado);
    return 0;
}