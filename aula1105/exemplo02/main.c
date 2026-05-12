#include <stdio.h>

/**
 * Programa que efetua abertura de arquivos
 * ja existente no modo de leitura
 * @return 0 se a saida estiver correta
 */
int main(void) {
    FILE * p_arq = fopen("C:\\temp\\arquivo.txt", "r");
    if (p_arq == NULL) {
        printf("Erro na abertura. Arquivo nao existe\n");
        printf("Fim do progrma");
        return 1;
    }
    printf("Arquivo aberto com sucesso\n");
    fclose(p_arq);
    return 0;
}
