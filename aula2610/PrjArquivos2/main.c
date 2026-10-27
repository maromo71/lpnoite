#include <stdio.h>

int main(void) {
    FILE * p_arq = fopen("C:\\arquivos\\frutas.txt", "a");
    int resposta = 0;
    char fruta[51];

    while (resposta != 1) {
        getchar(); // fflush(stdin)
        printf("Digite a fruta a ser adicionada: ");
        gets(fruta);
        //colocar o string dentro do arquivo frutas.txt
        fprintf(p_arq, "%s\n", fruta);
        getchar();
        printf("Digite 1 para encerrar, ou 0 para continuar\n");
        scanf("%d", &resposta);
    }

    printf("Fruta(s) adicionada(s)\n");
    fclose(p_arq);
    return 0;
}
