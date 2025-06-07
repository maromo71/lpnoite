#include <stdio.h>
#include "aluno.h"
#include <stdlib.h>
#include <string.h>

FILE *abrirAquivo(const char *nomeArquivo)
{
    FILE *arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo\n");
        exit(1);
    }
    return arquivo;
}
int main(void)
{
    FILE * fp;
    char linha[256];
    Aluno alunoAtual;

    const char *caminhoArquivo = "/Users/marcosmoraes/projeto/notas.txt";

    fp = abrirAquivo(caminhoArquivo);

    printf("Processando alunos gravados em notas.txt\n");
    for (int i=0; i<87; i++) printf("=");
    printf("\n"); //pula uma linha
    while (fgets(linha, sizeof(linha), fp) != NULL) {
        if (processarLinha(linha, &alunoAtual)) {
            exibirResultadoAluno(&alunoAtual);
        }else {
            printf("Aviso: linha com formato incorreto. Verifique\n");
        }
    }
    //fechar o arquivo
    fclose(fp);
    for (int i=0; i<87; i++) printf("=");
    printf("\n"); //pula uma linha
    printf("Processamento concluido\n");

    return 0;
}