#include <stdio.h>
int somatoria(int n);
int main(void) {
    int x;
    printf("Digite o teto da soma: \n");
    scanf("%d", &x);
    int result = somatoria(x);
    printf("O resultado da soma eh: %d\n", result);
    return 0;
}

int somatoria(int n) {
    if (n == 1) return 1;
    return n + somatoria(n - 1);
}