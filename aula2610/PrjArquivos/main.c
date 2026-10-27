#include <stdio.h>

int main(void) {
    //Trabalhando com arquivos
    FILE * p_arq = NULL; //ponteiro para o tipo FILE
    p_arq = fopen("c:\\arquivos\\frutas.txt", "r"); //Abrir
    if (p_arq == NULL) { //Validacao
        printf("Erro na leitura. Arquivo inexistente.\n");
        return 1;
    }else {
        char letra;
        printf("Arquivo aberto\n");
        printf("Imprimindo lista de frutas.\n");
        while ((letra = fgetc(p_arq)) != EOF) putchar(letra);
        printf("\n===========================\n");
    }
    //Fechar o arquivo
    fclose(p_arq);
    printf("Arquivo fechado\n");
    return 0;
}
