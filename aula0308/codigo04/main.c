#include <stdio.h>
#define PI 3.1415926
//prototipar a funcao calcularArea
/**
 *
 * @param raio Valor double referente ao raio informado pelo usuario
 * @return Valor referente a area da circunferencia
 */
double calcularArea(double raio);
//prototipar a funcao calcularPerimetro

double calcularPerimetro(double raio);
int main(void) {
    double raio;
    printf("Digite o valor do raio: ");
    scanf("%lf", &raio);
    printf("Area do circulo: %lf \n", calcularArea(raio));
    printf("Perimetro do circulo: %lf \n", calcularPerimetro(raio));
    return 0;
}
double calcularArea(double raio) {
    return PI * raio * raio;
}


double calcularPerimetro(double raio) {
    return 2 * PI * raio;
}