#include <stdio.h>

int main(void)
{
    int n;
    int soma = 0;
    do {
        do {
            printf("Digite um numero: \n");
            scanf("%d", &n);
        }while (n<0 || n>20);
        soma += n;
    }while (n !=0);
    printf("Soma: %d\n", soma);
    return 0;
}