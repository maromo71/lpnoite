#include <stdio.h>

/**
 * Função para soma de dois valores inteiros
 * @param a primeiro valor passado como argumento
 * @param b segundo valor passado como argumento
 * @return  resultado da soma de dois valores
 */
int somar(int a, int b);

int main(void) {
    int valor1, valor2;
    printf("Digite dois valores: \n");
    scanf("%d%d", &valor1, &valor2);
    int resultado = somar(valor1, valor2);

    printf("Resultado da soma: %d\n", resultado);
    return 0;
}

int somar(int a, int b) {
    return a + b;
}
