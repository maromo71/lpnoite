#include <stdio.h>

int main(void) {
    int vetor[10]={0};
    for(int i=0;i<10;i++) {
        printf("Digite um numero: ");
        scanf("%d",&vetor[i]);
    }
    for (int i=9; i>=0; i--) printf("[%d] ",vetor[i]);
    printf("\n");
    return 0;
}