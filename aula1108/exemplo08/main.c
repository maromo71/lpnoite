#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char a, b;
    printf("Digite uma letra: \n");
    a = getchar();
    getchar();
    printf("Digite outra letra: \n");
    b = getchar();
    printf("%c\n", a);
    printf("%c\n", b);
    return 0;
}