#include <stdio.h>

int main(void) {
    int *p_x = NULL; //* para declara ponteiro
    int x = 10;
    double valor = 34.5;
    printf("X:  %d\n", x);
    printf("Valor: %lf\n", valor);
    p_x = &x; //&x --> endereco de x na memoria
    printf("X usando ponteiro: %d\n", *p_x);
    *p_x = 15; //* para alterar o valor do endereco para qual apontamos
    printf("Novo valor de X %d\n", x); //o valor 15, novo valor de x.
    return 0;
}
