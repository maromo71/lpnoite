#include <stdio.h>
typedef struct {
    char nome[50];
    float nota1;
    float nota2;
    float media;
}Aluno;

int main(void) {
    Aluno aluno;
    FILE * p_notas = NULL;
    p_notas = fopen("c:\\dados\\notas.txt", "r");
    if (p_notas == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return -1;
    }
    char linha[256];
    printf("=======================================     NOTAS DOS ALUNOS    ================================\n");
    while (fgets(linha, sizeof(linha), p_notas)!=NULL) {
        if (sscanf(linha, "%49[^;];%f;%f", aluno.nome, &aluno.nota1, &aluno.nota2)==3) {
            aluno.media = (aluno.nota1 + aluno.nota2)/2;
            if (aluno.media >= 6) {
                printf("Nome: %-20s | Nota 1: %5.2f | Nota 2: %5.2f | Media: %5.2f | Situacao: Aprovado\n",
                    aluno.nome, aluno.nota1, aluno.nota2, aluno.media);
            }else {
                printf("Nome: %-20s | Nota 1: %5.2f | Nota 2: %5.2f | Media: %5.2f | Situacao: Reprovado\n",
                    aluno.nome, aluno.nota1, aluno.nota2, aluno.media);
            }
        }
    }
    printf("================================================================================================\n");
    fclose(p_notas);


    return 0;
}