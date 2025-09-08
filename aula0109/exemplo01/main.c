#include <stdio.h>

int main(void) {
    int vetor[] = {7, 9, 3, 8};
    for (int i = 0; i<4; i++) {
        printf("[%d ] ", vetor[i]);
    }
    printf("\n\n");
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    for (int i=0; i<3; i++) {
        for (int j = 0; j<3; j++) {
            printf("[%d] ", matriz[i][j]);
        }
        printf("\n");
    }


    return 0;
}