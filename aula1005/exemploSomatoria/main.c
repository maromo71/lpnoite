#include <stdio.h>
int soma(int n);
int main(void) {
    int valor;
    printf("Digite um valor: \n");
    scanf("%d", &valor);
    printf("A soma eh: %d", soma(valor));
    return 0;
}

int soma(int n) {
    if (n == 5) return 5;
    if (n % 5==0) return  n + soma(n - 5);
    soma(n-1);
}+