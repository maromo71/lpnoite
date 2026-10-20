#include <stdio.h>
#include "aluno.h"
#include <stdlib.h>

p_aluno v[MAX];

int montar_menu();

int main(void) {
    int pos = 0;
    int opcao  = 0;

    do {
        opcao = montar_menu();
        switch (opcao) {
            case 1:
                ler_dados(pos);
                pos++;
                break;
            case 2:
                int x;
                printf("Digite a posicao desejada: \n");
                scanf("%d", &x);
                imprimir_aluno(x);
                break;
            case 3:
                imprimir_todos();
                break;
            case 9:
                printf("Fim do programa");
            default:
                printf("Opcao invalida!\n");
                break;
        }
    }while (opcao != 9);
    return 0;
}

int montar_menu() {
    int opc;
    printf("Cadastro de alunos da Fatec\n");
    printf("1. Cadastrar aluno\n");
    printf("2. Mostrar dados de aluno\n");
    printf("3. Imprimir lista de todos os alunos\n");
    printf("9. SAIR \n");
    printf("Escolha sua opcao: ");
    scanf("%d", &opc);
    return opc;
}
