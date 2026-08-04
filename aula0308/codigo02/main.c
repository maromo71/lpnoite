#include <stdio.h>

int main(void) {
    int a = 21;
    int b = 4;
    double x = a / (double) b; //cast
    printf("Valor de x: %lf \n", x);
    return 0;
}
