#include <stdio.h>
#include "aluno.h"

p_aluno v[MAX];

int main(void)
{
    //inicializar
    inicializa();
    int pos = 0; //posicao inicial do vetor
    int opc = 0; //escolha do usuario
    int posDesejada = 0;
    int raProcurado = 0;
    do {
        printf("Menu Principal \n");
        printf("1. Cadastra Aluno \n");
        printf("2. Mostrar Aluno Unico \n");
        printf("3. Mostrar todos os Alunos \n");
        printf("4. Encontrar por RA \n");
        printf("9. Sair \n");
        scanf("%d", &opc);
        switch (opc) {
            case 1:
                ler_dados(pos);
                pos++; //proxima posicao
                break;
            case 2:
                printf("Digite a posicao desejada: \n");
                scanf("%d", &posDesejada);
                imprimir_unico(posDesejada);
                break;
            case 3:
                imprimir_tudo();
                break;
            case 4:
                printf("Digite o numero de matricula desejado: \n");
                scanf("%d", &raProcurado);
                procurar_aluno(raProcurado);
                break;
            case 9:
                printf("Fim do programa\n");
                break;
            default:
                printf("Opcao invalida\n");
        }
    }while(opc != 9);
    return 0;
}
