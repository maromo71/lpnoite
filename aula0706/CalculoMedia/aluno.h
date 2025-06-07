//
// Created by Marcos Moraes on 07/06/25.
//

#ifndef ALUNO_H
#define ALUNO_H

#include <stdio.h>

typedef struct {
    char nome[50];
    double nota1;
    double nota2;
    double media;
} Aluno;

int processarLinha(char *linha, Aluno *aluno);

void exibirResultadoAluno(const Aluno *aluno);

#endif //ALUNO_H
