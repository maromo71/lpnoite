#include <stdio.h>

int main(void) {
    FILE * p_in = NULL;
    FILE * p_out = NULL;
    p_in = fopen("C:\\dados\\frutas.txt", "r");
    if(p_in == NULL) {
        printf("Erro na abertura do arquivo\n");
        return -1;
    }
    p_out = fopen("C:\\dados\\copia.txt", "w");
    if(p_out == NULL) {
        printf("Erro na criacao do arquivo\n");
        return -1;
    }
    int ch;
    while ((ch = fgetc(p_in)) != EOF) {
        fputc(ch, p_out);
    }
    fclose(p_in);
    fclose(p_out);
    printf("Arquivo copiado com sucesso \n");
    return 0;
}