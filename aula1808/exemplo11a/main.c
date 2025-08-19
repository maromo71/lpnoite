#include <stdio.h>

int main(void)
{
    int s = 0;
    int cont = 0;
    do {
        int valor;
        printf("Entre com um valor: \n");
        scanf("%d", &valor);
        s += valor;
        cont++;
    }while (s < 500);
    printf("Somatoria final: %d \n", s);
    printf("Numeros somados: %d \n", cont);
    return 0;
}