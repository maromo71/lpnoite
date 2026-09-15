#include <stdio.h>

void trocar(int * p_x, int * p_y);


int main(void) {
    int a = 10, b = 30;
    trocar(&a, &b);
    printf("Valor de a: %d e valor de b: %d \n", a, b);
    return 0;
}


void trocar(int * p_x, int * p_y) {
    int aux = *p_x;
    *p_x =  *p_y;
    *p_y = aux;
}