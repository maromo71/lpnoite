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
    if (turma == NULL) {
        printf("Erro: A turma nao foi inicializada \n");
        return;
    }
    //Verificar se a turma esta cheia
    if (turma->total_alunos == MAX_ALUNOS) {
        printf("Erro: Turma cheia! Nao eh possivel cadastrar\n");
        return;
    }
    //Alocar memoria para o novo aluno
    Aluno* novo_aluno = (Aluno*) malloc(sizeof(Aluno));
    printf("\n--- Cadastrar Novo Aluno ---\n");
    int matricula_temp;
    while (1) { //verificar se a matricula ja nao tinha sido usada
        printf("Digite a matricula: ");
        scanf("%d", &matricula_temp);
        fflush(stdin);
        if (buscar_aluno(turma, matricula_temp) == NULL) {
            novo_aluno->matricula = matricula_temp;
            break;
        } else {
            printf("Erro: Matricula %d ja cadastrada. Tente Outra",
                matricula_temp);
        }
    }
    fflush(stdin);
    printf("Digite o nome: ");
    gets(novo_aluno->nome);
    fflush(stdin);
    printf("Digite o curso: ");
    gets(novo_aluno->curso);
    fflush(stdin);
    printf("Digite a idade: ");
    scanf("%d", &novo_aluno->idade);
    //Adiciona o novo aluno ao vetor de ponteiros
    turma->alunos[turma->total_alunos] = novo_aluno;
    turma->total_alunos++;
    printf("--- Aluno '%s' cadastrado com sucesso \n",
        novo_aluno->nome);
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
    if (aluno == NULL) {
        printf("Erro: Aluno nulo \n");
        return;
    }
    printf("A matricula nao pode ser alterada \n");
    printf("Digite o NOVO nome: \n");
    fflush(stdin);
    gets(aluno->nome);

    printf("Digite o NOVO curso: \n");
    fflush(stdin);
    gets(aluno->curso);

    printf("Digite a NOVA idade: \n");
    fflush(stdin);
    scanf("%d", &aluno->idade);

    printf("\n--- Dados alterados com sucesso ---\n");
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
        printf("Nenhum aluno cadastrado\n");
        return;
    }
    printf("\n\nLista de Todos os Alunos Cadastrados: (%d) Alunos",
        turma->total_alunos);
    for (int i=0; i<turma->total_alunos; i++) {
        exibir_aluno(turma->alunos[i]);
    }
}