#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int x, y;
    x = 10;
    y = 20;
    int *ptr = NULL;
    printf("Valor de X: %d \n", x);
    printf("Valor de Y: %d \n", y);
    printf("Endereco de X: %ld \n", &x);
    printf("Endereco de Y: %ld \n", &y);
    printf("Endereco do ponteiro ptr: %ld \n", &ptr);
    ptr = &x;
    printf("Valor de ptr: %ld \n", ptr);
    printf("Conteudo do apontado por ptr: %ld \n", *ptr);
    return 0;
}
