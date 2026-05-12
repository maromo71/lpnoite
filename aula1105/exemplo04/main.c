#include <stdio.h>

/**
 * Programa que efetua abertura de arquivos
 * ja existente no modo de anexacao (append).
 * recebe uma nova fruta, coloca no arquivo.
 * E imprime na tela o seu novo conteudo
 * @return 0 se a saida estiver correta
 */
int main(void) {
    int ch;
    FILE * p_arq = fopen("C:\\temp\\arquivo.txt", "a");
    if (p_arq == NULL) {
        printf("Erro na abertura. Arquivo nao existe\n");
        printf("Fim do progrma");
        return 1;
    }
    printf("Arquivo aberto com sucesso\n");
    //adicionar uma nova fruta no arquivo
    char fruta[51];
    printf("Digite o nome da fruta: \n");
    gets(fruta);
    fseek(p_arq, 0, SEEK_END);
    for (int i=0; i<50; i++) {
        if (fruta[i]=='\0') break;
        fputc(fruta[i], p_arq);
    }
    fputc('\n', p_arq);
    fclose(p_arq);
    return 0;
}