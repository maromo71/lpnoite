#include <stdio.h>

int main(void) {
    int i = 1;
    for (int i = 0; i< 10; i++) {
        if (i % 3 == 0) continue;
        printf("Valor de i: %d\n", i);
    }
    printf("Valor de i: %d \n", i);
    return 0;
}