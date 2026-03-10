#include <stdio.h>

int main(void) {
    int a, b, i;
    do {
        printf("Digite um numero: ");
        scanf("%d", &a);
        printf("Digite um numero: ");
        scanf("%d", &b);
        if (a >= 10000) {
            printf("Numero invalido \n");
            continue;
        }
        if (b >= 10000) {
            printf("Numero invalido \n");
            continue;
        }
        printf("Numero validados\n");
        break;
    }while (1);
    int va[4] = {0}, vb[4] = {0};
    i = 0;
    while (a > 0) {
        va[i] = a % 10;
        a /= 10;
        i++;
    }
    i = 0;
    while (b > 0) {
        vb[i] = b % 10;
        b /= 10;
        i++;
    }
    for (int i=0; i < 4; i++) {
        printf("va[%d] = %d\n", i, va[i]);
    }
    printf("\n\n");
    for (int i=0; i < 4; i++) {
        printf("vb[%d] = %d\n", i, vb[i]);
    }
    return 0;
}