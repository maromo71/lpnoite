#include <stdio.h>

int main(void) {
    int num=0;
    do {
        printf("Digite um numero > 30: ");
        scanf("%d", &num);
        if (num <= 30) printf("Numero invalido \n");
    }while (num <= 30);
    printf("Numero valido: %d\n", num);

    return 0;
}
