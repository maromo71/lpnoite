#include <stdio.h>

int main(void)
{
    int razao, pa = 1;
    printf("Insira o valor da razao: \n");
    scanf("%d", &razao);
    for (int i = 1; i <= 10; i++) {
        printf("%d ", pa);
        pa += razao;
    }
    return 0;
}