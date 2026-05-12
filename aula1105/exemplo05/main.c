#include <stdio.h>

/**
 * Programa que efetua abertura de dois arquivos
 * um ja existente no modo de leitura e outro
 * no mode de escrita. O segundo deve ser uma copia
 * fiel do primeiro
 * @return 0 se a saida estiver correta
 */
int main(void) {
    int ch;
    FILE * p_in = fopen("C:\\temp\\arquivo.txt", "r");
    FILE * p_out = fopen("C:\\temp\\copia.txt", "w");
    if (p_in == NULL || p_out == NULL) {
        printf("Erro na abertura de arquivos\n");
        printf("Fim do progrma");
        return 1;
    }
    while ((ch = fgetc(p_in)) != EOF) fputc(ch, p_out);
    printf("Copia efetuada com sucesso.\n");
    fclose(p_in);
    fclose(p_out);
    return 0;
}