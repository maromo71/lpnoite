#include <stdio.h>
int a =10, b=20, c=28;

int somar(int a, int b) {
    return a + b;
}

int main(void) {

    c = somar(a, b);
    printf("Valor de c: %d \n", c);
    return 0;
}