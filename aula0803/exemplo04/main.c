#include <stdio.h>

int main(void) {
    double salario;
    int meta;
    double novoSalario;
    printf("Digite o valor do salario: \n");
    scanf("%lf", &salario);
    printf("Digite 1 para cumpriu meta ou 0 para nao cumpriu\n");
    scanf("%d", &meta);
    novoSalario = meta ? salario * 1.10 : salario * 1.03;
    printf("Novo salario: %.2lf", novoSalario);
    return 0;

}