#include <stdio.h>

double calcularVolumeEsfera(double raio);

int main(void) {
    printf("Calculo da Area da Circunferencia\n");
    double r;
    printf("Digite o raio do circulo: ");
    scanf("%lf", &r);
    double resultado = calcularVolumeEsfera(r);
    printf("Area do circulo: %.2lf\n", resultado);
    return 0;
}

double calcularVolumeEsfera(double raio) {
    double PI = 3.14159;
    return 4/3.0 * PI * raio * raio * raio;
}