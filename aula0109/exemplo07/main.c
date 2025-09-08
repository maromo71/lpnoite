#include <stdio.h>

int main(void) {
    int v1[5];
    int v2[5];
    int produto_escalar = 0;
    //produto escalar dos dois vetores
    for (int i = 0; i < 5; i++) {
        printf("Digite [%do] o valor do v1: \n", (i+1));
        scanf("%d", &v1[i]);
        printf("Digite o [%do] valor do v2: \n", (i+1));
        scanf("%d", &v2[i]);
        produto_escalar += v1[i] * v2[i];
    }
    printf("Produto escalar dos vetores: %d\n", produto_escalar);
    return 0;
}