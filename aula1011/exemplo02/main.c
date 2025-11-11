#include <stdio.h>

int main(void) {
    FILE * p_arq = NULL;
    //Abrindo no modo de leitura
    p_arq = fopen("c:\\dados\\frutas.txt", "r");
    if (p_arq == NULL) {
        printf("Erro ao ler o arquivo \n");
        return -1;
    }
    printf("Arquivo aberto no modo de leitura\n");
    printf("Conteudo do arquivo: \n");
    printf("====================\n");
    int ch;
    while( (ch=fgetc(p_arq))!=EOF ) {
        putchar(ch);
    }
    printf("====================\n");
    fclose(p_arq); // fechar com seguranca um arquivo
    //Abrir novamente o arquivo para anexar (append) "a"
    p_arq = fopen("c:\\dados\\frutas.txt", "a");
    if (p_arq == NULL) {
        printf("Erro ao ler o arquivo \n");
        return -1;
    }
    char fruta[20];
    fflush(stdin);
    printf("Digite o nome de uma fruta: ");
    gets(fruta);
    fprintf(p_arq, "%s\n", fruta);
    fclose(p_arq);
    return 0;
}
