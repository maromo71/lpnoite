#include <stdio.h>

int main(void) {
    FILE *fp = fopen("c:\\dados\\frutas.txt", "a");
    if(fp == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return -1;
    }
    char ch;
    char str[100];
    fflush(stdin);
    printf("Digite uma fruta: \n");
    scanf("%[^\n]", str);
    //escrever a fruta no final do arquivo
    fprintf(fp, "%s\n", str);
    fclose(fp); //fechar o arquivo
    return 0;
}