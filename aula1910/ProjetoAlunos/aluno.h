//
// Created by memar on 19/10/2026.
//

#ifndef ALUNO_H
#define ALUNO_H

#define MAX 100
typedef struct Aluno {
    char nome[81];
    int matricula;
    char endereco[121];
    char telefone[21];
    double nota;
}aluno;

typedef aluno * p_aluno;

extern p_aluno v[MAX];

//funcionalidades
void inicializa();

void ler_dados(int pos);

void imprimir_aluno(int pos);

void imprimir_todos();

#endif //ALUNO_H
