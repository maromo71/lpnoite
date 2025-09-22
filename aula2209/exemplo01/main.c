#include <stdio.h>
int somar(int a, int b);

int main(void) {
    int x = 10;
    int y = 5;
    int resultado = somar(x, y);
    printf("Resultado: %d \n", resultado);
    return 0;
}
int somar(int a, int b) {
    return a + b;
}