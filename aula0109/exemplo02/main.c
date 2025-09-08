#include <stdio.h>
#define T 5
int main(void) {
    float notas[T];
    //1. Alimentar o vetor (receber dados do usuario)
    for (int i=0; i<T; i++) {
        printf("Digite a %da nota: ", (i+1));
        scanf("%f", &notas[i]);
    }
    //2. Encontrar a maior nota de todas
    float maior = notas[0];
    for (int i=1; i<T; i++) {
        if (maior < notas[i]) maior = notas[i];
    }
    //3. Numero de ocorrencias da maior notas
    int num = 0;
    for (int i=0; i<T; i++) {
        if (maior == notas[i])num++; //acrescer uma ocorrencia
    }
    //4. Saidas
    printf("Maior nota entrada: %.2f \n", maior);
    printf("Numero de ocorrencias da maior: %d \n", num);
    return 0;
}