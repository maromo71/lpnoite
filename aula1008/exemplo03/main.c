#include <stdio.h>
float somar(float a, float b) {
    return a + b;
}
float subtrair(float a, float b) {
    return a - b;
}
int main(void) {
    float x, y, result=0.0;
    printf("Digite o primeiro valor: ");
    scanf("%f", &x);
    printf("Digite o segundo valor: ");
    scanf("%f", &y);
    printf("Calculadora Basica \n");
    printf("1. Somar \n");
    printf("2. Subtrair \n");
    printf("3. Multiplicar \n");
    printf("4. Dividar \n");
    printf("Escolha a opcao: \n");
    int opcao;
    scanf("%d", &opcao);
    switch (opcao) {
        case 1:
            result = somar(x, y);
            break;
        case 2:
            result = subtrair(x, y);
            break;
        default:
            printf("Operacao nao programada");
            return 0;
    }
    printf("Resultado: %.2f\n", result);
    return 0;
}
