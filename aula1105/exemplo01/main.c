#include <stdio.h>

/**
 * Programa que efetua abertura de arquivos
 * @return 0 se a saida estiver correta
 */
int main(void) {
    FILE * p_arq = fopen("C:\\temp\\arquivo.txt", "w");
    if (p_arq == NULL) {
        printf("Erro na abertura\n");
        printf("Fim do progrma");
        return 1;
    }
    printf("Arquivo criado com sucesso\n");
    fclose(p_arq);
    return 0;
}
