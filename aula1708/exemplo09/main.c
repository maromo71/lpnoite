#include <stdio.h>

int main(void) {
    int soma = 0;
    int n;
    //soma os valores entre 0 e 20 ate que o usuario entre com 0 (finaliza).
    do{
        do{
            printf("Digite um valor entre 0 e 20\n");
            scanf("%d", &n);
        }while(n<0 || n>20);
        soma+=n;
    }while(n!=0);
    printf("somatoria: %d\n", soma);
    return 0;
}
