#include <stdio.h>

int main(void) {
    char x, y, lixo;

    printf("Digite a primeira letra: \n");
    fflush(stdin);
    scanf("%c", &x);

    printf("Digite a segunda letra: \n");
    fflush(stdin);
    scanf(" %c", &y);
    printf("Letras digitadas: y = %c e  x = %c\n", y, x);
    return 0;
}