#include <stdio.h>
int valor = 30;
void imprimir_valor(int valor)
{
    valor++;
    printf("Valor = %d\n", valor);
    printf("Endereco de valor: %d \n", &valor);
}
int main(void)
{
    printf("Valor = %d\n", valor);
    printf("Endereco de valor: %d \n", &valor);
    int valor = 10;
    printf("Endereco de valor: %d \n", &valor);
    imprimir_valor(valor);
    printf("Valor = %d\n", valor);
    return 0;
}