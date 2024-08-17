#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int x, y;
    printf("Digite o valor 1: \n");
    scanf("%d", &x);
    printf("Digite o valor 2: \n");
    scanf("%d", &y);
    //Dividir x / y mas tratar o zero
    if(y){ //diferente de zero
        int resultado = x / y;
        printf("Resutado: %d\n", resultado);
        return 0;
    }else{
        printf("Erro: impossivel divisao inteira por zero\n");
        exit(1);
    }

}
