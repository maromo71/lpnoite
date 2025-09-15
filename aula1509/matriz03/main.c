#include <stdio.h>

int main(void) {
    int matriz[3][3] = {
        {5, 1, 4},
        {3, 7, 2},
        {5, 2, 1}
    };
    //transpor a matriz
    int transposta[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }
    //imprimir
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("[%d ]", transposta[i][j]);
        }
        printf("\n");
    }
    return 0;
}