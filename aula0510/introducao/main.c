#include <stdio.h>

int main(void) {
    int x = 10;
    int *p_seila = NULL;
    int y = 15;
    printf("Valor de x: %d \n", x);
    printf("Endereco de x: %p \n", &x);
    //usando ponteiros
    p_seila = &x;
    printf("Valor de x: %d \n", *p_seila);
    p_seila = &y;
    *p_seila = x+3;
    printf("Endereco de y: %p \n", p_seila);
    printf("Valor de y: %d \n", *p_seila);
    return 0;
}
