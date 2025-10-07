#include <stdio.h>
void trocar(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}
int main(void) {
    int a, b;
    printf("Digite dois valores: \n");
    scanf("%d %d", &a, &b);
    trocar(&a, &b);

    printf("Valores trocados\n");
    printf("a: %d\nb: %d\n", a, b);
    return 0;
}