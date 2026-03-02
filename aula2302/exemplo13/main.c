#include <stdio.h>

int main(void) {
    int soma = 0;
    printf("Somar ate ultrapassar 50 \n");
    while (soma <= 50) {
        int n;
        printf("Digite um valor: \n");
        scanf("%d", &n);
        soma += n;
    }
    printf("Soma = %d\n", soma);
    return 0;
}