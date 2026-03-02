#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 5; i+=2) {
        printf("%d\t", i);
    }
    printf("\n");
    for (int i = 11; i > 0; i--) {
        printf("%d\t", i);
    }
    printf("\n");
    return 0;
}