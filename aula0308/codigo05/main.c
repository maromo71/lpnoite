#include <stdio.h>
#include <math.h>

int main(void) {
    int base, expoente;
    printf("Entre com a base: \n");
    scanf("%d", &base);
    printf("Entre com o expoente: \n");
    scanf("%d", &expoente);
    int x = pow(base, expoente);
    printf("Valor de x:%d \n", x);
    return 0;
}
