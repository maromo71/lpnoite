#include <stdio.h>

void trocarValor(int *p_a, int *p_b);
int main(void) {
    int x = 10;
    int y = 20;

    trocarValor(&x, &y);

    printf("Valor de X: %d \n", x);
    printf("Valor de Y: %d \n", y);
    return 0;
}
void trocarValor(int *p_a, int *p_b) {
    int aux = *p_a;
    *p_a = *p_b;
    *p_b = aux;
}
