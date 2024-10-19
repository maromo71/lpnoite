#include "aluno.h"
#include <stdio.h>

void inicializa() {
    //varrer o vetor e colocar null em todas as posicoes
    for (int i = 0; i < MAX; i++) {
        v[i] = NULL;
    }
}
void ler_dados(int i) {
    if(v[i]!=NULL) {
        printf("Posicao ja preenhida\n");
        return;
    }
    v[i] =(p_aluno) malloc(sizeof(aluno));
    fflush(stdin);
    printf("Digite o nome do aluno: \n");
    scanf("%[^\n]", v[i]->nome);
    fflush(stdin);
    printf("Digite o ra do aluno: \n");
    scanf("%d", &v[i]->matricula);
    fflush(stdin);
    printf("Digite o endereco do aluno: \n");
    scanf("%[^\n]", v[i]->endereco);
    fflush(stdin);
    printf("Digite o telefone do aluno: \n");
    scanf("%[^\n]", v[i]->telefone);
    fflush(stdin);
    printf("Digite a nota do aluno: \n");
    scanf("%lf", &v[i]->nota);
    printf("Cadastrado com sucesso \n");
}
void imprimir_unico(int i) {

}
void imprimir_tudo() {

}