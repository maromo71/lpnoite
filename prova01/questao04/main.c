#include <stdio.h>
//Possivel solucao
int main(void) {
    int t;
    printf("Digite a dimensao: \n");
    scanf("%d", &t);
    int m[t][t];
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < t; j++) {
            if ((i + j) % 2 ==0) {
                m[i][j] = 1;
            }else {
                m[i][j] = 0;
            }
            printf("%d \t", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}