#include <stdio.h>
//soma de n valores onde (0<=n<=100)
int main(void) {
    int n;
    int soma=0;
    do{
        do{
            printf("Digite o valor: \n");
            scanf("%d", &n);
        }while(n<0 || n>=100); //validacao
        if(n%2==1) soma+=n;
    }while(n!=0);
    printf("Soma final %d\n", soma);
    return 0;
}
