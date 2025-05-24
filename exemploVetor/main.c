#include <stdio.h>
void imprimirVetor(int *p_vetor, int tamanho);
void imprimirVetorReverso(int *p_vetor, int tamanho);
int main(void)
{
    int vetor[6] = {10, 11, 14, 19, 23, 20};
    imprimirVetor(vetor, 6);
    imprimirVetorReverso(vetor, 6);
    return 0;
}
void imprimirVetor(int *p_vetor, int tamanho)
{
    for (int i=0; i<tamanho; i++) {
        printf("%d \n", *p_vetor++);
    }
}
void imprimirVetorReverso(int *p_vetor, int tamanho)
{
    p_vetor+=tamanho-1;
    for (int i=0; i<tamanho; i++) {
        printf("%d \n", *p_vetor--);
    }
}