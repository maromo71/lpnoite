#include <stdio.h>

int main(void)
{
    int x, y;
    printf("Digite um valor inteiro: \n");
    scanf("%d", &x);
    printf("Digite outro valor inteiro: \n");
    scanf("%d", &y);

    int resultado = 0;
    if (y) {
        resultado = x/y;
        printf("O resultado eh %d \n", resultado);
    }else {
        printf("Impossivel dividir inteiro por ZERO\n");
    }
    return 0;
}