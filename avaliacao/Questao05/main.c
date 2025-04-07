#include <stdio.h>

int main(void) {
    int m[5][5];
    //logica para preencher a matriz
    for (int i = 0; i < 5; i++) {
        for (int j=0; j<5 ; j++) {
            if (i==j){ //mesma linha e coluna (diagonal principal)
                m[i][j] = 0;
            }else if (i < j) {
                m[i][j] = 1;
            }else {
                m[i][j] = -1;
            }
        }
    }
    //exibindo a matriz
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("[%3d] ", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}