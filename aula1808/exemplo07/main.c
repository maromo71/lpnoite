#include <stdio.h>

int main(void)
{
    double soma = 0;
    for (int i = 1, j = 1; i<=99; i+=2, j++) {
        soma += (double) i / j;
    }
    printf("Somatoria: %.2lf\n ", soma);
    return 0;
}