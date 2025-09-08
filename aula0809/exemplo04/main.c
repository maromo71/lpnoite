#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define D 5
int main(void) {
    int matriz[D][D] = {{0}};
    srand(time(NULL));
    for (int i = 0; i < D; i++) {
        for (int j = 0; j <= i; j++) {
            matriz[i][j]= (rand()%10) +1;
        }
    }
    for (int i = 0; i < D; i++) {
        for (int j = 0; j < D; j++) {
            printf("[%2d] ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}