#include <stdio.h>

int main(void) {
    int x = 2, y = 3, z =5;
    int r = x++ + ++y - z--;
    printf("Valor de r: %d \n", r);
    printf("Bytes: %d \n", sizeof(x)); //4 bytes
    printf("Bytes: %d \n", sizeof(double)); //8 bytes
    return 0;
}
