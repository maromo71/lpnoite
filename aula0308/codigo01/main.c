#include <stdio.h>

int main(void) {
    double salarioBruto;
    printf("Digite o salario Bruto:  \n");
    scanf("%lf", &salarioBruto);
    int valor; //Atribuicao estatica (padrao c)
    printf("Posicao de valor na memoria: %d \n", &valor);
    double aumento = salarioBruto * 1.1;
    printf("Salario com aumento: %.2lf \n", aumento);
    printf("Valor da variavel: %d \n", valor);
    return 0;
}
