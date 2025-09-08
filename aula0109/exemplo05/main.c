#include <stdio.h>
#define T 7
int main(void) {
    int v[T] = {3, 12, 5, 1, 8, 9, 2};
    //1. ordenar na ordem crescente
    for (int i = 0; i < T; i++) {
        for (int j = i+1; j < T; j++) {
            if (v[i]>v[j]) {
                int troca = v[i];
                v[i] = v[j];
                v[j] = troca;
            }
        }
    }
    //2. apresentar os valores em tela
    for (int i = 0; i < T; i++) {
        printf("[%d ]", v[i]);
    }
    printf("\n");
    return 0;
}