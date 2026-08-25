#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char buffer[100];
    char entrada[] = "123 456.789";
    int idade = 30;
    sprintf(buffer, "Idade da pessoa: %d anos\n", idade);
    puts(buffer);
    int valor;
    double valor2;
    sscanf(entrada, "%d %lf", &valor, &valor2);
    printf("Valor: %d \n", valor);
    printf("Valor Double: %.2lf\n", valor2);
    char strValor[] = "455";
    int valorInt = atoi(strValor);
    printf("%d\n", valorInt+1);
    char strValorDouble[] = "45.8889";
    double resultado = atof(strValorDouble);
    printf("%.2lf\n", resultado);
    return 0;
}
