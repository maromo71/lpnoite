#include <stdio.h>

int main(void) {
    //segredo usar contardor com while
    printf("Preenchendo com valores pares\n\n");
    int cont=0;
    int pares[10]={0};
    while (cont<10) {
        int numero;
        printf("Digite um numero: ");
        scanf("%d", &numero);
        if (numero%2==0) {
            pares[cont]=numero;
            cont++;
        }else {
            printf("Digite um valor par \n");
        }
    }
    printf("Vetor final \n");
    for (int i=0;i<cont;i++)  printf("%d ",pares[i]);
    return 0;
}