#include <stdio.h>

int main(void) {
    int opcao;
    printf("Escolha a opcao do menu\n");
    printf("1. Pizza de calabresa\n");
    printf("2. Pizza de mussarela\n");
    printf("3. Pizza de portuguesa\n");
    scanf("%d", &opcao);
    switch (opcao) {
        case 1:
            printf("Pizza de calabresa R$ 39,90\n");
            break;
        case 2:
            printf("Pizza de mussarela R$ 36,00 \n");
            break;
        case 3:
            printf("Pizza de portuguesa R$ 41,00\n");
            break;
        default:
            printf("Opcao invalida\n");
    }
    return 0;
}