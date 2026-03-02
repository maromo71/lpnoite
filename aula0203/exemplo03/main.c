#include <stdio.h>

int main(void) {
    //matriz 3x3
    int nums[3][3] = {{0}};
    //Alimentar a matriz (entrada de dados do usuario)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite um valor: \n");
            scanf("%d", &nums[i][j]);
        }
    }
    //Imprimindo a Matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("[%3d] ", nums[i][j]);
        }
        printf("\n"); //pular uma linha apos imprimir todas as colunas
    }
    return 0;
}