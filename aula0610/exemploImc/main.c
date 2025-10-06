#include <stdio.h>
#include "imc.h"
int main(void) {
    double peso, altura;
    printf("Digite seu peso: \n");
    scanf("%lf", &peso);

    printf("Digite sua altura: \n");
    scanf("%lf", &altura);

    double imc = calcularImc(peso, altura);

    printf("IMC: %lf\n", imc);
    printf("Seu resultado: %s \n", statusImc(imc));
    return 0;
}