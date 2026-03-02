#include <stdio.h>

int main(void) {
    double total = 0.0;
    double valor = 0.0;
    int opcao = 0;
    do {
        printf("Menu de Pizza\n");
        printf("1. Calabreza \n");
        printf("2. Quatro Queijos \n");
        printf("3. Mussarela \n");
        printf("9. Sair \n");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                valor = 69.00;
                total+= valor; //sem desconto
                break;
            case 2:
                valor = 89.00;
                total+= (valor * 0.85); //15% valor da pizza desc
                break;
            case 3:
                valor = 65.00;
                total+= (valor * 0.90); //10% valor da pizza desc
                break;
            case 9:
                printf("Passe no caixa \n");
                break;
            default:
                printf("Opcao invalida\n");
        }
    }while (opcao!=9);
    printf("Valor a pagar R$ %.2lf \n", total);
    return 0;
}