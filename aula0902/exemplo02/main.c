#include <stdio.h>
int mostrarValor(int x);
int x = 20;
int main(void) {
    printf("Valor de x: %d\n", x);
    printf("Endereco de x %d \n", &x);
    int x = 10;
    mostrarValor(26);
    printf("Valor de x: %d\n", x);
    printf("Endereco de x %d \n", &x);
    return 0;
}
int mostrarValor(int x) {
    printf("%d\n", x);
    printf("Endereco de x %d \n", &x);
}