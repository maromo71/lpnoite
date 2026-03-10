#include <stdio.h>

int main(void) {
    int matriz[7][7]={{0}};
    //gerando identidade
    for(int i=0;i<7;i++) {
        matriz[i][i] = 1;
    }
    //imprimindo a matriz
    for(int i=0;i<7;i++) {
        for(int j=0;j<7;j++) {
            printf("[%3d]",matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}