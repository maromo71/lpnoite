#include <stdio.h>

double calcularImc(double peso, double altura);

int main(void) {
    double p,  h;
    printf("Digite seu peso: \n");
    scanf("%lf", &p);
    printf("Digite sua altura: \n");
    scanf("%lf", &h);

    printf("Seu imc: %.2lf \n", calcularImc(p, h));
    return 0;
}
double calcularImc(double peso, double altura) {
    return peso / (altura * altura);
}