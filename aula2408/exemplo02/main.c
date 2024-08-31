#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//06 valores aleatorios para um vetos
int main(void) {
    srand(time(NULL));
    int megasena[6];
    //gerar os seis valores aleatorios
    for (int i = 0; i < 6; i++) {
        megasena[i] = rand() % 60 + 1;
    }
    //exibir os dados
    for (int i = 0; i < 6; i++) {
        printf("[%2d] ", megasena[i]);
    }
    printf("\nTerminou\n");
    return 0;
}
