#include <stdio.h>

int main(void) {
    double valor;
    printf("Digite um valor: ");
    scanf("%lf", &valor);
    double desconto = valor < 1000 ? valor * 0.9 : valor * 0.88;
    printf("Valor a pagar: %.2lf\n", desconto);
    return 0;
}
