#include <stdio.h>

int main(void) {
    int x = 2147483647;
    int z = 10;
    int soma = x + z;
    printf("%d \n", soma);
    printf("%d bytes \n", sizeof(int));
    return 0;
}