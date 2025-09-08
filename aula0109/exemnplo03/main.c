#include <stdio.h>

int main(void) {
    int va[5] = {1, 2, 3, 4, 5};
    int vb[5] = {6, 7, 8, 9, 10};
    int vc[10];

    //intercalar va com vb em vc
    int p = 0;
    for (int i = 0; i < 5; i++) {
        vc[p++] = va[i];
        vc[p++] = vb[i];
    }
    //apresentando o vetor intercalado
    for (int i = 0; i < 10; i++) {
        printf("[%d] ", vc[i]);
    }
    printf("\n");
    return 0;
}