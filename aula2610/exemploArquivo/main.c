#include <stdio.h>

int main(void) {
    FILE *fp = fopen("c:\\dados\\frutas.txt", "r");
    if(fp == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return -1;
    }
    char ch;
    //Ler caracter a caracter enquanto for dif de fim de arq (EOF)
    while((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp); //fechar o arquivo
    return 0;
}
