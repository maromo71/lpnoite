#include <stdio.h>
int fatorial(int n);

int main(void) {
    int num;
    printf("Digite um valor maior ou igual a zero: \n");
    scanf("%d", &num);
    int resultado = fatorial(num);
    printf("Fatorial de %d => %d \n", num, resultado);
    return 0;
}

int fatorial(int n) {
    if (n==0 || n==1) return 1;
    return n * fatorial(n-1);
}