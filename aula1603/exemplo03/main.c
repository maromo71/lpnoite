#include <stdio.h>
void trocar(int *pa, int *pb);
int main(void) {
    int x = 10;
    int y = 20;
    trocar(&x, &y);
    printf("Valor de x: %d\n", x);
    printf("Valor de y: %d\n", y);
    return 0;
}

void trocar(int *pa, int *pb) {
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}