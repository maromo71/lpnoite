#include "Aluno.h"

#include <stdio.h>
#include <stdlib.h>


Turma* criar_turma() {
    //Aloca memoria para a estrutura principal
    Turma* turma = (Turma*) malloc(sizeof(Turma));
    if (turma == NULL) {
        perror("Erro ao alocar memoria\n");
        return NULL;
    }
    turma->total_alunos = 0;
    for (int i=0; i<MAX_ALUNOS; i++) {
        turma->alunos[i] = NULL;
    }
    return turma;
}

void liberar_turma(Turma* turma) {
    if (turma == NULL) {
        return;
    }
    for (int i=0; i<turma->total_alunos; i++) {
        if (turma->alunos[i] != NULL) {
            free(turma->alunos[i]);
        }
    }
    free(turma);
}

void cadastrar_aluno(Turma* turma) {

}

Aluno* buscar_aluno(Turma* turma, int matricula) {
    if (turma == NULL) {
        return NULL;
    }
    for (int i=0; i<turma->total_alunos; i++) {
        if (matricula == turma->alunos[i]->matricula) {
            return turma->alunos[i];
        }
    }
    printf("Aluno nao encontrado \n");
    return NULL;
}

void alterar_dados_aluno(Aluno* aluno) {

}

void exibir_aluno(const Aluno* aluno) {
    if (aluno == NULL) {
        printf("Aluno nao encontrado ou nulo\n");
        return;
    }
    printf("========================================\n");
    printf("Matricula: %d \n", aluno->matricula);
    printf("Nome: %s \n", aluno->nome);
    printf("Curso: %s \n", aluno->curso);
    printf("Idade: %d \n", aluno->idade);
    printf("========================================\n");
}

void exibir_lista_alunos(const Turma* turma) {
    if (turma == NULL || turma->total_alunos == 0) {
        printf("Nenhum aluno cadastrado\n")
        return;
    }
    printf("\n\nLista de Todos os Alunos Cadastrados: (%d) Alunos",
        turma->total_alunos);
    for (int i=0; i<turma->total_alunos; i++) {
        exibir_aluno(turma->alunos[i]);
    }
}