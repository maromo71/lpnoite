#include <stdio.h>

/**
 * Programa que efetua abertura de arquivos
 * ja existente no modo de leitura. E imprime na tela
 * o seu conteudo
 * @return 0 se a saida estiver correta
 */
int main(void) {
    int ch;
    FILE * p_arq = fopen("C:\\temp\\arquivo.txt", "r");
    if (p_arq == NULL) {
        printf("Erro na abertura. Arquivo nao existe\n");
        printf("Fim do progrma");
        return 1;
    }
    printf("Arquivo aberto com sucesso\n");
    printf("Lendo arquivo char a char\n");
    while ((ch = fgetc(p_arq)) != EOF) {
        printf("%c", ch);
    }

    fclose(p_arq);
    return 0;
}