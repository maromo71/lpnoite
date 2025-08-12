#include <stdio.h>
struct ponto {
    int x;
    int y;
    char nome[50];
};
int main(void)
{
    struct ponto meu_ponto;
    printf("Tamanho do tipo: %d \n", sizeof(meu_ponto.nome));
    long int x = 4000000000;
    printf("%d\n", sizeof(x));
    printf("%ld\n", x);
    return 0;
}