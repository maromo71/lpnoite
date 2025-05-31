#include <stdio.h>
#include "aluno.h"

void exibirMenu();

void pausarParaContinuar();

int main(void)
{
    int opcao = 0;
    inicializaAlunos(); //nao pode esquecer
    printf("Bem vindo ao sistema de gerenciamento de alunos\n");
    printf("O sistema foi inicializado e %d vagas estao disponiveis\n", MAX_ALUNOS);
    do {
        exibirMenu();
        scanf("%d", &opcao);
        switch (opcao) {
        case 1:
            cadastrarAluno();
            break;
        case 2:
            consultarAlunoMatricula();
            break;
        case 3:
            consularAlunoNome();
            break;
        case 4:
            alterarDadosAluno();
            break;
        case 5:
            imprimirUmAluno();
            break;
        case 6:
            imprimirTodosAlunos();
            break;
        case 9:
            printf("Encerrando o sistema.. Ate logo! \n");
            break;
        default:
            printf("Opcao invalida!\n");

        }
        if (opcao !=9) {
            pausarParaContinuar();
        }
    }while (opcao!=9);
    printf("Sistema encerrado\n");
    return 0;
}

void exibirMenu()
{
    printf("\n=======SISTEMA DE GERENCIAMENTO DE ALUNOS ======\n");
    printf("1.. Cadastrar Novo Aluno\n");
    printf("2.. Consultar Aluno Por Matricula\n");
    printf("3.. Consultar Aluno por Nome\n");
    printf("4.. Alterar dados do aluno\n");
    printf("5.. Imprimir Dados de um Aluno Especifico\n");
    printf("6.. Imprimir Lista de Todos os alunos\n");
    printf("9.. SAIR DO SISTEMA\n");
    printf("Escolha sua opcao: ");

}

void pausarParaContinuar()
{
    printf("Pressione ENTER para continuar..\n");
    getchar();
}