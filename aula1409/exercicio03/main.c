#include <stdio.h>
#include <math.h>

double calcularImc(double peso, double altura);

int main(void) {
    double p, a;
    printf("Digite o peso: \n");
    scanf("%lf", &p);
    printf("Digite a altura: \n");
    scanf("%lf", &a);
    printf("Resultado: %.2lf\n", calcularImc(p, a));
    return 0;
}

double calcularImc(double peso, double altura) {
    return peso / pow(altura, 2);
}