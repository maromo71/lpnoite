#ifndef ALUNO_H
#define ALUNO_H

typedef struct {
    int matricula;
    char nome[100];
    char curso[50];
    int idade;
}Aluno;

#define MAX_ALUNOS 100

typedef struct {
    Aluno* alunos[MAX_ALUNOS];
    int total_alunos;
}Turma;

Turma* criar_turma();

void liberar_turma(Turma* turma);

void cadastrar_aluno(Turma* turma);

Aluno* buscar_aluno(Turma* turma, int matricula);

void alterar_dados_aluno(Aluno* aluno);

void exibir_aluno(const Aluno* aluno);

void exibir_lista_alunos(const Turma* turma);

#endif
