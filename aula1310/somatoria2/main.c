#include <stdio.h>
int soma_smod(int n);
int main(void) {
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);
    int r = soma_smod(x);
    printf("Soma dos numeros: %d \n", r);
    return 0;
}

int soma_smod(int n) {
    //nao somar os modulos de 3, 5, 7.
    if (n == 1) return 1;
    if (n % 3 ==0 || n % 5 == 0 || n % 7 == 0) {
        return 0 + soma_smod(n-1);
    }
    return n + soma_smod(n-1);
}