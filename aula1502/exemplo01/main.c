#include <stdio.h>

/**
 *
 * @param x - Valor do primeiro operando
 * @param y - Valor do segundo operando
 * @return Soma dos dois valores
 */
int somar(int x, int y);


/*
 * Função Principal
 * Ponto de entrada do programa
 * Programa para somar dois valores
 *
 */
int main(void) {
    // Declarando as variáveis a e b.
    int a = 10;
    int b = 15;
    // Declarando a variável resultado.
    int resultado = somar(a, b);
    printf("Resultado: %d\n", resultado);
    return 0;
}

int somar(int x, int y) {
    return x + y;
}