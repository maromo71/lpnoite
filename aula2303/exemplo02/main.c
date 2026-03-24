#include <stdio.h>

int soma_rec(int n);

int main(void) {
    int x;
    printf("Digite o valor de entrada: \n");
    scanf("%d", &x);
    printf("Soma dos elementos entre 1 e %d\n", x);
    int resultado = soma_rec(x);
    printf("Resultado: %d\n", resultado);
    return 0;
}

int soma_rec(int n) {
    if (n == 1) return 1;
    return n + soma_rec(n - 1);
}