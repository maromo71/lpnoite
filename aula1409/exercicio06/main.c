#include <stdio.h>
void imprimir(int * p_v, int tam);
int main(void) {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    imprimir(matriz, 9);

    return 0;
}

void imprimir(int * p_v, int tam) {
    for (int i = 0; i < tam; i++) {
        printf("%d ", *p_v++);
    }
}