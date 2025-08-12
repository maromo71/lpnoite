#include <stdio.h>

int main(void)
{
    char letra1 = 'A';
    char letra2 = 65;
    letra2++;

    printf("As duas letras: %c e %c \n", letra1, letra2);
    //abecedário
    for (int i=letra1; i<=letra1+25; i++) {
        printf("%c ", i);
    }

    return 0;
}