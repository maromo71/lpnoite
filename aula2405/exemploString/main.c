#include <stdio.h>
void imprimirDoisSentidos(char *p_str);
int main(void)
{
    imprimirDoisSentidos("Fui na feira hoje");
    return 0;
}

void imprimirDoisSentidos(char *p_str)
{
    char *p_inicio = p_str;
    while ( *p_str != '\0') {
        putchar(*p_str++);
    }
    p_str--;
    printf("\n");
    while (p_str >= p_inicio) {
        putchar(*p_str--);
    }
}