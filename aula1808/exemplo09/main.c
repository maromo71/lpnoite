#include <stdio.h>
int main(void)
{
    int cont = 0;
    while (1) {
        int num;
        printf("Entrar com um numero: \n");
        scanf("%d", &num);
        if ( num < 0) {
            printf("Inválido\n");
            break;
        }
        if (num % 2 == 0) {
            printf("Valor par \n");
            cont++;
        }
        if (cont == 5) {
            printf("Cinco pares entrados\n");
            return 0;
        }
    }
    return 0;
}