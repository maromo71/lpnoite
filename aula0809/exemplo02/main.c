#include <stdio.h>
#define L 4
#define C 3

int main(void) {
    int matriz[L][C] = {{0}};
    //Pedir para o usuario os dados da matriz
    int cont = 0;
    do {
        int num, tem = 0;
        printf("Digite o %do) numero: ", cont+1);
        scanf("%d", &num);
        for (int i = 0; i < L; i++) {
            for (int j = 0; j < C; j++) {
                if (num==matriz[i][j]) {
                    tem = 1;
                    break;
                }
            }
            if (tem == 1) break;
        }
        if (tem) {
            printf("Valor ja existente na matriz\n");
        }else {
            int div = cont / C;
            int resto = cont % C;
            matriz[div][resto] = num;
            cont++;
        }
    }while (cont < (L*C));
    //imprimir o vetor
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            printf("[%d ]", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}