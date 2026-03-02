#include <stdio.h>

int main(void) {
    int opcao;
    printf("Calculadora basica \n");
    printf("1. Somar \n");
    printf("2. Subtracao \n");
    printf("3. Multiplicacao \n");
    printf("4. Divisao \n");
    printf("5. Sair \n");
    printf("Digite a opcao: ");
    scanf("%d", &opcao);
    switch (opcao) {
        case 1:
            printf("Opcao de somar\n");
            break;
        case 2:
            printf("Opcao de subtracao\n");
            break;
        case 3:
            printf("Opcao de multiplicacao\n");
            break;
        case 4:
            printf("Opcao de divisao\n");
            break;
        case 5:
            printf("Opcao de sair\n");
            return 0;
        default:
            printf("Opcao invalida\n");

    }
    return 0;
}