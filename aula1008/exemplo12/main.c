#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int c1, c2, c3;
    int totC1 = 0, totC2 = 0, totC3 = 0, totBrancos = 0, totNulo = 0, totTotal = 0;
    char nome1[51], nome2[51], nome3[51];
    //associar o candidato c1 ao nome1 e assim sucessivamente
    printf("Digite o codigo do candidato 1: \n");
    scanf("%d", &c1);
    fflush(stdin);
    printf("Digite o nome do candidato 1: \n");
    fgets(nome1, 51, stdin);

    printf("Digite o codigo do candidato 2: \n");
    scanf("%d", &c2);
    fflush(stdin);
    printf("Digite o nome do candidato 2: \n");
    fgets(nome2, 51, stdin);

    printf("Digite o codigo do candidato 3: \n");
    scanf("%d", &c3);
    fflush(stdin);
    printf("Digite o nome do candidato 3: \n");
    fgets(nome3, 51, stdin);

    int opcao = 0;
    do {
        printf("ELEICAO MUNICIPAL \n");
        printf("%d - %s \n", c1, nome1);
        printf("%d - %s \n", c2, nome2);
        printf("%d - %s \n", c3, nome3);
        printf(" 0 - Branco \n");
        printf(" 1 - Nulo \n");
        printf("111 - Finalizar a votacao\n");
        scanf("%d", &opcao);

    }while (opcao == 111); ///111 finaliza a urna

    return 0;
}
