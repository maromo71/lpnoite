#include <stdio.h>

int main(void) {
    int v[] = {2, 4, 6, 8, 10};
    int *p = v;

    for (int i = 0; i < 5; i++) {
        printf("Valor: %d \n", *p++);
    }
    p =v;

    printf("Valor do apontado por p: %d \n", *p);

    return 0;
}
