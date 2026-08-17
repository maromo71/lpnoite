#include <stdio.h>

int main(void) {
    //matriz de 3x3 de caracteres
    char velha[3][3] = {{0}};
    velha[0][0] = 'X';
    velha[0][1] = '0';
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            printf("[%c] ", velha[i][j]);
        }
        printf("\n"); //pula linha antes do prox (i)
    }
    return 0;
}
