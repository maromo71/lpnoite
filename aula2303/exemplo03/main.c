/* Somar os modulos de 3, entre 1 e o valor entrado
 * pelo usuario */
#include <stdio.h>

int soma_mod_3(int n);

int main(void) {
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);
    printf("Resultado: %d", soma_mod_3(x));
    return 0;
}

int soma_mod_3(int n) {
    if (n == 0) return 0;
    if (n % 3 == 0) {
        return n + soma_mod_3(n - 3);
    }else {
        return soma_mod_3(n - 1);
    }
}