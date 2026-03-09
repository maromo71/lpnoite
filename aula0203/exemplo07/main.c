#include <stdio.h>
#include <string.h>
int main(void) {
    char palavra1[51];
    char palavra2[51];
    fflush(stdin);
    printf("Digite a palavra1: ");
    scanf("%s", palavra1);

    fflush(stdin);
    printf("Digite a palavra2: ");
    scanf("%s", palavra2);

    printf("Palavra 1: %s \nPalavra 2: %s\n", palavra1, palavra2);
    char juntar[101]={'\0'};
    strcpy(juntar, palavra1);
    strcat(juntar, " ");
    strcat(juntar, palavra2);
    printf("Palavra completa: %s \n", juntar);
    printf("Qtde de caracteres: %d \n", strlen(juntar)); //tam em caracteres
    return 0;
}