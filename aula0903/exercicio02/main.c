#include <stdio.h>

int main(void) {
    int va[10] = {0};
    int vb[10] = {0};
    for (int i = 0; i < 10; i++) {
        //ler valores
        printf("Digite um numero: ");
        scanf("%d", &va[i]);
    }
    for (int i = 0; i < 10; i++) {
        vb[i] = i%2==0 ? va[i]*5 : va[i]+5;
    }
    printf("Vetor A (invertido)\n");
    for (int i=9; i>=0; i--) {
        printf("[%3d]", va[i]);
    }
    printf("\n");
    printf("Vetor B (invertido)\n");
    for (int i=9; i>=0; i--) {
        printf("[%3d]", vb[i]);
    }
    return 0;
}