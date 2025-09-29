#include <stdio.h>
//2. Possivel solucao
int main(void) {
    int dias, n, p;
    do {
        printf("Digite o numero de testes: \n ");
        scanf("%d", &n);
    }while (n<1 || n>100);
    for (int i=1; i<=n; i++) {
        do {
            printf("Digite a populacao inicial: \n");
            scanf("%d", &p);
        }while (p < 1 || p > 100000);
        dias = 0;
        while (p <= 100000) {
            p*= 2;
            dias++;
        }
        printf("%d dias\n", dias);
    }
    return 0;
}