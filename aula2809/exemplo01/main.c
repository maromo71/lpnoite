#include <stdio.h>

int fatorial(int n) {
    if (n == 1) return 1;
    return n * fatorial(n -1);
}
int main(void) {
    int x;
    printf("Digite o numero que deseja o fatorial: \n");
    scanf("%d", &x);
    int result = fatorial(x);
    printf("O fatorial de %d = %d \n", x, result);
    return 0;
}
