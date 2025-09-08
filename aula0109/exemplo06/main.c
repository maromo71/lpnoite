#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
    int jogo[6] = {0};
    srand(time(NULL));
    //int x = (rand() % 60)+1;
    //1. preencher 06 posicoes com valorres
    // aleatorios entre 1 e 60
    int qtd = 0;
    do {
        int x = (rand() % 60)+1;
        int tem = 0;
        for (int i = 0; i <= qtd; i++) {
            if (x == jogo[i]) tem = 1;
        }
        if (!tem) {
            jogo[qtd] = x;
            qtd++;
        }
    }while (qtd<6);
    //Cartela atual
    for (int i = 0; i < 6; i++) {
        printf("[%d ]", jogo[i]);
    }
    printf("\n");
    return 0;
}