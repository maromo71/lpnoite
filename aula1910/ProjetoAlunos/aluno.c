//
// Created by memar on 19/10/2026.
//

#include "aluno.h"
#include <stdio.h>
#include <stdlib.h>

void inicializa() {
    for (int i = 0; i < MAX; i++) {
        v[i] = NULL;
    }
}

void ler_dados(int pos){
    if (v[pos] == NULL) {
        //alocar um dado referente a um aluno
        v[pos] = (p_aluno) malloc(sizeof(aluno));
        int c;
        while ((c = getchar()) != '\n');
        printf("Digite o nome do aluno: \n");
        gets(v[pos]->nome);
        while ((c = getchar()) != '\n');
        printf("Digite a matricula do aluno (int): ");
        scanf("%d", &v[pos]->matricula);
        while ((c = getchar()) != '\n');
        printf("Digite a telefone do aluno: ");
        gets(v[pos]->telefone);
        while ((c = getchar()) != '\n');
        printf("Digite o endreco do aluno: ");
        gets(v[pos]->endereco);
        while ((c = getchar()) != '\n');
        printf("Digite a nota do aluno: \n");
        scanf("%lf", &v[pos]->nota);
        printf("Aluno cadastrado com sucesso!\n");
    }
}
void imprimir_aluno(int pos) {
    if (v[pos]==NULL) {
        printf("Aluno nao econtrado\n");
        return;
    }
    printf("Nome do aluno: %s \n", v[pos]->nome);
    printf("Matricula do aluno: %d \n", v[pos]->matricula);
    printf("Endereco: %s \n", v[pos]->endereco);
    printf("Telefone: %s \n", v[pos]->telefone);
    printf("Nota: %.2lf \n", v[pos]->nota);
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
}

void imprimir_todos() {
    for (int i=0; i<MAX; i++) {
        if (v[i] != NULL) {
            imprimir_aluno(i);
        }else {
            return;
        }
    }
}