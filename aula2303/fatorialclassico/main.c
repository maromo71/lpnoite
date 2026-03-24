#include <stdio.h>
#include <stdlib.h>

int fatorial(int n);
int fatorial_r(int n);

int main(void) {
    int x;
    printf("Digite um valor positivo: \n");
    scanf("%d", &x);
    if (x < 2) exit(1);
    int resultado = fatorial_r(x);
    printf("Fatoria de %d eh igual a %d \n", x, resultado);
    return 0;
}

int fatorial(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

int fatorial_r(int n) {
    if (n==1) return 1;
    return n * fatorial_r(n-1);
}