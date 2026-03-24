#include <stdio.h>
void up(int n);

void down(int n);

int main(void) {
    int x;
    printf("Digite um valor inteiro: ");
    scanf("%d", &x);
    up(x);
    down(x);
    return 0;
}
void down(int n) {
    if (n==0) return;
    printf("%d\n", n);
    down(n -1);
}
void up(int n) {
    if (n == 0) return;
    up(n - 1);
    printf("%d\n", n);
}