#include <stdio.h>

int main(void) {
    int a, b;
    printf("Digite dois valores: \n");
    scanf("%d%d", &a, &b);
    int resultado = 0;
    if (b!=0)
      resultado = a / b;
    else {
        printf("Impossivel dividir por zero");
        return 1;
    }
     printf("Resultado: %d \n", resultado);
    return 0;
}