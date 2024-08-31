#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char palavra1[50] ={'\0'};
    char palavra2[51] ={'\0'};
    printf("Comparação de strings\n");
    printf("Digite a primeira palavra: \n");
    fgets(palavra1, sizeof(palavra1), stdin);
    palavra1[strlen(palavra1)-1] = '\0';

    printf("Digite a segunda palavra: \n");
    fgets(palavra2, sizeof(palavra2), stdin);
    palavra2[strlen(palavra2)-1] = '\0';
    if(strcmp(palavra1, palavra2)==0){
        printf("palavras sao iguais\n");
    }else{
        printf("palavras diferentes\n");
        if(strcmp(palavra1, palavra2)<0){
            printf("Estao em ordem alfabetica\n");
        }else{
            printf("Nao estao em ordem alfabetica\n");
        }
    }
    return 0;
}
