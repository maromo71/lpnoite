#include <stdio.h>

int main(void) {
    FILE * f_in;
    FILE * f_out;
    f_in = fopen("c:\\arquivos\\frutas.txt", "r");
    f_out = fopen("c:\\arquivos\\copia.txt", "w");
    if (f_in == NULL || f_out == NULL) {
        printf("Erro na abertura de arquivos\n");
        return 1;
    }
    //Ler o arquivo frutas.txt ate o final
    char letra;
    while ((letra = fgetc(f_in)) != EOF) {
        fputc(letra, f_out);
    }
    //a mensagem de sucesso e fechar os arquivos
    printf("Arquivo copiado com sucesso\n");
    fclose(f_in);
    fclose(f_out);
    return 0;
}
