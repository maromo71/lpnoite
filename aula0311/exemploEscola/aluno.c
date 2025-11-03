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
    fflush(stdin);
    printf("Digite o nome do aluno: \n");
    gets(v[i]->nome);
    fflush(stdin);
    printf("Digite o num. da matricula: \n");
    scanf("%d", &v[i]->matricula);
    fflush(stdin);
    printf("Digite o endereco do aluno: \n");
    gets(v[i]->endereco);
    fflush(stdin);
    printf("Digite o telefone do aluno: \n");
    gets(v[i]->telefone);
    fflush(stdin);
    printf("Digite a nota do aluno: \n");
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
        printf("Posicao nao preenchida\n")
    }
}

void imprimir_tudo() {
    for (int i = 0; i < MAX; i++) {
        if (v[i]!=NULL) {
            imprimir_unico(i);
        }
    }
}