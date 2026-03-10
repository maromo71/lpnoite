#include <stdio.h>

int main(void) {
    int ma[4][2];
    int mb[4][2];
    int mc[4][2];
    //ler a matriz ma
    printf("Digite oito valores: \n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &ma[i][j]);
        }
    }
    //ler a matriz mb
    printf("Digite oito valores: \n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &mb[i][j]);
        }
    }
    //matriz mc soma de ma com mb
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            mc[i][j] = ma[i][j] + mb[i][j];
        }
    }
    printf("Apresentando cada matriz: \n");
    printf("MA\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            printf("[%3d ]", ma[i][j]);
        }
        printf("\n");
    }
    printf("MB\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            printf("[%3d ]", mb[i][j]);
        }
        printf("\n");
    }
    printf("MC\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            printf("[%3d ]", mc[i][j]);
        }
        printf("\n");
    }
    return 0;
}