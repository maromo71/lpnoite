#include <stdio.h>

int main(void) {
    int x[10] = {0};
    for (int i = 0; i < 10; ++i) {
        printf("Posicao %d: Valor: %d \n",i, x[i]);
    }

    return 0;
}