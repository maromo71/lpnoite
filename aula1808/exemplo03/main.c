#include <stdio.h>
void menu()
{
    printf("Bem vindo ao nosso BAR \n");
    printf("Escolha pelo numero: \n");
    printf("1. Skol Lata\n");
    printf("2. Devassa Lata\n");
    printf("3. Heineken\n");
    printf("4. Suco de Laranja\n");
    printf("Escolha sua opcao: ");
}
int main(void)
{
    int opcao = 0;
    do {
        menu();
        scanf("%d", &opcao);
    }while (opcao <1 || opcao > 4);
    switch (opcao) {
    case 1:
        printf("Skol esta em falta\n");
        break;
    case 2:
        printf("Devassa esta quente\n");
        break;
    case 3:
        printf("Heineken esta no ponto\n");
        break;
    case 4:
        printf("Suco de Laranja em promocao\n");
        break;

    }
    return 0;
}