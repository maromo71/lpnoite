#include <stdio.h>
//Exercício 1 - Gabarito by Maromo
int multiplicacao(int x, int n);

int main() {
    int x, n;
    printf("Digite o valor de x: \n");
    scanf("%d", &x);
    printf("Digite o valor de n: \n");
    scanf("%d", &n);
    printf("%d * %d = %d\n", x, n, multiplicacao(x, n));
    return 0;
}
int multiplicacao(int x, int n) {
    if (n == 0) {
        return 0;
    }
    return x + multiplicacao(x, n - 1);
}