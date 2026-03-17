#include <stdio.h>
void linhaNx(int n);

int main(void) {
    linhaNx(3);
    linhaNx(5);
    linhaNx(7);
    linhaNx(5);
    linhaNx(3);
    return 0;
}

void linhaNx(int n) {
    for (int i=0; i<n; i++) {
        putchar('*');
    }
    printf("\n");
}