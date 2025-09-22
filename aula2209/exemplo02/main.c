#include <stdio.h>
void imprimirX(int n);

int main(void) {
    imprimirX(3);
    imprimirX(5);
    imprimirX(7);
    imprimirX(5);
    imprimirX(3);
    return 0;
}
void imprimirX(int n) {
    for (int i = 0; i < n; i++) {
        printf("%c", '*');
    }
    printf("\n");
}