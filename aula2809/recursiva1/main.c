#include <stdio.h>
int potencia(int x, int y) {
    if (y == 1) return x;
    return x * potencia(x, y-1);
}
int main(void) {
    int base, expoente;
    printf("Digite a base: \n");
    scanf("%d", &base);
    printf("Digite o expoente: \n");
    scanf("%d", &expoente);
    printf("%d elevado a %d: %d\n",base, expoente, potencia(base, expoente));
    return 0;
}
