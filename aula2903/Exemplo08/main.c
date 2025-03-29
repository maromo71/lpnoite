#include <stdio.h>
#include <string.h>
int main(void) {
    char palavra1[] = "Paulo";
    char palavra2[] = "Ana";
    if (strcasecmp(palavra1, palavra2)==0) {
        printf("Palavras significativamente sao iguais\n");
    }else {
        printf("Palavras diferentes\n");
    }
    printf("%d \n", strcasecmp(palavra1, palavra2));
    return 0;
}