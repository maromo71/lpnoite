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
    char *p_letra = str;
    while(*p_letra != '\0') {
        fputc(*p_letra, fp);
        p_letra++;
    }
    fputc('\n', fp); //pular uma linha
    fclose(fp); //fechar o arquivo
    return 0;
}
