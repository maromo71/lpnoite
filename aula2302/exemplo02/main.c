#include <stdio.h>

int main(void) {
    char l1, l2;
    fflush(stdin);
    printf("Digite um letra: \n");
    scanf("%c", &l1);

    fflush(stdin);
    printf("Digite outra letra: \n");
    l2 = getchar();

    printf("Primeira letra: %c\n", l1);
    printf("Segunda letra: %c\n", l2);
    return 0;
}