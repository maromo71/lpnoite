#include <stdio.h>
#define T 5

void imprimirInvertido(int *p_v);
int main(void) {
    int vetor[] = {3, 5, 7, 9, 11};
    imprimirInvertido(vetor);
    return 0;
}
void imprimirInvertido(int *p_v) {
    for (int i = 0; i < T-1; i++) p_v++;
    for (int i = T-1; i>=0; i--) printf("%d\n", *p_v--);
}
