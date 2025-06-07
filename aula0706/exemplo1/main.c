#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ch;
    //FILE * p_arq = fopen("C:\\dados\\frutas.txt", "r");
    FILE * p_arq = fopen("/Users/marcosmoraes/arquivos/frutas.txt", "r");
    FILE * p_out = fopen("/Users/marcosmoraes/arquivos/copia.txt", "w");
    if (p_arq == NULL || p_out == NULL) {
        printf("Erro ao abrir/criar o arquivo\n");
        exit(1);
    }
    printf("Arquivo aberto com sucesso!\n");
    //rotina para ler arquivo caractere a carectere
    while ((ch = fgetc(p_arq)) != EOF) {
        putchar(ch);
        fputc(ch, p_out);
    }
    fclose(p_arq);
    fclose(p_out);
    return 0;
}