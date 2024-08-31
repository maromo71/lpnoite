#include <stdio.h>

/**
 * Leia um número inteiro positivo e exiba todos
 * os números pares de 1 até esse número.
 * Valide a entrada onde (N % 2 ==0).
 *
 */
int main(void) {
    int n;
    printf("Digite um valor absoluto maior que zero: \n");
    scanf("%d", &n);
    //considerando o número apenas como positivo, independente
    //do usuario ter digitado sinal
    n = n < 0 ? n*-1 : n;
    for (int i = 1; i <= n; ++i) {
        if(i % 2 ==0) printf("%d ", i);
    }
    printf("\n\n");
    return 0;
}
