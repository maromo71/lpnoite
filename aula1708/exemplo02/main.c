#include <stdio.h>

int main(void) {
    int x;
    printf("Digite um valor: \n");
    scanf("%d", &x);
    int r = x > 1000;
    printf("Valor de r: %d \n", r);
    return 0;
}
