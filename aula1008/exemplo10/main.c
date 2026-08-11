#include <stdio.h>

int main(void) {
    int base, pot, resultado=1;
    printf("Digite a base: \n");
    scanf("%d", &base);
    printf("Digite a potencia: \n");
    scanf("%d", &pot);
    for (int i=1; i<=pot; i++) {
        resultado *= base;
    }
    printf("%d elevado a %d = %d\n", base, pot, resultado);
    return 0;
}
