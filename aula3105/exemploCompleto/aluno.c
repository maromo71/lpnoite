//
// Created by Marcos Moraes on 31/05/25.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "aluno.h"
//funcoes auxiliares para limpar buffer, remover quebra de linha
void limparBufferEntrada()
{
    int c;
    while ( (c=getchar()) != '\n' && c !=EOF);
}

void removerNovaLinha(char * str)
{
    size_t len = strlen(str);
    if (len > 0 && str[len-1] == '\n') {
        str[len-1] = '\0';
    }
}

void _exibirDadosAlunos(aluno * p_a)
{
    if (p_a == NULL) {
        printf("Aluno nao existe\n");
        return;
    }
    printf("\n==============================\n");
    printf("Matricula do Aluno: %d \n", p_a->matricula);
    printf("Nome do Aluno: %s \n", p_a->nome);
    printf("Nome do curso: %s \n", p_a->curso);
    printf("Periodo: %d \n", p_a->periodo);
    printf("==============================\n");
}
//prototipo das funcoes
//inicializar o vetor com NULL
void inicializaAlunos()
{
    //varrer o vetor e colocar null em todas as posicoes
    for (int i=0; i<MAX_ALUNOS; i++) {
        alunos[i] = NULL;
    }
}

//cadastrar um novo aluno.
void cadastrarAluno()
{

    int posicao = -1;
    //procurar por um espaco livre no vetor de alunos
    for (int i = 0; i<MAX_ALUNOS; i++) {
        if (alunos[i] == NULL) {
            posicao = i;
            break;
        }
    }
    if (posicao == -1) {
        printf("Impossivel cadastrar mais alunos\n");
        return;
    }
    //cadastrar o aluno efetivamente
    //alocar um espaco na memoria
    alunos[posicao] = (aluno *)malloc(sizeof(aluno));
    //ler os dados
    printf("Digite a matricula do aluno: \n");
    scanf("%d", &alunos[posicao]->matricula);
    limparBufferEntrada();
    printf("Digite o nome do aluno: \n");
    fgets(alunos[posicao]->nome, MAX_NOME,stdin);
    removerNovaLinha(alunos[posicao]->nome);
    printf("Digite o nome do curso do aluno: \n");
    fgets(alunos[posicao]->curso, MAX_CURSO,stdin);
    removerNovaLinha(alunos[posicao]->curso);

    printf("Digite o periodo de matricula do aluno: \n");
    scanf("%d", &alunos[posicao]->periodo);
    limparBufferEntrada();
    printf("Aluno cadastrado com sucesso\n");
}

//consultar aluno por matricula
void consultarAlunoMatricula()
{
    int matriculaBuscada;
    int encontrado = 0;
    printf("Digite a matricula a ser encontrada: \n");
    scanf("%d", &matriculaBuscada);
    limparBufferEntrada();
    for (int i=0; i<MAX_ALUNOS; i++) {
        if (alunos[i] != NULL) {
            if (matriculaBuscada == alunos[i]->matricula) {
                encontrado = 1;
                printf("Aluno encontrado \n");
                printf("Dados do Aluno: ");
                _exibirDadosAlunos(alunos[i]);
                break;
            }
        }
    }
    if (!encontrado) {
        printf("Aluno nao encontrado\n");
    }
}

//consultar aluno por parte do nome
void consularAlunoNome()
{
    char nomeBuscado[MAX_NOME];
    int encontrados = 0;

    printf("Digite parte do nome a ser encontrado: \n");
    fgets(nomeBuscado, MAX_NOME,stdin);
    removerNovaLinha(nomeBuscado);
    if (strlen(nomeBuscado) == 0) {
        printf("Digite parte do nome novamente\n");
        return;
    }
    printf("Buscando por alunos com nome contendo: %s \n", nomeBuscado);
    for (int i=0; i<MAX_ALUNOS; i++) {
        if (alunos[i] != NULL && strstr(alunos[i]->nome, nomeBuscado) != NULL) {
            _exibirDadosAlunos(alunos[i]);
            encontrados++;
        }
    }
    if (!encontrados) {
        printf("Aluno nao encontrado\n");
    }else {
        printf("Alunos impressos: %d \n", encontrados);
    }
}

//rotina para alterar dados de um aluno
void alterarDadosAluno()
{
    int matriculaBuscada;
    int indiceAluno = -1;
    int periodoNovo;
    char stringDigitada[MAX_NOME];
    printf("Digite a matricula do aluno: \n");
    scanf("%d", &matriculaBuscada);
    limparBufferEntrada();
    //procurar pelo aluno da matricula
    for (int i=0; i<MAX_ALUNOS; i++) {
        if (alunos[i] != NULL && alunos[i]->matricula == matriculaBuscada) {
            indiceAluno = i;
            break;
        }
    }
    if (indiceAluno == -1) {
        printf("Aluno nao encontrado\n");
        return;
    }
    printf("\nAluno encontrado. Dados atuais: \n");
    _exibirDadosAlunos(alunos[indiceAluno]);

    printf("\nAlteracao Interativa. Tecle ENTER para manter inalterado\n");

    //1. alterar o nome
    printf("Nome atual: %s \n", alunos[indiceAluno]->nome);
    printf("Digite o novo nome: \n");
    fgets(stringDigitada, MAX_NOME,stdin);
    removerNovaLinha(stringDigitada);
    if (strlen(stringDigitada) > 0) {
        strcpy(alunos[indiceAluno]->nome, stringDigitada);
        printf("Alterado para: %s\n", alunos[indiceAluno]->nome);
    }else {
        printf("Nome mantido: %s\n", alunos[indiceAluno]->nome);
    }

    //2. alterar o curso
    printf("Nome do curso atual: %s \n", alunos[indiceAluno]->curso);
    printf("Digite o novo nome do curso: \n");
    fgets(stringDigitada, MAX_NOME,stdin);
    removerNovaLinha(stringDigitada);
    if (strlen(stringDigitada) > 0) {
        strcpy(alunos[indiceAluno]->curso, stringDigitada);
        printf("Alterado para: %s\n", alunos[indiceAluno]->curso);
    }else {
        printf("Nome do curso mantido: %s\n", alunos[indiceAluno]->curso);
    }

    //3. alterar o periodo
    printf("Periodo atual: %d\n", alunos[indiceAluno]->periodo);
    printf("Digite o novo periodo: [1..6] \n");
    scanf("%d", &periodoNovo);
    if (periodoNovo >=1 && periodoNovo <= 6) {
        alunos[indiceAluno]->periodo = periodoNovo;
        printf("Periodo alterado para: %d\n", alunos[indiceAluno]->periodo);
    }else {
        printf("Periodo mantido: %d\n", alunos[indiceAluno]->periodo);
    }

    printf("\nAlteracao concluida\n");
    printf("Dados Finais: ");
    _exibirDadosAlunos(alunos[indiceAluno]);

}

//rotina para imprimir os dados de um aluno
void imprimirUmAluno()
{
    int matriculaBuscada;
    int encontrado = 0;
    printf("Digite a matricula a ser encontrada: \n");
    scanf("%d", &matriculaBuscada);
    limparBufferEntrada();
    for (int i=0; i<MAX_ALUNOS; i++) {
        if (alunos[i] != NULL) {
            if (matriculaBuscada ==alunos[i]->matricula) {
                encontrado = 1;
                _exibirDadosAlunos(alunos[i]);
                break;
            }
        }
    }
    if (!encontrado) {
        printf("Aluno nao encontrado\n");
    }
}

//rotina para imprimir todos os alunos cadastrados
void imprimirTodosAlunos()
{
    int contador = 0;
    printf("Dados de TODOS os ALUNOS \n");
    for (int i=0; i<MAX_ALUNOS; i++) {
        if (alunos[i] != NULL) {
            _exibirDadosAlunos(alunos[i]);
            contador++;
        }
    }
    printf("Total de alunos impressos: %d \n", contador);
}