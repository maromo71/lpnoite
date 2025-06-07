//
// Created by Marcos Moraes on 07/06/25.
//

#include "aluno.h"
#include <string.h>

int processarLinha(char *linha, Aluno *aluno)
{
    linha[strcspn(linha, "\n")] = 0;
    if (sscanf(linha, "%49[^;];%lf;%lf", aluno->nome, &aluno->nota1, &aluno->nota2) != 3) {
        return 0;
    }
    aluno->media = (aluno->nota1 + aluno->nota2) / 2;
}

void exibirResultadoAluno(const Aluno *aluno)
{
    if (aluno->media >=6) {
        printf("%-50s Media: %.2lf - Situacao: APROVADO\n", aluno->nome, aluno->media);
    }else {
        printf("%-50s Media: %.2lf - Situacao: REPROVADO\n", aluno->nome, aluno->media);
    }
}