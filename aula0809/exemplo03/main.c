#include <stdio.h>
#define D 10
int main(void) {
    int matriz[D][D]={{0}};
    for (int x = 0; x < D; x++) {
        matriz[x][x] = 1;
    }
    for (int i =0; i < D; i++) {
        for (int j = 0; j < D; j++) {
            printf("[%d ] ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}