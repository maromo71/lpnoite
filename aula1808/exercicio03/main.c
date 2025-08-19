#include <stdio.h>
int main(void)
{
    //qtd de valores pares de 10 entrados
    int n;
    int cont=0;
    for (int i = 1; i <= 10; i++) {
        printf("Digite um numero: \n");
        scanf("%d", &n);
        if (n % 2 == 0) cont++;
    }
    printf("Qtde de Pares: %d\n", cont);
    return 0;
}