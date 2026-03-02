#include <stdio.h>

int main(void) {
    int b;
    printf("Digite um numero: ");
    scanf("%d", &b);

    if (b)  {
        printf("Verdadeiro\n");
    }else {
        printf("Falso\n");
    }


    return 0;
}