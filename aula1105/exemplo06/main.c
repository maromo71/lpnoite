#include <stdio.h>

/**
 * Programa que efetua abertura de um arquivo de notas
 * extrai os dados de cada aluno, calcula sua media
 * e apresenta a situcao do aluno de acordo com a media
 * apurada em um novo arquivo chamado resultado.
 * @return 0 se a saida estiver correta
 */
int main(void) {
    int ch;
    int codigo;
    char nome[51];
    double nota1, nota2;
    FILE * p_arq = fopen("C:\\temp\\notas.txt", "r");
    FILE * p_dest = fopen("C:\\temp\\resultado.txt", "w");
    if (p_arq == NULL) {
        printf("Erro na abertura de arquivos\n");
        printf("Fim do progrma");
        return 1;
    }
    while (fscanf(p_arq, "%d;%50[^;];%lf;%lf",
        &codigo, nome, &nota1, &nota2) != EOF) {
        double media = (nota1 + nota2) / 2;
        if (media >= 6) {
            fprintf(p_dest,"Aluno RM %d | Nome: %-35s | Media: %.2lf | Aprovado\n",
                codigo, nome, media);
        }else {
            fprintf(p_dest,"Aluno RM %d | Nome: %-35s | Media: %.2lf | Reprovado\n",
                codigo, nome, media);
        }
    }

    fclose(p_arq);
    fclose(p_dest);
    return 0;
}