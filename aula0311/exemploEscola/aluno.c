#include "aluno.h"
#include <stdio.h>
#include <stdlib.h>

void inicializar() {
    for (int i = 0; i < MAX; i++) {
        v[i] = NULL;
    }
}

void ler_dados(int i) {
    if (v[i] != NULL) {
        printf("Posicao ja preenchida \n");
        return;
    }
    //alocar o dado
    v[i] = (p_aluno) malloc(sizeof(struct Aluno));

    printf("Digite o nome do aluno: \n");
    fflush(stdin);
    gets(v[i]->nome);

    printf("Digite o num. da matricula: \n");
    fflush(stdin);
    scanf("%d", &v[i]->matricula);

    printf("Digite o endereco do aluno: \n");
    fflush(stdin);
    gets(v[i]->endereco);

    printf("Digite o telefone do aluno: \n");
    fflush(stdin);
    gets(v[i]->telefone);

    printf("Digite a nota do aluno: \n");
    fflush(stdin);
    scanf("%lf", &v[i]->nota);
    fflush(stdin);
    printf("Aluno matriculado com sucesso.\n");
}

void imprimir_unico(int i) {
    if (v[i]!=NULL) {
        printf("Dados do Aluno \n");
        printf("Matricula do aluno: %d \n", v[i]->matricula);
        printf("Nome: %s \n", v[i]->nome);
        printf("Endereco: %s \n", v[i]->endereco);
        printf("Telefone: %s \n", v[i]->telefone);
        printf("Nota do aluno: %.lf \n", v[i]->nota);
    }else {
        printf("Posicao nao preenchida\n");
    }
}

void imprimir_tudo() {
    for (int i = 0; i < MAX; i++) {
        if (v[i]!=NULL) {
            imprimir_unico(i);
        }
    }
}

int procurar_aluno(int matr) {
    for (int i=0; i < MAX; i++) {
        if (v[i]!=NULL && v[i]->matricula == matr) {
            return i;
        }
    }
    printf("Matricula nao encontrada \n");
    return -1;
}

void alterar_dados(int i) {
    printf("Digite o novos dados conforme solicitado \n");
    fflush(stdin);
    printf("Digite o NOVO nome: \n");
    gets(v[i]->nome);
    fflush(stdin);
    printf("Digite o NOVO endereco do aluno: \n");
    gets(v[i]->endereco);
    fflush(stdin);
    printf("Digite o NOVO telefone do aluno: \n");
    gets(v[i]->telefone);
    fflush(stdin);
    printf("Digite a NOVA nota do aluno: \n");
    scanf("%lf", &v[i]->nota);
    fflush(stdin);
    printf("Dados alterados com sucesso \n");
}