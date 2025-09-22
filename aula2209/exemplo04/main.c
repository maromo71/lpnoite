#include <stdio.h>
void trocar(int *p_a, int *p_b) {
    int aux = *p_a;
    *p_a = *p_b;
    *p_b = aux;
}
int main(void) {
    int valor1 = 15;
    int valor2 = 30;
    trocar(&valor1, &valor2);
    printf("Valor 1: %d \n", valor1);
    printf("Valor 2: %d \n", valor2);
    return 0;
}