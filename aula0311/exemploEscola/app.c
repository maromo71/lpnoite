#include <stdio.h>
#include "aluno.h"

p_aluno v[MAX];

int main(void) {
    int posicao = 0;
    int matr_proc = 0;
    int p = 0;
    int opcao;
    inicializar();
    do {
        printf("Menu Principal\n");
        printf("1 - Cadastrar Aluno \n");
        printf("2 - Listar Alunos \n");
        printf("3 - Dados de um Aluno \n");
        printf("4 - Alterar dados \n");
        printf("9 - Sair \n");
        printf("Digite sua opcao: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                fflush(stdin);
                ler_dados(posicao);
                posicao++;
                break;
            case 2:
                imprimir_tudo();
                break;
            case 3:
                printf("Digite a matricula do aluno procurado: \n");
                scanf("%d", &matr_proc);
                p = procurar_aluno(matr_proc);
                if (p==-1) {
                    break;
                }
                imprimir_unico(p);
                break;
            case 4:
                printf("Digite a matricula do aluno a alterar: \n");
                scanf("%d", &matr_proc);
                p = procurar_aluno(matr_proc);
                if (p==-1) {
                    break;
                }
                alterar_dados(p);
            case 9:
                printf("Finalizando o programa\n");
                break;
            default:
                printf("Opcao invalida\n");
        }
    } while (opcao != 9);
    return 0;
}
