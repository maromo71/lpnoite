#include <stdio.h>
#include <string.h>
int main(void) {
    char str1[31], str2[31];
    printf("Digite a prim. string \n");
    gets(str1);

    fflush(stdin);
    printf("Digite a segunda string \n");
    gets(str2);

    if (strcasecmp(str1, str2) == 0) {
        printf("Sao textos iguais \n");
    }else {
        printf("Nao sao textos iguais \n");
    }
    return 0;
}